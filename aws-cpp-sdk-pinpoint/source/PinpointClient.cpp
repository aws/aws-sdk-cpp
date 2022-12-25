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
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/pinpoint/PinpointClient.h>
#include <aws/pinpoint/PinpointErrorMarshaller.h>
#include <aws/pinpoint/PinpointEndpointProvider.h>
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
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* PinpointClient::SERVICE_NAME = "mobiletargeting";
const char* PinpointClient::ALLOCATION_TAG = "PinpointClient";

PinpointClient::PinpointClient(const Pinpoint::PinpointClientConfiguration& clientConfiguration,
                               std::shared_ptr<PinpointEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PinpointErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

PinpointClient::PinpointClient(const AWSCredentials& credentials,
                               std::shared_ptr<PinpointEndpointProviderBase> endpointProvider,
                               const Pinpoint::PinpointClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PinpointErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

PinpointClient::PinpointClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<PinpointEndpointProviderBase> endpointProvider,
                               const Pinpoint::PinpointClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PinpointErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  PinpointClient::PinpointClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PinpointErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<PinpointEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

PinpointClient::PinpointClient(const AWSCredentials& credentials,
                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PinpointErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<PinpointEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

PinpointClient::PinpointClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PinpointErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<PinpointEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
PinpointClient::~PinpointClient()
{
}

std::shared_ptr<PinpointEndpointProviderBase>& PinpointClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void PinpointClient::init(const Pinpoint::PinpointClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Pinpoint");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void PinpointClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CreateAppOutcome PinpointClient::CreateApp(const CreateAppRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateApp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateApp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps");
  return CreateAppOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAppOutcomeCallable PinpointClient::CreateAppCallable(const CreateAppRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAppOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateApp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::CreateAppAsync(const CreateAppRequest& request, const CreateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateApp(request), context);
    } );
}

CreateCampaignOutcome PinpointClient::CreateCampaign(const CreateCampaignRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCampaign, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateCampaign", "Required field: ApplicationId, is not set");
    return CreateCampaignOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateCampaign, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/campaigns");
  return CreateCampaignOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateCampaignOutcomeCallable PinpointClient::CreateCampaignCallable(const CreateCampaignRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCampaignOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCampaign(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::CreateCampaignAsync(const CreateCampaignRequest& request, const CreateCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateCampaign(request), context);
    } );
}

CreateEmailTemplateOutcome PinpointClient::CreateEmailTemplate(const CreateEmailTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateEmailTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TemplateNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateEmailTemplate", "Required field: TemplateName, is not set");
    return CreateEmailTemplateOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateEmailTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/templates/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/email");
  return CreateEmailTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateEmailTemplateOutcomeCallable PinpointClient::CreateEmailTemplateCallable(const CreateEmailTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateEmailTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateEmailTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::CreateEmailTemplateAsync(const CreateEmailTemplateRequest& request, const CreateEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateEmailTemplate(request), context);
    } );
}

CreateExportJobOutcome PinpointClient::CreateExportJob(const CreateExportJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateExportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateExportJob", "Required field: ApplicationId, is not set");
    return CreateExportJobOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateExportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/export");
  return CreateExportJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateExportJobOutcomeCallable PinpointClient::CreateExportJobCallable(const CreateExportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateExportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateExportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::CreateExportJobAsync(const CreateExportJobRequest& request, const CreateExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateExportJob(request), context);
    } );
}

CreateImportJobOutcome PinpointClient::CreateImportJob(const CreateImportJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateImportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateImportJob", "Required field: ApplicationId, is not set");
    return CreateImportJobOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateImportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/import");
  return CreateImportJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateImportJobOutcomeCallable PinpointClient::CreateImportJobCallable(const CreateImportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateImportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateImportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::CreateImportJobAsync(const CreateImportJobRequest& request, const CreateImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateImportJob(request), context);
    } );
}

CreateInAppTemplateOutcome PinpointClient::CreateInAppTemplate(const CreateInAppTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateInAppTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TemplateNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateInAppTemplate", "Required field: TemplateName, is not set");
    return CreateInAppTemplateOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateInAppTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/templates/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/inapp");
  return CreateInAppTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateInAppTemplateOutcomeCallable PinpointClient::CreateInAppTemplateCallable(const CreateInAppTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateInAppTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateInAppTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::CreateInAppTemplateAsync(const CreateInAppTemplateRequest& request, const CreateInAppTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateInAppTemplate(request), context);
    } );
}

CreateJourneyOutcome PinpointClient::CreateJourney(const CreateJourneyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateJourney, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateJourney", "Required field: ApplicationId, is not set");
    return CreateJourneyOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateJourney, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/journeys");
  return CreateJourneyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateJourneyOutcomeCallable PinpointClient::CreateJourneyCallable(const CreateJourneyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateJourneyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateJourney(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::CreateJourneyAsync(const CreateJourneyRequest& request, const CreateJourneyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateJourney(request), context);
    } );
}

CreatePushTemplateOutcome PinpointClient::CreatePushTemplate(const CreatePushTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreatePushTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TemplateNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreatePushTemplate", "Required field: TemplateName, is not set");
    return CreatePushTemplateOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreatePushTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/templates/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/push");
  return CreatePushTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePushTemplateOutcomeCallable PinpointClient::CreatePushTemplateCallable(const CreatePushTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePushTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePushTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::CreatePushTemplateAsync(const CreatePushTemplateRequest& request, const CreatePushTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreatePushTemplate(request), context);
    } );
}

CreateRecommenderConfigurationOutcome PinpointClient::CreateRecommenderConfiguration(const CreateRecommenderConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateRecommenderConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateRecommenderConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/recommenders");
  return CreateRecommenderConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateRecommenderConfigurationOutcomeCallable PinpointClient::CreateRecommenderConfigurationCallable(const CreateRecommenderConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRecommenderConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRecommenderConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::CreateRecommenderConfigurationAsync(const CreateRecommenderConfigurationRequest& request, const CreateRecommenderConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateRecommenderConfiguration(request), context);
    } );
}

CreateSegmentOutcome PinpointClient::CreateSegment(const CreateSegmentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSegment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateSegment", "Required field: ApplicationId, is not set");
    return CreateSegmentOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSegment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/segments");
  return CreateSegmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSegmentOutcomeCallable PinpointClient::CreateSegmentCallable(const CreateSegmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSegmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSegment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::CreateSegmentAsync(const CreateSegmentRequest& request, const CreateSegmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateSegment(request), context);
    } );
}

CreateSmsTemplateOutcome PinpointClient::CreateSmsTemplate(const CreateSmsTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSmsTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TemplateNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateSmsTemplate", "Required field: TemplateName, is not set");
    return CreateSmsTemplateOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSmsTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/templates/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sms");
  return CreateSmsTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSmsTemplateOutcomeCallable PinpointClient::CreateSmsTemplateCallable(const CreateSmsTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSmsTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSmsTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::CreateSmsTemplateAsync(const CreateSmsTemplateRequest& request, const CreateSmsTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateSmsTemplate(request), context);
    } );
}

CreateVoiceTemplateOutcome PinpointClient::CreateVoiceTemplate(const CreateVoiceTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateVoiceTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TemplateNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateVoiceTemplate", "Required field: TemplateName, is not set");
    return CreateVoiceTemplateOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateVoiceTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/templates/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice");
  return CreateVoiceTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateVoiceTemplateOutcomeCallable PinpointClient::CreateVoiceTemplateCallable(const CreateVoiceTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateVoiceTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateVoiceTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::CreateVoiceTemplateAsync(const CreateVoiceTemplateRequest& request, const CreateVoiceTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateVoiceTemplate(request), context);
    } );
}

DeleteAdmChannelOutcome PinpointClient::DeleteAdmChannel(const DeleteAdmChannelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAdmChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAdmChannel", "Required field: ApplicationId, is not set");
    return DeleteAdmChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAdmChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channels/adm");
  return DeleteAdmChannelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteAdmChannelOutcomeCallable PinpointClient::DeleteAdmChannelCallable(const DeleteAdmChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAdmChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAdmChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::DeleteAdmChannelAsync(const DeleteAdmChannelRequest& request, const DeleteAdmChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteAdmChannel(request), context);
    } );
}

