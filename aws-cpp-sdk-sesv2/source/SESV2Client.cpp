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
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <aws/sesv2/SESV2Client.h>
#include <aws/sesv2/SESV2Endpoint.h>
#include <aws/sesv2/SESV2ErrorMarshaller.h>
#include <aws/sesv2/model/CreateConfigurationSetRequest.h>
#include <aws/sesv2/model/CreateConfigurationSetEventDestinationRequest.h>
#include <aws/sesv2/model/CreateContactRequest.h>
#include <aws/sesv2/model/CreateContactListRequest.h>
#include <aws/sesv2/model/CreateCustomVerificationEmailTemplateRequest.h>
#include <aws/sesv2/model/CreateDedicatedIpPoolRequest.h>
#include <aws/sesv2/model/CreateDeliverabilityTestReportRequest.h>
#include <aws/sesv2/model/CreateEmailIdentityRequest.h>
#include <aws/sesv2/model/CreateEmailIdentityPolicyRequest.h>
#include <aws/sesv2/model/CreateEmailTemplateRequest.h>
#include <aws/sesv2/model/CreateImportJobRequest.h>
#include <aws/sesv2/model/DeleteConfigurationSetRequest.h>
#include <aws/sesv2/model/DeleteConfigurationSetEventDestinationRequest.h>
#include <aws/sesv2/model/DeleteContactRequest.h>
#include <aws/sesv2/model/DeleteContactListRequest.h>
#include <aws/sesv2/model/DeleteCustomVerificationEmailTemplateRequest.h>
#include <aws/sesv2/model/DeleteDedicatedIpPoolRequest.h>
#include <aws/sesv2/model/DeleteEmailIdentityRequest.h>
#include <aws/sesv2/model/DeleteEmailIdentityPolicyRequest.h>
#include <aws/sesv2/model/DeleteEmailTemplateRequest.h>
#include <aws/sesv2/model/DeleteSuppressedDestinationRequest.h>
#include <aws/sesv2/model/GetAccountRequest.h>
#include <aws/sesv2/model/GetBlacklistReportsRequest.h>
#include <aws/sesv2/model/GetConfigurationSetRequest.h>
#include <aws/sesv2/model/GetConfigurationSetEventDestinationsRequest.h>
#include <aws/sesv2/model/GetContactRequest.h>
#include <aws/sesv2/model/GetContactListRequest.h>
#include <aws/sesv2/model/GetCustomVerificationEmailTemplateRequest.h>
#include <aws/sesv2/model/GetDedicatedIpRequest.h>
#include <aws/sesv2/model/GetDedicatedIpsRequest.h>
#include <aws/sesv2/model/GetDeliverabilityDashboardOptionsRequest.h>
#include <aws/sesv2/model/GetDeliverabilityTestReportRequest.h>
#include <aws/sesv2/model/GetDomainDeliverabilityCampaignRequest.h>
#include <aws/sesv2/model/GetDomainStatisticsReportRequest.h>
#include <aws/sesv2/model/GetEmailIdentityRequest.h>
#include <aws/sesv2/model/GetEmailIdentityPoliciesRequest.h>
#include <aws/sesv2/model/GetEmailTemplateRequest.h>
#include <aws/sesv2/model/GetImportJobRequest.h>
#include <aws/sesv2/model/GetSuppressedDestinationRequest.h>
#include <aws/sesv2/model/ListConfigurationSetsRequest.h>
#include <aws/sesv2/model/ListContactListsRequest.h>
#include <aws/sesv2/model/ListContactsRequest.h>
#include <aws/sesv2/model/ListCustomVerificationEmailTemplatesRequest.h>
#include <aws/sesv2/model/ListDedicatedIpPoolsRequest.h>
#include <aws/sesv2/model/ListDeliverabilityTestReportsRequest.h>
#include <aws/sesv2/model/ListDomainDeliverabilityCampaignsRequest.h>
#include <aws/sesv2/model/ListEmailIdentitiesRequest.h>
#include <aws/sesv2/model/ListEmailTemplatesRequest.h>
#include <aws/sesv2/model/ListImportJobsRequest.h>
#include <aws/sesv2/model/ListSuppressedDestinationsRequest.h>
#include <aws/sesv2/model/ListTagsForResourceRequest.h>
#include <aws/sesv2/model/PutAccountDedicatedIpWarmupAttributesRequest.h>
#include <aws/sesv2/model/PutAccountDetailsRequest.h>
#include <aws/sesv2/model/PutAccountSendingAttributesRequest.h>
#include <aws/sesv2/model/PutAccountSuppressionAttributesRequest.h>
#include <aws/sesv2/model/PutConfigurationSetDeliveryOptionsRequest.h>
#include <aws/sesv2/model/PutConfigurationSetReputationOptionsRequest.h>
#include <aws/sesv2/model/PutConfigurationSetSendingOptionsRequest.h>
#include <aws/sesv2/model/PutConfigurationSetSuppressionOptionsRequest.h>
#include <aws/sesv2/model/PutConfigurationSetTrackingOptionsRequest.h>
#include <aws/sesv2/model/PutDedicatedIpInPoolRequest.h>
#include <aws/sesv2/model/PutDedicatedIpWarmupAttributesRequest.h>
#include <aws/sesv2/model/PutDeliverabilityDashboardOptionRequest.h>
#include <aws/sesv2/model/PutEmailIdentityConfigurationSetAttributesRequest.h>
#include <aws/sesv2/model/PutEmailIdentityDkimAttributesRequest.h>
#include <aws/sesv2/model/PutEmailIdentityDkimSigningAttributesRequest.h>
#include <aws/sesv2/model/PutEmailIdentityFeedbackAttributesRequest.h>
#include <aws/sesv2/model/PutEmailIdentityMailFromAttributesRequest.h>
#include <aws/sesv2/model/PutSuppressedDestinationRequest.h>
#include <aws/sesv2/model/SendBulkEmailRequest.h>
#include <aws/sesv2/model/SendCustomVerificationEmailRequest.h>
#include <aws/sesv2/model/SendEmailRequest.h>
#include <aws/sesv2/model/TagResourceRequest.h>
#include <aws/sesv2/model/TestRenderEmailTemplateRequest.h>
#include <aws/sesv2/model/UntagResourceRequest.h>
#include <aws/sesv2/model/UpdateConfigurationSetEventDestinationRequest.h>
#include <aws/sesv2/model/UpdateContactRequest.h>
#include <aws/sesv2/model/UpdateContactListRequest.h>
#include <aws/sesv2/model/UpdateCustomVerificationEmailTemplateRequest.h>
#include <aws/sesv2/model/UpdateEmailIdentityPolicyRequest.h>
#include <aws/sesv2/model/UpdateEmailTemplateRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SESV2;
using namespace Aws::SESV2::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "ses";
static const char* ALLOCATION_TAG = "SESV2Client";

SESV2Client::SESV2Client(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SESV2ErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SESV2Client::SESV2Client(const AWSCredentials& credentials,
                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SESV2ErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SESV2Client::SESV2Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SESV2ErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SESV2Client::~SESV2Client()
{
}

void SESV2Client::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("SESv2");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + SESV2Endpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void SESV2Client::OverrideEndpoint(const Aws::String& endpoint)
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

CreateConfigurationSetOutcome SESV2Client::CreateConfigurationSet(const CreateConfigurationSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/configuration-sets");
  return CreateConfigurationSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateConfigurationSetOutcomeCallable SESV2Client::CreateConfigurationSetCallable(const CreateConfigurationSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateConfigurationSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateConfigurationSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientCreateConfigurationSetAsyncHelper(SESV2Client const * const clientThis, const CreateConfigurationSetRequest& request, const CreateConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateConfigurationSet(request), context);
}

void SESV2Client::CreateConfigurationSetAsync(const CreateConfigurationSetRequest& request, const CreateConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientCreateConfigurationSetAsyncHelper( this, request, handler, context ); } );
}

CreateConfigurationSetEventDestinationOutcome SESV2Client::CreateConfigurationSetEventDestination(const CreateConfigurationSetEventDestinationRequest& request) const
{
  if (!request.ConfigurationSetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateConfigurationSetEventDestination", "Required field: ConfigurationSetName, is not set");
    return CreateConfigurationSetEventDestinationOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationSetName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/configuration-sets/");
  uri.AddPathSegment(request.GetConfigurationSetName());
  uri.AddPathSegments("/event-destinations");
  return CreateConfigurationSetEventDestinationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateConfigurationSetEventDestinationOutcomeCallable SESV2Client::CreateConfigurationSetEventDestinationCallable(const CreateConfigurationSetEventDestinationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateConfigurationSetEventDestinationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateConfigurationSetEventDestination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientCreateConfigurationSetEventDestinationAsyncHelper(SESV2Client const * const clientThis, const CreateConfigurationSetEventDestinationRequest& request, const CreateConfigurationSetEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateConfigurationSetEventDestination(request), context);
}

void SESV2Client::CreateConfigurationSetEventDestinationAsync(const CreateConfigurationSetEventDestinationRequest& request, const CreateConfigurationSetEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientCreateConfigurationSetEventDestinationAsyncHelper( this, request, handler, context ); } );
}

CreateContactOutcome SESV2Client::CreateContact(const CreateContactRequest& request) const
{
  if (!request.ContactListNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateContact", "Required field: ContactListName, is not set");
    return CreateContactOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ContactListName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/contact-lists/");
  uri.AddPathSegment(request.GetContactListName());
  uri.AddPathSegments("/contacts");
  return CreateContactOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateContactOutcomeCallable SESV2Client::CreateContactCallable(const CreateContactRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateContactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateContact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientCreateContactAsyncHelper(SESV2Client const * const clientThis, const CreateContactRequest& request, const CreateContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateContact(request), context);
}

void SESV2Client::CreateContactAsync(const CreateContactRequest& request, const CreateContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientCreateContactAsyncHelper( this, request, handler, context ); } );
}

CreateContactListOutcome SESV2Client::CreateContactList(const CreateContactListRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/contact-lists");
  return CreateContactListOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateContactListOutcomeCallable SESV2Client::CreateContactListCallable(const CreateContactListRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateContactListOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateContactList(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientCreateContactListAsyncHelper(SESV2Client const * const clientThis, const CreateContactListRequest& request, const CreateContactListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateContactList(request), context);
}

void SESV2Client::CreateContactListAsync(const CreateContactListRequest& request, const CreateContactListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientCreateContactListAsyncHelper( this, request, handler, context ); } );
}

CreateCustomVerificationEmailTemplateOutcome SESV2Client::CreateCustomVerificationEmailTemplate(const CreateCustomVerificationEmailTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/custom-verification-email-templates");
  return CreateCustomVerificationEmailTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateCustomVerificationEmailTemplateOutcomeCallable SESV2Client::CreateCustomVerificationEmailTemplateCallable(const CreateCustomVerificationEmailTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCustomVerificationEmailTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCustomVerificationEmailTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientCreateCustomVerificationEmailTemplateAsyncHelper(SESV2Client const * const clientThis, const CreateCustomVerificationEmailTemplateRequest& request, const CreateCustomVerificationEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateCustomVerificationEmailTemplate(request), context);
}

void SESV2Client::CreateCustomVerificationEmailTemplateAsync(const CreateCustomVerificationEmailTemplateRequest& request, const CreateCustomVerificationEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientCreateCustomVerificationEmailTemplateAsyncHelper( this, request, handler, context ); } );
}

