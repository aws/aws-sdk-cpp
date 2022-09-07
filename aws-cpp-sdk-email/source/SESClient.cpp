/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

#include <aws/email/SESClient.h>
#include <aws/email/SESEndpoint.h>
#include <aws/email/SESErrorMarshaller.h>
#include <aws/email/model/CloneReceiptRuleSetRequest.h>
#include <aws/email/model/CreateConfigurationSetRequest.h>
#include <aws/email/model/CreateConfigurationSetEventDestinationRequest.h>
#include <aws/email/model/CreateConfigurationSetTrackingOptionsRequest.h>
#include <aws/email/model/CreateCustomVerificationEmailTemplateRequest.h>
#include <aws/email/model/CreateReceiptFilterRequest.h>
#include <aws/email/model/CreateReceiptRuleRequest.h>
#include <aws/email/model/CreateReceiptRuleSetRequest.h>
#include <aws/email/model/CreateTemplateRequest.h>
#include <aws/email/model/DeleteConfigurationSetRequest.h>
#include <aws/email/model/DeleteConfigurationSetEventDestinationRequest.h>
#include <aws/email/model/DeleteConfigurationSetTrackingOptionsRequest.h>
#include <aws/email/model/DeleteCustomVerificationEmailTemplateRequest.h>
#include <aws/email/model/DeleteIdentityRequest.h>
#include <aws/email/model/DeleteIdentityPolicyRequest.h>
#include <aws/email/model/DeleteReceiptFilterRequest.h>
#include <aws/email/model/DeleteReceiptRuleRequest.h>
#include <aws/email/model/DeleteReceiptRuleSetRequest.h>
#include <aws/email/model/DeleteTemplateRequest.h>
#include <aws/email/model/DeleteVerifiedEmailAddressRequest.h>
#include <aws/email/model/DescribeActiveReceiptRuleSetRequest.h>
#include <aws/email/model/DescribeConfigurationSetRequest.h>
#include <aws/email/model/DescribeReceiptRuleRequest.h>
#include <aws/email/model/DescribeReceiptRuleSetRequest.h>
#include <aws/email/model/GetAccountSendingEnabledRequest.h>
#include <aws/email/model/GetCustomVerificationEmailTemplateRequest.h>
#include <aws/email/model/GetIdentityDkimAttributesRequest.h>
#include <aws/email/model/GetIdentityMailFromDomainAttributesRequest.h>
#include <aws/email/model/GetIdentityNotificationAttributesRequest.h>
#include <aws/email/model/GetIdentityPoliciesRequest.h>
#include <aws/email/model/GetIdentityVerificationAttributesRequest.h>
#include <aws/email/model/GetSendQuotaRequest.h>
#include <aws/email/model/GetSendStatisticsRequest.h>
#include <aws/email/model/GetTemplateRequest.h>
#include <aws/email/model/ListConfigurationSetsRequest.h>
#include <aws/email/model/ListCustomVerificationEmailTemplatesRequest.h>
#include <aws/email/model/ListIdentitiesRequest.h>
#include <aws/email/model/ListIdentityPoliciesRequest.h>
#include <aws/email/model/ListReceiptFiltersRequest.h>
#include <aws/email/model/ListReceiptRuleSetsRequest.h>
#include <aws/email/model/ListTemplatesRequest.h>
#include <aws/email/model/ListVerifiedEmailAddressesRequest.h>
#include <aws/email/model/PutConfigurationSetDeliveryOptionsRequest.h>
#include <aws/email/model/PutIdentityPolicyRequest.h>
#include <aws/email/model/ReorderReceiptRuleSetRequest.h>
#include <aws/email/model/SendBounceRequest.h>
#include <aws/email/model/SendBulkTemplatedEmailRequest.h>
#include <aws/email/model/SendCustomVerificationEmailRequest.h>
#include <aws/email/model/SendEmailRequest.h>
#include <aws/email/model/SendRawEmailRequest.h>
#include <aws/email/model/SendTemplatedEmailRequest.h>
#include <aws/email/model/SetActiveReceiptRuleSetRequest.h>
#include <aws/email/model/SetIdentityDkimEnabledRequest.h>
#include <aws/email/model/SetIdentityFeedbackForwardingEnabledRequest.h>
#include <aws/email/model/SetIdentityHeadersInNotificationsEnabledRequest.h>
#include <aws/email/model/SetIdentityMailFromDomainRequest.h>
#include <aws/email/model/SetIdentityNotificationTopicRequest.h>
#include <aws/email/model/SetReceiptRulePositionRequest.h>
#include <aws/email/model/TestRenderTemplateRequest.h>
#include <aws/email/model/UpdateAccountSendingEnabledRequest.h>
#include <aws/email/model/UpdateConfigurationSetEventDestinationRequest.h>
#include <aws/email/model/UpdateConfigurationSetReputationMetricsEnabledRequest.h>
#include <aws/email/model/UpdateConfigurationSetSendingEnabledRequest.h>
#include <aws/email/model/UpdateConfigurationSetTrackingOptionsRequest.h>
#include <aws/email/model/UpdateCustomVerificationEmailTemplateRequest.h>
#include <aws/email/model/UpdateReceiptRuleRequest.h>
#include <aws/email/model/UpdateTemplateRequest.h>
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
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SESErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SESClient::SESClient(const AWSCredentials& credentials,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SESErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SESClient::SESClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SESErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SESClient::~SESClient()
{
}

void SESClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("SES");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + SESEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void SESClient::OverrideEndpoint(const Aws::String& endpoint)
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

Aws::String SESClient::ConvertRequestToPresignedUrl(const AmazonSerializableWebServiceRequest& requestToConvert, const char* region) const
{
  Aws::StringStream ss;
  ss << "https://" << SESEndpoint::ForRegion(region);
  ss << "?" << requestToConvert.SerializePayload();

  URI uri(ss.str());
  return GeneratePresignedUrl(uri, Aws::Http::HttpMethod::HTTP_GET, region, 3600);
}

CloneReceiptRuleSetOutcome SESClient::CloneReceiptRuleSet(const CloneReceiptRuleSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CloneReceiptRuleSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CloneReceiptRuleSetOutcomeCallable SESClient::CloneReceiptRuleSetCallable(const CloneReceiptRuleSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CloneReceiptRuleSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CloneReceiptRuleSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientCloneReceiptRuleSetAsyncHelper(SESClient const * const clientThis, const CloneReceiptRuleSetRequest& request, const CloneReceiptRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CloneReceiptRuleSet(request), context);
}

void SESClient::CloneReceiptRuleSetAsync(const CloneReceiptRuleSetRequest& request, const CloneReceiptRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientCloneReceiptRuleSetAsyncHelper( this, request, handler, context ); } );
}

CreateConfigurationSetOutcome SESClient::CreateConfigurationSet(const CreateConfigurationSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateConfigurationSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateConfigurationSetOutcomeCallable SESClient::CreateConfigurationSetCallable(const CreateConfigurationSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateConfigurationSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateConfigurationSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientCreateConfigurationSetAsyncHelper(SESClient const * const clientThis, const CreateConfigurationSetRequest& request, const CreateConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateConfigurationSet(request), context);
}

void SESClient::CreateConfigurationSetAsync(const CreateConfigurationSetRequest& request, const CreateConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientCreateConfigurationSetAsyncHelper( this, request, handler, context ); } );
}