DeleteApnsChannelOutcome PinpointClient::DeleteApnsChannel(const DeleteApnsChannelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteApnsChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteApnsChannel", "Required field: ApplicationId, is not set");
    return DeleteApnsChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteApnsChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channels/apns");
  return DeleteApnsChannelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteApnsChannelOutcomeCallable PinpointClient::DeleteApnsChannelCallable(const DeleteApnsChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteApnsChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApnsChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::DeleteApnsChannelAsync(const DeleteApnsChannelRequest& request, const DeleteApnsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteApnsChannel(request), context);
    } );
}

DeleteApnsSandboxChannelOutcome PinpointClient::DeleteApnsSandboxChannel(const DeleteApnsSandboxChannelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteApnsSandboxChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteApnsSandboxChannel", "Required field: ApplicationId, is not set");
    return DeleteApnsSandboxChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteApnsSandboxChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channels/apns_sandbox");
  return DeleteApnsSandboxChannelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteApnsSandboxChannelOutcomeCallable PinpointClient::DeleteApnsSandboxChannelCallable(const DeleteApnsSandboxChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteApnsSandboxChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApnsSandboxChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::DeleteApnsSandboxChannelAsync(const DeleteApnsSandboxChannelRequest& request, const DeleteApnsSandboxChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteApnsSandboxChannel(request), context);
    } );
}

DeleteApnsVoipChannelOutcome PinpointClient::DeleteApnsVoipChannel(const DeleteApnsVoipChannelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteApnsVoipChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteApnsVoipChannel", "Required field: ApplicationId, is not set");
    return DeleteApnsVoipChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteApnsVoipChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channels/apns_voip");
  return DeleteApnsVoipChannelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteApnsVoipChannelOutcomeCallable PinpointClient::DeleteApnsVoipChannelCallable(const DeleteApnsVoipChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteApnsVoipChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApnsVoipChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::DeleteApnsVoipChannelAsync(const DeleteApnsVoipChannelRequest& request, const DeleteApnsVoipChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteApnsVoipChannel(request), context);
    } );
}

DeleteApnsVoipSandboxChannelOutcome PinpointClient::DeleteApnsVoipSandboxChannel(const DeleteApnsVoipSandboxChannelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteApnsVoipSandboxChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteApnsVoipSandboxChannel", "Required field: ApplicationId, is not set");
    return DeleteApnsVoipSandboxChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteApnsVoipSandboxChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channels/apns_voip_sandbox");
  return DeleteApnsVoipSandboxChannelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteApnsVoipSandboxChannelOutcomeCallable PinpointClient::DeleteApnsVoipSandboxChannelCallable(const DeleteApnsVoipSandboxChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteApnsVoipSandboxChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApnsVoipSandboxChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::DeleteApnsVoipSandboxChannelAsync(const DeleteApnsVoipSandboxChannelRequest& request, const DeleteApnsVoipSandboxChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteApnsVoipSandboxChannel(request), context);
    } );
}

DeleteAppOutcome PinpointClient::DeleteApp(const DeleteAppRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteApp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteApp", "Required field: ApplicationId, is not set");
    return DeleteAppOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteApp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  return DeleteAppOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteAppOutcomeCallable PinpointClient::DeleteAppCallable(const DeleteAppRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAppOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::DeleteAppAsync(const DeleteAppRequest& request, const DeleteAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteApp(request), context);
    } );
}

DeleteBaiduChannelOutcome PinpointClient::DeleteBaiduChannel(const DeleteBaiduChannelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBaiduChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBaiduChannel", "Required field: ApplicationId, is not set");
    return DeleteBaiduChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBaiduChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channels/baidu");
  return DeleteBaiduChannelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteBaiduChannelOutcomeCallable PinpointClient::DeleteBaiduChannelCallable(const DeleteBaiduChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBaiduChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBaiduChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::DeleteBaiduChannelAsync(const DeleteBaiduChannelRequest& request, const DeleteBaiduChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteBaiduChannel(request), context);
    } );
}

DeleteCampaignOutcome PinpointClient::DeleteCampaign(const DeleteCampaignRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteCampaign, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteCampaign, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/campaigns/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCampaignId());
  return DeleteCampaignOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteCampaignOutcomeCallable PinpointClient::DeleteCampaignCallable(const DeleteCampaignRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCampaignOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCampaign(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::DeleteCampaignAsync(const DeleteCampaignRequest& request, const DeleteCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteCampaign(request), context);
    } );
}

DeleteEmailChannelOutcome PinpointClient::DeleteEmailChannel(const DeleteEmailChannelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteEmailChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteEmailChannel", "Required field: ApplicationId, is not set");
    return DeleteEmailChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteEmailChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channels/email");
  return DeleteEmailChannelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteEmailChannelOutcomeCallable PinpointClient::DeleteEmailChannelCallable(const DeleteEmailChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEmailChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEmailChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::DeleteEmailChannelAsync(const DeleteEmailChannelRequest& request, const DeleteEmailChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteEmailChannel(request), context);
    } );
}

DeleteEmailTemplateOutcome PinpointClient::DeleteEmailTemplate(const DeleteEmailTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteEmailTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TemplateNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteEmailTemplate", "Required field: TemplateName, is not set");
    return DeleteEmailTemplateOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteEmailTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/templates/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/email");
  return DeleteEmailTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteEmailTemplateOutcomeCallable PinpointClient::DeleteEmailTemplateCallable(const DeleteEmailTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEmailTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEmailTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::DeleteEmailTemplateAsync(const DeleteEmailTemplateRequest& request, const DeleteEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteEmailTemplate(request), context);
    } );
}

DeleteEndpointOutcome PinpointClient::DeleteEndpoint(const DeleteEndpointRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/endpoints/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEndpointId());
  return DeleteEndpointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteEndpointOutcomeCallable PinpointClient::DeleteEndpointCallable(const DeleteEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::DeleteEndpointAsync(const DeleteEndpointRequest& request, const DeleteEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteEndpoint(request), context);
    } );
}

DeleteEventStreamOutcome PinpointClient::DeleteEventStream(const DeleteEventStreamRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteEventStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteEventStream", "Required field: ApplicationId, is not set");
    return DeleteEventStreamOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteEventStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/eventstream");
  return DeleteEventStreamOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteEventStreamOutcomeCallable PinpointClient::DeleteEventStreamCallable(const DeleteEventStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEventStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEventStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::DeleteEventStreamAsync(const DeleteEventStreamRequest& request, const DeleteEventStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteEventStream(request), context);
    } );
}

DeleteGcmChannelOutcome PinpointClient::DeleteGcmChannel(const DeleteGcmChannelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteGcmChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteGcmChannel", "Required field: ApplicationId, is not set");
    return DeleteGcmChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteGcmChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channels/gcm");
  return DeleteGcmChannelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteGcmChannelOutcomeCallable PinpointClient::DeleteGcmChannelCallable(const DeleteGcmChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteGcmChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteGcmChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::DeleteGcmChannelAsync(const DeleteGcmChannelRequest& request, const DeleteGcmChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteGcmChannel(request), context);
    } );
}

DeleteInAppTemplateOutcome PinpointClient::DeleteInAppTemplate(const DeleteInAppTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteInAppTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TemplateNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteInAppTemplate", "Required field: TemplateName, is not set");
    return DeleteInAppTemplateOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteInAppTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/templates/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/inapp");
  return DeleteInAppTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteInAppTemplateOutcomeCallable PinpointClient::DeleteInAppTemplateCallable(const DeleteInAppTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteInAppTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteInAppTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::DeleteInAppTemplateAsync(const DeleteInAppTemplateRequest& request, const DeleteInAppTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteInAppTemplate(request), context);
    } );
}

DeleteJourneyOutcome PinpointClient::DeleteJourney(const DeleteJourneyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteJourney, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteJourney, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/journeys/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJourneyId());
  return DeleteJourneyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteJourneyOutcomeCallable PinpointClient::DeleteJourneyCallable(const DeleteJourneyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteJourneyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteJourney(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::DeleteJourneyAsync(const DeleteJourneyRequest& request, const DeleteJourneyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteJourney(request), context);
    } );
}

