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

#include <aws/pinpoint-email/PinpointEmailClient.h>
#include <aws/pinpoint-email/PinpointEmailEndpoint.h>
#include <aws/pinpoint-email/PinpointEmailErrorMarshaller.h>
#include <aws/pinpoint-email/model/CreateConfigurationSetRequest.h>
#include <aws/pinpoint-email/model/CreateConfigurationSetEventDestinationRequest.h>
#include <aws/pinpoint-email/model/CreateDedicatedIpPoolRequest.h>
#include <aws/pinpoint-email/model/CreateDeliverabilityTestReportRequest.h>
#include <aws/pinpoint-email/model/CreateEmailIdentityRequest.h>
#include <aws/pinpoint-email/model/DeleteConfigurationSetRequest.h>
#include <aws/pinpoint-email/model/DeleteConfigurationSetEventDestinationRequest.h>
#include <aws/pinpoint-email/model/DeleteDedicatedIpPoolRequest.h>
#include <aws/pinpoint-email/model/DeleteEmailIdentityRequest.h>
#include <aws/pinpoint-email/model/GetAccountRequest.h>
#include <aws/pinpoint-email/model/GetBlacklistReportsRequest.h>
#include <aws/pinpoint-email/model/GetConfigurationSetRequest.h>
#include <aws/pinpoint-email/model/GetConfigurationSetEventDestinationsRequest.h>
#include <aws/pinpoint-email/model/GetDedicatedIpRequest.h>
#include <aws/pinpoint-email/model/GetDedicatedIpsRequest.h>
#include <aws/pinpoint-email/model/GetDeliverabilityDashboardOptionsRequest.h>
#include <aws/pinpoint-email/model/GetDeliverabilityTestReportRequest.h>
#include <aws/pinpoint-email/model/GetDomainDeliverabilityCampaignRequest.h>
#include <aws/pinpoint-email/model/GetDomainStatisticsReportRequest.h>
#include <aws/pinpoint-email/model/GetEmailIdentityRequest.h>
#include <aws/pinpoint-email/model/ListConfigurationSetsRequest.h>
#include <aws/pinpoint-email/model/ListDedicatedIpPoolsRequest.h>
#include <aws/pinpoint-email/model/ListDeliverabilityTestReportsRequest.h>
#include <aws/pinpoint-email/model/ListDomainDeliverabilityCampaignsRequest.h>
#include <aws/pinpoint-email/model/ListEmailIdentitiesRequest.h>
#include <aws/pinpoint-email/model/ListTagsForResourceRequest.h>
#include <aws/pinpoint-email/model/PutAccountDedicatedIpWarmupAttributesRequest.h>
#include <aws/pinpoint-email/model/PutAccountSendingAttributesRequest.h>
#include <aws/pinpoint-email/model/PutConfigurationSetDeliveryOptionsRequest.h>
#include <aws/pinpoint-email/model/PutConfigurationSetReputationOptionsRequest.h>
#include <aws/pinpoint-email/model/PutConfigurationSetSendingOptionsRequest.h>
#include <aws/pinpoint-email/model/PutConfigurationSetTrackingOptionsRequest.h>
#include <aws/pinpoint-email/model/PutDedicatedIpInPoolRequest.h>
#include <aws/pinpoint-email/model/PutDedicatedIpWarmupAttributesRequest.h>
#include <aws/pinpoint-email/model/PutDeliverabilityDashboardOptionRequest.h>
#include <aws/pinpoint-email/model/PutEmailIdentityDkimAttributesRequest.h>
#include <aws/pinpoint-email/model/PutEmailIdentityFeedbackAttributesRequest.h>
#include <aws/pinpoint-email/model/PutEmailIdentityMailFromAttributesRequest.h>
#include <aws/pinpoint-email/model/SendEmailRequest.h>
#include <aws/pinpoint-email/model/TagResourceRequest.h>
#include <aws/pinpoint-email/model/UntagResourceRequest.h>
#include <aws/pinpoint-email/model/UpdateConfigurationSetEventDestinationRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::PinpointEmail;
using namespace Aws::PinpointEmail::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "ses";
static const char* ALLOCATION_TAG = "PinpointEmailClient";

PinpointEmailClient::PinpointEmailClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PinpointEmailErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

PinpointEmailClient::PinpointEmailClient(const AWSCredentials& credentials,
                                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PinpointEmailErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

PinpointEmailClient::PinpointEmailClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PinpointEmailErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

PinpointEmailClient::~PinpointEmailClient()
{
}

void PinpointEmailClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Pinpoint Email");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + PinpointEmailEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void PinpointEmailClient::OverrideEndpoint(const Aws::String& endpoint)
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

CreateConfigurationSetOutcome PinpointEmailClient::CreateConfigurationSet(const CreateConfigurationSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/email/configuration-sets");
  return CreateConfigurationSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateConfigurationSetOutcomeCallable PinpointEmailClient::CreateConfigurationSetCallable(const CreateConfigurationSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateConfigurationSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateConfigurationSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointEmailClientCreateConfigurationSetAsyncHelper(PinpointEmailClient const * const clientThis, const CreateConfigurationSetRequest& request, const CreateConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateConfigurationSet(request), context);
}

void PinpointEmailClient::CreateConfigurationSetAsync(const CreateConfigurationSetRequest& request, const CreateConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointEmailClientCreateConfigurationSetAsyncHelper( this, request, handler, context ); } );
}

