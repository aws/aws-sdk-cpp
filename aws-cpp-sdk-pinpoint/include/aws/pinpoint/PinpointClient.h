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
#include <aws/pinpoint/model/CreateCampaignResult.h>
#include <aws/pinpoint/model/CreateImportJobResult.h>
#include <aws/pinpoint/model/CreateSegmentResult.h>
#include <aws/pinpoint/model/DeleteApnsChannelResult.h>
#include <aws/pinpoint/model/DeleteApnsSandboxChannelResult.h>
#include <aws/pinpoint/model/DeleteCampaignResult.h>
#include <aws/pinpoint/model/DeleteEmailChannelResult.h>
#include <aws/pinpoint/model/DeleteEventStreamResult.h>
#include <aws/pinpoint/model/DeleteGcmChannelResult.h>
#include <aws/pinpoint/model/DeleteSegmentResult.h>
#include <aws/pinpoint/model/DeleteSmsChannelResult.h>
#include <aws/pinpoint/model/GetApnsChannelResult.h>
#include <aws/pinpoint/model/GetApnsSandboxChannelResult.h>
#include <aws/pinpoint/model/GetApplicationSettingsResult.h>
#include <aws/pinpoint/model/GetCampaignResult.h>
#include <aws/pinpoint/model/GetCampaignActivitiesResult.h>
#include <aws/pinpoint/model/GetCampaignVersionResult.h>
#include <aws/pinpoint/model/GetCampaignVersionsResult.h>
#include <aws/pinpoint/model/GetCampaignsResult.h>
#include <aws/pinpoint/model/GetEmailChannelResult.h>
#include <aws/pinpoint/model/GetEndpointResult.h>
#include <aws/pinpoint/model/GetEventStreamResult.h>
#include <aws/pinpoint/model/GetGcmChannelResult.h>
#include <aws/pinpoint/model/GetImportJobResult.h>
#include <aws/pinpoint/model/GetImportJobsResult.h>
#include <aws/pinpoint/model/GetSegmentResult.h>
#include <aws/pinpoint/model/GetSegmentImportJobsResult.h>
#include <aws/pinpoint/model/GetSegmentVersionResult.h>
#include <aws/pinpoint/model/GetSegmentVersionsResult.h>
#include <aws/pinpoint/model/GetSegmentsResult.h>
#include <aws/pinpoint/model/GetSmsChannelResult.h>
#include <aws/pinpoint/model/PutEventStreamResult.h>
#include <aws/pinpoint/model/SendMessagesResult.h>
#include <aws/pinpoint/model/UpdateApnsChannelResult.h>
#include <aws/pinpoint/model/UpdateApnsSandboxChannelResult.h>
#include <aws/pinpoint/model/UpdateApplicationSettingsResult.h>
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