DeletePushTemplateOutcome PinpointClient::DeletePushTemplate(const DeletePushTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeletePushTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TemplateNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeletePushTemplate", "Required field: TemplateName, is not set");
    return DeletePushTemplateOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeletePushTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/templates/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/push");
  return DeletePushTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeletePushTemplateOutcomeCallable PinpointClient::DeletePushTemplateCallable(const DeletePushTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePushTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePushTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::DeletePushTemplateAsync(const DeletePushTemplateRequest& request, const DeletePushTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeletePushTemplate(request), context);
    } );
}

DeleteRecommenderConfigurationOutcome PinpointClient::DeleteRecommenderConfiguration(const DeleteRecommenderConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteRecommenderConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RecommenderIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRecommenderConfiguration", "Required field: RecommenderId, is not set");
    return DeleteRecommenderConfigurationOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RecommenderId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteRecommenderConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/recommenders/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRecommenderId());
  return DeleteRecommenderConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteRecommenderConfigurationOutcomeCallable PinpointClient::DeleteRecommenderConfigurationCallable(const DeleteRecommenderConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRecommenderConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRecommenderConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::DeleteRecommenderConfigurationAsync(const DeleteRecommenderConfigurationRequest& request, const DeleteRecommenderConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteRecommenderConfiguration(request), context);
    } );
}

DeleteSegmentOutcome PinpointClient::DeleteSegment(const DeleteSegmentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSegment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSegment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/segments/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSegmentId());
  return DeleteSegmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteSegmentOutcomeCallable PinpointClient::DeleteSegmentCallable(const DeleteSegmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSegmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSegment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::DeleteSegmentAsync(const DeleteSegmentRequest& request, const DeleteSegmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteSegment(request), context);
    } );
}

DeleteSmsChannelOutcome PinpointClient::DeleteSmsChannel(const DeleteSmsChannelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSmsChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSmsChannel", "Required field: ApplicationId, is not set");
    return DeleteSmsChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSmsChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channels/sms");
  return DeleteSmsChannelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteSmsChannelOutcomeCallable PinpointClient::DeleteSmsChannelCallable(const DeleteSmsChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSmsChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSmsChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::DeleteSmsChannelAsync(const DeleteSmsChannelRequest& request, const DeleteSmsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteSmsChannel(request), context);
    } );
}

DeleteSmsTemplateOutcome PinpointClient::DeleteSmsTemplate(const DeleteSmsTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSmsTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TemplateNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSmsTemplate", "Required field: TemplateName, is not set");
    return DeleteSmsTemplateOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSmsTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/templates/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sms");
  return DeleteSmsTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteSmsTemplateOutcomeCallable PinpointClient::DeleteSmsTemplateCallable(const DeleteSmsTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSmsTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSmsTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::DeleteSmsTemplateAsync(const DeleteSmsTemplateRequest& request, const DeleteSmsTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteSmsTemplate(request), context);
    } );
}

DeleteUserEndpointsOutcome PinpointClient::DeleteUserEndpoints(const DeleteUserEndpointsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteUserEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteUserEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserId());
  return DeleteUserEndpointsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteUserEndpointsOutcomeCallable PinpointClient::DeleteUserEndpointsCallable(const DeleteUserEndpointsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteUserEndpointsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteUserEndpoints(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::DeleteUserEndpointsAsync(const DeleteUserEndpointsRequest& request, const DeleteUserEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteUserEndpoints(request), context);
    } );
}

DeleteVoiceChannelOutcome PinpointClient::DeleteVoiceChannel(const DeleteVoiceChannelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVoiceChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVoiceChannel", "Required field: ApplicationId, is not set");
    return DeleteVoiceChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteVoiceChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channels/voice");
  return DeleteVoiceChannelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteVoiceChannelOutcomeCallable PinpointClient::DeleteVoiceChannelCallable(const DeleteVoiceChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVoiceChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVoiceChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::DeleteVoiceChannelAsync(const DeleteVoiceChannelRequest& request, const DeleteVoiceChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteVoiceChannel(request), context);
    } );
}

DeleteVoiceTemplateOutcome PinpointClient::DeleteVoiceTemplate(const DeleteVoiceTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVoiceTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TemplateNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVoiceTemplate", "Required field: TemplateName, is not set");
    return DeleteVoiceTemplateOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteVoiceTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/templates/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice");
  return DeleteVoiceTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteVoiceTemplateOutcomeCallable PinpointClient::DeleteVoiceTemplateCallable(const DeleteVoiceTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVoiceTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVoiceTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::DeleteVoiceTemplateAsync(const DeleteVoiceTemplateRequest& request, const DeleteVoiceTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteVoiceTemplate(request), context);
    } );
}

GetAdmChannelOutcome PinpointClient::GetAdmChannel(const GetAdmChannelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAdmChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAdmChannel", "Required field: ApplicationId, is not set");
    return GetAdmChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAdmChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channels/adm");
  return GetAdmChannelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetAdmChannelOutcomeCallable PinpointClient::GetAdmChannelCallable(const GetAdmChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAdmChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAdmChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetAdmChannelAsync(const GetAdmChannelRequest& request, const GetAdmChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetAdmChannel(request), context);
    } );
}

GetApnsChannelOutcome PinpointClient::GetApnsChannel(const GetApnsChannelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetApnsChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetApnsChannel", "Required field: ApplicationId, is not set");
    return GetApnsChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetApnsChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channels/apns");
  return GetApnsChannelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetApnsChannelOutcomeCallable PinpointClient::GetApnsChannelCallable(const GetApnsChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetApnsChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetApnsChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetApnsChannelAsync(const GetApnsChannelRequest& request, const GetApnsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetApnsChannel(request), context);
    } );
}

GetApnsSandboxChannelOutcome PinpointClient::GetApnsSandboxChannel(const GetApnsSandboxChannelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetApnsSandboxChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetApnsSandboxChannel", "Required field: ApplicationId, is not set");
    return GetApnsSandboxChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetApnsSandboxChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channels/apns_sandbox");
  return GetApnsSandboxChannelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetApnsSandboxChannelOutcomeCallable PinpointClient::GetApnsSandboxChannelCallable(const GetApnsSandboxChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetApnsSandboxChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetApnsSandboxChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetApnsSandboxChannelAsync(const GetApnsSandboxChannelRequest& request, const GetApnsSandboxChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetApnsSandboxChannel(request), context);
    } );
}

GetApnsVoipChannelOutcome PinpointClient::GetApnsVoipChannel(const GetApnsVoipChannelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetApnsVoipChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetApnsVoipChannel", "Required field: ApplicationId, is not set");
    return GetApnsVoipChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetApnsVoipChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channels/apns_voip");
  return GetApnsVoipChannelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetApnsVoipChannelOutcomeCallable PinpointClient::GetApnsVoipChannelCallable(const GetApnsVoipChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetApnsVoipChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetApnsVoipChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetApnsVoipChannelAsync(const GetApnsVoipChannelRequest& request, const GetApnsVoipChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetApnsVoipChannel(request), context);
    } );
}

GetApnsVoipSandboxChannelOutcome PinpointClient::GetApnsVoipSandboxChannel(const GetApnsVoipSandboxChannelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetApnsVoipSandboxChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetApnsVoipSandboxChannel", "Required field: ApplicationId, is not set");
    return GetApnsVoipSandboxChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetApnsVoipSandboxChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channels/apns_voip_sandbox");
  return GetApnsVoipSandboxChannelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetApnsVoipSandboxChannelOutcomeCallable PinpointClient::GetApnsVoipSandboxChannelCallable(const GetApnsVoipSandboxChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetApnsVoipSandboxChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetApnsVoipSandboxChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetApnsVoipSandboxChannelAsync(const GetApnsVoipSandboxChannelRequest& request, const GetApnsVoipSandboxChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetApnsVoipSandboxChannel(request), context);
    } );
}

GetAppOutcome PinpointClient::GetApp(const GetAppRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetApp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetApp", "Required field: ApplicationId, is not set");
    return GetAppOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetApp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  return GetAppOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetAppOutcomeCallable PinpointClient::GetAppCallable(const GetAppRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAppOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetApp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetAppAsync(const GetAppRequest& request, const GetAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetApp(request), context);
    } );
}

