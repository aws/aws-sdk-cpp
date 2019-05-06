/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <aws/sns/SNSClient.h>
#include <aws/sns/SNSEndpoint.h>
#include <aws/sns/SNSErrorMarshaller.h>
#include <aws/sns/model/AddPermissionRequest.h>
#include <aws/sns/model/CheckIfPhoneNumberIsOptedOutRequest.h>
#include <aws/sns/model/ConfirmSubscriptionRequest.h>
#include <aws/sns/model/CreatePlatformApplicationRequest.h>
#include <aws/sns/model/CreatePlatformEndpointRequest.h>
#include <aws/sns/model/CreateTopicRequest.h>
#include <aws/sns/model/DeleteEndpointRequest.h>
#include <aws/sns/model/DeletePlatformApplicationRequest.h>
#include <aws/sns/model/DeleteTopicRequest.h>
#include <aws/sns/model/GetEndpointAttributesRequest.h>
#include <aws/sns/model/GetPlatformApplicationAttributesRequest.h>
#include <aws/sns/model/GetSMSAttributesRequest.h>
#include <aws/sns/model/GetSubscriptionAttributesRequest.h>
#include <aws/sns/model/GetTopicAttributesRequest.h>
#include <aws/sns/model/ListEndpointsByPlatformApplicationRequest.h>
#include <aws/sns/model/ListPhoneNumbersOptedOutRequest.h>
#include <aws/sns/model/ListPlatformApplicationsRequest.h>
#include <aws/sns/model/ListSubscriptionsRequest.h>
#include <aws/sns/model/ListSubscriptionsByTopicRequest.h>
#include <aws/sns/model/ListTagsForResourceRequest.h>
#include <aws/sns/model/ListTopicsRequest.h>
#include <aws/sns/model/OptInPhoneNumberRequest.h>
#include <aws/sns/model/PublishRequest.h>
#include <aws/sns/model/RemovePermissionRequest.h>
#include <aws/sns/model/SetEndpointAttributesRequest.h>
#include <aws/sns/model/SetPlatformApplicationAttributesRequest.h>
#include <aws/sns/model/SetSMSAttributesRequest.h>
#include <aws/sns/model/SetSubscriptionAttributesRequest.h>
#include <aws/sns/model/SetTopicAttributesRequest.h>
#include <aws/sns/model/SubscribeRequest.h>
#include <aws/sns/model/TagResourceRequest.h>
#include <aws/sns/model/UnsubscribeRequest.h>
#include <aws/sns/model/UntagResourceRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SNS;
using namespace Aws::SNS::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Xml;


static const char* SERVICE_NAME = "sns";
static const char* ALLOCATION_TAG = "SNSClient";


SNSClient::SNSClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<SNSErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SNSClient::SNSClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<SNSErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SNSClient::SNSClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<SNSErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SNSClient::~SNSClient()
{
}

void SNSClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + SNSEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void SNSClient::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0 || endpoint.compare(0, 8, "https://") == 0)
  {
      m_uri = endpoint;
  }
  else
  {
      m_uri = m_configScheme + "://" + endpoint;
  }
}

Aws::String SNSClient::ConvertRequestToPresignedUrl(const AmazonSerializableWebServiceRequest& requestToConvert, const char* region) const
{
  Aws::StringStream ss;
  ss << "https://" << SNSEndpoint::ForRegion(region);
  ss << "?" << requestToConvert.SerializePayload();

  URI uri(ss.str());
  return GeneratePresignedUrl(uri, HttpMethod::HTTP_GET, region, 3600);
}

AddPermissionOutcome SNSClient::AddPermission(const AddPermissionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AddPermissionOutcome(NoResult());
  }
  else
  {
    return AddPermissionOutcome(outcome.GetError());
  }
}

AddPermissionOutcomeCallable SNSClient::AddPermissionCallable(const AddPermissionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddPermissionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddPermission(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::AddPermissionAsync(const AddPermissionRequest& request, const AddPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AddPermissionAsyncHelper( request, handler, context ); } );
}

