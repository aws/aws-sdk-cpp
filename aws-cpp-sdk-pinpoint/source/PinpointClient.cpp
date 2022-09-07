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

#include <aws/pinpoint/PinpointClient.h>
#include <aws/pinpoint/PinpointEndpoint.h>
#include <aws/pinpoint/PinpointErrorMarshaller.h>
#include <aws/pinpoint/model/CreateAppRequest.h>
#include <aws/pinpoint/model/CreateCampaignRequest.h>
#include <aws/pinpoint/model/CreateEmailTemplateRequest.h>
#include <aws/pinpoint/model/CreateExportJobRequest.h>
#include <aws/pinpoint/model/CreateImportJobRequest.h>
#include <aws/pinpoint/model/CreateInAppTemplateRequest.h>
#include <aws/pinpoint/model/CreateJourneyRequest.h>
#include <aws/pinpoint/model/CreatePushTemplateRequest.h>
#include <aws/pinpoint/model/CreateRecommenderConfigurationRequest.h>
#include <aws/pinpoint/model/CreateSegmentRequest.h>
#include <aws/pinpoint/model/CreateSmsTemplateRequest.h>
#include <aws/pinpoint/model/CreateVoiceTemplateRequest.h>
#include <aws/pinpoint/model/DeleteAdmChannelRequest.h>
#include <aws/pinpoint/model/DeleteApnsChannelRequest.h>
#include <aws/pinpoint/model/DeleteApnsSandboxChannelRequest.h>
#include <aws/pinpoint/model/DeleteApnsVoipChannelRequest.h>
#include <aws/pinpoint/model/DeleteApnsVoipSandboxChannelRequest.h>
#include <aws/pinpoint/model/DeleteAppRequest.h>
#include <aws/pinpoint/model/DeleteBaiduChannelRequest.h>
#include <aws/pinpoint/model/DeleteCampaignRequest.h>
#include <aws/pinpoint/model/DeleteEmailChannelRequest.h>
#include <aws/pinpoint/model/DeleteEmailTemplateRequest.h>
#include <aws/pinpoint/model/DeleteEndpointRequest.h>
#include <aws/pinpoint/model/DeleteEventStreamRequest.h>
#include <aws/pinpoint/model/DeleteGcmChannelRequest.h>
#include <aws/pinpoint/model/DeleteInAppTemplateRequest.h>
#include <aws/pinpoint/model/DeleteJourneyRequest.h>
#include <aws/pinpoint/model/DeletePushTemplateRequest.h>
#include <aws/pinpoint/model/DeleteRecommenderConfigurationRequest.h>
#include <aws/pinpoint/model/DeleteSegmentRequest.h>
#include <aws/pinpoint/model/DeleteSmsChannelRequest.h>
#include <aws/pinpoint/model/DeleteSmsTemplateRequest.h>
#include <aws/pinpoint/model/DeleteUserEndpointsRequest.h>
#include <aws/pinpoint/model/DeleteVoiceChannelRequest.h>
#include <aws/pinpoint/model/DeleteVoiceTemplateRequest.h>
#include <aws/pinpoint/model/GetAdmChannelRequest.h>
#include <aws/pinpoint/model/GetApnsChannelRequest.h>
#include <aws/pinpoint/model/GetApnsSandboxChannelRequest.h>
#include <aws/pinpoint/model/GetApnsVoipChannelRequest.h>
#include <aws/pinpoint/model/GetApnsVoipSandboxChannelRequest.h>
#include <aws/pinpoint/model/GetAppRequest.h>
#include <aws/pinpoint/model/GetApplicationDateRangeKpiRequest.h>
#include <aws/pinpoint/model/GetApplicationSettingsRequest.h>
#include <aws/pinpoint/model/GetAppsRequest.h>
#include <aws/pinpoint/model/GetBaiduChannelRequest.h>
#include <aws/pinpoint/model/GetCampaignRequest.h>
#include <aws/pinpoint/model/GetCampaignActivitiesRequest.h>
#include <aws/pinpoint/model/GetCampaignDateRangeKpiRequest.h>
#include <aws/pinpoint/model/GetCampaignVersionRequest.h>
#include <aws/pinpoint/model/GetCampaignVersionsRequest.h>
#include <aws/pinpoint/model/GetCampaignsRequest.h>
#include <aws/pinpoint/model/GetChannelsRequest.h>
#include <aws/pinpoint/model/GetEmailChannelRequest.h>
#include <aws/pinpoint/model/GetEmailTemplateRequest.h>
#include <aws/pinpoint/model/GetEndpointRequest.h>
#include <aws/pinpoint/model/GetEventStreamRequest.h>
#include <aws/pinpoint/model/GetExportJobRequest.h>
#include <aws/pinpoint/model/GetExportJobsRequest.h>
#include <aws/pinpoint/model/GetGcmChannelRequest.h>
#include <aws/pinpoint/model/GetImportJobRequest.h>
#include <aws/pinpoint/model/GetImportJobsRequest.h>
#include <aws/pinpoint/model/GetInAppMessagesRequest.h>
#include <aws/pinpoint/model/GetInAppTemplateRequest.h>
#include <aws/pinpoint/model/GetJourneyRequest.h>
#include <aws/pinpoint/model/GetJourneyDateRangeKpiRequest.h>
#include <aws/pinpoint/model/GetJourneyExecutionActivityMetricsRequest.h>
#include <aws/pinpoint/model/GetJourneyExecutionMetricsRequest.h>
#include <aws/pinpoint/model/GetPushTemplateRequest.h>
#include <aws/pinpoint/model/GetRecommenderConfigurationRequest.h>
#include <aws/pinpoint/model/GetRecommenderConfigurationsRequest.h>
#include <aws/pinpoint/model/GetSegmentRequest.h>
#include <aws/pinpoint/model/GetSegmentExportJobsRequest.h>
#include <aws/pinpoint/model/GetSegmentImportJobsRequest.h>
#include <aws/pinpoint/model/GetSegmentVersionRequest.h>
#include <aws/pinpoint/model/GetSegmentVersionsRequest.h>
#include <aws/pinpoint/model/GetSegmentsRequest.h>
#include <aws/pinpoint/model/GetSmsChannelRequest.h>
#include <aws/pinpoint/model/GetSmsTemplateRequest.h>
#include <aws/pinpoint/model/GetUserEndpointsRequest.h>
#include <aws/pinpoint/model/GetVoiceChannelRequest.h>
#include <aws/pinpoint/model/GetVoiceTemplateRequest.h>
#include <aws/pinpoint/model/ListJourneysRequest.h>
#include <aws/pinpoint/model/ListTagsForResourceRequest.h>
#include <aws/pinpoint/model/ListTemplateVersionsRequest.h>
#include <aws/pinpoint/model/ListTemplatesRequest.h>
#include <aws/pinpoint/model/PhoneNumberValidateRequest.h>
#include <aws/pinpoint/model/PutEventStreamRequest.h>
#include <aws/pinpoint/model/PutEventsRequest.h>
#include <aws/pinpoint/model/RemoveAttributesRequest.h>
#include <aws/pinpoint/model/SendMessagesRequest.h>
#include <aws/pinpoint/model/SendOTPMessageRequest.h>
#include <aws/pinpoint/model/SendUsersMessagesRequest.h>
#include <aws/pinpoint/model/TagResourceRequest.h>
#include <aws/pinpoint/model/UntagResourceRequest.h>
#include <aws/pinpoint/model/UpdateAdmChannelRequest.h>
#include <aws/pinpoint/model/UpdateApnsChannelRequest.h>
#include <aws/pinpoint/model/UpdateApnsSandboxChannelRequest.h>
#include <aws/pinpoint/model/UpdateApnsVoipChannelRequest.h>
#include <aws/pinpoint/model/UpdateApnsVoipSandboxChannelRequest.h>
#include <aws/pinpoint/model/UpdateApplicationSettingsRequest.h>
#include <aws/pinpoint/model/UpdateBaiduChannelRequest.h>
#include <aws/pinpoint/model/UpdateCampaignRequest.h>
#include <aws/pinpoint/model/UpdateEmailChannelRequest.h>
#include <aws/pinpoint/model/UpdateEmailTemplateRequest.h>
#include <aws/pinpoint/model/UpdateEndpointRequest.h>
#include <aws/pinpoint/model/UpdateEndpointsBatchRequest.h>
#include <aws/pinpoint/model/UpdateGcmChannelRequest.h>
#include <aws/pinpoint/model/UpdateInAppTemplateRequest.h>
#include <aws/pinpoint/model/UpdateJourneyRequest.h>
#include <aws/pinpoint/model/UpdateJourneyStateRequest.h>
#include <aws/pinpoint/model/UpdatePushTemplateRequest.h>
#include <aws/pinpoint/model/UpdateRecommenderConfigurationRequest.h>
#include <aws/pinpoint/model/UpdateSegmentRequest.h>
#include <aws/pinpoint/model/UpdateSmsChannelRequest.h>
#include <aws/pinpoint/model/UpdateSmsTemplateRequest.h>
#include <aws/pinpoint/model/UpdateTemplateActiveVersionRequest.h>
#include <aws/pinpoint/model/UpdateVoiceChannelRequest.h>
#include <aws/pinpoint/model/UpdateVoiceTemplateRequest.h>
#include <aws/pinpoint/model/VerifyOTPMessageRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Pinpoint;
using namespace Aws::Pinpoint::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "mobiletargeting";
static const char* ALLOCATION_TAG = "PinpointClient";

PinpointClient::PinpointClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PinpointErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

PinpointClient::PinpointClient(const AWSCredentials& credentials,
                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PinpointErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

PinpointClient::PinpointClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PinpointErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

PinpointClient::~PinpointClient()
{
}

void PinpointClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Pinpoint");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + PinpointEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void PinpointClient::OverrideEndpoint(const Aws::String& endpoint)
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

CreateAppOutcome PinpointClient::CreateApp(const CreateAppRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps");
  return CreateAppOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAppOutcomeCallable PinpointClient::CreateAppCallable(const CreateAppRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAppOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateApp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientCreateAppAsyncHelper(PinpointClient const * const clientThis, const CreateAppRequest& request, const CreateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateApp(request), context);
}

void PinpointClient::CreateAppAsync(const CreateAppRequest& request, const CreateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientCreateAppAsyncHelper( this, request, handler, context ); } );
}

CreateCampaignOutcome PinpointClient::CreateCampaign(const CreateCampaignRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateCampaign", "Required field: ApplicationId, is not set");
    return CreateCampaignOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/campaigns");
  return CreateCampaignOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateCampaignOutcomeCallable PinpointClient::CreateCampaignCallable(const CreateCampaignRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCampaignOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCampaign(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientCreateCampaignAsyncHelper(PinpointClient const * const clientThis, const CreateCampaignRequest& request, const CreateCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateCampaign(request), context);
}

void PinpointClient::CreateCampaignAsync(const CreateCampaignRequest& request, const CreateCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientCreateCampaignAsyncHelper( this, request, handler, context ); } );
}

CreateEmailTemplateOutcome PinpointClient::CreateEmailTemplate(const CreateEmailTemplateRequest& request) const
{
  if (!request.TemplateNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateEmailTemplate", "Required field: TemplateName, is not set");
    return CreateEmailTemplateOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/templates/");
  uri.AddPathSegment(request.GetTemplateName());
  uri.AddPathSegments("/email");
  return CreateEmailTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateEmailTemplateOutcomeCallable PinpointClient::CreateEmailTemplateCallable(const CreateEmailTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateEmailTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateEmailTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientCreateEmailTemplateAsyncHelper(PinpointClient const * const clientThis, const CreateEmailTemplateRequest& request, const CreateEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateEmailTemplate(request), context);
}

void PinpointClient::CreateEmailTemplateAsync(const CreateEmailTemplateRequest& request, const CreateEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientCreateEmailTemplateAsyncHelper( this, request, handler, context ); } );
}

CreateExportJobOutcome PinpointClient::CreateExportJob(const CreateExportJobRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateExportJob", "Required field: ApplicationId, is not set");
    return CreateExportJobOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/jobs/export");
  return CreateExportJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateExportJobOutcomeCallable PinpointClient::CreateExportJobCallable(const CreateExportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateExportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateExportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientCreateExportJobAsyncHelper(PinpointClient const * const clientThis, const CreateExportJobRequest& request, const CreateExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateExportJob(request), context);
}

void PinpointClient::CreateExportJobAsync(const CreateExportJobRequest& request, const CreateExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientCreateExportJobAsyncHelper( this, request, handler, context ); } );
}

CreateImportJobOutcome PinpointClient::CreateImportJob(const CreateImportJobRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateImportJob", "Required field: ApplicationId, is not set");
    return CreateImportJobOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/jobs/import");
  return CreateImportJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateImportJobOutcomeCallable PinpointClient::CreateImportJobCallable(const CreateImportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateImportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateImportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientCreateImportJobAsyncHelper(PinpointClient const * const clientThis, const CreateImportJobRequest& request, const CreateImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateImportJob(request), context);
}

void PinpointClient::CreateImportJobAsync(const CreateImportJobRequest& request, const CreateImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientCreateImportJobAsyncHelper( this, request, handler, context ); } );
}

CreateInAppTemplateOutcome PinpointClient::CreateInAppTemplate(const CreateInAppTemplateRequest& request) const
{
  if (!request.TemplateNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateInAppTemplate", "Required field: TemplateName, is not set");
    return CreateInAppTemplateOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/templates/");
  uri.AddPathSegment(request.GetTemplateName());
  uri.AddPathSegments("/inapp");
  return CreateInAppTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateInAppTemplateOutcomeCallable PinpointClient::CreateInAppTemplateCallable(const CreateInAppTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateInAppTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateInAppTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientCreateInAppTemplateAsyncHelper(PinpointClient const * const clientThis, const CreateInAppTemplateRequest& request, const CreateInAppTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateInAppTemplate(request), context);
}

void PinpointClient::CreateInAppTemplateAsync(const CreateInAppTemplateRequest& request, const CreateInAppTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientCreateInAppTemplateAsyncHelper( this, request, handler, context ); } );
}