CreateConfigurationSetEventDestinationOutcome SESClient::CreateConfigurationSetEventDestination(const CreateConfigurationSetEventDestinationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateConfigurationSetEventDestinationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateConfigurationSetEventDestinationOutcomeCallable SESClient::CreateConfigurationSetEventDestinationCallable(const CreateConfigurationSetEventDestinationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateConfigurationSetEventDestinationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateConfigurationSetEventDestination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientCreateConfigurationSetEventDestinationAsyncHelper(SESClient const * const clientThis, const CreateConfigurationSetEventDestinationRequest& request, const CreateConfigurationSetEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateConfigurationSetEventDestination(request), context);
}

void SESClient::CreateConfigurationSetEventDestinationAsync(const CreateConfigurationSetEventDestinationRequest& request, const CreateConfigurationSetEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientCreateConfigurationSetEventDestinationAsyncHelper( this, request, handler, context ); } );
}

CreateConfigurationSetTrackingOptionsOutcome SESClient::CreateConfigurationSetTrackingOptions(const CreateConfigurationSetTrackingOptionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateConfigurationSetTrackingOptionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateConfigurationSetTrackingOptionsOutcomeCallable SESClient::CreateConfigurationSetTrackingOptionsCallable(const CreateConfigurationSetTrackingOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateConfigurationSetTrackingOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateConfigurationSetTrackingOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientCreateConfigurationSetTrackingOptionsAsyncHelper(SESClient const * const clientThis, const CreateConfigurationSetTrackingOptionsRequest& request, const CreateConfigurationSetTrackingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateConfigurationSetTrackingOptions(request), context);
}

void SESClient::CreateConfigurationSetTrackingOptionsAsync(const CreateConfigurationSetTrackingOptionsRequest& request, const CreateConfigurationSetTrackingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientCreateConfigurationSetTrackingOptionsAsyncHelper( this, request, handler, context ); } );
}

CreateCustomVerificationEmailTemplateOutcome SESClient::CreateCustomVerificationEmailTemplate(const CreateCustomVerificationEmailTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateCustomVerificationEmailTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateCustomVerificationEmailTemplateOutcomeCallable SESClient::CreateCustomVerificationEmailTemplateCallable(const CreateCustomVerificationEmailTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCustomVerificationEmailTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCustomVerificationEmailTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientCreateCustomVerificationEmailTemplateAsyncHelper(SESClient const * const clientThis, const CreateCustomVerificationEmailTemplateRequest& request, const CreateCustomVerificationEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateCustomVerificationEmailTemplate(request), context);
}

void SESClient::CreateCustomVerificationEmailTemplateAsync(const CreateCustomVerificationEmailTemplateRequest& request, const CreateCustomVerificationEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientCreateCustomVerificationEmailTemplateAsyncHelper( this, request, handler, context ); } );
}

CreateReceiptFilterOutcome SESClient::CreateReceiptFilter(const CreateReceiptFilterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateReceiptFilterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateReceiptFilterOutcomeCallable SESClient::CreateReceiptFilterCallable(const CreateReceiptFilterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateReceiptFilterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateReceiptFilter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientCreateReceiptFilterAsyncHelper(SESClient const * const clientThis, const CreateReceiptFilterRequest& request, const CreateReceiptFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateReceiptFilter(request), context);
}

void SESClient::CreateReceiptFilterAsync(const CreateReceiptFilterRequest& request, const CreateReceiptFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientCreateReceiptFilterAsyncHelper( this, request, handler, context ); } );
}

CreateReceiptRuleOutcome SESClient::CreateReceiptRule(const CreateReceiptRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateReceiptRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateReceiptRuleOutcomeCallable SESClient::CreateReceiptRuleCallable(const CreateReceiptRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateReceiptRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateReceiptRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientCreateReceiptRuleAsyncHelper(SESClient const * const clientThis, const CreateReceiptRuleRequest& request, const CreateReceiptRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateReceiptRule(request), context);
}

void SESClient::CreateReceiptRuleAsync(const CreateReceiptRuleRequest& request, const CreateReceiptRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientCreateReceiptRuleAsyncHelper( this, request, handler, context ); } );
}

CreateReceiptRuleSetOutcome SESClient::CreateReceiptRuleSet(const CreateReceiptRuleSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateReceiptRuleSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateReceiptRuleSetOutcomeCallable SESClient::CreateReceiptRuleSetCallable(const CreateReceiptRuleSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateReceiptRuleSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateReceiptRuleSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientCreateReceiptRuleSetAsyncHelper(SESClient const * const clientThis, const CreateReceiptRuleSetRequest& request, const CreateReceiptRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateReceiptRuleSet(request), context);
}

void SESClient::CreateReceiptRuleSetAsync(const CreateReceiptRuleSetRequest& request, const CreateReceiptRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientCreateReceiptRuleSetAsyncHelper( this, request, handler, context ); } );
}

CreateTemplateOutcome SESClient::CreateTemplate(const CreateTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateTemplateOutcomeCallable SESClient::CreateTemplateCallable(const CreateTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientCreateTemplateAsyncHelper(SESClient const * const clientThis, const CreateTemplateRequest& request, const CreateTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateTemplate(request), context);
}

void SESClient::CreateTemplateAsync(const CreateTemplateRequest& request, const CreateTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientCreateTemplateAsyncHelper( this, request, handler, context ); } );
}

DeleteConfigurationSetOutcome SESClient::DeleteConfigurationSet(const DeleteConfigurationSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteConfigurationSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteConfigurationSetOutcomeCallable SESClient::DeleteConfigurationSetCallable(const DeleteConfigurationSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteConfigurationSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteConfigurationSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientDeleteConfigurationSetAsyncHelper(SESClient const * const clientThis, const DeleteConfigurationSetRequest& request, const DeleteConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteConfigurationSet(request), context);
}

void SESClient::DeleteConfigurationSetAsync(const DeleteConfigurationSetRequest& request, const DeleteConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientDeleteConfigurationSetAsyncHelper( this, request, handler, context ); } );
}

DeleteConfigurationSetEventDestinationOutcome SESClient::DeleteConfigurationSetEventDestination(const DeleteConfigurationSetEventDestinationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteConfigurationSetEventDestinationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteConfigurationSetEventDestinationOutcomeCallable SESClient::DeleteConfigurationSetEventDestinationCallable(const DeleteConfigurationSetEventDestinationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteConfigurationSetEventDestinationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteConfigurationSetEventDestination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientDeleteConfigurationSetEventDestinationAsyncHelper(SESClient const * const clientThis, const DeleteConfigurationSetEventDestinationRequest& request, const DeleteConfigurationSetEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteConfigurationSetEventDestination(request), context);
}

void SESClient::DeleteConfigurationSetEventDestinationAsync(const DeleteConfigurationSetEventDestinationRequest& request, const DeleteConfigurationSetEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientDeleteConfigurationSetEventDestinationAsyncHelper( this, request, handler, context ); } );
}

DeleteConfigurationSetTrackingOptionsOutcome SESClient::DeleteConfigurationSetTrackingOptions(const DeleteConfigurationSetTrackingOptionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteConfigurationSetTrackingOptionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteConfigurationSetTrackingOptionsOutcomeCallable SESClient::DeleteConfigurationSetTrackingOptionsCallable(const DeleteConfigurationSetTrackingOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteConfigurationSetTrackingOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteConfigurationSetTrackingOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientDeleteConfigurationSetTrackingOptionsAsyncHelper(SESClient const * const clientThis, const DeleteConfigurationSetTrackingOptionsRequest& request, const DeleteConfigurationSetTrackingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteConfigurationSetTrackingOptions(request), context);
}

void SESClient::DeleteConfigurationSetTrackingOptionsAsync(const DeleteConfigurationSetTrackingOptionsRequest& request, const DeleteConfigurationSetTrackingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientDeleteConfigurationSetTrackingOptionsAsyncHelper( this, request, handler, context ); } );
}