CreateDedicatedIpPoolOutcome SESV2Client::CreateDedicatedIpPool(const CreateDedicatedIpPoolRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/dedicated-ip-pools");
  return CreateDedicatedIpPoolOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDedicatedIpPoolOutcomeCallable SESV2Client::CreateDedicatedIpPoolCallable(const CreateDedicatedIpPoolRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDedicatedIpPoolOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDedicatedIpPool(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientCreateDedicatedIpPoolAsyncHelper(SESV2Client const * const clientThis, const CreateDedicatedIpPoolRequest& request, const CreateDedicatedIpPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDedicatedIpPool(request), context);
}

void SESV2Client::CreateDedicatedIpPoolAsync(const CreateDedicatedIpPoolRequest& request, const CreateDedicatedIpPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientCreateDedicatedIpPoolAsyncHelper( this, request, handler, context ); } );
}

CreateDeliverabilityTestReportOutcome SESV2Client::CreateDeliverabilityTestReport(const CreateDeliverabilityTestReportRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/deliverability-dashboard/test");
  return CreateDeliverabilityTestReportOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDeliverabilityTestReportOutcomeCallable SESV2Client::CreateDeliverabilityTestReportCallable(const CreateDeliverabilityTestReportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDeliverabilityTestReportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDeliverabilityTestReport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientCreateDeliverabilityTestReportAsyncHelper(SESV2Client const * const clientThis, const CreateDeliverabilityTestReportRequest& request, const CreateDeliverabilityTestReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDeliverabilityTestReport(request), context);
}

void SESV2Client::CreateDeliverabilityTestReportAsync(const CreateDeliverabilityTestReportRequest& request, const CreateDeliverabilityTestReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientCreateDeliverabilityTestReportAsyncHelper( this, request, handler, context ); } );
}

CreateEmailIdentityOutcome SESV2Client::CreateEmailIdentity(const CreateEmailIdentityRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/identities");
  return CreateEmailIdentityOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateEmailIdentityOutcomeCallable SESV2Client::CreateEmailIdentityCallable(const CreateEmailIdentityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateEmailIdentityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateEmailIdentity(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientCreateEmailIdentityAsyncHelper(SESV2Client const * const clientThis, const CreateEmailIdentityRequest& request, const CreateEmailIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateEmailIdentity(request), context);
}

void SESV2Client::CreateEmailIdentityAsync(const CreateEmailIdentityRequest& request, const CreateEmailIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientCreateEmailIdentityAsyncHelper( this, request, handler, context ); } );
}

CreateEmailIdentityPolicyOutcome SESV2Client::CreateEmailIdentityPolicy(const CreateEmailIdentityPolicyRequest& request) const
{
  if (!request.EmailIdentityHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateEmailIdentityPolicy", "Required field: EmailIdentity, is not set");
    return CreateEmailIdentityPolicyOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EmailIdentity]", false));
  }
  if (!request.PolicyNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateEmailIdentityPolicy", "Required field: PolicyName, is not set");
    return CreateEmailIdentityPolicyOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/identities/");
  uri.AddPathSegment(request.GetEmailIdentity());
  uri.AddPathSegments("/policies/");
  uri.AddPathSegment(request.GetPolicyName());
  return CreateEmailIdentityPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateEmailIdentityPolicyOutcomeCallable SESV2Client::CreateEmailIdentityPolicyCallable(const CreateEmailIdentityPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateEmailIdentityPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateEmailIdentityPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientCreateEmailIdentityPolicyAsyncHelper(SESV2Client const * const clientThis, const CreateEmailIdentityPolicyRequest& request, const CreateEmailIdentityPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateEmailIdentityPolicy(request), context);
}

void SESV2Client::CreateEmailIdentityPolicyAsync(const CreateEmailIdentityPolicyRequest& request, const CreateEmailIdentityPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientCreateEmailIdentityPolicyAsyncHelper( this, request, handler, context ); } );
}

CreateEmailTemplateOutcome SESV2Client::CreateEmailTemplate(const CreateEmailTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/templates");
  return CreateEmailTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateEmailTemplateOutcomeCallable SESV2Client::CreateEmailTemplateCallable(const CreateEmailTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateEmailTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateEmailTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientCreateEmailTemplateAsyncHelper(SESV2Client const * const clientThis, const CreateEmailTemplateRequest& request, const CreateEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateEmailTemplate(request), context);
}

void SESV2Client::CreateEmailTemplateAsync(const CreateEmailTemplateRequest& request, const CreateEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientCreateEmailTemplateAsyncHelper( this, request, handler, context ); } );
}

CreateImportJobOutcome SESV2Client::CreateImportJob(const CreateImportJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/import-jobs");
  return CreateImportJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateImportJobOutcomeCallable SESV2Client::CreateImportJobCallable(const CreateImportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateImportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateImportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientCreateImportJobAsyncHelper(SESV2Client const * const clientThis, const CreateImportJobRequest& request, const CreateImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateImportJob(request), context);
}

void SESV2Client::CreateImportJobAsync(const CreateImportJobRequest& request, const CreateImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientCreateImportJobAsyncHelper( this, request, handler, context ); } );
}

DeleteConfigurationSetOutcome SESV2Client::DeleteConfigurationSet(const DeleteConfigurationSetRequest& request) const
{
  if (!request.ConfigurationSetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteConfigurationSet", "Required field: ConfigurationSetName, is not set");
    return DeleteConfigurationSetOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationSetName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/configuration-sets/");
  uri.AddPathSegment(request.GetConfigurationSetName());
  return DeleteConfigurationSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteConfigurationSetOutcomeCallable SESV2Client::DeleteConfigurationSetCallable(const DeleteConfigurationSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteConfigurationSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteConfigurationSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientDeleteConfigurationSetAsyncHelper(SESV2Client const * const clientThis, const DeleteConfigurationSetRequest& request, const DeleteConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteConfigurationSet(request), context);
}

void SESV2Client::DeleteConfigurationSetAsync(const DeleteConfigurationSetRequest& request, const DeleteConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientDeleteConfigurationSetAsyncHelper( this, request, handler, context ); } );
}

DeleteConfigurationSetEventDestinationOutcome SESV2Client::DeleteConfigurationSetEventDestination(const DeleteConfigurationSetEventDestinationRequest& request) const
{
  if (!request.ConfigurationSetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteConfigurationSetEventDestination", "Required field: ConfigurationSetName, is not set");
    return DeleteConfigurationSetEventDestinationOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationSetName]", false));
  }
  if (!request.EventDestinationNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteConfigurationSetEventDestination", "Required field: EventDestinationName, is not set");
    return DeleteConfigurationSetEventDestinationOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EventDestinationName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/configuration-sets/");
  uri.AddPathSegment(request.GetConfigurationSetName());
  uri.AddPathSegments("/event-destinations/");
  uri.AddPathSegment(request.GetEventDestinationName());
  return DeleteConfigurationSetEventDestinationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteConfigurationSetEventDestinationOutcomeCallable SESV2Client::DeleteConfigurationSetEventDestinationCallable(const DeleteConfigurationSetEventDestinationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteConfigurationSetEventDestinationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteConfigurationSetEventDestination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientDeleteConfigurationSetEventDestinationAsyncHelper(SESV2Client const * const clientThis, const DeleteConfigurationSetEventDestinationRequest& request, const DeleteConfigurationSetEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteConfigurationSetEventDestination(request), context);
}

void SESV2Client::DeleteConfigurationSetEventDestinationAsync(const DeleteConfigurationSetEventDestinationRequest& request, const DeleteConfigurationSetEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientDeleteConfigurationSetEventDestinationAsyncHelper( this, request, handler, context ); } );
}

DeleteContactOutcome SESV2Client::DeleteContact(const DeleteContactRequest& request) const
{
  if (!request.ContactListNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteContact", "Required field: ContactListName, is not set");
    return DeleteContactOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ContactListName]", false));
  }
  if (!request.EmailAddressHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteContact", "Required field: EmailAddress, is not set");
    return DeleteContactOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EmailAddress]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/contact-lists/");
  uri.AddPathSegment(request.GetContactListName());
  uri.AddPathSegments("/contacts/");
  uri.AddPathSegment(request.GetEmailAddress());
  return DeleteContactOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteContactOutcomeCallable SESV2Client::DeleteContactCallable(const DeleteContactRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteContactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteContact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientDeleteContactAsyncHelper(SESV2Client const * const clientThis, const DeleteContactRequest& request, const DeleteContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteContact(request), context);
}

void SESV2Client::DeleteContactAsync(const DeleteContactRequest& request, const DeleteContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientDeleteContactAsyncHelper( this, request, handler, context ); } );
}