GetApplicationDateRangeKpiOutcome PinpointClient::GetApplicationDateRangeKpi(const GetApplicationDateRangeKpiRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetApplicationDateRangeKpi, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetApplicationDateRangeKpi, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/kpis/daterange/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKpiName());
  return GetApplicationDateRangeKpiOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetApplicationDateRangeKpiOutcomeCallable PinpointClient::GetApplicationDateRangeKpiCallable(const GetApplicationDateRangeKpiRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetApplicationDateRangeKpiOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetApplicationDateRangeKpi(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetApplicationDateRangeKpiAsync(const GetApplicationDateRangeKpiRequest& request, const GetApplicationDateRangeKpiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetApplicationDateRangeKpi(request), context);
    } );
}

GetApplicationSettingsOutcome PinpointClient::GetApplicationSettings(const GetApplicationSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetApplicationSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetApplicationSettings", "Required field: ApplicationId, is not set");
    return GetApplicationSettingsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetApplicationSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/settings");
  return GetApplicationSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetApplicationSettingsOutcomeCallable PinpointClient::GetApplicationSettingsCallable(const GetApplicationSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetApplicationSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetApplicationSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetApplicationSettingsAsync(const GetApplicationSettingsRequest& request, const GetApplicationSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetApplicationSettings(request), context);
    } );
}

GetAppsOutcome PinpointClient::GetApps(const GetAppsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetApps, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetApps, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps");
  return GetAppsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetAppsOutcomeCallable PinpointClient::GetAppsCallable(const GetAppsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAppsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetApps(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetAppsAsync(const GetAppsRequest& request, const GetAppsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetApps(request), context);
    } );
}

GetBaiduChannelOutcome PinpointClient::GetBaiduChannel(const GetBaiduChannelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBaiduChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBaiduChannel", "Required field: ApplicationId, is not set");
    return GetBaiduChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBaiduChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channels/baidu");
  return GetBaiduChannelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetBaiduChannelOutcomeCallable PinpointClient::GetBaiduChannelCallable(const GetBaiduChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBaiduChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBaiduChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetBaiduChannelAsync(const GetBaiduChannelRequest& request, const GetBaiduChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetBaiduChannel(request), context);
    } );
}

GetCampaignOutcome PinpointClient::GetCampaign(const GetCampaignRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCampaign, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetCampaign, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/campaigns/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCampaignId());
  return GetCampaignOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetCampaignOutcomeCallable PinpointClient::GetCampaignCallable(const GetCampaignRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCampaignOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCampaign(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetCampaignAsync(const GetCampaignRequest& request, const GetCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetCampaign(request), context);
    } );
}

GetCampaignActivitiesOutcome PinpointClient::GetCampaignActivities(const GetCampaignActivitiesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCampaignActivities, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetCampaignActivities, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/campaigns/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCampaignId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/activities");
  return GetCampaignActivitiesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetCampaignActivitiesOutcomeCallable PinpointClient::GetCampaignActivitiesCallable(const GetCampaignActivitiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCampaignActivitiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCampaignActivities(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetCampaignActivitiesAsync(const GetCampaignActivitiesRequest& request, const GetCampaignActivitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetCampaignActivities(request), context);
    } );
}

GetCampaignDateRangeKpiOutcome PinpointClient::GetCampaignDateRangeKpi(const GetCampaignDateRangeKpiRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCampaignDateRangeKpi, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetCampaignDateRangeKpi, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/campaigns/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCampaignId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/kpis/daterange/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKpiName());
  return GetCampaignDateRangeKpiOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetCampaignDateRangeKpiOutcomeCallable PinpointClient::GetCampaignDateRangeKpiCallable(const GetCampaignDateRangeKpiRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCampaignDateRangeKpiOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCampaignDateRangeKpi(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetCampaignDateRangeKpiAsync(const GetCampaignDateRangeKpiRequest& request, const GetCampaignDateRangeKpiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetCampaignDateRangeKpi(request), context);
    } );
}

GetCampaignVersionOutcome PinpointClient::GetCampaignVersion(const GetCampaignVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCampaignVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetCampaignVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/campaigns/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCampaignId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVersion());
  return GetCampaignVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetCampaignVersionOutcomeCallable PinpointClient::GetCampaignVersionCallable(const GetCampaignVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCampaignVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCampaignVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetCampaignVersionAsync(const GetCampaignVersionRequest& request, const GetCampaignVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetCampaignVersion(request), context);
    } );
}

GetCampaignVersionsOutcome PinpointClient::GetCampaignVersions(const GetCampaignVersionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCampaignVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetCampaignVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/campaigns/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCampaignId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  return GetCampaignVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetCampaignVersionsOutcomeCallable PinpointClient::GetCampaignVersionsCallable(const GetCampaignVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCampaignVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCampaignVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetCampaignVersionsAsync(const GetCampaignVersionsRequest& request, const GetCampaignVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetCampaignVersions(request), context);
    } );
}

GetCampaignsOutcome PinpointClient::GetCampaigns(const GetCampaignsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCampaigns, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCampaigns", "Required field: ApplicationId, is not set");
    return GetCampaignsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetCampaigns, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/campaigns");
  return GetCampaignsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetCampaignsOutcomeCallable PinpointClient::GetCampaignsCallable(const GetCampaignsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCampaignsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCampaigns(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetCampaignsAsync(const GetCampaignsRequest& request, const GetCampaignsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetCampaigns(request), context);
    } );
}

GetChannelsOutcome PinpointClient::GetChannels(const GetChannelsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetChannels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetChannels", "Required field: ApplicationId, is not set");
    return GetChannelsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetChannels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channels");
  return GetChannelsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetChannelsOutcomeCallable PinpointClient::GetChannelsCallable(const GetChannelsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetChannelsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetChannels(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetChannelsAsync(const GetChannelsRequest& request, const GetChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetChannels(request), context);
    } );
}

GetEmailChannelOutcome PinpointClient::GetEmailChannel(const GetEmailChannelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetEmailChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetEmailChannel", "Required field: ApplicationId, is not set");
    return GetEmailChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetEmailChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channels/email");
  return GetEmailChannelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetEmailChannelOutcomeCallable PinpointClient::GetEmailChannelCallable(const GetEmailChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEmailChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEmailChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetEmailChannelAsync(const GetEmailChannelRequest& request, const GetEmailChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetEmailChannel(request), context);
    } );
}

GetEmailTemplateOutcome PinpointClient::GetEmailTemplate(const GetEmailTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetEmailTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TemplateNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetEmailTemplate", "Required field: TemplateName, is not set");
    return GetEmailTemplateOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetEmailTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/templates/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/email");
  return GetEmailTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetEmailTemplateOutcomeCallable PinpointClient::GetEmailTemplateCallable(const GetEmailTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEmailTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEmailTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetEmailTemplateAsync(const GetEmailTemplateRequest& request, const GetEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetEmailTemplate(request), context);
    } );
}

GetEndpointOutcome PinpointClient::GetEndpoint(const GetEndpointRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/endpoints/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEndpointId());
  return GetEndpointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetEndpointOutcomeCallable PinpointClient::GetEndpointCallable(const GetEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetEndpointAsync(const GetEndpointRequest& request, const GetEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetEndpoint(request), context);
    } );
}

GetEventStreamOutcome PinpointClient::GetEventStream(const GetEventStreamRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetEventStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetEventStream", "Required field: ApplicationId, is not set");
    return GetEventStreamOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetEventStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/eventstream");
  return GetEventStreamOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetEventStreamOutcomeCallable PinpointClient::GetEventStreamCallable(const GetEventStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEventStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEventStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetEventStreamAsync(const GetEventStreamRequest& request, const GetEventStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetEventStream(request), context);
    } );
}

GetExportJobOutcome PinpointClient::GetExportJob(const GetExportJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetExportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetExportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/export/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  return GetExportJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetExportJobOutcomeCallable PinpointClient::GetExportJobCallable(const GetExportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetExportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetExportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetExportJobAsync(const GetExportJobRequest& request, const GetExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetExportJob(request), context);
    } );
}

GetExportJobsOutcome PinpointClient::GetExportJobs(const GetExportJobsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetExportJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetExportJobs", "Required field: ApplicationId, is not set");
    return GetExportJobsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetExportJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/export");
  return GetExportJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetExportJobsOutcomeCallable PinpointClient::GetExportJobsCallable(const GetExportJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetExportJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetExportJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetExportJobsAsync(const GetExportJobsRequest& request, const GetExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetExportJobs(request), context);
    } );
}

