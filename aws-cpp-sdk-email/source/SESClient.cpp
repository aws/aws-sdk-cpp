﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/email/SESClient.h>
#include <aws/email/SESEndpoint.h>
#include <aws/email/SESErrorMarshaller.h>
#include <aws/email/model/CloneReceiptRuleSetRequest.h>
#include <aws/email/model/CreateConfigurationSetRequest.h>
#include <aws/email/model/CreateConfigurationSetEventDestinationRequest.h>
#include <aws/email/model/CreateReceiptFilterRequest.h>
#include <aws/email/model/CreateReceiptRuleRequest.h>
#include <aws/email/model/CreateReceiptRuleSetRequest.h>
#include <aws/email/model/DeleteConfigurationSetRequest.h>
#include <aws/email/model/DeleteConfigurationSetEventDestinationRequest.h>
#include <aws/email/model/DeleteIdentityRequest.h>
#include <aws/email/model/DeleteIdentityPolicyRequest.h>
#include <aws/email/model/DeleteReceiptFilterRequest.h>
#include <aws/email/model/DeleteReceiptRuleRequest.h>
#include <aws/email/model/DeleteReceiptRuleSetRequest.h>
#include <aws/email/model/DeleteVerifiedEmailAddressRequest.h>
#include <aws/email/model/DescribeActiveReceiptRuleSetRequest.h>
#include <aws/email/model/DescribeConfigurationSetRequest.h>
#include <aws/email/model/DescribeReceiptRuleRequest.h>
#include <aws/email/model/DescribeReceiptRuleSetRequest.h>
#include <aws/email/model/GetIdentityDkimAttributesRequest.h>
#include <aws/email/model/GetIdentityMailFromDomainAttributesRequest.h>
#include <aws/email/model/GetIdentityNotificationAttributesRequest.h>
#include <aws/email/model/GetIdentityPoliciesRequest.h>
#include <aws/email/model/GetIdentityVerificationAttributesRequest.h>
#include <aws/email/model/GetSendQuotaRequest.h>
#include <aws/email/model/GetSendStatisticsRequest.h>
#include <aws/email/model/ListConfigurationSetsRequest.h>
#include <aws/email/model/ListIdentitiesRequest.h>
#include <aws/email/model/ListIdentityPoliciesRequest.h>
#include <aws/email/model/ListReceiptFiltersRequest.h>
#include <aws/email/model/ListReceiptRuleSetsRequest.h>
#include <aws/email/model/ListVerifiedEmailAddressesRequest.h>
#include <aws/email/model/PutIdentityPolicyRequest.h>
#include <aws/email/model/ReorderReceiptRuleSetRequest.h>
#include <aws/email/model/SendBounceRequest.h>
#include <aws/email/model/SendEmailRequest.h>
#include <aws/email/model/SendRawEmailRequest.h>
#include <aws/email/model/SetActiveReceiptRuleSetRequest.h>
#include <aws/email/model/SetIdentityDkimEnabledRequest.h>
#include <aws/email/model/SetIdentityFeedbackForwardingEnabledRequest.h>
#include <aws/email/model/SetIdentityHeadersInNotificationsEnabledRequest.h>
#include <aws/email/model/SetIdentityMailFromDomainRequest.h>
#include <aws/email/model/SetIdentityNotificationTopicRequest.h>
#include <aws/email/model/SetReceiptRulePositionRequest.h>
#include <aws/email/model/UpdateConfigurationSetEventDestinationRequest.h>
#include <aws/email/model/UpdateReceiptRuleRequest.h>
#include <aws/email/model/VerifyDomainDkimRequest.h>
#include <aws/email/model/VerifyDomainIdentityRequest.h>
#include <aws/email/model/VerifyEmailAddressRequest.h>
#include <aws/email/model/VerifyEmailIdentityRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SES;
using namespace Aws::SES::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Xml;


static const char* SERVICE_NAME = "ses";
static const char* ALLOCATION_TAG = "SESClient";


SESClient::SESClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<SESErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SESClient::SESClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<SESErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SESClient::SESClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<SESErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SESClient::~SESClient()
{
}

void SESClient::init(const ClientConfiguration& config)
{
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty())
  {
    ss << SESEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}

Aws::String SESClient::ConvertRequestToPresignedUrl(const AmazonSerializableWebServiceRequest& requestToConvert, const char* region) const
{
  Aws::StringStream ss;
  ss << "https://" << SESEndpoint::ForRegion(region);
  ss << "?" << requestToConvert.SerializePayload();

  URI uri(ss.str());
  return GeneratePresignedUrl(uri, HttpMethod::HTTP_GET, region, 3600);
}

CloneReceiptRuleSetOutcome SESClient::CloneReceiptRuleSet(const CloneReceiptRuleSetRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CloneReceiptRuleSetOutcome(CloneReceiptRuleSetResult(outcome.GetResult()));
  }
  else
  {
    return CloneReceiptRuleSetOutcome(outcome.GetError());
  }
}

CloneReceiptRuleSetOutcomeCallable SESClient::CloneReceiptRuleSetCallable(const CloneReceiptRuleSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CloneReceiptRuleSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CloneReceiptRuleSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClient::CloneReceiptRuleSetAsync(const CloneReceiptRuleSetRequest& request, const CloneReceiptRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CloneReceiptRuleSetAsyncHelper( request, handler, context ); } );
}

void SESClient::CloneReceiptRuleSetAsyncHelper(const CloneReceiptRuleSetRequest& request, const CloneReceiptRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CloneReceiptRuleSet(request), context);
}

CreateConfigurationSetOutcome SESClient::CreateConfigurationSet(const CreateConfigurationSetRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateConfigurationSetOutcome(CreateConfigurationSetResult(outcome.GetResult()));
  }
  else
  {
    return CreateConfigurationSetOutcome(outcome.GetError());
  }
}

CreateConfigurationSetOutcomeCallable SESClient::CreateConfigurationSetCallable(const CreateConfigurationSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateConfigurationSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateConfigurationSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClient::CreateConfigurationSetAsync(const CreateConfigurationSetRequest& request, const CreateConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateConfigurationSetAsyncHelper( request, handler, context ); } );
}