DeleteContactListOutcome SESV2Client::DeleteContactList(const DeleteContactListRequest& request) const
{
  if (!request.ContactListNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteContactList", "Required field: ContactListName, is not set");
    return DeleteContactListOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ContactListName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/contact-lists/");
  uri.AddPathSegment(request.GetContactListName());
  return DeleteContactListOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteContactListOutcomeCallable SESV2Client::DeleteContactListCallable(const DeleteContactListRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteContactListOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteContactList(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientDeleteContactListAsyncHelper(SESV2Client const * const clientThis, const DeleteContactListRequest& request, const DeleteContactListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteContactList(request), context);
}

void SESV2Client::DeleteContactListAsync(const DeleteContactListRequest& request, const DeleteContactListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientDeleteContactListAsyncHelper( this, request, handler, context ); } );
}

DeleteCustomVerificationEmailTemplateOutcome SESV2Client::DeleteCustomVerificationEmailTemplate(const DeleteCustomVerificationEmailTemplateRequest& request) const
{
  if (!request.TemplateNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteCustomVerificationEmailTemplate", "Required field: TemplateName, is not set");
    return DeleteCustomVerificationEmailTemplateOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/custom-verification-email-templates/");
  uri.AddPathSegment(request.GetTemplateName());
  return DeleteCustomVerificationEmailTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteCustomVerificationEmailTemplateOutcomeCallable SESV2Client::DeleteCustomVerificationEmailTemplateCallable(const DeleteCustomVerificationEmailTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCustomVerificationEmailTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCustomVerificationEmailTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientDeleteCustomVerificationEmailTemplateAsyncHelper(SESV2Client const * const clientThis, const DeleteCustomVerificationEmailTemplateRequest& request, const DeleteCustomVerificationEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteCustomVerificationEmailTemplate(request), context);
}

void SESV2Client::DeleteCustomVerificationEmailTemplateAsync(const DeleteCustomVerificationEmailTemplateRequest& request, const DeleteCustomVerificationEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientDeleteCustomVerificationEmailTemplateAsyncHelper( this, request, handler, context ); } );
}

DeleteDedicatedIpPoolOutcome SESV2Client::DeleteDedicatedIpPool(const DeleteDedicatedIpPoolRequest& request) const
{
  if (!request.PoolNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDedicatedIpPool", "Required field: PoolName, is not set");
    return DeleteDedicatedIpPoolOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PoolName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/dedicated-ip-pools/");
  uri.AddPathSegment(request.GetPoolName());
  return DeleteDedicatedIpPoolOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteDedicatedIpPoolOutcomeCallable SESV2Client::DeleteDedicatedIpPoolCallable(const DeleteDedicatedIpPoolRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDedicatedIpPoolOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDedicatedIpPool(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientDeleteDedicatedIpPoolAsyncHelper(SESV2Client const * const clientThis, const DeleteDedicatedIpPoolRequest& request, const DeleteDedicatedIpPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDedicatedIpPool(request), context);
}

void SESV2Client::DeleteDedicatedIpPoolAsync(const DeleteDedicatedIpPoolRequest& request, const DeleteDedicatedIpPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientDeleteDedicatedIpPoolAsyncHelper( this, request, handler, context ); } );
}

DeleteEmailIdentityOutcome SESV2Client::DeleteEmailIdentity(const DeleteEmailIdentityRequest& request) const
{
  if (!request.EmailIdentityHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteEmailIdentity", "Required field: EmailIdentity, is not set");
    return DeleteEmailIdentityOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EmailIdentity]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/identities/");
  uri.AddPathSegment(request.GetEmailIdentity());
  return DeleteEmailIdentityOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteEmailIdentityOutcomeCallable SESV2Client::DeleteEmailIdentityCallable(const DeleteEmailIdentityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEmailIdentityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEmailIdentity(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientDeleteEmailIdentityAsyncHelper(SESV2Client const * const clientThis, const DeleteEmailIdentityRequest& request, const DeleteEmailIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteEmailIdentity(request), context);
}

void SESV2Client::DeleteEmailIdentityAsync(const DeleteEmailIdentityRequest& request, const DeleteEmailIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientDeleteEmailIdentityAsyncHelper( this, request, handler, context ); } );
}

DeleteEmailIdentityPolicyOutcome SESV2Client::DeleteEmailIdentityPolicy(const DeleteEmailIdentityPolicyRequest& request) const
{
  if (!request.EmailIdentityHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteEmailIdentityPolicy", "Required field: EmailIdentity, is not set");
    return DeleteEmailIdentityPolicyOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EmailIdentity]", false));
  }
  if (!request.PolicyNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteEmailIdentityPolicy", "Required field: PolicyName, is not set");
    return DeleteEmailIdentityPolicyOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/identities/");
  uri.AddPathSegment(request.GetEmailIdentity());
  uri.AddPathSegments("/policies/");
  uri.AddPathSegment(request.GetPolicyName());
  return DeleteEmailIdentityPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteEmailIdentityPolicyOutcomeCallable SESV2Client::DeleteEmailIdentityPolicyCallable(const DeleteEmailIdentityPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEmailIdentityPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEmailIdentityPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientDeleteEmailIdentityPolicyAsyncHelper(SESV2Client const * const clientThis, const DeleteEmailIdentityPolicyRequest& request, const DeleteEmailIdentityPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteEmailIdentityPolicy(request), context);
}

void SESV2Client::DeleteEmailIdentityPolicyAsync(const DeleteEmailIdentityPolicyRequest& request, const DeleteEmailIdentityPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientDeleteEmailIdentityPolicyAsyncHelper( this, request, handler, context ); } );
}

DeleteEmailTemplateOutcome SESV2Client::DeleteEmailTemplate(const DeleteEmailTemplateRequest& request) const
{
  if (!request.TemplateNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteEmailTemplate", "Required field: TemplateName, is not set");
    return DeleteEmailTemplateOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/templates/");
  uri.AddPathSegment(request.GetTemplateName());
  return DeleteEmailTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteEmailTemplateOutcomeCallable SESV2Client::DeleteEmailTemplateCallable(const DeleteEmailTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEmailTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEmailTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientDeleteEmailTemplateAsyncHelper(SESV2Client const * const clientThis, const DeleteEmailTemplateRequest& request, const DeleteEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteEmailTemplate(request), context);
}

void SESV2Client::DeleteEmailTemplateAsync(const DeleteEmailTemplateRequest& request, const DeleteEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientDeleteEmailTemplateAsyncHelper( this, request, handler, context ); } );
}

DeleteSuppressedDestinationOutcome SESV2Client::DeleteSuppressedDestination(const DeleteSuppressedDestinationRequest& request) const
{
  if (!request.EmailAddressHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSuppressedDestination", "Required field: EmailAddress, is not set");
    return DeleteSuppressedDestinationOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EmailAddress]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/suppression/addresses/");
  uri.AddPathSegment(request.GetEmailAddress());
  return DeleteSuppressedDestinationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteSuppressedDestinationOutcomeCallable SESV2Client::DeleteSuppressedDestinationCallable(const DeleteSuppressedDestinationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSuppressedDestinationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSuppressedDestination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientDeleteSuppressedDestinationAsyncHelper(SESV2Client const * const clientThis, const DeleteSuppressedDestinationRequest& request, const DeleteSuppressedDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteSuppressedDestination(request), context);
}

void SESV2Client::DeleteSuppressedDestinationAsync(const DeleteSuppressedDestinationRequest& request, const DeleteSuppressedDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientDeleteSuppressedDestinationAsyncHelper( this, request, handler, context ); } );
}

GetAccountOutcome SESV2Client::GetAccount(const GetAccountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/account");
  return GetAccountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetAccountOutcomeCallable SESV2Client::GetAccountCallable(const GetAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientGetAccountAsyncHelper(SESV2Client const * const clientThis, const GetAccountRequest& request, const GetAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetAccount(request), context);
}

void SESV2Client::GetAccountAsync(const GetAccountRequest& request, const GetAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientGetAccountAsyncHelper( this, request, handler, context ); } );
}

GetBlacklistReportsOutcome SESV2Client::GetBlacklistReports(const GetBlacklistReportsRequest& request) const
{
  if (!request.BlacklistItemNamesHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBlacklistReports", "Required field: BlacklistItemNames, is not set");
    return GetBlacklistReportsOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BlacklistItemNames]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/deliverability-dashboard/blacklist-report");
  return GetBlacklistReportsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetBlacklistReportsOutcomeCallable SESV2Client::GetBlacklistReportsCallable(const GetBlacklistReportsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBlacklistReportsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBlacklistReports(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientGetBlacklistReportsAsyncHelper(SESV2Client const * const clientThis, const GetBlacklistReportsRequest& request, const GetBlacklistReportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetBlacklistReports(request), context);
}

void SESV2Client::GetBlacklistReportsAsync(const GetBlacklistReportsRequest& request, const GetBlacklistReportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientGetBlacklistReportsAsyncHelper( this, request, handler, context ); } );
}

GetConfigurationSetOutcome SESV2Client::GetConfigurationSet(const GetConfigurationSetRequest& request) const
{
  if (!request.ConfigurationSetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetConfigurationSet", "Required field: ConfigurationSetName, is not set");
    return GetConfigurationSetOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationSetName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/configuration-sets/");
  uri.AddPathSegment(request.GetConfigurationSetName());
  return GetConfigurationSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetConfigurationSetOutcomeCallable SESV2Client::GetConfigurationSetCallable(const GetConfigurationSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetConfigurationSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetConfigurationSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientGetConfigurationSetAsyncHelper(SESV2Client const * const clientThis, const GetConfigurationSetRequest& request, const GetConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetConfigurationSet(request), context);
}

void SESV2Client::GetConfigurationSetAsync(const GetConfigurationSetRequest& request, const GetConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientGetConfigurationSetAsyncHelper( this, request, handler, context ); } );
}

GetConfigurationSetEventDestinationsOutcome SESV2Client::GetConfigurationSetEventDestinations(const GetConfigurationSetEventDestinationsRequest& request) const
{
  if (!request.ConfigurationSetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetConfigurationSetEventDestinations", "Required field: ConfigurationSetName, is not set");
    return GetConfigurationSetEventDestinationsOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationSetName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/configuration-sets/");
  uri.AddPathSegment(request.GetConfigurationSetName());
  uri.AddPathSegments("/event-destinations");
  return GetConfigurationSetEventDestinationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetConfigurationSetEventDestinationsOutcomeCallable SESV2Client::GetConfigurationSetEventDestinationsCallable(const GetConfigurationSetEventDestinationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetConfigurationSetEventDestinationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetConfigurationSetEventDestinations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientGetConfigurationSetEventDestinationsAsyncHelper(SESV2Client const * const clientThis, const GetConfigurationSetEventDestinationsRequest& request, const GetConfigurationSetEventDestinationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetConfigurationSetEventDestinations(request), context);
}

void SESV2Client::GetConfigurationSetEventDestinationsAsync(const GetConfigurationSetEventDestinationsRequest& request, const GetConfigurationSetEventDestinationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientGetConfigurationSetEventDestinationsAsyncHelper( this, request, handler, context ); } );
}

GetContactOutcome SESV2Client::GetContact(const GetContactRequest& request) const
{
  if (!request.ContactListNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetContact", "Required field: ContactListName, is not set");
    return GetContactOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ContactListName]", false));
  }
  if (!request.EmailAddressHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetContact", "Required field: EmailAddress, is not set");
    return GetContactOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EmailAddress]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/contact-lists/");
  uri.AddPathSegment(request.GetContactListName());
  uri.AddPathSegments("/contacts/");
  uri.AddPathSegment(request.GetEmailAddress());
  return GetContactOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetContactOutcomeCallable SESV2Client::GetContactCallable(const GetContactRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetContactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetContact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientGetContactAsyncHelper(SESV2Client const * const clientThis, const GetContactRequest& request, const GetContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetContact(request), context);
}

void SESV2Client::GetContactAsync(const GetContactRequest& request, const GetContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientGetContactAsyncHelper( this, request, handler, context ); } );
}