CreateJourneyOutcome PinpointClient::CreateJourney(const CreateJourneyRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateJourney", "Required field: ApplicationId, is not set");
    return CreateJourneyOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/journeys");
  return CreateJourneyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateJourneyOutcomeCallable PinpointClient::CreateJourneyCallable(const CreateJourneyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateJourneyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateJourney(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientCreateJourneyAsyncHelper(PinpointClient const * const clientThis, const CreateJourneyRequest& request, const CreateJourneyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateJourney(request), context);
}

void PinpointClient::CreateJourneyAsync(const CreateJourneyRequest& request, const CreateJourneyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientCreateJourneyAsyncHelper( this, request, handler, context ); } );
}

CreatePushTemplateOutcome PinpointClient::CreatePushTemplate(const CreatePushTemplateRequest& request) const
{
  if (!request.TemplateNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreatePushTemplate", "Required field: TemplateName, is not set");
    return CreatePushTemplateOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/templates/");
  uri.AddPathSegment(request.GetTemplateName());
  uri.AddPathSegments("/push");
  return CreatePushTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePushTemplateOutcomeCallable PinpointClient::CreatePushTemplateCallable(const CreatePushTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePushTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePushTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientCreatePushTemplateAsyncHelper(PinpointClient const * const clientThis, const CreatePushTemplateRequest& request, const CreatePushTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreatePushTemplate(request), context);
}

void PinpointClient::CreatePushTemplateAsync(const CreatePushTemplateRequest& request, const CreatePushTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientCreatePushTemplateAsyncHelper( this, request, handler, context ); } );
}

CreateRecommenderConfigurationOutcome PinpointClient::CreateRecommenderConfiguration(const CreateRecommenderConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/recommenders");
  return CreateRecommenderConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateRecommenderConfigurationOutcomeCallable PinpointClient::CreateRecommenderConfigurationCallable(const CreateRecommenderConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRecommenderConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRecommenderConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientCreateRecommenderConfigurationAsyncHelper(PinpointClient const * const clientThis, const CreateRecommenderConfigurationRequest& request, const CreateRecommenderConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateRecommenderConfiguration(request), context);
}

void PinpointClient::CreateRecommenderConfigurationAsync(const CreateRecommenderConfigurationRequest& request, const CreateRecommenderConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientCreateRecommenderConfigurationAsyncHelper( this, request, handler, context ); } );
}

CreateSegmentOutcome PinpointClient::CreateSegment(const CreateSegmentRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateSegment", "Required field: ApplicationId, is not set");
    return CreateSegmentOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/segments");
  return CreateSegmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSegmentOutcomeCallable PinpointClient::CreateSegmentCallable(const CreateSegmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSegmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSegment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientCreateSegmentAsyncHelper(PinpointClient const * const clientThis, const CreateSegmentRequest& request, const CreateSegmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateSegment(request), context);
}

void PinpointClient::CreateSegmentAsync(const CreateSegmentRequest& request, const CreateSegmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientCreateSegmentAsyncHelper( this, request, handler, context ); } );
}

CreateSmsTemplateOutcome PinpointClient::CreateSmsTemplate(const CreateSmsTemplateRequest& request) const
{
  if (!request.TemplateNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateSmsTemplate", "Required field: TemplateName, is not set");
    return CreateSmsTemplateOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/templates/");
  uri.AddPathSegment(request.GetTemplateName());
  uri.AddPathSegments("/sms");
  return CreateSmsTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSmsTemplateOutcomeCallable PinpointClient::CreateSmsTemplateCallable(const CreateSmsTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSmsTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSmsTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientCreateSmsTemplateAsyncHelper(PinpointClient const * const clientThis, const CreateSmsTemplateRequest& request, const CreateSmsTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateSmsTemplate(request), context);
}

void PinpointClient::CreateSmsTemplateAsync(const CreateSmsTemplateRequest& request, const CreateSmsTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientCreateSmsTemplateAsyncHelper( this, request, handler, context ); } );
}

CreateVoiceTemplateOutcome PinpointClient::CreateVoiceTemplate(const CreateVoiceTemplateRequest& request) const
{
  if (!request.TemplateNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateVoiceTemplate", "Required field: TemplateName, is not set");
    return CreateVoiceTemplateOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/templates/");
  uri.AddPathSegment(request.GetTemplateName());
  uri.AddPathSegments("/voice");
  return CreateVoiceTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateVoiceTemplateOutcomeCallable PinpointClient::CreateVoiceTemplateCallable(const CreateVoiceTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateVoiceTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateVoiceTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientCreateVoiceTemplateAsyncHelper(PinpointClient const * const clientThis, const CreateVoiceTemplateRequest& request, const CreateVoiceTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateVoiceTemplate(request), context);
}

void PinpointClient::CreateVoiceTemplateAsync(const CreateVoiceTemplateRequest& request, const CreateVoiceTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientCreateVoiceTemplateAsyncHelper( this, request, handler, context ); } );
}

DeleteAdmChannelOutcome PinpointClient::DeleteAdmChannel(const DeleteAdmChannelRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAdmChannel", "Required field: ApplicationId, is not set");
    return DeleteAdmChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/channels/adm");
  return DeleteAdmChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteAdmChannelOutcomeCallable PinpointClient::DeleteAdmChannelCallable(const DeleteAdmChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAdmChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAdmChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientDeleteAdmChannelAsyncHelper(PinpointClient const * const clientThis, const DeleteAdmChannelRequest& request, const DeleteAdmChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteAdmChannel(request), context);
}

void PinpointClient::DeleteAdmChannelAsync(const DeleteAdmChannelRequest& request, const DeleteAdmChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientDeleteAdmChannelAsyncHelper( this, request, handler, context ); } );
}

DeleteApnsChannelOutcome PinpointClient::DeleteApnsChannel(const DeleteApnsChannelRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteApnsChannel", "Required field: ApplicationId, is not set");
    return DeleteApnsChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/channels/apns");
  return DeleteApnsChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteApnsChannelOutcomeCallable PinpointClient::DeleteApnsChannelCallable(const DeleteApnsChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteApnsChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApnsChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientDeleteApnsChannelAsyncHelper(PinpointClient const * const clientThis, const DeleteApnsChannelRequest& request, const DeleteApnsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteApnsChannel(request), context);
}

void PinpointClient::DeleteApnsChannelAsync(const DeleteApnsChannelRequest& request, const DeleteApnsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientDeleteApnsChannelAsyncHelper( this, request, handler, context ); } );
}

DeleteApnsSandboxChannelOutcome PinpointClient::DeleteApnsSandboxChannel(const DeleteApnsSandboxChannelRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteApnsSandboxChannel", "Required field: ApplicationId, is not set");
    return DeleteApnsSandboxChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/channels/apns_sandbox");
  return DeleteApnsSandboxChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteApnsSandboxChannelOutcomeCallable PinpointClient::DeleteApnsSandboxChannelCallable(const DeleteApnsSandboxChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteApnsSandboxChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApnsSandboxChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientDeleteApnsSandboxChannelAsyncHelper(PinpointClient const * const clientThis, const DeleteApnsSandboxChannelRequest& request, const DeleteApnsSandboxChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteApnsSandboxChannel(request), context);
}

void PinpointClient::DeleteApnsSandboxChannelAsync(const DeleteApnsSandboxChannelRequest& request, const DeleteApnsSandboxChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientDeleteApnsSandboxChannelAsyncHelper( this, request, handler, context ); } );
}

DeleteApnsVoipChannelOutcome PinpointClient::DeleteApnsVoipChannel(const DeleteApnsVoipChannelRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteApnsVoipChannel", "Required field: ApplicationId, is not set");
    return DeleteApnsVoipChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/channels/apns_voip");
  return DeleteApnsVoipChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteApnsVoipChannelOutcomeCallable PinpointClient::DeleteApnsVoipChannelCallable(const DeleteApnsVoipChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteApnsVoipChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApnsVoipChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientDeleteApnsVoipChannelAsyncHelper(PinpointClient const * const clientThis, const DeleteApnsVoipChannelRequest& request, const DeleteApnsVoipChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteApnsVoipChannel(request), context);
}

void PinpointClient::DeleteApnsVoipChannelAsync(const DeleteApnsVoipChannelRequest& request, const DeleteApnsVoipChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientDeleteApnsVoipChannelAsyncHelper( this, request, handler, context ); } );
}

DeleteApnsVoipSandboxChannelOutcome PinpointClient::DeleteApnsVoipSandboxChannel(const DeleteApnsVoipSandboxChannelRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteApnsVoipSandboxChannel", "Required field: ApplicationId, is not set");
    return DeleteApnsVoipSandboxChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/channels/apns_voip_sandbox");
  return DeleteApnsVoipSandboxChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteApnsVoipSandboxChannelOutcomeCallable PinpointClient::DeleteApnsVoipSandboxChannelCallable(const DeleteApnsVoipSandboxChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteApnsVoipSandboxChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApnsVoipSandboxChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientDeleteApnsVoipSandboxChannelAsyncHelper(PinpointClient const * const clientThis, const DeleteApnsVoipSandboxChannelRequest& request, const DeleteApnsVoipSandboxChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteApnsVoipSandboxChannel(request), context);
}

void PinpointClient::DeleteApnsVoipSandboxChannelAsync(const DeleteApnsVoipSandboxChannelRequest& request, const DeleteApnsVoipSandboxChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientDeleteApnsVoipSandboxChannelAsyncHelper( this, request, handler, context ); } );
}

DeleteAppOutcome PinpointClient::DeleteApp(const DeleteAppRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteApp", "Required field: ApplicationId, is not set");
    return DeleteAppOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  return DeleteAppOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteAppOutcomeCallable PinpointClient::DeleteAppCallable(const DeleteAppRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAppOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientDeleteAppAsyncHelper(PinpointClient const * const clientThis, const DeleteAppRequest& request, const DeleteAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteApp(request), context);
}

void PinpointClient::DeleteAppAsync(const DeleteAppRequest& request, const DeleteAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientDeleteAppAsyncHelper( this, request, handler, context ); } );
}

DeleteBaiduChannelOutcome PinpointClient::DeleteBaiduChannel(const DeleteBaiduChannelRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBaiduChannel", "Required field: ApplicationId, is not set");
    return DeleteBaiduChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/channels/baidu");
  return DeleteBaiduChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteBaiduChannelOutcomeCallable PinpointClient::DeleteBaiduChannelCallable(const DeleteBaiduChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBaiduChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBaiduChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientDeleteBaiduChannelAsyncHelper(PinpointClient const * const clientThis, const DeleteBaiduChannelRequest& request, const DeleteBaiduChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteBaiduChannel(request), context);
}

void PinpointClient::DeleteBaiduChannelAsync(const DeleteBaiduChannelRequest& request, const DeleteBaiduChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientDeleteBaiduChannelAsyncHelper( this, request, handler, context ); } );
}

DeleteCampaignOutcome PinpointClient::DeleteCampaign(const DeleteCampaignRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteCampaign", "Required field: ApplicationId, is not set");
    return DeleteCampaignOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.CampaignIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteCampaign", "Required field: CampaignId, is not set");
    return DeleteCampaignOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CampaignId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/campaigns/");
  uri.AddPathSegment(request.GetCampaignId());
  return DeleteCampaignOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteCampaignOutcomeCallable PinpointClient::DeleteCampaignCallable(const DeleteCampaignRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCampaignOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCampaign(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientDeleteCampaignAsyncHelper(PinpointClient const * const clientThis, const DeleteCampaignRequest& request, const DeleteCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteCampaign(request), context);
}

void PinpointClient::DeleteCampaignAsync(const DeleteCampaignRequest& request, const DeleteCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientDeleteCampaignAsyncHelper( this, request, handler, context ); } );
}

DeleteEmailChannelOutcome PinpointClient::DeleteEmailChannel(const DeleteEmailChannelRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteEmailChannel", "Required field: ApplicationId, is not set");
    return DeleteEmailChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/channels/email");
  return DeleteEmailChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteEmailChannelOutcomeCallable PinpointClient::DeleteEmailChannelCallable(const DeleteEmailChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEmailChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEmailChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientDeleteEmailChannelAsyncHelper(PinpointClient const * const clientThis, const DeleteEmailChannelRequest& request, const DeleteEmailChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteEmailChannel(request), context);
}

void PinpointClient::DeleteEmailChannelAsync(const DeleteEmailChannelRequest& request, const DeleteEmailChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientDeleteEmailChannelAsyncHelper( this, request, handler, context ); } );
}

DeleteEmailTemplateOutcome PinpointClient::DeleteEmailTemplate(const DeleteEmailTemplateRequest& request) const
{
  if (!request.TemplateNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteEmailTemplate", "Required field: TemplateName, is not set");
    return DeleteEmailTemplateOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/templates/");
  uri.AddPathSegment(request.GetTemplateName());
  uri.AddPathSegments("/email");
  return DeleteEmailTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteEmailTemplateOutcomeCallable PinpointClient::DeleteEmailTemplateCallable(const DeleteEmailTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEmailTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEmailTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientDeleteEmailTemplateAsyncHelper(PinpointClient const * const clientThis, const DeleteEmailTemplateRequest& request, const DeleteEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteEmailTemplate(request), context);
}

void PinpointClient::DeleteEmailTemplateAsync(const DeleteEmailTemplateRequest& request, const DeleteEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientDeleteEmailTemplateAsyncHelper( this, request, handler, context ); } );
}

