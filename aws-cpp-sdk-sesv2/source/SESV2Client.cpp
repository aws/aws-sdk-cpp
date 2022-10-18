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
#include <aws/sesv2/model/GetDedicatedIpPoolRequest.h>
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

void SESV2Client::CreateConfigurationSetAsync(const CreateConfigurationSetRequest& request, const CreateConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateConfigurationSet(request), context);
    } );
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

void SESV2Client::CreateConfigurationSetEventDestinationAsync(const CreateConfigurationSetEventDestinationRequest& request, const CreateConfigurationSetEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateConfigurationSetEventDestination(request), context);
    } );
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

void SESV2Client::CreateContactAsync(const CreateContactRequest& request, const CreateContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateContact(request), context);
    } );
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

void SESV2Client::CreateContactListAsync(const CreateContactListRequest& request, const CreateContactListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateContactList(request), context);
    } );
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

void SESV2Client::CreateCustomVerificationEmailTemplateAsync(const CreateCustomVerificationEmailTemplateRequest& request, const CreateCustomVerificationEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateCustomVerificationEmailTemplate(request), context);
    } );
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

void SESV2Client::CreateDedicatedIpPoolAsync(const CreateDedicatedIpPoolRequest& request, const CreateDedicatedIpPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateDedicatedIpPool(request), context);
    } );
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

void SESV2Client::CreateDeliverabilityTestReportAsync(const CreateDeliverabilityTestReportRequest& request, const CreateDeliverabilityTestReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateDeliverabilityTestReport(request), context);
    } );
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

void SESV2Client::CreateEmailIdentityAsync(const CreateEmailIdentityRequest& request, const CreateEmailIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateEmailIdentity(request), context);
    } );
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

void SESV2Client::CreateEmailIdentityPolicyAsync(const CreateEmailIdentityPolicyRequest& request, const CreateEmailIdentityPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateEmailIdentityPolicy(request), context);
    } );
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

void SESV2Client::CreateEmailTemplateAsync(const CreateEmailTemplateRequest& request, const CreateEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateEmailTemplate(request), context);
    } );
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

void SESV2Client::CreateImportJobAsync(const CreateImportJobRequest& request, const CreateImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateImportJob(request), context);
    } );
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

void SESV2Client::DeleteConfigurationSetAsync(const DeleteConfigurationSetRequest& request, const DeleteConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteConfigurationSet(request), context);
    } );
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

void SESV2Client::DeleteConfigurationSetEventDestinationAsync(const DeleteConfigurationSetEventDestinationRequest& request, const DeleteConfigurationSetEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteConfigurationSetEventDestination(request), context);
    } );
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

void SESV2Client::DeleteContactAsync(const DeleteContactRequest& request, const DeleteContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteContact(request), context);
    } );
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

void SESV2Client::DeleteContactListAsync(const DeleteContactListRequest& request, const DeleteContactListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteContactList(request), context);
    } );
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

void SESV2Client::DeleteCustomVerificationEmailTemplateAsync(const DeleteCustomVerificationEmailTemplateRequest& request, const DeleteCustomVerificationEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteCustomVerificationEmailTemplate(request), context);
    } );
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

void SESV2Client::DeleteDedicatedIpPoolAsync(const DeleteDedicatedIpPoolRequest& request, const DeleteDedicatedIpPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteDedicatedIpPool(request), context);
    } );
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

void SESV2Client::DeleteEmailIdentityAsync(const DeleteEmailIdentityRequest& request, const DeleteEmailIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteEmailIdentity(request), context);
    } );
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

void SESV2Client::DeleteEmailIdentityPolicyAsync(const DeleteEmailIdentityPolicyRequest& request, const DeleteEmailIdentityPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteEmailIdentityPolicy(request), context);
    } );
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

void SESV2Client::DeleteEmailTemplateAsync(const DeleteEmailTemplateRequest& request, const DeleteEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteEmailTemplate(request), context);
    } );
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

void SESV2Client::DeleteSuppressedDestinationAsync(const DeleteSuppressedDestinationRequest& request, const DeleteSuppressedDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteSuppressedDestination(request), context);
    } );
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