GetContactListOutcome SESV2Client::GetContactList(const GetContactListRequest& request) const
{
  if (!request.ContactListNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetContactList", "Required field: ContactListName, is not set");
    return GetContactListOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ContactListName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/contact-lists/");
  uri.AddPathSegment(request.GetContactListName());
  return GetContactListOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetContactListOutcomeCallable SESV2Client::GetContactListCallable(const GetContactListRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetContactListOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetContactList(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientGetContactListAsyncHelper(SESV2Client const * const clientThis, const GetContactListRequest& request, const GetContactListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetContactList(request), context);
}

void SESV2Client::GetContactListAsync(const GetContactListRequest& request, const GetContactListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientGetContactListAsyncHelper( this, request, handler, context ); } );
}

GetCustomVerificationEmailTemplateOutcome SESV2Client::GetCustomVerificationEmailTemplate(const GetCustomVerificationEmailTemplateRequest& request) const
{
  if (!request.TemplateNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCustomVerificationEmailTemplate", "Required field: TemplateName, is not set");
    return GetCustomVerificationEmailTemplateOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/custom-verification-email-templates/");
  uri.AddPathSegment(request.GetTemplateName());
  return GetCustomVerificationEmailTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetCustomVerificationEmailTemplateOutcomeCallable SESV2Client::GetCustomVerificationEmailTemplateCallable(const GetCustomVerificationEmailTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCustomVerificationEmailTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCustomVerificationEmailTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientGetCustomVerificationEmailTemplateAsyncHelper(SESV2Client const * const clientThis, const GetCustomVerificationEmailTemplateRequest& request, const GetCustomVerificationEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetCustomVerificationEmailTemplate(request), context);
}

void SESV2Client::GetCustomVerificationEmailTemplateAsync(const GetCustomVerificationEmailTemplateRequest& request, const GetCustomVerificationEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientGetCustomVerificationEmailTemplateAsyncHelper( this, request, handler, context ); } );
}

GetDedicatedIpOutcome SESV2Client::GetDedicatedIp(const GetDedicatedIpRequest& request) const
{
  if (!request.IpHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDedicatedIp", "Required field: Ip, is not set");
    return GetDedicatedIpOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Ip]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/dedicated-ips/");
  uri.AddPathSegment(request.GetIp());
  return GetDedicatedIpOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDedicatedIpOutcomeCallable SESV2Client::GetDedicatedIpCallable(const GetDedicatedIpRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDedicatedIpOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDedicatedIp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientGetDedicatedIpAsyncHelper(SESV2Client const * const clientThis, const GetDedicatedIpRequest& request, const GetDedicatedIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDedicatedIp(request), context);
}

void SESV2Client::GetDedicatedIpAsync(const GetDedicatedIpRequest& request, const GetDedicatedIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientGetDedicatedIpAsyncHelper( this, request, handler, context ); } );
}

GetDedicatedIpsOutcome SESV2Client::GetDedicatedIps(const GetDedicatedIpsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/dedicated-ips");
  return GetDedicatedIpsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDedicatedIpsOutcomeCallable SESV2Client::GetDedicatedIpsCallable(const GetDedicatedIpsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDedicatedIpsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDedicatedIps(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientGetDedicatedIpsAsyncHelper(SESV2Client const * const clientThis, const GetDedicatedIpsRequest& request, const GetDedicatedIpsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDedicatedIps(request), context);
}

void SESV2Client::GetDedicatedIpsAsync(const GetDedicatedIpsRequest& request, const GetDedicatedIpsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientGetDedicatedIpsAsyncHelper( this, request, handler, context ); } );
}

GetDeliverabilityDashboardOptionsOutcome SESV2Client::GetDeliverabilityDashboardOptions(const GetDeliverabilityDashboardOptionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/deliverability-dashboard");
  return GetDeliverabilityDashboardOptionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDeliverabilityDashboardOptionsOutcomeCallable SESV2Client::GetDeliverabilityDashboardOptionsCallable(const GetDeliverabilityDashboardOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDeliverabilityDashboardOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDeliverabilityDashboardOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientGetDeliverabilityDashboardOptionsAsyncHelper(SESV2Client const * const clientThis, const GetDeliverabilityDashboardOptionsRequest& request, const GetDeliverabilityDashboardOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDeliverabilityDashboardOptions(request), context);
}

void SESV2Client::GetDeliverabilityDashboardOptionsAsync(const GetDeliverabilityDashboardOptionsRequest& request, const GetDeliverabilityDashboardOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientGetDeliverabilityDashboardOptionsAsyncHelper( this, request, handler, context ); } );
}

GetDeliverabilityTestReportOutcome SESV2Client::GetDeliverabilityTestReport(const GetDeliverabilityTestReportRequest& request) const
{
  if (!request.ReportIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDeliverabilityTestReport", "Required field: ReportId, is not set");
    return GetDeliverabilityTestReportOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ReportId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/deliverability-dashboard/test-reports/");
  uri.AddPathSegment(request.GetReportId());
  return GetDeliverabilityTestReportOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDeliverabilityTestReportOutcomeCallable SESV2Client::GetDeliverabilityTestReportCallable(const GetDeliverabilityTestReportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDeliverabilityTestReportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDeliverabilityTestReport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientGetDeliverabilityTestReportAsyncHelper(SESV2Client const * const clientThis, const GetDeliverabilityTestReportRequest& request, const GetDeliverabilityTestReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDeliverabilityTestReport(request), context);
}

void SESV2Client::GetDeliverabilityTestReportAsync(const GetDeliverabilityTestReportRequest& request, const GetDeliverabilityTestReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientGetDeliverabilityTestReportAsyncHelper( this, request, handler, context ); } );
}

GetDomainDeliverabilityCampaignOutcome SESV2Client::GetDomainDeliverabilityCampaign(const GetDomainDeliverabilityCampaignRequest& request) const
{
  if (!request.CampaignIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDomainDeliverabilityCampaign", "Required field: CampaignId, is not set");
    return GetDomainDeliverabilityCampaignOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CampaignId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/deliverability-dashboard/campaigns/");
  uri.AddPathSegment(request.GetCampaignId());
  return GetDomainDeliverabilityCampaignOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDomainDeliverabilityCampaignOutcomeCallable SESV2Client::GetDomainDeliverabilityCampaignCallable(const GetDomainDeliverabilityCampaignRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDomainDeliverabilityCampaignOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDomainDeliverabilityCampaign(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientGetDomainDeliverabilityCampaignAsyncHelper(SESV2Client const * const clientThis, const GetDomainDeliverabilityCampaignRequest& request, const GetDomainDeliverabilityCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDomainDeliverabilityCampaign(request), context);
}

void SESV2Client::GetDomainDeliverabilityCampaignAsync(const GetDomainDeliverabilityCampaignRequest& request, const GetDomainDeliverabilityCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientGetDomainDeliverabilityCampaignAsyncHelper( this, request, handler, context ); } );
}

GetDomainStatisticsReportOutcome SESV2Client::GetDomainStatisticsReport(const GetDomainStatisticsReportRequest& request) const
{
  if (!request.DomainHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDomainStatisticsReport", "Required field: Domain, is not set");
    return GetDomainStatisticsReportOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Domain]", false));
  }
  if (!request.StartDateHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDomainStatisticsReport", "Required field: StartDate, is not set");
    return GetDomainStatisticsReportOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StartDate]", false));
  }
  if (!request.EndDateHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDomainStatisticsReport", "Required field: EndDate, is not set");
    return GetDomainStatisticsReportOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndDate]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/deliverability-dashboard/statistics-report/");
  uri.AddPathSegment(request.GetDomain());
  return GetDomainStatisticsReportOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDomainStatisticsReportOutcomeCallable SESV2Client::GetDomainStatisticsReportCallable(const GetDomainStatisticsReportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDomainStatisticsReportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDomainStatisticsReport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientGetDomainStatisticsReportAsyncHelper(SESV2Client const * const clientThis, const GetDomainStatisticsReportRequest& request, const GetDomainStatisticsReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDomainStatisticsReport(request), context);
}

void SESV2Client::GetDomainStatisticsReportAsync(const GetDomainStatisticsReportRequest& request, const GetDomainStatisticsReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientGetDomainStatisticsReportAsyncHelper( this, request, handler, context ); } );
}

GetEmailIdentityOutcome SESV2Client::GetEmailIdentity(const GetEmailIdentityRequest& request) const
{
  if (!request.EmailIdentityHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetEmailIdentity", "Required field: EmailIdentity, is not set");
    return GetEmailIdentityOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EmailIdentity]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/identities/");
  uri.AddPathSegment(request.GetEmailIdentity());
  return GetEmailIdentityOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetEmailIdentityOutcomeCallable SESV2Client::GetEmailIdentityCallable(const GetEmailIdentityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEmailIdentityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEmailIdentity(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientGetEmailIdentityAsyncHelper(SESV2Client const * const clientThis, const GetEmailIdentityRequest& request, const GetEmailIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetEmailIdentity(request), context);
}

void SESV2Client::GetEmailIdentityAsync(const GetEmailIdentityRequest& request, const GetEmailIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientGetEmailIdentityAsyncHelper( this, request, handler, context ); } );
}

GetEmailIdentityPoliciesOutcome SESV2Client::GetEmailIdentityPolicies(const GetEmailIdentityPoliciesRequest& request) const
{
  if (!request.EmailIdentityHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetEmailIdentityPolicies", "Required field: EmailIdentity, is not set");
    return GetEmailIdentityPoliciesOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EmailIdentity]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/identities/");
  uri.AddPathSegment(request.GetEmailIdentity());
  uri.AddPathSegments("/policies");
  return GetEmailIdentityPoliciesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetEmailIdentityPoliciesOutcomeCallable SESV2Client::GetEmailIdentityPoliciesCallable(const GetEmailIdentityPoliciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEmailIdentityPoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEmailIdentityPolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientGetEmailIdentityPoliciesAsyncHelper(SESV2Client const * const clientThis, const GetEmailIdentityPoliciesRequest& request, const GetEmailIdentityPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetEmailIdentityPolicies(request), context);
}

void SESV2Client::GetEmailIdentityPoliciesAsync(const GetEmailIdentityPoliciesRequest& request, const GetEmailIdentityPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientGetEmailIdentityPoliciesAsyncHelper( this, request, handler, context ); } );
}