DeleteCustomVerificationEmailTemplateOutcome SESClient::DeleteCustomVerificationEmailTemplate(const DeleteCustomVerificationEmailTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteCustomVerificationEmailTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteCustomVerificationEmailTemplateOutcomeCallable SESClient::DeleteCustomVerificationEmailTemplateCallable(const DeleteCustomVerificationEmailTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCustomVerificationEmailTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCustomVerificationEmailTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientDeleteCustomVerificationEmailTemplateAsyncHelper(SESClient const * const clientThis, const DeleteCustomVerificationEmailTemplateRequest& request, const DeleteCustomVerificationEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteCustomVerificationEmailTemplate(request), context);
}

void SESClient::DeleteCustomVerificationEmailTemplateAsync(const DeleteCustomVerificationEmailTemplateRequest& request, const DeleteCustomVerificationEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientDeleteCustomVerificationEmailTemplateAsyncHelper( this, request, handler, context ); } );
}

DeleteIdentityOutcome SESClient::DeleteIdentity(const DeleteIdentityRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteIdentityOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteIdentityOutcomeCallable SESClient::DeleteIdentityCallable(const DeleteIdentityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteIdentityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteIdentity(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientDeleteIdentityAsyncHelper(SESClient const * const clientThis, const DeleteIdentityRequest& request, const DeleteIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteIdentity(request), context);
}

void SESClient::DeleteIdentityAsync(const DeleteIdentityRequest& request, const DeleteIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientDeleteIdentityAsyncHelper( this, request, handler, context ); } );
}

DeleteIdentityPolicyOutcome SESClient::DeleteIdentityPolicy(const DeleteIdentityPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteIdentityPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteIdentityPolicyOutcomeCallable SESClient::DeleteIdentityPolicyCallable(const DeleteIdentityPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteIdentityPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteIdentityPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientDeleteIdentityPolicyAsyncHelper(SESClient const * const clientThis, const DeleteIdentityPolicyRequest& request, const DeleteIdentityPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteIdentityPolicy(request), context);
}

void SESClient::DeleteIdentityPolicyAsync(const DeleteIdentityPolicyRequest& request, const DeleteIdentityPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientDeleteIdentityPolicyAsyncHelper( this, request, handler, context ); } );
}

DeleteReceiptFilterOutcome SESClient::DeleteReceiptFilter(const DeleteReceiptFilterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteReceiptFilterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteReceiptFilterOutcomeCallable SESClient::DeleteReceiptFilterCallable(const DeleteReceiptFilterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteReceiptFilterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteReceiptFilter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientDeleteReceiptFilterAsyncHelper(SESClient const * const clientThis, const DeleteReceiptFilterRequest& request, const DeleteReceiptFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteReceiptFilter(request), context);
}

void SESClient::DeleteReceiptFilterAsync(const DeleteReceiptFilterRequest& request, const DeleteReceiptFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientDeleteReceiptFilterAsyncHelper( this, request, handler, context ); } );
}

DeleteReceiptRuleOutcome SESClient::DeleteReceiptRule(const DeleteReceiptRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteReceiptRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteReceiptRuleOutcomeCallable SESClient::DeleteReceiptRuleCallable(const DeleteReceiptRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteReceiptRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteReceiptRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientDeleteReceiptRuleAsyncHelper(SESClient const * const clientThis, const DeleteReceiptRuleRequest& request, const DeleteReceiptRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteReceiptRule(request), context);
}

void SESClient::DeleteReceiptRuleAsync(const DeleteReceiptRuleRequest& request, const DeleteReceiptRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientDeleteReceiptRuleAsyncHelper( this, request, handler, context ); } );
}

DeleteReceiptRuleSetOutcome SESClient::DeleteReceiptRuleSet(const DeleteReceiptRuleSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteReceiptRuleSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteReceiptRuleSetOutcomeCallable SESClient::DeleteReceiptRuleSetCallable(const DeleteReceiptRuleSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteReceiptRuleSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteReceiptRuleSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientDeleteReceiptRuleSetAsyncHelper(SESClient const * const clientThis, const DeleteReceiptRuleSetRequest& request, const DeleteReceiptRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteReceiptRuleSet(request), context);
}

void SESClient::DeleteReceiptRuleSetAsync(const DeleteReceiptRuleSetRequest& request, const DeleteReceiptRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientDeleteReceiptRuleSetAsyncHelper( this, request, handler, context ); } );
}

DeleteTemplateOutcome SESClient::DeleteTemplate(const DeleteTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteTemplateOutcomeCallable SESClient::DeleteTemplateCallable(const DeleteTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientDeleteTemplateAsyncHelper(SESClient const * const clientThis, const DeleteTemplateRequest& request, const DeleteTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteTemplate(request), context);
}

void SESClient::DeleteTemplateAsync(const DeleteTemplateRequest& request, const DeleteTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientDeleteTemplateAsyncHelper( this, request, handler, context ); } );
}

DeleteVerifiedEmailAddressOutcome SESClient::DeleteVerifiedEmailAddress(const DeleteVerifiedEmailAddressRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteVerifiedEmailAddressOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteVerifiedEmailAddressOutcomeCallable SESClient::DeleteVerifiedEmailAddressCallable(const DeleteVerifiedEmailAddressRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVerifiedEmailAddressOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVerifiedEmailAddress(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientDeleteVerifiedEmailAddressAsyncHelper(SESClient const * const clientThis, const DeleteVerifiedEmailAddressRequest& request, const DeleteVerifiedEmailAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteVerifiedEmailAddress(request), context);
}

void SESClient::DeleteVerifiedEmailAddressAsync(const DeleteVerifiedEmailAddressRequest& request, const DeleteVerifiedEmailAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientDeleteVerifiedEmailAddressAsyncHelper( this, request, handler, context ); } );
}

DescribeActiveReceiptRuleSetOutcome SESClient::DescribeActiveReceiptRuleSet(const DescribeActiveReceiptRuleSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeActiveReceiptRuleSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeActiveReceiptRuleSetOutcomeCallable SESClient::DescribeActiveReceiptRuleSetCallable(const DescribeActiveReceiptRuleSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeActiveReceiptRuleSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeActiveReceiptRuleSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientDescribeActiveReceiptRuleSetAsyncHelper(SESClient const * const clientThis, const DescribeActiveReceiptRuleSetRequest& request, const DescribeActiveReceiptRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeActiveReceiptRuleSet(request), context);
}

void SESClient::DescribeActiveReceiptRuleSetAsync(const DescribeActiveReceiptRuleSetRequest& request, const DescribeActiveReceiptRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientDescribeActiveReceiptRuleSetAsyncHelper( this, request, handler, context ); } );
}

DescribeConfigurationSetOutcome SESClient::DescribeConfigurationSet(const DescribeConfigurationSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeConfigurationSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeConfigurationSetOutcomeCallable SESClient::DescribeConfigurationSetCallable(const DescribeConfigurationSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeConfigurationSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeConfigurationSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientDescribeConfigurationSetAsyncHelper(SESClient const * const clientThis, const DescribeConfigurationSetRequest& request, const DescribeConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeConfigurationSet(request), context);
}

void SESClient::DescribeConfigurationSetAsync(const DescribeConfigurationSetRequest& request, const DescribeConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientDescribeConfigurationSetAsyncHelper( this, request, handler, context ); } );
}