DeleteEndpointOutcome PinpointClient::DeleteEndpoint(const DeleteEndpointRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteEndpoint", "Required field: ApplicationId, is not set");
    return DeleteEndpointOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.EndpointIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteEndpoint", "Required field: EndpointId, is not set");
    return DeleteEndpointOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndpointId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/endpoints/");
  uri.AddPathSegment(request.GetEndpointId());
  return DeleteEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteEndpointOutcomeCallable PinpointClient::DeleteEndpointCallable(const DeleteEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientDeleteEndpointAsyncHelper(PinpointClient const * const clientThis, const DeleteEndpointRequest& request, const DeleteEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteEndpoint(request), context);
}

void PinpointClient::DeleteEndpointAsync(const DeleteEndpointRequest& request, const DeleteEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientDeleteEndpointAsyncHelper( this, request, handler, context ); } );
}

DeleteEventStreamOutcome PinpointClient::DeleteEventStream(const DeleteEventStreamRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteEventStream", "Required field: ApplicationId, is not set");
    return DeleteEventStreamOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/eventstream");
  return DeleteEventStreamOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteEventStreamOutcomeCallable PinpointClient::DeleteEventStreamCallable(const DeleteEventStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEventStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEventStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientDeleteEventStreamAsyncHelper(PinpointClient const * const clientThis, const DeleteEventStreamRequest& request, const DeleteEventStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteEventStream(request), context);
}

void PinpointClient::DeleteEventStreamAsync(const DeleteEventStreamRequest& request, const DeleteEventStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientDeleteEventStreamAsyncHelper( this, request, handler, context ); } );
}

DeleteGcmChannelOutcome PinpointClient::DeleteGcmChannel(const DeleteGcmChannelRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteGcmChannel", "Required field: ApplicationId, is not set");
    return DeleteGcmChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/channels/gcm");
  return DeleteGcmChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteGcmChannelOutcomeCallable PinpointClient::DeleteGcmChannelCallable(const DeleteGcmChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteGcmChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteGcmChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientDeleteGcmChannelAsyncHelper(PinpointClient const * const clientThis, const DeleteGcmChannelRequest& request, const DeleteGcmChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteGcmChannel(request), context);
}

void PinpointClient::DeleteGcmChannelAsync(const DeleteGcmChannelRequest& request, const DeleteGcmChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientDeleteGcmChannelAsyncHelper( this, request, handler, context ); } );
}

DeleteInAppTemplateOutcome PinpointClient::DeleteInAppTemplate(const DeleteInAppTemplateRequest& request) const
{
  if (!request.TemplateNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteInAppTemplate", "Required field: TemplateName, is not set");
    return DeleteInAppTemplateOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/templates/");
  uri.AddPathSegment(request.GetTemplateName());
  uri.AddPathSegments("/inapp");
  return DeleteInAppTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteInAppTemplateOutcomeCallable PinpointClient::DeleteInAppTemplateCallable(const DeleteInAppTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteInAppTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteInAppTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientDeleteInAppTemplateAsyncHelper(PinpointClient const * const clientThis, const DeleteInAppTemplateRequest& request, const DeleteInAppTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteInAppTemplate(request), context);
}

void PinpointClient::DeleteInAppTemplateAsync(const DeleteInAppTemplateRequest& request, const DeleteInAppTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientDeleteInAppTemplateAsyncHelper( this, request, handler, context ); } );
}

DeleteJourneyOutcome PinpointClient::DeleteJourney(const DeleteJourneyRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteJourney", "Required field: ApplicationId, is not set");
    return DeleteJourneyOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.JourneyIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteJourney", "Required field: JourneyId, is not set");
    return DeleteJourneyOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JourneyId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/journeys/");
  uri.AddPathSegment(request.GetJourneyId());
  return DeleteJourneyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteJourneyOutcomeCallable PinpointClient::DeleteJourneyCallable(const DeleteJourneyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteJourneyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteJourney(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientDeleteJourneyAsyncHelper(PinpointClient const * const clientThis, const DeleteJourneyRequest& request, const DeleteJourneyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteJourney(request), context);
}

void PinpointClient::DeleteJourneyAsync(const DeleteJourneyRequest& request, const DeleteJourneyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientDeleteJourneyAsyncHelper( this, request, handler, context ); } );
}

DeletePushTemplateOutcome PinpointClient::DeletePushTemplate(const DeletePushTemplateRequest& request) const
{
  if (!request.TemplateNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeletePushTemplate", "Required field: TemplateName, is not set");
    return DeletePushTemplateOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/templates/");
  uri.AddPathSegment(request.GetTemplateName());
  uri.AddPathSegments("/push");
  return DeletePushTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeletePushTemplateOutcomeCallable PinpointClient::DeletePushTemplateCallable(const DeletePushTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePushTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePushTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientDeletePushTemplateAsyncHelper(PinpointClient const * const clientThis, const DeletePushTemplateRequest& request, const DeletePushTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeletePushTemplate(request), context);
}

void PinpointClient::DeletePushTemplateAsync(const DeletePushTemplateRequest& request, const DeletePushTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientDeletePushTemplateAsyncHelper( this, request, handler, context ); } );
}

DeleteRecommenderConfigurationOutcome PinpointClient::DeleteRecommenderConfiguration(const DeleteRecommenderConfigurationRequest& request) const
{
  if (!request.RecommenderIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRecommenderConfiguration", "Required field: RecommenderId, is not set");
    return DeleteRecommenderConfigurationOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RecommenderId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/recommenders/");
  uri.AddPathSegment(request.GetRecommenderId());
  return DeleteRecommenderConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteRecommenderConfigurationOutcomeCallable PinpointClient::DeleteRecommenderConfigurationCallable(const DeleteRecommenderConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRecommenderConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRecommenderConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientDeleteRecommenderConfigurationAsyncHelper(PinpointClient const * const clientThis, const DeleteRecommenderConfigurationRequest& request, const DeleteRecommenderConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteRecommenderConfiguration(request), context);
}

void PinpointClient::DeleteRecommenderConfigurationAsync(const DeleteRecommenderConfigurationRequest& request, const DeleteRecommenderConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientDeleteRecommenderConfigurationAsyncHelper( this, request, handler, context ); } );
}

DeleteSegmentOutcome PinpointClient::DeleteSegment(const DeleteSegmentRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSegment", "Required field: ApplicationId, is not set");
    return DeleteSegmentOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.SegmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSegment", "Required field: SegmentId, is not set");
    return DeleteSegmentOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SegmentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/segments/");
  uri.AddPathSegment(request.GetSegmentId());
  return DeleteSegmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteSegmentOutcomeCallable PinpointClient::DeleteSegmentCallable(const DeleteSegmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSegmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSegment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientDeleteSegmentAsyncHelper(PinpointClient const * const clientThis, const DeleteSegmentRequest& request, const DeleteSegmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteSegment(request), context);
}

void PinpointClient::DeleteSegmentAsync(const DeleteSegmentRequest& request, const DeleteSegmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientDeleteSegmentAsyncHelper( this, request, handler, context ); } );
}

DeleteSmsChannelOutcome PinpointClient::DeleteSmsChannel(const DeleteSmsChannelRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSmsChannel", "Required field: ApplicationId, is not set");
    return DeleteSmsChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/channels/sms");
  return DeleteSmsChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteSmsChannelOutcomeCallable PinpointClient::DeleteSmsChannelCallable(const DeleteSmsChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSmsChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSmsChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientDeleteSmsChannelAsyncHelper(PinpointClient const * const clientThis, const DeleteSmsChannelRequest& request, const DeleteSmsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteSmsChannel(request), context);
}

void PinpointClient::DeleteSmsChannelAsync(const DeleteSmsChannelRequest& request, const DeleteSmsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientDeleteSmsChannelAsyncHelper( this, request, handler, context ); } );
}

DeleteSmsTemplateOutcome PinpointClient::DeleteSmsTemplate(const DeleteSmsTemplateRequest& request) const
{
  if (!request.TemplateNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSmsTemplate", "Required field: TemplateName, is not set");
    return DeleteSmsTemplateOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/templates/");
  uri.AddPathSegment(request.GetTemplateName());
  uri.AddPathSegments("/sms");
  return DeleteSmsTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteSmsTemplateOutcomeCallable PinpointClient::DeleteSmsTemplateCallable(const DeleteSmsTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSmsTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSmsTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientDeleteSmsTemplateAsyncHelper(PinpointClient const * const clientThis, const DeleteSmsTemplateRequest& request, const DeleteSmsTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteSmsTemplate(request), context);
}

void PinpointClient::DeleteSmsTemplateAsync(const DeleteSmsTemplateRequest& request, const DeleteSmsTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientDeleteSmsTemplateAsyncHelper( this, request, handler, context ); } );
}

DeleteUserEndpointsOutcome PinpointClient::DeleteUserEndpoints(const DeleteUserEndpointsRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteUserEndpoints", "Required field: ApplicationId, is not set");
    return DeleteUserEndpointsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.UserIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteUserEndpoints", "Required field: UserId, is not set");
    return DeleteUserEndpointsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/users/");
  uri.AddPathSegment(request.GetUserId());
  return DeleteUserEndpointsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteUserEndpointsOutcomeCallable PinpointClient::DeleteUserEndpointsCallable(const DeleteUserEndpointsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteUserEndpointsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteUserEndpoints(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientDeleteUserEndpointsAsyncHelper(PinpointClient const * const clientThis, const DeleteUserEndpointsRequest& request, const DeleteUserEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteUserEndpoints(request), context);
}

void PinpointClient::DeleteUserEndpointsAsync(const DeleteUserEndpointsRequest& request, const DeleteUserEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientDeleteUserEndpointsAsyncHelper( this, request, handler, context ); } );
}

DeleteVoiceChannelOutcome PinpointClient::DeleteVoiceChannel(const DeleteVoiceChannelRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVoiceChannel", "Required field: ApplicationId, is not set");
    return DeleteVoiceChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/channels/voice");
  return DeleteVoiceChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteVoiceChannelOutcomeCallable PinpointClient::DeleteVoiceChannelCallable(const DeleteVoiceChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVoiceChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVoiceChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientDeleteVoiceChannelAsyncHelper(PinpointClient const * const clientThis, const DeleteVoiceChannelRequest& request, const DeleteVoiceChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteVoiceChannel(request), context);
}

void PinpointClient::DeleteVoiceChannelAsync(const DeleteVoiceChannelRequest& request, const DeleteVoiceChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientDeleteVoiceChannelAsyncHelper( this, request, handler, context ); } );
}

DeleteVoiceTemplateOutcome PinpointClient::DeleteVoiceTemplate(const DeleteVoiceTemplateRequest& request) const
{
  if (!request.TemplateNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVoiceTemplate", "Required field: TemplateName, is not set");
    return DeleteVoiceTemplateOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/templates/");
  uri.AddPathSegment(request.GetTemplateName());
  uri.AddPathSegments("/voice");
  return DeleteVoiceTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteVoiceTemplateOutcomeCallable PinpointClient::DeleteVoiceTemplateCallable(const DeleteVoiceTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVoiceTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVoiceTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientDeleteVoiceTemplateAsyncHelper(PinpointClient const * const clientThis, const DeleteVoiceTemplateRequest& request, const DeleteVoiceTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteVoiceTemplate(request), context);
}

void PinpointClient::DeleteVoiceTemplateAsync(const DeleteVoiceTemplateRequest& request, const DeleteVoiceTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientDeleteVoiceTemplateAsyncHelper( this, request, handler, context ); } );
}

GetAdmChannelOutcome PinpointClient::GetAdmChannel(const GetAdmChannelRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAdmChannel", "Required field: ApplicationId, is not set");
    return GetAdmChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/channels/adm");
  return GetAdmChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetAdmChannelOutcomeCallable PinpointClient::GetAdmChannelCallable(const GetAdmChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAdmChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAdmChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientGetAdmChannelAsyncHelper(PinpointClient const * const clientThis, const GetAdmChannelRequest& request, const GetAdmChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetAdmChannel(request), context);
}

void PinpointClient::GetAdmChannelAsync(const GetAdmChannelRequest& request, const GetAdmChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientGetAdmChannelAsyncHelper( this, request, handler, context ); } );
}

GetApnsChannelOutcome PinpointClient::GetApnsChannel(const GetApnsChannelRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetApnsChannel", "Required field: ApplicationId, is not set");
    return GetApnsChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/channels/apns");
  return GetApnsChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetApnsChannelOutcomeCallable PinpointClient::GetApnsChannelCallable(const GetApnsChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetApnsChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetApnsChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientGetApnsChannelAsyncHelper(PinpointClient const * const clientThis, const GetApnsChannelRequest& request, const GetApnsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetApnsChannel(request), context);
}

void PinpointClient::GetApnsChannelAsync(const GetApnsChannelRequest& request, const GetApnsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientGetApnsChannelAsyncHelper( this, request, handler, context ); } );
}

GetApnsSandboxChannelOutcome PinpointClient::GetApnsSandboxChannel(const GetApnsSandboxChannelRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetApnsSandboxChannel", "Required field: ApplicationId, is not set");
    return GetApnsSandboxChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/channels/apns_sandbox");
  return GetApnsSandboxChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetApnsSandboxChannelOutcomeCallable PinpointClient::GetApnsSandboxChannelCallable(const GetApnsSandboxChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetApnsSandboxChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetApnsSandboxChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientGetApnsSandboxChannelAsyncHelper(PinpointClient const * const clientThis, const GetApnsSandboxChannelRequest& request, const GetApnsSandboxChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetApnsSandboxChannel(request), context);
}

void PinpointClient::GetApnsSandboxChannelAsync(const GetApnsSandboxChannelRequest& request, const GetApnsSandboxChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientGetApnsSandboxChannelAsyncHelper( this, request, handler, context ); } );
}