GetEmailTemplateOutcome SESV2Client::GetEmailTemplate(const GetEmailTemplateRequest& request) const
{
  if (!request.TemplateNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetEmailTemplate", "Required field: TemplateName, is not set");
    return GetEmailTemplateOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/templates/");
  uri.AddPathSegment(request.GetTemplateName());
  return GetEmailTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetEmailTemplateOutcomeCallable SESV2Client::GetEmailTemplateCallable(const GetEmailTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEmailTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEmailTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientGetEmailTemplateAsyncHelper(SESV2Client const * const clientThis, const GetEmailTemplateRequest& request, const GetEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetEmailTemplate(request), context);
}

void SESV2Client::GetEmailTemplateAsync(const GetEmailTemplateRequest& request, const GetEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientGetEmailTemplateAsyncHelper( this, request, handler, context ); } );
}

GetImportJobOutcome SESV2Client::GetImportJob(const GetImportJobRequest& request) const
{
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetImportJob", "Required field: JobId, is not set");
    return GetImportJobOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/import-jobs/");
  uri.AddPathSegment(request.GetJobId());
  return GetImportJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetImportJobOutcomeCallable SESV2Client::GetImportJobCallable(const GetImportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetImportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetImportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientGetImportJobAsyncHelper(SESV2Client const * const clientThis, const GetImportJobRequest& request, const GetImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetImportJob(request), context);
}

void SESV2Client::GetImportJobAsync(const GetImportJobRequest& request, const GetImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientGetImportJobAsyncHelper( this, request, handler, context ); } );
}

GetSuppressedDestinationOutcome SESV2Client::GetSuppressedDestination(const GetSuppressedDestinationRequest& request) const
{
  if (!request.EmailAddressHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSuppressedDestination", "Required field: EmailAddress, is not set");
    return GetSuppressedDestinationOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EmailAddress]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/suppression/addresses/");
  uri.AddPathSegment(request.GetEmailAddress());
  return GetSuppressedDestinationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSuppressedDestinationOutcomeCallable SESV2Client::GetSuppressedDestinationCallable(const GetSuppressedDestinationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSuppressedDestinationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSuppressedDestination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientGetSuppressedDestinationAsyncHelper(SESV2Client const * const clientThis, const GetSuppressedDestinationRequest& request, const GetSuppressedDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetSuppressedDestination(request), context);
}

void SESV2Client::GetSuppressedDestinationAsync(const GetSuppressedDestinationRequest& request, const GetSuppressedDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientGetSuppressedDestinationAsyncHelper( this, request, handler, context ); } );
}

ListConfigurationSetsOutcome SESV2Client::ListConfigurationSets(const ListConfigurationSetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/configuration-sets");
  return ListConfigurationSetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListConfigurationSetsOutcomeCallable SESV2Client::ListConfigurationSetsCallable(const ListConfigurationSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListConfigurationSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListConfigurationSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientListConfigurationSetsAsyncHelper(SESV2Client const * const clientThis, const ListConfigurationSetsRequest& request, const ListConfigurationSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListConfigurationSets(request), context);
}

void SESV2Client::ListConfigurationSetsAsync(const ListConfigurationSetsRequest& request, const ListConfigurationSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientListConfigurationSetsAsyncHelper( this, request, handler, context ); } );
}

ListContactListsOutcome SESV2Client::ListContactLists(const ListContactListsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/contact-lists");
  return ListContactListsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListContactListsOutcomeCallable SESV2Client::ListContactListsCallable(const ListContactListsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListContactListsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListContactLists(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientListContactListsAsyncHelper(SESV2Client const * const clientThis, const ListContactListsRequest& request, const ListContactListsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListContactLists(request), context);
}

void SESV2Client::ListContactListsAsync(const ListContactListsRequest& request, const ListContactListsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientListContactListsAsyncHelper( this, request, handler, context ); } );
}

ListContactsOutcome SESV2Client::ListContacts(const ListContactsRequest& request) const
{
  if (!request.ContactListNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListContacts", "Required field: ContactListName, is not set");
    return ListContactsOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ContactListName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/contact-lists/");
  uri.AddPathSegment(request.GetContactListName());
  uri.AddPathSegments("/contacts");
  return ListContactsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListContactsOutcomeCallable SESV2Client::ListContactsCallable(const ListContactsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListContactsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListContacts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientListContactsAsyncHelper(SESV2Client const * const clientThis, const ListContactsRequest& request, const ListContactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListContacts(request), context);
}

void SESV2Client::ListContactsAsync(const ListContactsRequest& request, const ListContactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientListContactsAsyncHelper( this, request, handler, context ); } );
}

ListCustomVerificationEmailTemplatesOutcome SESV2Client::ListCustomVerificationEmailTemplates(const ListCustomVerificationEmailTemplatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/custom-verification-email-templates");
  return ListCustomVerificationEmailTemplatesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListCustomVerificationEmailTemplatesOutcomeCallable SESV2Client::ListCustomVerificationEmailTemplatesCallable(const ListCustomVerificationEmailTemplatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCustomVerificationEmailTemplatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCustomVerificationEmailTemplates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientListCustomVerificationEmailTemplatesAsyncHelper(SESV2Client const * const clientThis, const ListCustomVerificationEmailTemplatesRequest& request, const ListCustomVerificationEmailTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListCustomVerificationEmailTemplates(request), context);
}

void SESV2Client::ListCustomVerificationEmailTemplatesAsync(const ListCustomVerificationEmailTemplatesRequest& request, const ListCustomVerificationEmailTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientListCustomVerificationEmailTemplatesAsyncHelper( this, request, handler, context ); } );
}

ListDedicatedIpPoolsOutcome SESV2Client::ListDedicatedIpPools(const ListDedicatedIpPoolsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/dedicated-ip-pools");
  return ListDedicatedIpPoolsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDedicatedIpPoolsOutcomeCallable SESV2Client::ListDedicatedIpPoolsCallable(const ListDedicatedIpPoolsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDedicatedIpPoolsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDedicatedIpPools(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientListDedicatedIpPoolsAsyncHelper(SESV2Client const * const clientThis, const ListDedicatedIpPoolsRequest& request, const ListDedicatedIpPoolsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDedicatedIpPools(request), context);
}

void SESV2Client::ListDedicatedIpPoolsAsync(const ListDedicatedIpPoolsRequest& request, const ListDedicatedIpPoolsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientListDedicatedIpPoolsAsyncHelper( this, request, handler, context ); } );
}

ListDeliverabilityTestReportsOutcome SESV2Client::ListDeliverabilityTestReports(const ListDeliverabilityTestReportsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/deliverability-dashboard/test-reports");
  return ListDeliverabilityTestReportsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDeliverabilityTestReportsOutcomeCallable SESV2Client::ListDeliverabilityTestReportsCallable(const ListDeliverabilityTestReportsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDeliverabilityTestReportsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDeliverabilityTestReports(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientListDeliverabilityTestReportsAsyncHelper(SESV2Client const * const clientThis, const ListDeliverabilityTestReportsRequest& request, const ListDeliverabilityTestReportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDeliverabilityTestReports(request), context);
}

void SESV2Client::ListDeliverabilityTestReportsAsync(const ListDeliverabilityTestReportsRequest& request, const ListDeliverabilityTestReportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientListDeliverabilityTestReportsAsyncHelper( this, request, handler, context ); } );
}

ListDomainDeliverabilityCampaignsOutcome SESV2Client::ListDomainDeliverabilityCampaigns(const ListDomainDeliverabilityCampaignsRequest& request) const
{
  if (!request.StartDateHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDomainDeliverabilityCampaigns", "Required field: StartDate, is not set");
    return ListDomainDeliverabilityCampaignsOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StartDate]", false));
  }
  if (!request.EndDateHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDomainDeliverabilityCampaigns", "Required field: EndDate, is not set");
    return ListDomainDeliverabilityCampaignsOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndDate]", false));
  }
  if (!request.SubscribedDomainHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDomainDeliverabilityCampaigns", "Required field: SubscribedDomain, is not set");
    return ListDomainDeliverabilityCampaignsOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SubscribedDomain]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/deliverability-dashboard/domains/");
  uri.AddPathSegment(request.GetSubscribedDomain());
  uri.AddPathSegments("/campaigns");
  return ListDomainDeliverabilityCampaignsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDomainDeliverabilityCampaignsOutcomeCallable SESV2Client::ListDomainDeliverabilityCampaignsCallable(const ListDomainDeliverabilityCampaignsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDomainDeliverabilityCampaignsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDomainDeliverabilityCampaigns(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientListDomainDeliverabilityCampaignsAsyncHelper(SESV2Client const * const clientThis, const ListDomainDeliverabilityCampaignsRequest& request, const ListDomainDeliverabilityCampaignsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDomainDeliverabilityCampaigns(request), context);
}

void SESV2Client::ListDomainDeliverabilityCampaignsAsync(const ListDomainDeliverabilityCampaignsRequest& request, const ListDomainDeliverabilityCampaignsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientListDomainDeliverabilityCampaignsAsyncHelper( this, request, handler, context ); } );
}

ListEmailIdentitiesOutcome SESV2Client::ListEmailIdentities(const ListEmailIdentitiesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/identities");
  return ListEmailIdentitiesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListEmailIdentitiesOutcomeCallable SESV2Client::ListEmailIdentitiesCallable(const ListEmailIdentitiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEmailIdentitiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEmailIdentities(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientListEmailIdentitiesAsyncHelper(SESV2Client const * const clientThis, const ListEmailIdentitiesRequest& request, const ListEmailIdentitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListEmailIdentities(request), context);
}

void SESV2Client::ListEmailIdentitiesAsync(const ListEmailIdentitiesRequest& request, const ListEmailIdentitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientListEmailIdentitiesAsyncHelper( this, request, handler, context ); } );
}

ListEmailTemplatesOutcome SESV2Client::ListEmailTemplates(const ListEmailTemplatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/templates");
  return ListEmailTemplatesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListEmailTemplatesOutcomeCallable SESV2Client::ListEmailTemplatesCallable(const ListEmailTemplatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEmailTemplatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEmailTemplates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientListEmailTemplatesAsyncHelper(SESV2Client const * const clientThis, const ListEmailTemplatesRequest& request, const ListEmailTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListEmailTemplates(request), context);
}

void SESV2Client::ListEmailTemplatesAsync(const ListEmailTemplatesRequest& request, const ListEmailTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientListEmailTemplatesAsyncHelper( this, request, handler, context ); } );
}

ListImportJobsOutcome SESV2Client::ListImportJobs(const ListImportJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/import-jobs");
  return ListImportJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListImportJobsOutcomeCallable SESV2Client::ListImportJobsCallable(const ListImportJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListImportJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListImportJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientListImportJobsAsyncHelper(SESV2Client const * const clientThis, const ListImportJobsRequest& request, const ListImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListImportJobs(request), context);
}

void SESV2Client::ListImportJobsAsync(const ListImportJobsRequest& request, const ListImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientListImportJobsAsyncHelper( this, request, handler, context ); } );
}