DescribeReceiptRuleOutcome SESClient::DescribeReceiptRule(const DescribeReceiptRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeReceiptRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeReceiptRuleOutcomeCallable SESClient::DescribeReceiptRuleCallable(const DescribeReceiptRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeReceiptRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeReceiptRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientDescribeReceiptRuleAsyncHelper(SESClient const * const clientThis, const DescribeReceiptRuleRequest& request, const DescribeReceiptRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeReceiptRule(request), context);
}

void SESClient::DescribeReceiptRuleAsync(const DescribeReceiptRuleRequest& request, const DescribeReceiptRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientDescribeReceiptRuleAsyncHelper( this, request, handler, context ); } );
}

DescribeReceiptRuleSetOutcome SESClient::DescribeReceiptRuleSet(const DescribeReceiptRuleSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeReceiptRuleSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeReceiptRuleSetOutcomeCallable SESClient::DescribeReceiptRuleSetCallable(const DescribeReceiptRuleSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeReceiptRuleSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeReceiptRuleSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientDescribeReceiptRuleSetAsyncHelper(SESClient const * const clientThis, const DescribeReceiptRuleSetRequest& request, const DescribeReceiptRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeReceiptRuleSet(request), context);
}

void SESClient::DescribeReceiptRuleSetAsync(const DescribeReceiptRuleSetRequest& request, const DescribeReceiptRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientDescribeReceiptRuleSetAsyncHelper( this, request, handler, context ); } );
}

GetAccountSendingEnabledOutcome SESClient::GetAccountSendingEnabled(const GetAccountSendingEnabledRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetAccountSendingEnabledOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

GetAccountSendingEnabledOutcomeCallable SESClient::GetAccountSendingEnabledCallable(const GetAccountSendingEnabledRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAccountSendingEnabledOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAccountSendingEnabled(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientGetAccountSendingEnabledAsyncHelper(SESClient const * const clientThis, const GetAccountSendingEnabledRequest& request, const GetAccountSendingEnabledResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetAccountSendingEnabled(request), context);
}

void SESClient::GetAccountSendingEnabledAsync(const GetAccountSendingEnabledRequest& request, const GetAccountSendingEnabledResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientGetAccountSendingEnabledAsyncHelper( this, request, handler, context ); } );
}

GetCustomVerificationEmailTemplateOutcome SESClient::GetCustomVerificationEmailTemplate(const GetCustomVerificationEmailTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetCustomVerificationEmailTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

GetCustomVerificationEmailTemplateOutcomeCallable SESClient::GetCustomVerificationEmailTemplateCallable(const GetCustomVerificationEmailTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCustomVerificationEmailTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCustomVerificationEmailTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientGetCustomVerificationEmailTemplateAsyncHelper(SESClient const * const clientThis, const GetCustomVerificationEmailTemplateRequest& request, const GetCustomVerificationEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetCustomVerificationEmailTemplate(request), context);
}

void SESClient::GetCustomVerificationEmailTemplateAsync(const GetCustomVerificationEmailTemplateRequest& request, const GetCustomVerificationEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientGetCustomVerificationEmailTemplateAsyncHelper( this, request, handler, context ); } );
}

GetIdentityDkimAttributesOutcome SESClient::GetIdentityDkimAttributes(const GetIdentityDkimAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetIdentityDkimAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

GetIdentityDkimAttributesOutcomeCallable SESClient::GetIdentityDkimAttributesCallable(const GetIdentityDkimAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetIdentityDkimAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetIdentityDkimAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientGetIdentityDkimAttributesAsyncHelper(SESClient const * const clientThis, const GetIdentityDkimAttributesRequest& request, const GetIdentityDkimAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetIdentityDkimAttributes(request), context);
}

void SESClient::GetIdentityDkimAttributesAsync(const GetIdentityDkimAttributesRequest& request, const GetIdentityDkimAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientGetIdentityDkimAttributesAsyncHelper( this, request, handler, context ); } );
}

GetIdentityMailFromDomainAttributesOutcome SESClient::GetIdentityMailFromDomainAttributes(const GetIdentityMailFromDomainAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetIdentityMailFromDomainAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

GetIdentityMailFromDomainAttributesOutcomeCallable SESClient::GetIdentityMailFromDomainAttributesCallable(const GetIdentityMailFromDomainAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetIdentityMailFromDomainAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetIdentityMailFromDomainAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientGetIdentityMailFromDomainAttributesAsyncHelper(SESClient const * const clientThis, const GetIdentityMailFromDomainAttributesRequest& request, const GetIdentityMailFromDomainAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetIdentityMailFromDomainAttributes(request), context);
}

void SESClient::GetIdentityMailFromDomainAttributesAsync(const GetIdentityMailFromDomainAttributesRequest& request, const GetIdentityMailFromDomainAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientGetIdentityMailFromDomainAttributesAsyncHelper( this, request, handler, context ); } );
}

GetIdentityNotificationAttributesOutcome SESClient::GetIdentityNotificationAttributes(const GetIdentityNotificationAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetIdentityNotificationAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

GetIdentityNotificationAttributesOutcomeCallable SESClient::GetIdentityNotificationAttributesCallable(const GetIdentityNotificationAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetIdentityNotificationAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetIdentityNotificationAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientGetIdentityNotificationAttributesAsyncHelper(SESClient const * const clientThis, const GetIdentityNotificationAttributesRequest& request, const GetIdentityNotificationAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetIdentityNotificationAttributes(request), context);
}

void SESClient::GetIdentityNotificationAttributesAsync(const GetIdentityNotificationAttributesRequest& request, const GetIdentityNotificationAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientGetIdentityNotificationAttributesAsyncHelper( this, request, handler, context ); } );
}

GetIdentityPoliciesOutcome SESClient::GetIdentityPolicies(const GetIdentityPoliciesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetIdentityPoliciesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

GetIdentityPoliciesOutcomeCallable SESClient::GetIdentityPoliciesCallable(const GetIdentityPoliciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetIdentityPoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetIdentityPolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientGetIdentityPoliciesAsyncHelper(SESClient const * const clientThis, const GetIdentityPoliciesRequest& request, const GetIdentityPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetIdentityPolicies(request), context);
}

void SESClient::GetIdentityPoliciesAsync(const GetIdentityPoliciesRequest& request, const GetIdentityPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientGetIdentityPoliciesAsyncHelper( this, request, handler, context ); } );
}

GetIdentityVerificationAttributesOutcome SESClient::GetIdentityVerificationAttributes(const GetIdentityVerificationAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetIdentityVerificationAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

GetIdentityVerificationAttributesOutcomeCallable SESClient::GetIdentityVerificationAttributesCallable(const GetIdentityVerificationAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetIdentityVerificationAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetIdentityVerificationAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientGetIdentityVerificationAttributesAsyncHelper(SESClient const * const clientThis, const GetIdentityVerificationAttributesRequest& request, const GetIdentityVerificationAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetIdentityVerificationAttributes(request), context);
}

void SESClient::GetIdentityVerificationAttributesAsync(const GetIdentityVerificationAttributesRequest& request, const GetIdentityVerificationAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientGetIdentityVerificationAttributesAsyncHelper( this, request, handler, context ); } );
}

GetSendQuotaOutcome SESClient::GetSendQuota(const GetSendQuotaRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetSendQuotaOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

GetSendQuotaOutcomeCallable SESClient::GetSendQuotaCallable(const GetSendQuotaRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSendQuotaOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSendQuota(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientGetSendQuotaAsyncHelper(SESClient const * const clientThis, const GetSendQuotaRequest& request, const GetSendQuotaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetSendQuota(request), context);
}

void SESClient::GetSendQuotaAsync(const GetSendQuotaRequest& request, const GetSendQuotaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientGetSendQuotaAsyncHelper( this, request, handler, context ); } );
}