void SNSClient::AddPermissionAsyncHelper(const AddPermissionRequest& request, const AddPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddPermission(request), context);
}

CheckIfPhoneNumberIsOptedOutOutcome SNSClient::CheckIfPhoneNumberIsOptedOut(const CheckIfPhoneNumberIsOptedOutRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CheckIfPhoneNumberIsOptedOutOutcome(CheckIfPhoneNumberIsOptedOutResult(outcome.GetResult()));
  }
  else
  {
    return CheckIfPhoneNumberIsOptedOutOutcome(outcome.GetError());
  }
}

CheckIfPhoneNumberIsOptedOutOutcomeCallable SNSClient::CheckIfPhoneNumberIsOptedOutCallable(const CheckIfPhoneNumberIsOptedOutRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CheckIfPhoneNumberIsOptedOutOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CheckIfPhoneNumberIsOptedOut(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::CheckIfPhoneNumberIsOptedOutAsync(const CheckIfPhoneNumberIsOptedOutRequest& request, const CheckIfPhoneNumberIsOptedOutResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CheckIfPhoneNumberIsOptedOutAsyncHelper( request, handler, context ); } );
}

void SNSClient::CheckIfPhoneNumberIsOptedOutAsyncHelper(const CheckIfPhoneNumberIsOptedOutRequest& request, const CheckIfPhoneNumberIsOptedOutResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CheckIfPhoneNumberIsOptedOut(request), context);
}

ConfirmSubscriptionOutcome SNSClient::ConfirmSubscription(const ConfirmSubscriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ConfirmSubscriptionOutcome(ConfirmSubscriptionResult(outcome.GetResult()));
  }
  else
  {
    return ConfirmSubscriptionOutcome(outcome.GetError());
  }
}

ConfirmSubscriptionOutcomeCallable SNSClient::ConfirmSubscriptionCallable(const ConfirmSubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ConfirmSubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ConfirmSubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::ConfirmSubscriptionAsync(const ConfirmSubscriptionRequest& request, const ConfirmSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ConfirmSubscriptionAsyncHelper( request, handler, context ); } );
}

void SNSClient::ConfirmSubscriptionAsyncHelper(const ConfirmSubscriptionRequest& request, const ConfirmSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ConfirmSubscription(request), context);
}

CreatePlatformApplicationOutcome SNSClient::CreatePlatformApplication(const CreatePlatformApplicationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreatePlatformApplicationOutcome(CreatePlatformApplicationResult(outcome.GetResult()));
  }
  else
  {
    return CreatePlatformApplicationOutcome(outcome.GetError());
  }
}

CreatePlatformApplicationOutcomeCallable SNSClient::CreatePlatformApplicationCallable(const CreatePlatformApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePlatformApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePlatformApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::CreatePlatformApplicationAsync(const CreatePlatformApplicationRequest& request, const CreatePlatformApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreatePlatformApplicationAsyncHelper( request, handler, context ); } );
}

void SNSClient::CreatePlatformApplicationAsyncHelper(const CreatePlatformApplicationRequest& request, const CreatePlatformApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreatePlatformApplication(request), context);
}

CreatePlatformEndpointOutcome SNSClient::CreatePlatformEndpoint(const CreatePlatformEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreatePlatformEndpointOutcome(CreatePlatformEndpointResult(outcome.GetResult()));
  }
  else
  {
    return CreatePlatformEndpointOutcome(outcome.GetError());
  }
}

CreatePlatformEndpointOutcomeCallable SNSClient::CreatePlatformEndpointCallable(const CreatePlatformEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePlatformEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePlatformEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::CreatePlatformEndpointAsync(const CreatePlatformEndpointRequest& request, const CreatePlatformEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreatePlatformEndpointAsyncHelper( request, handler, context ); } );
}

void SNSClient::CreatePlatformEndpointAsyncHelper(const CreatePlatformEndpointRequest& request, const CreatePlatformEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreatePlatformEndpoint(request), context);
}

CreateTopicOutcome SNSClient::CreateTopic(const CreateTopicRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateTopicOutcome(CreateTopicResult(outcome.GetResult()));
  }
  else
  {
    return CreateTopicOutcome(outcome.GetError());
  }
}