CreateConfigurationSetEventDestinationOutcome PinpointEmailClient::CreateConfigurationSetEventDestination(const CreateConfigurationSetEventDestinationRequest& request) const
{
  if (!request.ConfigurationSetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateConfigurationSetEventDestination", "Required field: ConfigurationSetName, is not set");
    return CreateConfigurationSetEventDestinationOutcome(Aws::Client::AWSError<PinpointEmailErrors>(PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationSetName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/email/configuration-sets/");
  uri.AddPathSegment(request.GetConfigurationSetName());
  uri.AddPathSegments("/event-destinations");
  return CreateConfigurationSetEventDestinationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateConfigurationSetEventDestinationOutcomeCallable PinpointEmailClient::CreateConfigurationSetEventDestinationCallable(const CreateConfigurationSetEventDestinationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateConfigurationSetEventDestinationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateConfigurationSetEventDestination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointEmailClientCreateConfigurationSetEventDestinationAsyncHelper(PinpointEmailClient const * const clientThis, const CreateConfigurationSetEventDestinationRequest& request, const CreateConfigurationSetEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateConfigurationSetEventDestination(request), context);
}

void PinpointEmailClient::CreateConfigurationSetEventDestinationAsync(const CreateConfigurationSetEventDestinationRequest& request, const CreateConfigurationSetEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointEmailClientCreateConfigurationSetEventDestinationAsyncHelper( this, request, handler, context ); } );
}

CreateDedicatedIpPoolOutcome PinpointEmailClient::CreateDedicatedIpPool(const CreateDedicatedIpPoolRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/email/dedicated-ip-pools");
  return CreateDedicatedIpPoolOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDedicatedIpPoolOutcomeCallable PinpointEmailClient::CreateDedicatedIpPoolCallable(const CreateDedicatedIpPoolRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDedicatedIpPoolOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDedicatedIpPool(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointEmailClientCreateDedicatedIpPoolAsyncHelper(PinpointEmailClient const * const clientThis, const CreateDedicatedIpPoolRequest& request, const CreateDedicatedIpPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDedicatedIpPool(request), context);
}

void PinpointEmailClient::CreateDedicatedIpPoolAsync(const CreateDedicatedIpPoolRequest& request, const CreateDedicatedIpPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointEmailClientCreateDedicatedIpPoolAsyncHelper( this, request, handler, context ); } );
}

CreateDeliverabilityTestReportOutcome PinpointEmailClient::CreateDeliverabilityTestReport(const CreateDeliverabilityTestReportRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/email/deliverability-dashboard/test");
  return CreateDeliverabilityTestReportOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDeliverabilityTestReportOutcomeCallable PinpointEmailClient::CreateDeliverabilityTestReportCallable(const CreateDeliverabilityTestReportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDeliverabilityTestReportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDeliverabilityTestReport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointEmailClientCreateDeliverabilityTestReportAsyncHelper(PinpointEmailClient const * const clientThis, const CreateDeliverabilityTestReportRequest& request, const CreateDeliverabilityTestReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDeliverabilityTestReport(request), context);
}

void PinpointEmailClient::CreateDeliverabilityTestReportAsync(const CreateDeliverabilityTestReportRequest& request, const CreateDeliverabilityTestReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointEmailClientCreateDeliverabilityTestReportAsyncHelper( this, request, handler, context ); } );
}

CreateEmailIdentityOutcome PinpointEmailClient::CreateEmailIdentity(const CreateEmailIdentityRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/email/identities");
  return CreateEmailIdentityOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateEmailIdentityOutcomeCallable PinpointEmailClient::CreateEmailIdentityCallable(const CreateEmailIdentityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateEmailIdentityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateEmailIdentity(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointEmailClientCreateEmailIdentityAsyncHelper(PinpointEmailClient const * const clientThis, const CreateEmailIdentityRequest& request, const CreateEmailIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateEmailIdentity(request), context);
}

void PinpointEmailClient::CreateEmailIdentityAsync(const CreateEmailIdentityRequest& request, const CreateEmailIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointEmailClientCreateEmailIdentityAsyncHelper( this, request, handler, context ); } );
}

DeleteConfigurationSetOutcome PinpointEmailClient::DeleteConfigurationSet(const DeleteConfigurationSetRequest& request) const
{
  if (!request.ConfigurationSetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteConfigurationSet", "Required field: ConfigurationSetName, is not set");
    return DeleteConfigurationSetOutcome(Aws::Client::AWSError<PinpointEmailErrors>(PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationSetName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/email/configuration-sets/");
  uri.AddPathSegment(request.GetConfigurationSetName());
  return DeleteConfigurationSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteConfigurationSetOutcomeCallable PinpointEmailClient::DeleteConfigurationSetCallable(const DeleteConfigurationSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteConfigurationSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteConfigurationSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointEmailClientDeleteConfigurationSetAsyncHelper(PinpointEmailClient const * const clientThis, const DeleteConfigurationSetRequest& request, const DeleteConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteConfigurationSet(request), context);
}

void PinpointEmailClient::DeleteConfigurationSetAsync(const DeleteConfigurationSetRequest& request, const DeleteConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointEmailClientDeleteConfigurationSetAsyncHelper( this, request, handler, context ); } );
}

DeleteConfigurationSetEventDestinationOutcome PinpointEmailClient::DeleteConfigurationSetEventDestination(const DeleteConfigurationSetEventDestinationRequest& request) const
{
  if (!request.ConfigurationSetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteConfigurationSetEventDestination", "Required field: ConfigurationSetName, is not set");
    return DeleteConfigurationSetEventDestinationOutcome(Aws::Client::AWSError<PinpointEmailErrors>(PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationSetName]", false));
  }
  if (!request.EventDestinationNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteConfigurationSetEventDestination", "Required field: EventDestinationName, is not set");
    return DeleteConfigurationSetEventDestinationOutcome(Aws::Client::AWSError<PinpointEmailErrors>(PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EventDestinationName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/email/configuration-sets/");
  uri.AddPathSegment(request.GetConfigurationSetName());
  uri.AddPathSegments("/event-destinations/");
  uri.AddPathSegment(request.GetEventDestinationName());
  return DeleteConfigurationSetEventDestinationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteConfigurationSetEventDestinationOutcomeCallable PinpointEmailClient::DeleteConfigurationSetEventDestinationCallable(const DeleteConfigurationSetEventDestinationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteConfigurationSetEventDestinationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteConfigurationSetEventDestination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointEmailClientDeleteConfigurationSetEventDestinationAsyncHelper(PinpointEmailClient const * const clientThis, const DeleteConfigurationSetEventDestinationRequest& request, const DeleteConfigurationSetEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteConfigurationSetEventDestination(request), context);
}

void PinpointEmailClient::DeleteConfigurationSetEventDestinationAsync(const DeleteConfigurationSetEventDestinationRequest& request, const DeleteConfigurationSetEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointEmailClientDeleteConfigurationSetEventDestinationAsyncHelper( this, request, handler, context ); } );
}

DeleteDedicatedIpPoolOutcome PinpointEmailClient::DeleteDedicatedIpPool(const DeleteDedicatedIpPoolRequest& request) const
{
  if (!request.PoolNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDedicatedIpPool", "Required field: PoolName, is not set");
    return DeleteDedicatedIpPoolOutcome(Aws::Client::AWSError<PinpointEmailErrors>(PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PoolName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/email/dedicated-ip-pools/");
  uri.AddPathSegment(request.GetPoolName());
  return DeleteDedicatedIpPoolOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteDedicatedIpPoolOutcomeCallable PinpointEmailClient::DeleteDedicatedIpPoolCallable(const DeleteDedicatedIpPoolRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDedicatedIpPoolOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDedicatedIpPool(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointEmailClientDeleteDedicatedIpPoolAsyncHelper(PinpointEmailClient const * const clientThis, const DeleteDedicatedIpPoolRequest& request, const DeleteDedicatedIpPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDedicatedIpPool(request), context);
}

void PinpointEmailClient::DeleteDedicatedIpPoolAsync(const DeleteDedicatedIpPoolRequest& request, const DeleteDedicatedIpPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointEmailClientDeleteDedicatedIpPoolAsyncHelper( this, request, handler, context ); } );
}

DeleteEmailIdentityOutcome PinpointEmailClient::DeleteEmailIdentity(const DeleteEmailIdentityRequest& request) const
{
  if (!request.EmailIdentityHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteEmailIdentity", "Required field: EmailIdentity, is not set");
    return DeleteEmailIdentityOutcome(Aws::Client::AWSError<PinpointEmailErrors>(PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EmailIdentity]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/email/identities/");
  uri.AddPathSegment(request.GetEmailIdentity());
  return DeleteEmailIdentityOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteEmailIdentityOutcomeCallable PinpointEmailClient::DeleteEmailIdentityCallable(const DeleteEmailIdentityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEmailIdentityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEmailIdentity(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointEmailClientDeleteEmailIdentityAsyncHelper(PinpointEmailClient const * const clientThis, const DeleteEmailIdentityRequest& request, const DeleteEmailIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteEmailIdentity(request), context);
}

void PinpointEmailClient::DeleteEmailIdentityAsync(const DeleteEmailIdentityRequest& request, const DeleteEmailIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointEmailClientDeleteEmailIdentityAsyncHelper( this, request, handler, context ); } );
}

GetAccountOutcome PinpointEmailClient::GetAccount(const GetAccountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/email/account");
  return GetAccountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetAccountOutcomeCallable PinpointEmailClient::GetAccountCallable(const GetAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointEmailClientGetAccountAsyncHelper(PinpointEmailClient const * const clientThis, const GetAccountRequest& request, const GetAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetAccount(request), context);
}

void PinpointEmailClient::GetAccountAsync(const GetAccountRequest& request, const GetAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointEmailClientGetAccountAsyncHelper( this, request, handler, context ); } );
}

GetBlacklistReportsOutcome PinpointEmailClient::GetBlacklistReports(const GetBlacklistReportsRequest& request) const
{
  if (!request.BlacklistItemNamesHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBlacklistReports", "Required field: BlacklistItemNames, is not set");
    return GetBlacklistReportsOutcome(Aws::Client::AWSError<PinpointEmailErrors>(PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BlacklistItemNames]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/email/deliverability-dashboard/blacklist-report");
  return GetBlacklistReportsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetBlacklistReportsOutcomeCallable PinpointEmailClient::GetBlacklistReportsCallable(const GetBlacklistReportsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBlacklistReportsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBlacklistReports(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointEmailClientGetBlacklistReportsAsyncHelper(PinpointEmailClient const * const clientThis, const GetBlacklistReportsRequest& request, const GetBlacklistReportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetBlacklistReports(request), context);
}

void PinpointEmailClient::GetBlacklistReportsAsync(const GetBlacklistReportsRequest& request, const GetBlacklistReportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointEmailClientGetBlacklistReportsAsyncHelper( this, request, handler, context ); } );
}

GetConfigurationSetOutcome PinpointEmailClient::GetConfigurationSet(const GetConfigurationSetRequest& request) const
{
  if (!request.ConfigurationSetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetConfigurationSet", "Required field: ConfigurationSetName, is not set");
    return GetConfigurationSetOutcome(Aws::Client::AWSError<PinpointEmailErrors>(PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationSetName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/email/configuration-sets/");
  uri.AddPathSegment(request.GetConfigurationSetName());
  return GetConfigurationSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetConfigurationSetOutcomeCallable PinpointEmailClient::GetConfigurationSetCallable(const GetConfigurationSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetConfigurationSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetConfigurationSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointEmailClientGetConfigurationSetAsyncHelper(PinpointEmailClient const * const clientThis, const GetConfigurationSetRequest& request, const GetConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetConfigurationSet(request), context);
}

void PinpointEmailClient::GetConfigurationSetAsync(const GetConfigurationSetRequest& request, const GetConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointEmailClientGetConfigurationSetAsyncHelper( this, request, handler, context ); } );
}

GetConfigurationSetEventDestinationsOutcome PinpointEmailClient::GetConfigurationSetEventDestinations(const GetConfigurationSetEventDestinationsRequest& request) const
{
  if (!request.ConfigurationSetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetConfigurationSetEventDestinations", "Required field: ConfigurationSetName, is not set");
    return GetConfigurationSetEventDestinationsOutcome(Aws::Client::AWSError<PinpointEmailErrors>(PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationSetName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/email/configuration-sets/");
  uri.AddPathSegment(request.GetConfigurationSetName());
  uri.AddPathSegments("/event-destinations");
  return GetConfigurationSetEventDestinationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetConfigurationSetEventDestinationsOutcomeCallable PinpointEmailClient::GetConfigurationSetEventDestinationsCallable(const GetConfigurationSetEventDestinationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetConfigurationSetEventDestinationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetConfigurationSetEventDestinations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointEmailClientGetConfigurationSetEventDestinationsAsyncHelper(PinpointEmailClient const * const clientThis, const GetConfigurationSetEventDestinationsRequest& request, const GetConfigurationSetEventDestinationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetConfigurationSetEventDestinations(request), context);
}

void PinpointEmailClient::GetConfigurationSetEventDestinationsAsync(const GetConfigurationSetEventDestinationsRequest& request, const GetConfigurationSetEventDestinationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointEmailClientGetConfigurationSetEventDestinationsAsyncHelper( this, request, handler, context ); } );
}

GetDedicatedIpOutcome PinpointEmailClient::GetDedicatedIp(const GetDedicatedIpRequest& request) const
{
  if (!request.IpHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDedicatedIp", "Required field: Ip, is not set");
    return GetDedicatedIpOutcome(Aws::Client::AWSError<PinpointEmailErrors>(PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Ip]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/email/dedicated-ips/");
  uri.AddPathSegment(request.GetIp());
  return GetDedicatedIpOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDedicatedIpOutcomeCallable PinpointEmailClient::GetDedicatedIpCallable(const GetDedicatedIpRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDedicatedIpOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDedicatedIp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointEmailClientGetDedicatedIpAsyncHelper(PinpointEmailClient const * const clientThis, const GetDedicatedIpRequest& request, const GetDedicatedIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDedicatedIp(request), context);
}

void PinpointEmailClient::GetDedicatedIpAsync(const GetDedicatedIpRequest& request, const GetDedicatedIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointEmailClientGetDedicatedIpAsyncHelper( this, request, handler, context ); } );
}

GetDedicatedIpsOutcome PinpointEmailClient::GetDedicatedIps(const GetDedicatedIpsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/email/dedicated-ips");
  return GetDedicatedIpsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDedicatedIpsOutcomeCallable PinpointEmailClient::GetDedicatedIpsCallable(const GetDedicatedIpsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDedicatedIpsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDedicatedIps(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointEmailClientGetDedicatedIpsAsyncHelper(PinpointEmailClient const * const clientThis, const GetDedicatedIpsRequest& request, const GetDedicatedIpsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDedicatedIps(request), context);
}

void PinpointEmailClient::GetDedicatedIpsAsync(const GetDedicatedIpsRequest& request, const GetDedicatedIpsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointEmailClientGetDedicatedIpsAsyncHelper( this, request, handler, context ); } );
}

GetDeliverabilityDashboardOptionsOutcome PinpointEmailClient::GetDeliverabilityDashboardOptions(const GetDeliverabilityDashboardOptionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/email/deliverability-dashboard");
  return GetDeliverabilityDashboardOptionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDeliverabilityDashboardOptionsOutcomeCallable PinpointEmailClient::GetDeliverabilityDashboardOptionsCallable(const GetDeliverabilityDashboardOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDeliverabilityDashboardOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDeliverabilityDashboardOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointEmailClientGetDeliverabilityDashboardOptionsAsyncHelper(PinpointEmailClient const * const clientThis, const GetDeliverabilityDashboardOptionsRequest& request, const GetDeliverabilityDashboardOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDeliverabilityDashboardOptions(request), context);
}

void PinpointEmailClient::GetDeliverabilityDashboardOptionsAsync(const GetDeliverabilityDashboardOptionsRequest& request, const GetDeliverabilityDashboardOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointEmailClientGetDeliverabilityDashboardOptionsAsyncHelper( this, request, handler, context ); } );
}

GetDeliverabilityTestReportOutcome PinpointEmailClient::GetDeliverabilityTestReport(const GetDeliverabilityTestReportRequest& request) const
{
  if (!request.ReportIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDeliverabilityTestReport", "Required field: ReportId, is not set");
    return GetDeliverabilityTestReportOutcome(Aws::Client::AWSError<PinpointEmailErrors>(PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ReportId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/email/deliverability-dashboard/test-reports/");
  uri.AddPathSegment(request.GetReportId());
  return GetDeliverabilityTestReportOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDeliverabilityTestReportOutcomeCallable PinpointEmailClient::GetDeliverabilityTestReportCallable(const GetDeliverabilityTestReportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDeliverabilityTestReportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDeliverabilityTestReport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointEmailClientGetDeliverabilityTestReportAsyncHelper(PinpointEmailClient const * const clientThis, const GetDeliverabilityTestReportRequest& request, const GetDeliverabilityTestReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDeliverabilityTestReport(request), context);
}

void PinpointEmailClient::GetDeliverabilityTestReportAsync(const GetDeliverabilityTestReportRequest& request, const GetDeliverabilityTestReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointEmailClientGetDeliverabilityTestReportAsyncHelper( this, request, handler, context ); } );
}

GetDomainDeliverabilityCampaignOutcome PinpointEmailClient::GetDomainDeliverabilityCampaign(const GetDomainDeliverabilityCampaignRequest& request) const
{
  if (!request.CampaignIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDomainDeliverabilityCampaign", "Required field: CampaignId, is not set");
    return GetDomainDeliverabilityCampaignOutcome(Aws::Client::AWSError<PinpointEmailErrors>(PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CampaignId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/email/deliverability-dashboard/campaigns/");
  uri.AddPathSegment(request.GetCampaignId());
  return GetDomainDeliverabilityCampaignOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDomainDeliverabilityCampaignOutcomeCallable PinpointEmailClient::GetDomainDeliverabilityCampaignCallable(const GetDomainDeliverabilityCampaignRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDomainDeliverabilityCampaignOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDomainDeliverabilityCampaign(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointEmailClientGetDomainDeliverabilityCampaignAsyncHelper(PinpointEmailClient const * const clientThis, const GetDomainDeliverabilityCampaignRequest& request, const GetDomainDeliverabilityCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDomainDeliverabilityCampaign(request), context);
}

void PinpointEmailClient::GetDomainDeliverabilityCampaignAsync(const GetDomainDeliverabilityCampaignRequest& request, const GetDomainDeliverabilityCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointEmailClientGetDomainDeliverabilityCampaignAsyncHelper( this, request, handler, context ); } );
}

GetDomainStatisticsReportOutcome PinpointEmailClient::GetDomainStatisticsReport(const GetDomainStatisticsReportRequest& request) const
{
  if (!request.DomainHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDomainStatisticsReport", "Required field: Domain, is not set");
    return GetDomainStatisticsReportOutcome(Aws::Client::AWSError<PinpointEmailErrors>(PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Domain]", false));
  }
  if (!request.StartDateHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDomainStatisticsReport", "Required field: StartDate, is not set");
    return GetDomainStatisticsReportOutcome(Aws::Client::AWSError<PinpointEmailErrors>(PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StartDate]", false));
  }
  if (!request.EndDateHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDomainStatisticsReport", "Required field: EndDate, is not set");
    return GetDomainStatisticsReportOutcome(Aws::Client::AWSError<PinpointEmailErrors>(PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndDate]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/email/deliverability-dashboard/statistics-report/");
  uri.AddPathSegment(request.GetDomain());
  return GetDomainStatisticsReportOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDomainStatisticsReportOutcomeCallable PinpointEmailClient::GetDomainStatisticsReportCallable(const GetDomainStatisticsReportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDomainStatisticsReportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDomainStatisticsReport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointEmailClientGetDomainStatisticsReportAsyncHelper(PinpointEmailClient const * const clientThis, const GetDomainStatisticsReportRequest& request, const GetDomainStatisticsReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDomainStatisticsReport(request), context);
}

void PinpointEmailClient::GetDomainStatisticsReportAsync(const GetDomainStatisticsReportRequest& request, const GetDomainStatisticsReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointEmailClientGetDomainStatisticsReportAsyncHelper( this, request, handler, context ); } );
}

GetEmailIdentityOutcome PinpointEmailClient::GetEmailIdentity(const GetEmailIdentityRequest& request) const
{
  if (!request.EmailIdentityHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetEmailIdentity", "Required field: EmailIdentity, is not set");
    return GetEmailIdentityOutcome(Aws::Client::AWSError<PinpointEmailErrors>(PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EmailIdentity]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/email/identities/");
  uri.AddPathSegment(request.GetEmailIdentity());
  return GetEmailIdentityOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetEmailIdentityOutcomeCallable PinpointEmailClient::GetEmailIdentityCallable(const GetEmailIdentityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEmailIdentityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEmailIdentity(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointEmailClientGetEmailIdentityAsyncHelper(PinpointEmailClient const * const clientThis, const GetEmailIdentityRequest& request, const GetEmailIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetEmailIdentity(request), context);
}

void PinpointEmailClient::GetEmailIdentityAsync(const GetEmailIdentityRequest& request, const GetEmailIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointEmailClientGetEmailIdentityAsyncHelper( this, request, handler, context ); } );
}

ListConfigurationSetsOutcome PinpointEmailClient::ListConfigurationSets(const ListConfigurationSetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/email/configuration-sets");
  return ListConfigurationSetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListConfigurationSetsOutcomeCallable PinpointEmailClient::ListConfigurationSetsCallable(const ListConfigurationSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListConfigurationSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListConfigurationSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointEmailClientListConfigurationSetsAsyncHelper(PinpointEmailClient const * const clientThis, const ListConfigurationSetsRequest& request, const ListConfigurationSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListConfigurationSets(request), context);
}

void PinpointEmailClient::ListConfigurationSetsAsync(const ListConfigurationSetsRequest& request, const ListConfigurationSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointEmailClientListConfigurationSetsAsyncHelper( this, request, handler, context ); } );
}

ListDedicatedIpPoolsOutcome PinpointEmailClient::ListDedicatedIpPools(const ListDedicatedIpPoolsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/email/dedicated-ip-pools");
  return ListDedicatedIpPoolsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDedicatedIpPoolsOutcomeCallable PinpointEmailClient::ListDedicatedIpPoolsCallable(const ListDedicatedIpPoolsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDedicatedIpPoolsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDedicatedIpPools(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointEmailClientListDedicatedIpPoolsAsyncHelper(PinpointEmailClient const * const clientThis, const ListDedicatedIpPoolsRequest& request, const ListDedicatedIpPoolsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDedicatedIpPools(request), context);
}

void PinpointEmailClient::ListDedicatedIpPoolsAsync(const ListDedicatedIpPoolsRequest& request, const ListDedicatedIpPoolsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointEmailClientListDedicatedIpPoolsAsyncHelper( this, request, handler, context ); } );
}

ListDeliverabilityTestReportsOutcome PinpointEmailClient::ListDeliverabilityTestReports(const ListDeliverabilityTestReportsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/email/deliverability-dashboard/test-reports");
  return ListDeliverabilityTestReportsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDeliverabilityTestReportsOutcomeCallable PinpointEmailClient::ListDeliverabilityTestReportsCallable(const ListDeliverabilityTestReportsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDeliverabilityTestReportsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDeliverabilityTestReports(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointEmailClientListDeliverabilityTestReportsAsyncHelper(PinpointEmailClient const * const clientThis, const ListDeliverabilityTestReportsRequest& request, const ListDeliverabilityTestReportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDeliverabilityTestReports(request), context);
}

void PinpointEmailClient::ListDeliverabilityTestReportsAsync(const ListDeliverabilityTestReportsRequest& request, const ListDeliverabilityTestReportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointEmailClientListDeliverabilityTestReportsAsyncHelper( this, request, handler, context ); } );
}

ListDomainDeliverabilityCampaignsOutcome PinpointEmailClient::ListDomainDeliverabilityCampaigns(const ListDomainDeliverabilityCampaignsRequest& request) const
{
  if (!request.StartDateHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDomainDeliverabilityCampaigns", "Required field: StartDate, is not set");
    return ListDomainDeliverabilityCampaignsOutcome(Aws::Client::AWSError<PinpointEmailErrors>(PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StartDate]", false));
  }
  if (!request.EndDateHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDomainDeliverabilityCampaigns", "Required field: EndDate, is not set");
    return ListDomainDeliverabilityCampaignsOutcome(Aws::Client::AWSError<PinpointEmailErrors>(PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndDate]", false));
  }
  if (!request.SubscribedDomainHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDomainDeliverabilityCampaigns", "Required field: SubscribedDomain, is not set");
    return ListDomainDeliverabilityCampaignsOutcome(Aws::Client::AWSError<PinpointEmailErrors>(PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SubscribedDomain]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/email/deliverability-dashboard/domains/");
  uri.AddPathSegment(request.GetSubscribedDomain());
  uri.AddPathSegments("/campaigns");
  return ListDomainDeliverabilityCampaignsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDomainDeliverabilityCampaignsOutcomeCallable PinpointEmailClient::ListDomainDeliverabilityCampaignsCallable(const ListDomainDeliverabilityCampaignsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDomainDeliverabilityCampaignsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDomainDeliverabilityCampaigns(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointEmailClientListDomainDeliverabilityCampaignsAsyncHelper(PinpointEmailClient const * const clientThis, const ListDomainDeliverabilityCampaignsRequest& request, const ListDomainDeliverabilityCampaignsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDomainDeliverabilityCampaigns(request), context);
}

void PinpointEmailClient::ListDomainDeliverabilityCampaignsAsync(const ListDomainDeliverabilityCampaignsRequest& request, const ListDomainDeliverabilityCampaignsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointEmailClientListDomainDeliverabilityCampaignsAsyncHelper( this, request, handler, context ); } );
}

ListEmailIdentitiesOutcome PinpointEmailClient::ListEmailIdentities(const ListEmailIdentitiesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/email/identities");
  return ListEmailIdentitiesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListEmailIdentitiesOutcomeCallable PinpointEmailClient::ListEmailIdentitiesCallable(const ListEmailIdentitiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEmailIdentitiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEmailIdentities(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointEmailClientListEmailIdentitiesAsyncHelper(PinpointEmailClient const * const clientThis, const ListEmailIdentitiesRequest& request, const ListEmailIdentitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListEmailIdentities(request), context);
}

void PinpointEmailClient::ListEmailIdentitiesAsync(const ListEmailIdentitiesRequest& request, const ListEmailIdentitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointEmailClientListEmailIdentitiesAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome PinpointEmailClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<PinpointEmailErrors>(PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/email/tags");
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable PinpointEmailClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointEmailClientListTagsForResourceAsyncHelper(PinpointEmailClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void PinpointEmailClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointEmailClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

PutAccountDedicatedIpWarmupAttributesOutcome PinpointEmailClient::PutAccountDedicatedIpWarmupAttributes(const PutAccountDedicatedIpWarmupAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/email/account/dedicated-ips/warmup");
  return PutAccountDedicatedIpWarmupAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutAccountDedicatedIpWarmupAttributesOutcomeCallable PinpointEmailClient::PutAccountDedicatedIpWarmupAttributesCallable(const PutAccountDedicatedIpWarmupAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutAccountDedicatedIpWarmupAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutAccountDedicatedIpWarmupAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointEmailClientPutAccountDedicatedIpWarmupAttributesAsyncHelper(PinpointEmailClient const * const clientThis, const PutAccountDedicatedIpWarmupAttributesRequest& request, const PutAccountDedicatedIpWarmupAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutAccountDedicatedIpWarmupAttributes(request), context);
}

void PinpointEmailClient::PutAccountDedicatedIpWarmupAttributesAsync(const PutAccountDedicatedIpWarmupAttributesRequest& request, const PutAccountDedicatedIpWarmupAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointEmailClientPutAccountDedicatedIpWarmupAttributesAsyncHelper( this, request, handler, context ); } );
}

PutAccountSendingAttributesOutcome PinpointEmailClient::PutAccountSendingAttributes(const PutAccountSendingAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/email/account/sending");
  return PutAccountSendingAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutAccountSendingAttributesOutcomeCallable PinpointEmailClient::PutAccountSendingAttributesCallable(const PutAccountSendingAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutAccountSendingAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutAccountSendingAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointEmailClientPutAccountSendingAttributesAsyncHelper(PinpointEmailClient const * const clientThis, const PutAccountSendingAttributesRequest& request, const PutAccountSendingAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutAccountSendingAttributes(request), context);
}

void PinpointEmailClient::PutAccountSendingAttributesAsync(const PutAccountSendingAttributesRequest& request, const PutAccountSendingAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointEmailClientPutAccountSendingAttributesAsyncHelper( this, request, handler, context ); } );
}

PutConfigurationSetDeliveryOptionsOutcome PinpointEmailClient::PutConfigurationSetDeliveryOptions(const PutConfigurationSetDeliveryOptionsRequest& request) const
{
  if (!request.ConfigurationSetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutConfigurationSetDeliveryOptions", "Required field: ConfigurationSetName, is not set");
    return PutConfigurationSetDeliveryOptionsOutcome(Aws::Client::AWSError<PinpointEmailErrors>(PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationSetName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/email/configuration-sets/");
  uri.AddPathSegment(request.GetConfigurationSetName());
  uri.AddPathSegments("/delivery-options");
  return PutConfigurationSetDeliveryOptionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutConfigurationSetDeliveryOptionsOutcomeCallable PinpointEmailClient::PutConfigurationSetDeliveryOptionsCallable(const PutConfigurationSetDeliveryOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutConfigurationSetDeliveryOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutConfigurationSetDeliveryOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointEmailClientPutConfigurationSetDeliveryOptionsAsyncHelper(PinpointEmailClient const * const clientThis, const PutConfigurationSetDeliveryOptionsRequest& request, const PutConfigurationSetDeliveryOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutConfigurationSetDeliveryOptions(request), context);
}

void PinpointEmailClient::PutConfigurationSetDeliveryOptionsAsync(const PutConfigurationSetDeliveryOptionsRequest& request, const PutConfigurationSetDeliveryOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointEmailClientPutConfigurationSetDeliveryOptionsAsyncHelper( this, request, handler, context ); } );
}

PutConfigurationSetReputationOptionsOutcome PinpointEmailClient::PutConfigurationSetReputationOptions(const PutConfigurationSetReputationOptionsRequest& request) const
{
  if (!request.ConfigurationSetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutConfigurationSetReputationOptions", "Required field: ConfigurationSetName, is not set");
    return PutConfigurationSetReputationOptionsOutcome(Aws::Client::AWSError<PinpointEmailErrors>(PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationSetName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/email/configuration-sets/");
  uri.AddPathSegment(request.GetConfigurationSetName());
  uri.AddPathSegments("/reputation-options");
  return PutConfigurationSetReputationOptionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutConfigurationSetReputationOptionsOutcomeCallable PinpointEmailClient::PutConfigurationSetReputationOptionsCallable(const PutConfigurationSetReputationOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutConfigurationSetReputationOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutConfigurationSetReputationOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointEmailClientPutConfigurationSetReputationOptionsAsyncHelper(PinpointEmailClient const * const clientThis, const PutConfigurationSetReputationOptionsRequest& request, const PutConfigurationSetReputationOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutConfigurationSetReputationOptions(request), context);
}

void PinpointEmailClient::PutConfigurationSetReputationOptionsAsync(const PutConfigurationSetReputationOptionsRequest& request, const PutConfigurationSetReputationOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointEmailClientPutConfigurationSetReputationOptionsAsyncHelper( this, request, handler, context ); } );
}

PutConfigurationSetSendingOptionsOutcome PinpointEmailClient::PutConfigurationSetSendingOptions(const PutConfigurationSetSendingOptionsRequest& request) const
{
  if (!request.ConfigurationSetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutConfigurationSetSendingOptions", "Required field: ConfigurationSetName, is not set");
    return PutConfigurationSetSendingOptionsOutcome(Aws::Client::AWSError<PinpointEmailErrors>(PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationSetName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/email/configuration-sets/");
  uri.AddPathSegment(request.GetConfigurationSetName());
  uri.AddPathSegments("/sending");
  return PutConfigurationSetSendingOptionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutConfigurationSetSendingOptionsOutcomeCallable PinpointEmailClient::PutConfigurationSetSendingOptionsCallable(const PutConfigurationSetSendingOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutConfigurationSetSendingOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutConfigurationSetSendingOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointEmailClientPutConfigurationSetSendingOptionsAsyncHelper(PinpointEmailClient const * const clientThis, const PutConfigurationSetSendingOptionsRequest& request, const PutConfigurationSetSendingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutConfigurationSetSendingOptions(request), context);
}

void PinpointEmailClient::PutConfigurationSetSendingOptionsAsync(const PutConfigurationSetSendingOptionsRequest& request, const PutConfigurationSetSendingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointEmailClientPutConfigurationSetSendingOptionsAsyncHelper( this, request, handler, context ); } );
}

PutConfigurationSetTrackingOptionsOutcome PinpointEmailClient::PutConfigurationSetTrackingOptions(const PutConfigurationSetTrackingOptionsRequest& request) const
{
  if (!request.ConfigurationSetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutConfigurationSetTrackingOptions", "Required field: ConfigurationSetName, is not set");
    return PutConfigurationSetTrackingOptionsOutcome(Aws::Client::AWSError<PinpointEmailErrors>(PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationSetName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/email/configuration-sets/");
  uri.AddPathSegment(request.GetConfigurationSetName());
  uri.AddPathSegments("/tracking-options");
  return PutConfigurationSetTrackingOptionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutConfigurationSetTrackingOptionsOutcomeCallable PinpointEmailClient::PutConfigurationSetTrackingOptionsCallable(const PutConfigurationSetTrackingOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutConfigurationSetTrackingOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutConfigurationSetTrackingOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointEmailClientPutConfigurationSetTrackingOptionsAsyncHelper(PinpointEmailClient const * const clientThis, const PutConfigurationSetTrackingOptionsRequest& request, const PutConfigurationSetTrackingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutConfigurationSetTrackingOptions(request), context);
}

void PinpointEmailClient::PutConfigurationSetTrackingOptionsAsync(const PutConfigurationSetTrackingOptionsRequest& request, const PutConfigurationSetTrackingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointEmailClientPutConfigurationSetTrackingOptionsAsyncHelper( this, request, handler, context ); } );
}

PutDedicatedIpInPoolOutcome PinpointEmailClient::PutDedicatedIpInPool(const PutDedicatedIpInPoolRequest& request) const
{
  if (!request.IpHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutDedicatedIpInPool", "Required field: Ip, is not set");
    return PutDedicatedIpInPoolOutcome(Aws::Client::AWSError<PinpointEmailErrors>(PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Ip]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/email/dedicated-ips/");
  uri.AddPathSegment(request.GetIp());
  uri.AddPathSegments("/pool");
  return PutDedicatedIpInPoolOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutDedicatedIpInPoolOutcomeCallable PinpointEmailClient::PutDedicatedIpInPoolCallable(const PutDedicatedIpInPoolRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutDedicatedIpInPoolOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutDedicatedIpInPool(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointEmailClientPutDedicatedIpInPoolAsyncHelper(PinpointEmailClient const * const clientThis, const PutDedicatedIpInPoolRequest& request, const PutDedicatedIpInPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutDedicatedIpInPool(request), context);
}

void PinpointEmailClient::PutDedicatedIpInPoolAsync(const PutDedicatedIpInPoolRequest& request, const PutDedicatedIpInPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointEmailClientPutDedicatedIpInPoolAsyncHelper( this, request, handler, context ); } );
}

PutDedicatedIpWarmupAttributesOutcome PinpointEmailClient::PutDedicatedIpWarmupAttributes(const PutDedicatedIpWarmupAttributesRequest& request) const
{
  if (!request.IpHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutDedicatedIpWarmupAttributes", "Required field: Ip, is not set");
    return PutDedicatedIpWarmupAttributesOutcome(Aws::Client::AWSError<PinpointEmailErrors>(PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Ip]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/email/dedicated-ips/");
  uri.AddPathSegment(request.GetIp());
  uri.AddPathSegments("/warmup");
  return PutDedicatedIpWarmupAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutDedicatedIpWarmupAttributesOutcomeCallable PinpointEmailClient::PutDedicatedIpWarmupAttributesCallable(const PutDedicatedIpWarmupAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutDedicatedIpWarmupAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutDedicatedIpWarmupAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointEmailClientPutDedicatedIpWarmupAttributesAsyncHelper(PinpointEmailClient const * const clientThis, const PutDedicatedIpWarmupAttributesRequest& request, const PutDedicatedIpWarmupAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutDedicatedIpWarmupAttributes(request), context);
}

void PinpointEmailClient::PutDedicatedIpWarmupAttributesAsync(const PutDedicatedIpWarmupAttributesRequest& request, const PutDedicatedIpWarmupAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointEmailClientPutDedicatedIpWarmupAttributesAsyncHelper( this, request, handler, context ); } );
}

PutDeliverabilityDashboardOptionOutcome PinpointEmailClient::PutDeliverabilityDashboardOption(const PutDeliverabilityDashboardOptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/email/deliverability-dashboard");
  return PutDeliverabilityDashboardOptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutDeliverabilityDashboardOptionOutcomeCallable PinpointEmailClient::PutDeliverabilityDashboardOptionCallable(const PutDeliverabilityDashboardOptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutDeliverabilityDashboardOptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutDeliverabilityDashboardOption(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointEmailClientPutDeliverabilityDashboardOptionAsyncHelper(PinpointEmailClient const * const clientThis, const PutDeliverabilityDashboardOptionRequest& request, const PutDeliverabilityDashboardOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutDeliverabilityDashboardOption(request), context);
}

void PinpointEmailClient::PutDeliverabilityDashboardOptionAsync(const PutDeliverabilityDashboardOptionRequest& request, const PutDeliverabilityDashboardOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointEmailClientPutDeliverabilityDashboardOptionAsyncHelper( this, request, handler, context ); } );
}

PutEmailIdentityDkimAttributesOutcome PinpointEmailClient::PutEmailIdentityDkimAttributes(const PutEmailIdentityDkimAttributesRequest& request) const
{
  if (!request.EmailIdentityHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutEmailIdentityDkimAttributes", "Required field: EmailIdentity, is not set");
    return PutEmailIdentityDkimAttributesOutcome(Aws::Client::AWSError<PinpointEmailErrors>(PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EmailIdentity]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/email/identities/");
  uri.AddPathSegment(request.GetEmailIdentity());
  uri.AddPathSegments("/dkim");
  return PutEmailIdentityDkimAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutEmailIdentityDkimAttributesOutcomeCallable PinpointEmailClient::PutEmailIdentityDkimAttributesCallable(const PutEmailIdentityDkimAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutEmailIdentityDkimAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutEmailIdentityDkimAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointEmailClientPutEmailIdentityDkimAttributesAsyncHelper(PinpointEmailClient const * const clientThis, const PutEmailIdentityDkimAttributesRequest& request, const PutEmailIdentityDkimAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutEmailIdentityDkimAttributes(request), context);
}

void PinpointEmailClient::PutEmailIdentityDkimAttributesAsync(const PutEmailIdentityDkimAttributesRequest& request, const PutEmailIdentityDkimAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointEmailClientPutEmailIdentityDkimAttributesAsyncHelper( this, request, handler, context ); } );
}

PutEmailIdentityFeedbackAttributesOutcome PinpointEmailClient::PutEmailIdentityFeedbackAttributes(const PutEmailIdentityFeedbackAttributesRequest& request) const
{
  if (!request.EmailIdentityHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutEmailIdentityFeedbackAttributes", "Required field: EmailIdentity, is not set");
    return PutEmailIdentityFeedbackAttributesOutcome(Aws::Client::AWSError<PinpointEmailErrors>(PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EmailIdentity]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/email/identities/");
  uri.AddPathSegment(request.GetEmailIdentity());
  uri.AddPathSegments("/feedback");
  return PutEmailIdentityFeedbackAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutEmailIdentityFeedbackAttributesOutcomeCallable PinpointEmailClient::PutEmailIdentityFeedbackAttributesCallable(const PutEmailIdentityFeedbackAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutEmailIdentityFeedbackAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutEmailIdentityFeedbackAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointEmailClientPutEmailIdentityFeedbackAttributesAsyncHelper(PinpointEmailClient const * const clientThis, const PutEmailIdentityFeedbackAttributesRequest& request, const PutEmailIdentityFeedbackAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutEmailIdentityFeedbackAttributes(request), context);
}

void PinpointEmailClient::PutEmailIdentityFeedbackAttributesAsync(const PutEmailIdentityFeedbackAttributesRequest& request, const PutEmailIdentityFeedbackAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointEmailClientPutEmailIdentityFeedbackAttributesAsyncHelper( this, request, handler, context ); } );
}

PutEmailIdentityMailFromAttributesOutcome PinpointEmailClient::PutEmailIdentityMailFromAttributes(const PutEmailIdentityMailFromAttributesRequest& request) const
{
  if (!request.EmailIdentityHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutEmailIdentityMailFromAttributes", "Required field: EmailIdentity, is not set");
    return PutEmailIdentityMailFromAttributesOutcome(Aws::Client::AWSError<PinpointEmailErrors>(PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EmailIdentity]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/email/identities/");
  uri.AddPathSegment(request.GetEmailIdentity());
  uri.AddPathSegments("/mail-from");
  return PutEmailIdentityMailFromAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutEmailIdentityMailFromAttributesOutcomeCallable PinpointEmailClient::PutEmailIdentityMailFromAttributesCallable(const PutEmailIdentityMailFromAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutEmailIdentityMailFromAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutEmailIdentityMailFromAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointEmailClientPutEmailIdentityMailFromAttributesAsyncHelper(PinpointEmailClient const * const clientThis, const PutEmailIdentityMailFromAttributesRequest& request, const PutEmailIdentityMailFromAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutEmailIdentityMailFromAttributes(request), context);
}

void PinpointEmailClient::PutEmailIdentityMailFromAttributesAsync(const PutEmailIdentityMailFromAttributesRequest& request, const PutEmailIdentityMailFromAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointEmailClientPutEmailIdentityMailFromAttributesAsyncHelper( this, request, handler, context ); } );
}

SendEmailOutcome PinpointEmailClient::SendEmail(const SendEmailRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/email/outbound-emails");
  return SendEmailOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SendEmailOutcomeCallable PinpointEmailClient::SendEmailCallable(const SendEmailRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SendEmailOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SendEmail(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointEmailClientSendEmailAsyncHelper(PinpointEmailClient const * const clientThis, const SendEmailRequest& request, const SendEmailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SendEmail(request), context);
}

void PinpointEmailClient::SendEmailAsync(const SendEmailRequest& request, const SendEmailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointEmailClientSendEmailAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome PinpointEmailClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/email/tags");
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable PinpointEmailClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointEmailClientTagResourceAsyncHelper(PinpointEmailClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void PinpointEmailClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointEmailClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome PinpointEmailClient::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<PinpointEmailErrors>(PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<PinpointEmailErrors>(PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/email/tags");
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable PinpointEmailClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointEmailClientUntagResourceAsyncHelper(PinpointEmailClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void PinpointEmailClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointEmailClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateConfigurationSetEventDestinationOutcome PinpointEmailClient::UpdateConfigurationSetEventDestination(const UpdateConfigurationSetEventDestinationRequest& request) const
{
  if (!request.ConfigurationSetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateConfigurationSetEventDestination", "Required field: ConfigurationSetName, is not set");
    return UpdateConfigurationSetEventDestinationOutcome(Aws::Client::AWSError<PinpointEmailErrors>(PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationSetName]", false));
  }
  if (!request.EventDestinationNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateConfigurationSetEventDestination", "Required field: EventDestinationName, is not set");
    return UpdateConfigurationSetEventDestinationOutcome(Aws::Client::AWSError<PinpointEmailErrors>(PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EventDestinationName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/email/configuration-sets/");
  uri.AddPathSegment(request.GetConfigurationSetName());
  uri.AddPathSegments("/event-destinations/");
  uri.AddPathSegment(request.GetEventDestinationName());
  return UpdateConfigurationSetEventDestinationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateConfigurationSetEventDestinationOutcomeCallable PinpointEmailClient::UpdateConfigurationSetEventDestinationCallable(const UpdateConfigurationSetEventDestinationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateConfigurationSetEventDestinationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateConfigurationSetEventDestination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointEmailClientUpdateConfigurationSetEventDestinationAsyncHelper(PinpointEmailClient const * const clientThis, const UpdateConfigurationSetEventDestinationRequest& request, const UpdateConfigurationSetEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateConfigurationSetEventDestination(request), context);
}

void PinpointEmailClient::UpdateConfigurationSetEventDestinationAsync(const UpdateConfigurationSetEventDestinationRequest& request, const UpdateConfigurationSetEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointEmailClientUpdateConfigurationSetEventDestinationAsyncHelper( this, request, handler, context ); } );
}