void SESClient::CreateConfigurationSetAsyncHelper(const CreateConfigurationSetRequest& request, const CreateConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateConfigurationSet(request), context);
}

CreateConfigurationSetEventDestinationOutcome SESClient::CreateConfigurationSetEventDestination(const CreateConfigurationSetEventDestinationRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateConfigurationSetEventDestinationOutcome(CreateConfigurationSetEventDestinationResult(outcome.GetResult()));
  }
  else
  {
    return CreateConfigurationSetEventDestinationOutcome(outcome.GetError());
  }
}

CreateConfigurationSetEventDestinationOutcomeCallable SESClient::CreateConfigurationSetEventDestinationCallable(const CreateConfigurationSetEventDestinationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateConfigurationSetEventDestinationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateConfigurationSetEventDestination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClient::CreateConfigurationSetEventDestinationAsync(const CreateConfigurationSetEventDestinationRequest& request, const CreateConfigurationSetEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateConfigurationSetEventDestinationAsyncHelper( request, handler, context ); } );
}

void SESClient::CreateConfigurationSetEventDestinationAsyncHelper(const CreateConfigurationSetEventDestinationRequest& request, const CreateConfigurationSetEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateConfigurationSetEventDestination(request), context);
}

CreateReceiptFilterOutcome SESClient::CreateReceiptFilter(const CreateReceiptFilterRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateReceiptFilterOutcome(CreateReceiptFilterResult(outcome.GetResult()));
  }
  else
  {
    return CreateReceiptFilterOutcome(outcome.GetError());
  }
}

CreateReceiptFilterOutcomeCallable SESClient::CreateReceiptFilterCallable(const CreateReceiptFilterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateReceiptFilterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateReceiptFilter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClient::CreateReceiptFilterAsync(const CreateReceiptFilterRequest& request, const CreateReceiptFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateReceiptFilterAsyncHelper( request, handler, context ); } );
}

void SESClient::CreateReceiptFilterAsyncHelper(const CreateReceiptFilterRequest& request, const CreateReceiptFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateReceiptFilter(request), context);
}

CreateReceiptRuleOutcome SESClient::CreateReceiptRule(const CreateReceiptRuleRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateReceiptRuleOutcome(CreateReceiptRuleResult(outcome.GetResult()));
  }
  else
  {
    return CreateReceiptRuleOutcome(outcome.GetError());
  }
}

CreateReceiptRuleOutcomeCallable SESClient::CreateReceiptRuleCallable(const CreateReceiptRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateReceiptRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateReceiptRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClient::CreateReceiptRuleAsync(const CreateReceiptRuleRequest& request, const CreateReceiptRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateReceiptRuleAsyncHelper( request, handler, context ); } );
}

void SESClient::CreateReceiptRuleAsyncHelper(const CreateReceiptRuleRequest& request, const CreateReceiptRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateReceiptRule(request), context);
}

CreateReceiptRuleSetOutcome SESClient::CreateReceiptRuleSet(const CreateReceiptRuleSetRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateReceiptRuleSetOutcome(CreateReceiptRuleSetResult(outcome.GetResult()));
  }
  else
  {
    return CreateReceiptRuleSetOutcome(outcome.GetError());
  }
}

CreateReceiptRuleSetOutcomeCallable SESClient::CreateReceiptRuleSetCallable(const CreateReceiptRuleSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateReceiptRuleSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateReceiptRuleSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClient::CreateReceiptRuleSetAsync(const CreateReceiptRuleSetRequest& request, const CreateReceiptRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateReceiptRuleSetAsyncHelper( request, handler, context ); } );
}

void SESClient::CreateReceiptRuleSetAsyncHelper(const CreateReceiptRuleSetRequest& request, const CreateReceiptRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateReceiptRuleSet(request), context);
}

DeleteConfigurationSetOutcome SESClient::DeleteConfigurationSet(const DeleteConfigurationSetRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteConfigurationSetOutcome(DeleteConfigurationSetResult(outcome.GetResult()));
  }
  else
  {
    return DeleteConfigurationSetOutcome(outcome.GetError());
  }
}

DeleteConfigurationSetOutcomeCallable SESClient::DeleteConfigurationSetCallable(const DeleteConfigurationSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteConfigurationSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteConfigurationSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClient::DeleteConfigurationSetAsync(const DeleteConfigurationSetRequest& request, const DeleteConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteConfigurationSetAsyncHelper( request, handler, context ); } );
}

void SESClient::DeleteConfigurationSetAsyncHelper(const DeleteConfigurationSetRequest& request, const DeleteConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteConfigurationSet(request), context);
}

DeleteConfigurationSetEventDestinationOutcome SESClient::DeleteConfigurationSetEventDestination(const DeleteConfigurationSetEventDestinationRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteConfigurationSetEventDestinationOutcome(DeleteConfigurationSetEventDestinationResult(outcome.GetResult()));
  }
  else
  {
    return DeleteConfigurationSetEventDestinationOutcome(outcome.GetError());
  }
}

DeleteConfigurationSetEventDestinationOutcomeCallable SESClient::DeleteConfigurationSetEventDestinationCallable(const DeleteConfigurationSetEventDestinationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteConfigurationSetEventDestinationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteConfigurationSetEventDestination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClient::DeleteConfigurationSetEventDestinationAsync(const DeleteConfigurationSetEventDestinationRequest& request, const DeleteConfigurationSetEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteConfigurationSetEventDestinationAsyncHelper( request, handler, context ); } );
}

void SESClient::DeleteConfigurationSetEventDestinationAsyncHelper(const DeleteConfigurationSetEventDestinationRequest& request, const DeleteConfigurationSetEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteConfigurationSetEventDestination(request), context);
}

DeleteIdentityOutcome SESClient::DeleteIdentity(const DeleteIdentityRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteIdentityOutcome(DeleteIdentityResult(outcome.GetResult()));
  }
  else
  {
    return DeleteIdentityOutcome(outcome.GetError());
  }
}