GetApnsVoipChannelOutcome PinpointClient::GetApnsVoipChannel(const GetApnsVoipChannelRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetApnsVoipChannel", "Required field: ApplicationId, is not set");
    return GetApnsVoipChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/channels/apns_voip");
  return GetApnsVoipChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetApnsVoipChannelOutcomeCallable PinpointClient::GetApnsVoipChannelCallable(const GetApnsVoipChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetApnsVoipChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetApnsVoipChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientGetApnsVoipChannelAsyncHelper(PinpointClient const * const clientThis, const GetApnsVoipChannelRequest& request, const GetApnsVoipChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetApnsVoipChannel(request), context);
}

void PinpointClient::GetApnsVoipChannelAsync(const GetApnsVoipChannelRequest& request, const GetApnsVoipChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientGetApnsVoipChannelAsyncHelper( this, request, handler, context ); } );
}

GetApnsVoipSandboxChannelOutcome PinpointClient::GetApnsVoipSandboxChannel(const GetApnsVoipSandboxChannelRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetApnsVoipSandboxChannel", "Required field: ApplicationId, is not set");
    return GetApnsVoipSandboxChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/channels/apns_voip_sandbox");
  return GetApnsVoipSandboxChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetApnsVoipSandboxChannelOutcomeCallable PinpointClient::GetApnsVoipSandboxChannelCallable(const GetApnsVoipSandboxChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetApnsVoipSandboxChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetApnsVoipSandboxChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientGetApnsVoipSandboxChannelAsyncHelper(PinpointClient const * const clientThis, const GetApnsVoipSandboxChannelRequest& request, const GetApnsVoipSandboxChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetApnsVoipSandboxChannel(request), context);
}

void PinpointClient::GetApnsVoipSandboxChannelAsync(const GetApnsVoipSandboxChannelRequest& request, const GetApnsVoipSandboxChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientGetApnsVoipSandboxChannelAsyncHelper( this, request, handler, context ); } );
}

GetAppOutcome PinpointClient::GetApp(const GetAppRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetApp", "Required field: ApplicationId, is not set");
    return GetAppOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  return GetAppOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetAppOutcomeCallable PinpointClient::GetAppCallable(const GetAppRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAppOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetApp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientGetAppAsyncHelper(PinpointClient const * const clientThis, const GetAppRequest& request, const GetAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetApp(request), context);
}

void PinpointClient::GetAppAsync(const GetAppRequest& request, const GetAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientGetAppAsyncHelper( this, request, handler, context ); } );
}

GetApplicationDateRangeKpiOutcome PinpointClient::GetApplicationDateRangeKpi(const GetApplicationDateRangeKpiRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetApplicationDateRangeKpi", "Required field: ApplicationId, is not set");
    return GetApplicationDateRangeKpiOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.KpiNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetApplicationDateRangeKpi", "Required field: KpiName, is not set");
    return GetApplicationDateRangeKpiOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KpiName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/kpis/daterange/");
  uri.AddPathSegment(request.GetKpiName());
  return GetApplicationDateRangeKpiOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetApplicationDateRangeKpiOutcomeCallable PinpointClient::GetApplicationDateRangeKpiCallable(const GetApplicationDateRangeKpiRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetApplicationDateRangeKpiOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetApplicationDateRangeKpi(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientGetApplicationDateRangeKpiAsyncHelper(PinpointClient const * const clientThis, const GetApplicationDateRangeKpiRequest& request, const GetApplicationDateRangeKpiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetApplicationDateRangeKpi(request), context);
}

void PinpointClient::GetApplicationDateRangeKpiAsync(const GetApplicationDateRangeKpiRequest& request, const GetApplicationDateRangeKpiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientGetApplicationDateRangeKpiAsyncHelper( this, request, handler, context ); } );
}

GetApplicationSettingsOutcome PinpointClient::GetApplicationSettings(const GetApplicationSettingsRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetApplicationSettings", "Required field: ApplicationId, is not set");
    return GetApplicationSettingsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/settings");
  return GetApplicationSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetApplicationSettingsOutcomeCallable PinpointClient::GetApplicationSettingsCallable(const GetApplicationSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetApplicationSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetApplicationSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientGetApplicationSettingsAsyncHelper(PinpointClient const * const clientThis, const GetApplicationSettingsRequest& request, const GetApplicationSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetApplicationSettings(request), context);
}

void PinpointClient::GetApplicationSettingsAsync(const GetApplicationSettingsRequest& request, const GetApplicationSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientGetApplicationSettingsAsyncHelper( this, request, handler, context ); } );
}

GetAppsOutcome PinpointClient::GetApps(const GetAppsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps");
  return GetAppsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetAppsOutcomeCallable PinpointClient::GetAppsCallable(const GetAppsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAppsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetApps(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientGetAppsAsyncHelper(PinpointClient const * const clientThis, const GetAppsRequest& request, const GetAppsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetApps(request), context);
}

void PinpointClient::GetAppsAsync(const GetAppsRequest& request, const GetAppsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientGetAppsAsyncHelper( this, request, handler, context ); } );
}

GetBaiduChannelOutcome PinpointClient::GetBaiduChannel(const GetBaiduChannelRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBaiduChannel", "Required field: ApplicationId, is not set");
    return GetBaiduChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/channels/baidu");
  return GetBaiduChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetBaiduChannelOutcomeCallable PinpointClient::GetBaiduChannelCallable(const GetBaiduChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBaiduChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBaiduChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientGetBaiduChannelAsyncHelper(PinpointClient const * const clientThis, const GetBaiduChannelRequest& request, const GetBaiduChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetBaiduChannel(request), context);
}

void PinpointClient::GetBaiduChannelAsync(const GetBaiduChannelRequest& request, const GetBaiduChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientGetBaiduChannelAsyncHelper( this, request, handler, context ); } );
}

GetCampaignOutcome PinpointClient::GetCampaign(const GetCampaignRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCampaign", "Required field: ApplicationId, is not set");
    return GetCampaignOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.CampaignIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCampaign", "Required field: CampaignId, is not set");
    return GetCampaignOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CampaignId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/campaigns/");
  uri.AddPathSegment(request.GetCampaignId());
  return GetCampaignOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetCampaignOutcomeCallable PinpointClient::GetCampaignCallable(const GetCampaignRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCampaignOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCampaign(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientGetCampaignAsyncHelper(PinpointClient const * const clientThis, const GetCampaignRequest& request, const GetCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetCampaign(request), context);
}

void PinpointClient::GetCampaignAsync(const GetCampaignRequest& request, const GetCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientGetCampaignAsyncHelper( this, request, handler, context ); } );
}

GetCampaignActivitiesOutcome PinpointClient::GetCampaignActivities(const GetCampaignActivitiesRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCampaignActivities", "Required field: ApplicationId, is not set");
    return GetCampaignActivitiesOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.CampaignIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCampaignActivities", "Required field: CampaignId, is not set");
    return GetCampaignActivitiesOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CampaignId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/campaigns/");
  uri.AddPathSegment(request.GetCampaignId());
  uri.AddPathSegments("/activities");
  return GetCampaignActivitiesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetCampaignActivitiesOutcomeCallable PinpointClient::GetCampaignActivitiesCallable(const GetCampaignActivitiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCampaignActivitiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCampaignActivities(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientGetCampaignActivitiesAsyncHelper(PinpointClient const * const clientThis, const GetCampaignActivitiesRequest& request, const GetCampaignActivitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetCampaignActivities(request), context);
}

void PinpointClient::GetCampaignActivitiesAsync(const GetCampaignActivitiesRequest& request, const GetCampaignActivitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientGetCampaignActivitiesAsyncHelper( this, request, handler, context ); } );
}

GetCampaignDateRangeKpiOutcome PinpointClient::GetCampaignDateRangeKpi(const GetCampaignDateRangeKpiRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCampaignDateRangeKpi", "Required field: ApplicationId, is not set");
    return GetCampaignDateRangeKpiOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.CampaignIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCampaignDateRangeKpi", "Required field: CampaignId, is not set");
    return GetCampaignDateRangeKpiOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CampaignId]", false));
  }
  if (!request.KpiNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCampaignDateRangeKpi", "Required field: KpiName, is not set");
    return GetCampaignDateRangeKpiOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KpiName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/campaigns/");
  uri.AddPathSegment(request.GetCampaignId());
  uri.AddPathSegments("/kpis/daterange/");
  uri.AddPathSegment(request.GetKpiName());
  return GetCampaignDateRangeKpiOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetCampaignDateRangeKpiOutcomeCallable PinpointClient::GetCampaignDateRangeKpiCallable(const GetCampaignDateRangeKpiRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCampaignDateRangeKpiOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCampaignDateRangeKpi(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientGetCampaignDateRangeKpiAsyncHelper(PinpointClient const * const clientThis, const GetCampaignDateRangeKpiRequest& request, const GetCampaignDateRangeKpiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetCampaignDateRangeKpi(request), context);
}

void PinpointClient::GetCampaignDateRangeKpiAsync(const GetCampaignDateRangeKpiRequest& request, const GetCampaignDateRangeKpiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientGetCampaignDateRangeKpiAsyncHelper( this, request, handler, context ); } );
}

GetCampaignVersionOutcome PinpointClient::GetCampaignVersion(const GetCampaignVersionRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCampaignVersion", "Required field: ApplicationId, is not set");
    return GetCampaignVersionOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.CampaignIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCampaignVersion", "Required field: CampaignId, is not set");
    return GetCampaignVersionOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CampaignId]", false));
  }
  if (!request.VersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCampaignVersion", "Required field: Version, is not set");
    return GetCampaignVersionOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Version]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/campaigns/");
  uri.AddPathSegment(request.GetCampaignId());
  uri.AddPathSegments("/versions/");
  uri.AddPathSegment(request.GetVersion());
  return GetCampaignVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetCampaignVersionOutcomeCallable PinpointClient::GetCampaignVersionCallable(const GetCampaignVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCampaignVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCampaignVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientGetCampaignVersionAsyncHelper(PinpointClient const * const clientThis, const GetCampaignVersionRequest& request, const GetCampaignVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetCampaignVersion(request), context);
}

void PinpointClient::GetCampaignVersionAsync(const GetCampaignVersionRequest& request, const GetCampaignVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientGetCampaignVersionAsyncHelper( this, request, handler, context ); } );
}

GetCampaignVersionsOutcome PinpointClient::GetCampaignVersions(const GetCampaignVersionsRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCampaignVersions", "Required field: ApplicationId, is not set");
    return GetCampaignVersionsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.CampaignIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCampaignVersions", "Required field: CampaignId, is not set");
    return GetCampaignVersionsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CampaignId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/campaigns/");
  uri.AddPathSegment(request.GetCampaignId());
  uri.AddPathSegments("/versions");
  return GetCampaignVersionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetCampaignVersionsOutcomeCallable PinpointClient::GetCampaignVersionsCallable(const GetCampaignVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCampaignVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCampaignVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientGetCampaignVersionsAsyncHelper(PinpointClient const * const clientThis, const GetCampaignVersionsRequest& request, const GetCampaignVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetCampaignVersions(request), context);
}

void PinpointClient::GetCampaignVersionsAsync(const GetCampaignVersionsRequest& request, const GetCampaignVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientGetCampaignVersionsAsyncHelper( this, request, handler, context ); } );
}

GetCampaignsOutcome PinpointClient::GetCampaigns(const GetCampaignsRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCampaigns", "Required field: ApplicationId, is not set");
    return GetCampaignsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/campaigns");
  return GetCampaignsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetCampaignsOutcomeCallable PinpointClient::GetCampaignsCallable(const GetCampaignsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCampaignsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCampaigns(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientGetCampaignsAsyncHelper(PinpointClient const * const clientThis, const GetCampaignsRequest& request, const GetCampaignsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetCampaigns(request), context);
}

void PinpointClient::GetCampaignsAsync(const GetCampaignsRequest& request, const GetCampaignsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientGetCampaignsAsyncHelper( this, request, handler, context ); } );
}

GetChannelsOutcome PinpointClient::GetChannels(const GetChannelsRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetChannels", "Required field: ApplicationId, is not set");
    return GetChannelsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/channels");
  return GetChannelsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetChannelsOutcomeCallable PinpointClient::GetChannelsCallable(const GetChannelsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetChannelsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetChannels(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientGetChannelsAsyncHelper(PinpointClient const * const clientThis, const GetChannelsRequest& request, const GetChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetChannels(request), context);
}

void PinpointClient::GetChannelsAsync(const GetChannelsRequest& request, const GetChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientGetChannelsAsyncHelper( this, request, handler, context ); } );
}

GetEmailChannelOutcome PinpointClient::GetEmailChannel(const GetEmailChannelRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetEmailChannel", "Required field: ApplicationId, is not set");
    return GetEmailChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/channels/email");
  return GetEmailChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetEmailChannelOutcomeCallable PinpointClient::GetEmailChannelCallable(const GetEmailChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEmailChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEmailChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientGetEmailChannelAsyncHelper(PinpointClient const * const clientThis, const GetEmailChannelRequest& request, const GetEmailChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetEmailChannel(request), context);
}

void PinpointClient::GetEmailChannelAsync(const GetEmailChannelRequest& request, const GetEmailChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientGetEmailChannelAsyncHelper( this, request, handler, context ); } );
}

GetEmailTemplateOutcome PinpointClient::GetEmailTemplate(const GetEmailTemplateRequest& request) const
{
  if (!request.TemplateNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetEmailTemplate", "Required field: TemplateName, is not set");
    return GetEmailTemplateOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/templates/");
  uri.AddPathSegment(request.GetTemplateName());
  uri.AddPathSegments("/email");
  return GetEmailTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetEmailTemplateOutcomeCallable PinpointClient::GetEmailTemplateCallable(const GetEmailTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEmailTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEmailTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientGetEmailTemplateAsyncHelper(PinpointClient const * const clientThis, const GetEmailTemplateRequest& request, const GetEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetEmailTemplate(request), context);
}

void PinpointClient::GetEmailTemplateAsync(const GetEmailTemplateRequest& request, const GetEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientGetEmailTemplateAsyncHelper( this, request, handler, context ); } );
}

