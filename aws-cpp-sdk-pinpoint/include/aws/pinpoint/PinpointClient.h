﻿/*
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
        class PhoneNumberValidateRequest;
        class PutEventStreamRequest;
        class PutEventsRequest;
        class RemoveAttributesRequest;
        class SendMessagesRequest;
        class SendUsersMessagesRequest;
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
        typedef Aws::Utils::Outcome<PhoneNumberValidateResult, Aws::Client::AWSError<PinpointErrors>> PhoneNumberValidateOutcome;
        typedef Aws::Utils::Outcome<PutEventStreamResult, Aws::Client::AWSError<PinpointErrors>> PutEventStreamOutcome;
        typedef Aws::Utils::Outcome<PutEventsResult, Aws::Client::AWSError<PinpointErrors>> PutEventsOutcome;
        typedef Aws::Utils::Outcome<RemoveAttributesResult, Aws::Client::AWSError<PinpointErrors>> RemoveAttributesOutcome;
        typedef Aws::Utils::Outcome<SendMessagesResult, Aws::Client::AWSError<PinpointErrors>> SendMessagesOutcome;
        typedef Aws::Utils::Outcome<SendUsersMessagesResult, Aws::Client::AWSError<PinpointErrors>> SendUsersMessagesOutcome;
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
        typedef std::future<PhoneNumberValidateOutcome> PhoneNumberValidateOutcomeCallable;
        typedef std::future<PutEventStreamOutcome> PutEventStreamOutcomeCallable;
        typedef std::future<PutEventsOutcome> PutEventsOutcomeCallable;
        typedef std::future<RemoveAttributesOutcome> RemoveAttributesOutcomeCallable;
        typedef std::future<SendMessagesOutcome> SendMessagesOutcomeCallable;
        typedef std::future<SendUsersMessagesOutcome> SendUsersMessagesOutcomeCallable;
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
    typedef std::function<void(const PinpointClient*, const Model::PhoneNumberValidateRequest&, const Model::PhoneNumberValidateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PhoneNumberValidateResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::PutEventStreamRequest&, const Model::PutEventStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutEventStreamResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::PutEventsRequest&, const Model::PutEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutEventsResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::RemoveAttributesRequest&, const Model::RemoveAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveAttributesResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::SendMessagesRequest&, const Model::SendMessagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendMessagesResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::SendUsersMessagesRequest&, const Model::SendUsersMessagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendUsersMessagesResponseReceivedHandler;
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

  /**
   * Amazon Pinpoint
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
         * Creates or updates an app.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CreateApp">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAppOutcome CreateApp(const Model::CreateAppRequest& request) const;

        /**
         * Creates or updates an app.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CreateApp">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAppOutcomeCallable CreateAppCallable(const Model::CreateAppRequest& request) const;

        /**
         * Creates or updates an app.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CreateApp">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAppAsync(const Model::CreateAppRequest& request, const CreateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Creates or updates a campaign.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CreateCampaign">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCampaignOutcome CreateCampaign(const Model::CreateCampaignRequest& request) const;

        /**
         * Creates or updates a campaign.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CreateCampaign">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCampaignOutcomeCallable CreateCampaignCallable(const Model::CreateCampaignRequest& request) const;

        /**
         * Creates or updates a campaign.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CreateCampaign">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCampaignAsync(const Model::CreateCampaignRequest& request, const CreateCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Creates an export job.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CreateExportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateExportJobOutcome CreateExportJob(const Model::CreateExportJobRequest& request) const;

        /**
         * Creates an export job.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CreateExportJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateExportJobOutcomeCallable CreateExportJobCallable(const Model::CreateExportJobRequest& request) const;

        /**
         * Creates an export job.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CreateExportJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateExportJobAsync(const Model::CreateExportJobRequest& request, const CreateExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Creates or updates an import job.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CreateImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateImportJobOutcome CreateImportJob(const Model::CreateImportJobRequest& request) const;

        /**
         * Creates or updates an import job.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CreateImportJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateImportJobOutcomeCallable CreateImportJobCallable(const Model::CreateImportJobRequest& request) const;

        /**
         * Creates or updates an import job.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CreateImportJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateImportJobAsync(const Model::CreateImportJobRequest& request, const CreateImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Used to create or update a segment.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CreateSegment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSegmentOutcome CreateSegment(const Model::CreateSegmentRequest& request) const;

        /**
         * Used to create or update a segment.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CreateSegment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSegmentOutcomeCallable CreateSegmentCallable(const Model::CreateSegmentRequest& request) const;

        /**
         * Used to create or update a segment.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CreateSegment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSegmentAsync(const Model::CreateSegmentRequest& request, const CreateSegmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Delete an ADM channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteAdmChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAdmChannelOutcome DeleteAdmChannel(const Model::DeleteAdmChannelRequest& request) const;

        /**
         * Delete an ADM channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteAdmChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAdmChannelOutcomeCallable DeleteAdmChannelCallable(const Model::DeleteAdmChannelRequest& request) const;

        /**
         * Delete an ADM channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteAdmChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAdmChannelAsync(const Model::DeleteAdmChannelRequest& request, const DeleteAdmChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Deletes the APNs channel for an app.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteApnsChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApnsChannelOutcome DeleteApnsChannel(const Model::DeleteApnsChannelRequest& request) const;

        /**
         * Deletes the APNs channel for an app.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteApnsChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteApnsChannelOutcomeCallable DeleteApnsChannelCallable(const Model::DeleteApnsChannelRequest& request) const;

        /**
         * Deletes the APNs channel for an app.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteApnsChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteApnsChannelAsync(const Model::DeleteApnsChannelRequest& request, const DeleteApnsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Delete an APNS sandbox channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteApnsSandboxChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApnsSandboxChannelOutcome DeleteApnsSandboxChannel(const Model::DeleteApnsSandboxChannelRequest& request) const;

        /**
         * Delete an APNS sandbox channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteApnsSandboxChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteApnsSandboxChannelOutcomeCallable DeleteApnsSandboxChannelCallable(const Model::DeleteApnsSandboxChannelRequest& request) const;

        /**
         * Delete an APNS sandbox channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteApnsSandboxChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteApnsSandboxChannelAsync(const Model::DeleteApnsSandboxChannelRequest& request, const DeleteApnsSandboxChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Delete an APNS VoIP channel<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteApnsVoipChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApnsVoipChannelOutcome DeleteApnsVoipChannel(const Model::DeleteApnsVoipChannelRequest& request) const;

        /**
         * Delete an APNS VoIP channel<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteApnsVoipChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteApnsVoipChannelOutcomeCallable DeleteApnsVoipChannelCallable(const Model::DeleteApnsVoipChannelRequest& request) const;

        /**
         * Delete an APNS VoIP channel<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteApnsVoipChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteApnsVoipChannelAsync(const Model::DeleteApnsVoipChannelRequest& request, const DeleteApnsVoipChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Delete an APNS VoIP sandbox channel<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteApnsVoipSandboxChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApnsVoipSandboxChannelOutcome DeleteApnsVoipSandboxChannel(const Model::DeleteApnsVoipSandboxChannelRequest& request) const;

        /**
         * Delete an APNS VoIP sandbox channel<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteApnsVoipSandboxChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteApnsVoipSandboxChannelOutcomeCallable DeleteApnsVoipSandboxChannelCallable(const Model::DeleteApnsVoipSandboxChannelRequest& request) const;

        /**
         * Delete an APNS VoIP sandbox channel<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteApnsVoipSandboxChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteApnsVoipSandboxChannelAsync(const Model::DeleteApnsVoipSandboxChannelRequest& request, const DeleteApnsVoipSandboxChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Deletes an app.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteApp">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAppOutcome DeleteApp(const Model::DeleteAppRequest& request) const;

        /**
         * Deletes an app.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteApp">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAppOutcomeCallable DeleteAppCallable(const Model::DeleteAppRequest& request) const;

        /**
         * Deletes an app.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteApp">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAppAsync(const Model::DeleteAppRequest& request, const DeleteAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Delete a BAIDU GCM channel<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteBaiduChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBaiduChannelOutcome DeleteBaiduChannel(const Model::DeleteBaiduChannelRequest& request) const;

        /**
         * Delete a BAIDU GCM channel<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteBaiduChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBaiduChannelOutcomeCallable DeleteBaiduChannelCallable(const Model::DeleteBaiduChannelRequest& request) const;

        /**
         * Delete a BAIDU GCM channel<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteBaiduChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBaiduChannelAsync(const Model::DeleteBaiduChannelRequest& request, const DeleteBaiduChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Deletes a campaign.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteCampaign">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCampaignOutcome DeleteCampaign(const Model::DeleteCampaignRequest& request) const;

        /**
         * Deletes a campaign.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteCampaign">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCampaignOutcomeCallable DeleteCampaignCallable(const Model::DeleteCampaignRequest& request) const;

        /**
         * Deletes a campaign.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteCampaign">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCampaignAsync(const Model::DeleteCampaignRequest& request, const DeleteCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Delete an email channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteEmailChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEmailChannelOutcome DeleteEmailChannel(const Model::DeleteEmailChannelRequest& request) const;

        /**
         * Delete an email channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteEmailChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEmailChannelOutcomeCallable DeleteEmailChannelCallable(const Model::DeleteEmailChannelRequest& request) const;

        /**
         * Delete an email channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteEmailChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEmailChannelAsync(const Model::DeleteEmailChannelRequest& request, const DeleteEmailChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Deletes an endpoint.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEndpointOutcome DeleteEndpoint(const Model::DeleteEndpointRequest& request) const;

        /**
         * Deletes an endpoint.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteEndpoint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEndpointOutcomeCallable DeleteEndpointCallable(const Model::DeleteEndpointRequest& request) const;

        /**
         * Deletes an endpoint.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteEndpoint">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEndpointAsync(const Model::DeleteEndpointRequest& request, const DeleteEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Deletes the event stream for an app.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteEventStream">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEventStreamOutcome DeleteEventStream(const Model::DeleteEventStreamRequest& request) const;

        /**
         * Deletes the event stream for an app.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteEventStream">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEventStreamOutcomeCallable DeleteEventStreamCallable(const Model::DeleteEventStreamRequest& request) const;

        /**
         * Deletes the event stream for an app.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteEventStream">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEventStreamAsync(const Model::DeleteEventStreamRequest& request, const DeleteEventStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Deletes the GCM channel for an app.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteGcmChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGcmChannelOutcome DeleteGcmChannel(const Model::DeleteGcmChannelRequest& request) const;

        /**
         * Deletes the GCM channel for an app.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteGcmChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteGcmChannelOutcomeCallable DeleteGcmChannelCallable(const Model::DeleteGcmChannelRequest& request) const;

        /**
         * Deletes the GCM channel for an app.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteGcmChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteGcmChannelAsync(const Model::DeleteGcmChannelRequest& request, const DeleteGcmChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Deletes a segment.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteSegment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSegmentOutcome DeleteSegment(const Model::DeleteSegmentRequest& request) const;

        /**
         * Deletes a segment.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteSegment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSegmentOutcomeCallable DeleteSegmentCallable(const Model::DeleteSegmentRequest& request) const;

        /**
         * Deletes a segment.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteSegment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSegmentAsync(const Model::DeleteSegmentRequest& request, const DeleteSegmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Delete an SMS channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteSmsChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSmsChannelOutcome DeleteSmsChannel(const Model::DeleteSmsChannelRequest& request) const;

        /**
         * Delete an SMS channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteSmsChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSmsChannelOutcomeCallable DeleteSmsChannelCallable(const Model::DeleteSmsChannelRequest& request) const;

        /**
         * Delete an SMS channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteSmsChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSmsChannelAsync(const Model::DeleteSmsChannelRequest& request, const DeleteSmsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Deletes endpoints that are associated with a User ID.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteUserEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserEndpointsOutcome DeleteUserEndpoints(const Model::DeleteUserEndpointsRequest& request) const;

        /**
         * Deletes endpoints that are associated with a User ID.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteUserEndpoints">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteUserEndpointsOutcomeCallable DeleteUserEndpointsCallable(const Model::DeleteUserEndpointsRequest& request) const;

        /**
         * Deletes endpoints that are associated with a User ID.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteUserEndpoints">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUserEndpointsAsync(const Model::DeleteUserEndpointsRequest& request, const DeleteUserEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Get an ADM channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetAdmChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAdmChannelOutcome GetAdmChannel(const Model::GetAdmChannelRequest& request) const;

        /**
         * Get an ADM channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetAdmChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAdmChannelOutcomeCallable GetAdmChannelCallable(const Model::GetAdmChannelRequest& request) const;

        /**
         * Get an ADM channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetAdmChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAdmChannelAsync(const Model::GetAdmChannelRequest& request, const GetAdmChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns information about the APNs channel for an app.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetApnsChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApnsChannelOutcome GetApnsChannel(const Model::GetApnsChannelRequest& request) const;

        /**
         * Returns information about the APNs channel for an app.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetApnsChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetApnsChannelOutcomeCallable GetApnsChannelCallable(const Model::GetApnsChannelRequest& request) const;

        /**
         * Returns information about the APNs channel for an app.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetApnsChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetApnsChannelAsync(const Model::GetApnsChannelRequest& request, const GetApnsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Get an APNS sandbox channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetApnsSandboxChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApnsSandboxChannelOutcome GetApnsSandboxChannel(const Model::GetApnsSandboxChannelRequest& request) const;

        /**
         * Get an APNS sandbox channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetApnsSandboxChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetApnsSandboxChannelOutcomeCallable GetApnsSandboxChannelCallable(const Model::GetApnsSandboxChannelRequest& request) const;

        /**
         * Get an APNS sandbox channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetApnsSandboxChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetApnsSandboxChannelAsync(const Model::GetApnsSandboxChannelRequest& request, const GetApnsSandboxChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Get an APNS VoIP channel<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetApnsVoipChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApnsVoipChannelOutcome GetApnsVoipChannel(const Model::GetApnsVoipChannelRequest& request) const;

        /**
         * Get an APNS VoIP channel<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetApnsVoipChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetApnsVoipChannelOutcomeCallable GetApnsVoipChannelCallable(const Model::GetApnsVoipChannelRequest& request) const;

        /**
         * Get an APNS VoIP channel<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetApnsVoipChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetApnsVoipChannelAsync(const Model::GetApnsVoipChannelRequest& request, const GetApnsVoipChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Get an APNS VoIPSandbox channel<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetApnsVoipSandboxChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApnsVoipSandboxChannelOutcome GetApnsVoipSandboxChannel(const Model::GetApnsVoipSandboxChannelRequest& request) const;

        /**
         * Get an APNS VoIPSandbox channel<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetApnsVoipSandboxChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetApnsVoipSandboxChannelOutcomeCallable GetApnsVoipSandboxChannelCallable(const Model::GetApnsVoipSandboxChannelRequest& request) const;

        /**
         * Get an APNS VoIPSandbox channel<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetApnsVoipSandboxChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetApnsVoipSandboxChannelAsync(const Model::GetApnsVoipSandboxChannelRequest& request, const GetApnsVoipSandboxChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns information about an app.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetApp">AWS API
         * Reference</a></p>
         */
        virtual Model::GetAppOutcome GetApp(const Model::GetAppRequest& request) const;

        /**
         * Returns information about an app.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetApp">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAppOutcomeCallable GetAppCallable(const Model::GetAppRequest& request) const;

        /**
         * Returns information about an app.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetApp">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAppAsync(const Model::GetAppRequest& request, const GetAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Used to request the settings for an app.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetApplicationSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApplicationSettingsOutcome GetApplicationSettings(const Model::GetApplicationSettingsRequest& request) const;

        /**
         * Used to request the settings for an app.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetApplicationSettings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetApplicationSettingsOutcomeCallable GetApplicationSettingsCallable(const Model::GetApplicationSettingsRequest& request) const;

        /**
         * Used to request the settings for an app.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetApplicationSettings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetApplicationSettingsAsync(const Model::GetApplicationSettingsRequest& request, const GetApplicationSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns information about your apps.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetApps">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAppsOutcome GetApps(const Model::GetAppsRequest& request) const;

        /**
         * Returns information about your apps.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetApps">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAppsOutcomeCallable GetAppsCallable(const Model::GetAppsRequest& request) const;

        /**
         * Returns information about your apps.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetApps">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAppsAsync(const Model::GetAppsRequest& request, const GetAppsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Get a BAIDU GCM channel<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetBaiduChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBaiduChannelOutcome GetBaiduChannel(const Model::GetBaiduChannelRequest& request) const;

        /**
         * Get a BAIDU GCM channel<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetBaiduChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBaiduChannelOutcomeCallable GetBaiduChannelCallable(const Model::GetBaiduChannelRequest& request) const;

        /**
         * Get a BAIDU GCM channel<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetBaiduChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBaiduChannelAsync(const Model::GetBaiduChannelRequest& request, const GetBaiduChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns information about a campaign.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetCampaign">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCampaignOutcome GetCampaign(const Model::GetCampaignRequest& request) const;

        /**
         * Returns information about a campaign.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetCampaign">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCampaignOutcomeCallable GetCampaignCallable(const Model::GetCampaignRequest& request) const;

        /**
         * Returns information about a campaign.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetCampaign">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCampaignAsync(const Model::GetCampaignRequest& request, const GetCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns information about the activity performed by a campaign.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetCampaignActivities">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCampaignActivitiesOutcome GetCampaignActivities(const Model::GetCampaignActivitiesRequest& request) const;

        /**
         * Returns information about the activity performed by a campaign.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetCampaignActivities">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCampaignActivitiesOutcomeCallable GetCampaignActivitiesCallable(const Model::GetCampaignActivitiesRequest& request) const;

        /**
         * Returns information about the activity performed by a campaign.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetCampaignActivities">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCampaignActivitiesAsync(const Model::GetCampaignActivitiesRequest& request, const GetCampaignActivitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns information about a specific version of a campaign.<p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetCampaignVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCampaignVersionOutcome GetCampaignVersion(const Model::GetCampaignVersionRequest& request) const;

        /**
         * Returns information about a specific version of a campaign.<p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetCampaignVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCampaignVersionOutcomeCallable GetCampaignVersionCallable(const Model::GetCampaignVersionRequest& request) const;

        /**
         * Returns information about a specific version of a campaign.<p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetCampaignVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCampaignVersionAsync(const Model::GetCampaignVersionRequest& request, const GetCampaignVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns information about your campaign versions.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetCampaignVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCampaignVersionsOutcome GetCampaignVersions(const Model::GetCampaignVersionsRequest& request) const;

        /**
         * Returns information about your campaign versions.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetCampaignVersions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCampaignVersionsOutcomeCallable GetCampaignVersionsCallable(const Model::GetCampaignVersionsRequest& request) const;

        /**
         * Returns information about your campaign versions.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetCampaignVersions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCampaignVersionsAsync(const Model::GetCampaignVersionsRequest& request, const GetCampaignVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns information about your campaigns.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetCampaigns">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCampaignsOutcome GetCampaigns(const Model::GetCampaignsRequest& request) const;

        /**
         * Returns information about your campaigns.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetCampaigns">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCampaignsOutcomeCallable GetCampaignsCallable(const Model::GetCampaignsRequest& request) const;

        /**
         * Returns information about your campaigns.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetCampaigns">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCampaignsAsync(const Model::GetCampaignsRequest& request, const GetCampaignsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Get all channels.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetChannels">AWS
         * API Reference</a></p>
         */
        virtual Model::GetChannelsOutcome GetChannels(const Model::GetChannelsRequest& request) const;

        /**
         * Get all channels.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetChannels">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetChannelsOutcomeCallable GetChannelsCallable(const Model::GetChannelsRequest& request) const;

        /**
         * Get all channels.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetChannels">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetChannelsAsync(const Model::GetChannelsRequest& request, const GetChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Get an email channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetEmailChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEmailChannelOutcome GetEmailChannel(const Model::GetEmailChannelRequest& request) const;

        /**
         * Get an email channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetEmailChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEmailChannelOutcomeCallable GetEmailChannelCallable(const Model::GetEmailChannelRequest& request) const;

        /**
         * Get an email channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetEmailChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEmailChannelAsync(const Model::GetEmailChannelRequest& request, const GetEmailChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns information about an endpoint.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEndpointOutcome GetEndpoint(const Model::GetEndpointRequest& request) const;

        /**
         * Returns information about an endpoint.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetEndpoint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEndpointOutcomeCallable GetEndpointCallable(const Model::GetEndpointRequest& request) const;

        /**
         * Returns information about an endpoint.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetEndpoint">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEndpointAsync(const Model::GetEndpointRequest& request, const GetEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns the event stream for an app.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetEventStream">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEventStreamOutcome GetEventStream(const Model::GetEventStreamRequest& request) const;

        /**
         * Returns the event stream for an app.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetEventStream">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEventStreamOutcomeCallable GetEventStreamCallable(const Model::GetEventStreamRequest& request) const;

        /**
         * Returns the event stream for an app.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetEventStream">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEventStreamAsync(const Model::GetEventStreamRequest& request, const GetEventStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns information about an export job.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetExportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetExportJobOutcome GetExportJob(const Model::GetExportJobRequest& request) const;

        /**
         * Returns information about an export job.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetExportJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetExportJobOutcomeCallable GetExportJobCallable(const Model::GetExportJobRequest& request) const;

        /**
         * Returns information about an export job.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetExportJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetExportJobAsync(const Model::GetExportJobRequest& request, const GetExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns information about your export jobs.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetExportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::GetExportJobsOutcome GetExportJobs(const Model::GetExportJobsRequest& request) const;

        /**
         * Returns information about your export jobs.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetExportJobs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetExportJobsOutcomeCallable GetExportJobsCallable(const Model::GetExportJobsRequest& request) const;

        /**
         * Returns information about your export jobs.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetExportJobs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetExportJobsAsync(const Model::GetExportJobsRequest& request, const GetExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns information about the GCM channel for an app.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetGcmChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGcmChannelOutcome GetGcmChannel(const Model::GetGcmChannelRequest& request) const;

        /**
         * Returns information about the GCM channel for an app.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetGcmChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetGcmChannelOutcomeCallable GetGcmChannelCallable(const Model::GetGcmChannelRequest& request) const;

        /**
         * Returns information about the GCM channel for an app.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetGcmChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetGcmChannelAsync(const Model::GetGcmChannelRequest& request, const GetGcmChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns information about an import job.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetImportJobOutcome GetImportJob(const Model::GetImportJobRequest& request) const;

        /**
         * Returns information about an import job.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetImportJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetImportJobOutcomeCallable GetImportJobCallable(const Model::GetImportJobRequest& request) const;

        /**
         * Returns information about an import job.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetImportJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetImportJobAsync(const Model::GetImportJobRequest& request, const GetImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns information about your import jobs.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetImportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::GetImportJobsOutcome GetImportJobs(const Model::GetImportJobsRequest& request) const;

        /**
         * Returns information about your import jobs.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetImportJobs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetImportJobsOutcomeCallable GetImportJobsCallable(const Model::GetImportJobsRequest& request) const;

        /**
         * Returns information about your import jobs.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetImportJobs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetImportJobsAsync(const Model::GetImportJobsRequest& request, const GetImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns information about a segment.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetSegment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSegmentOutcome GetSegment(const Model::GetSegmentRequest& request) const;

        /**
         * Returns information about a segment.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetSegment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSegmentOutcomeCallable GetSegmentCallable(const Model::GetSegmentRequest& request) const;

        /**
         * Returns information about a segment.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetSegment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSegmentAsync(const Model::GetSegmentRequest& request, const GetSegmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns a list of export jobs for a specific segment.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetSegmentExportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSegmentExportJobsOutcome GetSegmentExportJobs(const Model::GetSegmentExportJobsRequest& request) const;

        /**
         * Returns a list of export jobs for a specific segment.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetSegmentExportJobs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSegmentExportJobsOutcomeCallable GetSegmentExportJobsCallable(const Model::GetSegmentExportJobsRequest& request) const;

        /**
         * Returns a list of export jobs for a specific segment.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetSegmentExportJobs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSegmentExportJobsAsync(const Model::GetSegmentExportJobsRequest& request, const GetSegmentExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns a list of import jobs for a specific segment.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetSegmentImportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSegmentImportJobsOutcome GetSegmentImportJobs(const Model::GetSegmentImportJobsRequest& request) const;

        /**
         * Returns a list of import jobs for a specific segment.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetSegmentImportJobs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSegmentImportJobsOutcomeCallable GetSegmentImportJobsCallable(const Model::GetSegmentImportJobsRequest& request) const;

        /**
         * Returns a list of import jobs for a specific segment.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetSegmentImportJobs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSegmentImportJobsAsync(const Model::GetSegmentImportJobsRequest& request, const GetSegmentImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns information about a segment version.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetSegmentVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSegmentVersionOutcome GetSegmentVersion(const Model::GetSegmentVersionRequest& request) const;

        /**
         * Returns information about a segment version.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetSegmentVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSegmentVersionOutcomeCallable GetSegmentVersionCallable(const Model::GetSegmentVersionRequest& request) const;

        /**
         * Returns information about a segment version.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetSegmentVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSegmentVersionAsync(const Model::GetSegmentVersionRequest& request, const GetSegmentVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns information about your segment versions.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetSegmentVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSegmentVersionsOutcome GetSegmentVersions(const Model::GetSegmentVersionsRequest& request) const;

        /**
         * Returns information about your segment versions.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetSegmentVersions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSegmentVersionsOutcomeCallable GetSegmentVersionsCallable(const Model::GetSegmentVersionsRequest& request) const;

        /**
         * Returns information about your segment versions.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetSegmentVersions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSegmentVersionsAsync(const Model::GetSegmentVersionsRequest& request, const GetSegmentVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Used to get information about your segments.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetSegments">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSegmentsOutcome GetSegments(const Model::GetSegmentsRequest& request) const;

        /**
         * Used to get information about your segments.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetSegments">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSegmentsOutcomeCallable GetSegmentsCallable(const Model::GetSegmentsRequest& request) const;

        /**
         * Used to get information about your segments.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetSegments">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSegmentsAsync(const Model::GetSegmentsRequest& request, const GetSegmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Get an SMS channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetSmsChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSmsChannelOutcome GetSmsChannel(const Model::GetSmsChannelRequest& request) const;

        /**
         * Get an SMS channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetSmsChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSmsChannelOutcomeCallable GetSmsChannelCallable(const Model::GetSmsChannelRequest& request) const;

        /**
         * Get an SMS channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetSmsChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSmsChannelAsync(const Model::GetSmsChannelRequest& request, const GetSmsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns information about the endpoints that are associated with a User
         * ID.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetUserEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUserEndpointsOutcome GetUserEndpoints(const Model::GetUserEndpointsRequest& request) const;

        /**
         * Returns information about the endpoints that are associated with a User
         * ID.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetUserEndpoints">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetUserEndpointsOutcomeCallable GetUserEndpointsCallable(const Model::GetUserEndpointsRequest& request) const;

        /**
         * Returns information about the endpoints that are associated with a User
         * ID.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetUserEndpoints">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetUserEndpointsAsync(const Model::GetUserEndpointsRequest& request, const GetUserEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns information about the specified phone number.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/PhoneNumberValidate">AWS
         * API Reference</a></p>
         */
        virtual Model::PhoneNumberValidateOutcome PhoneNumberValidate(const Model::PhoneNumberValidateRequest& request) const;

        /**
         * Returns information about the specified phone number.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/PhoneNumberValidate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PhoneNumberValidateOutcomeCallable PhoneNumberValidateCallable(const Model::PhoneNumberValidateRequest& request) const;

        /**
         * Returns information about the specified phone number.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/PhoneNumberValidate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PhoneNumberValidateAsync(const Model::PhoneNumberValidateRequest& request, const PhoneNumberValidateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Use to create or update the event stream for an app.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/PutEventStream">AWS
         * API Reference</a></p>
         */
        virtual Model::PutEventStreamOutcome PutEventStream(const Model::PutEventStreamRequest& request) const;

        /**
         * Use to create or update the event stream for an app.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/PutEventStream">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutEventStreamOutcomeCallable PutEventStreamCallable(const Model::PutEventStreamRequest& request) const;

        /**
         * Use to create or update the event stream for an app.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/PutEventStream">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutEventStreamAsync(const Model::PutEventStreamRequest& request, const PutEventStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Use to record events for endpoints. This method creates events and creates or
         * updates the endpoints that those events are associated with.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/PutEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::PutEventsOutcome PutEvents(const Model::PutEventsRequest& request) const;

        /**
         * Use to record events for endpoints. This method creates events and creates or
         * updates the endpoints that those events are associated with.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/PutEvents">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutEventsOutcomeCallable PutEventsCallable(const Model::PutEventsRequest& request) const;

        /**
         * Use to record events for endpoints. This method creates events and creates or
         * updates the endpoints that those events are associated with.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/PutEvents">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutEventsAsync(const Model::PutEventsRequest& request, const PutEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Used to remove the attributes for an app<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/RemoveAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveAttributesOutcome RemoveAttributes(const Model::RemoveAttributesRequest& request) const;

        /**
         * Used to remove the attributes for an app<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/RemoveAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveAttributesOutcomeCallable RemoveAttributesCallable(const Model::RemoveAttributesRequest& request) const;

        /**
         * Used to remove the attributes for an app<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/RemoveAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveAttributesAsync(const Model::RemoveAttributesRequest& request, const RemoveAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Used to send a direct message.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/SendMessages">AWS
         * API Reference</a></p>
         */
        virtual Model::SendMessagesOutcome SendMessages(const Model::SendMessagesRequest& request) const;

        /**
         * Used to send a direct message.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/SendMessages">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendMessagesOutcomeCallable SendMessagesCallable(const Model::SendMessagesRequest& request) const;

        /**
         * Used to send a direct message.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/SendMessages">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendMessagesAsync(const Model::SendMessagesRequest& request, const SendMessagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Used to send a message to a list of users.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/SendUsersMessages">AWS
         * API Reference</a></p>
         */
        virtual Model::SendUsersMessagesOutcome SendUsersMessages(const Model::SendUsersMessagesRequest& request) const;

        /**
         * Used to send a message to a list of users.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/SendUsersMessages">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendUsersMessagesOutcomeCallable SendUsersMessagesCallable(const Model::SendUsersMessagesRequest& request) const;

        /**
         * Used to send a message to a list of users.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/SendUsersMessages">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendUsersMessagesAsync(const Model::SendUsersMessagesRequest& request, const SendUsersMessagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Update an ADM channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateAdmChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAdmChannelOutcome UpdateAdmChannel(const Model::UpdateAdmChannelRequest& request) const;

        /**
         * Update an ADM channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateAdmChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAdmChannelOutcomeCallable UpdateAdmChannelCallable(const Model::UpdateAdmChannelRequest& request) const;

        /**
         * Update an ADM channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateAdmChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAdmChannelAsync(const Model::UpdateAdmChannelRequest& request, const UpdateAdmChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Use to update the APNs channel for an app.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateApnsChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApnsChannelOutcome UpdateApnsChannel(const Model::UpdateApnsChannelRequest& request) const;

        /**
         * Use to update the APNs channel for an app.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateApnsChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateApnsChannelOutcomeCallable UpdateApnsChannelCallable(const Model::UpdateApnsChannelRequest& request) const;

        /**
         * Use to update the APNs channel for an app.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateApnsChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateApnsChannelAsync(const Model::UpdateApnsChannelRequest& request, const UpdateApnsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Update an APNS sandbox channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateApnsSandboxChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApnsSandboxChannelOutcome UpdateApnsSandboxChannel(const Model::UpdateApnsSandboxChannelRequest& request) const;

        /**
         * Update an APNS sandbox channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateApnsSandboxChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateApnsSandboxChannelOutcomeCallable UpdateApnsSandboxChannelCallable(const Model::UpdateApnsSandboxChannelRequest& request) const;

        /**
         * Update an APNS sandbox channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateApnsSandboxChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateApnsSandboxChannelAsync(const Model::UpdateApnsSandboxChannelRequest& request, const UpdateApnsSandboxChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Update an APNS VoIP channel<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateApnsVoipChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApnsVoipChannelOutcome UpdateApnsVoipChannel(const Model::UpdateApnsVoipChannelRequest& request) const;

        /**
         * Update an APNS VoIP channel<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateApnsVoipChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateApnsVoipChannelOutcomeCallable UpdateApnsVoipChannelCallable(const Model::UpdateApnsVoipChannelRequest& request) const;

        /**
         * Update an APNS VoIP channel<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateApnsVoipChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateApnsVoipChannelAsync(const Model::UpdateApnsVoipChannelRequest& request, const UpdateApnsVoipChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Update an APNS VoIP sandbox channel<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateApnsVoipSandboxChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApnsVoipSandboxChannelOutcome UpdateApnsVoipSandboxChannel(const Model::UpdateApnsVoipSandboxChannelRequest& request) const;

        /**
         * Update an APNS VoIP sandbox channel<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateApnsVoipSandboxChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateApnsVoipSandboxChannelOutcomeCallable UpdateApnsVoipSandboxChannelCallable(const Model::UpdateApnsVoipSandboxChannelRequest& request) const;

        /**
         * Update an APNS VoIP sandbox channel<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateApnsVoipSandboxChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateApnsVoipSandboxChannelAsync(const Model::UpdateApnsVoipSandboxChannelRequest& request, const UpdateApnsVoipSandboxChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Used to update the settings for an app.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateApplicationSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApplicationSettingsOutcome UpdateApplicationSettings(const Model::UpdateApplicationSettingsRequest& request) const;

        /**
         * Used to update the settings for an app.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateApplicationSettings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateApplicationSettingsOutcomeCallable UpdateApplicationSettingsCallable(const Model::UpdateApplicationSettingsRequest& request) const;

        /**
         * Used to update the settings for an app.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateApplicationSettings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateApplicationSettingsAsync(const Model::UpdateApplicationSettingsRequest& request, const UpdateApplicationSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Update a BAIDU GCM channel<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateBaiduChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBaiduChannelOutcome UpdateBaiduChannel(const Model::UpdateBaiduChannelRequest& request) const;

        /**
         * Update a BAIDU GCM channel<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateBaiduChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateBaiduChannelOutcomeCallable UpdateBaiduChannelCallable(const Model::UpdateBaiduChannelRequest& request) const;

        /**
         * Update a BAIDU GCM channel<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateBaiduChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateBaiduChannelAsync(const Model::UpdateBaiduChannelRequest& request, const UpdateBaiduChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Use to update a campaign.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateCampaign">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCampaignOutcome UpdateCampaign(const Model::UpdateCampaignRequest& request) const;

        /**
         * Use to update a campaign.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateCampaign">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateCampaignOutcomeCallable UpdateCampaignCallable(const Model::UpdateCampaignRequest& request) const;

        /**
         * Use to update a campaign.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateCampaign">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateCampaignAsync(const Model::UpdateCampaignRequest& request, const UpdateCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Update an email channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateEmailChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEmailChannelOutcome UpdateEmailChannel(const Model::UpdateEmailChannelRequest& request) const;

        /**
         * Update an email channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateEmailChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateEmailChannelOutcomeCallable UpdateEmailChannelCallable(const Model::UpdateEmailChannelRequest& request) const;

        /**
         * Update an email channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateEmailChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateEmailChannelAsync(const Model::UpdateEmailChannelRequest& request, const UpdateEmailChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Creates or updates an endpoint.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEndpointOutcome UpdateEndpoint(const Model::UpdateEndpointRequest& request) const;

        /**
         * Creates or updates an endpoint.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateEndpoint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateEndpointOutcomeCallable UpdateEndpointCallable(const Model::UpdateEndpointRequest& request) const;

        /**
         * Creates or updates an endpoint.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateEndpoint">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateEndpointAsync(const Model::UpdateEndpointRequest& request, const UpdateEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Use to update a batch of endpoints.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateEndpointsBatch">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEndpointsBatchOutcome UpdateEndpointsBatch(const Model::UpdateEndpointsBatchRequest& request) const;

        /**
         * Use to update a batch of endpoints.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateEndpointsBatch">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateEndpointsBatchOutcomeCallable UpdateEndpointsBatchCallable(const Model::UpdateEndpointsBatchRequest& request) const;

        /**
         * Use to update a batch of endpoints.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateEndpointsBatch">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateEndpointsBatchAsync(const Model::UpdateEndpointsBatchRequest& request, const UpdateEndpointsBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Use to update the GCM channel for an app.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateGcmChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGcmChannelOutcome UpdateGcmChannel(const Model::UpdateGcmChannelRequest& request) const;

        /**
         * Use to update the GCM channel for an app.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateGcmChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateGcmChannelOutcomeCallable UpdateGcmChannelCallable(const Model::UpdateGcmChannelRequest& request) const;

        /**
         * Use to update the GCM channel for an app.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateGcmChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateGcmChannelAsync(const Model::UpdateGcmChannelRequest& request, const UpdateGcmChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Used to update a segment.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateSegment">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSegmentOutcome UpdateSegment(const Model::UpdateSegmentRequest& request) const;

        /**
         * Used to update a segment.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateSegment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSegmentOutcomeCallable UpdateSegmentCallable(const Model::UpdateSegmentRequest& request) const;

        /**
         * Used to update a segment.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateSegment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSegmentAsync(const Model::UpdateSegmentRequest& request, const UpdateSegmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Update an SMS channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateSmsChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSmsChannelOutcome UpdateSmsChannel(const Model::UpdateSmsChannelRequest& request) const;

        /**
         * Update an SMS channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateSmsChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSmsChannelOutcomeCallable UpdateSmsChannelCallable(const Model::UpdateSmsChannelRequest& request) const;

        /**
         * Update an SMS channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateSmsChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSmsChannelAsync(const Model::UpdateSmsChannelRequest& request, const UpdateSmsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
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
        void PhoneNumberValidateAsyncHelper(const Model::PhoneNumberValidateRequest& request, const PhoneNumberValidateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutEventStreamAsyncHelper(const Model::PutEventStreamRequest& request, const PutEventStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutEventsAsyncHelper(const Model::PutEventsRequest& request, const PutEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveAttributesAsyncHelper(const Model::RemoveAttributesRequest& request, const RemoveAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SendMessagesAsyncHelper(const Model::SendMessagesRequest& request, const SendMessagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SendUsersMessagesAsyncHelper(const Model::SendUsersMessagesRequest& request, const SendUsersMessagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
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

      Aws::String m_uri;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace Pinpoint
} // namespace Aws