GetSendStatisticsOutcome SESClient::GetSendStatistics(const GetSendStatisticsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetSendStatisticsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

GetSendStatisticsOutcomeCallable SESClient::GetSendStatisticsCallable(const GetSendStatisticsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSendStatisticsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSendStatistics(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientGetSendStatisticsAsyncHelper(SESClient const * const clientThis, const GetSendStatisticsRequest& request, const GetSendStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetSendStatistics(request), context);
}

void SESClient::GetSendStatisticsAsync(const GetSendStatisticsRequest& request, const GetSendStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientGetSendStatisticsAsyncHelper( this, request, handler, context ); } );
}

GetTemplateOutcome SESClient::GetTemplate(const GetTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

GetTemplateOutcomeCallable SESClient::GetTemplateCallable(const GetTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientGetTemplateAsyncHelper(SESClient const * const clientThis, const GetTemplateRequest& request, const GetTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetTemplate(request), context);
}

void SESClient::GetTemplateAsync(const GetTemplateRequest& request, const GetTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientGetTemplateAsyncHelper( this, request, handler, context ); } );
}

ListConfigurationSetsOutcome SESClient::ListConfigurationSets(const ListConfigurationSetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListConfigurationSetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListConfigurationSetsOutcomeCallable SESClient::ListConfigurationSetsCallable(const ListConfigurationSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListConfigurationSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListConfigurationSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientListConfigurationSetsAsyncHelper(SESClient const * const clientThis, const ListConfigurationSetsRequest& request, const ListConfigurationSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListConfigurationSets(request), context);
}

void SESClient::ListConfigurationSetsAsync(const ListConfigurationSetsRequest& request, const ListConfigurationSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientListConfigurationSetsAsyncHelper( this, request, handler, context ); } );
}

ListCustomVerificationEmailTemplatesOutcome SESClient::ListCustomVerificationEmailTemplates(const ListCustomVerificationEmailTemplatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListCustomVerificationEmailTemplatesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListCustomVerificationEmailTemplatesOutcomeCallable SESClient::ListCustomVerificationEmailTemplatesCallable(const ListCustomVerificationEmailTemplatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCustomVerificationEmailTemplatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCustomVerificationEmailTemplates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientListCustomVerificationEmailTemplatesAsyncHelper(SESClient const * const clientThis, const ListCustomVerificationEmailTemplatesRequest& request, const ListCustomVerificationEmailTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListCustomVerificationEmailTemplates(request), context);
}

void SESClient::ListCustomVerificationEmailTemplatesAsync(const ListCustomVerificationEmailTemplatesRequest& request, const ListCustomVerificationEmailTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientListCustomVerificationEmailTemplatesAsyncHelper( this, request, handler, context ); } );
}

ListIdentitiesOutcome SESClient::ListIdentities(const ListIdentitiesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListIdentitiesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListIdentitiesOutcomeCallable SESClient::ListIdentitiesCallable(const ListIdentitiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListIdentitiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListIdentities(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientListIdentitiesAsyncHelper(SESClient const * const clientThis, const ListIdentitiesRequest& request, const ListIdentitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListIdentities(request), context);
}

void SESClient::ListIdentitiesAsync(const ListIdentitiesRequest& request, const ListIdentitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientListIdentitiesAsyncHelper( this, request, handler, context ); } );
}

ListIdentityPoliciesOutcome SESClient::ListIdentityPolicies(const ListIdentityPoliciesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListIdentityPoliciesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListIdentityPoliciesOutcomeCallable SESClient::ListIdentityPoliciesCallable(const ListIdentityPoliciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListIdentityPoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListIdentityPolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientListIdentityPoliciesAsyncHelper(SESClient const * const clientThis, const ListIdentityPoliciesRequest& request, const ListIdentityPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListIdentityPolicies(request), context);
}

void SESClient::ListIdentityPoliciesAsync(const ListIdentityPoliciesRequest& request, const ListIdentityPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientListIdentityPoliciesAsyncHelper( this, request, handler, context ); } );
}

ListReceiptFiltersOutcome SESClient::ListReceiptFilters(const ListReceiptFiltersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListReceiptFiltersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListReceiptFiltersOutcomeCallable SESClient::ListReceiptFiltersCallable(const ListReceiptFiltersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListReceiptFiltersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListReceiptFilters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientListReceiptFiltersAsyncHelper(SESClient const * const clientThis, const ListReceiptFiltersRequest& request, const ListReceiptFiltersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListReceiptFilters(request), context);
}

void SESClient::ListReceiptFiltersAsync(const ListReceiptFiltersRequest& request, const ListReceiptFiltersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientListReceiptFiltersAsyncHelper( this, request, handler, context ); } );
}

ListReceiptRuleSetsOutcome SESClient::ListReceiptRuleSets(const ListReceiptRuleSetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListReceiptRuleSetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListReceiptRuleSetsOutcomeCallable SESClient::ListReceiptRuleSetsCallable(const ListReceiptRuleSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListReceiptRuleSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListReceiptRuleSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientListReceiptRuleSetsAsyncHelper(SESClient const * const clientThis, const ListReceiptRuleSetsRequest& request, const ListReceiptRuleSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListReceiptRuleSets(request), context);
}

void SESClient::ListReceiptRuleSetsAsync(const ListReceiptRuleSetsRequest& request, const ListReceiptRuleSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientListReceiptRuleSetsAsyncHelper( this, request, handler, context ); } );
}

ListTemplatesOutcome SESClient::ListTemplates(const ListTemplatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTemplatesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListTemplatesOutcomeCallable SESClient::ListTemplatesCallable(const ListTemplatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTemplatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTemplates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientListTemplatesAsyncHelper(SESClient const * const clientThis, const ListTemplatesRequest& request, const ListTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTemplates(request), context);
}

void SESClient::ListTemplatesAsync(const ListTemplatesRequest& request, const ListTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientListTemplatesAsyncHelper( this, request, handler, context ); } );
}

ListVerifiedEmailAddressesOutcome SESClient::ListVerifiedEmailAddresses(const ListVerifiedEmailAddressesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListVerifiedEmailAddressesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListVerifiedEmailAddressesOutcomeCallable SESClient::ListVerifiedEmailAddressesCallable(const ListVerifiedEmailAddressesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListVerifiedEmailAddressesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListVerifiedEmailAddresses(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientListVerifiedEmailAddressesAsyncHelper(SESClient const * const clientThis, const ListVerifiedEmailAddressesRequest& request, const ListVerifiedEmailAddressesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListVerifiedEmailAddresses(request), context);
}

void SESClient::ListVerifiedEmailAddressesAsync(const ListVerifiedEmailAddressesRequest& request, const ListVerifiedEmailAddressesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientListVerifiedEmailAddressesAsyncHelper( this, request, handler, context ); } );
}

PutConfigurationSetDeliveryOptionsOutcome SESClient::PutConfigurationSetDeliveryOptions(const PutConfigurationSetDeliveryOptionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutConfigurationSetDeliveryOptionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

PutConfigurationSetDeliveryOptionsOutcomeCallable SESClient::PutConfigurationSetDeliveryOptionsCallable(const PutConfigurationSetDeliveryOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutConfigurationSetDeliveryOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutConfigurationSetDeliveryOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientPutConfigurationSetDeliveryOptionsAsyncHelper(SESClient const * const clientThis, const PutConfigurationSetDeliveryOptionsRequest& request, const PutConfigurationSetDeliveryOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutConfigurationSetDeliveryOptions(request), context);
}

void SESClient::PutConfigurationSetDeliveryOptionsAsync(const PutConfigurationSetDeliveryOptionsRequest& request, const PutConfigurationSetDeliveryOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientPutConfigurationSetDeliveryOptionsAsyncHelper( this, request, handler, context ); } );
}