GetGcmChannelOutcome PinpointClient::GetGcmChannel(const GetGcmChannelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetGcmChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetGcmChannel", "Required field: ApplicationId, is not set");
    return GetGcmChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetGcmChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channels/gcm");
  return GetGcmChannelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetGcmChannelOutcomeCallable PinpointClient::GetGcmChannelCallable(const GetGcmChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetGcmChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetGcmChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetGcmChannelAsync(const GetGcmChannelRequest& request, const GetGcmChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetGcmChannel(request), context);
    } );
}

GetImportJobOutcome PinpointClient::GetImportJob(const GetImportJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetImportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetImportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/import/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  return GetImportJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetImportJobOutcomeCallable PinpointClient::GetImportJobCallable(const GetImportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetImportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetImportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetImportJobAsync(const GetImportJobRequest& request, const GetImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetImportJob(request), context);
    } );
}

GetImportJobsOutcome PinpointClient::GetImportJobs(const GetImportJobsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetImportJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetImportJobs", "Required field: ApplicationId, is not set");
    return GetImportJobsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetImportJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/import");
  return GetImportJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetImportJobsOutcomeCallable PinpointClient::GetImportJobsCallable(const GetImportJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetImportJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetImportJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetImportJobsAsync(const GetImportJobsRequest& request, const GetImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetImportJobs(request), context);
    } );
}

GetInAppMessagesOutcome PinpointClient::GetInAppMessages(const GetInAppMessagesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetInAppMessages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetInAppMessages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/endpoints/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEndpointId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/inappmessages");
  return GetInAppMessagesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetInAppMessagesOutcomeCallable PinpointClient::GetInAppMessagesCallable(const GetInAppMessagesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetInAppMessagesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetInAppMessages(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetInAppMessagesAsync(const GetInAppMessagesRequest& request, const GetInAppMessagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetInAppMessages(request), context);
    } );
}

GetInAppTemplateOutcome PinpointClient::GetInAppTemplate(const GetInAppTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetInAppTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TemplateNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetInAppTemplate", "Required field: TemplateName, is not set");
    return GetInAppTemplateOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetInAppTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/templates/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/inapp");
  return GetInAppTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetInAppTemplateOutcomeCallable PinpointClient::GetInAppTemplateCallable(const GetInAppTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetInAppTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetInAppTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetInAppTemplateAsync(const GetInAppTemplateRequest& request, const GetInAppTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetInAppTemplate(request), context);
    } );
}

GetJourneyOutcome PinpointClient::GetJourney(const GetJourneyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetJourney, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetJourney, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/journeys/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJourneyId());
  return GetJourneyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetJourneyOutcomeCallable PinpointClient::GetJourneyCallable(const GetJourneyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetJourneyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetJourney(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetJourneyAsync(const GetJourneyRequest& request, const GetJourneyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetJourney(request), context);
    } );
}

GetJourneyDateRangeKpiOutcome PinpointClient::GetJourneyDateRangeKpi(const GetJourneyDateRangeKpiRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetJourneyDateRangeKpi, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetJourneyDateRangeKpi, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/journeys/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJourneyId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/kpis/daterange/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKpiName());
  return GetJourneyDateRangeKpiOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetJourneyDateRangeKpiOutcomeCallable PinpointClient::GetJourneyDateRangeKpiCallable(const GetJourneyDateRangeKpiRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetJourneyDateRangeKpiOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetJourneyDateRangeKpi(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetJourneyDateRangeKpiAsync(const GetJourneyDateRangeKpiRequest& request, const GetJourneyDateRangeKpiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetJourneyDateRangeKpi(request), context);
    } );
}

GetJourneyExecutionActivityMetricsOutcome PinpointClient::GetJourneyExecutionActivityMetrics(const GetJourneyExecutionActivityMetricsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetJourneyExecutionActivityMetrics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetJourneyExecutionActivityMetrics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/journeys/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJourneyId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/activities/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJourneyActivityId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/execution-metrics");
  return GetJourneyExecutionActivityMetricsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetJourneyExecutionActivityMetricsOutcomeCallable PinpointClient::GetJourneyExecutionActivityMetricsCallable(const GetJourneyExecutionActivityMetricsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetJourneyExecutionActivityMetricsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetJourneyExecutionActivityMetrics(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetJourneyExecutionActivityMetricsAsync(const GetJourneyExecutionActivityMetricsRequest& request, const GetJourneyExecutionActivityMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetJourneyExecutionActivityMetrics(request), context);
    } );
}

GetJourneyExecutionMetricsOutcome PinpointClient::GetJourneyExecutionMetrics(const GetJourneyExecutionMetricsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetJourneyExecutionMetrics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetJourneyExecutionMetrics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/journeys/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJourneyId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/execution-metrics");
  return GetJourneyExecutionMetricsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetJourneyExecutionMetricsOutcomeCallable PinpointClient::GetJourneyExecutionMetricsCallable(const GetJourneyExecutionMetricsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetJourneyExecutionMetricsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetJourneyExecutionMetrics(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetJourneyExecutionMetricsAsync(const GetJourneyExecutionMetricsRequest& request, const GetJourneyExecutionMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetJourneyExecutionMetrics(request), context);
    } );
}

GetPushTemplateOutcome PinpointClient::GetPushTemplate(const GetPushTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetPushTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TemplateNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPushTemplate", "Required field: TemplateName, is not set");
    return GetPushTemplateOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetPushTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/templates/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/push");
  return GetPushTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetPushTemplateOutcomeCallable PinpointClient::GetPushTemplateCallable(const GetPushTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPushTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPushTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetPushTemplateAsync(const GetPushTemplateRequest& request, const GetPushTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetPushTemplate(request), context);
    } );
}

GetRecommenderConfigurationOutcome PinpointClient::GetRecommenderConfiguration(const GetRecommenderConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRecommenderConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RecommenderIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRecommenderConfiguration", "Required field: RecommenderId, is not set");
    return GetRecommenderConfigurationOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RecommenderId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRecommenderConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/recommenders/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRecommenderId());
  return GetRecommenderConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetRecommenderConfigurationOutcomeCallable PinpointClient::GetRecommenderConfigurationCallable(const GetRecommenderConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRecommenderConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRecommenderConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetRecommenderConfigurationAsync(const GetRecommenderConfigurationRequest& request, const GetRecommenderConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetRecommenderConfiguration(request), context);
    } );
}

GetRecommenderConfigurationsOutcome PinpointClient::GetRecommenderConfigurations(const GetRecommenderConfigurationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRecommenderConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRecommenderConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/recommenders");
  return GetRecommenderConfigurationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetRecommenderConfigurationsOutcomeCallable PinpointClient::GetRecommenderConfigurationsCallable(const GetRecommenderConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRecommenderConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRecommenderConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetRecommenderConfigurationsAsync(const GetRecommenderConfigurationsRequest& request, const GetRecommenderConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetRecommenderConfigurations(request), context);
    } );
}

GetSegmentOutcome PinpointClient::GetSegment(const GetSegmentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSegment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSegment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/segments/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSegmentId());
  return GetSegmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSegmentOutcomeCallable PinpointClient::GetSegmentCallable(const GetSegmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSegmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSegment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetSegmentAsync(const GetSegmentRequest& request, const GetSegmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetSegment(request), context);
    } );
}

GetSegmentExportJobsOutcome PinpointClient::GetSegmentExportJobs(const GetSegmentExportJobsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSegmentExportJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSegmentExportJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/segments/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSegmentId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/export");
  return GetSegmentExportJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSegmentExportJobsOutcomeCallable PinpointClient::GetSegmentExportJobsCallable(const GetSegmentExportJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSegmentExportJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSegmentExportJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetSegmentExportJobsAsync(const GetSegmentExportJobsRequest& request, const GetSegmentExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetSegmentExportJobs(request), context);
    } );
}

GetSegmentImportJobsOutcome PinpointClient::GetSegmentImportJobs(const GetSegmentImportJobsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSegmentImportJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSegmentImportJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/segments/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSegmentId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/import");
  return GetSegmentImportJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSegmentImportJobsOutcomeCallable PinpointClient::GetSegmentImportJobsCallable(const GetSegmentImportJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSegmentImportJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSegmentImportJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetSegmentImportJobsAsync(const GetSegmentImportJobsRequest& request, const GetSegmentImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetSegmentImportJobs(request), context);
    } );
}