DeleteIdentityOutcomeCallable SESClient::DeleteIdentityCallable(const DeleteIdentityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteIdentityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteIdentity(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClient::DeleteIdentityAsync(const DeleteIdentityRequest& request, const DeleteIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteIdentityAsyncHelper( request, handler, context ); } );
}

void SESClient::DeleteIdentityAsyncHelper(const DeleteIdentityRequest& request, const DeleteIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteIdentity(request), context);
}

DeleteIdentityPolicyOutcome SESClient::DeleteIdentityPolicy(const DeleteIdentityPolicyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteIdentityPolicyOutcome(DeleteIdentityPolicyResult(outcome.GetResult()));
  }
  else
  {
    return DeleteIdentityPolicyOutcome(outcome.GetError());
  }
}

DeleteIdentityPolicyOutcomeCallable SESClient::DeleteIdentityPolicyCallable(const DeleteIdentityPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteIdentityPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteIdentityPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClient::DeleteIdentityPolicyAsync(const DeleteIdentityPolicyRequest& request, const DeleteIdentityPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteIdentityPolicyAsyncHelper( request, handler, context ); } );
}

void SESClient::DeleteIdentityPolicyAsyncHelper(const DeleteIdentityPolicyRequest& request, const DeleteIdentityPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteIdentityPolicy(request), context);
}

DeleteReceiptFilterOutcome SESClient::DeleteReceiptFilter(const DeleteReceiptFilterRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteReceiptFilterOutcome(DeleteReceiptFilterResult(outcome.GetResult()));
  }
  else
  {
    return DeleteReceiptFilterOutcome(outcome.GetError());
  }
}

DeleteReceiptFilterOutcomeCallable SESClient::DeleteReceiptFilterCallable(const DeleteReceiptFilterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteReceiptFilterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteReceiptFilter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClient::DeleteReceiptFilterAsync(const DeleteReceiptFilterRequest& request, const DeleteReceiptFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteReceiptFilterAsyncHelper( request, handler, context ); } );
}

void SESClient::DeleteReceiptFilterAsyncHelper(const DeleteReceiptFilterRequest& request, const DeleteReceiptFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteReceiptFilter(request), context);
}

DeleteReceiptRuleOutcome SESClient::DeleteReceiptRule(const DeleteReceiptRuleRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteReceiptRuleOutcome(DeleteReceiptRuleResult(outcome.GetResult()));
  }
  else
  {
    return DeleteReceiptRuleOutcome(outcome.GetError());
  }
}

DeleteReceiptRuleOutcomeCallable SESClient::DeleteReceiptRuleCallable(const DeleteReceiptRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteReceiptRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteReceiptRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClient::DeleteReceiptRuleAsync(const DeleteReceiptRuleRequest& request, const DeleteReceiptRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteReceiptRuleAsyncHelper( request, handler, context ); } );
}

void SESClient::DeleteReceiptRuleAsyncHelper(const DeleteReceiptRuleRequest& request, const DeleteReceiptRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteReceiptRule(request), context);
}

DeleteReceiptRuleSetOutcome SESClient::DeleteReceiptRuleSet(const DeleteReceiptRuleSetRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteReceiptRuleSetOutcome(DeleteReceiptRuleSetResult(outcome.GetResult()));
  }
  else
  {
    return DeleteReceiptRuleSetOutcome(outcome.GetError());
  }
}

DeleteReceiptRuleSetOutcomeCallable SESClient::DeleteReceiptRuleSetCallable(const DeleteReceiptRuleSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteReceiptRuleSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteReceiptRuleSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClient::DeleteReceiptRuleSetAsync(const DeleteReceiptRuleSetRequest& request, const DeleteReceiptRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteReceiptRuleSetAsyncHelper( request, handler, context ); } );
}

void SESClient::DeleteReceiptRuleSetAsyncHelper(const DeleteReceiptRuleSetRequest& request, const DeleteReceiptRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteReceiptRuleSet(request), context);
}

DeleteVerifiedEmailAddressOutcome SESClient::DeleteVerifiedEmailAddress(const DeleteVerifiedEmailAddressRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteVerifiedEmailAddressOutcome(NoResult());
  }
  else
  {
    return DeleteVerifiedEmailAddressOutcome(outcome.GetError());
  }
}

DeleteVerifiedEmailAddressOutcomeCallable SESClient::DeleteVerifiedEmailAddressCallable(const DeleteVerifiedEmailAddressRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVerifiedEmailAddressOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVerifiedEmailAddress(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClient::DeleteVerifiedEmailAddressAsync(const DeleteVerifiedEmailAddressRequest& request, const DeleteVerifiedEmailAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteVerifiedEmailAddressAsyncHelper( request, handler, context ); } );
}

void SESClient::DeleteVerifiedEmailAddressAsyncHelper(const DeleteVerifiedEmailAddressRequest& request, const DeleteVerifiedEmailAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteVerifiedEmailAddress(request), context);
}

DescribeActiveReceiptRuleSetOutcome SESClient::DescribeActiveReceiptRuleSet(const DescribeActiveReceiptRuleSetRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeActiveReceiptRuleSetOutcome(DescribeActiveReceiptRuleSetResult(outcome.GetResult()));
  }
  else
  {
    return DescribeActiveReceiptRuleSetOutcome(outcome.GetError());
  }
}

DescribeActiveReceiptRuleSetOutcomeCallable SESClient::DescribeActiveReceiptRuleSetCallable(const DescribeActiveReceiptRuleSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeActiveReceiptRuleSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeActiveReceiptRuleSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClient::DescribeActiveReceiptRuleSetAsync(const DescribeActiveReceiptRuleSetRequest& request, const DescribeActiveReceiptRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeActiveReceiptRuleSetAsyncHelper( request, handler, context ); } );
}

void SESClient::DescribeActiveReceiptRuleSetAsyncHelper(const DescribeActiveReceiptRuleSetRequest& request, const DescribeActiveReceiptRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeActiveReceiptRuleSet(request), context);
}

DescribeConfigurationSetOutcome SESClient::DescribeConfigurationSet(const DescribeConfigurationSetRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeConfigurationSetOutcome(DescribeConfigurationSetResult(outcome.GetResult()));
  }
  else
  {
    return DescribeConfigurationSetOutcome(outcome.GetError());
  }
}