CreateTopicOutcomeCallable SNSClient::CreateTopicCallable(const CreateTopicRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTopicOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTopic(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::CreateTopicAsync(const CreateTopicRequest& request, const CreateTopicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateTopicAsyncHelper( request, handler, context ); } );
}

void SNSClient::CreateTopicAsyncHelper(const CreateTopicRequest& request, const CreateTopicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateTopic(request), context);
}

DeleteEndpointOutcome SNSClient::DeleteEndpoint(const DeleteEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteEndpointOutcome(NoResult());
  }
  else
  {
    return DeleteEndpointOutcome(outcome.GetError());
  }
}

DeleteEndpointOutcomeCallable SNSClient::DeleteEndpointCallable(const DeleteEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::DeleteEndpointAsync(const DeleteEndpointRequest& request, const DeleteEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteEndpointAsyncHelper( request, handler, context ); } );
}

void SNSClient::DeleteEndpointAsyncHelper(const DeleteEndpointRequest& request, const DeleteEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteEndpoint(request), context);
}

DeletePlatformApplicationOutcome SNSClient::DeletePlatformApplication(const DeletePlatformApplicationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeletePlatformApplicationOutcome(NoResult());
  }
  else
  {
    return DeletePlatformApplicationOutcome(outcome.GetError());
  }
}

DeletePlatformApplicationOutcomeCallable SNSClient::DeletePlatformApplicationCallable(const DeletePlatformApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePlatformApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePlatformApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::DeletePlatformApplicationAsync(const DeletePlatformApplicationRequest& request, const DeletePlatformApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeletePlatformApplicationAsyncHelper( request, handler, context ); } );
}

void SNSClient::DeletePlatformApplicationAsyncHelper(const DeletePlatformApplicationRequest& request, const DeletePlatformApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeletePlatformApplication(request), context);
}

DeleteTopicOutcome SNSClient::DeleteTopic(const DeleteTopicRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteTopicOutcome(NoResult());
  }
  else
  {
    return DeleteTopicOutcome(outcome.GetError());
  }
}

DeleteTopicOutcomeCallable SNSClient::DeleteTopicCallable(const DeleteTopicRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTopicOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTopic(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::DeleteTopicAsync(const DeleteTopicRequest& request, const DeleteTopicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteTopicAsyncHelper( request, handler, context ); } );
}

void SNSClient::DeleteTopicAsyncHelper(const DeleteTopicRequest& request, const DeleteTopicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteTopic(request), context);
}

GetEndpointAttributesOutcome SNSClient::GetEndpointAttributes(const GetEndpointAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetEndpointAttributesOutcome(GetEndpointAttributesResult(outcome.GetResult()));
  }
  else
  {
    return GetEndpointAttributesOutcome(outcome.GetError());
  }
}

GetEndpointAttributesOutcomeCallable SNSClient::GetEndpointAttributesCallable(const GetEndpointAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEndpointAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEndpointAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::GetEndpointAttributesAsync(const GetEndpointAttributesRequest& request, const GetEndpointAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetEndpointAttributesAsyncHelper( request, handler, context ); } );
}

void SNSClient::GetEndpointAttributesAsyncHelper(const GetEndpointAttributesRequest& request, const GetEndpointAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetEndpointAttributes(request), context);
}

GetPlatformApplicationAttributesOutcome SNSClient::GetPlatformApplicationAttributes(const GetPlatformApplicationAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetPlatformApplicationAttributesOutcome(GetPlatformApplicationAttributesResult(outcome.GetResult()));
  }
  else
  {
    return GetPlatformApplicationAttributesOutcome(outcome.GetError());
  }
}

GetPlatformApplicationAttributesOutcomeCallable SNSClient::GetPlatformApplicationAttributesCallable(const GetPlatformApplicationAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPlatformApplicationAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPlatformApplicationAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::GetPlatformApplicationAttributesAsync(const GetPlatformApplicationAttributesRequest& request, const GetPlatformApplicationAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetPlatformApplicationAttributesAsyncHelper( request, handler, context ); } );
}