GetSegmentVersionOutcome PinpointClient::GetSegmentVersion(const GetSegmentVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSegmentVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSegmentVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/segments/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSegmentId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVersion());
  return GetSegmentVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSegmentVersionOutcomeCallable PinpointClient::GetSegmentVersionCallable(const GetSegmentVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSegmentVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSegmentVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetSegmentVersionAsync(const GetSegmentVersionRequest& request, const GetSegmentVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetSegmentVersion(request), context);
    } );
}

GetSegmentVersionsOutcome PinpointClient::GetSegmentVersions(const GetSegmentVersionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSegmentVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSegmentVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/segments/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSegmentId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  return GetSegmentVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSegmentVersionsOutcomeCallable PinpointClient::GetSegmentVersionsCallable(const GetSegmentVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSegmentVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSegmentVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetSegmentVersionsAsync(const GetSegmentVersionsRequest& request, const GetSegmentVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetSegmentVersions(request), context);
    } );
}

GetSegmentsOutcome PinpointClient::GetSegments(const GetSegmentsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSegments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSegments", "Required field: ApplicationId, is not set");
    return GetSegmentsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSegments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/segments");
  return GetSegmentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSegmentsOutcomeCallable PinpointClient::GetSegmentsCallable(const GetSegmentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSegmentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSegments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetSegmentsAsync(const GetSegmentsRequest& request, const GetSegmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetSegments(request), context);
    } );
}

GetSmsChannelOutcome PinpointClient::GetSmsChannel(const GetSmsChannelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSmsChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSmsChannel", "Required field: ApplicationId, is not set");
    return GetSmsChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSmsChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channels/sms");
  return GetSmsChannelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSmsChannelOutcomeCallable PinpointClient::GetSmsChannelCallable(const GetSmsChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSmsChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSmsChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetSmsChannelAsync(const GetSmsChannelRequest& request, const GetSmsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetSmsChannel(request), context);
    } );
}

GetSmsTemplateOutcome PinpointClient::GetSmsTemplate(const GetSmsTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSmsTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TemplateNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSmsTemplate", "Required field: TemplateName, is not set");
    return GetSmsTemplateOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSmsTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/templates/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sms");
  return GetSmsTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSmsTemplateOutcomeCallable PinpointClient::GetSmsTemplateCallable(const GetSmsTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSmsTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSmsTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetSmsTemplateAsync(const GetSmsTemplateRequest& request, const GetSmsTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetSmsTemplate(request), context);
    } );
}

GetUserEndpointsOutcome PinpointClient::GetUserEndpoints(const GetUserEndpointsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetUserEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetUserEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserId());
  return GetUserEndpointsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetUserEndpointsOutcomeCallable PinpointClient::GetUserEndpointsCallable(const GetUserEndpointsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetUserEndpointsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetUserEndpoints(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetUserEndpointsAsync(const GetUserEndpointsRequest& request, const GetUserEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetUserEndpoints(request), context);
    } );
}

GetVoiceChannelOutcome PinpointClient::GetVoiceChannel(const GetVoiceChannelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetVoiceChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetVoiceChannel", "Required field: ApplicationId, is not set");
    return GetVoiceChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetVoiceChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channels/voice");
  return GetVoiceChannelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetVoiceChannelOutcomeCallable PinpointClient::GetVoiceChannelCallable(const GetVoiceChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetVoiceChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetVoiceChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetVoiceChannelAsync(const GetVoiceChannelRequest& request, const GetVoiceChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetVoiceChannel(request), context);
    } );
}

GetVoiceTemplateOutcome PinpointClient::GetVoiceTemplate(const GetVoiceTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetVoiceTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TemplateNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetVoiceTemplate", "Required field: TemplateName, is not set");
    return GetVoiceTemplateOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetVoiceTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/templates/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice");
  return GetVoiceTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetVoiceTemplateOutcomeCallable PinpointClient::GetVoiceTemplateCallable(const GetVoiceTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetVoiceTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetVoiceTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetVoiceTemplateAsync(const GetVoiceTemplateRequest& request, const GetVoiceTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetVoiceTemplate(request), context);
    } );
}

ListJourneysOutcome PinpointClient::ListJourneys(const ListJourneysRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListJourneys, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListJourneys", "Required field: ApplicationId, is not set");
    return ListJourneysOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListJourneys, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/journeys");
  return ListJourneysOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListJourneysOutcomeCallable PinpointClient::ListJourneysCallable(const ListJourneysRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListJourneysOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListJourneys(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::ListJourneysAsync(const ListJourneysRequest& request, const ListJourneysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListJourneys(request), context);
    } );
}

ListTagsForResourceOutcome PinpointClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable PinpointClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

ListTemplateVersionsOutcome PinpointClient::ListTemplateVersions(const ListTemplateVersionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTemplateVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTemplateVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/templates/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateName());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateType());
  endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  return ListTemplateVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTemplateVersionsOutcomeCallable PinpointClient::ListTemplateVersionsCallable(const ListTemplateVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTemplateVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTemplateVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::ListTemplateVersionsAsync(const ListTemplateVersionsRequest& request, const ListTemplateVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTemplateVersions(request), context);
    } );
}

ListTemplatesOutcome PinpointClient::ListTemplates(const ListTemplatesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTemplates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTemplates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/templates");
  return ListTemplatesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTemplatesOutcomeCallable PinpointClient::ListTemplatesCallable(const ListTemplatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTemplatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTemplates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::ListTemplatesAsync(const ListTemplatesRequest& request, const ListTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTemplates(request), context);
    } );
}

PhoneNumberValidateOutcome PinpointClient::PhoneNumberValidate(const PhoneNumberValidateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PhoneNumberValidate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PhoneNumberValidate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/phone/number/validate");
  return PhoneNumberValidateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PhoneNumberValidateOutcomeCallable PinpointClient::PhoneNumberValidateCallable(const PhoneNumberValidateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PhoneNumberValidateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PhoneNumberValidate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::PhoneNumberValidateAsync(const PhoneNumberValidateRequest& request, const PhoneNumberValidateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PhoneNumberValidate(request), context);
    } );
}

PutEventStreamOutcome PinpointClient::PutEventStream(const PutEventStreamRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutEventStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutEventStream", "Required field: ApplicationId, is not set");
    return PutEventStreamOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutEventStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/eventstream");
  return PutEventStreamOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutEventStreamOutcomeCallable PinpointClient::PutEventStreamCallable(const PutEventStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutEventStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutEventStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::PutEventStreamAsync(const PutEventStreamRequest& request, const PutEventStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutEventStream(request), context);
    } );
}

PutEventsOutcome PinpointClient::PutEvents(const PutEventsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutEvents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutEvents", "Required field: ApplicationId, is not set");
    return PutEventsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutEvents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/events");
  return PutEventsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutEventsOutcomeCallable PinpointClient::PutEventsCallable(const PutEventsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutEventsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutEvents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::PutEventsAsync(const PutEventsRequest& request, const PutEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutEvents(request), context);
    } );
}

RemoveAttributesOutcome PinpointClient::RemoveAttributes(const RemoveAttributesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RemoveAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RemoveAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/attributes/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAttributeType());
  return RemoveAttributesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

RemoveAttributesOutcomeCallable PinpointClient::RemoveAttributesCallable(const RemoveAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::RemoveAttributesAsync(const RemoveAttributesRequest& request, const RemoveAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RemoveAttributes(request), context);
    } );
}

SendMessagesOutcome PinpointClient::SendMessages(const SendMessagesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SendMessages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SendMessages", "Required field: ApplicationId, is not set");
    return SendMessagesOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SendMessages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/messages");
  return SendMessagesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SendMessagesOutcomeCallable PinpointClient::SendMessagesCallable(const SendMessagesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SendMessagesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SendMessages(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::SendMessagesAsync(const SendMessagesRequest& request, const SendMessagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SendMessages(request), context);
    } );
}