DescribeConfigurationSetOutcomeCallable SESClient::DescribeConfigurationSetCallable(const DescribeConfigurationSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeConfigurationSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeConfigurationSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClient::DescribeConfigurationSetAsync(const DescribeConfigurationSetRequest& request, const DescribeConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeConfigurationSetAsyncHelper( request, handler, context ); } );
}

void SESClient::DescribeConfigurationSetAsyncHelper(const DescribeConfigurationSetRequest& request, const DescribeConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeConfigurationSet(request), context);
}

DescribeReceiptRuleOutcome SESClient::DescribeReceiptRule(const DescribeReceiptRuleRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeReceiptRuleOutcome(DescribeReceiptRuleResult(outcome.GetResult()));
  }
  else
  {
    return DescribeReceiptRuleOutcome(outcome.GetError());
  }
}

DescribeReceiptRuleOutcomeCallable SESClient::DescribeReceiptRuleCallable(const DescribeReceiptRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeReceiptRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeReceiptRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClient::DescribeReceiptRuleAsync(const DescribeReceiptRuleRequest& request, const DescribeReceiptRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeReceiptRuleAsyncHelper( request, handler, context ); } );
}

void SESClient::DescribeReceiptRuleAsyncHelper(const DescribeReceiptRuleRequest& request, const DescribeReceiptRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeReceiptRule(request), context);
}

DescribeReceiptRuleSetOutcome SESClient::DescribeReceiptRuleSet(const DescribeReceiptRuleSetRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeReceiptRuleSetOutcome(DescribeReceiptRuleSetResult(outcome.GetResult()));
  }
  else
  {
    return DescribeReceiptRuleSetOutcome(outcome.GetError());
  }
}

DescribeReceiptRuleSetOutcomeCallable SESClient::DescribeReceiptRuleSetCallable(const DescribeReceiptRuleSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeReceiptRuleSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeReceiptRuleSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClient::DescribeReceiptRuleSetAsync(const DescribeReceiptRuleSetRequest& request, const DescribeReceiptRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeReceiptRuleSetAsyncHelper( request, handler, context ); } );
}

void SESClient::DescribeReceiptRuleSetAsyncHelper(const DescribeReceiptRuleSetRequest& request, const DescribeReceiptRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeReceiptRuleSet(request), context);
}

GetIdentityDkimAttributesOutcome SESClient::GetIdentityDkimAttributes(const GetIdentityDkimAttributesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetIdentityDkimAttributesOutcome(GetIdentityDkimAttributesResult(outcome.GetResult()));
  }
  else
  {
    return GetIdentityDkimAttributesOutcome(outcome.GetError());
  }
}

GetIdentityDkimAttributesOutcomeCallable SESClient::GetIdentityDkimAttributesCallable(const GetIdentityDkimAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetIdentityDkimAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetIdentityDkimAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClient::GetIdentityDkimAttributesAsync(const GetIdentityDkimAttributesRequest& request, const GetIdentityDkimAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetIdentityDkimAttributesAsyncHelper( request, handler, context ); } );
}

void SESClient::GetIdentityDkimAttributesAsyncHelper(const GetIdentityDkimAttributesRequest& request, const GetIdentityDkimAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetIdentityDkimAttributes(request), context);
}

GetIdentityMailFromDomainAttributesOutcome SESClient::GetIdentityMailFromDomainAttributes(const GetIdentityMailFromDomainAttributesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetIdentityMailFromDomainAttributesOutcome(GetIdentityMailFromDomainAttributesResult(outcome.GetResult()));
  }
  else
  {
    return GetIdentityMailFromDomainAttributesOutcome(outcome.GetError());
  }
}

GetIdentityMailFromDomainAttributesOutcomeCallable SESClient::GetIdentityMailFromDomainAttributesCallable(const GetIdentityMailFromDomainAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetIdentityMailFromDomainAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetIdentityMailFromDomainAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClient::GetIdentityMailFromDomainAttributesAsync(const GetIdentityMailFromDomainAttributesRequest& request, const GetIdentityMailFromDomainAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetIdentityMailFromDomainAttributesAsyncHelper( request, handler, context ); } );
}

void SESClient::GetIdentityMailFromDomainAttributesAsyncHelper(const GetIdentityMailFromDomainAttributesRequest& request, const GetIdentityMailFromDomainAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetIdentityMailFromDomainAttributes(request), context);
}

GetIdentityNotificationAttributesOutcome SESClient::GetIdentityNotificationAttributes(const GetIdentityNotificationAttributesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetIdentityNotificationAttributesOutcome(GetIdentityNotificationAttributesResult(outcome.GetResult()));
  }
  else
  {
    return GetIdentityNotificationAttributesOutcome(outcome.GetError());
  }
}

GetIdentityNotificationAttributesOutcomeCallable SESClient::GetIdentityNotificationAttributesCallable(const GetIdentityNotificationAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetIdentityNotificationAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetIdentityNotificationAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClient::GetIdentityNotificationAttributesAsync(const GetIdentityNotificationAttributesRequest& request, const GetIdentityNotificationAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetIdentityNotificationAttributesAsyncHelper( request, handler, context ); } );
}

void SESClient::GetIdentityNotificationAttributesAsyncHelper(const GetIdentityNotificationAttributesRequest& request, const GetIdentityNotificationAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetIdentityNotificationAttributes(request), context);
}

GetIdentityPoliciesOutcome SESClient::GetIdentityPolicies(const GetIdentityPoliciesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetIdentityPoliciesOutcome(GetIdentityPoliciesResult(outcome.GetResult()));
  }
  else
  {
    return GetIdentityPoliciesOutcome(outcome.GetError());
  }
}

GetIdentityPoliciesOutcomeCallable SESClient::GetIdentityPoliciesCallable(const GetIdentityPoliciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetIdentityPoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetIdentityPolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClient::GetIdentityPoliciesAsync(const GetIdentityPoliciesRequest& request, const GetIdentityPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetIdentityPoliciesAsyncHelper( request, handler, context ); } );
}