GetEndpointOutcome PinpointClient::GetEndpoint(const GetEndpointRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetEndpoint", "Required field: ApplicationId, is not set");
    return GetEndpointOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.EndpointIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetEndpoint", "Required field: EndpointId, is not set");
    return GetEndpointOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndpointId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/endpoints/");
  uri.AddPathSegment(request.GetEndpointId());
  return GetEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetEndpointOutcomeCallable PinpointClient::GetEndpointCallable(const GetEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientGetEndpointAsyncHelper(PinpointClient const * const clientThis, const GetEndpointRequest& request, const GetEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetEndpoint(request), context);
}

void PinpointClient::GetEndpointAsync(const GetEndpointRequest& request, const GetEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientGetEndpointAsyncHelper( this, request, handler, context ); } );
}

GetEventStreamOutcome PinpointClient::GetEventStream(const GetEventStreamRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetEventStream", "Required field: ApplicationId, is not set");
    return GetEventStreamOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/eventstream");
  return GetEventStreamOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetEventStreamOutcomeCallable PinpointClient::GetEventStreamCallable(const GetEventStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEventStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEventStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientGetEventStreamAsyncHelper(PinpointClient const * const clientThis, const GetEventStreamRequest& request, const GetEventStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetEventStream(request), context);
}

void PinpointClient::GetEventStreamAsync(const GetEventStreamRequest& request, const GetEventStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientGetEventStreamAsyncHelper( this, request, handler, context ); } );
}

GetExportJobOutcome PinpointClient::GetExportJob(const GetExportJobRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetExportJob", "Required field: ApplicationId, is not set");
    return GetExportJobOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetExportJob", "Required field: JobId, is not set");
    return GetExportJobOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/jobs/export/");
  uri.AddPathSegment(request.GetJobId());
  return GetExportJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetExportJobOutcomeCallable PinpointClient::GetExportJobCallable(const GetExportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetExportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetExportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientGetExportJobAsyncHelper(PinpointClient const * const clientThis, const GetExportJobRequest& request, const GetExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetExportJob(request), context);
}

void PinpointClient::GetExportJobAsync(const GetExportJobRequest& request, const GetExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientGetExportJobAsyncHelper( this, request, handler, context ); } );
}

GetExportJobsOutcome PinpointClient::GetExportJobs(const GetExportJobsRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetExportJobs", "Required field: ApplicationId, is not set");
    return GetExportJobsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/jobs/export");
  return GetExportJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetExportJobsOutcomeCallable PinpointClient::GetExportJobsCallable(const GetExportJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetExportJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetExportJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientGetExportJobsAsyncHelper(PinpointClient const * const clientThis, const GetExportJobsRequest& request, const GetExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetExportJobs(request), context);
}

void PinpointClient::GetExportJobsAsync(const GetExportJobsRequest& request, const GetExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientGetExportJobsAsyncHelper( this, request, handler, context ); } );
}

GetGcmChannelOutcome PinpointClient::GetGcmChannel(const GetGcmChannelRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetGcmChannel", "Required field: ApplicationId, is not set");
    return GetGcmChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/channels/gcm");
  return GetGcmChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetGcmChannelOutcomeCallable PinpointClient::GetGcmChannelCallable(const GetGcmChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetGcmChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetGcmChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientGetGcmChannelAsyncHelper(PinpointClient const * const clientThis, const GetGcmChannelRequest& request, const GetGcmChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetGcmChannel(request), context);
}

void PinpointClient::GetGcmChannelAsync(const GetGcmChannelRequest& request, const GetGcmChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientGetGcmChannelAsyncHelper( this, request, handler, context ); } );
}

GetImportJobOutcome PinpointClient::GetImportJob(const GetImportJobRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetImportJob", "Required field: ApplicationId, is not set");
    return GetImportJobOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetImportJob", "Required field: JobId, is not set");
    return GetImportJobOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/jobs/import/");
  uri.AddPathSegment(request.GetJobId());
  return GetImportJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetImportJobOutcomeCallable PinpointClient::GetImportJobCallable(const GetImportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetImportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetImportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientGetImportJobAsyncHelper(PinpointClient const * const clientThis, const GetImportJobRequest& request, const GetImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetImportJob(request), context);
}

void PinpointClient::GetImportJobAsync(const GetImportJobRequest& request, const GetImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientGetImportJobAsyncHelper( this, request, handler, context ); } );
}

GetImportJobsOutcome PinpointClient::GetImportJobs(const GetImportJobsRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetImportJobs", "Required field: ApplicationId, is not set");
    return GetImportJobsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/jobs/import");
  return GetImportJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetImportJobsOutcomeCallable PinpointClient::GetImportJobsCallable(const GetImportJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetImportJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetImportJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientGetImportJobsAsyncHelper(PinpointClient const * const clientThis, const GetImportJobsRequest& request, const GetImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetImportJobs(request), context);
}

void PinpointClient::GetImportJobsAsync(const GetImportJobsRequest& request, const GetImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientGetImportJobsAsyncHelper( this, request, handler, context ); } );
}

GetInAppMessagesOutcome PinpointClient::GetInAppMessages(const GetInAppMessagesRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetInAppMessages", "Required field: ApplicationId, is not set");
    return GetInAppMessagesOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.EndpointIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetInAppMessages", "Required field: EndpointId, is not set");
    return GetInAppMessagesOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndpointId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/endpoints/");
  uri.AddPathSegment(request.GetEndpointId());
  uri.AddPathSegments("/inappmessages");
  return GetInAppMessagesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetInAppMessagesOutcomeCallable PinpointClient::GetInAppMessagesCallable(const GetInAppMessagesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetInAppMessagesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetInAppMessages(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientGetInAppMessagesAsyncHelper(PinpointClient const * const clientThis, const GetInAppMessagesRequest& request, const GetInAppMessagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetInAppMessages(request), context);
}

void PinpointClient::GetInAppMessagesAsync(const GetInAppMessagesRequest& request, const GetInAppMessagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientGetInAppMessagesAsyncHelper( this, request, handler, context ); } );
}

GetInAppTemplateOutcome PinpointClient::GetInAppTemplate(const GetInAppTemplateRequest& request) const
{
  if (!request.TemplateNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetInAppTemplate", "Required field: TemplateName, is not set");
    return GetInAppTemplateOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/templates/");
  uri.AddPathSegment(request.GetTemplateName());
  uri.AddPathSegments("/inapp");
  return GetInAppTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetInAppTemplateOutcomeCallable PinpointClient::GetInAppTemplateCallable(const GetInAppTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetInAppTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetInAppTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientGetInAppTemplateAsyncHelper(PinpointClient const * const clientThis, const GetInAppTemplateRequest& request, const GetInAppTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetInAppTemplate(request), context);
}

void PinpointClient::GetInAppTemplateAsync(const GetInAppTemplateRequest& request, const GetInAppTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientGetInAppTemplateAsyncHelper( this, request, handler, context ); } );
}

GetJourneyOutcome PinpointClient::GetJourney(const GetJourneyRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetJourney", "Required field: ApplicationId, is not set");
    return GetJourneyOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.JourneyIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetJourney", "Required field: JourneyId, is not set");
    return GetJourneyOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JourneyId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/journeys/");
  uri.AddPathSegment(request.GetJourneyId());
  return GetJourneyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetJourneyOutcomeCallable PinpointClient::GetJourneyCallable(const GetJourneyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetJourneyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetJourney(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientGetJourneyAsyncHelper(PinpointClient const * const clientThis, const GetJourneyRequest& request, const GetJourneyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetJourney(request), context);
}

void PinpointClient::GetJourneyAsync(const GetJourneyRequest& request, const GetJourneyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientGetJourneyAsyncHelper( this, request, handler, context ); } );
}

GetJourneyDateRangeKpiOutcome PinpointClient::GetJourneyDateRangeKpi(const GetJourneyDateRangeKpiRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetJourneyDateRangeKpi", "Required field: ApplicationId, is not set");
    return GetJourneyDateRangeKpiOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.JourneyIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetJourneyDateRangeKpi", "Required field: JourneyId, is not set");
    return GetJourneyDateRangeKpiOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JourneyId]", false));
  }
  if (!request.KpiNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetJourneyDateRangeKpi", "Required field: KpiName, is not set");
    return GetJourneyDateRangeKpiOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KpiName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/journeys/");
  uri.AddPathSegment(request.GetJourneyId());
  uri.AddPathSegments("/kpis/daterange/");
  uri.AddPathSegment(request.GetKpiName());
  return GetJourneyDateRangeKpiOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetJourneyDateRangeKpiOutcomeCallable PinpointClient::GetJourneyDateRangeKpiCallable(const GetJourneyDateRangeKpiRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetJourneyDateRangeKpiOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetJourneyDateRangeKpi(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientGetJourneyDateRangeKpiAsyncHelper(PinpointClient const * const clientThis, const GetJourneyDateRangeKpiRequest& request, const GetJourneyDateRangeKpiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetJourneyDateRangeKpi(request), context);
}

void PinpointClient::GetJourneyDateRangeKpiAsync(const GetJourneyDateRangeKpiRequest& request, const GetJourneyDateRangeKpiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientGetJourneyDateRangeKpiAsyncHelper( this, request, handler, context ); } );
}

GetJourneyExecutionActivityMetricsOutcome PinpointClient::GetJourneyExecutionActivityMetrics(const GetJourneyExecutionActivityMetricsRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetJourneyExecutionActivityMetrics", "Required field: ApplicationId, is not set");
    return GetJourneyExecutionActivityMetricsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.JourneyActivityIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetJourneyExecutionActivityMetrics", "Required field: JourneyActivityId, is not set");
    return GetJourneyExecutionActivityMetricsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JourneyActivityId]", false));
  }
  if (!request.JourneyIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetJourneyExecutionActivityMetrics", "Required field: JourneyId, is not set");
    return GetJourneyExecutionActivityMetricsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JourneyId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/journeys/");
  uri.AddPathSegment(request.GetJourneyId());
  uri.AddPathSegments("/activities/");
  uri.AddPathSegment(request.GetJourneyActivityId());
  uri.AddPathSegments("/execution-metrics");
  return GetJourneyExecutionActivityMetricsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetJourneyExecutionActivityMetricsOutcomeCallable PinpointClient::GetJourneyExecutionActivityMetricsCallable(const GetJourneyExecutionActivityMetricsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetJourneyExecutionActivityMetricsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetJourneyExecutionActivityMetrics(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientGetJourneyExecutionActivityMetricsAsyncHelper(PinpointClient const * const clientThis, const GetJourneyExecutionActivityMetricsRequest& request, const GetJourneyExecutionActivityMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetJourneyExecutionActivityMetrics(request), context);
}

void PinpointClient::GetJourneyExecutionActivityMetricsAsync(const GetJourneyExecutionActivityMetricsRequest& request, const GetJourneyExecutionActivityMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientGetJourneyExecutionActivityMetricsAsyncHelper( this, request, handler, context ); } );
}

GetJourneyExecutionMetricsOutcome PinpointClient::GetJourneyExecutionMetrics(const GetJourneyExecutionMetricsRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetJourneyExecutionMetrics", "Required field: ApplicationId, is not set");
    return GetJourneyExecutionMetricsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.JourneyIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetJourneyExecutionMetrics", "Required field: JourneyId, is not set");
    return GetJourneyExecutionMetricsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JourneyId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/journeys/");
  uri.AddPathSegment(request.GetJourneyId());
  uri.AddPathSegments("/execution-metrics");
  return GetJourneyExecutionMetricsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetJourneyExecutionMetricsOutcomeCallable PinpointClient::GetJourneyExecutionMetricsCallable(const GetJourneyExecutionMetricsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetJourneyExecutionMetricsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetJourneyExecutionMetrics(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientGetJourneyExecutionMetricsAsyncHelper(PinpointClient const * const clientThis, const GetJourneyExecutionMetricsRequest& request, const GetJourneyExecutionMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetJourneyExecutionMetrics(request), context);
}

void PinpointClient::GetJourneyExecutionMetricsAsync(const GetJourneyExecutionMetricsRequest& request, const GetJourneyExecutionMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientGetJourneyExecutionMetricsAsyncHelper( this, request, handler, context ); } );
}

GetPushTemplateOutcome PinpointClient::GetPushTemplate(const GetPushTemplateRequest& request) const
{
  if (!request.TemplateNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPushTemplate", "Required field: TemplateName, is not set");
    return GetPushTemplateOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/templates/");
  uri.AddPathSegment(request.GetTemplateName());
  uri.AddPathSegments("/push");
  return GetPushTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetPushTemplateOutcomeCallable PinpointClient::GetPushTemplateCallable(const GetPushTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPushTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPushTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientGetPushTemplateAsyncHelper(PinpointClient const * const clientThis, const GetPushTemplateRequest& request, const GetPushTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetPushTemplate(request), context);
}

void PinpointClient::GetPushTemplateAsync(const GetPushTemplateRequest& request, const GetPushTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientGetPushTemplateAsyncHelper( this, request, handler, context ); } );
}

GetRecommenderConfigurationOutcome PinpointClient::GetRecommenderConfiguration(const GetRecommenderConfigurationRequest& request) const
{
  if (!request.RecommenderIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRecommenderConfiguration", "Required field: RecommenderId, is not set");
    return GetRecommenderConfigurationOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RecommenderId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/recommenders/");
  uri.AddPathSegment(request.GetRecommenderId());
  return GetRecommenderConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetRecommenderConfigurationOutcomeCallable PinpointClient::GetRecommenderConfigurationCallable(const GetRecommenderConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRecommenderConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRecommenderConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientGetRecommenderConfigurationAsyncHelper(PinpointClient const * const clientThis, const GetRecommenderConfigurationRequest& request, const GetRecommenderConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetRecommenderConfiguration(request), context);
}

void PinpointClient::GetRecommenderConfigurationAsync(const GetRecommenderConfigurationRequest& request, const GetRecommenderConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientGetRecommenderConfigurationAsyncHelper( this, request, handler, context ); } );
}