void SNSClient::GetPlatformApplicationAttributesAsyncHelper(const GetPlatformApplicationAttributesRequest& request, const GetPlatformApplicationAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetPlatformApplicationAttributes(request), context);
}

GetSMSAttributesOutcome SNSClient::GetSMSAttributes(const GetSMSAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetSMSAttributesOutcome(GetSMSAttributesResult(outcome.GetResult()));
  }
  else
  {
    return GetSMSAttributesOutcome(outcome.GetError());
  }
}

GetSMSAttributesOutcomeCallable SNSClient::GetSMSAttributesCallable(const GetSMSAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSMSAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSMSAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::GetSMSAttributesAsync(const GetSMSAttributesRequest& request, const GetSMSAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSMSAttributesAsyncHelper( request, handler, context ); } );
}

void SNSClient::GetSMSAttributesAsyncHelper(const GetSMSAttributesRequest& request, const GetSMSAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSMSAttributes(request), context);
}

GetSubscriptionAttributesOutcome SNSClient::GetSubscriptionAttributes(const GetSubscriptionAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetSubscriptionAttributesOutcome(GetSubscriptionAttributesResult(outcome.GetResult()));
  }
  else
  {
    return GetSubscriptionAttributesOutcome(outcome.GetError());
  }
}

GetSubscriptionAttributesOutcomeCallable SNSClient::GetSubscriptionAttributesCallable(const GetSubscriptionAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSubscriptionAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSubscriptionAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::GetSubscriptionAttributesAsync(const GetSubscriptionAttributesRequest& request, const GetSubscriptionAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSubscriptionAttributesAsyncHelper( request, handler, context ); } );
}

void SNSClient::GetSubscriptionAttributesAsyncHelper(const GetSubscriptionAttributesRequest& request, const GetSubscriptionAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSubscriptionAttributes(request), context);
}

GetTopicAttributesOutcome SNSClient::GetTopicAttributes(const GetTopicAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetTopicAttributesOutcome(GetTopicAttributesResult(outcome.GetResult()));
  }
  else
  {
    return GetTopicAttributesOutcome(outcome.GetError());
  }
}

GetTopicAttributesOutcomeCallable SNSClient::GetTopicAttributesCallable(const GetTopicAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTopicAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTopicAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::GetTopicAttributesAsync(const GetTopicAttributesRequest& request, const GetTopicAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetTopicAttributesAsyncHelper( request, handler, context ); } );
}

void SNSClient::GetTopicAttributesAsyncHelper(const GetTopicAttributesRequest& request, const GetTopicAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetTopicAttributes(request), context);
}

ListEndpointsByPlatformApplicationOutcome SNSClient::ListEndpointsByPlatformApplication(const ListEndpointsByPlatformApplicationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListEndpointsByPlatformApplicationOutcome(ListEndpointsByPlatformApplicationResult(outcome.GetResult()));
  }
  else
  {
    return ListEndpointsByPlatformApplicationOutcome(outcome.GetError());
  }
}

ListEndpointsByPlatformApplicationOutcomeCallable SNSClient::ListEndpointsByPlatformApplicationCallable(const ListEndpointsByPlatformApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEndpointsByPlatformApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEndpointsByPlatformApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::ListEndpointsByPlatformApplicationAsync(const ListEndpointsByPlatformApplicationRequest& request, const ListEndpointsByPlatformApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListEndpointsByPlatformApplicationAsyncHelper( request, handler, context ); } );
}

void SNSClient::ListEndpointsByPlatformApplicationAsyncHelper(const ListEndpointsByPlatformApplicationRequest& request, const ListEndpointsByPlatformApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListEndpointsByPlatformApplication(request), context);
}

ListPhoneNumbersOptedOutOutcome SNSClient::ListPhoneNumbersOptedOut(const ListPhoneNumbersOptedOutRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListPhoneNumbersOptedOutOutcome(ListPhoneNumbersOptedOutResult(outcome.GetResult()));
  }
  else
  {
    return ListPhoneNumbersOptedOutOutcome(outcome.GetError());
  }
}