PutIdentityPolicyOutcome SESClient::PutIdentityPolicy(const PutIdentityPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutIdentityPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

PutIdentityPolicyOutcomeCallable SESClient::PutIdentityPolicyCallable(const PutIdentityPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutIdentityPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutIdentityPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientPutIdentityPolicyAsyncHelper(SESClient const * const clientThis, const PutIdentityPolicyRequest& request, const PutIdentityPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutIdentityPolicy(request), context);
}

void SESClient::PutIdentityPolicyAsync(const PutIdentityPolicyRequest& request, const PutIdentityPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientPutIdentityPolicyAsyncHelper( this, request, handler, context ); } );
}

ReorderReceiptRuleSetOutcome SESClient::ReorderReceiptRuleSet(const ReorderReceiptRuleSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ReorderReceiptRuleSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ReorderReceiptRuleSetOutcomeCallable SESClient::ReorderReceiptRuleSetCallable(const ReorderReceiptRuleSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ReorderReceiptRuleSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ReorderReceiptRuleSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientReorderReceiptRuleSetAsyncHelper(SESClient const * const clientThis, const ReorderReceiptRuleSetRequest& request, const ReorderReceiptRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ReorderReceiptRuleSet(request), context);
}

void SESClient::ReorderReceiptRuleSetAsync(const ReorderReceiptRuleSetRequest& request, const ReorderReceiptRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientReorderReceiptRuleSetAsyncHelper( this, request, handler, context ); } );
}

SendBounceOutcome SESClient::SendBounce(const SendBounceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SendBounceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

SendBounceOutcomeCallable SESClient::SendBounceCallable(const SendBounceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SendBounceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SendBounce(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientSendBounceAsyncHelper(SESClient const * const clientThis, const SendBounceRequest& request, const SendBounceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SendBounce(request), context);
}

void SESClient::SendBounceAsync(const SendBounceRequest& request, const SendBounceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientSendBounceAsyncHelper( this, request, handler, context ); } );
}

SendBulkTemplatedEmailOutcome SESClient::SendBulkTemplatedEmail(const SendBulkTemplatedEmailRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SendBulkTemplatedEmailOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

SendBulkTemplatedEmailOutcomeCallable SESClient::SendBulkTemplatedEmailCallable(const SendBulkTemplatedEmailRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SendBulkTemplatedEmailOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SendBulkTemplatedEmail(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientSendBulkTemplatedEmailAsyncHelper(SESClient const * const clientThis, const SendBulkTemplatedEmailRequest& request, const SendBulkTemplatedEmailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SendBulkTemplatedEmail(request), context);
}

void SESClient::SendBulkTemplatedEmailAsync(const SendBulkTemplatedEmailRequest& request, const SendBulkTemplatedEmailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientSendBulkTemplatedEmailAsyncHelper( this, request, handler, context ); } );
}

SendCustomVerificationEmailOutcome SESClient::SendCustomVerificationEmail(const SendCustomVerificationEmailRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SendCustomVerificationEmailOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

SendCustomVerificationEmailOutcomeCallable SESClient::SendCustomVerificationEmailCallable(const SendCustomVerificationEmailRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SendCustomVerificationEmailOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SendCustomVerificationEmail(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientSendCustomVerificationEmailAsyncHelper(SESClient const * const clientThis, const SendCustomVerificationEmailRequest& request, const SendCustomVerificationEmailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SendCustomVerificationEmail(request), context);
}

void SESClient::SendCustomVerificationEmailAsync(const SendCustomVerificationEmailRequest& request, const SendCustomVerificationEmailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientSendCustomVerificationEmailAsyncHelper( this, request, handler, context ); } );
}

SendEmailOutcome SESClient::SendEmail(const SendEmailRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SendEmailOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

SendEmailOutcomeCallable SESClient::SendEmailCallable(const SendEmailRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SendEmailOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SendEmail(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientSendEmailAsyncHelper(SESClient const * const clientThis, const SendEmailRequest& request, const SendEmailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SendEmail(request), context);
}

void SESClient::SendEmailAsync(const SendEmailRequest& request, const SendEmailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientSendEmailAsyncHelper( this, request, handler, context ); } );
}

SendRawEmailOutcome SESClient::SendRawEmail(const SendRawEmailRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SendRawEmailOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

SendRawEmailOutcomeCallable SESClient::SendRawEmailCallable(const SendRawEmailRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SendRawEmailOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SendRawEmail(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientSendRawEmailAsyncHelper(SESClient const * const clientThis, const SendRawEmailRequest& request, const SendRawEmailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SendRawEmail(request), context);
}

void SESClient::SendRawEmailAsync(const SendRawEmailRequest& request, const SendRawEmailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientSendRawEmailAsyncHelper( this, request, handler, context ); } );
}

SendTemplatedEmailOutcome SESClient::SendTemplatedEmail(const SendTemplatedEmailRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SendTemplatedEmailOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

SendTemplatedEmailOutcomeCallable SESClient::SendTemplatedEmailCallable(const SendTemplatedEmailRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SendTemplatedEmailOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SendTemplatedEmail(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientSendTemplatedEmailAsyncHelper(SESClient const * const clientThis, const SendTemplatedEmailRequest& request, const SendTemplatedEmailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SendTemplatedEmail(request), context);
}

void SESClient::SendTemplatedEmailAsync(const SendTemplatedEmailRequest& request, const SendTemplatedEmailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientSendTemplatedEmailAsyncHelper( this, request, handler, context ); } );
}

SetActiveReceiptRuleSetOutcome SESClient::SetActiveReceiptRuleSet(const SetActiveReceiptRuleSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SetActiveReceiptRuleSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

SetActiveReceiptRuleSetOutcomeCallable SESClient::SetActiveReceiptRuleSetCallable(const SetActiveReceiptRuleSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetActiveReceiptRuleSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetActiveReceiptRuleSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientSetActiveReceiptRuleSetAsyncHelper(SESClient const * const clientThis, const SetActiveReceiptRuleSetRequest& request, const SetActiveReceiptRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SetActiveReceiptRuleSet(request), context);
}

void SESClient::SetActiveReceiptRuleSetAsync(const SetActiveReceiptRuleSetRequest& request, const SetActiveReceiptRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientSetActiveReceiptRuleSetAsyncHelper( this, request, handler, context ); } );
}

SetIdentityDkimEnabledOutcome SESClient::SetIdentityDkimEnabled(const SetIdentityDkimEnabledRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SetIdentityDkimEnabledOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

SetIdentityDkimEnabledOutcomeCallable SESClient::SetIdentityDkimEnabledCallable(const SetIdentityDkimEnabledRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetIdentityDkimEnabledOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetIdentityDkimEnabled(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientSetIdentityDkimEnabledAsyncHelper(SESClient const * const clientThis, const SetIdentityDkimEnabledRequest& request, const SetIdentityDkimEnabledResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SetIdentityDkimEnabled(request), context);
}

void SESClient::SetIdentityDkimEnabledAsync(const SetIdentityDkimEnabledRequest& request, const SetIdentityDkimEnabledResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientSetIdentityDkimEnabledAsyncHelper( this, request, handler, context ); } );
}