SendOTPMessageOutcome PinpointClient::SendOTPMessage(const SendOTPMessageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SendOTPMessage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SendOTPMessage", "Required field: ApplicationId, is not set");
    return SendOTPMessageOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SendOTPMessage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/otp");
  return SendOTPMessageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SendOTPMessageOutcomeCallable PinpointClient::SendOTPMessageCallable(const SendOTPMessageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SendOTPMessageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SendOTPMessage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::SendOTPMessageAsync(const SendOTPMessageRequest& request, const SendOTPMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SendOTPMessage(request), context);
    } );
}

SendUsersMessagesOutcome PinpointClient::SendUsersMessages(const SendUsersMessagesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SendUsersMessages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SendUsersMessages", "Required field: ApplicationId, is not set");
    return SendUsersMessagesOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SendUsersMessages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/users-messages");
  return SendUsersMessagesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SendUsersMessagesOutcomeCallable PinpointClient::SendUsersMessagesCallable(const SendUsersMessagesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SendUsersMessagesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SendUsersMessages(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::SendUsersMessagesAsync(const SendUsersMessagesRequest& request, const SendUsersMessagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SendUsersMessages(request), context);
    } );
}

TagResourceOutcome PinpointClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable PinpointClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UntagResourceOutcome PinpointClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable PinpointClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateAdmChannelOutcome PinpointClient::UpdateAdmChannel(const UpdateAdmChannelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAdmChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAdmChannel", "Required field: ApplicationId, is not set");
    return UpdateAdmChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateAdmChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channels/adm");
  return UpdateAdmChannelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateAdmChannelOutcomeCallable PinpointClient::UpdateAdmChannelCallable(const UpdateAdmChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAdmChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAdmChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::UpdateAdmChannelAsync(const UpdateAdmChannelRequest& request, const UpdateAdmChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateAdmChannel(request), context);
    } );
}

UpdateApnsChannelOutcome PinpointClient::UpdateApnsChannel(const UpdateApnsChannelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateApnsChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateApnsChannel", "Required field: ApplicationId, is not set");
    return UpdateApnsChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateApnsChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channels/apns");
  return UpdateApnsChannelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateApnsChannelOutcomeCallable PinpointClient::UpdateApnsChannelCallable(const UpdateApnsChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateApnsChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateApnsChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::UpdateApnsChannelAsync(const UpdateApnsChannelRequest& request, const UpdateApnsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateApnsChannel(request), context);
    } );
}

UpdateApnsSandboxChannelOutcome PinpointClient::UpdateApnsSandboxChannel(const UpdateApnsSandboxChannelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateApnsSandboxChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateApnsSandboxChannel", "Required field: ApplicationId, is not set");
    return UpdateApnsSandboxChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateApnsSandboxChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channels/apns_sandbox");
  return UpdateApnsSandboxChannelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateApnsSandboxChannelOutcomeCallable PinpointClient::UpdateApnsSandboxChannelCallable(const UpdateApnsSandboxChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateApnsSandboxChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateApnsSandboxChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::UpdateApnsSandboxChannelAsync(const UpdateApnsSandboxChannelRequest& request, const UpdateApnsSandboxChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateApnsSandboxChannel(request), context);
    } );
}

UpdateApnsVoipChannelOutcome PinpointClient::UpdateApnsVoipChannel(const UpdateApnsVoipChannelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateApnsVoipChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateApnsVoipChannel", "Required field: ApplicationId, is not set");
    return UpdateApnsVoipChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateApnsVoipChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channels/apns_voip");
  return UpdateApnsVoipChannelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateApnsVoipChannelOutcomeCallable PinpointClient::UpdateApnsVoipChannelCallable(const UpdateApnsVoipChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateApnsVoipChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateApnsVoipChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::UpdateApnsVoipChannelAsync(const UpdateApnsVoipChannelRequest& request, const UpdateApnsVoipChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateApnsVoipChannel(request), context);
    } );
}

UpdateApnsVoipSandboxChannelOutcome PinpointClient::UpdateApnsVoipSandboxChannel(const UpdateApnsVoipSandboxChannelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateApnsVoipSandboxChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateApnsVoipSandboxChannel", "Required field: ApplicationId, is not set");
    return UpdateApnsVoipSandboxChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateApnsVoipSandboxChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channels/apns_voip_sandbox");
  return UpdateApnsVoipSandboxChannelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateApnsVoipSandboxChannelOutcomeCallable PinpointClient::UpdateApnsVoipSandboxChannelCallable(const UpdateApnsVoipSandboxChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateApnsVoipSandboxChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateApnsVoipSandboxChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::UpdateApnsVoipSandboxChannelAsync(const UpdateApnsVoipSandboxChannelRequest& request, const UpdateApnsVoipSandboxChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateApnsVoipSandboxChannel(request), context);
    } );
}

UpdateApplicationSettingsOutcome PinpointClient::UpdateApplicationSettings(const UpdateApplicationSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateApplicationSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateApplicationSettings", "Required field: ApplicationId, is not set");
    return UpdateApplicationSettingsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateApplicationSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/settings");
  return UpdateApplicationSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateApplicationSettingsOutcomeCallable PinpointClient::UpdateApplicationSettingsCallable(const UpdateApplicationSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateApplicationSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateApplicationSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::UpdateApplicationSettingsAsync(const UpdateApplicationSettingsRequest& request, const UpdateApplicationSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateApplicationSettings(request), context);
    } );
}

UpdateBaiduChannelOutcome PinpointClient::UpdateBaiduChannel(const UpdateBaiduChannelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateBaiduChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateBaiduChannel", "Required field: ApplicationId, is not set");
    return UpdateBaiduChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateBaiduChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channels/baidu");
  return UpdateBaiduChannelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateBaiduChannelOutcomeCallable PinpointClient::UpdateBaiduChannelCallable(const UpdateBaiduChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateBaiduChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateBaiduChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::UpdateBaiduChannelAsync(const UpdateBaiduChannelRequest& request, const UpdateBaiduChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateBaiduChannel(request), context);
    } );
}

UpdateCampaignOutcome PinpointClient::UpdateCampaign(const UpdateCampaignRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateCampaign, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateCampaign, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/campaigns/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCampaignId());
  return UpdateCampaignOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateCampaignOutcomeCallable PinpointClient::UpdateCampaignCallable(const UpdateCampaignRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateCampaignOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateCampaign(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::UpdateCampaignAsync(const UpdateCampaignRequest& request, const UpdateCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateCampaign(request), context);
    } );
}

UpdateEmailChannelOutcome PinpointClient::UpdateEmailChannel(const UpdateEmailChannelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateEmailChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateEmailChannel", "Required field: ApplicationId, is not set");
    return UpdateEmailChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateEmailChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channels/email");
  return UpdateEmailChannelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateEmailChannelOutcomeCallable PinpointClient::UpdateEmailChannelCallable(const UpdateEmailChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateEmailChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateEmailChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::UpdateEmailChannelAsync(const UpdateEmailChannelRequest& request, const UpdateEmailChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateEmailChannel(request), context);
    } );
}

UpdateEmailTemplateOutcome PinpointClient::UpdateEmailTemplate(const UpdateEmailTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateEmailTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TemplateNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateEmailTemplate", "Required field: TemplateName, is not set");
    return UpdateEmailTemplateOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateEmailTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/templates/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/email");
  return UpdateEmailTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateEmailTemplateOutcomeCallable PinpointClient::UpdateEmailTemplateCallable(const UpdateEmailTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateEmailTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateEmailTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::UpdateEmailTemplateAsync(const UpdateEmailTemplateRequest& request, const UpdateEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateEmailTemplate(request), context);
    } );
}

UpdateEndpointOutcome PinpointClient::UpdateEndpoint(const UpdateEndpointRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/endpoints/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEndpointId());
  return UpdateEndpointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateEndpointOutcomeCallable PinpointClient::UpdateEndpointCallable(const UpdateEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::UpdateEndpointAsync(const UpdateEndpointRequest& request, const UpdateEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateEndpoint(request), context);
    } );
}