GetRecommenderConfigurationsOutcome PinpointClient::GetRecommenderConfigurations(const GetRecommenderConfigurationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/recommenders");
  return GetRecommenderConfigurationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetRecommenderConfigurationsOutcomeCallable PinpointClient::GetRecommenderConfigurationsCallable(const GetRecommenderConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRecommenderConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRecommenderConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientGetRecommenderConfigurationsAsyncHelper(PinpointClient const * const clientThis, const GetRecommenderConfigurationsRequest& request, const GetRecommenderConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetRecommenderConfigurations(request), context);
}

void PinpointClient::GetRecommenderConfigurationsAsync(const GetRecommenderConfigurationsRequest& request, const GetRecommenderConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientGetRecommenderConfigurationsAsyncHelper( this, request, handler, context ); } );
}

GetSegmentOutcome PinpointClient::GetSegment(const GetSegmentRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSegment", "Required field: ApplicationId, is not set");
    return GetSegmentOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.SegmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSegment", "Required field: SegmentId, is not set");
    return GetSegmentOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SegmentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/segments/");
  uri.AddPathSegment(request.GetSegmentId());
  return GetSegmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSegmentOutcomeCallable PinpointClient::GetSegmentCallable(const GetSegmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSegmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSegment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientGetSegmentAsyncHelper(PinpointClient const * const clientThis, const GetSegmentRequest& request, const GetSegmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetSegment(request), context);
}

void PinpointClient::GetSegmentAsync(const GetSegmentRequest& request, const GetSegmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientGetSegmentAsyncHelper( this, request, handler, context ); } );
}

GetSegmentExportJobsOutcome PinpointClient::GetSegmentExportJobs(const GetSegmentExportJobsRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSegmentExportJobs", "Required field: ApplicationId, is not set");
    return GetSegmentExportJobsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.SegmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSegmentExportJobs", "Required field: SegmentId, is not set");
    return GetSegmentExportJobsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SegmentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/segments/");
  uri.AddPathSegment(request.GetSegmentId());
  uri.AddPathSegments("/jobs/export");
  return GetSegmentExportJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSegmentExportJobsOutcomeCallable PinpointClient::GetSegmentExportJobsCallable(const GetSegmentExportJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSegmentExportJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSegmentExportJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientGetSegmentExportJobsAsyncHelper(PinpointClient const * const clientThis, const GetSegmentExportJobsRequest& request, const GetSegmentExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetSegmentExportJobs(request), context);
}

void PinpointClient::GetSegmentExportJobsAsync(const GetSegmentExportJobsRequest& request, const GetSegmentExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientGetSegmentExportJobsAsyncHelper( this, request, handler, context ); } );
}

GetSegmentImportJobsOutcome PinpointClient::GetSegmentImportJobs(const GetSegmentImportJobsRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSegmentImportJobs", "Required field: ApplicationId, is not set");
    return GetSegmentImportJobsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.SegmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSegmentImportJobs", "Required field: SegmentId, is not set");
    return GetSegmentImportJobsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SegmentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/segments/");
  uri.AddPathSegment(request.GetSegmentId());
  uri.AddPathSegments("/jobs/import");
  return GetSegmentImportJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSegmentImportJobsOutcomeCallable PinpointClient::GetSegmentImportJobsCallable(const GetSegmentImportJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSegmentImportJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSegmentImportJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientGetSegmentImportJobsAsyncHelper(PinpointClient const * const clientThis, const GetSegmentImportJobsRequest& request, const GetSegmentImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetSegmentImportJobs(request), context);
}

void PinpointClient::GetSegmentImportJobsAsync(const GetSegmentImportJobsRequest& request, const GetSegmentImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientGetSegmentImportJobsAsyncHelper( this, request, handler, context ); } );
}

GetSegmentVersionOutcome PinpointClient::GetSegmentVersion(const GetSegmentVersionRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSegmentVersion", "Required field: ApplicationId, is not set");
    return GetSegmentVersionOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.SegmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSegmentVersion", "Required field: SegmentId, is not set");
    return GetSegmentVersionOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SegmentId]", false));
  }
  if (!request.VersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSegmentVersion", "Required field: Version, is not set");
    return GetSegmentVersionOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Version]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/segments/");
  uri.AddPathSegment(request.GetSegmentId());
  uri.AddPathSegments("/versions/");
  uri.AddPathSegment(request.GetVersion());
  return GetSegmentVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSegmentVersionOutcomeCallable PinpointClient::GetSegmentVersionCallable(const GetSegmentVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSegmentVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSegmentVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientGetSegmentVersionAsyncHelper(PinpointClient const * const clientThis, const GetSegmentVersionRequest& request, const GetSegmentVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetSegmentVersion(request), context);
}

void PinpointClient::GetSegmentVersionAsync(const GetSegmentVersionRequest& request, const GetSegmentVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientGetSegmentVersionAsyncHelper( this, request, handler, context ); } );
}

GetSegmentVersionsOutcome PinpointClient::GetSegmentVersions(const GetSegmentVersionsRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSegmentVersions", "Required field: ApplicationId, is not set");
    return GetSegmentVersionsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.SegmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSegmentVersions", "Required field: SegmentId, is not set");
    return GetSegmentVersionsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SegmentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/segments/");
  uri.AddPathSegment(request.GetSegmentId());
  uri.AddPathSegments("/versions");
  return GetSegmentVersionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSegmentVersionsOutcomeCallable PinpointClient::GetSegmentVersionsCallable(const GetSegmentVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSegmentVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSegmentVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientGetSegmentVersionsAsyncHelper(PinpointClient const * const clientThis, const GetSegmentVersionsRequest& request, const GetSegmentVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetSegmentVersions(request), context);
}

void PinpointClient::GetSegmentVersionsAsync(const GetSegmentVersionsRequest& request, const GetSegmentVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientGetSegmentVersionsAsyncHelper( this, request, handler, context ); } );
}

GetSegmentsOutcome PinpointClient::GetSegments(const GetSegmentsRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSegments", "Required field: ApplicationId, is not set");
    return GetSegmentsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/segments");
  return GetSegmentsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSegmentsOutcomeCallable PinpointClient::GetSegmentsCallable(const GetSegmentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSegmentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSegments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientGetSegmentsAsyncHelper(PinpointClient const * const clientThis, const GetSegmentsRequest& request, const GetSegmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetSegments(request), context);
}

void PinpointClient::GetSegmentsAsync(const GetSegmentsRequest& request, const GetSegmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientGetSegmentsAsyncHelper( this, request, handler, context ); } );
}

GetSmsChannelOutcome PinpointClient::GetSmsChannel(const GetSmsChannelRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSmsChannel", "Required field: ApplicationId, is not set");
    return GetSmsChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/channels/sms");
  return GetSmsChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSmsChannelOutcomeCallable PinpointClient::GetSmsChannelCallable(const GetSmsChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSmsChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSmsChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientGetSmsChannelAsyncHelper(PinpointClient const * const clientThis, const GetSmsChannelRequest& request, const GetSmsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetSmsChannel(request), context);
}

void PinpointClient::GetSmsChannelAsync(const GetSmsChannelRequest& request, const GetSmsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientGetSmsChannelAsyncHelper( this, request, handler, context ); } );
}

GetSmsTemplateOutcome PinpointClient::GetSmsTemplate(const GetSmsTemplateRequest& request) const
{
  if (!request.TemplateNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSmsTemplate", "Required field: TemplateName, is not set");
    return GetSmsTemplateOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/templates/");
  uri.AddPathSegment(request.GetTemplateName());
  uri.AddPathSegments("/sms");
  return GetSmsTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSmsTemplateOutcomeCallable PinpointClient::GetSmsTemplateCallable(const GetSmsTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSmsTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSmsTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientGetSmsTemplateAsyncHelper(PinpointClient const * const clientThis, const GetSmsTemplateRequest& request, const GetSmsTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetSmsTemplate(request), context);
}

void PinpointClient::GetSmsTemplateAsync(const GetSmsTemplateRequest& request, const GetSmsTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientGetSmsTemplateAsyncHelper( this, request, handler, context ); } );
}

GetUserEndpointsOutcome PinpointClient::GetUserEndpoints(const GetUserEndpointsRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetUserEndpoints", "Required field: ApplicationId, is not set");
    return GetUserEndpointsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.UserIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetUserEndpoints", "Required field: UserId, is not set");
    return GetUserEndpointsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/users/");
  uri.AddPathSegment(request.GetUserId());
  return GetUserEndpointsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetUserEndpointsOutcomeCallable PinpointClient::GetUserEndpointsCallable(const GetUserEndpointsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetUserEndpointsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetUserEndpoints(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientGetUserEndpointsAsyncHelper(PinpointClient const * const clientThis, const GetUserEndpointsRequest& request, const GetUserEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetUserEndpoints(request), context);
}

void PinpointClient::GetUserEndpointsAsync(const GetUserEndpointsRequest& request, const GetUserEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientGetUserEndpointsAsyncHelper( this, request, handler, context ); } );
}

GetVoiceChannelOutcome PinpointClient::GetVoiceChannel(const GetVoiceChannelRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetVoiceChannel", "Required field: ApplicationId, is not set");
    return GetVoiceChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/channels/voice");
  return GetVoiceChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetVoiceChannelOutcomeCallable PinpointClient::GetVoiceChannelCallable(const GetVoiceChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetVoiceChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetVoiceChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientGetVoiceChannelAsyncHelper(PinpointClient const * const clientThis, const GetVoiceChannelRequest& request, const GetVoiceChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetVoiceChannel(request), context);
}

void PinpointClient::GetVoiceChannelAsync(const GetVoiceChannelRequest& request, const GetVoiceChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientGetVoiceChannelAsyncHelper( this, request, handler, context ); } );
}

GetVoiceTemplateOutcome PinpointClient::GetVoiceTemplate(const GetVoiceTemplateRequest& request) const
{
  if (!request.TemplateNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetVoiceTemplate", "Required field: TemplateName, is not set");
    return GetVoiceTemplateOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/templates/");
  uri.AddPathSegment(request.GetTemplateName());
  uri.AddPathSegments("/voice");
  return GetVoiceTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetVoiceTemplateOutcomeCallable PinpointClient::GetVoiceTemplateCallable(const GetVoiceTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetVoiceTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetVoiceTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientGetVoiceTemplateAsyncHelper(PinpointClient const * const clientThis, const GetVoiceTemplateRequest& request, const GetVoiceTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetVoiceTemplate(request), context);
}

void PinpointClient::GetVoiceTemplateAsync(const GetVoiceTemplateRequest& request, const GetVoiceTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientGetVoiceTemplateAsyncHelper( this, request, handler, context ); } );
}

ListJourneysOutcome PinpointClient::ListJourneys(const ListJourneysRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListJourneys", "Required field: ApplicationId, is not set");
    return ListJourneysOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/journeys");
  return ListJourneysOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListJourneysOutcomeCallable PinpointClient::ListJourneysCallable(const ListJourneysRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListJourneysOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListJourneys(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientListJourneysAsyncHelper(PinpointClient const * const clientThis, const ListJourneysRequest& request, const ListJourneysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListJourneys(request), context);
}

void PinpointClient::ListJourneysAsync(const ListJourneysRequest& request, const ListJourneysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientListJourneysAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome PinpointClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable PinpointClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientListTagsForResourceAsyncHelper(PinpointClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void PinpointClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

ListTemplateVersionsOutcome PinpointClient::ListTemplateVersions(const ListTemplateVersionsRequest& request) const
{
  if (!request.TemplateNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTemplateVersions", "Required field: TemplateName, is not set");
    return ListTemplateVersionsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateName]", false));
  }
  if (!request.TemplateTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTemplateVersions", "Required field: TemplateType, is not set");
    return ListTemplateVersionsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateType]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/templates/");
  uri.AddPathSegment(request.GetTemplateName());
  uri.AddPathSegment(request.GetTemplateType());
  uri.AddPathSegments("/versions");
  return ListTemplateVersionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTemplateVersionsOutcomeCallable PinpointClient::ListTemplateVersionsCallable(const ListTemplateVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTemplateVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTemplateVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientListTemplateVersionsAsyncHelper(PinpointClient const * const clientThis, const ListTemplateVersionsRequest& request, const ListTemplateVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTemplateVersions(request), context);
}

void PinpointClient::ListTemplateVersionsAsync(const ListTemplateVersionsRequest& request, const ListTemplateVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientListTemplateVersionsAsyncHelper( this, request, handler, context ); } );
}

ListTemplatesOutcome PinpointClient::ListTemplates(const ListTemplatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/templates");
  return ListTemplatesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTemplatesOutcomeCallable PinpointClient::ListTemplatesCallable(const ListTemplatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTemplatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTemplates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientListTemplatesAsyncHelper(PinpointClient const * const clientThis, const ListTemplatesRequest& request, const ListTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTemplates(request), context);
}

void PinpointClient::ListTemplatesAsync(const ListTemplatesRequest& request, const ListTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientListTemplatesAsyncHelper( this, request, handler, context ); } );
}

PhoneNumberValidateOutcome PinpointClient::PhoneNumberValidate(const PhoneNumberValidateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/phone/number/validate");
  return PhoneNumberValidateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PhoneNumberValidateOutcomeCallable PinpointClient::PhoneNumberValidateCallable(const PhoneNumberValidateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PhoneNumberValidateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PhoneNumberValidate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientPhoneNumberValidateAsyncHelper(PinpointClient const * const clientThis, const PhoneNumberValidateRequest& request, const PhoneNumberValidateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PhoneNumberValidate(request), context);
}

void PinpointClient::PhoneNumberValidateAsync(const PhoneNumberValidateRequest& request, const PhoneNumberValidateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientPhoneNumberValidateAsyncHelper( this, request, handler, context ); } );
}