void SESClient::GetIdentityPoliciesAsyncHelper(const GetIdentityPoliciesRequest& request, const GetIdentityPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetIdentityPolicies(request), context);
}

GetIdentityVerificationAttributesOutcome SESClient::GetIdentityVerificationAttributes(const GetIdentityVerificationAttributesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetIdentityVerificationAttributesOutcome(GetIdentityVerificationAttributesResult(outcome.GetResult()));
  }
  else
  {
    return GetIdentityVerificationAttributesOutcome(outcome.GetError());
  }
}

GetIdentityVerificationAttributesOutcomeCallable SESClient::GetIdentityVerificationAttributesCallable(const GetIdentityVerificationAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetIdentityVerificationAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetIdentityVerificationAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClient::GetIdentityVerificationAttributesAsync(const GetIdentityVerificationAttributesRequest& request, const GetIdentityVerificationAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetIdentityVerificationAttributesAsyncHelper( request, handler, context ); } );
}

void SESClient::GetIdentityVerificationAttributesAsyncHelper(const GetIdentityVerificationAttributesRequest& request, const GetIdentityVerificationAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetIdentityVerificationAttributes(request), context);
}

GetSendQuotaOutcome SESClient::GetSendQuota(const GetSendQuotaRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetSendQuotaOutcome(GetSendQuotaResult(outcome.GetResult()));
  }
  else
  {
    return GetSendQuotaOutcome(outcome.GetError());
  }
}

GetSendQuotaOutcomeCallable SESClient::GetSendQuotaCallable(const GetSendQuotaRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSendQuotaOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSendQuota(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClient::GetSendQuotaAsync(const GetSendQuotaRequest& request, const GetSendQuotaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSendQuotaAsyncHelper( request, handler, context ); } );
}

void SESClient::GetSendQuotaAsyncHelper(const GetSendQuotaRequest& request, const GetSendQuotaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSendQuota(request), context);
}

GetSendStatisticsOutcome SESClient::GetSendStatistics(const GetSendStatisticsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetSendStatisticsOutcome(GetSendStatisticsResult(outcome.GetResult()));
  }
  else
  {
    return GetSendStatisticsOutcome(outcome.GetError());
  }
}

GetSendStatisticsOutcomeCallable SESClient::GetSendStatisticsCallable(const GetSendStatisticsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSendStatisticsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSendStatistics(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClient::GetSendStatisticsAsync(const GetSendStatisticsRequest& request, const GetSendStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSendStatisticsAsyncHelper( request, handler, context ); } );
}

void SESClient::GetSendStatisticsAsyncHelper(const GetSendStatisticsRequest& request, const GetSendStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSendStatistics(request), context);
}

ListConfigurationSetsOutcome SESClient::ListConfigurationSets(const ListConfigurationSetsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListConfigurationSetsOutcome(ListConfigurationSetsResult(outcome.GetResult()));
  }
  else
  {
    return ListConfigurationSetsOutcome(outcome.GetError());
  }
}

ListConfigurationSetsOutcomeCallable SESClient::ListConfigurationSetsCallable(const ListConfigurationSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListConfigurationSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListConfigurationSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClient::ListConfigurationSetsAsync(const ListConfigurationSetsRequest& request, const ListConfigurationSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListConfigurationSetsAsyncHelper( request, handler, context ); } );
}

void SESClient::ListConfigurationSetsAsyncHelper(const ListConfigurationSetsRequest& request, const ListConfigurationSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListConfigurationSets(request), context);
}

ListIdentitiesOutcome SESClient::ListIdentities(const ListIdentitiesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListIdentitiesOutcome(ListIdentitiesResult(outcome.GetResult()));
  }
  else
  {
    return ListIdentitiesOutcome(outcome.GetError());
  }
}

ListIdentitiesOutcomeCallable SESClient::ListIdentitiesCallable(const ListIdentitiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListIdentitiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListIdentities(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClient::ListIdentitiesAsync(const ListIdentitiesRequest& request, const ListIdentitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListIdentitiesAsyncHelper( request, handler, context ); } );
}

void SESClient::ListIdentitiesAsyncHelper(const ListIdentitiesRequest& request, const ListIdentitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListIdentities(request), context);
}

ListIdentityPoliciesOutcome SESClient::ListIdentityPolicies(const ListIdentityPoliciesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListIdentityPoliciesOutcome(ListIdentityPoliciesResult(outcome.GetResult()));
  }
  else
  {
    return ListIdentityPoliciesOutcome(outcome.GetError());
  }
}

ListIdentityPoliciesOutcomeCallable SESClient::ListIdentityPoliciesCallable(const ListIdentityPoliciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListIdentityPoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListIdentityPolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClient::ListIdentityPoliciesAsync(const ListIdentityPoliciesRequest& request, const ListIdentityPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListIdentityPoliciesAsyncHelper( request, handler, context ); } );
}

void SESClient::ListIdentityPoliciesAsyncHelper(const ListIdentityPoliciesRequest& request, const ListIdentityPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListIdentityPolicies(request), context);
}

ListReceiptFiltersOutcome SESClient::ListReceiptFilters(const ListReceiptFiltersRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListReceiptFiltersOutcome(ListReceiptFiltersResult(outcome.GetResult()));
  }
  else
  {
    return ListReceiptFiltersOutcome(outcome.GetError());
  }
}

ListReceiptFiltersOutcomeCallable SESClient::ListReceiptFiltersCallable(const ListReceiptFiltersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListReceiptFiltersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListReceiptFilters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClient::ListReceiptFiltersAsync(const ListReceiptFiltersRequest& request, const ListReceiptFiltersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListReceiptFiltersAsyncHelper( request, handler, context ); } );
}

void SESClient::ListReceiptFiltersAsyncHelper(const ListReceiptFiltersRequest& request, const ListReceiptFiltersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListReceiptFilters(request), context);
}

ListReceiptRuleSetsOutcome SESClient::ListReceiptRuleSets(const ListReceiptRuleSetsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListReceiptRuleSetsOutcome(ListReceiptRuleSetsResult(outcome.GetResult()));
  }
  else
  {
    return ListReceiptRuleSetsOutcome(outcome.GetError());
  }
}