SetIdentityFeedbackForwardingEnabledOutcome SESClient::SetIdentityFeedbackForwardingEnabled(const SetIdentityFeedbackForwardingEnabledRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SetIdentityFeedbackForwardingEnabledOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

SetIdentityFeedbackForwardingEnabledOutcomeCallable SESClient::SetIdentityFeedbackForwardingEnabledCallable(const SetIdentityFeedbackForwardingEnabledRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetIdentityFeedbackForwardingEnabledOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetIdentityFeedbackForwardingEnabled(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientSetIdentityFeedbackForwardingEnabledAsyncHelper(SESClient const * const clientThis, const SetIdentityFeedbackForwardingEnabledRequest& request, const SetIdentityFeedbackForwardingEnabledResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SetIdentityFeedbackForwardingEnabled(request), context);
}

void SESClient::SetIdentityFeedbackForwardingEnabledAsync(const SetIdentityFeedbackForwardingEnabledRequest& request, const SetIdentityFeedbackForwardingEnabledResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientSetIdentityFeedbackForwardingEnabledAsyncHelper( this, request, handler, context ); } );
}

SetIdentityHeadersInNotificationsEnabledOutcome SESClient::SetIdentityHeadersInNotificationsEnabled(const SetIdentityHeadersInNotificationsEnabledRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SetIdentityHeadersInNotificationsEnabledOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

SetIdentityHeadersInNotificationsEnabledOutcomeCallable SESClient::SetIdentityHeadersInNotificationsEnabledCallable(const SetIdentityHeadersInNotificationsEnabledRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetIdentityHeadersInNotificationsEnabledOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetIdentityHeadersInNotificationsEnabled(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientSetIdentityHeadersInNotificationsEnabledAsyncHelper(SESClient const * const clientThis, const SetIdentityHeadersInNotificationsEnabledRequest& request, const SetIdentityHeadersInNotificationsEnabledResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SetIdentityHeadersInNotificationsEnabled(request), context);
}

void SESClient::SetIdentityHeadersInNotificationsEnabledAsync(const SetIdentityHeadersInNotificationsEnabledRequest& request, const SetIdentityHeadersInNotificationsEnabledResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientSetIdentityHeadersInNotificationsEnabledAsyncHelper( this, request, handler, context ); } );
}

SetIdentityMailFromDomainOutcome SESClient::SetIdentityMailFromDomain(const SetIdentityMailFromDomainRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SetIdentityMailFromDomainOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

SetIdentityMailFromDomainOutcomeCallable SESClient::SetIdentityMailFromDomainCallable(const SetIdentityMailFromDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetIdentityMailFromDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetIdentityMailFromDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientSetIdentityMailFromDomainAsyncHelper(SESClient const * const clientThis, const SetIdentityMailFromDomainRequest& request, const SetIdentityMailFromDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SetIdentityMailFromDomain(request), context);
}

void SESClient::SetIdentityMailFromDomainAsync(const SetIdentityMailFromDomainRequest& request, const SetIdentityMailFromDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientSetIdentityMailFromDomainAsyncHelper( this, request, handler, context ); } );
}

SetIdentityNotificationTopicOutcome SESClient::SetIdentityNotificationTopic(const SetIdentityNotificationTopicRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SetIdentityNotificationTopicOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

SetIdentityNotificationTopicOutcomeCallable SESClient::SetIdentityNotificationTopicCallable(const SetIdentityNotificationTopicRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetIdentityNotificationTopicOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetIdentityNotificationTopic(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientSetIdentityNotificationTopicAsyncHelper(SESClient const * const clientThis, const SetIdentityNotificationTopicRequest& request, const SetIdentityNotificationTopicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SetIdentityNotificationTopic(request), context);
}

void SESClient::SetIdentityNotificationTopicAsync(const SetIdentityNotificationTopicRequest& request, const SetIdentityNotificationTopicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientSetIdentityNotificationTopicAsyncHelper( this, request, handler, context ); } );
}

SetReceiptRulePositionOutcome SESClient::SetReceiptRulePosition(const SetReceiptRulePositionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SetReceiptRulePositionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

SetReceiptRulePositionOutcomeCallable SESClient::SetReceiptRulePositionCallable(const SetReceiptRulePositionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetReceiptRulePositionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetReceiptRulePosition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientSetReceiptRulePositionAsyncHelper(SESClient const * const clientThis, const SetReceiptRulePositionRequest& request, const SetReceiptRulePositionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SetReceiptRulePosition(request), context);
}

void SESClient::SetReceiptRulePositionAsync(const SetReceiptRulePositionRequest& request, const SetReceiptRulePositionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientSetReceiptRulePositionAsyncHelper( this, request, handler, context ); } );
}

TestRenderTemplateOutcome SESClient::TestRenderTemplate(const TestRenderTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TestRenderTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

TestRenderTemplateOutcomeCallable SESClient::TestRenderTemplateCallable(const TestRenderTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TestRenderTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TestRenderTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientTestRenderTemplateAsyncHelper(SESClient const * const clientThis, const TestRenderTemplateRequest& request, const TestRenderTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TestRenderTemplate(request), context);
}

void SESClient::TestRenderTemplateAsync(const TestRenderTemplateRequest& request, const TestRenderTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientTestRenderTemplateAsyncHelper( this, request, handler, context ); } );
}

UpdateAccountSendingEnabledOutcome SESClient::UpdateAccountSendingEnabled(const UpdateAccountSendingEnabledRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateAccountSendingEnabledOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

UpdateAccountSendingEnabledOutcomeCallable SESClient::UpdateAccountSendingEnabledCallable(const UpdateAccountSendingEnabledRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAccountSendingEnabledOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAccountSendingEnabled(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientUpdateAccountSendingEnabledAsyncHelper(SESClient const * const clientThis, const UpdateAccountSendingEnabledRequest& request, const UpdateAccountSendingEnabledResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateAccountSendingEnabled(request), context);
}

void SESClient::UpdateAccountSendingEnabledAsync(const UpdateAccountSendingEnabledRequest& request, const UpdateAccountSendingEnabledResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientUpdateAccountSendingEnabledAsyncHelper( this, request, handler, context ); } );
}

UpdateConfigurationSetEventDestinationOutcome SESClient::UpdateConfigurationSetEventDestination(const UpdateConfigurationSetEventDestinationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateConfigurationSetEventDestinationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

UpdateConfigurationSetEventDestinationOutcomeCallable SESClient::UpdateConfigurationSetEventDestinationCallable(const UpdateConfigurationSetEventDestinationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateConfigurationSetEventDestinationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateConfigurationSetEventDestination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientUpdateConfigurationSetEventDestinationAsyncHelper(SESClient const * const clientThis, const UpdateConfigurationSetEventDestinationRequest& request, const UpdateConfigurationSetEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateConfigurationSetEventDestination(request), context);
}

void SESClient::UpdateConfigurationSetEventDestinationAsync(const UpdateConfigurationSetEventDestinationRequest& request, const UpdateConfigurationSetEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientUpdateConfigurationSetEventDestinationAsyncHelper( this, request, handler, context ); } );
}

UpdateConfigurationSetReputationMetricsEnabledOutcome SESClient::UpdateConfigurationSetReputationMetricsEnabled(const UpdateConfigurationSetReputationMetricsEnabledRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateConfigurationSetReputationMetricsEnabledOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

UpdateConfigurationSetReputationMetricsEnabledOutcomeCallable SESClient::UpdateConfigurationSetReputationMetricsEnabledCallable(const UpdateConfigurationSetReputationMetricsEnabledRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateConfigurationSetReputationMetricsEnabledOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateConfigurationSetReputationMetricsEnabled(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientUpdateConfigurationSetReputationMetricsEnabledAsyncHelper(SESClient const * const clientThis, const UpdateConfigurationSetReputationMetricsEnabledRequest& request, const UpdateConfigurationSetReputationMetricsEnabledResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateConfigurationSetReputationMetricsEnabled(request), context);
}

void SESClient::UpdateConfigurationSetReputationMetricsEnabledAsync(const UpdateConfigurationSetReputationMetricsEnabledRequest& request, const UpdateConfigurationSetReputationMetricsEnabledResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientUpdateConfigurationSetReputationMetricsEnabledAsyncHelper( this, request, handler, context ); } );
}