ListPhoneNumbersOptedOutOutcomeCallable SNSClient::ListPhoneNumbersOptedOutCallable(const ListPhoneNumbersOptedOutRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPhoneNumbersOptedOutOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPhoneNumbersOptedOut(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::ListPhoneNumbersOptedOutAsync(const ListPhoneNumbersOptedOutRequest& request, const ListPhoneNumbersOptedOutResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListPhoneNumbersOptedOutAsyncHelper( request, handler, context ); } );
}

void SNSClient::ListPhoneNumbersOptedOutAsyncHelper(const ListPhoneNumbersOptedOutRequest& request, const ListPhoneNumbersOptedOutResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPhoneNumbersOptedOut(request), context);
}

ListPlatformApplicationsOutcome SNSClient::ListPlatformApplications(const ListPlatformApplicationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListPlatformApplicationsOutcome(ListPlatformApplicationsResult(outcome.GetResult()));
  }
  else
  {
    return ListPlatformApplicationsOutcome(outcome.GetError());
  }
}

ListPlatformApplicationsOutcomeCallable SNSClient::ListPlatformApplicationsCallable(const ListPlatformApplicationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPlatformApplicationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPlatformApplications(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::ListPlatformApplicationsAsync(const ListPlatformApplicationsRequest& request, const ListPlatformApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListPlatformApplicationsAsyncHelper( request, handler, context ); } );
}

void SNSClient::ListPlatformApplicationsAsyncHelper(const ListPlatformApplicationsRequest& request, const ListPlatformApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPlatformApplications(request), context);
}

ListSubscriptionsOutcome SNSClient::ListSubscriptions(const ListSubscriptionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListSubscriptionsOutcome(ListSubscriptionsResult(outcome.GetResult()));
  }
  else
  {
    return ListSubscriptionsOutcome(outcome.GetError());
  }
}

ListSubscriptionsOutcomeCallable SNSClient::ListSubscriptionsCallable(const ListSubscriptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSubscriptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSubscriptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::ListSubscriptionsAsync(const ListSubscriptionsRequest& request, const ListSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListSubscriptionsAsyncHelper( request, handler, context ); } );
}

void SNSClient::ListSubscriptionsAsyncHelper(const ListSubscriptionsRequest& request, const ListSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListSubscriptions(request), context);
}

ListSubscriptionsByTopicOutcome SNSClient::ListSubscriptionsByTopic(const ListSubscriptionsByTopicRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListSubscriptionsByTopicOutcome(ListSubscriptionsByTopicResult(outcome.GetResult()));
  }
  else
  {
    return ListSubscriptionsByTopicOutcome(outcome.GetError());
  }
}

ListSubscriptionsByTopicOutcomeCallable SNSClient::ListSubscriptionsByTopicCallable(const ListSubscriptionsByTopicRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSubscriptionsByTopicOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSubscriptionsByTopic(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::ListSubscriptionsByTopicAsync(const ListSubscriptionsByTopicRequest& request, const ListSubscriptionsByTopicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListSubscriptionsByTopicAsyncHelper( request, handler, context ); } );
}

void SNSClient::ListSubscriptionsByTopicAsyncHelper(const ListSubscriptionsByTopicRequest& request, const ListSubscriptionsByTopicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListSubscriptionsByTopic(request), context);
}

ListTagsForResourceOutcome SNSClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListTagsForResourceOutcome(ListTagsForResourceResult(outcome.GetResult()));
  }
  else
  {
    return ListTagsForResourceOutcome(outcome.GetError());
  }
}

ListTagsForResourceOutcomeCallable SNSClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void SNSClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

ListTopicsOutcome SNSClient::ListTopics(const ListTopicsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListTopicsOutcome(ListTopicsResult(outcome.GetResult()));
  }
  else
  {
    return ListTopicsOutcome(outcome.GetError());
  }
}

ListTopicsOutcomeCallable SNSClient::ListTopicsCallable(const ListTopicsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTopicsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTopics(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::ListTopicsAsync(const ListTopicsRequest& request, const ListTopicsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTopicsAsyncHelper( request, handler, context ); } );
}