ListSuppressedDestinationsOutcome SESV2Client::ListSuppressedDestinations(const ListSuppressedDestinationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/suppression/addresses");
  return ListSuppressedDestinationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListSuppressedDestinationsOutcomeCallable SESV2Client::ListSuppressedDestinationsCallable(const ListSuppressedDestinationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSuppressedDestinationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSuppressedDestinations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientListSuppressedDestinationsAsyncHelper(SESV2Client const * const clientThis, const ListSuppressedDestinationsRequest& request, const ListSuppressedDestinationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListSuppressedDestinations(request), context);
}

void SESV2Client::ListSuppressedDestinationsAsync(const ListSuppressedDestinationsRequest& request, const ListSuppressedDestinationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientListSuppressedDestinationsAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome SESV2Client::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/tags");
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable SESV2Client::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientListTagsForResourceAsyncHelper(SESV2Client const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void SESV2Client::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

PutAccountDedicatedIpWarmupAttributesOutcome SESV2Client::PutAccountDedicatedIpWarmupAttributes(const PutAccountDedicatedIpWarmupAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/account/dedicated-ips/warmup");
  return PutAccountDedicatedIpWarmupAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutAccountDedicatedIpWarmupAttributesOutcomeCallable SESV2Client::PutAccountDedicatedIpWarmupAttributesCallable(const PutAccountDedicatedIpWarmupAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutAccountDedicatedIpWarmupAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutAccountDedicatedIpWarmupAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientPutAccountDedicatedIpWarmupAttributesAsyncHelper(SESV2Client const * const clientThis, const PutAccountDedicatedIpWarmupAttributesRequest& request, const PutAccountDedicatedIpWarmupAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutAccountDedicatedIpWarmupAttributes(request), context);
}

void SESV2Client::PutAccountDedicatedIpWarmupAttributesAsync(const PutAccountDedicatedIpWarmupAttributesRequest& request, const PutAccountDedicatedIpWarmupAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientPutAccountDedicatedIpWarmupAttributesAsyncHelper( this, request, handler, context ); } );
}

PutAccountDetailsOutcome SESV2Client::PutAccountDetails(const PutAccountDetailsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/account/details");
  return PutAccountDetailsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutAccountDetailsOutcomeCallable SESV2Client::PutAccountDetailsCallable(const PutAccountDetailsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutAccountDetailsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutAccountDetails(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientPutAccountDetailsAsyncHelper(SESV2Client const * const clientThis, const PutAccountDetailsRequest& request, const PutAccountDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutAccountDetails(request), context);
}

void SESV2Client::PutAccountDetailsAsync(const PutAccountDetailsRequest& request, const PutAccountDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientPutAccountDetailsAsyncHelper( this, request, handler, context ); } );
}

PutAccountSendingAttributesOutcome SESV2Client::PutAccountSendingAttributes(const PutAccountSendingAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/account/sending");
  return PutAccountSendingAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutAccountSendingAttributesOutcomeCallable SESV2Client::PutAccountSendingAttributesCallable(const PutAccountSendingAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutAccountSendingAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutAccountSendingAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientPutAccountSendingAttributesAsyncHelper(SESV2Client const * const clientThis, const PutAccountSendingAttributesRequest& request, const PutAccountSendingAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutAccountSendingAttributes(request), context);
}

void SESV2Client::PutAccountSendingAttributesAsync(const PutAccountSendingAttributesRequest& request, const PutAccountSendingAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientPutAccountSendingAttributesAsyncHelper( this, request, handler, context ); } );
}

PutAccountSuppressionAttributesOutcome SESV2Client::PutAccountSuppressionAttributes(const PutAccountSuppressionAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/account/suppression");
  return PutAccountSuppressionAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutAccountSuppressionAttributesOutcomeCallable SESV2Client::PutAccountSuppressionAttributesCallable(const PutAccountSuppressionAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutAccountSuppressionAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutAccountSuppressionAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientPutAccountSuppressionAttributesAsyncHelper(SESV2Client const * const clientThis, const PutAccountSuppressionAttributesRequest& request, const PutAccountSuppressionAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutAccountSuppressionAttributes(request), context);
}

void SESV2Client::PutAccountSuppressionAttributesAsync(const PutAccountSuppressionAttributesRequest& request, const PutAccountSuppressionAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientPutAccountSuppressionAttributesAsyncHelper( this, request, handler, context ); } );
}

PutConfigurationSetDeliveryOptionsOutcome SESV2Client::PutConfigurationSetDeliveryOptions(const PutConfigurationSetDeliveryOptionsRequest& request) const
{
  if (!request.ConfigurationSetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutConfigurationSetDeliveryOptions", "Required field: ConfigurationSetName, is not set");
    return PutConfigurationSetDeliveryOptionsOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationSetName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/configuration-sets/");
  uri.AddPathSegment(request.GetConfigurationSetName());
  uri.AddPathSegments("/delivery-options");
  return PutConfigurationSetDeliveryOptionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutConfigurationSetDeliveryOptionsOutcomeCallable SESV2Client::PutConfigurationSetDeliveryOptionsCallable(const PutConfigurationSetDeliveryOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutConfigurationSetDeliveryOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutConfigurationSetDeliveryOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientPutConfigurationSetDeliveryOptionsAsyncHelper(SESV2Client const * const clientThis, const PutConfigurationSetDeliveryOptionsRequest& request, const PutConfigurationSetDeliveryOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutConfigurationSetDeliveryOptions(request), context);
}

void SESV2Client::PutConfigurationSetDeliveryOptionsAsync(const PutConfigurationSetDeliveryOptionsRequest& request, const PutConfigurationSetDeliveryOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientPutConfigurationSetDeliveryOptionsAsyncHelper( this, request, handler, context ); } );
}

PutConfigurationSetReputationOptionsOutcome SESV2Client::PutConfigurationSetReputationOptions(const PutConfigurationSetReputationOptionsRequest& request) const
{
  if (!request.ConfigurationSetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutConfigurationSetReputationOptions", "Required field: ConfigurationSetName, is not set");
    return PutConfigurationSetReputationOptionsOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationSetName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/configuration-sets/");
  uri.AddPathSegment(request.GetConfigurationSetName());
  uri.AddPathSegments("/reputation-options");
  return PutConfigurationSetReputationOptionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutConfigurationSetReputationOptionsOutcomeCallable SESV2Client::PutConfigurationSetReputationOptionsCallable(const PutConfigurationSetReputationOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutConfigurationSetReputationOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutConfigurationSetReputationOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientPutConfigurationSetReputationOptionsAsyncHelper(SESV2Client const * const clientThis, const PutConfigurationSetReputationOptionsRequest& request, const PutConfigurationSetReputationOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutConfigurationSetReputationOptions(request), context);
}

void SESV2Client::PutConfigurationSetReputationOptionsAsync(const PutConfigurationSetReputationOptionsRequest& request, const PutConfigurationSetReputationOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientPutConfigurationSetReputationOptionsAsyncHelper( this, request, handler, context ); } );
}

PutConfigurationSetSendingOptionsOutcome SESV2Client::PutConfigurationSetSendingOptions(const PutConfigurationSetSendingOptionsRequest& request) const
{
  if (!request.ConfigurationSetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutConfigurationSetSendingOptions", "Required field: ConfigurationSetName, is not set");
    return PutConfigurationSetSendingOptionsOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationSetName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/configuration-sets/");
  uri.AddPathSegment(request.GetConfigurationSetName());
  uri.AddPathSegments("/sending");
  return PutConfigurationSetSendingOptionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutConfigurationSetSendingOptionsOutcomeCallable SESV2Client::PutConfigurationSetSendingOptionsCallable(const PutConfigurationSetSendingOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutConfigurationSetSendingOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutConfigurationSetSendingOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientPutConfigurationSetSendingOptionsAsyncHelper(SESV2Client const * const clientThis, const PutConfigurationSetSendingOptionsRequest& request, const PutConfigurationSetSendingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutConfigurationSetSendingOptions(request), context);
}

void SESV2Client::PutConfigurationSetSendingOptionsAsync(const PutConfigurationSetSendingOptionsRequest& request, const PutConfigurationSetSendingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientPutConfigurationSetSendingOptionsAsyncHelper( this, request, handler, context ); } );
}

PutConfigurationSetSuppressionOptionsOutcome SESV2Client::PutConfigurationSetSuppressionOptions(const PutConfigurationSetSuppressionOptionsRequest& request) const
{
  if (!request.ConfigurationSetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutConfigurationSetSuppressionOptions", "Required field: ConfigurationSetName, is not set");
    return PutConfigurationSetSuppressionOptionsOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationSetName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/configuration-sets/");
  uri.AddPathSegment(request.GetConfigurationSetName());
  uri.AddPathSegments("/suppression-options");
  return PutConfigurationSetSuppressionOptionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutConfigurationSetSuppressionOptionsOutcomeCallable SESV2Client::PutConfigurationSetSuppressionOptionsCallable(const PutConfigurationSetSuppressionOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutConfigurationSetSuppressionOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutConfigurationSetSuppressionOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientPutConfigurationSetSuppressionOptionsAsyncHelper(SESV2Client const * const clientThis, const PutConfigurationSetSuppressionOptionsRequest& request, const PutConfigurationSetSuppressionOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutConfigurationSetSuppressionOptions(request), context);
}

void SESV2Client::PutConfigurationSetSuppressionOptionsAsync(const PutConfigurationSetSuppressionOptionsRequest& request, const PutConfigurationSetSuppressionOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientPutConfigurationSetSuppressionOptionsAsyncHelper( this, request, handler, context ); } );
}

PutConfigurationSetTrackingOptionsOutcome SESV2Client::PutConfigurationSetTrackingOptions(const PutConfigurationSetTrackingOptionsRequest& request) const
{
  if (!request.ConfigurationSetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutConfigurationSetTrackingOptions", "Required field: ConfigurationSetName, is not set");
    return PutConfigurationSetTrackingOptionsOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationSetName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/configuration-sets/");
  uri.AddPathSegment(request.GetConfigurationSetName());
  uri.AddPathSegments("/tracking-options");
  return PutConfigurationSetTrackingOptionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutConfigurationSetTrackingOptionsOutcomeCallable SESV2Client::PutConfigurationSetTrackingOptionsCallable(const PutConfigurationSetTrackingOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutConfigurationSetTrackingOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutConfigurationSetTrackingOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientPutConfigurationSetTrackingOptionsAsyncHelper(SESV2Client const * const clientThis, const PutConfigurationSetTrackingOptionsRequest& request, const PutConfigurationSetTrackingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutConfigurationSetTrackingOptions(request), context);
}

void SESV2Client::PutConfigurationSetTrackingOptionsAsync(const PutConfigurationSetTrackingOptionsRequest& request, const PutConfigurationSetTrackingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientPutConfigurationSetTrackingOptionsAsyncHelper( this, request, handler, context ); } );
}