UpdateConfigurationSetSendingEnabledOutcome SESClient::UpdateConfigurationSetSendingEnabled(const UpdateConfigurationSetSendingEnabledRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateConfigurationSetSendingEnabledOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

UpdateConfigurationSetSendingEnabledOutcomeCallable SESClient::UpdateConfigurationSetSendingEnabledCallable(const UpdateConfigurationSetSendingEnabledRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateConfigurationSetSendingEnabledOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateConfigurationSetSendingEnabled(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientUpdateConfigurationSetSendingEnabledAsyncHelper(SESClient const * const clientThis, const UpdateConfigurationSetSendingEnabledRequest& request, const UpdateConfigurationSetSendingEnabledResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateConfigurationSetSendingEnabled(request), context);
}

void SESClient::UpdateConfigurationSetSendingEnabledAsync(const UpdateConfigurationSetSendingEnabledRequest& request, const UpdateConfigurationSetSendingEnabledResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientUpdateConfigurationSetSendingEnabledAsyncHelper( this, request, handler, context ); } );
}

UpdateConfigurationSetTrackingOptionsOutcome SESClient::UpdateConfigurationSetTrackingOptions(const UpdateConfigurationSetTrackingOptionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateConfigurationSetTrackingOptionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

UpdateConfigurationSetTrackingOptionsOutcomeCallable SESClient::UpdateConfigurationSetTrackingOptionsCallable(const UpdateConfigurationSetTrackingOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateConfigurationSetTrackingOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateConfigurationSetTrackingOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientUpdateConfigurationSetTrackingOptionsAsyncHelper(SESClient const * const clientThis, const UpdateConfigurationSetTrackingOptionsRequest& request, const UpdateConfigurationSetTrackingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateConfigurationSetTrackingOptions(request), context);
}

void SESClient::UpdateConfigurationSetTrackingOptionsAsync(const UpdateConfigurationSetTrackingOptionsRequest& request, const UpdateConfigurationSetTrackingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientUpdateConfigurationSetTrackingOptionsAsyncHelper( this, request, handler, context ); } );
}

UpdateCustomVerificationEmailTemplateOutcome SESClient::UpdateCustomVerificationEmailTemplate(const UpdateCustomVerificationEmailTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateCustomVerificationEmailTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

UpdateCustomVerificationEmailTemplateOutcomeCallable SESClient::UpdateCustomVerificationEmailTemplateCallable(const UpdateCustomVerificationEmailTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateCustomVerificationEmailTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateCustomVerificationEmailTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientUpdateCustomVerificationEmailTemplateAsyncHelper(SESClient const * const clientThis, const UpdateCustomVerificationEmailTemplateRequest& request, const UpdateCustomVerificationEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateCustomVerificationEmailTemplate(request), context);
}

void SESClient::UpdateCustomVerificationEmailTemplateAsync(const UpdateCustomVerificationEmailTemplateRequest& request, const UpdateCustomVerificationEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientUpdateCustomVerificationEmailTemplateAsyncHelper( this, request, handler, context ); } );
}

UpdateReceiptRuleOutcome SESClient::UpdateReceiptRule(const UpdateReceiptRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateReceiptRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

UpdateReceiptRuleOutcomeCallable SESClient::UpdateReceiptRuleCallable(const UpdateReceiptRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateReceiptRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateReceiptRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientUpdateReceiptRuleAsyncHelper(SESClient const * const clientThis, const UpdateReceiptRuleRequest& request, const UpdateReceiptRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateReceiptRule(request), context);
}

void SESClient::UpdateReceiptRuleAsync(const UpdateReceiptRuleRequest& request, const UpdateReceiptRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientUpdateReceiptRuleAsyncHelper( this, request, handler, context ); } );
}

UpdateTemplateOutcome SESClient::UpdateTemplate(const UpdateTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

UpdateTemplateOutcomeCallable SESClient::UpdateTemplateCallable(const UpdateTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientUpdateTemplateAsyncHelper(SESClient const * const clientThis, const UpdateTemplateRequest& request, const UpdateTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateTemplate(request), context);
}

void SESClient::UpdateTemplateAsync(const UpdateTemplateRequest& request, const UpdateTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientUpdateTemplateAsyncHelper( this, request, handler, context ); } );
}

VerifyDomainDkimOutcome SESClient::VerifyDomainDkim(const VerifyDomainDkimRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return VerifyDomainDkimOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

VerifyDomainDkimOutcomeCallable SESClient::VerifyDomainDkimCallable(const VerifyDomainDkimRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< VerifyDomainDkimOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->VerifyDomainDkim(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientVerifyDomainDkimAsyncHelper(SESClient const * const clientThis, const VerifyDomainDkimRequest& request, const VerifyDomainDkimResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->VerifyDomainDkim(request), context);
}

void SESClient::VerifyDomainDkimAsync(const VerifyDomainDkimRequest& request, const VerifyDomainDkimResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientVerifyDomainDkimAsyncHelper( this, request, handler, context ); } );
}

VerifyDomainIdentityOutcome SESClient::VerifyDomainIdentity(const VerifyDomainIdentityRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return VerifyDomainIdentityOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

VerifyDomainIdentityOutcomeCallable SESClient::VerifyDomainIdentityCallable(const VerifyDomainIdentityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< VerifyDomainIdentityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->VerifyDomainIdentity(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientVerifyDomainIdentityAsyncHelper(SESClient const * const clientThis, const VerifyDomainIdentityRequest& request, const VerifyDomainIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->VerifyDomainIdentity(request), context);
}

void SESClient::VerifyDomainIdentityAsync(const VerifyDomainIdentityRequest& request, const VerifyDomainIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientVerifyDomainIdentityAsyncHelper( this, request, handler, context ); } );
}

VerifyEmailAddressOutcome SESClient::VerifyEmailAddress(const VerifyEmailAddressRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return VerifyEmailAddressOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

VerifyEmailAddressOutcomeCallable SESClient::VerifyEmailAddressCallable(const VerifyEmailAddressRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< VerifyEmailAddressOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->VerifyEmailAddress(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientVerifyEmailAddressAsyncHelper(SESClient const * const clientThis, const VerifyEmailAddressRequest& request, const VerifyEmailAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->VerifyEmailAddress(request), context);
}

void SESClient::VerifyEmailAddressAsync(const VerifyEmailAddressRequest& request, const VerifyEmailAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientVerifyEmailAddressAsyncHelper( this, request, handler, context ); } );
}

VerifyEmailIdentityOutcome SESClient::VerifyEmailIdentity(const VerifyEmailIdentityRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return VerifyEmailIdentityOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

VerifyEmailIdentityOutcomeCallable SESClient::VerifyEmailIdentityCallable(const VerifyEmailIdentityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< VerifyEmailIdentityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->VerifyEmailIdentity(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESClientVerifyEmailIdentityAsyncHelper(SESClient const * const clientThis, const VerifyEmailIdentityRequest& request, const VerifyEmailIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->VerifyEmailIdentity(request), context);
}

void SESClient::VerifyEmailIdentityAsync(const VerifyEmailIdentityRequest& request, const VerifyEmailIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESClientVerifyEmailIdentityAsyncHelper( this, request, handler, context ); } );
}