void SESV2Client::GetAccountAsync(const GetAccountRequest& request, const GetAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetAccount(request), context);
    } );
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

void SESV2Client::GetBlacklistReportsAsync(const GetBlacklistReportsRequest& request, const GetBlacklistReportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetBlacklistReports(request), context);
    } );
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

void SESV2Client::GetConfigurationSetAsync(const GetConfigurationSetRequest& request, const GetConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetConfigurationSet(request), context);
    } );
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

void SESV2Client::GetConfigurationSetEventDestinationsAsync(const GetConfigurationSetEventDestinationsRequest& request, const GetConfigurationSetEventDestinationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetConfigurationSetEventDestinations(request), context);
    } );
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

void SESV2Client::GetContactAsync(const GetContactRequest& request, const GetContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetContact(request), context);
    } );
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

void SESV2Client::GetContactListAsync(const GetContactListRequest& request, const GetContactListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetContactList(request), context);
    } );
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

void SESV2Client::GetCustomVerificationEmailTemplateAsync(const GetCustomVerificationEmailTemplateRequest& request, const GetCustomVerificationEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetCustomVerificationEmailTemplate(request), context);
    } );
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

void SESV2Client::GetDedicatedIpAsync(const GetDedicatedIpRequest& request, const GetDedicatedIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetDedicatedIp(request), context);
    } );
}

GetDedicatedIpPoolOutcome SESV2Client::GetDedicatedIpPool(const GetDedicatedIpPoolRequest& request) const
{
  if (!request.PoolNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDedicatedIpPool", "Required field: PoolName, is not set");
    return GetDedicatedIpPoolOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PoolName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v2/email/dedicated-ip-pools/");
  uri.AddPathSegment(request.GetPoolName());
  return GetDedicatedIpPoolOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDedicatedIpPoolOutcomeCallable SESV2Client::GetDedicatedIpPoolCallable(const GetDedicatedIpPoolRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDedicatedIpPoolOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDedicatedIpPool(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SESV2Client::GetDedicatedIpPoolAsync(const GetDedicatedIpPoolRequest& request, const GetDedicatedIpPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetDedicatedIpPool(request), context);
    } );
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

void SESV2Client::GetDedicatedIpsAsync(const GetDedicatedIpsRequest& request, const GetDedicatedIpsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetDedicatedIps(request), context);
    } );
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

void SESV2Client::GetDeliverabilityDashboardOptionsAsync(const GetDeliverabilityDashboardOptionsRequest& request, const GetDeliverabilityDashboardOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetDeliverabilityDashboardOptions(request), context);
    } );
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

void SESV2Client::GetDeliverabilityTestReportAsync(const GetDeliverabilityTestReportRequest& request, const GetDeliverabilityTestReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetDeliverabilityTestReport(request), context);
    } );
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

void SESV2Client::GetDomainDeliverabilityCampaignAsync(const GetDomainDeliverabilityCampaignRequest& request, const GetDomainDeliverabilityCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetDomainDeliverabilityCampaign(request), context);
    } );
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

void SESV2Client::GetDomainStatisticsReportAsync(const GetDomainStatisticsReportRequest& request, const GetDomainStatisticsReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetDomainStatisticsReport(request), context);
    } );
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

void SESV2Client::GetEmailIdentityAsync(const GetEmailIdentityRequest& request, const GetEmailIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetEmailIdentity(request), context);
    } );
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

void SESV2Client::GetEmailIdentityPoliciesAsync(const GetEmailIdentityPoliciesRequest& request, const GetEmailIdentityPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetEmailIdentityPolicies(request), context);
    } );
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

void SESV2Client::GetEmailTemplateAsync(const GetEmailTemplateRequest& request, const GetEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetEmailTemplate(request), context);
    } );
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

void SESV2Client::GetImportJobAsync(const GetImportJobRequest& request, const GetImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetImportJob(request), context);
    } );
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

void SESV2Client::GetSuppressedDestinationAsync(const GetSuppressedDestinationRequest& request, const GetSuppressedDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetSuppressedDestination(request), context);
    } );
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