PutEventStreamOutcome PinpointClient::PutEventStream(const PutEventStreamRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutEventStream", "Required field: ApplicationId, is not set");
    return PutEventStreamOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/eventstream");
  return PutEventStreamOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutEventStreamOutcomeCallable PinpointClient::PutEventStreamCallable(const PutEventStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutEventStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutEventStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientPutEventStreamAsyncHelper(PinpointClient const * const clientThis, const PutEventStreamRequest& request, const PutEventStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutEventStream(request), context);
}

void PinpointClient::PutEventStreamAsync(const PutEventStreamRequest& request, const PutEventStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientPutEventStreamAsyncHelper( this, request, handler, context ); } );
}

PutEventsOutcome PinpointClient::PutEvents(const PutEventsRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutEvents", "Required field: ApplicationId, is not set");
    return PutEventsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/events");
  return PutEventsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutEventsOutcomeCallable PinpointClient::PutEventsCallable(const PutEventsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutEventsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutEvents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientPutEventsAsyncHelper(PinpointClient const * const clientThis, const PutEventsRequest& request, const PutEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutEvents(request), context);
}

void PinpointClient::PutEventsAsync(const PutEventsRequest& request, const PutEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientPutEventsAsyncHelper( this, request, handler, context ); } );
}

RemoveAttributesOutcome PinpointClient::RemoveAttributes(const RemoveAttributesRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RemoveAttributes", "Required field: ApplicationId, is not set");
    return RemoveAttributesOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.AttributeTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RemoveAttributes", "Required field: AttributeType, is not set");
    return RemoveAttributesOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AttributeType]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/attributes/");
  uri.AddPathSegment(request.GetAttributeType());
  return RemoveAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

RemoveAttributesOutcomeCallable PinpointClient::RemoveAttributesCallable(const RemoveAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientRemoveAttributesAsyncHelper(PinpointClient const * const clientThis, const RemoveAttributesRequest& request, const RemoveAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RemoveAttributes(request), context);
}

void PinpointClient::RemoveAttributesAsync(const RemoveAttributesRequest& request, const RemoveAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientRemoveAttributesAsyncHelper( this, request, handler, context ); } );
}

SendMessagesOutcome PinpointClient::SendMessages(const SendMessagesRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SendMessages", "Required field: ApplicationId, is not set");
    return SendMessagesOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/messages");
  return SendMessagesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SendMessagesOutcomeCallable PinpointClient::SendMessagesCallable(const SendMessagesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SendMessagesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SendMessages(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientSendMessagesAsyncHelper(PinpointClient const * const clientThis, const SendMessagesRequest& request, const SendMessagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SendMessages(request), context);
}

void PinpointClient::SendMessagesAsync(const SendMessagesRequest& request, const SendMessagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientSendMessagesAsyncHelper( this, request, handler, context ); } );
}

SendOTPMessageOutcome PinpointClient::SendOTPMessage(const SendOTPMessageRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SendOTPMessage", "Required field: ApplicationId, is not set");
    return SendOTPMessageOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/otp");
  return SendOTPMessageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SendOTPMessageOutcomeCallable PinpointClient::SendOTPMessageCallable(const SendOTPMessageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SendOTPMessageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SendOTPMessage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientSendOTPMessageAsyncHelper(PinpointClient const * const clientThis, const SendOTPMessageRequest& request, const SendOTPMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SendOTPMessage(request), context);
}

void PinpointClient::SendOTPMessageAsync(const SendOTPMessageRequest& request, const SendOTPMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientSendOTPMessageAsyncHelper( this, request, handler, context ); } );
}

SendUsersMessagesOutcome PinpointClient::SendUsersMessages(const SendUsersMessagesRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SendUsersMessages", "Required field: ApplicationId, is not set");
    return SendUsersMessagesOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/users-messages");
  return SendUsersMessagesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SendUsersMessagesOutcomeCallable PinpointClient::SendUsersMessagesCallable(const SendUsersMessagesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SendUsersMessagesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SendUsersMessages(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientSendUsersMessagesAsyncHelper(PinpointClient const * const clientThis, const SendUsersMessagesRequest& request, const SendUsersMessagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SendUsersMessages(request), context);
}

void PinpointClient::SendUsersMessagesAsync(const SendUsersMessagesRequest& request, const SendUsersMessagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientSendUsersMessagesAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome PinpointClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable PinpointClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientTagResourceAsyncHelper(PinpointClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void PinpointClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome PinpointClient::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable PinpointClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientUntagResourceAsyncHelper(PinpointClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void PinpointClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateAdmChannelOutcome PinpointClient::UpdateAdmChannel(const UpdateAdmChannelRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAdmChannel", "Required field: ApplicationId, is not set");
    return UpdateAdmChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/channels/adm");
  return UpdateAdmChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateAdmChannelOutcomeCallable PinpointClient::UpdateAdmChannelCallable(const UpdateAdmChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAdmChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAdmChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientUpdateAdmChannelAsyncHelper(PinpointClient const * const clientThis, const UpdateAdmChannelRequest& request, const UpdateAdmChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateAdmChannel(request), context);
}

void PinpointClient::UpdateAdmChannelAsync(const UpdateAdmChannelRequest& request, const UpdateAdmChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientUpdateAdmChannelAsyncHelper( this, request, handler, context ); } );
}

UpdateApnsChannelOutcome PinpointClient::UpdateApnsChannel(const UpdateApnsChannelRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateApnsChannel", "Required field: ApplicationId, is not set");
    return UpdateApnsChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/channels/apns");
  return UpdateApnsChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateApnsChannelOutcomeCallable PinpointClient::UpdateApnsChannelCallable(const UpdateApnsChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateApnsChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateApnsChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientUpdateApnsChannelAsyncHelper(PinpointClient const * const clientThis, const UpdateApnsChannelRequest& request, const UpdateApnsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateApnsChannel(request), context);
}

void PinpointClient::UpdateApnsChannelAsync(const UpdateApnsChannelRequest& request, const UpdateApnsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientUpdateApnsChannelAsyncHelper( this, request, handler, context ); } );
}

UpdateApnsSandboxChannelOutcome PinpointClient::UpdateApnsSandboxChannel(const UpdateApnsSandboxChannelRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateApnsSandboxChannel", "Required field: ApplicationId, is not set");
    return UpdateApnsSandboxChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/channels/apns_sandbox");
  return UpdateApnsSandboxChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateApnsSandboxChannelOutcomeCallable PinpointClient::UpdateApnsSandboxChannelCallable(const UpdateApnsSandboxChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateApnsSandboxChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateApnsSandboxChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientUpdateApnsSandboxChannelAsyncHelper(PinpointClient const * const clientThis, const UpdateApnsSandboxChannelRequest& request, const UpdateApnsSandboxChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateApnsSandboxChannel(request), context);
}

void PinpointClient::UpdateApnsSandboxChannelAsync(const UpdateApnsSandboxChannelRequest& request, const UpdateApnsSandboxChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientUpdateApnsSandboxChannelAsyncHelper( this, request, handler, context ); } );
}

UpdateApnsVoipChannelOutcome PinpointClient::UpdateApnsVoipChannel(const UpdateApnsVoipChannelRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateApnsVoipChannel", "Required field: ApplicationId, is not set");
    return UpdateApnsVoipChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/channels/apns_voip");
  return UpdateApnsVoipChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateApnsVoipChannelOutcomeCallable PinpointClient::UpdateApnsVoipChannelCallable(const UpdateApnsVoipChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateApnsVoipChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateApnsVoipChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientUpdateApnsVoipChannelAsyncHelper(PinpointClient const * const clientThis, const UpdateApnsVoipChannelRequest& request, const UpdateApnsVoipChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateApnsVoipChannel(request), context);
}

void PinpointClient::UpdateApnsVoipChannelAsync(const UpdateApnsVoipChannelRequest& request, const UpdateApnsVoipChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientUpdateApnsVoipChannelAsyncHelper( this, request, handler, context ); } );
}

UpdateApnsVoipSandboxChannelOutcome PinpointClient::UpdateApnsVoipSandboxChannel(const UpdateApnsVoipSandboxChannelRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateApnsVoipSandboxChannel", "Required field: ApplicationId, is not set");
    return UpdateApnsVoipSandboxChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/channels/apns_voip_sandbox");
  return UpdateApnsVoipSandboxChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateApnsVoipSandboxChannelOutcomeCallable PinpointClient::UpdateApnsVoipSandboxChannelCallable(const UpdateApnsVoipSandboxChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateApnsVoipSandboxChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateApnsVoipSandboxChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientUpdateApnsVoipSandboxChannelAsyncHelper(PinpointClient const * const clientThis, const UpdateApnsVoipSandboxChannelRequest& request, const UpdateApnsVoipSandboxChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateApnsVoipSandboxChannel(request), context);
}

void PinpointClient::UpdateApnsVoipSandboxChannelAsync(const UpdateApnsVoipSandboxChannelRequest& request, const UpdateApnsVoipSandboxChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientUpdateApnsVoipSandboxChannelAsyncHelper( this, request, handler, context ); } );
}

UpdateApplicationSettingsOutcome PinpointClient::UpdateApplicationSettings(const UpdateApplicationSettingsRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateApplicationSettings", "Required field: ApplicationId, is not set");
    return UpdateApplicationSettingsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/settings");
  return UpdateApplicationSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateApplicationSettingsOutcomeCallable PinpointClient::UpdateApplicationSettingsCallable(const UpdateApplicationSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateApplicationSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateApplicationSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientUpdateApplicationSettingsAsyncHelper(PinpointClient const * const clientThis, const UpdateApplicationSettingsRequest& request, const UpdateApplicationSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateApplicationSettings(request), context);
}

void PinpointClient::UpdateApplicationSettingsAsync(const UpdateApplicationSettingsRequest& request, const UpdateApplicationSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientUpdateApplicationSettingsAsyncHelper( this, request, handler, context ); } );
}

UpdateBaiduChannelOutcome PinpointClient::UpdateBaiduChannel(const UpdateBaiduChannelRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateBaiduChannel", "Required field: ApplicationId, is not set");
    return UpdateBaiduChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/channels/baidu");
  return UpdateBaiduChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateBaiduChannelOutcomeCallable PinpointClient::UpdateBaiduChannelCallable(const UpdateBaiduChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateBaiduChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateBaiduChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientUpdateBaiduChannelAsyncHelper(PinpointClient const * const clientThis, const UpdateBaiduChannelRequest& request, const UpdateBaiduChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateBaiduChannel(request), context);
}

void PinpointClient::UpdateBaiduChannelAsync(const UpdateBaiduChannelRequest& request, const UpdateBaiduChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientUpdateBaiduChannelAsyncHelper( this, request, handler, context ); } );
}

UpdateCampaignOutcome PinpointClient::UpdateCampaign(const UpdateCampaignRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateCampaign", "Required field: ApplicationId, is not set");
    return UpdateCampaignOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.CampaignIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateCampaign", "Required field: CampaignId, is not set");
    return UpdateCampaignOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CampaignId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/campaigns/");
  uri.AddPathSegment(request.GetCampaignId());
  return UpdateCampaignOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateCampaignOutcomeCallable PinpointClient::UpdateCampaignCallable(const UpdateCampaignRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateCampaignOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateCampaign(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientUpdateCampaignAsyncHelper(PinpointClient const * const clientThis, const UpdateCampaignRequest& request, const UpdateCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateCampaign(request), context);
}

void PinpointClient::UpdateCampaignAsync(const UpdateCampaignRequest& request, const UpdateCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientUpdateCampaignAsyncHelper( this, request, handler, context ); } );
}

UpdateEmailChannelOutcome PinpointClient::UpdateEmailChannel(const UpdateEmailChannelRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateEmailChannel", "Required field: ApplicationId, is not set");
    return UpdateEmailChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/channels/email");
  return UpdateEmailChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateEmailChannelOutcomeCallable PinpointClient::UpdateEmailChannelCallable(const UpdateEmailChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateEmailChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateEmailChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientUpdateEmailChannelAsyncHelper(PinpointClient const * const clientThis, const UpdateEmailChannelRequest& request, const UpdateEmailChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateEmailChannel(request), context);
}

void PinpointClient::UpdateEmailChannelAsync(const UpdateEmailChannelRequest& request, const UpdateEmailChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientUpdateEmailChannelAsyncHelper( this, request, handler, context ); } );
}

UpdateEmailTemplateOutcome PinpointClient::UpdateEmailTemplate(const UpdateEmailTemplateRequest& request) const
{
  if (!request.TemplateNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateEmailTemplate", "Required field: TemplateName, is not set");
    return UpdateEmailTemplateOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/templates/");
  uri.AddPathSegment(request.GetTemplateName());
  uri.AddPathSegments("/email");
  return UpdateEmailTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateEmailTemplateOutcomeCallable PinpointClient::UpdateEmailTemplateCallable(const UpdateEmailTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateEmailTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateEmailTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientUpdateEmailTemplateAsyncHelper(PinpointClient const * const clientThis, const UpdateEmailTemplateRequest& request, const UpdateEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateEmailTemplate(request), context);
}

void PinpointClient::UpdateEmailTemplateAsync(const UpdateEmailTemplateRequest& request, const UpdateEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientUpdateEmailTemplateAsyncHelper( this, request, handler, context ); } );
}