namespace Json
{
  class JsonValue;
} // namespace Json
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
        class CreateCampaignRequest;
        class CreateImportJobRequest;
        class CreateSegmentRequest;
        class DeleteApnsChannelRequest;
        class DeleteApnsSandboxChannelRequest;
        class DeleteCampaignRequest;
        class DeleteEmailChannelRequest;
        class DeleteEventStreamRequest;
        class DeleteGcmChannelRequest;
        class DeleteSegmentRequest;
        class DeleteSmsChannelRequest;
        class GetApnsChannelRequest;
        class GetApnsSandboxChannelRequest;
        class GetApplicationSettingsRequest;
        class GetCampaignRequest;
        class GetCampaignActivitiesRequest;
        class GetCampaignVersionRequest;
        class GetCampaignVersionsRequest;
        class GetCampaignsRequest;
        class GetEmailChannelRequest;
        class GetEndpointRequest;
        class GetEventStreamRequest;
        class GetGcmChannelRequest;
        class GetImportJobRequest;
        class GetImportJobsRequest;
        class GetSegmentRequest;
        class GetSegmentImportJobsRequest;
        class GetSegmentVersionRequest;
        class GetSegmentVersionsRequest;
        class GetSegmentsRequest;
        class GetSmsChannelRequest;
        class PutEventStreamRequest;
        class SendMessagesRequest;
        class UpdateApnsChannelRequest;
        class UpdateApnsSandboxChannelRequest;
        class UpdateApplicationSettingsRequest;
        class UpdateCampaignRequest;
        class UpdateEmailChannelRequest;
        class UpdateEndpointRequest;
        class UpdateEndpointsBatchRequest;
        class UpdateGcmChannelRequest;
        class UpdateSegmentRequest;
        class UpdateSmsChannelRequest;

        typedef Aws::Utils::Outcome<CreateCampaignResult, Aws::Client::AWSError<PinpointErrors>> CreateCampaignOutcome;
        typedef Aws::Utils::Outcome<CreateImportJobResult, Aws::Client::AWSError<PinpointErrors>> CreateImportJobOutcome;
        typedef Aws::Utils::Outcome<CreateSegmentResult, Aws::Client::AWSError<PinpointErrors>> CreateSegmentOutcome;
        typedef Aws::Utils::Outcome<DeleteApnsChannelResult, Aws::Client::AWSError<PinpointErrors>> DeleteApnsChannelOutcome;
        typedef Aws::Utils::Outcome<DeleteApnsSandboxChannelResult, Aws::Client::AWSError<PinpointErrors>> DeleteApnsSandboxChannelOutcome;
        typedef Aws::Utils::Outcome<DeleteCampaignResult, Aws::Client::AWSError<PinpointErrors>> DeleteCampaignOutcome;
        typedef Aws::Utils::Outcome<DeleteEmailChannelResult, Aws::Client::AWSError<PinpointErrors>> DeleteEmailChannelOutcome;
        typedef Aws::Utils::Outcome<DeleteEventStreamResult, Aws::Client::AWSError<PinpointErrors>> DeleteEventStreamOutcome;
        typedef Aws::Utils::Outcome<DeleteGcmChannelResult, Aws::Client::AWSError<PinpointErrors>> DeleteGcmChannelOutcome;
        typedef Aws::Utils::Outcome<DeleteSegmentResult, Aws::Client::AWSError<PinpointErrors>> DeleteSegmentOutcome;
        typedef Aws::Utils::Outcome<DeleteSmsChannelResult, Aws::Client::AWSError<PinpointErrors>> DeleteSmsChannelOutcome;
        typedef Aws::Utils::Outcome<GetApnsChannelResult, Aws::Client::AWSError<PinpointErrors>> GetApnsChannelOutcome;
        typedef Aws::Utils::Outcome<GetApnsSandboxChannelResult, Aws::Client::AWSError<PinpointErrors>> GetApnsSandboxChannelOutcome;
        typedef Aws::Utils::Outcome<GetApplicationSettingsResult, Aws::Client::AWSError<PinpointErrors>> GetApplicationSettingsOutcome;
        typedef Aws::Utils::Outcome<GetCampaignResult, Aws::Client::AWSError<PinpointErrors>> GetCampaignOutcome;
        typedef Aws::Utils::Outcome<GetCampaignActivitiesResult, Aws::Client::AWSError<PinpointErrors>> GetCampaignActivitiesOutcome;
        typedef Aws::Utils::Outcome<GetCampaignVersionResult, Aws::Client::AWSError<PinpointErrors>> GetCampaignVersionOutcome;
        typedef Aws::Utils::Outcome<GetCampaignVersionsResult, Aws::Client::AWSError<PinpointErrors>> GetCampaignVersionsOutcome;
        typedef Aws::Utils::Outcome<GetCampaignsResult, Aws::Client::AWSError<PinpointErrors>> GetCampaignsOutcome;
        typedef Aws::Utils::Outcome<GetEmailChannelResult, Aws::Client::AWSError<PinpointErrors>> GetEmailChannelOutcome;
        typedef Aws::Utils::Outcome<GetEndpointResult, Aws::Client::AWSError<PinpointErrors>> GetEndpointOutcome;
        typedef Aws::Utils::Outcome<GetEventStreamResult, Aws::Client::AWSError<PinpointErrors>> GetEventStreamOutcome;
        typedef Aws::Utils::Outcome<GetGcmChannelResult, Aws::Client::AWSError<PinpointErrors>> GetGcmChannelOutcome;
        typedef Aws::Utils::Outcome<GetImportJobResult, Aws::Client::AWSError<PinpointErrors>> GetImportJobOutcome;
        typedef Aws::Utils::Outcome<GetImportJobsResult, Aws::Client::AWSError<PinpointErrors>> GetImportJobsOutcome;
        typedef Aws::Utils::Outcome<GetSegmentResult, Aws::Client::AWSError<PinpointErrors>> GetSegmentOutcome;
        typedef Aws::Utils::Outcome<GetSegmentImportJobsResult, Aws::Client::AWSError<PinpointErrors>> GetSegmentImportJobsOutcome;
        typedef Aws::Utils::Outcome<GetSegmentVersionResult, Aws::Client::AWSError<PinpointErrors>> GetSegmentVersionOutcome;
        typedef Aws::Utils::Outcome<GetSegmentVersionsResult, Aws::Client::AWSError<PinpointErrors>> GetSegmentVersionsOutcome;
        typedef Aws::Utils::Outcome<GetSegmentsResult, Aws::Client::AWSError<PinpointErrors>> GetSegmentsOutcome;
        typedef Aws::Utils::Outcome<GetSmsChannelResult, Aws::Client::AWSError<PinpointErrors>> GetSmsChannelOutcome;
        typedef Aws::Utils::Outcome<PutEventStreamResult, Aws::Client::AWSError<PinpointErrors>> PutEventStreamOutcome;
        typedef Aws::Utils::Outcome<SendMessagesResult, Aws::Client::AWSError<PinpointErrors>> SendMessagesOutcome;
        typedef Aws::Utils::Outcome<UpdateApnsChannelResult, Aws::Client::AWSError<PinpointErrors>> UpdateApnsChannelOutcome;
        typedef Aws::Utils::Outcome<UpdateApnsSandboxChannelResult, Aws::Client::AWSError<PinpointErrors>> UpdateApnsSandboxChannelOutcome;
        typedef Aws::Utils::Outcome<UpdateApplicationSettingsResult, Aws::Client::AWSError<PinpointErrors>> UpdateApplicationSettingsOutcome;
        typedef Aws::Utils::Outcome<UpdateCampaignResult, Aws::Client::AWSError<PinpointErrors>> UpdateCampaignOutcome;
        typedef Aws::Utils::Outcome<UpdateEmailChannelResult, Aws::Client::AWSError<PinpointErrors>> UpdateEmailChannelOutcome;
        typedef Aws::Utils::Outcome<UpdateEndpointResult, Aws::Client::AWSError<PinpointErrors>> UpdateEndpointOutcome;
        typedef Aws::Utils::Outcome<UpdateEndpointsBatchResult, Aws::Client::AWSError<PinpointErrors>> UpdateEndpointsBatchOutcome;
        typedef Aws::Utils::Outcome<UpdateGcmChannelResult, Aws::Client::AWSError<PinpointErrors>> UpdateGcmChannelOutcome;
        typedef Aws::Utils::Outcome<UpdateSegmentResult, Aws::Client::AWSError<PinpointErrors>> UpdateSegmentOutcome;
        typedef Aws::Utils::Outcome<UpdateSmsChannelResult, Aws::Client::AWSError<PinpointErrors>> UpdateSmsChannelOutcome;

        typedef std::future<CreateCampaignOutcome> CreateCampaignOutcomeCallable;
        typedef std::future<CreateImportJobOutcome> CreateImportJobOutcomeCallable;
        typedef std::future<CreateSegmentOutcome> CreateSegmentOutcomeCallable;
        typedef std::future<DeleteApnsChannelOutcome> DeleteApnsChannelOutcomeCallable;
        typedef std::future<DeleteApnsSandboxChannelOutcome> DeleteApnsSandboxChannelOutcomeCallable;
        typedef std::future<DeleteCampaignOutcome> DeleteCampaignOutcomeCallable;
        typedef std::future<DeleteEmailChannelOutcome> DeleteEmailChannelOutcomeCallable;
        typedef std::future<DeleteEventStreamOutcome> DeleteEventStreamOutcomeCallable;
        typedef std::future<DeleteGcmChannelOutcome> DeleteGcmChannelOutcomeCallable;
        typedef std::future<DeleteSegmentOutcome> DeleteSegmentOutcomeCallable;
        typedef std::future<DeleteSmsChannelOutcome> DeleteSmsChannelOutcomeCallable;
        typedef std::future<GetApnsChannelOutcome> GetApnsChannelOutcomeCallable;
        typedef std::future<GetApnsSandboxChannelOutcome> GetApnsSandboxChannelOutcomeCallable;
        typedef std::future<GetApplicationSettingsOutcome> GetApplicationSettingsOutcomeCallable;
        typedef std::future<GetCampaignOutcome> GetCampaignOutcomeCallable;
        typedef std::future<GetCampaignActivitiesOutcome> GetCampaignActivitiesOutcomeCallable;
        typedef std::future<GetCampaignVersionOutcome> GetCampaignVersionOutcomeCallable;
        typedef std::future<GetCampaignVersionsOutcome> GetCampaignVersionsOutcomeCallable;
        typedef std::future<GetCampaignsOutcome> GetCampaignsOutcomeCallable;
        typedef std::future<GetEmailChannelOutcome> GetEmailChannelOutcomeCallable;
        typedef std::future<GetEndpointOutcome> GetEndpointOutcomeCallable;
        typedef std::future<GetEventStreamOutcome> GetEventStreamOutcomeCallable;
        typedef std::future<GetGcmChannelOutcome> GetGcmChannelOutcomeCallable;
        typedef std::future<GetImportJobOutcome> GetImportJobOutcomeCallable;
        typedef std::future<GetImportJobsOutcome> GetImportJobsOutcomeCallable;
        typedef std::future<GetSegmentOutcome> GetSegmentOutcomeCallable;
        typedef std::future<GetSegmentImportJobsOutcome> GetSegmentImportJobsOutcomeCallable;
        typedef std::future<GetSegmentVersionOutcome> GetSegmentVersionOutcomeCallable;
        typedef std::future<GetSegmentVersionsOutcome> GetSegmentVersionsOutcomeCallable;
        typedef std::future<GetSegmentsOutcome> GetSegmentsOutcomeCallable;
        typedef std::future<GetSmsChannelOutcome> GetSmsChannelOutcomeCallable;
        typedef std::future<PutEventStreamOutcome> PutEventStreamOutcomeCallable;
        typedef std::future<SendMessagesOutcome> SendMessagesOutcomeCallable;
        typedef std::future<UpdateApnsChannelOutcome> UpdateApnsChannelOutcomeCallable;
        typedef std::future<UpdateApnsSandboxChannelOutcome> UpdateApnsSandboxChannelOutcomeCallable;
        typedef std::future<UpdateApplicationSettingsOutcome> UpdateApplicationSettingsOutcomeCallable;
        typedef std::future<UpdateCampaignOutcome> UpdateCampaignOutcomeCallable;
        typedef std::future<UpdateEmailChannelOutcome> UpdateEmailChannelOutcomeCallable;
        typedef std::future<UpdateEndpointOutcome> UpdateEndpointOutcomeCallable;
        typedef std::future<UpdateEndpointsBatchOutcome> UpdateEndpointsBatchOutcomeCallable;
        typedef std::future<UpdateGcmChannelOutcome> UpdateGcmChannelOutcomeCallable;
        typedef std::future<UpdateSegmentOutcome> UpdateSegmentOutcomeCallable;
        typedef std::future<UpdateSmsChannelOutcome> UpdateSmsChannelOutcomeCallable;
} // namespace Model

  class PinpointClient;

    typedef std::function<void(const PinpointClient*, const Model::CreateCampaignRequest&, const Model::CreateCampaignOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCampaignResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::CreateImportJobRequest&, const Model::CreateImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateImportJobResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::CreateSegmentRequest&, const Model::CreateSegmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSegmentResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::DeleteApnsChannelRequest&, const Model::DeleteApnsChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApnsChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::DeleteApnsSandboxChannelRequest&, const Model::DeleteApnsSandboxChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApnsSandboxChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::DeleteCampaignRequest&, const Model::DeleteCampaignOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCampaignResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::DeleteEmailChannelRequest&, const Model::DeleteEmailChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEmailChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::DeleteEventStreamRequest&, const Model::DeleteEventStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEventStreamResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::DeleteGcmChannelRequest&, const Model::DeleteGcmChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteGcmChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::DeleteSegmentRequest&, const Model::DeleteSegmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSegmentResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::DeleteSmsChannelRequest&, const Model::DeleteSmsChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSmsChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetApnsChannelRequest&, const Model::GetApnsChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetApnsChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetApnsSandboxChannelRequest&, const Model::GetApnsSandboxChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetApnsSandboxChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetApplicationSettingsRequest&, const Model::GetApplicationSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetApplicationSettingsResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetCampaignRequest&, const Model::GetCampaignOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCampaignResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetCampaignActivitiesRequest&, const Model::GetCampaignActivitiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCampaignActivitiesResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetCampaignVersionRequest&, const Model::GetCampaignVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCampaignVersionResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetCampaignVersionsRequest&, const Model::GetCampaignVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCampaignVersionsResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetCampaignsRequest&, const Model::GetCampaignsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCampaignsResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetEmailChannelRequest&, const Model::GetEmailChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEmailChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetEndpointRequest&, const Model::GetEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEndpointResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetEventStreamRequest&, const Model::GetEventStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEventStreamResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetGcmChannelRequest&, const Model::GetGcmChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetGcmChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetImportJobRequest&, const Model::GetImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetImportJobResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetImportJobsRequest&, const Model::GetImportJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetImportJobsResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetSegmentRequest&, const Model::GetSegmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSegmentResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetSegmentImportJobsRequest&, const Model::GetSegmentImportJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSegmentImportJobsResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetSegmentVersionRequest&, const Model::GetSegmentVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSegmentVersionResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetSegmentVersionsRequest&, const Model::GetSegmentVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSegmentVersionsResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetSegmentsRequest&, const Model::GetSegmentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSegmentsResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::GetSmsChannelRequest&, const Model::GetSmsChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSmsChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::PutEventStreamRequest&, const Model::PutEventStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutEventStreamResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::SendMessagesRequest&, const Model::SendMessagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendMessagesResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::UpdateApnsChannelRequest&, const Model::UpdateApnsChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateApnsChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::UpdateApnsSandboxChannelRequest&, const Model::UpdateApnsSandboxChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateApnsSandboxChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::UpdateApplicationSettingsRequest&, const Model::UpdateApplicationSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateApplicationSettingsResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::UpdateCampaignRequest&, const Model::UpdateCampaignOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCampaignResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::UpdateEmailChannelRequest&, const Model::UpdateEmailChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEmailChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::UpdateEndpointRequest&, const Model::UpdateEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEndpointResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::UpdateEndpointsBatchRequest&, const Model::UpdateEndpointsBatchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEndpointsBatchResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::UpdateGcmChannelRequest&, const Model::UpdateGcmChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateGcmChannelResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::UpdateSegmentRequest&, const Model::UpdateSegmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSegmentResponseReceivedHandler;
    typedef std::function<void(const PinpointClient*, const Model::UpdateSmsChannelRequest&, const Model::UpdateSmsChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSmsChannelResponseReceivedHandler;

  class AWS_PINPOINT_API PinpointClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PinpointClient(const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PinpointClient(const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        PinpointClient(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
            const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

        virtual ~PinpointClient();

        /**
         * Creates or updates a campaign.
         */
        virtual Model::CreateCampaignOutcome CreateCampaign(const Model::CreateCampaignRequest& request) const;

        /**
         * Creates or updates a campaign.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCampaignOutcomeCallable CreateCampaignCallable(const Model::CreateCampaignRequest& request) const;

        /**
         * Creates or updates a campaign.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCampaignAsync(const Model::CreateCampaignRequest& request, const CreateCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Creates or updates an import job.
         */
        virtual Model::CreateImportJobOutcome CreateImportJob(const Model::CreateImportJobRequest& request) const;

        /**
         * Creates or updates an import job.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateImportJobOutcomeCallable CreateImportJobCallable(const Model::CreateImportJobRequest& request) const;

        /**
         * Creates or updates an import job.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateImportJobAsync(const Model::CreateImportJobRequest& request, const CreateImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Used to create or update a segment.
         */
        virtual Model::CreateSegmentOutcome CreateSegment(const Model::CreateSegmentRequest& request) const;

        /**
         * Used to create or update a segment.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSegmentOutcomeCallable CreateSegmentCallable(const Model::CreateSegmentRequest& request) const;

        /**
         * Used to create or update a segment.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSegmentAsync(const Model::CreateSegmentRequest& request, const CreateSegmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Deletes the APNs channel for an app.
         */
        virtual Model::DeleteApnsChannelOutcome DeleteApnsChannel(const Model::DeleteApnsChannelRequest& request) const;

        /**
         * Deletes the APNs channel for an app.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteApnsChannelOutcomeCallable DeleteApnsChannelCallable(const Model::DeleteApnsChannelRequest& request) const;

        /**
         * Deletes the APNs channel for an app.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteApnsChannelAsync(const Model::DeleteApnsChannelRequest& request, const DeleteApnsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Delete an APNS sandbox channel
         */
        virtual Model::DeleteApnsSandboxChannelOutcome DeleteApnsSandboxChannel(const Model::DeleteApnsSandboxChannelRequest& request) const;

        /**
         * Delete an APNS sandbox channel
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteApnsSandboxChannelOutcomeCallable DeleteApnsSandboxChannelCallable(const Model::DeleteApnsSandboxChannelRequest& request) const;

        /**
         * Delete an APNS sandbox channel
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteApnsSandboxChannelAsync(const Model::DeleteApnsSandboxChannelRequest& request, const DeleteApnsSandboxChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Deletes a campaign.
         */
        virtual Model::DeleteCampaignOutcome DeleteCampaign(const Model::DeleteCampaignRequest& request) const;

        /**
         * Deletes a campaign.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCampaignOutcomeCallable DeleteCampaignCallable(const Model::DeleteCampaignRequest& request) const;

        /**
         * Deletes a campaign.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCampaignAsync(const Model::DeleteCampaignRequest& request, const DeleteCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Delete an email channel
         */
        virtual Model::DeleteEmailChannelOutcome DeleteEmailChannel(const Model::DeleteEmailChannelRequest& request) const;

        /**
         * Delete an email channel
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEmailChannelOutcomeCallable DeleteEmailChannelCallable(const Model::DeleteEmailChannelRequest& request) const;

        /**
         * Delete an email channel
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEmailChannelAsync(const Model::DeleteEmailChannelRequest& request, const DeleteEmailChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Deletes the event stream for an app.
         */
        virtual Model::DeleteEventStreamOutcome DeleteEventStream(const Model::DeleteEventStreamRequest& request) const;

        /**
         * Deletes the event stream for an app.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEventStreamOutcomeCallable DeleteEventStreamCallable(const Model::DeleteEventStreamRequest& request) const;

        /**
         * Deletes the event stream for an app.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEventStreamAsync(const Model::DeleteEventStreamRequest& request, const DeleteEventStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Deletes the GCM channel for an app.
         */
        virtual Model::DeleteGcmChannelOutcome DeleteGcmChannel(const Model::DeleteGcmChannelRequest& request) const;

        /**
         * Deletes the GCM channel for an app.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteGcmChannelOutcomeCallable DeleteGcmChannelCallable(const Model::DeleteGcmChannelRequest& request) const;

        /**
         * Deletes the GCM channel for an app.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteGcmChannelAsync(const Model::DeleteGcmChannelRequest& request, const DeleteGcmChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Deletes a segment.
         */
        virtual Model::DeleteSegmentOutcome DeleteSegment(const Model::DeleteSegmentRequest& request) const;

        /**
         * Deletes a segment.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSegmentOutcomeCallable DeleteSegmentCallable(const Model::DeleteSegmentRequest& request) const;

        /**
         * Deletes a segment.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSegmentAsync(const Model::DeleteSegmentRequest& request, const DeleteSegmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Delete an SMS channel
         */
        virtual Model::DeleteSmsChannelOutcome DeleteSmsChannel(const Model::DeleteSmsChannelRequest& request) const;

        /**
         * Delete an SMS channel
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSmsChannelOutcomeCallable DeleteSmsChannelCallable(const Model::DeleteSmsChannelRequest& request) const;

        /**
         * Delete an SMS channel
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSmsChannelAsync(const Model::DeleteSmsChannelRequest& request, const DeleteSmsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns information about the APNs channel for an app.
         */
        virtual Model::GetApnsChannelOutcome GetApnsChannel(const Model::GetApnsChannelRequest& request) const;

        /**
         * Returns information about the APNs channel for an app.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetApnsChannelOutcomeCallable GetApnsChannelCallable(const Model::GetApnsChannelRequest& request) const;

        /**
         * Returns information about the APNs channel for an app.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetApnsChannelAsync(const Model::GetApnsChannelRequest& request, const GetApnsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Get an APNS sandbox channel
         */
        virtual Model::GetApnsSandboxChannelOutcome GetApnsSandboxChannel(const Model::GetApnsSandboxChannelRequest& request) const;

        /**
         * Get an APNS sandbox channel
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetApnsSandboxChannelOutcomeCallable GetApnsSandboxChannelCallable(const Model::GetApnsSandboxChannelRequest& request) const;

        /**
         * Get an APNS sandbox channel
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetApnsSandboxChannelAsync(const Model::GetApnsSandboxChannelRequest& request, const GetApnsSandboxChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Used to request the settings for an app.
         */
        virtual Model::GetApplicationSettingsOutcome GetApplicationSettings(const Model::GetApplicationSettingsRequest& request) const;

        /**
         * Used to request the settings for an app.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetApplicationSettingsOutcomeCallable GetApplicationSettingsCallable(const Model::GetApplicationSettingsRequest& request) const;

        /**
         * Used to request the settings for an app.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetApplicationSettingsAsync(const Model::GetApplicationSettingsRequest& request, const GetApplicationSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns information about a campaign.
         */
        virtual Model::GetCampaignOutcome GetCampaign(const Model::GetCampaignRequest& request) const;

        /**
         * Returns information about a campaign.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCampaignOutcomeCallable GetCampaignCallable(const Model::GetCampaignRequest& request) const;

        /**
         * Returns information about a campaign.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCampaignAsync(const Model::GetCampaignRequest& request, const GetCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns information about the activity performed by a campaign.
         */
        virtual Model::GetCampaignActivitiesOutcome GetCampaignActivities(const Model::GetCampaignActivitiesRequest& request) const;

        /**
         * Returns information about the activity performed by a campaign.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCampaignActivitiesOutcomeCallable GetCampaignActivitiesCallable(const Model::GetCampaignActivitiesRequest& request) const;

        /**
         * Returns information about the activity performed by a campaign.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCampaignActivitiesAsync(const Model::GetCampaignActivitiesRequest& request, const GetCampaignActivitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns information about a specific version of a campaign.
         */
        virtual Model::GetCampaignVersionOutcome GetCampaignVersion(const Model::GetCampaignVersionRequest& request) const;

        /**
         * Returns information about a specific version of a campaign.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCampaignVersionOutcomeCallable GetCampaignVersionCallable(const Model::GetCampaignVersionRequest& request) const;

        /**
         * Returns information about a specific version of a campaign.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCampaignVersionAsync(const Model::GetCampaignVersionRequest& request, const GetCampaignVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns information about your campaign versions.
         */
        virtual Model::GetCampaignVersionsOutcome GetCampaignVersions(const Model::GetCampaignVersionsRequest& request) const;

        /**
         * Returns information about your campaign versions.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCampaignVersionsOutcomeCallable GetCampaignVersionsCallable(const Model::GetCampaignVersionsRequest& request) const;

        /**
         * Returns information about your campaign versions.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCampaignVersionsAsync(const Model::GetCampaignVersionsRequest& request, const GetCampaignVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns information about your campaigns.
         */
        virtual Model::GetCampaignsOutcome GetCampaigns(const Model::GetCampaignsRequest& request) const;

        /**
         * Returns information about your campaigns.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCampaignsOutcomeCallable GetCampaignsCallable(const Model::GetCampaignsRequest& request) const;

        /**
         * Returns information about your campaigns.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCampaignsAsync(const Model::GetCampaignsRequest& request, const GetCampaignsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Get an email channel
         */
        virtual Model::GetEmailChannelOutcome GetEmailChannel(const Model::GetEmailChannelRequest& request) const;

        /**
         * Get an email channel
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEmailChannelOutcomeCallable GetEmailChannelCallable(const Model::GetEmailChannelRequest& request) const;

        /**
         * Get an email channel
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEmailChannelAsync(const Model::GetEmailChannelRequest& request, const GetEmailChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns information about an endpoint.
         */
        virtual Model::GetEndpointOutcome GetEndpoint(const Model::GetEndpointRequest& request) const;

        /**
         * Returns information about an endpoint.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEndpointOutcomeCallable GetEndpointCallable(const Model::GetEndpointRequest& request) const;

        /**
         * Returns information about an endpoint.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEndpointAsync(const Model::GetEndpointRequest& request, const GetEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns the event stream for an app.
         */
        virtual Model::GetEventStreamOutcome GetEventStream(const Model::GetEventStreamRequest& request) const;

        /**
         * Returns the event stream for an app.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEventStreamOutcomeCallable GetEventStreamCallable(const Model::GetEventStreamRequest& request) const;

        /**
         * Returns the event stream for an app.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEventStreamAsync(const Model::GetEventStreamRequest& request, const GetEventStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns information about the GCM channel for an app.
         */
        virtual Model::GetGcmChannelOutcome GetGcmChannel(const Model::GetGcmChannelRequest& request) const;

        /**
         * Returns information about the GCM channel for an app.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetGcmChannelOutcomeCallable GetGcmChannelCallable(const Model::GetGcmChannelRequest& request) const;

        /**
         * Returns information about the GCM channel for an app.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetGcmChannelAsync(const Model::GetGcmChannelRequest& request, const GetGcmChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns information about an import job.
         */
        virtual Model::GetImportJobOutcome GetImportJob(const Model::GetImportJobRequest& request) const;

        /**
         * Returns information about an import job.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetImportJobOutcomeCallable GetImportJobCallable(const Model::GetImportJobRequest& request) const;

        /**
         * Returns information about an import job.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetImportJobAsync(const Model::GetImportJobRequest& request, const GetImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns information about your import jobs.
         */
        virtual Model::GetImportJobsOutcome GetImportJobs(const Model::GetImportJobsRequest& request) const;

        /**
         * Returns information about your import jobs.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetImportJobsOutcomeCallable GetImportJobsCallable(const Model::GetImportJobsRequest& request) const;

        /**
         * Returns information about your import jobs.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetImportJobsAsync(const Model::GetImportJobsRequest& request, const GetImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns information about a segment.
         */
        virtual Model::GetSegmentOutcome GetSegment(const Model::GetSegmentRequest& request) const;

        /**
         * Returns information about a segment.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSegmentOutcomeCallable GetSegmentCallable(const Model::GetSegmentRequest& request) const;

        /**
         * Returns information about a segment.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSegmentAsync(const Model::GetSegmentRequest& request, const GetSegmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns a list of import jobs for a specific segment.
         */
        virtual Model::GetSegmentImportJobsOutcome GetSegmentImportJobs(const Model::GetSegmentImportJobsRequest& request) const;

        /**
         * Returns a list of import jobs for a specific segment.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSegmentImportJobsOutcomeCallable GetSegmentImportJobsCallable(const Model::GetSegmentImportJobsRequest& request) const;

        /**
         * Returns a list of import jobs for a specific segment.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSegmentImportJobsAsync(const Model::GetSegmentImportJobsRequest& request, const GetSegmentImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns information about a segment version.
         */
        virtual Model::GetSegmentVersionOutcome GetSegmentVersion(const Model::GetSegmentVersionRequest& request) const;

        /**
         * Returns information about a segment version.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSegmentVersionOutcomeCallable GetSegmentVersionCallable(const Model::GetSegmentVersionRequest& request) const;

        /**
         * Returns information about a segment version.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSegmentVersionAsync(const Model::GetSegmentVersionRequest& request, const GetSegmentVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns information about your segment versions.
         */
        virtual Model::GetSegmentVersionsOutcome GetSegmentVersions(const Model::GetSegmentVersionsRequest& request) const;

        /**
         * Returns information about your segment versions.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSegmentVersionsOutcomeCallable GetSegmentVersionsCallable(const Model::GetSegmentVersionsRequest& request) const;

        /**
         * Returns information about your segment versions.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSegmentVersionsAsync(const Model::GetSegmentVersionsRequest& request, const GetSegmentVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Used to get information about your segments.
         */
        virtual Model::GetSegmentsOutcome GetSegments(const Model::GetSegmentsRequest& request) const;

        /**
         * Used to get information about your segments.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSegmentsOutcomeCallable GetSegmentsCallable(const Model::GetSegmentsRequest& request) const;

        /**
         * Used to get information about your segments.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSegmentsAsync(const Model::GetSegmentsRequest& request, const GetSegmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Get an SMS channel
         */
        virtual Model::GetSmsChannelOutcome GetSmsChannel(const Model::GetSmsChannelRequest& request) const;

        /**
         * Get an SMS channel
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSmsChannelOutcomeCallable GetSmsChannelCallable(const Model::GetSmsChannelRequest& request) const;

        /**
         * Get an SMS channel
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSmsChannelAsync(const Model::GetSmsChannelRequest& request, const GetSmsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Use to create or update the event stream for an app.
         */
        virtual Model::PutEventStreamOutcome PutEventStream(const Model::PutEventStreamRequest& request) const;

        /**
         * Use to create or update the event stream for an app.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutEventStreamOutcomeCallable PutEventStreamCallable(const Model::PutEventStreamRequest& request) const;

        /**
         * Use to create or update the event stream for an app.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutEventStreamAsync(const Model::PutEventStreamRequest& request, const PutEventStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Send a batch of messages
         */
        virtual Model::SendMessagesOutcome SendMessages(const Model::SendMessagesRequest& request) const;

        /**
         * Send a batch of messages
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendMessagesOutcomeCallable SendMessagesCallable(const Model::SendMessagesRequest& request) const;

        /**
         * Send a batch of messages
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendMessagesAsync(const Model::SendMessagesRequest& request, const SendMessagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Use to update the APNs channel for an app.
         */
        virtual Model::UpdateApnsChannelOutcome UpdateApnsChannel(const Model::UpdateApnsChannelRequest& request) const;

        /**
         * Use to update the APNs channel for an app.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateApnsChannelOutcomeCallable UpdateApnsChannelCallable(const Model::UpdateApnsChannelRequest& request) const;

        /**
         * Use to update the APNs channel for an app.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateApnsChannelAsync(const Model::UpdateApnsChannelRequest& request, const UpdateApnsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Update an APNS sandbox channel
         */
        virtual Model::UpdateApnsSandboxChannelOutcome UpdateApnsSandboxChannel(const Model::UpdateApnsSandboxChannelRequest& request) const;

        /**
         * Update an APNS sandbox channel
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateApnsSandboxChannelOutcomeCallable UpdateApnsSandboxChannelCallable(const Model::UpdateApnsSandboxChannelRequest& request) const;

        /**
         * Update an APNS sandbox channel
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateApnsSandboxChannelAsync(const Model::UpdateApnsSandboxChannelRequest& request, const UpdateApnsSandboxChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Used to update the settings for an app.
         */
        virtual Model::UpdateApplicationSettingsOutcome UpdateApplicationSettings(const Model::UpdateApplicationSettingsRequest& request) const;

        /**
         * Used to update the settings for an app.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateApplicationSettingsOutcomeCallable UpdateApplicationSettingsCallable(const Model::UpdateApplicationSettingsRequest& request) const;

        /**
         * Used to update the settings for an app.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateApplicationSettingsAsync(const Model::UpdateApplicationSettingsRequest& request, const UpdateApplicationSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Use to update a campaign.
         */
        virtual Model::UpdateCampaignOutcome UpdateCampaign(const Model::UpdateCampaignRequest& request) const;

        /**
         * Use to update a campaign.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateCampaignOutcomeCallable UpdateCampaignCallable(const Model::UpdateCampaignRequest& request) const;

        /**
         * Use to update a campaign.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateCampaignAsync(const Model::UpdateCampaignRequest& request, const UpdateCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Update an email channel
         */
        virtual Model::UpdateEmailChannelOutcome UpdateEmailChannel(const Model::UpdateEmailChannelRequest& request) const;

        /**
         * Update an email channel
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateEmailChannelOutcomeCallable UpdateEmailChannelCallable(const Model::UpdateEmailChannelRequest& request) const;

        /**
         * Update an email channel
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateEmailChannelAsync(const Model::UpdateEmailChannelRequest& request, const UpdateEmailChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Use to update an endpoint.
         */
        virtual Model::UpdateEndpointOutcome UpdateEndpoint(const Model::UpdateEndpointRequest& request) const;

        /**
         * Use to update an endpoint.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateEndpointOutcomeCallable UpdateEndpointCallable(const Model::UpdateEndpointRequest& request) const;

        /**
         * Use to update an endpoint.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateEndpointAsync(const Model::UpdateEndpointRequest& request, const UpdateEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Use to update a batch of endpoints.
         */
        virtual Model::UpdateEndpointsBatchOutcome UpdateEndpointsBatch(const Model::UpdateEndpointsBatchRequest& request) const;

        /**
         * Use to update a batch of endpoints.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateEndpointsBatchOutcomeCallable UpdateEndpointsBatchCallable(const Model::UpdateEndpointsBatchRequest& request) const;

        /**
         * Use to update a batch of endpoints.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateEndpointsBatchAsync(const Model::UpdateEndpointsBatchRequest& request, const UpdateEndpointsBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Use to update the GCM channel for an app.
         */
        virtual Model::UpdateGcmChannelOutcome UpdateGcmChannel(const Model::UpdateGcmChannelRequest& request) const;

        /**
         * Use to update the GCM channel for an app.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateGcmChannelOutcomeCallable UpdateGcmChannelCallable(const Model::UpdateGcmChannelRequest& request) const;

        /**
         * Use to update the GCM channel for an app.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateGcmChannelAsync(const Model::UpdateGcmChannelRequest& request, const UpdateGcmChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Use to update a segment.
         */
        virtual Model::UpdateSegmentOutcome UpdateSegment(const Model::UpdateSegmentRequest& request) const;

        /**
         * Use to update a segment.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSegmentOutcomeCallable UpdateSegmentCallable(const Model::UpdateSegmentRequest& request) const;

        /**
         * Use to update a segment.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSegmentAsync(const Model::UpdateSegmentRequest& request, const UpdateSegmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Update an SMS channel
         */
        virtual Model::UpdateSmsChannelOutcome UpdateSmsChannel(const Model::UpdateSmsChannelRequest& request) const;

        /**
         * Update an SMS channel
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSmsChannelOutcomeCallable UpdateSmsChannelCallable(const Model::UpdateSmsChannelRequest& request) const;

        /**
         * Update an SMS channel
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSmsChannelAsync(const Model::UpdateSmsChannelRequest& request, const UpdateSmsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


    private:
      void init(const Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void CreateCampaignAsyncHelper(const Model::CreateCampaignRequest& request, const CreateCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateImportJobAsyncHelper(const Model::CreateImportJobRequest& request, const CreateImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateSegmentAsyncHelper(const Model::CreateSegmentRequest& request, const CreateSegmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteApnsChannelAsyncHelper(const Model::DeleteApnsChannelRequest& request, const DeleteApnsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteApnsSandboxChannelAsyncHelper(const Model::DeleteApnsSandboxChannelRequest& request, const DeleteApnsSandboxChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteCampaignAsyncHelper(const Model::DeleteCampaignRequest& request, const DeleteCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteEmailChannelAsyncHelper(const Model::DeleteEmailChannelRequest& request, const DeleteEmailChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteEventStreamAsyncHelper(const Model::DeleteEventStreamRequest& request, const DeleteEventStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteGcmChannelAsyncHelper(const Model::DeleteGcmChannelRequest& request, const DeleteGcmChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSegmentAsyncHelper(const Model::DeleteSegmentRequest& request, const DeleteSegmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSmsChannelAsyncHelper(const Model::DeleteSmsChannelRequest& request, const DeleteSmsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetApnsChannelAsyncHelper(const Model::GetApnsChannelRequest& request, const GetApnsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetApnsSandboxChannelAsyncHelper(const Model::GetApnsSandboxChannelRequest& request, const GetApnsSandboxChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetApplicationSettingsAsyncHelper(const Model::GetApplicationSettingsRequest& request, const GetApplicationSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCampaignAsyncHelper(const Model::GetCampaignRequest& request, const GetCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCampaignActivitiesAsyncHelper(const Model::GetCampaignActivitiesRequest& request, const GetCampaignActivitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCampaignVersionAsyncHelper(const Model::GetCampaignVersionRequest& request, const GetCampaignVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCampaignVersionsAsyncHelper(const Model::GetCampaignVersionsRequest& request, const GetCampaignVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCampaignsAsyncHelper(const Model::GetCampaignsRequest& request, const GetCampaignsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetEmailChannelAsyncHelper(const Model::GetEmailChannelRequest& request, const GetEmailChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetEndpointAsyncHelper(const Model::GetEndpointRequest& request, const GetEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetEventStreamAsyncHelper(const Model::GetEventStreamRequest& request, const GetEventStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetGcmChannelAsyncHelper(const Model::GetGcmChannelRequest& request, const GetGcmChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetImportJobAsyncHelper(const Model::GetImportJobRequest& request, const GetImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetImportJobsAsyncHelper(const Model::GetImportJobsRequest& request, const GetImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSegmentAsyncHelper(const Model::GetSegmentRequest& request, const GetSegmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSegmentImportJobsAsyncHelper(const Model::GetSegmentImportJobsRequest& request, const GetSegmentImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSegmentVersionAsyncHelper(const Model::GetSegmentVersionRequest& request, const GetSegmentVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSegmentVersionsAsyncHelper(const Model::GetSegmentVersionsRequest& request, const GetSegmentVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSegmentsAsyncHelper(const Model::GetSegmentsRequest& request, const GetSegmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSmsChannelAsyncHelper(const Model::GetSmsChannelRequest& request, const GetSmsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutEventStreamAsyncHelper(const Model::PutEventStreamRequest& request, const PutEventStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SendMessagesAsyncHelper(const Model::SendMessagesRequest& request, const SendMessagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateApnsChannelAsyncHelper(const Model::UpdateApnsChannelRequest& request, const UpdateApnsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateApnsSandboxChannelAsyncHelper(const Model::UpdateApnsSandboxChannelRequest& request, const UpdateApnsSandboxChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateApplicationSettingsAsyncHelper(const Model::UpdateApplicationSettingsRequest& request, const UpdateApplicationSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
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