void SNSClient::ListTopicsAsyncHelper(const ListTopicsRequest& request, const ListTopicsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTopics(request), context);
}

OptInPhoneNumberOutcome SNSClient::OptInPhoneNumber(const OptInPhoneNumberRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return OptInPhoneNumberOutcome(OptInPhoneNumberResult(outcome.GetResult()));
  }
  else
  {
    return OptInPhoneNumberOutcome(outcome.GetError());
  }
}

OptInPhoneNumberOutcomeCallable SNSClient::OptInPhoneNumberCallable(const OptInPhoneNumberRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< OptInPhoneNumberOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->OptInPhoneNumber(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::OptInPhoneNumberAsync(const OptInPhoneNumberRequest& request, const OptInPhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->OptInPhoneNumberAsyncHelper( request, handler, context ); } );
}

void SNSClient::OptInPhoneNumberAsyncHelper(const OptInPhoneNumberRequest& request, const OptInPhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, OptInPhoneNumber(request), context);
}

PublishOutcome SNSClient::Publish(const PublishRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return PublishOutcome(PublishResult(outcome.GetResult()));
  }
  else
  {
    return PublishOutcome(outcome.GetError());
  }
}

PublishOutcomeCallable SNSClient::PublishCallable(const PublishRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PublishOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->Publish(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::PublishAsync(const PublishRequest& request, const PublishResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PublishAsyncHelper( request, handler, context ); } );
}

void SNSClient::PublishAsyncHelper(const PublishRequest& request, const PublishResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, Publish(request), context);
}

RemovePermissionOutcome SNSClient::RemovePermission(const RemovePermissionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RemovePermissionOutcome(NoResult());
  }
  else
  {
    return RemovePermissionOutcome(outcome.GetError());
  }
}

RemovePermissionOutcomeCallable SNSClient::RemovePermissionCallable(const RemovePermissionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemovePermissionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemovePermission(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::RemovePermissionAsync(const RemovePermissionRequest& request, const RemovePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RemovePermissionAsyncHelper( request, handler, context ); } );
}

void SNSClient::RemovePermissionAsyncHelper(const RemovePermissionRequest& request, const RemovePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RemovePermission(request), context);
}

SetEndpointAttributesOutcome SNSClient::SetEndpointAttributes(const SetEndpointAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SetEndpointAttributesOutcome(NoResult());
  }
  else
  {
    return SetEndpointAttributesOutcome(outcome.GetError());
  }
}

SetEndpointAttributesOutcomeCallable SNSClient::SetEndpointAttributesCallable(const SetEndpointAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetEndpointAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetEndpointAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::SetEndpointAttributesAsync(const SetEndpointAttributesRequest& request, const SetEndpointAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SetEndpointAttributesAsyncHelper( request, handler, context ); } );
}

void SNSClient::SetEndpointAttributesAsyncHelper(const SetEndpointAttributesRequest& request, const SetEndpointAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetEndpointAttributes(request), context);
}

SetPlatformApplicationAttributesOutcome SNSClient::SetPlatformApplicationAttributes(const SetPlatformApplicationAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SetPlatformApplicationAttributesOutcome(NoResult());
  }
  else
  {
    return SetPlatformApplicationAttributesOutcome(outcome.GetError());
  }
}

SetPlatformApplicationAttributesOutcomeCallable SNSClient::SetPlatformApplicationAttributesCallable(const SetPlatformApplicationAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetPlatformApplicationAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetPlatformApplicationAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::SetPlatformApplicationAttributesAsync(const SetPlatformApplicationAttributesRequest& request, const SetPlatformApplicationAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SetPlatformApplicationAttributesAsyncHelper( request, handler, context ); } );
}

void SNSClient::SetPlatformApplicationAttributesAsyncHelper(const SetPlatformApplicationAttributesRequest& request, const SetPlatformApplicationAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetPlatformApplicationAttributes(request), context);
}