UpdateEndpointsBatchOutcome PinpointClient::UpdateEndpointsBatch(const UpdateEndpointsBatchRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateEndpointsBatch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateEndpointsBatch", "Required field: ApplicationId, is not set");
    return UpdateEndpointsBatchOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateEndpointsBatch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/endpoints");
  return UpdateEndpointsBatchOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateEndpointsBatchOutcomeCallable PinpointClient::UpdateEndpointsBatchCallable(const UpdateEndpointsBatchRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateEndpointsBatchOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateEndpointsBatch(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::UpdateEndpointsBatchAsync(const UpdateEndpointsBatchRequest& request, const UpdateEndpointsBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateEndpointsBatch(request), context);
    } );
}

UpdateGcmChannelOutcome PinpointClient::UpdateGcmChannel(const UpdateGcmChannelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateGcmChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateGcmChannel", "Required field: ApplicationId, is not set");
    return UpdateGcmChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateGcmChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channels/gcm");
  return UpdateGcmChannelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateGcmChannelOutcomeCallable PinpointClient::UpdateGcmChannelCallable(const UpdateGcmChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateGcmChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateGcmChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::UpdateGcmChannelAsync(const UpdateGcmChannelRequest& request, const UpdateGcmChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateGcmChannel(request), context);
    } );
}

UpdateInAppTemplateOutcome PinpointClient::UpdateInAppTemplate(const UpdateInAppTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateInAppTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TemplateNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateInAppTemplate", "Required field: TemplateName, is not set");
    return UpdateInAppTemplateOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateInAppTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/templates/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/inapp");
  return UpdateInAppTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateInAppTemplateOutcomeCallable PinpointClient::UpdateInAppTemplateCallable(const UpdateInAppTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateInAppTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateInAppTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::UpdateInAppTemplateAsync(const UpdateInAppTemplateRequest& request, const UpdateInAppTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateInAppTemplate(request), context);
    } );
}

UpdateJourneyOutcome PinpointClient::UpdateJourney(const UpdateJourneyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateJourney, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateJourney, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/journeys/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJourneyId());
  return UpdateJourneyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateJourneyOutcomeCallable PinpointClient::UpdateJourneyCallable(const UpdateJourneyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateJourneyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateJourney(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::UpdateJourneyAsync(const UpdateJourneyRequest& request, const UpdateJourneyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateJourney(request), context);
    } );
}

UpdateJourneyStateOutcome PinpointClient::UpdateJourneyState(const UpdateJourneyStateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateJourneyState, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateJourneyState, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/journeys/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJourneyId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/state");
  return UpdateJourneyStateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateJourneyStateOutcomeCallable PinpointClient::UpdateJourneyStateCallable(const UpdateJourneyStateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateJourneyStateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateJourneyState(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::UpdateJourneyStateAsync(const UpdateJourneyStateRequest& request, const UpdateJourneyStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateJourneyState(request), context);
    } );
}

UpdatePushTemplateOutcome PinpointClient::UpdatePushTemplate(const UpdatePushTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdatePushTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TemplateNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdatePushTemplate", "Required field: TemplateName, is not set");
    return UpdatePushTemplateOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdatePushTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/templates/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/push");
  return UpdatePushTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdatePushTemplateOutcomeCallable PinpointClient::UpdatePushTemplateCallable(const UpdatePushTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePushTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePushTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::UpdatePushTemplateAsync(const UpdatePushTemplateRequest& request, const UpdatePushTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdatePushTemplate(request), context);
    } );
}

UpdateRecommenderConfigurationOutcome PinpointClient::UpdateRecommenderConfiguration(const UpdateRecommenderConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateRecommenderConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RecommenderIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRecommenderConfiguration", "Required field: RecommenderId, is not set");
    return UpdateRecommenderConfigurationOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RecommenderId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateRecommenderConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/recommenders/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRecommenderId());
  return UpdateRecommenderConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateRecommenderConfigurationOutcomeCallable PinpointClient::UpdateRecommenderConfigurationCallable(const UpdateRecommenderConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRecommenderConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRecommenderConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::UpdateRecommenderConfigurationAsync(const UpdateRecommenderConfigurationRequest& request, const UpdateRecommenderConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateRecommenderConfiguration(request), context);
    } );
}

UpdateSegmentOutcome PinpointClient::UpdateSegment(const UpdateSegmentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSegment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateSegment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/segments/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSegmentId());
  return UpdateSegmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateSegmentOutcomeCallable PinpointClient::UpdateSegmentCallable(const UpdateSegmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSegmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSegment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::UpdateSegmentAsync(const UpdateSegmentRequest& request, const UpdateSegmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateSegment(request), context);
    } );
}

UpdateSmsChannelOutcome PinpointClient::UpdateSmsChannel(const UpdateSmsChannelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSmsChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSmsChannel", "Required field: ApplicationId, is not set");
    return UpdateSmsChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateSmsChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channels/sms");
  return UpdateSmsChannelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateSmsChannelOutcomeCallable PinpointClient::UpdateSmsChannelCallable(const UpdateSmsChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSmsChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSmsChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::UpdateSmsChannelAsync(const UpdateSmsChannelRequest& request, const UpdateSmsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateSmsChannel(request), context);
    } );
}

UpdateSmsTemplateOutcome PinpointClient::UpdateSmsTemplate(const UpdateSmsTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSmsTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TemplateNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSmsTemplate", "Required field: TemplateName, is not set");
    return UpdateSmsTemplateOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateSmsTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/templates/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sms");
  return UpdateSmsTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateSmsTemplateOutcomeCallable PinpointClient::UpdateSmsTemplateCallable(const UpdateSmsTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSmsTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSmsTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::UpdateSmsTemplateAsync(const UpdateSmsTemplateRequest& request, const UpdateSmsTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateSmsTemplate(request), context);
    } );
}

UpdateTemplateActiveVersionOutcome PinpointClient::UpdateTemplateActiveVersion(const UpdateTemplateActiveVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateTemplateActiveVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateTemplateActiveVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/templates/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateName());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateType());
  endpointResolutionOutcome.GetResult().AddPathSegments("/active-version");
  return UpdateTemplateActiveVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateTemplateActiveVersionOutcomeCallable PinpointClient::UpdateTemplateActiveVersionCallable(const UpdateTemplateActiveVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateTemplateActiveVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateTemplateActiveVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::UpdateTemplateActiveVersionAsync(const UpdateTemplateActiveVersionRequest& request, const UpdateTemplateActiveVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateTemplateActiveVersion(request), context);
    } );
}

UpdateVoiceChannelOutcome PinpointClient::UpdateVoiceChannel(const UpdateVoiceChannelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateVoiceChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateVoiceChannel", "Required field: ApplicationId, is not set");
    return UpdateVoiceChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateVoiceChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channels/voice");
  return UpdateVoiceChannelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateVoiceChannelOutcomeCallable PinpointClient::UpdateVoiceChannelCallable(const UpdateVoiceChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateVoiceChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateVoiceChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::UpdateVoiceChannelAsync(const UpdateVoiceChannelRequest& request, const UpdateVoiceChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateVoiceChannel(request), context);
    } );
}

UpdateVoiceTemplateOutcome PinpointClient::UpdateVoiceTemplate(const UpdateVoiceTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateVoiceTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TemplateNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateVoiceTemplate", "Required field: TemplateName, is not set");
    return UpdateVoiceTemplateOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateVoiceTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/templates/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice");
  return UpdateVoiceTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateVoiceTemplateOutcomeCallable PinpointClient::UpdateVoiceTemplateCallable(const UpdateVoiceTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateVoiceTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateVoiceTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::UpdateVoiceTemplateAsync(const UpdateVoiceTemplateRequest& request, const UpdateVoiceTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateVoiceTemplate(request), context);
    } );
}

VerifyOTPMessageOutcome PinpointClient::VerifyOTPMessage(const VerifyOTPMessageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, VerifyOTPMessage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("VerifyOTPMessage", "Required field: ApplicationId, is not set");
    return VerifyOTPMessageOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, VerifyOTPMessage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/verify-otp");
  return VerifyOTPMessageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

VerifyOTPMessageOutcomeCallable PinpointClient::VerifyOTPMessageCallable(const VerifyOTPMessageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< VerifyOTPMessageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->VerifyOTPMessage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::VerifyOTPMessageAsync(const VerifyOTPMessageRequest& request, const VerifyOTPMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, VerifyOTPMessage(request), context);
    } );
}

