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

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/PinpointErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pinpoint/model/CreateAppResult.h>
#include <aws/pinpoint/model/CreateCampaignResult.h>
#include <aws/pinpoint/model/CreateExportJobResult.h>
#include <aws/pinpoint/model/CreateImportJobResult.h>
#include <aws/pinpoint/model/CreateSegmentResult.h>
#include <aws/pinpoint/model/DeleteAdmChannelResult.h>
#include <aws/pinpoint/model/DeleteApnsChannelResult.h>
#include <aws/pinpoint/model/DeleteApnsSandboxChannelResult.h>
#include <aws/pinpoint/model/DeleteApnsVoipChannelResult.h>
#include <aws/pinpoint/model/DeleteApnsVoipSandboxChannelResult.h>
#include <aws/pinpoint/model/DeleteAppResult.h>
#include <aws/pinpoint/model/DeleteBaiduChannelResult.h>
#include <aws/pinpoint/model/DeleteCampaignResult.h>
#include <aws/pinpoint/model/DeleteEmailChannelResult.h>
#include <aws/pinpoint/model/DeleteEndpointResult.h>
#include <aws/pinpoint/model/DeleteEventStreamResult.h>
#include <aws/pinpoint/model/DeleteGcmChannelResult.h>
#include <aws/pinpoint/model/DeleteSegmentResult.h>
#include <aws/pinpoint/model/DeleteSmsChannelResult.h>
#include <aws/pinpoint/model/DeleteUserEndpointsResult.h>
#include <aws/pinpoint/model/DeleteVoiceChannelResult.h>
#include <aws/pinpoint/model/GetAdmChannelResult.h>
#include <aws/pinpoint/model/GetApnsChannelResult.h>
#include <aws/pinpoint/model/GetApnsSandboxChannelResult.h>
#include <aws/pinpoint/model/GetApnsVoipChannelResult.h>
#include <aws/pinpoint/model/GetApnsVoipSandboxChannelResult.h>
#include <aws/pinpoint/model/GetAppResult.h>
#include <aws/pinpoint/model/GetApplicationSettingsResult.h>
#include <aws/pinpoint/model/GetAppsResult.h>
#include <aws/pinpoint/model/GetBaiduChannelResult.h>
#include <aws/pinpoint/model/GetCampaignResult.h>
#include <aws/pinpoint/model/GetCampaignActivitiesResult.h>
#include <aws/pinpoint/model/GetCampaignVersionResult.h>
#include <aws/pinpoint/model/GetCampaignVersionsResult.h>
#include <aws/pinpoint/model/GetCampaignsResult.h>
#include <aws/pinpoint/model/GetChannelsResult.h>
#include <aws/pinpoint/model/GetEmailChannelResult.h>
#include <aws/pinpoint/model/GetEndpointResult.h>
#include <aws/pinpoint/model/GetEventStreamResult.h>
#include <aws/pinpoint/model/GetExportJobResult.h>
#include <aws/pinpoint/model/GetExportJobsResult.h>
#include <aws/pinpoint/model/GetGcmChannelResult.h>
#include <aws/pinpoint/model/GetImportJobResult.h>
#include <aws/pinpoint/model/GetImportJobsResult.h>
#include <aws/pinpoint/model/GetSegmentResult.h>
#include <aws/pinpoint/model/GetSegmentExportJobsResult.h>
#include <aws/pinpoint/model/GetSegmentImportJobsResult.h>
#include <aws/pinpoint/model/GetSegmentVersionResult.h>
#include <aws/pinpoint/model/GetSegmentVersionsResult.h>
#include <aws/pinpoint/model/GetSegmentsResult.h>
#include <aws/pinpoint/model/GetSmsChannelResult.h>
#include <aws/pinpoint/model/GetUserEndpointsResult.h>
#include <aws/pinpoint/model/GetVoiceChannelResult.h>
#include <aws/pinpoint/model/ListTagsForResourceResult.h>
#include <aws/pinpoint/model/PhoneNumberValidateResult.h>
#include <aws/pinpoint/model/PutEventStreamResult.h>
#include <aws/pinpoint/model/PutEventsResult.h>
#include <aws/pinpoint/model/RemoveAttributesResult.h>
#include <aws/pinpoint/model/SendMessagesResult.h>
#include <aws/pinpoint/model/SendUsersMessagesResult.h>
#include <aws/pinpoint/model/UpdateAdmChannelResult.h>
#include <aws/pinpoint/model/UpdateApnsChannelResult.h>
#include <aws/pinpoint/model/UpdateApnsSandboxChannelResult.h>
#include <aws/pinpoint/model/UpdateApnsVoipChannelResult.h>
#include <aws/pinpoint/model/UpdateApnsVoipSandboxChannelResult.h>
#include <aws/pinpoint/model/UpdateApplicationSettingsResult.h>
#include <aws/pinpoint/model/UpdateBaiduChannelResult.h>
#include <aws/pinpoint/model/UpdateCampaignResult.h>
#include <aws/pinpoint/model/UpdateEmailChannelResult.h>
#include <aws/pinpoint/model/UpdateEndpointResult.h>
#include <aws/pinpoint/model/UpdateEndpointsBatchResult.h>
#include <aws/pinpoint/model/UpdateGcmChannelResult.h>
#include <aws/pinpoint/model/UpdateSegmentResult.h>
#include <aws/pinpoint/model/UpdateSmsChannelResult.h>
#include <aws/pinpoint/model/UpdateVoiceChannelResult.h>
#include <aws/core/NoResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;
namespace Threading
{
  class Executor;
} // namespace Threading
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace Pinpoint
{

namespace Model
{
        class CreateAppRequest;
        class CreateCampaignRequest;
        class CreateExportJobRequest;
        class CreateImportJobRequest;
        class CreateSegmentRequest;
        class DeleteAdmChannelRequest;
        class DeleteApnsChannelRequest;
        class DeleteApnsSandboxChannelRequest;
        class DeleteApnsVoipChannelRequest;
        class DeleteApnsVoipSandboxChannelRequest;
        class DeleteAppRequest;
        class DeleteBaiduChannelRequest;
        class DeleteCampaignRequest;
        class DeleteEmailChannelRequest;
        class DeleteEndpointRequest;
        class DeleteEventStreamRequest;
        class DeleteGcmChannelRequest;
        class DeleteSegmentRequest;
        class DeleteSmsChannelRequest;
        class DeleteUserEndpointsRequest;
        class DeleteVoiceChannelRequest;
        class GetAdmChannelRequest;
        class GetApnsChannelRequest;
        class GetApnsSandboxChannelRequest;
        class GetApnsVoipChannelRequest;
        class GetApnsVoipSandboxChannelRequest;
        class GetAppRequest;
        class GetApplicationSettingsRequest;
        class GetAppsRequest;
        class GetBaiduChannelRequest;
        class GetCampaignRequest;
        class GetCampaignActivitiesRequest;
        class GetCampaignVersionRequest;
        class GetCampaignVersionsRequest;
        class GetCampaignsRequest;
        class GetChannelsRequest;
        class GetEmailChannelRequest;
        class GetEndpointRequest;
        class GetEventStreamRequest;
        class GetExportJobRequest;
        class GetExportJobsRequest;
        class GetGcmChannelRequest;
        class GetImportJobRequest;
        class GetImportJobsRequest;
        class GetSegmentRequest;
        class GetSegmentExportJobsRequest;
        class GetSegmentImportJobsRequest;
        class GetSegmentVersionRequest;
        class GetSegmentVersionsRequest;
        class GetSegmentsRequest;
        class GetSmsChannelRequest;
        class GetUserEndpointsRequest;
        class GetVoiceChannelRequest;
        class ListTagsForResourceRequest;
        class PhoneNumberValidateRequest;
        class PutEventStreamRequest;
        class PutEventsRequest;
        class RemoveAttributesRequest;
        class SendMessagesRequest;
        class SendUsersMessagesRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateAdmChannelRequest;
        class UpdateApnsChannelRequest;
        class UpdateApnsSandboxChannelRequest;
        class UpdateApnsVoipChannelRequest;
        class UpdateApnsVoipSandboxChannelRequest;
        class UpdateApplicationSettingsRequest;
        class UpdateBaiduChannelRequest;
        class UpdateCampaignRequest;
        class UpdateEmailChannelRequest;
        class UpdateEndpointRequest;
        class UpdateEndpointsBatchRequest;
        class UpdateGcmChannelRequest;
        class UpdateSegmentRequest;
        class UpdateSmsChannelRequest;
        class UpdateVoiceChannelRequest;

        typedef Aws::Utils::Outcome<CreateAppResult, Aws::Client::AWSError<PinpointErrors>> CreateAppOutcome;
        typedef Aws::Utils::Outcome<CreateCampaignResult, Aws::Client::AWSError<PinpointErrors>> CreateCampaignOutcome;
        typedef Aws::Utils::Outcome<CreateExportJobResult, Aws::Client::AWSError<PinpointErrors>> CreateExportJobOutcome;
        typedef Aws::Utils::Outcome<CreateImportJobResult, Aws::Client::AWSError<PinpointErrors>> CreateImportJobOutcome;
        typedef Aws::Utils::Outcome<CreateSegmentResult, Aws::Client::AWSError<PinpointErrors>> CreateSegmentOutcome;
        typedef Aws::Utils::Outcome<DeleteAdmChannelResult, Aws::Client::AWSError<PinpointErrors>> DeleteAdmChannelOutcome;
        typedef Aws::Utils::Outcome<DeleteApnsChannelResult, Aws::Client::AWSError<PinpointErrors>> DeleteApnsChannelOutcome;
        typedef Aws::Utils::Outcome<DeleteApnsSandboxChannelResult, Aws::Client::AWSError<PinpointErrors>> DeleteApnsSandboxChannelOutcome;
        typedef Aws::Utils::Outcome<DeleteApnsVoipChannelResult, Aws::Client::AWSError<PinpointErrors>> DeleteApnsVoipChannelOutcome;
        typedef Aws::Utils::Outcome<DeleteApnsVoipSandboxChannelResult, Aws::Client::AWSError<PinpointErrors>> DeleteApnsVoipSandboxChannelOutcome;
        typedef Aws::Utils::Outcome<DeleteAppResult, Aws::Client::AWSError<PinpointErrors>> DeleteAppOutcome;
        typedef Aws::Utils::Outcome<DeleteBaiduChannelResult, Aws::Client::AWSError<PinpointErrors>> DeleteBaiduChannelOutcome;
        typedef Aws::Utils::Outcome<DeleteCampaignResult, Aws::Client::AWSError<PinpointErrors>> DeleteCampaignOutcome;
        typedef Aws::Utils::Outcome<DeleteEmailChannelResult, Aws::Client::AWSError<PinpointErrors>> DeleteEmailChannelOutcome;
        typedef Aws::Utils::Outcome<DeleteEndpointResult, Aws::Client::AWSError<PinpointErrors>> DeleteEndpointOutcome;
        typedef Aws::Utils::Outcome<DeleteEventStreamResult, Aws::Client::AWSError<PinpointErrors>> DeleteEventStreamOutcome;
        typedef Aws::Utils::Outcome<DeleteGcmChannelResult, Aws::Client::AWSError<PinpointErrors>> DeleteGcmChannelOutcome;
        typedef Aws::Utils::Outcome<DeleteSegmentResult, Aws::Client::AWSError<PinpointErrors>> DeleteSegmentOutcome;
        typedef Aws::Utils::Outcome<DeleteSmsChannelResult, Aws::Client::AWSError<PinpointErrors>> DeleteSmsChannelOutcome;
        typedef Aws::Utils::Outcome<DeleteUserEndpointsResult, Aws::Client::AWSError<PinpointErrors>> DeleteUserEndpointsOutcome;
        typedef Aws::Utils::Outcome<DeleteVoiceChannelResult, Aws::Client::AWSError<PinpointErrors>> DeleteVoiceChannelOutcome;
        typedef Aws::Utils::Outcome<GetAdmChannelResult, Aws::Client::AWSError<PinpointErrors>> GetAdmChannelOutcome;
        typedef Aws::Utils::Outcome<GetApnsChannelResult, Aws::Client::AWSError<PinpointErrors>> GetApnsChannelOutcome;
        typedef Aws::Utils::Outcome<GetApnsSandboxChannelResult, Aws::Client::AWSError<PinpointErrors>> GetApnsSandboxChannelOutcome;
        typedef Aws::Utils::Outcome<GetApnsVoipChannelResult, Aws::Client::AWSError<PinpointErrors>> GetApnsVoipChannelOutcome;
        typedef Aws::Utils::Outcome<GetApnsVoipSandboxChannelResult, Aws::Client::AWSError<PinpointErrors>> GetApnsVoipSandboxChannelOutcome;
        typedef Aws::Utils::Outcome<GetAppResult, Aws::Client::AWSError<PinpointErrors>> GetAppOutcome;
        typedef Aws::Utils::Outcome<GetApplicationSettingsResult, Aws::Client::AWSError<PinpointErrors>> GetApplicationSettingsOutcome;
        typedef Aws::Utils::Outcome<GetAppsResult, Aws::Client::AWSError<PinpointErrors>> GetAppsOutcome;
        typedef Aws::Utils::Outcome<GetBaiduChannelResult, Aws::Client::AWSError<PinpointErrors>> GetBaiduChannelOutcome;
        typedef Aws::Utils::Outcome<GetCampaignResult, Aws::Client::AWSError<PinpointErrors>> GetCampaignOutcome;
        typedef Aws::Utils::Outcome<GetCampaignActivitiesResult, Aws::Client::AWSError<PinpointErrors>> GetCampaignActivitiesOutcome;
        typedef Aws::Utils::Outcome<GetCampaignVersionResult, Aws::Client::AWSError<PinpointErrors>> GetCampaignVersionOutcome;
        typedef Aws::Utils::Outcome<GetCampaignVersionsResult, Aws::Client::AWSError<PinpointErrors>> GetCampaignVersionsOutcome;
        typedef Aws::Utils::Outcome<GetCampaignsResult, Aws::Client::AWSError<PinpointErrors>> GetCampaignsOutcome;
        typedef Aws::Utils::Outcome<GetChannelsResult, Aws::Client::AWSError<PinpointErrors>> GetChannelsOutcome;
        typedef Aws::Utils::Outcome<GetEmailChannelResult, Aws::Client::AWSError<PinpointErrors>> GetEmailChannelOutcome;
        typedef Aws::Utils::Outcome<GetEndpointResult, Aws::Client::AWSError<PinpointErrors>> GetEndpointOutcome;
        typedef Aws::Utils::Outcome<GetEventStreamResult, Aws::Client::AWSError<PinpointErrors>> GetEventStreamOutcome;
        typedef Aws::Utils::Outcome<GetExportJobResult, Aws::Client::AWSError<PinpointErrors>> GetExportJobOutcome;
        typedef Aws::Utils::Outcome<GetExportJobsResult, Aws::Client::AWSError<PinpointErrors>> GetExportJobsOutcome;
        typedef Aws::Utils::Outcome<GetGcmChannelResult, Aws::Client::AWSError<PinpointErrors>> GetGcmChannelOutcome;
        typedef Aws::Utils::Outcome<GetImportJobResult, Aws::Client::AWSError<PinpointErrors>> GetImportJobOutcome;
        typedef Aws::Utils::Outcome<GetImportJobsResult, Aws::Client::AWSError<PinpointErrors>> GetImportJobsOutcome;
        typedef Aws::Utils::Outcome<GetSegmentResult, Aws::Client::AWSError<PinpointErrors>> GetSegmentOutcome;
        typedef Aws::Utils::Outcome<GetSegmentExportJobsResult, Aws::Client::AWSError<PinpointErrors>> GetSegmentExportJobsOutcome;
        typedef Aws::Utils::Outcome<GetSegmentImportJobsResult, Aws::Client::AWSError<PinpointErrors>> GetSegmentImportJobsOutcome;
        typedef Aws::Utils::Outcome<GetSegmentVersionResult, Aws::Client::AWSError<PinpointErrors>> GetSegmentVersionOutcome;
        typedef Aws::Utils::Outcome<GetSegmentVersionsResult, Aws::Client::AWSError<PinpointErrors>> GetSegmentVersionsOutcome;
        typedef Aws::Utils::Outcome<GetSegmentsResult, Aws::Client::AWSError<PinpointErrors>> GetSegmentsOutcome;
        typedef Aws::Utils::Outcome<GetSmsChannelResult, Aws::Client::AWSError<PinpointErrors>> GetSmsChannelOutcome;
        typedef Aws::Utils::Outcome<GetUserEndpointsResult, Aws::Client::AWSError<PinpointErrors>> GetUserEndpointsOutcome;
        typedef Aws::Utils::Outcome<GetVoiceChannelResult, Aws::Client::AWSError<PinpointErrors>> GetVoiceChannelOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, Aws::Client::AWSError<PinpointErrors>> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<PhoneNumberValidateResult, Aws::Client::AWSError<PinpointErrors>> PhoneNumberValidateOutcome;
        typedef Aws::Utils::Outcome<PutEventStreamResult, Aws::Client::AWSError<PinpointErrors>> PutEventStreamOutcome;
        typedef Aws::Utils::Outcome<PutEventsResult, Aws::Client::AWSError<PinpointErrors>> PutEventsOutcome;
        typedef Aws::Utils::Outcome<RemoveAttributesResult, Aws::Client::AWSError<PinpointErrors>> RemoveAttributesOutcome;
        typedef Aws::Utils::Outcome<SendMessagesResult, Aws::Client::AWSError<PinpointErrors>> SendMessagesOutcome;
        typedef Aws::Utils::Outcome<SendUsersMessagesResult, Aws::Client::AWSError<PinpointErrors>> SendUsersMessagesOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<PinpointErrors>> TagResourceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<PinpointErrors>> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateAdmChannelResult, Aws::Client::AWSError<PinpointErrors>> UpdateAdmChannelOutcome;
        typedef Aws::Utils::Outcome<UpdateApnsChannelResult, Aws::Client::AWSError<PinpointErrors>> UpdateApnsChannelOutcome;
        typedef Aws::Utils::Outcome<UpdateApnsSandboxChannelResult, Aws::Client::AWSError<PinpointErrors>> UpdateApnsSandboxChannelOutcome;
        typedef Aws::Utils::Outcome<UpdateApnsVoipChannelResult, Aws::Client::AWSError<PinpointErrors>> UpdateApnsVoipChannelOutcome;
        typedef Aws::Utils::Outcome<UpdateApnsVoipSandboxChannelResult, Aws::Client::AWSError<PinpointErrors>> UpdateApnsVoipSandboxChannelOutcome;
        typedef Aws::Utils::Outcome<UpdateApplicationSettingsResult, Aws::Client::AWSError<PinpointErrors>> UpdateApplicationSettingsOutcome;
        typedef Aws::Utils::Outcome<UpdateBaiduChannelResult, Aws::Client::AWSError<PinpointErrors>> UpdateBaiduChannelOutcome;
        typedef Aws::Utils::Outcome<UpdateCampaignResult, Aws::Client::AWSError<PinpointErrors>> UpdateCampaignOutcome;
        typedef Aws::Utils::Outcome<UpdateEmailChannelResult, Aws::Client::AWSError<PinpointErrors>> UpdateEmailChannelOutcome;
        typedef Aws::Utils::Outcome<UpdateEndpointResult, Aws::Client::AWSError<PinpointErrors>> UpdateEndpointOutcome;
        typedef Aws::Utils::Outcome<UpdateEndpointsBatchResult, Aws::Client::AWSError<PinpointErrors>> UpdateEndpointsBatchOutcome;
        typedef Aws::Utils::Outcome<UpdateGcmChannelResult, Aws::Client::AWSError<PinpointErrors>> UpdateGcmChannelOutcome;
        typedef Aws::Utils::Outcome<UpdateSegmentResult, Aws::Client::AWSError<PinpointErrors>> UpdateSegmentOutcome;
        typedef Aws::Utils::Outcome<UpdateSmsChannelResult, Aws::Client::AWSError<PinpointErrors>> UpdateSmsChannelOutcome;
        typedef Aws::Utils::Outcome<UpdateVoiceChannelResult, Aws::Client::AWSError<PinpointErrors>> UpdateVoiceChannelOutcome;

        typedef std::future<CreateAppOutcome> CreateAppOutcomeCallable;
        typedef std::future<CreateCampaignOutcome> CreateCampaignOutcomeCallable;
        typedef std::future<CreateExportJobOutcome> CreateExportJobOutcomeCallable;
        typedef std::future<CreateImportJobOutcome> CreateImportJobOutcomeCallable;
        typedef std::future<CreateSegmentOutcome> CreateSegmentOutcomeCallable;
        typedef std::future<DeleteAdmChannelOutcome> DeleteAdmChannelOutcomeCallable;
        typedef std::future<DeleteApnsChannelOutcome> DeleteApnsChannelOutcomeCallable;
        typedef std::future<DeleteApnsSandboxChannelOutcome> DeleteApnsSandboxChannelOutcomeCallable;
        typedef std::future<DeleteApnsVoipChannelOutcome> DeleteApnsVoipChannelOutcomeCallable;
        typedef std::future<DeleteApnsVoipSandboxChannelOutcome> DeleteApnsVoipSandboxChannelOutcomeCallable;
        typedef std::future<DeleteAppOutcome> DeleteAppOutcomeCallable;
        typedef std::future<DeleteBaiduChannelOutcome> DeleteBaiduChannelOutcomeCallable;
        typedef std::future<DeleteCampaignOutcome> DeleteCampaignOutcomeCallable;
        typedef std::future<DeleteEmailChannelOutcome> DeleteEmailChannelOutcomeCallable;
        typedef std::future<DeleteEndpointOutcome> DeleteEndpointOutcomeCallable;
        typedef std::future<DeleteEventStreamOutcome> DeleteEventStreamOutcomeCallable;
        typedef std::future<DeleteGcmChannelOutcome> DeleteGcmChannelOutcomeCallable;
        typedef std::future<DeleteSegmentOutcome> DeleteSegmentOutcomeCallable;
        typedef std::future<DeleteSmsChannelOutcome> DeleteSmsChannelOutcomeCallable;
        typedef std::future<DeleteUserEndpointsOutcome> DeleteUserEndpointsOutcomeCallable;
        typedef std::future<DeleteVoiceChannelOutcome> DeleteVoiceChannelOutcomeCallable;
        typedef std::future<GetAdmChannelOutcome> GetAdmChannelOutcomeCallable;
        typedef std::future<GetApnsChannelOutcome> GetApnsChannelOutcomeCallable;
        typedef std::future<GetApnsSandboxChannelOutcome> GetApnsSandboxChannelOutcomeCallable;
        typedef std::future<GetApnsVoipChannelOutcome> GetApnsVoipChannelOutcomeCallable;
        typedef std::future<GetApnsVoipSandboxChannelOutcome> GetApnsVoipSandboxChannelOutcomeCallable;
        typedef std::future<GetAppOutcome> GetAppOutcomeCallable;
        typedef std::future<GetApplicationSettingsOutcome> GetApplicationSettingsOutcomeCallable;
        typedef std::future<GetAppsOutcome> GetAppsOutcomeCallable;
        typedef std::future<GetBaiduChannelOutcome> GetBaiduChannelOutcomeCallable;
        typedef std::future<GetCampaignOutcome> GetCampaignOutcomeCallable;
        typedef std::future<GetCampaignActivitiesOutcome> GetCampaignActivitiesOutcomeCallable;
        typedef std::future<GetCampaignVersionOutcome> GetCampaignVersionOutcomeCallable;
        typedef std::future<GetCampaignVersionsOutcome> GetCampaignVersionsOutcomeCallable;
        typedef std::future<GetCampaignsOutcome> GetCampaignsOutcomeCallable;
        typedef std::future<GetChannelsOutcome> GetChannelsOutcomeCallable;
        typedef std::future<GetEmailChannelOutcome> GetEmailChannelOutcomeCallable;
        typedef std::future<GetEndpointOutcome> GetEndpointOutcomeCallable;
        typedef std::future<GetEventStreamOutcome> GetEventStreamOutcomeCallable;
        typedef std::future<GetExportJobOutcome> GetExportJobOutcomeCallable;
        typedef std::future<GetExportJobsOutcome> GetExportJobsOutcomeCallable;
        typedef std::future<GetGcmChannelOutcome> GetGcmChannelOutcomeCallable;
        typedef std::future<GetImportJobOutcome> GetImportJobOutcomeCallable;
        typedef std::future<GetImportJobsOutcome> GetImportJobsOutcomeCallable;
        typedef std::future<GetSegmentOutcome> GetSegmentOutcomeCallable;
        typedef std::future<GetSegmentExportJobsOutcome> GetSegmentExportJobsOutcomeCallable;
        typedef std::future<GetSegmentImportJobsOutcome> GetSegmentImportJobsOutcomeCallable;
        typedef std::future<GetSegmentVersionOutcome> GetSegmentVersionOutcomeCallable;
        typedef std::future<GetSegmentVersionsOutcome> GetSegmentVersionsOutcomeCallable;
        typedef std::future<GetSegmentsOutcome> GetSegmentsOutcomeCallable;
        typedef std::future<GetSmsChannelOutcome> GetSmsChannelOutcomeCallable;
        typedef std::future<GetUserEndpointsOutcome> GetUserEndpointsOutcomeCallable;
        typedef std::future<GetVoiceChannelOutcome> GetVoiceChannelOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<PhoneNumberValidateOutcome> PhoneNumberValidateOutcomeCallable;
        typedef std::future<PutEventStreamOutcome> PutEventStreamOutcomeCallable;
        typedef std::future<PutEventsOutcome> PutEventsOutcomeCallable;
        typedef std::future<RemoveAttributesOutcome> RemoveAttributesOutcomeCallable;
        typedef std::future<SendMessagesOutcome> SendMessagesOutcomeCallable;
        typedef std::future<SendUsersMessagesOutcome> SendUsersMessagesOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateAdmChannelOutcome> UpdateAdmChannelOutcomeCallable;
        typedef std::future<UpdateApnsChannelOutcome> UpdateApnsChannelOutcomeCallable;
        typedef std::future<UpdateApnsSandboxChannelOutcome> UpdateApnsSandboxChannelOutcomeCallable;
        typedef std::future<UpdateApnsVoipChannelOutcome> UpdateApnsVoipChannelOutcomeCallable;
        typedef std::future<UpdateApnsVoipSandboxChannelOutcome> UpdateApnsVoipSandboxChannelOutcomeCallable;
        typedef std::future<UpdateApplicationSettingsOutcome> UpdateApplicationSettingsOutcomeCallable;
        typedef std::future<UpdateBaiduChannelOutcome> UpdateBaiduChannelOutcomeCallable;
        typedef std::future<UpdateCampaignOutcome> UpdateCampaignOutcomeCallable;
        typedef std::future<UpdateEmailChannelOutcome> UpdateEmailChannelOutcomeCallable;
        typedef std::future<UpdateEndpointOutcome> UpdateEndpointOutcomeCallable;
        typedef std::future<UpdateEndpointsBatchOutcome> UpdateEndpointsBatchOutcomeCallable;
        typedef std::future<UpdateGcmChannelOutcome> UpdateGcmChannelOutcomeCallable;
        typedef std::future<UpdateSegmentOutcome> UpdateSegmentOutcomeCallable;
        typedef std::future<UpdateSmsChannelOutcome> UpdateSmsChannelOutcomeCallable;
        typedef std::future<UpdateVoiceChannelOutcome> UpdateVoiceChannelOutcomeCallable;
} // namespace Model

  class PinpointClient;

    typedef std::function<void(const PinpointClient*, const Model::CreateAppRequest&, const Model::CreateAppOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAppResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::CreateCampaignRequest&, const Model::CreateCampaignOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCampaignResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::CreateExportJobRequest&, const Model::CreateExportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateExportJobResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::CreateImportJobRequest&, const Model::CreateImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateImportJobResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::CreateSegmentRequest&, const Model::CreateSegmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSegmentResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::DeleteAdmChannelRequest&, const Model::DeleteAdmChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAdmChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::DeleteApnsChannelRequest&, const Model::DeleteApnsChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApnsChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::DeleteApnsSandboxChannelRequest&, const Model::DeleteApnsSandboxChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApnsSandboxChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::DeleteApnsVoipChannelRequest&, const Model::DeleteApnsVoipChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApnsVoipChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::DeleteApnsVoipSandboxChannelRequest&, const Model::DeleteApnsVoipSandboxChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApnsVoipSandboxChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::DeleteAppRequest&, const Model::DeleteAppOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAppResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::DeleteBaiduChannelRequest&, const Model::DeleteBaiduChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBaiduChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::DeleteCampaignRequest&, const Model::DeleteCampaignOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCampaignResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::DeleteEmailChannelRequest&, const Model::DeleteEmailChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEmailChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::DeleteEndpointRequest&, const Model::DeleteEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEndpointResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::DeleteEventStreamRequest&, const Model::DeleteEventStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEventStreamResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::DeleteGcmChannelRequest&, const Model::DeleteGcmChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteGcmChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::DeleteSegmentRequest&, const Model::DeleteSegmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSegmentResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::DeleteSmsChannelRequest&, const Model::DeleteSmsChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSmsChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::DeleteUserEndpointsRequest&, const Model::DeleteUserEndpointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUserEndpointsResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::DeleteVoiceChannelRequest&, const Model::DeleteVoiceChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVoiceChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetAdmChannelRequest&, const Model::GetAdmChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAdmChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetApnsChannelRequest&, const Model::GetApnsChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetApnsChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetApnsSandboxChannelRequest&, const Model::GetApnsSandboxChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetApnsSandboxChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetApnsVoipChannelRequest&, const Model::GetApnsVoipChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetApnsVoipChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetApnsVoipSandboxChannelRequest&, const Model::GetApnsVoipSandboxChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetApnsVoipSandboxChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetAppRequest&, const Model::GetAppOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAppResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetApplicationSettingsRequest&, const Model::GetApplicationSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetApplicationSettingsResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetAppsRequest&, const Model::GetAppsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAppsResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetBaiduChannelRequest&, const Model::GetBaiduChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBaiduChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetCampaignRequest&, const Model::GetCampaignOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCampaignResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetCampaignActivitiesRequest&, const Model::GetCampaignActivitiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCampaignActivitiesResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetCampaignVersionRequest&, const Model::GetCampaignVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCampaignVersionResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetCampaignVersionsRequest&, const Model::GetCampaignVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCampaignVersionsResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetCampaignsRequest&, const Model::GetCampaignsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCampaignsResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetChannelsRequest&, const Model::GetChannelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetChannelsResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetEmailChannelRequest&, const Model::GetEmailChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEmailChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetEndpointRequest&, const Model::GetEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEndpointResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetEventStreamRequest&, const Model::GetEventStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEventStreamResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetExportJobRequest&, const Model::GetExportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetExportJobResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetExportJobsRequest&, const Model::GetExportJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetExportJobsResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetGcmChannelRequest&, const Model::GetGcmChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetGcmChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetImportJobRequest&, const Model::GetImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetImportJobResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetImportJobsRequest&, const Model::GetImportJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetImportJobsResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetSegmentRequest&, const Model::GetSegmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSegmentResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetSegmentExportJobsRequest&, const Model::GetSegmentExportJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSegmentExportJobsResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetSegmentImportJobsRequest&, const Model::GetSegmentImportJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSegmentImportJobsResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetSegmentVersionRequest&, const Model::GetSegmentVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSegmentVersionResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetSegmentVersionsRequest&, const Model::GetSegmentVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSegmentVersionsResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetSegmentsRequest&, const Model::GetSegmentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSegmentsResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetSmsChannelRequest&, const Model::GetSmsChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSmsChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetUserEndpointsRequest&, const Model::GetUserEndpointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUserEndpointsResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetVoiceChannelRequest&, const Model::GetVoiceChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetVoiceChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::PhoneNumberValidateRequest&, const Model::PhoneNumberValidateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PhoneNumberValidateResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::PutEventStreamRequest&, const Model::PutEventStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutEventStreamResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::PutEventsRequest&, const Model::PutEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutEventsResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::RemoveAttributesRequest&, const Model::RemoveAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveAttributesResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::SendMessagesRequest&, const Model::SendMessagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendMessagesResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::SendUsersMessagesRequest&, const Model::SendUsersMessagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendUsersMessagesResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::UpdateAdmChannelRequest&, const Model::UpdateAdmChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAdmChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::UpdateApnsChannelRequest&, const Model::UpdateApnsChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateApnsChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::UpdateApnsSandboxChannelRequest&, const Model::UpdateApnsSandboxChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateApnsSandboxChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::UpdateApnsVoipChannelRequest&, const Model::UpdateApnsVoipChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateApnsVoipChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::UpdateApnsVoipSandboxChannelRequest&, const Model::UpdateApnsVoipSandboxChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateApnsVoipSandboxChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::UpdateApplicationSettingsRequest&, const Model::UpdateApplicationSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateApplicationSettingsResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::UpdateBaiduChannelRequest&, const Model::UpdateBaiduChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateBaiduChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::UpdateCampaignRequest&, const Model::UpdateCampaignOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCampaignResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::UpdateEmailChannelRequest&, const Model::UpdateEmailChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEmailChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::UpdateEndpointRequest&, const Model::UpdateEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEndpointResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::UpdateEndpointsBatchRequest&, const Model::UpdateEndpointsBatchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEndpointsBatchResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::UpdateGcmChannelRequest&, const Model::UpdateGcmChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateGcmChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::UpdateSegmentRequest&, const Model::UpdateSegmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSegmentResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::UpdateSmsChannelRequest&, const Model::UpdateSmsChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSmsChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::UpdateVoiceChannelRequest&, const Model::UpdateVoiceChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateVoiceChannelResponseReceivedHandler;

  /**
   * <p>Doc Engage API - Amazon Pinpoint API</p>
   */
  class AWS_PINPOINT_API PinpointClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PinpointClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PinpointClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        PinpointClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~PinpointClient();

        inline virtual const char* GetServiceClientName() const override { return "Pinpoint"; }


        /**
         * <p>Creates an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CreateApp">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAppOutcome CreateApp(const Model::CreateAppRequest& request) const;

        /**
         * <p>Creates an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CreateApp">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAppOutcomeCallable CreateAppCallable(const Model::CreateAppRequest& request) const;

        /**
         * <p>Creates an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CreateApp">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAppAsync(const Model::CreateAppRequest& request, const CreateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new campaign for an application or updates the settings of an
         * existing campaign for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CreateCampaign">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCampaignOutcome CreateCampaign(const Model::CreateCampaignRequest& request) const;

        /**
         * <p>Creates a new campaign for an application or updates the settings of an
         * existing campaign for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CreateCampaign">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCampaignOutcomeCallable CreateCampaignCallable(const Model::CreateCampaignRequest& request) const;

        /**
         * <p>Creates a new campaign for an application or updates the settings of an
         * existing campaign for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CreateCampaign">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCampaignAsync(const Model::CreateCampaignRequest& request, const CreateCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new export job for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CreateExportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateExportJobOutcome CreateExportJob(const Model::CreateExportJobRequest& request) const;

        /**
         * <p>Creates a new export job for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CreateExportJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateExportJobOutcomeCallable CreateExportJobCallable(const Model::CreateExportJobRequest& request) const;

        /**
         * <p>Creates a new export job for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CreateExportJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateExportJobAsync(const Model::CreateExportJobRequest& request, const CreateExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new import job for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CreateImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateImportJobOutcome CreateImportJob(const Model::CreateImportJobRequest& request) const;

        /**
         * <p>Creates a new import job for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CreateImportJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateImportJobOutcomeCallable CreateImportJobCallable(const Model::CreateImportJobRequest& request) const;

        /**
         * <p>Creates a new import job for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CreateImportJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateImportJobAsync(const Model::CreateImportJobRequest& request, const CreateImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new segment for an application or updates the configuration,
         * dimension, and other settings for an existing segment that's associated with an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CreateSegment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSegmentOutcome CreateSegment(const Model::CreateSegmentRequest& request) const;

        /**
         * <p>Creates a new segment for an application or updates the configuration,
         * dimension, and other settings for an existing segment that's associated with an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CreateSegment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSegmentOutcomeCallable CreateSegmentCallable(const Model::CreateSegmentRequest& request) const;

        /**
         * <p>Creates a new segment for an application or updates the configuration,
         * dimension, and other settings for an existing segment that's associated with an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CreateSegment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSegmentAsync(const Model::CreateSegmentRequest& request, const CreateSegmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables the ADM channel for an application and deletes any existing settings
         * for the channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteAdmChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAdmChannelOutcome DeleteAdmChannel(const Model::DeleteAdmChannelRequest& request) const;

        /**
         * <p>Disables the ADM channel for an application and deletes any existing settings
         * for the channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteAdmChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAdmChannelOutcomeCallable DeleteAdmChannelCallable(const Model::DeleteAdmChannelRequest& request) const;

        /**
         * <p>Disables the ADM channel for an application and deletes any existing settings
         * for the channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteAdmChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAdmChannelAsync(const Model::DeleteAdmChannelRequest& request, const DeleteAdmChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables the APNs channel for an application and deletes any existing
         * settings for the channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteApnsChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApnsChannelOutcome DeleteApnsChannel(const Model::DeleteApnsChannelRequest& request) const;

        /**
         * <p>Disables the APNs channel for an application and deletes any existing
         * settings for the channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteApnsChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteApnsChannelOutcomeCallable DeleteApnsChannelCallable(const Model::DeleteApnsChannelRequest& request) const;

        /**
         * <p>Disables the APNs channel for an application and deletes any existing
         * settings for the channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteApnsChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteApnsChannelAsync(const Model::DeleteApnsChannelRequest& request, const DeleteApnsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables the APNs sandbox channel for an application and deletes any existing
         * settings for the channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteApnsSandboxChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApnsSandboxChannelOutcome DeleteApnsSandboxChannel(const Model::DeleteApnsSandboxChannelRequest& request) const;

        /**
         * <p>Disables the APNs sandbox channel for an application and deletes any existing
         * settings for the channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteApnsSandboxChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteApnsSandboxChannelOutcomeCallable DeleteApnsSandboxChannelCallable(const Model::DeleteApnsSandboxChannelRequest& request) const;

        /**
         * <p>Disables the APNs sandbox channel for an application and deletes any existing
         * settings for the channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteApnsSandboxChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteApnsSandboxChannelAsync(const Model::DeleteApnsSandboxChannelRequest& request, const DeleteApnsSandboxChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables the APNs VoIP channel for an application and deletes any existing
         * settings for the channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteApnsVoipChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApnsVoipChannelOutcome DeleteApnsVoipChannel(const Model::DeleteApnsVoipChannelRequest& request) const;

        /**
         * <p>Disables the APNs VoIP channel for an application and deletes any existing
         * settings for the channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteApnsVoipChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteApnsVoipChannelOutcomeCallable DeleteApnsVoipChannelCallable(const Model::DeleteApnsVoipChannelRequest& request) const;

        /**
         * <p>Disables the APNs VoIP channel for an application and deletes any existing
         * settings for the channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteApnsVoipChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteApnsVoipChannelAsync(const Model::DeleteApnsVoipChannelRequest& request, const DeleteApnsVoipChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables the APNs VoIP sandbox channel for an application and deletes any
         * existing settings for the channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteApnsVoipSandboxChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApnsVoipSandboxChannelOutcome DeleteApnsVoipSandboxChannel(const Model::DeleteApnsVoipSandboxChannelRequest& request) const;

        /**
         * <p>Disables the APNs VoIP sandbox channel for an application and deletes any
         * existing settings for the channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteApnsVoipSandboxChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteApnsVoipSandboxChannelOutcomeCallable DeleteApnsVoipSandboxChannelCallable(const Model::DeleteApnsVoipSandboxChannelRequest& request) const;

        /**
         * <p>Disables the APNs VoIP sandbox channel for an application and deletes any
         * existing settings for the channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteApnsVoipSandboxChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteApnsVoipSandboxChannelAsync(const Model::DeleteApnsVoipSandboxChannelRequest& request, const DeleteApnsVoipSandboxChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteApp">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAppOutcome DeleteApp(const Model::DeleteAppRequest& request) const;

        /**
         * <p>Deletes an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteApp">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAppOutcomeCallable DeleteAppCallable(const Model::DeleteAppRequest& request) const;

        /**
         * <p>Deletes an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteApp">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAppAsync(const Model::DeleteAppRequest& request, const DeleteAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables the Baidu channel for an application and deletes any existing
         * settings for the channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteBaiduChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBaiduChannelOutcome DeleteBaiduChannel(const Model::DeleteBaiduChannelRequest& request) const;

        /**
         * <p>Disables the Baidu channel for an application and deletes any existing
         * settings for the channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteBaiduChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBaiduChannelOutcomeCallable DeleteBaiduChannelCallable(const Model::DeleteBaiduChannelRequest& request) const;

        /**
         * <p>Disables the Baidu channel for an application and deletes any existing
         * settings for the channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteBaiduChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBaiduChannelAsync(const Model::DeleteBaiduChannelRequest& request, const DeleteBaiduChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a campaign from an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteCampaign">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCampaignOutcome DeleteCampaign(const Model::DeleteCampaignRequest& request) const;

        /**
         * <p>Deletes a campaign from an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteCampaign">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCampaignOutcomeCallable DeleteCampaignCallable(const Model::DeleteCampaignRequest& request) const;

        /**
         * <p>Deletes a campaign from an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteCampaign">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCampaignAsync(const Model::DeleteCampaignRequest& request, const DeleteCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables the email channel for an application and deletes any existing
         * settings for the channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteEmailChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEmailChannelOutcome DeleteEmailChannel(const Model::DeleteEmailChannelRequest& request) const;

        /**
         * <p>Disables the email channel for an application and deletes any existing
         * settings for the channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteEmailChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEmailChannelOutcomeCallable DeleteEmailChannelCallable(const Model::DeleteEmailChannelRequest& request) const;

        /**
         * <p>Disables the email channel for an application and deletes any existing
         * settings for the channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteEmailChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEmailChannelAsync(const Model::DeleteEmailChannelRequest& request, const DeleteEmailChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an endpoint from an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEndpointOutcome DeleteEndpoint(const Model::DeleteEndpointRequest& request) const;

        /**
         * <p>Deletes an endpoint from an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteEndpoint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEndpointOutcomeCallable DeleteEndpointCallable(const Model::DeleteEndpointRequest& request) const;

        /**
         * <p>Deletes an endpoint from an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteEndpoint">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEndpointAsync(const Model::DeleteEndpointRequest& request, const DeleteEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the event stream for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteEventStream">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEventStreamOutcome DeleteEventStream(const Model::DeleteEventStreamRequest& request) const;

        /**
         * <p>Deletes the event stream for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteEventStream">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEventStreamOutcomeCallable DeleteEventStreamCallable(const Model::DeleteEventStreamRequest& request) const;

        /**
         * <p>Deletes the event stream for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteEventStream">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEventStreamAsync(const Model::DeleteEventStreamRequest& request, const DeleteEventStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables the GCM channel for an application and deletes any existing settings
         * for the channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteGcmChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGcmChannelOutcome DeleteGcmChannel(const Model::DeleteGcmChannelRequest& request) const;

        /**
         * <p>Disables the GCM channel for an application and deletes any existing settings
         * for the channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteGcmChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteGcmChannelOutcomeCallable DeleteGcmChannelCallable(const Model::DeleteGcmChannelRequest& request) const;

        /**
         * <p>Disables the GCM channel for an application and deletes any existing settings
         * for the channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteGcmChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteGcmChannelAsync(const Model::DeleteGcmChannelRequest& request, const DeleteGcmChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a segment from an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteSegment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSegmentOutcome DeleteSegment(const Model::DeleteSegmentRequest& request) const;

        /**
         * <p>Deletes a segment from an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteSegment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSegmentOutcomeCallable DeleteSegmentCallable(const Model::DeleteSegmentRequest& request) const;

        /**
         * <p>Deletes a segment from an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteSegment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSegmentAsync(const Model::DeleteSegmentRequest& request, const DeleteSegmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables the SMS channel for an application and deletes any existing settings
         * for the channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteSmsChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSmsChannelOutcome DeleteSmsChannel(const Model::DeleteSmsChannelRequest& request) const;

        /**
         * <p>Disables the SMS channel for an application and deletes any existing settings
         * for the channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteSmsChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSmsChannelOutcomeCallable DeleteSmsChannelCallable(const Model::DeleteSmsChannelRequest& request) const;

        /**
         * <p>Disables the SMS channel for an application and deletes any existing settings
         * for the channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteSmsChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSmsChannelAsync(const Model::DeleteSmsChannelRequest& request, const DeleteSmsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes all the endpoints that are associated with a specific user
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteUserEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserEndpointsOutcome DeleteUserEndpoints(const Model::DeleteUserEndpointsRequest& request) const;

        /**
         * <p>Deletes all the endpoints that are associated with a specific user
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteUserEndpoints">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteUserEndpointsOutcomeCallable DeleteUserEndpointsCallable(const Model::DeleteUserEndpointsRequest& request) const;

        /**
         * <p>Deletes all the endpoints that are associated with a specific user
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteUserEndpoints">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUserEndpointsAsync(const Model::DeleteUserEndpointsRequest& request, const DeleteUserEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables the voice channel for an application and deletes any existing
         * settings for the channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteVoiceChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVoiceChannelOutcome DeleteVoiceChannel(const Model::DeleteVoiceChannelRequest& request) const;

        /**
         * <p>Disables the voice channel for an application and deletes any existing
         * settings for the channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteVoiceChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVoiceChannelOutcomeCallable DeleteVoiceChannelCallable(const Model::DeleteVoiceChannelRequest& request) const;

        /**
         * <p>Disables the voice channel for an application and deletes any existing
         * settings for the channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteVoiceChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVoiceChannelAsync(const Model::DeleteVoiceChannelRequest& request, const DeleteVoiceChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the status and settings of the ADM channel for an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetAdmChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAdmChannelOutcome GetAdmChannel(const Model::GetAdmChannelRequest& request) const;

        /**
         * <p>Retrieves information about the status and settings of the ADM channel for an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetAdmChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAdmChannelOutcomeCallable GetAdmChannelCallable(const Model::GetAdmChannelRequest& request) const;

        /**
         * <p>Retrieves information about the status and settings of the ADM channel for an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetAdmChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAdmChannelAsync(const Model::GetAdmChannelRequest& request, const GetAdmChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the status and settings of the APNs channel for
         * an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetApnsChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApnsChannelOutcome GetApnsChannel(const Model::GetApnsChannelRequest& request) const;

        /**
         * <p>Retrieves information about the status and settings of the APNs channel for
         * an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetApnsChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetApnsChannelOutcomeCallable GetApnsChannelCallable(const Model::GetApnsChannelRequest& request) const;

        /**
         * <p>Retrieves information about the status and settings of the APNs channel for
         * an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetApnsChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetApnsChannelAsync(const Model::GetApnsChannelRequest& request, const GetApnsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the status and settings of the APNs sandbox
         * channel for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetApnsSandboxChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApnsSandboxChannelOutcome GetApnsSandboxChannel(const Model::GetApnsSandboxChannelRequest& request) const;

        /**
         * <p>Retrieves information about the status and settings of the APNs sandbox
         * channel for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetApnsSandboxChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetApnsSandboxChannelOutcomeCallable GetApnsSandboxChannelCallable(const Model::GetApnsSandboxChannelRequest& request) const;

        /**
         * <p>Retrieves information about the status and settings of the APNs sandbox
         * channel for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetApnsSandboxChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetApnsSandboxChannelAsync(const Model::GetApnsSandboxChannelRequest& request, const GetApnsSandboxChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the status and settings of the APNs VoIP channel
         * for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetApnsVoipChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApnsVoipChannelOutcome GetApnsVoipChannel(const Model::GetApnsVoipChannelRequest& request) const;

        /**
         * <p>Retrieves information about the status and settings of the APNs VoIP channel
         * for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetApnsVoipChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetApnsVoipChannelOutcomeCallable GetApnsVoipChannelCallable(const Model::GetApnsVoipChannelRequest& request) const;

        /**
         * <p>Retrieves information about the status and settings of the APNs VoIP channel
         * for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetApnsVoipChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetApnsVoipChannelAsync(const Model::GetApnsVoipChannelRequest& request, const GetApnsVoipChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the status and settings of the APNs VoIP sandbox
         * channel for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetApnsVoipSandboxChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApnsVoipSandboxChannelOutcome GetApnsVoipSandboxChannel(const Model::GetApnsVoipSandboxChannelRequest& request) const;

        /**
         * <p>Retrieves information about the status and settings of the APNs VoIP sandbox
         * channel for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetApnsVoipSandboxChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetApnsVoipSandboxChannelOutcomeCallable GetApnsVoipSandboxChannelCallable(const Model::GetApnsVoipSandboxChannelRequest& request) const;

        /**
         * <p>Retrieves information about the status and settings of the APNs VoIP sandbox
         * channel for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetApnsVoipSandboxChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetApnsVoipSandboxChannelAsync(const Model::GetApnsVoipSandboxChannelRequest& request, const GetApnsVoipSandboxChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetApp">AWS API
         * Reference</a></p>
         */
        virtual Model::GetAppOutcome GetApp(const Model::GetAppRequest& request) const;

        /**
         * <p>Retrieves information about an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetApp">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAppOutcomeCallable GetAppCallable(const Model::GetAppRequest& request) const;

        /**
         * <p>Retrieves information about an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetApp">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAppAsync(const Model::GetAppRequest& request, const GetAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the settings for an application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetApplicationSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApplicationSettingsOutcome GetApplicationSettings(const Model::GetApplicationSettingsRequest& request) const;

        /**
         * <p>Retrieves information about the settings for an application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetApplicationSettings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetApplicationSettingsOutcomeCallable GetApplicationSettingsCallable(const Model::GetApplicationSettingsRequest& request) const;

        /**
         * <p>Retrieves information about the settings for an application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetApplicationSettings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetApplicationSettingsAsync(const Model::GetApplicationSettingsRequest& request, const GetApplicationSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about all of your applications.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetApps">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAppsOutcome GetApps(const Model::GetAppsRequest& request) const;

        /**
         * <p>Retrieves information about all of your applications.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetApps">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAppsOutcomeCallable GetAppsCallable(const Model::GetAppsRequest& request) const;

        /**
         * <p>Retrieves information about all of your applications.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetApps">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAppsAsync(const Model::GetAppsRequest& request, const GetAppsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the status and settings of the Baidu Cloud Push
         * channel for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetBaiduChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBaiduChannelOutcome GetBaiduChannel(const Model::GetBaiduChannelRequest& request) const;

        /**
         * <p>Retrieves information about the status and settings of the Baidu Cloud Push
         * channel for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetBaiduChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBaiduChannelOutcomeCallable GetBaiduChannelCallable(const Model::GetBaiduChannelRequest& request) const;

        /**
         * <p>Retrieves information about the status and settings of the Baidu Cloud Push
         * channel for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetBaiduChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBaiduChannelAsync(const Model::GetBaiduChannelRequest& request, const GetBaiduChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the status, configuration, and other settings for
         * a campaign.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetCampaign">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCampaignOutcome GetCampaign(const Model::GetCampaignRequest& request) const;

        /**
         * <p>Retrieves information about the status, configuration, and other settings for
         * a campaign.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetCampaign">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCampaignOutcomeCallable GetCampaignCallable(const Model::GetCampaignRequest& request) const;

        /**
         * <p>Retrieves information about the status, configuration, and other settings for
         * a campaign.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetCampaign">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCampaignAsync(const Model::GetCampaignRequest& request, const GetCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the activity performed by a
         * campaign.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetCampaignActivities">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCampaignActivitiesOutcome GetCampaignActivities(const Model::GetCampaignActivitiesRequest& request) const;

        /**
         * <p>Retrieves information about the activity performed by a
         * campaign.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetCampaignActivities">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCampaignActivitiesOutcomeCallable GetCampaignActivitiesCallable(const Model::GetCampaignActivitiesRequest& request) const;

        /**
         * <p>Retrieves information about the activity performed by a
         * campaign.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetCampaignActivities">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCampaignActivitiesAsync(const Model::GetCampaignActivitiesRequest& request, const GetCampaignActivitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the status, configuration, and other settings for
         * a specific version of a campaign.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetCampaignVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCampaignVersionOutcome GetCampaignVersion(const Model::GetCampaignVersionRequest& request) const;

        /**
         * <p>Retrieves information about the status, configuration, and other settings for
         * a specific version of a campaign.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetCampaignVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCampaignVersionOutcomeCallable GetCampaignVersionCallable(const Model::GetCampaignVersionRequest& request) const;

        /**
         * <p>Retrieves information about the status, configuration, and other settings for
         * a specific version of a campaign.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetCampaignVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCampaignVersionAsync(const Model::GetCampaignVersionRequest& request, const GetCampaignVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the status, configuration, and other settings for
         * all versions of a specific campaign.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetCampaignVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCampaignVersionsOutcome GetCampaignVersions(const Model::GetCampaignVersionsRequest& request) const;

        /**
         * <p>Retrieves information about the status, configuration, and other settings for
         * all versions of a specific campaign.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetCampaignVersions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCampaignVersionsOutcomeCallable GetCampaignVersionsCallable(const Model::GetCampaignVersionsRequest& request) const;

        /**
         * <p>Retrieves information about the status, configuration, and other settings for
         * all versions of a specific campaign.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetCampaignVersions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCampaignVersionsAsync(const Model::GetCampaignVersionsRequest& request, const GetCampaignVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the status, configuration, and other settings for
         * all the campaigns that are associated with an application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetCampaigns">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCampaignsOutcome GetCampaigns(const Model::GetCampaignsRequest& request) const;

        /**
         * <p>Retrieves information about the status, configuration, and other settings for
         * all the campaigns that are associated with an application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetCampaigns">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCampaignsOutcomeCallable GetCampaignsCallable(const Model::GetCampaignsRequest& request) const;

        /**
         * <p>Retrieves information about the status, configuration, and other settings for
         * all the campaigns that are associated with an application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetCampaigns">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCampaignsAsync(const Model::GetCampaignsRequest& request, const GetCampaignsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the history and status of each channel for an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetChannels">AWS
         * API Reference</a></p>
         */
        virtual Model::GetChannelsOutcome GetChannels(const Model::GetChannelsRequest& request) const;

        /**
         * <p>Retrieves information about the history and status of each channel for an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetChannels">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetChannelsOutcomeCallable GetChannelsCallable(const Model::GetChannelsRequest& request) const;

        /**
         * <p>Retrieves information about the history and status of each channel for an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetChannels">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetChannelsAsync(const Model::GetChannelsRequest& request, const GetChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the status and settings of the email channel for
         * an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetEmailChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEmailChannelOutcome GetEmailChannel(const Model::GetEmailChannelRequest& request) const;

        /**
         * <p>Retrieves information about the status and settings of the email channel for
         * an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetEmailChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEmailChannelOutcomeCallable GetEmailChannelCallable(const Model::GetEmailChannelRequest& request) const;

        /**
         * <p>Retrieves information about the status and settings of the email channel for
         * an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetEmailChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEmailChannelAsync(const Model::GetEmailChannelRequest& request, const GetEmailChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the settings and attributes of a specific
         * endpoint for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEndpointOutcome GetEndpoint(const Model::GetEndpointRequest& request) const;

        /**
         * <p>Retrieves information about the settings and attributes of a specific
         * endpoint for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetEndpoint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEndpointOutcomeCallable GetEndpointCallable(const Model::GetEndpointRequest& request) const;

        /**
         * <p>Retrieves information about the settings and attributes of a specific
         * endpoint for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetEndpoint">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEndpointAsync(const Model::GetEndpointRequest& request, const GetEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the event stream settings for an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetEventStream">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEventStreamOutcome GetEventStream(const Model::GetEventStreamRequest& request) const;

        /**
         * <p>Retrieves information about the event stream settings for an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetEventStream">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEventStreamOutcomeCallable GetEventStreamCallable(const Model::GetEventStreamRequest& request) const;

        /**
         * <p>Retrieves information about the event stream settings for an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetEventStream">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEventStreamAsync(const Model::GetEventStreamRequest& request, const GetEventStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the status and settings of a specific export job
         * for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetExportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetExportJobOutcome GetExportJob(const Model::GetExportJobRequest& request) const;

        /**
         * <p>Retrieves information about the status and settings of a specific export job
         * for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetExportJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetExportJobOutcomeCallable GetExportJobCallable(const Model::GetExportJobRequest& request) const;

        /**
         * <p>Retrieves information about the status and settings of a specific export job
         * for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetExportJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetExportJobAsync(const Model::GetExportJobRequest& request, const GetExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the status and settings of all the export jobs
         * for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetExportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::GetExportJobsOutcome GetExportJobs(const Model::GetExportJobsRequest& request) const;

        /**
         * <p>Retrieves information about the status and settings of all the export jobs
         * for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetExportJobs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetExportJobsOutcomeCallable GetExportJobsCallable(const Model::GetExportJobsRequest& request) const;

        /**
         * <p>Retrieves information about the status and settings of all the export jobs
         * for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetExportJobs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetExportJobsAsync(const Model::GetExportJobsRequest& request, const GetExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the status and settings of the GCM channel for an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetGcmChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGcmChannelOutcome GetGcmChannel(const Model::GetGcmChannelRequest& request) const;

        /**
         * <p>Retrieves information about the status and settings of the GCM channel for an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetGcmChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetGcmChannelOutcomeCallable GetGcmChannelCallable(const Model::GetGcmChannelRequest& request) const;

        /**
         * <p>Retrieves information about the status and settings of the GCM channel for an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetGcmChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetGcmChannelAsync(const Model::GetGcmChannelRequest& request, const GetGcmChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the status and settings of a specific import job
         * for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetImportJobOutcome GetImportJob(const Model::GetImportJobRequest& request) const;

        /**
         * <p>Retrieves information about the status and settings of a specific import job
         * for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetImportJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetImportJobOutcomeCallable GetImportJobCallable(const Model::GetImportJobRequest& request) const;

        /**
         * <p>Retrieves information about the status and settings of a specific import job
         * for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetImportJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetImportJobAsync(const Model::GetImportJobRequest& request, const GetImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the status and settings of all the import jobs
         * for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetImportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::GetImportJobsOutcome GetImportJobs(const Model::GetImportJobsRequest& request) const;

        /**
         * <p>Retrieves information about the status and settings of all the import jobs
         * for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetImportJobs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetImportJobsOutcomeCallable GetImportJobsCallable(const Model::GetImportJobsRequest& request) const;

        /**
         * <p>Retrieves information about the status and settings of all the import jobs
         * for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetImportJobs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetImportJobsAsync(const Model::GetImportJobsRequest& request, const GetImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the configuration, dimension, and other settings
         * for a specific segment that's associated with an application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetSegment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSegmentOutcome GetSegment(const Model::GetSegmentRequest& request) const;

        /**
         * <p>Retrieves information about the configuration, dimension, and other settings
         * for a specific segment that's associated with an application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetSegment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSegmentOutcomeCallable GetSegmentCallable(const Model::GetSegmentRequest& request) const;

        /**
         * <p>Retrieves information about the configuration, dimension, and other settings
         * for a specific segment that's associated with an application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetSegment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSegmentAsync(const Model::GetSegmentRequest& request, const GetSegmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the status and settings of the export jobs for a
         * segment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetSegmentExportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSegmentExportJobsOutcome GetSegmentExportJobs(const Model::GetSegmentExportJobsRequest& request) const;

        /**
         * <p>Retrieves information about the status and settings of the export jobs for a
         * segment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetSegmentExportJobs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSegmentExportJobsOutcomeCallable GetSegmentExportJobsCallable(const Model::GetSegmentExportJobsRequest& request) const;

        /**
         * <p>Retrieves information about the status and settings of the export jobs for a
         * segment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetSegmentExportJobs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSegmentExportJobsAsync(const Model::GetSegmentExportJobsRequest& request, const GetSegmentExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the status and settings of the import jobs for a
         * segment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetSegmentImportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSegmentImportJobsOutcome GetSegmentImportJobs(const Model::GetSegmentImportJobsRequest& request) const;

        /**
         * <p>Retrieves information about the status and settings of the import jobs for a
         * segment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetSegmentImportJobs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSegmentImportJobsOutcomeCallable GetSegmentImportJobsCallable(const Model::GetSegmentImportJobsRequest& request) const;

        /**
         * <p>Retrieves information about the status and settings of the import jobs for a
         * segment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetSegmentImportJobs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSegmentImportJobsAsync(const Model::GetSegmentImportJobsRequest& request, const GetSegmentImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the configuration, dimension, and other settings
         * for a specific version of a segment that's associated with an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetSegmentVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSegmentVersionOutcome GetSegmentVersion(const Model::GetSegmentVersionRequest& request) const;

        /**
         * <p>Retrieves information about the configuration, dimension, and other settings
         * for a specific version of a segment that's associated with an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetSegmentVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSegmentVersionOutcomeCallable GetSegmentVersionCallable(const Model::GetSegmentVersionRequest& request) const;

        /**
         * <p>Retrieves information about the configuration, dimension, and other settings
         * for a specific version of a segment that's associated with an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetSegmentVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSegmentVersionAsync(const Model::GetSegmentVersionRequest& request, const GetSegmentVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the configuration, dimension, and other settings
         * for all versions of a specific segment that's associated with an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetSegmentVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSegmentVersionsOutcome GetSegmentVersions(const Model::GetSegmentVersionsRequest& request) const;

        /**
         * <p>Retrieves information about the configuration, dimension, and other settings
         * for all versions of a specific segment that's associated with an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetSegmentVersions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSegmentVersionsOutcomeCallable GetSegmentVersionsCallable(const Model::GetSegmentVersionsRequest& request) const;

        /**
         * <p>Retrieves information about the configuration, dimension, and other settings
         * for all versions of a specific segment that's associated with an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetSegmentVersions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSegmentVersionsAsync(const Model::GetSegmentVersionsRequest& request, const GetSegmentVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the configuration, dimension, and other settings
         * for all the segments that are associated with an application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetSegments">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSegmentsOutcome GetSegments(const Model::GetSegmentsRequest& request) const;

        /**
         * <p>Retrieves information about the configuration, dimension, and other settings
         * for all the segments that are associated with an application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetSegments">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSegmentsOutcomeCallable GetSegmentsCallable(const Model::GetSegmentsRequest& request) const;

        /**
         * <p>Retrieves information about the configuration, dimension, and other settings
         * for all the segments that are associated with an application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetSegments">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSegmentsAsync(const Model::GetSegmentsRequest& request, const GetSegmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the status and settings of the SMS channel for an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetSmsChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSmsChannelOutcome GetSmsChannel(const Model::GetSmsChannelRequest& request) const;

        /**
         * <p>Retrieves information about the status and settings of the SMS channel for an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetSmsChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSmsChannelOutcomeCallable GetSmsChannelCallable(const Model::GetSmsChannelRequest& request) const;

        /**
         * <p>Retrieves information about the status and settings of the SMS channel for an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetSmsChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSmsChannelAsync(const Model::GetSmsChannelRequest& request, const GetSmsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about all the endpoints that are associated with a
         * specific user ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetUserEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUserEndpointsOutcome GetUserEndpoints(const Model::GetUserEndpointsRequest& request) const;

        /**
         * <p>Retrieves information about all the endpoints that are associated with a
         * specific user ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetUserEndpoints">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetUserEndpointsOutcomeCallable GetUserEndpointsCallable(const Model::GetUserEndpointsRequest& request) const;

        /**
         * <p>Retrieves information about all the endpoints that are associated with a
         * specific user ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetUserEndpoints">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetUserEndpointsAsync(const Model::GetUserEndpointsRequest& request, const GetUserEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the status and settings of the voice channel for
         * an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetVoiceChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVoiceChannelOutcome GetVoiceChannel(const Model::GetVoiceChannelRequest& request) const;

        /**
         * <p>Retrieves information about the status and settings of the voice channel for
         * an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetVoiceChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetVoiceChannelOutcomeCallable GetVoiceChannelCallable(const Model::GetVoiceChannelRequest& request) const;

        /**
         * <p>Retrieves information about the status and settings of the voice channel for
         * an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetVoiceChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetVoiceChannelAsync(const Model::GetVoiceChannelRequest& request, const GetVoiceChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves all the tags (keys and values) that are associated with an
         * application, campaign, or segment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Retrieves all the tags (keys and values) that are associated with an
         * application, campaign, or segment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Retrieves all the tags (keys and values) that are associated with an
         * application, campaign, or segment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about a phone number.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/PhoneNumberValidate">AWS
         * API Reference</a></p>
         */
        virtual Model::PhoneNumberValidateOutcome PhoneNumberValidate(const Model::PhoneNumberValidateRequest& request) const;

        /**
         * <p>Retrieves information about a phone number.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/PhoneNumberValidate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PhoneNumberValidateOutcomeCallable PhoneNumberValidateCallable(const Model::PhoneNumberValidateRequest& request) const;

        /**
         * <p>Retrieves information about a phone number.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/PhoneNumberValidate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PhoneNumberValidateAsync(const Model::PhoneNumberValidateRequest& request, const PhoneNumberValidateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new event stream for an application or updates the settings of an
         * existing event stream for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/PutEventStream">AWS
         * API Reference</a></p>
         */
        virtual Model::PutEventStreamOutcome PutEventStream(const Model::PutEventStreamRequest& request) const;

        /**
         * <p>Creates a new event stream for an application or updates the settings of an
         * existing event stream for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/PutEventStream">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutEventStreamOutcomeCallable PutEventStreamCallable(const Model::PutEventStreamRequest& request) const;

        /**
         * <p>Creates a new event stream for an application or updates the settings of an
         * existing event stream for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/PutEventStream">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutEventStreamAsync(const Model::PutEventStreamRequest& request, const PutEventStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new event to record for endpoints, or creates or updates endpoint
         * data that existing events are associated with.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/PutEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::PutEventsOutcome PutEvents(const Model::PutEventsRequest& request) const;

        /**
         * <p>Creates a new event to record for endpoints, or creates or updates endpoint
         * data that existing events are associated with.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/PutEvents">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutEventsOutcomeCallable PutEventsCallable(const Model::PutEventsRequest& request) const;

        /**
         * <p>Creates a new event to record for endpoints, or creates or updates endpoint
         * data that existing events are associated with.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/PutEvents">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutEventsAsync(const Model::PutEventsRequest& request, const PutEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes one or more attributes, of the same attribute type, from all the
         * endpoints that are associated with an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/RemoveAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveAttributesOutcome RemoveAttributes(const Model::RemoveAttributesRequest& request) const;

        /**
         * <p>Removes one or more attributes, of the same attribute type, from all the
         * endpoints that are associated with an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/RemoveAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveAttributesOutcomeCallable RemoveAttributesCallable(const Model::RemoveAttributesRequest& request) const;

        /**
         * <p>Removes one or more attributes, of the same attribute type, from all the
         * endpoints that are associated with an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/RemoveAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveAttributesAsync(const Model::RemoveAttributesRequest& request, const RemoveAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates and sends a direct message.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/SendMessages">AWS
         * API Reference</a></p>
         */
        virtual Model::SendMessagesOutcome SendMessages(const Model::SendMessagesRequest& request) const;

        /**
         * <p>Creates and sends a direct message.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/SendMessages">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendMessagesOutcomeCallable SendMessagesCallable(const Model::SendMessagesRequest& request) const;

        /**
         * <p>Creates and sends a direct message.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/SendMessages">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendMessagesAsync(const Model::SendMessagesRequest& request, const SendMessagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates and sends a message to a list of users.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/SendUsersMessages">AWS
         * API Reference</a></p>
         */
        virtual Model::SendUsersMessagesOutcome SendUsersMessages(const Model::SendUsersMessagesRequest& request) const;

        /**
         * <p>Creates and sends a message to a list of users.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/SendUsersMessages">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendUsersMessagesOutcomeCallable SendUsersMessagesCallable(const Model::SendUsersMessagesRequest& request) const;

        /**
         * <p>Creates and sends a message to a list of users.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/SendUsersMessages">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendUsersMessagesAsync(const Model::SendUsersMessagesRequest& request, const SendUsersMessagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds one or more tags (keys and values) to an application, campaign, or
         * segment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds one or more tags (keys and values) to an application, campaign, or
         * segment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds one or more tags (keys and values) to an application, campaign, or
         * segment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes one or more tags (keys and values) from an application, campaign, or
         * segment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes one or more tags (keys and values) from an application, campaign, or
         * segment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes one or more tags (keys and values) from an application, campaign, or
         * segment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the ADM channel settings for an application.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateAdmChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAdmChannelOutcome UpdateAdmChannel(const Model::UpdateAdmChannelRequest& request) const;

        /**
         * <p>Updates the ADM channel settings for an application.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateAdmChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAdmChannelOutcomeCallable UpdateAdmChannelCallable(const Model::UpdateAdmChannelRequest& request) const;

        /**
         * <p>Updates the ADM channel settings for an application.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateAdmChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAdmChannelAsync(const Model::UpdateAdmChannelRequest& request, const UpdateAdmChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the APNs channel settings for an application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateApnsChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApnsChannelOutcome UpdateApnsChannel(const Model::UpdateApnsChannelRequest& request) const;

        /**
         * <p>Updates the APNs channel settings for an application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateApnsChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateApnsChannelOutcomeCallable UpdateApnsChannelCallable(const Model::UpdateApnsChannelRequest& request) const;

        /**
         * <p>Updates the APNs channel settings for an application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateApnsChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateApnsChannelAsync(const Model::UpdateApnsChannelRequest& request, const UpdateApnsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the APNs sandbox channel settings for an application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateApnsSandboxChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApnsSandboxChannelOutcome UpdateApnsSandboxChannel(const Model::UpdateApnsSandboxChannelRequest& request) const;

        /**
         * <p>Updates the APNs sandbox channel settings for an application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateApnsSandboxChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateApnsSandboxChannelOutcomeCallable UpdateApnsSandboxChannelCallable(const Model::UpdateApnsSandboxChannelRequest& request) const;

        /**
         * <p>Updates the APNs sandbox channel settings for an application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateApnsSandboxChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateApnsSandboxChannelAsync(const Model::UpdateApnsSandboxChannelRequest& request, const UpdateApnsSandboxChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the APNs VoIP channel settings for an application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateApnsVoipChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApnsVoipChannelOutcome UpdateApnsVoipChannel(const Model::UpdateApnsVoipChannelRequest& request) const;

        /**
         * <p>Updates the APNs VoIP channel settings for an application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateApnsVoipChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateApnsVoipChannelOutcomeCallable UpdateApnsVoipChannelCallable(const Model::UpdateApnsVoipChannelRequest& request) const;

        /**
         * <p>Updates the APNs VoIP channel settings for an application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateApnsVoipChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateApnsVoipChannelAsync(const Model::UpdateApnsVoipChannelRequest& request, const UpdateApnsVoipChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the settings for the APNs VoIP sandbox channel for an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateApnsVoipSandboxChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApnsVoipSandboxChannelOutcome UpdateApnsVoipSandboxChannel(const Model::UpdateApnsVoipSandboxChannelRequest& request) const;

        /**
         * <p>Updates the settings for the APNs VoIP sandbox channel for an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateApnsVoipSandboxChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateApnsVoipSandboxChannelOutcomeCallable UpdateApnsVoipSandboxChannelCallable(const Model::UpdateApnsVoipSandboxChannelRequest& request) const;

        /**
         * <p>Updates the settings for the APNs VoIP sandbox channel for an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateApnsVoipSandboxChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateApnsVoipSandboxChannelAsync(const Model::UpdateApnsVoipSandboxChannelRequest& request, const UpdateApnsVoipSandboxChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the settings for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateApplicationSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApplicationSettingsOutcome UpdateApplicationSettings(const Model::UpdateApplicationSettingsRequest& request) const;

        /**
         * <p>Updates the settings for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateApplicationSettings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateApplicationSettingsOutcomeCallable UpdateApplicationSettingsCallable(const Model::UpdateApplicationSettingsRequest& request) const;

        /**
         * <p>Updates the settings for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateApplicationSettings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateApplicationSettingsAsync(const Model::UpdateApplicationSettingsRequest& request, const UpdateApplicationSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the settings of the Baidu channel for an application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateBaiduChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBaiduChannelOutcome UpdateBaiduChannel(const Model::UpdateBaiduChannelRequest& request) const;

        /**
         * <p>Updates the settings of the Baidu channel for an application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateBaiduChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateBaiduChannelOutcomeCallable UpdateBaiduChannelCallable(const Model::UpdateBaiduChannelRequest& request) const;

        /**
         * <p>Updates the settings of the Baidu channel for an application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateBaiduChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateBaiduChannelAsync(const Model::UpdateBaiduChannelRequest& request, const UpdateBaiduChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the settings for a campaign.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateCampaign">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCampaignOutcome UpdateCampaign(const Model::UpdateCampaignRequest& request) const;

        /**
         * <p>Updates the settings for a campaign.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateCampaign">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateCampaignOutcomeCallable UpdateCampaignCallable(const Model::UpdateCampaignRequest& request) const;

        /**
         * <p>Updates the settings for a campaign.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateCampaign">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateCampaignAsync(const Model::UpdateCampaignRequest& request, const UpdateCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the status and settings of the email channel for an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateEmailChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEmailChannelOutcome UpdateEmailChannel(const Model::UpdateEmailChannelRequest& request) const;

        /**
         * <p>Updates the status and settings of the email channel for an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateEmailChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateEmailChannelOutcomeCallable UpdateEmailChannelCallable(const Model::UpdateEmailChannelRequest& request) const;

        /**
         * <p>Updates the status and settings of the email channel for an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateEmailChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateEmailChannelAsync(const Model::UpdateEmailChannelRequest& request, const UpdateEmailChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new endpoint for an application or updates the settings and
         * attributes of an existing endpoint for an application. You can also use this
         * operation to define custom attributes (Attributes, Metrics, and UserAttributes
         * properties) for an endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEndpointOutcome UpdateEndpoint(const Model::UpdateEndpointRequest& request) const;

        /**
         * <p>Creates a new endpoint for an application or updates the settings and
         * attributes of an existing endpoint for an application. You can also use this
         * operation to define custom attributes (Attributes, Metrics, and UserAttributes
         * properties) for an endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateEndpoint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateEndpointOutcomeCallable UpdateEndpointCallable(const Model::UpdateEndpointRequest& request) const;

        /**
         * <p>Creates a new endpoint for an application or updates the settings and
         * attributes of an existing endpoint for an application. You can also use this
         * operation to define custom attributes (Attributes, Metrics, and UserAttributes
         * properties) for an endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateEndpoint">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateEndpointAsync(const Model::UpdateEndpointRequest& request, const UpdateEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new batch of endpoints for an application or updates the settings
         * and attributes of a batch of existing endpoints for an application. You can also
         * use this operation to define custom attributes (Attributes, Metrics, and
         * UserAttributes properties) for a batch of endpoints.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateEndpointsBatch">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEndpointsBatchOutcome UpdateEndpointsBatch(const Model::UpdateEndpointsBatchRequest& request) const;

        /**
         * <p>Creates a new batch of endpoints for an application or updates the settings
         * and attributes of a batch of existing endpoints for an application. You can also
         * use this operation to define custom attributes (Attributes, Metrics, and
         * UserAttributes properties) for a batch of endpoints.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateEndpointsBatch">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateEndpointsBatchOutcomeCallable UpdateEndpointsBatchCallable(const Model::UpdateEndpointsBatchRequest& request) const;

        /**
         * <p>Creates a new batch of endpoints for an application or updates the settings
         * and attributes of a batch of existing endpoints for an application. You can also
         * use this operation to define custom attributes (Attributes, Metrics, and
         * UserAttributes properties) for a batch of endpoints.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateEndpointsBatch">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateEndpointsBatchAsync(const Model::UpdateEndpointsBatchRequest& request, const UpdateEndpointsBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the status and settings of the GCM channel for an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateGcmChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGcmChannelOutcome UpdateGcmChannel(const Model::UpdateGcmChannelRequest& request) const;

        /**
         * <p>Updates the status and settings of the GCM channel for an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateGcmChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateGcmChannelOutcomeCallable UpdateGcmChannelCallable(const Model::UpdateGcmChannelRequest& request) const;

        /**
         * <p>Updates the status and settings of the GCM channel for an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateGcmChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateGcmChannelAsync(const Model::UpdateGcmChannelRequest& request, const UpdateGcmChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new segment for an application or updates the configuration,
         * dimension, and other settings for an existing segment that's associated with an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateSegment">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSegmentOutcome UpdateSegment(const Model::UpdateSegmentRequest& request) const;

        /**
         * <p>Creates a new segment for an application or updates the configuration,
         * dimension, and other settings for an existing segment that's associated with an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateSegment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSegmentOutcomeCallable UpdateSegmentCallable(const Model::UpdateSegmentRequest& request) const;

        /**
         * <p>Creates a new segment for an application or updates the configuration,
         * dimension, and other settings for an existing segment that's associated with an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateSegment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSegmentAsync(const Model::UpdateSegmentRequest& request, const UpdateSegmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the status and settings of the SMS channel for an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateSmsChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSmsChannelOutcome UpdateSmsChannel(const Model::UpdateSmsChannelRequest& request) const;

        /**
         * <p>Updates the status and settings of the SMS channel for an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateSmsChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSmsChannelOutcomeCallable UpdateSmsChannelCallable(const Model::UpdateSmsChannelRequest& request) const;

        /**
         * <p>Updates the status and settings of the SMS channel for an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateSmsChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSmsChannelAsync(const Model::UpdateSmsChannelRequest& request, const UpdateSmsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the status and settings of the voice channel for an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateVoiceChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVoiceChannelOutcome UpdateVoiceChannel(const Model::UpdateVoiceChannelRequest& request) const;

        /**
         * <p>Updates the status and settings of the voice channel for an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateVoiceChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateVoiceChannelOutcomeCallable UpdateVoiceChannelCallable(const Model::UpdateVoiceChannelRequest& request) const;

        /**
         * <p>Updates the status and settings of the voice channel for an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateVoiceChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateVoiceChannelAsync(const Model::UpdateVoiceChannelRequest& request, const UpdateVoiceChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateAppAsyncHelper(const Model::CreateAppRequest& request, const CreateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateCampaignAsyncHelper(const Model::CreateCampaignRequest& request, const CreateCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateExportJobAsyncHelper(const Model::CreateExportJobRequest& request, const CreateExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateImportJobAsyncHelper(const Model::CreateImportJobRequest& request, const CreateImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateSegmentAsyncHelper(const Model::CreateSegmentRequest& request, const CreateSegmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAdmChannelAsyncHelper(const Model::DeleteAdmChannelRequest& request, const DeleteAdmChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteApnsChannelAsyncHelper(const Model::DeleteApnsChannelRequest& request, const DeleteApnsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteApnsSandboxChannelAsyncHelper(const Model::DeleteApnsSandboxChannelRequest& request, const DeleteApnsSandboxChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteApnsVoipChannelAsyncHelper(const Model::DeleteApnsVoipChannelRequest& request, const DeleteApnsVoipChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteApnsVoipSandboxChannelAsyncHelper(const Model::DeleteApnsVoipSandboxChannelRequest& request, const DeleteApnsVoipSandboxChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAppAsyncHelper(const Model::DeleteAppRequest& request, const DeleteAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBaiduChannelAsyncHelper(const Model::DeleteBaiduChannelRequest& request, const DeleteBaiduChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteCampaignAsyncHelper(const Model::DeleteCampaignRequest& request, const DeleteCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteEmailChannelAsyncHelper(const Model::DeleteEmailChannelRequest& request, const DeleteEmailChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteEndpointAsyncHelper(const Model::DeleteEndpointRequest& request, const DeleteEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteEventStreamAsyncHelper(const Model::DeleteEventStreamRequest& request, const DeleteEventStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteGcmChannelAsyncHelper(const Model::DeleteGcmChannelRequest& request, const DeleteGcmChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSegmentAsyncHelper(const Model::DeleteSegmentRequest& request, const DeleteSegmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSmsChannelAsyncHelper(const Model::DeleteSmsChannelRequest& request, const DeleteSmsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteUserEndpointsAsyncHelper(const Model::DeleteUserEndpointsRequest& request, const DeleteUserEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteVoiceChannelAsyncHelper(const Model::DeleteVoiceChannelRequest& request, const DeleteVoiceChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAdmChannelAsyncHelper(const Model::GetAdmChannelRequest& request, const GetAdmChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetApnsChannelAsyncHelper(const Model::GetApnsChannelRequest& request, const GetApnsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetApnsSandboxChannelAsyncHelper(const Model::GetApnsSandboxChannelRequest& request, const GetApnsSandboxChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetApnsVoipChannelAsyncHelper(const Model::GetApnsVoipChannelRequest& request, const GetApnsVoipChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetApnsVoipSandboxChannelAsyncHelper(const Model::GetApnsVoipSandboxChannelRequest& request, const GetApnsVoipSandboxChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAppAsyncHelper(const Model::GetAppRequest& request, const GetAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetApplicationSettingsAsyncHelper(const Model::GetApplicationSettingsRequest& request, const GetApplicationSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAppsAsyncHelper(const Model::GetAppsRequest& request, const GetAppsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBaiduChannelAsyncHelper(const Model::GetBaiduChannelRequest& request, const GetBaiduChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCampaignAsyncHelper(const Model::GetCampaignRequest& request, const GetCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCampaignActivitiesAsyncHelper(const Model::GetCampaignActivitiesRequest& request, const GetCampaignActivitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCampaignVersionAsyncHelper(const Model::GetCampaignVersionRequest& request, const GetCampaignVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCampaignVersionsAsyncHelper(const Model::GetCampaignVersionsRequest& request, const GetCampaignVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCampaignsAsyncHelper(const Model::GetCampaignsRequest& request, const GetCampaignsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetChannelsAsyncHelper(const Model::GetChannelsRequest& request, const GetChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetEmailChannelAsyncHelper(const Model::GetEmailChannelRequest& request, const GetEmailChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetEndpointAsyncHelper(const Model::GetEndpointRequest& request, const GetEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetEventStreamAsyncHelper(const Model::GetEventStreamRequest& request, const GetEventStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetExportJobAsyncHelper(const Model::GetExportJobRequest& request, const GetExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetExportJobsAsyncHelper(const Model::GetExportJobsRequest& request, const GetExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetGcmChannelAsyncHelper(const Model::GetGcmChannelRequest& request, const GetGcmChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetImportJobAsyncHelper(const Model::GetImportJobRequest& request, const GetImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetImportJobsAsyncHelper(const Model::GetImportJobsRequest& request, const GetImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSegmentAsyncHelper(const Model::GetSegmentRequest& request, const GetSegmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSegmentExportJobsAsyncHelper(const Model::GetSegmentExportJobsRequest& request, const GetSegmentExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSegmentImportJobsAsyncHelper(const Model::GetSegmentImportJobsRequest& request, const GetSegmentImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSegmentVersionAsyncHelper(const Model::GetSegmentVersionRequest& request, const GetSegmentVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSegmentVersionsAsyncHelper(const Model::GetSegmentVersionsRequest& request, const GetSegmentVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSegmentsAsyncHelper(const Model::GetSegmentsRequest& request, const GetSegmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSmsChannelAsyncHelper(const Model::GetSmsChannelRequest& request, const GetSmsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetUserEndpointsAsyncHelper(const Model::GetUserEndpointsRequest& request, const GetUserEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetVoiceChannelAsyncHelper(const Model::GetVoiceChannelRequest& request, const GetVoiceChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PhoneNumberValidateAsyncHelper(const Model::PhoneNumberValidateRequest& request, const PhoneNumberValidateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutEventStreamAsyncHelper(const Model::PutEventStreamRequest& request, const PutEventStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutEventsAsyncHelper(const Model::PutEventsRequest& request, const PutEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveAttributesAsyncHelper(const Model::RemoveAttributesRequest& request, const RemoveAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SendMessagesAsyncHelper(const Model::SendMessagesRequest& request, const SendMessagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SendUsersMessagesAsyncHelper(const Model::SendUsersMessagesRequest& request, const SendUsersMessagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAdmChannelAsyncHelper(const Model::UpdateAdmChannelRequest& request, const UpdateAdmChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateApnsChannelAsyncHelper(const Model::UpdateApnsChannelRequest& request, const UpdateApnsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateApnsSandboxChannelAsyncHelper(const Model::UpdateApnsSandboxChannelRequest& request, const UpdateApnsSandboxChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateApnsVoipChannelAsyncHelper(const Model::UpdateApnsVoipChannelRequest& request, const UpdateApnsVoipChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateApnsVoipSandboxChannelAsyncHelper(const Model::UpdateApnsVoipSandboxChannelRequest& request, const UpdateApnsVoipSandboxChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateApplicationSettingsAsyncHelper(const Model::UpdateApplicationSettingsRequest& request, const UpdateApplicationSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateBaiduChannelAsyncHelper(const Model::UpdateBaiduChannelRequest& request, const UpdateBaiduChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateCampaignAsyncHelper(const Model::UpdateCampaignRequest& request, const UpdateCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateEmailChannelAsyncHelper(const Model::UpdateEmailChannelRequest& request, const UpdateEmailChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateEndpointAsyncHelper(const Model::UpdateEndpointRequest& request, const UpdateEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateEndpointsBatchAsyncHelper(const Model::UpdateEndpointsBatchRequest& request, const UpdateEndpointsBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateGcmChannelAsyncHelper(const Model::UpdateGcmChannelRequest& request, const UpdateGcmChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateSegmentAsyncHelper(const Model::UpdateSegmentRequest& request, const UpdateSegmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateSmsChannelAsyncHelper(const Model::UpdateSmsChannelRequest& request, const UpdateSmsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateVoiceChannelAsyncHelper(const Model::UpdateVoiceChannelRequest& request, const UpdateVoiceChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace Pinpoint
} // namespace Aws