PutDedicatedIpInPoolOutcome SESV2Client::PutDedicatedIpInPool(const PutDedicatedIpInPoolRequest& request) const
{
  if (!request.IpHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutDedicatedIpInPool", "Required field: Ip, is not set");
    return PutDedicatedIpInPoolOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Ip]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/dedicated-ips/");
  uri.AddPathSegment(request.GetIp());
  uri.AddPathSegments("/pool");
  return PutDedicatedIpInPoolOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutDedicatedIpInPoolOutcomeCallable SESV2Client::PutDedicatedIpInPoolCallable(const PutDedicatedIpInPoolRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutDedicatedIpInPoolOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutDedicatedIpInPool(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientPutDedicatedIpInPoolAsyncHelper(SESV2Client const * const clientThis, const PutDedicatedIpInPoolRequest& request, const PutDedicatedIpInPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutDedicatedIpInPool(request), context);
}

void SESV2Client::PutDedicatedIpInPoolAsync(const PutDedicatedIpInPoolRequest& request, const PutDedicatedIpInPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientPutDedicatedIpInPoolAsyncHelper( this, request, handler, context ); } );
}

PutDedicatedIpWarmupAttributesOutcome SESV2Client::PutDedicatedIpWarmupAttributes(const PutDedicatedIpWarmupAttributesRequest& request) const
{
  if (!request.IpHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutDedicatedIpWarmupAttributes", "Required field: Ip, is not set");
    return PutDedicatedIpWarmupAttributesOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Ip]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/dedicated-ips/");
  uri.AddPathSegment(request.GetIp());
  uri.AddPathSegments("/warmup");
  return PutDedicatedIpWarmupAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutDedicatedIpWarmupAttributesOutcomeCallable SESV2Client::PutDedicatedIpWarmupAttributesCallable(const PutDedicatedIpWarmupAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutDedicatedIpWarmupAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutDedicatedIpWarmupAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientPutDedicatedIpWarmupAttributesAsyncHelper(SESV2Client const * const clientThis, const PutDedicatedIpWarmupAttributesRequest& request, const PutDedicatedIpWarmupAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutDedicatedIpWarmupAttributes(request), context);
}

void SESV2Client::PutDedicatedIpWarmupAttributesAsync(const PutDedicatedIpWarmupAttributesRequest& request, const PutDedicatedIpWarmupAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientPutDedicatedIpWarmupAttributesAsyncHelper( this, request, handler, context ); } );
}

PutDeliverabilityDashboardOptionOutcome SESV2Client::PutDeliverabilityDashboardOption(const PutDeliverabilityDashboardOptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/deliverability-dashboard");
  return PutDeliverabilityDashboardOptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutDeliverabilityDashboardOptionOutcomeCallable SESV2Client::PutDeliverabilityDashboardOptionCallable(const PutDeliverabilityDashboardOptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutDeliverabilityDashboardOptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutDeliverabilityDashboardOption(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientPutDeliverabilityDashboardOptionAsyncHelper(SESV2Client const * const clientThis, const PutDeliverabilityDashboardOptionRequest& request, const PutDeliverabilityDashboardOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutDeliverabilityDashboardOption(request), context);
}

void SESV2Client::PutDeliverabilityDashboardOptionAsync(const PutDeliverabilityDashboardOptionRequest& request, const PutDeliverabilityDashboardOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientPutDeliverabilityDashboardOptionAsyncHelper( this, request, handler, context ); } );
}

PutEmailIdentityConfigurationSetAttributesOutcome SESV2Client::PutEmailIdentityConfigurationSetAttributes(const PutEmailIdentityConfigurationSetAttributesRequest& request) const
{
  if (!request.EmailIdentityHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutEmailIdentityConfigurationSetAttributes", "Required field: EmailIdentity, is not set");
    return PutEmailIdentityConfigurationSetAttributesOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EmailIdentity]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/identities/");
  uri.AddPathSegment(request.GetEmailIdentity());
  uri.AddPathSegments("/configuration-set");
  return PutEmailIdentityConfigurationSetAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutEmailIdentityConfigurationSetAttributesOutcomeCallable SESV2Client::PutEmailIdentityConfigurationSetAttributesCallable(const PutEmailIdentityConfigurationSetAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutEmailIdentityConfigurationSetAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutEmailIdentityConfigurationSetAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientPutEmailIdentityConfigurationSetAttributesAsyncHelper(SESV2Client const * const clientThis, const PutEmailIdentityConfigurationSetAttributesRequest& request, const PutEmailIdentityConfigurationSetAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutEmailIdentityConfigurationSetAttributes(request), context);
}

void SESV2Client::PutEmailIdentityConfigurationSetAttributesAsync(const PutEmailIdentityConfigurationSetAttributesRequest& request, const PutEmailIdentityConfigurationSetAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientPutEmailIdentityConfigurationSetAttributesAsyncHelper( this, request, handler, context ); } );
}

PutEmailIdentityDkimAttributesOutcome SESV2Client::PutEmailIdentityDkimAttributes(const PutEmailIdentityDkimAttributesRequest& request) const
{
  if (!request.EmailIdentityHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutEmailIdentityDkimAttributes", "Required field: EmailIdentity, is not set");
    return PutEmailIdentityDkimAttributesOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EmailIdentity]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/identities/");
  uri.AddPathSegment(request.GetEmailIdentity());
  uri.AddPathSegments("/dkim");
  return PutEmailIdentityDkimAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutEmailIdentityDkimAttributesOutcomeCallable SESV2Client::PutEmailIdentityDkimAttributesCallable(const PutEmailIdentityDkimAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutEmailIdentityDkimAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutEmailIdentityDkimAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientPutEmailIdentityDkimAttributesAsyncHelper(SESV2Client const * const clientThis, const PutEmailIdentityDkimAttributesRequest& request, const PutEmailIdentityDkimAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutEmailIdentityDkimAttributes(request), context);
}

void SESV2Client::PutEmailIdentityDkimAttributesAsync(const PutEmailIdentityDkimAttributesRequest& request, const PutEmailIdentityDkimAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientPutEmailIdentityDkimAttributesAsyncHelper( this, request, handler, context ); } );
}

PutEmailIdentityDkimSigningAttributesOutcome SESV2Client::PutEmailIdentityDkimSigningAttributes(const PutEmailIdentityDkimSigningAttributesRequest& request) const
{
  if (!request.EmailIdentityHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutEmailIdentityDkimSigningAttributes", "Required field: EmailIdentity, is not set");
    return PutEmailIdentityDkimSigningAttributesOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EmailIdentity]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/email/identities/");
  uri.AddPathSegment(request.GetEmailIdentity());
  uri.AddPathSegments("/dkim/signing");
  return PutEmailIdentityDkimSigningAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutEmailIdentityDkimSigningAttributesOutcomeCallable SESV2Client::PutEmailIdentityDkimSigningAttributesCallable(const PutEmailIdentityDkimSigningAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutEmailIdentityDkimSigningAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutEmailIdentityDkimSigningAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientPutEmailIdentityDkimSigningAttributesAsyncHelper(SESV2Client const * const clientThis, const PutEmailIdentityDkimSigningAttributesRequest& request, const PutEmailIdentityDkimSigningAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutEmailIdentityDkimSigningAttributes(request), context);
}

void SESV2Client::PutEmailIdentityDkimSigningAttributesAsync(const PutEmailIdentityDkimSigningAttributesRequest& request, const PutEmailIdentityDkimSigningAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientPutEmailIdentityDkimSigningAttributesAsyncHelper( this, request, handler, context ); } );
}

PutEmailIdentityFeedbackAttributesOutcome SESV2Client::PutEmailIdentityFeedbackAttributes(const PutEmailIdentityFeedbackAttributesRequest& request) const
{
  if (!request.EmailIdentityHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutEmailIdentityFeedbackAttributes", "Required field: EmailIdentity, is not set");
    return PutEmailIdentityFeedbackAttributesOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EmailIdentity]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/identities/");
  uri.AddPathSegment(request.GetEmailIdentity());
  uri.AddPathSegments("/feedback");
  return PutEmailIdentityFeedbackAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutEmailIdentityFeedbackAttributesOutcomeCallable SESV2Client::PutEmailIdentityFeedbackAttributesCallable(const PutEmailIdentityFeedbackAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutEmailIdentityFeedbackAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutEmailIdentityFeedbackAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientPutEmailIdentityFeedbackAttributesAsyncHelper(SESV2Client const * const clientThis, const PutEmailIdentityFeedbackAttributesRequest& request, const PutEmailIdentityFeedbackAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutEmailIdentityFeedbackAttributes(request), context);
}

void SESV2Client::PutEmailIdentityFeedbackAttributesAsync(const PutEmailIdentityFeedbackAttributesRequest& request, const PutEmailIdentityFeedbackAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientPutEmailIdentityFeedbackAttributesAsyncHelper( this, request, handler, context ); } );
}

PutEmailIdentityMailFromAttributesOutcome SESV2Client::PutEmailIdentityMailFromAttributes(const PutEmailIdentityMailFromAttributesRequest& request) const
{
  if (!request.EmailIdentityHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutEmailIdentityMailFromAttributes", "Required field: EmailIdentity, is not set");
    return PutEmailIdentityMailFromAttributesOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EmailIdentity]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/identities/");
  uri.AddPathSegment(request.GetEmailIdentity());
  uri.AddPathSegments("/mail-from");
  return PutEmailIdentityMailFromAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutEmailIdentityMailFromAttributesOutcomeCallable SESV2Client::PutEmailIdentityMailFromAttributesCallable(const PutEmailIdentityMailFromAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutEmailIdentityMailFromAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutEmailIdentityMailFromAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientPutEmailIdentityMailFromAttributesAsyncHelper(SESV2Client const * const clientThis, const PutEmailIdentityMailFromAttributesRequest& request, const PutEmailIdentityMailFromAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutEmailIdentityMailFromAttributes(request), context);
}

void SESV2Client::PutEmailIdentityMailFromAttributesAsync(const PutEmailIdentityMailFromAttributesRequest& request, const PutEmailIdentityMailFromAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientPutEmailIdentityMailFromAttributesAsyncHelper( this, request, handler, context ); } );
}

PutSuppressedDestinationOutcome SESV2Client::PutSuppressedDestination(const PutSuppressedDestinationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/suppression/addresses");
  return PutSuppressedDestinationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutSuppressedDestinationOutcomeCallable SESV2Client::PutSuppressedDestinationCallable(const PutSuppressedDestinationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutSuppressedDestinationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutSuppressedDestination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientPutSuppressedDestinationAsyncHelper(SESV2Client const * const clientThis, const PutSuppressedDestinationRequest& request, const PutSuppressedDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutSuppressedDestination(request), context);
}

void SESV2Client::PutSuppressedDestinationAsync(const PutSuppressedDestinationRequest& request, const PutSuppressedDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientPutSuppressedDestinationAsyncHelper( this, request, handler, context ); } );
}