void SESV2Client::ListConfigurationSetsAsync(const ListConfigurationSetsRequest& request, const ListConfigurationSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListConfigurationSets(request), context);
    } );
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

void SESV2Client::ListContactListsAsync(const ListContactListsRequest& request, const ListContactListsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListContactLists(request), context);
    } );
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

void SESV2Client::ListContactsAsync(const ListContactsRequest& request, const ListContactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListContacts(request), context);
    } );
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

void SESV2Client::ListCustomVerificationEmailTemplatesAsync(const ListCustomVerificationEmailTemplatesRequest& request, const ListCustomVerificationEmailTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListCustomVerificationEmailTemplates(request), context);
    } );
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

void SESV2Client::ListDedicatedIpPoolsAsync(const ListDedicatedIpPoolsRequest& request, const ListDedicatedIpPoolsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDedicatedIpPools(request), context);
    } );
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

void SESV2Client::ListDeliverabilityTestReportsAsync(const ListDeliverabilityTestReportsRequest& request, const ListDeliverabilityTestReportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDeliverabilityTestReports(request), context);
    } );
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

void SESV2Client::ListDomainDeliverabilityCampaignsAsync(const ListDomainDeliverabilityCampaignsRequest& request, const ListDomainDeliverabilityCampaignsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDomainDeliverabilityCampaigns(request), context);
    } );
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

void SESV2Client::ListEmailIdentitiesAsync(const ListEmailIdentitiesRequest& request, const ListEmailIdentitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListEmailIdentities(request), context);
    } );
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

void SESV2Client::ListEmailTemplatesAsync(const ListEmailTemplatesRequest& request, const ListEmailTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListEmailTemplates(request), context);
    } );
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

void SESV2Client::ListImportJobsAsync(const ListImportJobsRequest& request, const ListImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListImportJobs(request), context);
    } );
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

void SESV2Client::ListSuppressedDestinationsAsync(const ListSuppressedDestinationsRequest& request, const ListSuppressedDestinationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListSuppressedDestinations(request), context);
    } );
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

void SESV2Client::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
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

void SESV2Client::PutAccountDedicatedIpWarmupAttributesAsync(const PutAccountDedicatedIpWarmupAttributesRequest& request, const PutAccountDedicatedIpWarmupAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutAccountDedicatedIpWarmupAttributes(request), context);
    } );
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

void SESV2Client::PutAccountDetailsAsync(const PutAccountDetailsRequest& request, const PutAccountDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutAccountDetails(request), context);
    } );
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

void SESV2Client::PutAccountSendingAttributesAsync(const PutAccountSendingAttributesRequest& request, const PutAccountSendingAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutAccountSendingAttributes(request), context);
    } );
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

void SESV2Client::PutAccountSuppressionAttributesAsync(const PutAccountSuppressionAttributesRequest& request, const PutAccountSuppressionAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutAccountSuppressionAttributes(request), context);
    } );
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

void SESV2Client::PutConfigurationSetDeliveryOptionsAsync(const PutConfigurationSetDeliveryOptionsRequest& request, const PutConfigurationSetDeliveryOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutConfigurationSetDeliveryOptions(request), context);
    } );
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

void SESV2Client::PutConfigurationSetReputationOptionsAsync(const PutConfigurationSetReputationOptionsRequest& request, const PutConfigurationSetReputationOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutConfigurationSetReputationOptions(request), context);
    } );
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

void SESV2Client::PutConfigurationSetSendingOptionsAsync(const PutConfigurationSetSendingOptionsRequest& request, const PutConfigurationSetSendingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutConfigurationSetSendingOptions(request), context);
    } );
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

void SESV2Client::PutConfigurationSetSuppressionOptionsAsync(const PutConfigurationSetSuppressionOptionsRequest& request, const PutConfigurationSetSuppressionOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutConfigurationSetSuppressionOptions(request), context);
    } );
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

void SESV2Client::PutConfigurationSetTrackingOptionsAsync(const PutConfigurationSetTrackingOptionsRequest& request, const PutConfigurationSetTrackingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutConfigurationSetTrackingOptions(request), context);
    } );
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