ListReceiptRuleSetsOutcomeCallable SESClient::ListReceiptRuleSetsCallable(const ListReceiptRuleSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListReceiptRuleSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListReceiptRuleSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClient::ListReceiptRuleSetsAsync(const ListReceiptRuleSetsRequest& request, const ListReceiptRuleSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListReceiptRuleSetsAsyncHelper( request, handler, context ); } );
}

void SESClient::ListReceiptRuleSetsAsyncHelper(const ListReceiptRuleSetsRequest& request, const ListReceiptRuleSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListReceiptRuleSets(request), context);
}

ListVerifiedEmailAddressesOutcome SESClient::ListVerifiedEmailAddresses(const ListVerifiedEmailAddressesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListVerifiedEmailAddressesOutcome(ListVerifiedEmailAddressesResult(outcome.GetResult()));
  }
  else
  {
    return ListVerifiedEmailAddressesOutcome(outcome.GetError());
  }
}

ListVerifiedEmailAddressesOutcomeCallable SESClient::ListVerifiedEmailAddressesCallable(const ListVerifiedEmailAddressesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListVerifiedEmailAddressesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListVerifiedEmailAddresses(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClient::ListVerifiedEmailAddressesAsync(const ListVerifiedEmailAddressesRequest& request, const ListVerifiedEmailAddressesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListVerifiedEmailAddressesAsyncHelper( request, handler, context ); } );
}

void SESClient::ListVerifiedEmailAddressesAsyncHelper(const ListVerifiedEmailAddressesRequest& request, const ListVerifiedEmailAddressesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListVerifiedEmailAddresses(request), context);
}

PutIdentityPolicyOutcome SESClient::PutIdentityPolicy(const PutIdentityPolicyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return PutIdentityPolicyOutcome(PutIdentityPolicyResult(outcome.GetResult()));
  }
  else
  {
    return PutIdentityPolicyOutcome(outcome.GetError());
  }
}

PutIdentityPolicyOutcomeCallable SESClient::PutIdentityPolicyCallable(const PutIdentityPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutIdentityPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutIdentityPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClient::PutIdentityPolicyAsync(const PutIdentityPolicyRequest& request, const PutIdentityPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutIdentityPolicyAsyncHelper( request, handler, context ); } );
}

void SESClient::PutIdentityPolicyAsyncHelper(const PutIdentityPolicyRequest& request, const PutIdentityPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutIdentityPolicy(request), context);
}

ReorderReceiptRuleSetOutcome SESClient::ReorderReceiptRuleSet(const ReorderReceiptRuleSetRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ReorderReceiptRuleSetOutcome(ReorderReceiptRuleSetResult(outcome.GetResult()));
  }
  else
  {
    return ReorderReceiptRuleSetOutcome(outcome.GetError());
  }
}

ReorderReceiptRuleSetOutcomeCallable SESClient::ReorderReceiptRuleSetCallable(const ReorderReceiptRuleSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ReorderReceiptRuleSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ReorderReceiptRuleSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClient::ReorderReceiptRuleSetAsync(const ReorderReceiptRuleSetRequest& request, const ReorderReceiptRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ReorderReceiptRuleSetAsyncHelper( request, handler, context ); } );
}

void SESClient::ReorderReceiptRuleSetAsyncHelper(const ReorderReceiptRuleSetRequest& request, const ReorderReceiptRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ReorderReceiptRuleSet(request), context);
}

SendBounceOutcome SESClient::SendBounce(const SendBounceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SendBounceOutcome(SendBounceResult(outcome.GetResult()));
  }
  else
  {
    return SendBounceOutcome(outcome.GetError());
  }
}

SendBounceOutcomeCallable SESClient::SendBounceCallable(const SendBounceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SendBounceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SendBounce(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClient::SendBounceAsync(const SendBounceRequest& request, const SendBounceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SendBounceAsyncHelper( request, handler, context ); } );
}

void SESClient::SendBounceAsyncHelper(const SendBounceRequest& request, const SendBounceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SendBounce(request), context);
}

SendEmailOutcome SESClient::SendEmail(const SendEmailRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SendEmailOutcome(SendEmailResult(outcome.GetResult()));
  }
  else
  {
    return SendEmailOutcome(outcome.GetError());
  }
}

SendEmailOutcomeCallable SESClient::SendEmailCallable(const SendEmailRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SendEmailOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SendEmail(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClient::SendEmailAsync(const SendEmailRequest& request, const SendEmailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SendEmailAsyncHelper( request, handler, context ); } );
}

void SESClient::SendEmailAsyncHelper(const SendEmailRequest& request, const SendEmailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SendEmail(request), context);
}

SendRawEmailOutcome SESClient::SendRawEmail(const SendRawEmailRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SendRawEmailOutcome(SendRawEmailResult(outcome.GetResult()));
  }
  else
  {
    return SendRawEmailOutcome(outcome.GetError());
  }
}

SendRawEmailOutcomeCallable SESClient::SendRawEmailCallable(const SendRawEmailRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SendRawEmailOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SendRawEmail(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClient::SendRawEmailAsync(const SendRawEmailRequest& request, const SendRawEmailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SendRawEmailAsyncHelper( request, handler, context ); } );
}

void SESClient::SendRawEmailAsyncHelper(const SendRawEmailRequest& request, const SendRawEmailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SendRawEmail(request), context);
}

SetActiveReceiptRuleSetOutcome SESClient::SetActiveReceiptRuleSet(const SetActiveReceiptRuleSetRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SetActiveReceiptRuleSetOutcome(SetActiveReceiptRuleSetResult(outcome.GetResult()));
  }
  else
  {
    return SetActiveReceiptRuleSetOutcome(outcome.GetError());
  }
}

SetActiveReceiptRuleSetOutcomeCallable SESClient::SetActiveReceiptRuleSetCallable(const SetActiveReceiptRuleSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetActiveReceiptRuleSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetActiveReceiptRuleSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClient::SetActiveReceiptRuleSetAsync(const SetActiveReceiptRuleSetRequest& request, const SetActiveReceiptRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SetActiveReceiptRuleSetAsyncHelper( request, handler, context ); } );
}