UpdateEndpointOutcome PinpointClient::UpdateEndpoint(const UpdateEndpointRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateEndpoint", "Required field: ApplicationId, is not set");
    return UpdateEndpointOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.EndpointIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateEndpoint", "Required field: EndpointId, is not set");
    return UpdateEndpointOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndpointId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/endpoints/");
  uri.AddPathSegment(request.GetEndpointId());
  return UpdateEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateEndpointOutcomeCallable PinpointClient::UpdateEndpointCallable(const UpdateEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientUpdateEndpointAsyncHelper(PinpointClient const * const clientThis, const UpdateEndpointRequest& request, const UpdateEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateEndpoint(request), context);
}

void PinpointClient::UpdateEndpointAsync(const UpdateEndpointRequest& request, const UpdateEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientUpdateEndpointAsyncHelper( this, request, handler, context ); } );
}

UpdateEndpointsBatchOutcome PinpointClient::UpdateEndpointsBatch(const UpdateEndpointsBatchRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateEndpointsBatch", "Required field: ApplicationId, is not set");
    return UpdateEndpointsBatchOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/endpoints");
  return UpdateEndpointsBatchOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateEndpointsBatchOutcomeCallable PinpointClient::UpdateEndpointsBatchCallable(const UpdateEndpointsBatchRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateEndpointsBatchOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateEndpointsBatch(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientUpdateEndpointsBatchAsyncHelper(PinpointClient const * const clientThis, const UpdateEndpointsBatchRequest& request, const UpdateEndpointsBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateEndpointsBatch(request), context);
}

void PinpointClient::UpdateEndpointsBatchAsync(const UpdateEndpointsBatchRequest& request, const UpdateEndpointsBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientUpdateEndpointsBatchAsyncHelper( this, request, handler, context ); } );
}

UpdateGcmChannelOutcome PinpointClient::UpdateGcmChannel(const UpdateGcmChannelRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateGcmChannel", "Required field: ApplicationId, is not set");
    return UpdateGcmChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/channels/gcm");
  return UpdateGcmChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateGcmChannelOutcomeCallable PinpointClient::UpdateGcmChannelCallable(const UpdateGcmChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateGcmChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateGcmChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientUpdateGcmChannelAsyncHelper(PinpointClient const * const clientThis, const UpdateGcmChannelRequest& request, const UpdateGcmChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateGcmChannel(request), context);
}

void PinpointClient::UpdateGcmChannelAsync(const UpdateGcmChannelRequest& request, const UpdateGcmChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientUpdateGcmChannelAsyncHelper( this, request, handler, context ); } );
}

UpdateInAppTemplateOutcome PinpointClient::UpdateInAppTemplate(const UpdateInAppTemplateRequest& request) const
{
  if (!request.TemplateNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateInAppTemplate", "Required field: TemplateName, is not set");
    return UpdateInAppTemplateOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/templates/");
  uri.AddPathSegment(request.GetTemplateName());
  uri.AddPathSegments("/inapp");
  return UpdateInAppTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateInAppTemplateOutcomeCallable PinpointClient::UpdateInAppTemplateCallable(const UpdateInAppTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateInAppTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateInAppTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientUpdateInAppTemplateAsyncHelper(PinpointClient const * const clientThis, const UpdateInAppTemplateRequest& request, const UpdateInAppTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateInAppTemplate(request), context);
}

void PinpointClient::UpdateInAppTemplateAsync(const UpdateInAppTemplateRequest& request, const UpdateInAppTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientUpdateInAppTemplateAsyncHelper( this, request, handler, context ); } );
}

UpdateJourneyOutcome PinpointClient::UpdateJourney(const UpdateJourneyRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateJourney", "Required field: ApplicationId, is not set");
    return UpdateJourneyOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.JourneyIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateJourney", "Required field: JourneyId, is not set");
    return UpdateJourneyOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JourneyId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/journeys/");
  uri.AddPathSegment(request.GetJourneyId());
  return UpdateJourneyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateJourneyOutcomeCallable PinpointClient::UpdateJourneyCallable(const UpdateJourneyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateJourneyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateJourney(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientUpdateJourneyAsyncHelper(PinpointClient const * const clientThis, const UpdateJourneyRequest& request, const UpdateJourneyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateJourney(request), context);
}

void PinpointClient::UpdateJourneyAsync(const UpdateJourneyRequest& request, const UpdateJourneyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientUpdateJourneyAsyncHelper( this, request, handler, context ); } );
}

UpdateJourneyStateOutcome PinpointClient::UpdateJourneyState(const UpdateJourneyStateRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateJourneyState", "Required field: ApplicationId, is not set");
    return UpdateJourneyStateOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.JourneyIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateJourneyState", "Required field: JourneyId, is not set");
    return UpdateJourneyStateOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JourneyId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/journeys/");
  uri.AddPathSegment(request.GetJourneyId());
  uri.AddPathSegments("/state");
  return UpdateJourneyStateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateJourneyStateOutcomeCallable PinpointClient::UpdateJourneyStateCallable(const UpdateJourneyStateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateJourneyStateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateJourneyState(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientUpdateJourneyStateAsyncHelper(PinpointClient const * const clientThis, const UpdateJourneyStateRequest& request, const UpdateJourneyStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateJourneyState(request), context);
}

void PinpointClient::UpdateJourneyStateAsync(const UpdateJourneyStateRequest& request, const UpdateJourneyStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientUpdateJourneyStateAsyncHelper( this, request, handler, context ); } );
}

UpdatePushTemplateOutcome PinpointClient::UpdatePushTemplate(const UpdatePushTemplateRequest& request) const
{
  if (!request.TemplateNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdatePushTemplate", "Required field: TemplateName, is not set");
    return UpdatePushTemplateOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/templates/");
  uri.AddPathSegment(request.GetTemplateName());
  uri.AddPathSegments("/push");
  return UpdatePushTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdatePushTemplateOutcomeCallable PinpointClient::UpdatePushTemplateCallable(const UpdatePushTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePushTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePushTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientUpdatePushTemplateAsyncHelper(PinpointClient const * const clientThis, const UpdatePushTemplateRequest& request, const UpdatePushTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdatePushTemplate(request), context);
}

void PinpointClient::UpdatePushTemplateAsync(const UpdatePushTemplateRequest& request, const UpdatePushTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientUpdatePushTemplateAsyncHelper( this, request, handler, context ); } );
}

UpdateRecommenderConfigurationOutcome PinpointClient::UpdateRecommenderConfiguration(const UpdateRecommenderConfigurationRequest& request) const
{
  if (!request.RecommenderIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRecommenderConfiguration", "Required field: RecommenderId, is not set");
    return UpdateRecommenderConfigurationOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RecommenderId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/recommenders/");
  uri.AddPathSegment(request.GetRecommenderId());
  return UpdateRecommenderConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateRecommenderConfigurationOutcomeCallable PinpointClient::UpdateRecommenderConfigurationCallable(const UpdateRecommenderConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRecommenderConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRecommenderConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientUpdateRecommenderConfigurationAsyncHelper(PinpointClient const * const clientThis, const UpdateRecommenderConfigurationRequest& request, const UpdateRecommenderConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateRecommenderConfiguration(request), context);
}

void PinpointClient::UpdateRecommenderConfigurationAsync(const UpdateRecommenderConfigurationRequest& request, const UpdateRecommenderConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientUpdateRecommenderConfigurationAsyncHelper( this, request, handler, context ); } );
}

UpdateSegmentOutcome PinpointClient::UpdateSegment(const UpdateSegmentRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSegment", "Required field: ApplicationId, is not set");
    return UpdateSegmentOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.SegmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSegment", "Required field: SegmentId, is not set");
    return UpdateSegmentOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SegmentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/segments/");
  uri.AddPathSegment(request.GetSegmentId());
  return UpdateSegmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateSegmentOutcomeCallable PinpointClient::UpdateSegmentCallable(const UpdateSegmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSegmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSegment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientUpdateSegmentAsyncHelper(PinpointClient const * const clientThis, const UpdateSegmentRequest& request, const UpdateSegmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateSegment(request), context);
}

void PinpointClient::UpdateSegmentAsync(const UpdateSegmentRequest& request, const UpdateSegmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientUpdateSegmentAsyncHelper( this, request, handler, context ); } );
}

UpdateSmsChannelOutcome PinpointClient::UpdateSmsChannel(const UpdateSmsChannelRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSmsChannel", "Required field: ApplicationId, is not set");
    return UpdateSmsChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/channels/sms");
  return UpdateSmsChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateSmsChannelOutcomeCallable PinpointClient::UpdateSmsChannelCallable(const UpdateSmsChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSmsChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSmsChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientUpdateSmsChannelAsyncHelper(PinpointClient const * const clientThis, const UpdateSmsChannelRequest& request, const UpdateSmsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateSmsChannel(request), context);
}

void PinpointClient::UpdateSmsChannelAsync(const UpdateSmsChannelRequest& request, const UpdateSmsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientUpdateSmsChannelAsyncHelper( this, request, handler, context ); } );
}

UpdateSmsTemplateOutcome PinpointClient::UpdateSmsTemplate(const UpdateSmsTemplateRequest& request) const
{
  if (!request.TemplateNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSmsTemplate", "Required field: TemplateName, is not set");
    return UpdateSmsTemplateOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/templates/");
  uri.AddPathSegment(request.GetTemplateName());
  uri.AddPathSegments("/sms");
  return UpdateSmsTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateSmsTemplateOutcomeCallable PinpointClient::UpdateSmsTemplateCallable(const UpdateSmsTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSmsTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSmsTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientUpdateSmsTemplateAsyncHelper(PinpointClient const * const clientThis, const UpdateSmsTemplateRequest& request, const UpdateSmsTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateSmsTemplate(request), context);
}

void PinpointClient::UpdateSmsTemplateAsync(const UpdateSmsTemplateRequest& request, const UpdateSmsTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientUpdateSmsTemplateAsyncHelper( this, request, handler, context ); } );
}

UpdateTemplateActiveVersionOutcome PinpointClient::UpdateTemplateActiveVersion(const UpdateTemplateActiveVersionRequest& request) const
{
  if (!request.TemplateNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateTemplateActiveVersion", "Required field: TemplateName, is not set");
    return UpdateTemplateActiveVersionOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateName]", false));
  }
  if (!request.TemplateTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateTemplateActiveVersion", "Required field: TemplateType, is not set");
    return UpdateTemplateActiveVersionOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateType]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/templates/");
  uri.AddPathSegment(request.GetTemplateName());
  uri.AddPathSegment(request.GetTemplateType());
  uri.AddPathSegments("/active-version");
  return UpdateTemplateActiveVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateTemplateActiveVersionOutcomeCallable PinpointClient::UpdateTemplateActiveVersionCallable(const UpdateTemplateActiveVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateTemplateActiveVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateTemplateActiveVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientUpdateTemplateActiveVersionAsyncHelper(PinpointClient const * const clientThis, const UpdateTemplateActiveVersionRequest& request, const UpdateTemplateActiveVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateTemplateActiveVersion(request), context);
}

void PinpointClient::UpdateTemplateActiveVersionAsync(const UpdateTemplateActiveVersionRequest& request, const UpdateTemplateActiveVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientUpdateTemplateActiveVersionAsyncHelper( this, request, handler, context ); } );
}

UpdateVoiceChannelOutcome PinpointClient::UpdateVoiceChannel(const UpdateVoiceChannelRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateVoiceChannel", "Required field: ApplicationId, is not set");
    return UpdateVoiceChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/channels/voice");
  return UpdateVoiceChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateVoiceChannelOutcomeCallable PinpointClient::UpdateVoiceChannelCallable(const UpdateVoiceChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateVoiceChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateVoiceChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientUpdateVoiceChannelAsyncHelper(PinpointClient const * const clientThis, const UpdateVoiceChannelRequest& request, const UpdateVoiceChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateVoiceChannel(request), context);
}

void PinpointClient::UpdateVoiceChannelAsync(const UpdateVoiceChannelRequest& request, const UpdateVoiceChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientUpdateVoiceChannelAsyncHelper( this, request, handler, context ); } );
}

UpdateVoiceTemplateOutcome PinpointClient::UpdateVoiceTemplate(const UpdateVoiceTemplateRequest& request) const
{
  if (!request.TemplateNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateVoiceTemplate", "Required field: TemplateName, is not set");
    return UpdateVoiceTemplateOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/templates/");
  uri.AddPathSegment(request.GetTemplateName());
  uri.AddPathSegments("/voice");
  return UpdateVoiceTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateVoiceTemplateOutcomeCallable PinpointClient::UpdateVoiceTemplateCallable(const UpdateVoiceTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateVoiceTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateVoiceTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientUpdateVoiceTemplateAsyncHelper(PinpointClient const * const clientThis, const UpdateVoiceTemplateRequest& request, const UpdateVoiceTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateVoiceTemplate(request), context);
}

void PinpointClient::UpdateVoiceTemplateAsync(const UpdateVoiceTemplateRequest& request, const UpdateVoiceTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientUpdateVoiceTemplateAsyncHelper( this, request, handler, context ); } );
}

VerifyOTPMessageOutcome PinpointClient::VerifyOTPMessage(const VerifyOTPMessageRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("VerifyOTPMessage", "Required field: ApplicationId, is not set");
    return VerifyOTPMessageOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apps/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/verify-otp");
  return VerifyOTPMessageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

VerifyOTPMessageOutcomeCallable PinpointClient::VerifyOTPMessageCallable(const VerifyOTPMessageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< VerifyOTPMessageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->VerifyOTPMessage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClientVerifyOTPMessageAsyncHelper(PinpointClient const * const clientThis, const VerifyOTPMessageRequest& request, const VerifyOTPMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->VerifyOTPMessage(request), context);
}

void PinpointClient::VerifyOTPMessageAsync(const VerifyOTPMessageRequest& request, const VerifyOTPMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointClientVerifyOTPMessageAsyncHelper( this, request, handler, context ); } );
}