void SESV2Client::PutDedicatedIpInPoolAsync(const PutDedicatedIpInPoolRequest& request, const PutDedicatedIpInPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutDedicatedIpInPool(request), context);
    } );
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

void SESV2Client::PutDedicatedIpWarmupAttributesAsync(const PutDedicatedIpWarmupAttributesRequest& request, const PutDedicatedIpWarmupAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutDedicatedIpWarmupAttributes(request), context);
    } );
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

void SESV2Client::PutDeliverabilityDashboardOptionAsync(const PutDeliverabilityDashboardOptionRequest& request, const PutDeliverabilityDashboardOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutDeliverabilityDashboardOption(request), context);
    } );
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

void SESV2Client::PutEmailIdentityConfigurationSetAttributesAsync(const PutEmailIdentityConfigurationSetAttributesRequest& request, const PutEmailIdentityConfigurationSetAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutEmailIdentityConfigurationSetAttributes(request), context);
    } );
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

void SESV2Client::PutEmailIdentityDkimAttributesAsync(const PutEmailIdentityDkimAttributesRequest& request, const PutEmailIdentityDkimAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutEmailIdentityDkimAttributes(request), context);
    } );
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

void SESV2Client::PutEmailIdentityDkimSigningAttributesAsync(const PutEmailIdentityDkimSigningAttributesRequest& request, const PutEmailIdentityDkimSigningAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutEmailIdentityDkimSigningAttributes(request), context);
    } );
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

void SESV2Client::PutEmailIdentityFeedbackAttributesAsync(const PutEmailIdentityFeedbackAttributesRequest& request, const PutEmailIdentityFeedbackAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutEmailIdentityFeedbackAttributes(request), context);
    } );
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

void SESV2Client::PutEmailIdentityMailFromAttributesAsync(const PutEmailIdentityMailFromAttributesRequest& request, const PutEmailIdentityMailFromAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutEmailIdentityMailFromAttributes(request), context);
    } );
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

void SESV2Client::PutSuppressedDestinationAsync(const PutSuppressedDestinationRequest& request, const PutSuppressedDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutSuppressedDestination(request), context);
    } );
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

void SESV2Client::SendBulkEmailAsync(const SendBulkEmailRequest& request, const SendBulkEmailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SendBulkEmail(request), context);
    } );
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

void SESV2Client::SendCustomVerificationEmailAsync(const SendCustomVerificationEmailRequest& request, const SendCustomVerificationEmailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SendCustomVerificationEmail(request), context);
    } );
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

void SESV2Client::SendEmailAsync(const SendEmailRequest& request, const SendEmailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SendEmail(request), context);
    } );
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

void SESV2Client::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
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

void SESV2Client::TestRenderEmailTemplateAsync(const TestRenderEmailTemplateRequest& request, const TestRenderEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TestRenderEmailTemplate(request), context);
    } );
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

void SESV2Client::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
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

void SESV2Client::UpdateConfigurationSetEventDestinationAsync(const UpdateConfigurationSetEventDestinationRequest& request, const UpdateConfigurationSetEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateConfigurationSetEventDestination(request), context);
    } );
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

void SESV2Client::UpdateContactAsync(const UpdateContactRequest& request, const UpdateContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateContact(request), context);
    } );
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

void SESV2Client::UpdateContactListAsync(const UpdateContactListRequest& request, const UpdateContactListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateContactList(request), context);
    } );
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

void SESV2Client::UpdateCustomVerificationEmailTemplateAsync(const UpdateCustomVerificationEmailTemplateRequest& request, const UpdateCustomVerificationEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateCustomVerificationEmailTemplate(request), context);
    } );
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

void SESV2Client::UpdateEmailIdentityPolicyAsync(const UpdateEmailIdentityPolicyRequest& request, const UpdateEmailIdentityPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateEmailIdentityPolicy(request), context);
    } );
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

void SESV2Client::UpdateEmailTemplateAsync(const UpdateEmailTemplateRequest& request, const UpdateEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateEmailTemplate(request), context);
    } );
}