void SESClient::SetActiveReceiptRuleSetAsyncHelper(const SetActiveReceiptRuleSetRequest& request, const SetActiveReceiptRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetActiveReceiptRuleSet(request), context);
}

SetIdentityDkimEnabledOutcome SESClient::SetIdentityDkimEnabled(const SetIdentityDkimEnabledRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SetIdentityDkimEnabledOutcome(SetIdentityDkimEnabledResult(outcome.GetResult()));
  }
  else
  {
    return SetIdentityDkimEnabledOutcome(outcome.GetError());
  }
}

SetIdentityDkimEnabledOutcomeCallable SESClient::SetIdentityDkimEnabledCallable(const SetIdentityDkimEnabledRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetIdentityDkimEnabledOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetIdentityDkimEnabled(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClient::SetIdentityDkimEnabledAsync(const SetIdentityDkimEnabledRequest& request, const SetIdentityDkimEnabledResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SetIdentityDkimEnabledAsyncHelper( request, handler, context ); } );
}

void SESClient::SetIdentityDkimEnabledAsyncHelper(const SetIdentityDkimEnabledRequest& request, const SetIdentityDkimEnabledResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetIdentityDkimEnabled(request), context);
}

SetIdentityFeedbackForwardingEnabledOutcome SESClient::SetIdentityFeedbackForwardingEnabled(const SetIdentityFeedbackForwardingEnabledRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SetIdentityFeedbackForwardingEnabledOutcome(SetIdentityFeedbackForwardingEnabledResult(outcome.GetResult()));
  }
  else
  {
    return SetIdentityFeedbackForwardingEnabledOutcome(outcome.GetError());
  }
}

SetIdentityFeedbackForwardingEnabledOutcomeCallable SESClient::SetIdentityFeedbackForwardingEnabledCallable(const SetIdentityFeedbackForwardingEnabledRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetIdentityFeedbackForwardingEnabledOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetIdentityFeedbackForwardingEnabled(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClient::SetIdentityFeedbackForwardingEnabledAsync(const SetIdentityFeedbackForwardingEnabledRequest& request, const SetIdentityFeedbackForwardingEnabledResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SetIdentityFeedbackForwardingEnabledAsyncHelper( request, handler, context ); } );
}

void SESClient::SetIdentityFeedbackForwardingEnabledAsyncHelper(const SetIdentityFeedbackForwardingEnabledRequest& request, const SetIdentityFeedbackForwardingEnabledResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetIdentityFeedbackForwardingEnabled(request), context);
}

SetIdentityHeadersInNotificationsEnabledOutcome SESClient::SetIdentityHeadersInNotificationsEnabled(const SetIdentityHeadersInNotificationsEnabledRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SetIdentityHeadersInNotificationsEnabledOutcome(SetIdentityHeadersInNotificationsEnabledResult(outcome.GetResult()));
  }
  else
  {
    return SetIdentityHeadersInNotificationsEnabledOutcome(outcome.GetError());
  }
}

SetIdentityHeadersInNotificationsEnabledOutcomeCallable SESClient::SetIdentityHeadersInNotificationsEnabledCallable(const SetIdentityHeadersInNotificationsEnabledRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetIdentityHeadersInNotificationsEnabledOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetIdentityHeadersInNotificationsEnabled(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClient::SetIdentityHeadersInNotificationsEnabledAsync(const SetIdentityHeadersInNotificationsEnabledRequest& request, const SetIdentityHeadersInNotificationsEnabledResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SetIdentityHeadersInNotificationsEnabledAsyncHelper( request, handler, context ); } );
}

void SESClient::SetIdentityHeadersInNotificationsEnabledAsyncHelper(const SetIdentityHeadersInNotificationsEnabledRequest& request, const SetIdentityHeadersInNotificationsEnabledResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetIdentityHeadersInNotificationsEnabled(request), context);
}

SetIdentityMailFromDomainOutcome SESClient::SetIdentityMailFromDomain(const SetIdentityMailFromDomainRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SetIdentityMailFromDomainOutcome(SetIdentityMailFromDomainResult(outcome.GetResult()));
  }
  else
  {
    return SetIdentityMailFromDomainOutcome(outcome.GetError());
  }
}

SetIdentityMailFromDomainOutcomeCallable SESClient::SetIdentityMailFromDomainCallable(const SetIdentityMailFromDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetIdentityMailFromDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetIdentityMailFromDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClient::SetIdentityMailFromDomainAsync(const SetIdentityMailFromDomainRequest& request, const SetIdentityMailFromDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SetIdentityMailFromDomainAsyncHelper( request, handler, context ); } );
}

void SESClient::SetIdentityMailFromDomainAsyncHelper(const SetIdentityMailFromDomainRequest& request, const SetIdentityMailFromDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetIdentityMailFromDomain(request), context);
}

SetIdentityNotificationTopicOutcome SESClient::SetIdentityNotificationTopic(const SetIdentityNotificationTopicRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SetIdentityNotificationTopicOutcome(SetIdentityNotificationTopicResult(outcome.GetResult()));
  }
  else
  {
    return SetIdentityNotificationTopicOutcome(outcome.GetError());
  }
}

SetIdentityNotificationTopicOutcomeCallable SESClient::SetIdentityNotificationTopicCallable(const SetIdentityNotificationTopicRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetIdentityNotificationTopicOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetIdentityNotificationTopic(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClient::SetIdentityNotificationTopicAsync(const SetIdentityNotificationTopicRequest& request, const SetIdentityNotificationTopicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SetIdentityNotificationTopicAsyncHelper( request, handler, context ); } );
}

void SESClient::SetIdentityNotificationTopicAsyncHelper(const SetIdentityNotificationTopicRequest& request, const SetIdentityNotificationTopicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetIdentityNotificationTopic(request), context);
}

SetReceiptRulePositionOutcome SESClient::SetReceiptRulePosition(const SetReceiptRulePositionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SetReceiptRulePositionOutcome(SetReceiptRulePositionResult(outcome.GetResult()));
  }
  else
  {
    return SetReceiptRulePositionOutcome(outcome.GetError());
  }
}