SetSMSAttributesOutcome SNSClient::SetSMSAttributes(const SetSMSAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SetSMSAttributesOutcome(SetSMSAttributesResult(outcome.GetResult()));
  }
  else
  {
    return SetSMSAttributesOutcome(outcome.GetError());
  }
}

SetSMSAttributesOutcomeCallable SNSClient::SetSMSAttributesCallable(const SetSMSAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetSMSAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetSMSAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::SetSMSAttributesAsync(const SetSMSAttributesRequest& request, const SetSMSAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SetSMSAttributesAsyncHelper( request, handler, context ); } );
}

void SNSClient::SetSMSAttributesAsyncHelper(const SetSMSAttributesRequest& request, const SetSMSAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetSMSAttributes(request), context);
}

SetSubscriptionAttributesOutcome SNSClient::SetSubscriptionAttributes(const SetSubscriptionAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SetSubscriptionAttributesOutcome(NoResult());
  }
  else
  {
    return SetSubscriptionAttributesOutcome(outcome.GetError());
  }
}

SetSubscriptionAttributesOutcomeCallable SNSClient::SetSubscriptionAttributesCallable(const SetSubscriptionAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetSubscriptionAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetSubscriptionAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::SetSubscriptionAttributesAsync(const SetSubscriptionAttributesRequest& request, const SetSubscriptionAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SetSubscriptionAttributesAsyncHelper( request, handler, context ); } );
}

void SNSClient::SetSubscriptionAttributesAsyncHelper(const SetSubscriptionAttributesRequest& request, const SetSubscriptionAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetSubscriptionAttributes(request), context);
}

SetTopicAttributesOutcome SNSClient::SetTopicAttributes(const SetTopicAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SetTopicAttributesOutcome(NoResult());
  }
  else
  {
    return SetTopicAttributesOutcome(outcome.GetError());
  }
}

SetTopicAttributesOutcomeCallable SNSClient::SetTopicAttributesCallable(const SetTopicAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetTopicAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetTopicAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::SetTopicAttributesAsync(const SetTopicAttributesRequest& request, const SetTopicAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SetTopicAttributesAsyncHelper( request, handler, context ); } );
}

void SNSClient::SetTopicAttributesAsyncHelper(const SetTopicAttributesRequest& request, const SetTopicAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetTopicAttributes(request), context);
}

SubscribeOutcome SNSClient::Subscribe(const SubscribeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SubscribeOutcome(SubscribeResult(outcome.GetResult()));
  }
  else
  {
    return SubscribeOutcome(outcome.GetError());
  }
}

SubscribeOutcomeCallable SNSClient::SubscribeCallable(const SubscribeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SubscribeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->Subscribe(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::SubscribeAsync(const SubscribeRequest& request, const SubscribeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SubscribeAsyncHelper( request, handler, context ); } );
}

void SNSClient::SubscribeAsyncHelper(const SubscribeRequest& request, const SubscribeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, Subscribe(request), context);
}

TagResourceOutcome SNSClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return TagResourceOutcome(TagResourceResult(outcome.GetResult()));
  }
  else
  {
    return TagResourceOutcome(outcome.GetError());
  }
}

TagResourceOutcomeCallable SNSClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void SNSClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UnsubscribeOutcome SNSClient::Unsubscribe(const UnsubscribeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UnsubscribeOutcome(NoResult());
  }
  else
  {
    return UnsubscribeOutcome(outcome.GetError());
  }
}

UnsubscribeOutcomeCallable SNSClient::UnsubscribeCallable(const UnsubscribeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UnsubscribeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->Unsubscribe(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::UnsubscribeAsync(const UnsubscribeRequest& request, const UnsubscribeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UnsubscribeAsyncHelper( request, handler, context ); } );
}

void SNSClient::UnsubscribeAsyncHelper(const UnsubscribeRequest& request, const UnsubscribeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, Unsubscribe(request), context);
}

UntagResourceOutcome SNSClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UntagResourceOutcome(UntagResourceResult(outcome.GetResult()));
  }
  else
  {
    return UntagResourceOutcome(outcome.GetError());
  }
}

UntagResourceOutcomeCallable SNSClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void SNSClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}