SendBulkEmailOutcome SESV2Client::SendBulkEmail(const SendBulkEmailRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/outbound-bulk-emails");
  return SendBulkEmailOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SendBulkEmailOutcomeCallable SESV2Client::SendBulkEmailCallable(const SendBulkEmailRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SendBulkEmailOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SendBulkEmail(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientSendBulkEmailAsyncHelper(SESV2Client const * const clientThis, const SendBulkEmailRequest& request, const SendBulkEmailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SendBulkEmail(request), context);
}

void SESV2Client::SendBulkEmailAsync(const SendBulkEmailRequest& request, const SendBulkEmailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientSendBulkEmailAsyncHelper( this, request, handler, context ); } );
}

SendCustomVerificationEmailOutcome SESV2Client::SendCustomVerificationEmail(const SendCustomVerificationEmailRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/outbound-custom-verification-emails");
  return SendCustomVerificationEmailOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SendCustomVerificationEmailOutcomeCallable SESV2Client::SendCustomVerificationEmailCallable(const SendCustomVerificationEmailRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SendCustomVerificationEmailOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SendCustomVerificationEmail(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientSendCustomVerificationEmailAsyncHelper(SESV2Client const * const clientThis, const SendCustomVerificationEmailRequest& request, const SendCustomVerificationEmailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SendCustomVerificationEmail(request), context);
}

void SESV2Client::SendCustomVerificationEmailAsync(const SendCustomVerificationEmailRequest& request, const SendCustomVerificationEmailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientSendCustomVerificationEmailAsyncHelper( this, request, handler, context ); } );
}

SendEmailOutcome SESV2Client::SendEmail(const SendEmailRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/outbound-emails");
  return SendEmailOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SendEmailOutcomeCallable SESV2Client::SendEmailCallable(const SendEmailRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SendEmailOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SendEmail(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientSendEmailAsyncHelper(SESV2Client const * const clientThis, const SendEmailRequest& request, const SendEmailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SendEmail(request), context);
}

void SESV2Client::SendEmailAsync(const SendEmailRequest& request, const SendEmailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientSendEmailAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome SESV2Client::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/tags");
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable SESV2Client::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientTagResourceAsyncHelper(SESV2Client const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void SESV2Client::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

TestRenderEmailTemplateOutcome SESV2Client::TestRenderEmailTemplate(const TestRenderEmailTemplateRequest& request) const
{
  if (!request.TemplateNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TestRenderEmailTemplate", "Required field: TemplateName, is not set");
    return TestRenderEmailTemplateOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/templates/");
  uri.AddPathSegment(request.GetTemplateName());
  uri.AddPathSegments("/render");
  return TestRenderEmailTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TestRenderEmailTemplateOutcomeCallable SESV2Client::TestRenderEmailTemplateCallable(const TestRenderEmailTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TestRenderEmailTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TestRenderEmailTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientTestRenderEmailTemplateAsyncHelper(SESV2Client const * const clientThis, const TestRenderEmailTemplateRequest& request, const TestRenderEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TestRenderEmailTemplate(request), context);
}

void SESV2Client::TestRenderEmailTemplateAsync(const TestRenderEmailTemplateRequest& request, const TestRenderEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientTestRenderEmailTemplateAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome SESV2Client::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/tags");
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable SESV2Client::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientUntagResourceAsyncHelper(SESV2Client const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void SESV2Client::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateConfigurationSetEventDestinationOutcome SESV2Client::UpdateConfigurationSetEventDestination(const UpdateConfigurationSetEventDestinationRequest& request) const
{
  if (!request.ConfigurationSetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateConfigurationSetEventDestination", "Required field: ConfigurationSetName, is not set");
    return UpdateConfigurationSetEventDestinationOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationSetName]", false));
  }
  if (!request.EventDestinationNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateConfigurationSetEventDestination", "Required field: EventDestinationName, is not set");
    return UpdateConfigurationSetEventDestinationOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EventDestinationName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/configuration-sets/");
  uri.AddPathSegment(request.GetConfigurationSetName());
  uri.AddPathSegments("/event-destinations/");
  uri.AddPathSegment(request.GetEventDestinationName());
  return UpdateConfigurationSetEventDestinationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateConfigurationSetEventDestinationOutcomeCallable SESV2Client::UpdateConfigurationSetEventDestinationCallable(const UpdateConfigurationSetEventDestinationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateConfigurationSetEventDestinationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateConfigurationSetEventDestination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientUpdateConfigurationSetEventDestinationAsyncHelper(SESV2Client const * const clientThis, const UpdateConfigurationSetEventDestinationRequest& request, const UpdateConfigurationSetEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateConfigurationSetEventDestination(request), context);
}

void SESV2Client::UpdateConfigurationSetEventDestinationAsync(const UpdateConfigurationSetEventDestinationRequest& request, const UpdateConfigurationSetEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientUpdateConfigurationSetEventDestinationAsyncHelper( this, request, handler, context ); } );
}

UpdateContactOutcome SESV2Client::UpdateContact(const UpdateContactRequest& request) const
{
  if (!request.ContactListNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateContact", "Required field: ContactListName, is not set");
    return UpdateContactOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ContactListName]", false));
  }
  if (!request.EmailAddressHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateContact", "Required field: EmailAddress, is not set");
    return UpdateContactOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EmailAddress]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/contact-lists/");
  uri.AddPathSegment(request.GetContactListName());
  uri.AddPathSegments("/contacts/");
  uri.AddPathSegment(request.GetEmailAddress());
  return UpdateContactOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateContactOutcomeCallable SESV2Client::UpdateContactCallable(const UpdateContactRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateContactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateContact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientUpdateContactAsyncHelper(SESV2Client const * const clientThis, const UpdateContactRequest& request, const UpdateContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateContact(request), context);
}

void SESV2Client::UpdateContactAsync(const UpdateContactRequest& request, const UpdateContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientUpdateContactAsyncHelper( this, request, handler, context ); } );
}

UpdateContactListOutcome SESV2Client::UpdateContactList(const UpdateContactListRequest& request) const
{
  if (!request.ContactListNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateContactList", "Required field: ContactListName, is not set");
    return UpdateContactListOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ContactListName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/contact-lists/");
  uri.AddPathSegment(request.GetContactListName());
  return UpdateContactListOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateContactListOutcomeCallable SESV2Client::UpdateContactListCallable(const UpdateContactListRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateContactListOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateContactList(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientUpdateContactListAsyncHelper(SESV2Client const * const clientThis, const UpdateContactListRequest& request, const UpdateContactListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateContactList(request), context);
}

void SESV2Client::UpdateContactListAsync(const UpdateContactListRequest& request, const UpdateContactListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientUpdateContactListAsyncHelper( this, request, handler, context ); } );
}

UpdateCustomVerificationEmailTemplateOutcome SESV2Client::UpdateCustomVerificationEmailTemplate(const UpdateCustomVerificationEmailTemplateRequest& request) const
{
  if (!request.TemplateNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateCustomVerificationEmailTemplate", "Required field: TemplateName, is not set");
    return UpdateCustomVerificationEmailTemplateOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/custom-verification-email-templates/");
  uri.AddPathSegment(request.GetTemplateName());
  return UpdateCustomVerificationEmailTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateCustomVerificationEmailTemplateOutcomeCallable SESV2Client::UpdateCustomVerificationEmailTemplateCallable(const UpdateCustomVerificationEmailTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateCustomVerificationEmailTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateCustomVerificationEmailTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientUpdateCustomVerificationEmailTemplateAsyncHelper(SESV2Client const * const clientThis, const UpdateCustomVerificationEmailTemplateRequest& request, const UpdateCustomVerificationEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateCustomVerificationEmailTemplate(request), context);
}

void SESV2Client::UpdateCustomVerificationEmailTemplateAsync(const UpdateCustomVerificationEmailTemplateRequest& request, const UpdateCustomVerificationEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientUpdateCustomVerificationEmailTemplateAsyncHelper( this, request, handler, context ); } );
}

UpdateEmailIdentityPolicyOutcome SESV2Client::UpdateEmailIdentityPolicy(const UpdateEmailIdentityPolicyRequest& request) const
{
  if (!request.EmailIdentityHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateEmailIdentityPolicy", "Required field: EmailIdentity, is not set");
    return UpdateEmailIdentityPolicyOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EmailIdentity]", false));
  }
  if (!request.PolicyNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateEmailIdentityPolicy", "Required field: PolicyName, is not set");
    return UpdateEmailIdentityPolicyOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/identities/");
  uri.AddPathSegment(request.GetEmailIdentity());
  uri.AddPathSegments("/policies/");
  uri.AddPathSegment(request.GetPolicyName());
  return UpdateEmailIdentityPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateEmailIdentityPolicyOutcomeCallable SESV2Client::UpdateEmailIdentityPolicyCallable(const UpdateEmailIdentityPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateEmailIdentityPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateEmailIdentityPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientUpdateEmailIdentityPolicyAsyncHelper(SESV2Client const * const clientThis, const UpdateEmailIdentityPolicyRequest& request, const UpdateEmailIdentityPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateEmailIdentityPolicy(request), context);
}

void SESV2Client::UpdateEmailIdentityPolicyAsync(const UpdateEmailIdentityPolicyRequest& request, const UpdateEmailIdentityPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientUpdateEmailIdentityPolicyAsyncHelper( this, request, handler, context ); } );
}

UpdateEmailTemplateOutcome SESV2Client::UpdateEmailTemplate(const UpdateEmailTemplateRequest& request) const
{
  if (!request.TemplateNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateEmailTemplate", "Required field: TemplateName, is not set");
    return UpdateEmailTemplateOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/templates/");
  uri.AddPathSegment(request.GetTemplateName());
  return UpdateEmailTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateEmailTemplateOutcomeCallable SESV2Client::UpdateEmailTemplateCallable(const UpdateEmailTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateEmailTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateEmailTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2ClientUpdateEmailTemplateAsyncHelper(SESV2Client const * const clientThis, const UpdateEmailTemplateRequest& request, const UpdateEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateEmailTemplate(request), context);
}

void SESV2Client::UpdateEmailTemplateAsync(const UpdateEmailTemplateRequest& request, const UpdateEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SESV2ClientUpdateEmailTemplateAsyncHelper( this, request, handler, context ); } );
}