SetReceiptRulePositionOutcomeCallable SESClient::SetReceiptRulePositionCallable(const SetReceiptRulePositionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetReceiptRulePositionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetReceiptRulePosition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClient::SetReceiptRulePositionAsync(const SetReceiptRulePositionRequest& request, const SetReceiptRulePositionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SetReceiptRulePositionAsyncHelper( request, handler, context ); } );
}

void SESClient::SetReceiptRulePositionAsyncHelper(const SetReceiptRulePositionRequest& request, const SetReceiptRulePositionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetReceiptRulePosition(request), context);
}

UpdateConfigurationSetEventDestinationOutcome SESClient::UpdateConfigurationSetEventDestination(const UpdateConfigurationSetEventDestinationRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateConfigurationSetEventDestinationOutcome(UpdateConfigurationSetEventDestinationResult(outcome.GetResult()));
  }
  else
  {
    return UpdateConfigurationSetEventDestinationOutcome(outcome.GetError());
  }
}

UpdateConfigurationSetEventDestinationOutcomeCallable SESClient::UpdateConfigurationSetEventDestinationCallable(const UpdateConfigurationSetEventDestinationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateConfigurationSetEventDestinationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateConfigurationSetEventDestination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClient::UpdateConfigurationSetEventDestinationAsync(const UpdateConfigurationSetEventDestinationRequest& request, const UpdateConfigurationSetEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateConfigurationSetEventDestinationAsyncHelper( request, handler, context ); } );
}

void SESClient::UpdateConfigurationSetEventDestinationAsyncHelper(const UpdateConfigurationSetEventDestinationRequest& request, const UpdateConfigurationSetEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateConfigurationSetEventDestination(request), context);
}

UpdateReceiptRuleOutcome SESClient::UpdateReceiptRule(const UpdateReceiptRuleRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateReceiptRuleOutcome(UpdateReceiptRuleResult(outcome.GetResult()));
  }
  else
  {
    return UpdateReceiptRuleOutcome(outcome.GetError());
  }
}

UpdateReceiptRuleOutcomeCallable SESClient::UpdateReceiptRuleCallable(const UpdateReceiptRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateReceiptRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateReceiptRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClient::UpdateReceiptRuleAsync(const UpdateReceiptRuleRequest& request, const UpdateReceiptRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateReceiptRuleAsyncHelper( request, handler, context ); } );
}

void SESClient::UpdateReceiptRuleAsyncHelper(const UpdateReceiptRuleRequest& request, const UpdateReceiptRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateReceiptRule(request), context);
}

VerifyDomainDkimOutcome SESClient::VerifyDomainDkim(const VerifyDomainDkimRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return VerifyDomainDkimOutcome(VerifyDomainDkimResult(outcome.GetResult()));
  }
  else
  {
    return VerifyDomainDkimOutcome(outcome.GetError());
  }
}

VerifyDomainDkimOutcomeCallable SESClient::VerifyDomainDkimCallable(const VerifyDomainDkimRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< VerifyDomainDkimOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->VerifyDomainDkim(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClient::VerifyDomainDkimAsync(const VerifyDomainDkimRequest& request, const VerifyDomainDkimResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->VerifyDomainDkimAsyncHelper( request, handler, context ); } );
}

void SESClient::VerifyDomainDkimAsyncHelper(const VerifyDomainDkimRequest& request, const VerifyDomainDkimResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, VerifyDomainDkim(request), context);
}

VerifyDomainIdentityOutcome SESClient::VerifyDomainIdentity(const VerifyDomainIdentityRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return VerifyDomainIdentityOutcome(VerifyDomainIdentityResult(outcome.GetResult()));
  }
  else
  {
    return VerifyDomainIdentityOutcome(outcome.GetError());
  }
}

VerifyDomainIdentityOutcomeCallable SESClient::VerifyDomainIdentityCallable(const VerifyDomainIdentityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< VerifyDomainIdentityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->VerifyDomainIdentity(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClient::VerifyDomainIdentityAsync(const VerifyDomainIdentityRequest& request, const VerifyDomainIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->VerifyDomainIdentityAsyncHelper( request, handler, context ); } );
}

void SESClient::VerifyDomainIdentityAsyncHelper(const VerifyDomainIdentityRequest& request, const VerifyDomainIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, VerifyDomainIdentity(request), context);
}

VerifyEmailAddressOutcome SESClient::VerifyEmailAddress(const VerifyEmailAddressRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return VerifyEmailAddressOutcome(NoResult());
  }
  else
  {
    return VerifyEmailAddressOutcome(outcome.GetError());
  }
}

VerifyEmailAddressOutcomeCallable SESClient::VerifyEmailAddressCallable(const VerifyEmailAddressRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< VerifyEmailAddressOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->VerifyEmailAddress(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClient::VerifyEmailAddressAsync(const VerifyEmailAddressRequest& request, const VerifyEmailAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->VerifyEmailAddressAsyncHelper( request, handler, context ); } );
}

void SESClient::VerifyEmailAddressAsyncHelper(const VerifyEmailAddressRequest& request, const VerifyEmailAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, VerifyEmailAddress(request), context);
}

VerifyEmailIdentityOutcome SESClient::VerifyEmailIdentity(const VerifyEmailIdentityRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return VerifyEmailIdentityOutcome(VerifyEmailIdentityResult(outcome.GetResult()));
  }
  else
  {
    return VerifyEmailIdentityOutcome(outcome.GetError());
  }
}

VerifyEmailIdentityOutcomeCallable SESClient::VerifyEmailIdentityCallable(const VerifyEmailIdentityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< VerifyEmailIdentityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->VerifyEmailIdentity(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClient::VerifyEmailIdentityAsync(const VerifyEmailIdentityRequest& request, const VerifyEmailIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->VerifyEmailIdentityAsyncHelper( request, handler, context ); } );
}

void SESClient::VerifyEmailIdentityAsyncHelper(const VerifyEmailIdentityRequest& request, const VerifyEmailIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, VerifyEmailIdentity(request), context);
}



