/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaigns/ConnectCampaigns_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/connectcampaigns/ConnectCampaignsServiceClientModel.h>

namespace Aws
{
namespace ConnectCampaigns
{
  /**
   * <p>Provide APIs to create and manage Amazon Connect Campaigns.</p>
   */
  class AWS_CONNECTCAMPAIGNS_API ConnectCampaignsClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<ConnectCampaignsClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ConnectCampaignsClient(const Aws::ConnectCampaigns::ConnectCampaignsClientConfiguration& clientConfiguration = Aws::ConnectCampaigns::ConnectCampaignsClientConfiguration(),
                               std::shared_ptr<ConnectCampaignsEndpointProviderBase> endpointProvider = Aws::MakeShared<ConnectCampaignsEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ConnectCampaignsClient(const Aws::Auth::AWSCredentials& credentials,
                               std::shared_ptr<ConnectCampaignsEndpointProviderBase> endpointProvider = Aws::MakeShared<ConnectCampaignsEndpointProvider>(ALLOCATION_TAG),
                               const Aws::ConnectCampaigns::ConnectCampaignsClientConfiguration& clientConfiguration = Aws::ConnectCampaigns::ConnectCampaignsClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ConnectCampaignsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<ConnectCampaignsEndpointProviderBase> endpointProvider = Aws::MakeShared<ConnectCampaignsEndpointProvider>(ALLOCATION_TAG),
                               const Aws::ConnectCampaigns::ConnectCampaignsClientConfiguration& clientConfiguration = Aws::ConnectCampaigns::ConnectCampaignsClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ConnectCampaignsClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ConnectCampaignsClient(const Aws::Auth::AWSCredentials& credentials,
                               const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ConnectCampaignsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~ConnectCampaignsClient();

        /**
         * <p>Creates a campaign for the specified Amazon Connect account. This API is
         * idempotent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/CreateCampaign">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCampaignOutcome CreateCampaign(const Model::CreateCampaignRequest& request) const;

        /**
         * A Callable wrapper for CreateCampaign that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCampaignOutcomeCallable CreateCampaignCallable(const Model::CreateCampaignRequest& request) const;

        /**
         * An Async wrapper for CreateCampaign that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCampaignAsync(const Model::CreateCampaignRequest& request, const CreateCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a campaign from the specified Amazon Connect account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/DeleteCampaign">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCampaignOutcome DeleteCampaign(const Model::DeleteCampaignRequest& request) const;

        /**
         * A Callable wrapper for DeleteCampaign that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCampaignOutcomeCallable DeleteCampaignCallable(const Model::DeleteCampaignRequest& request) const;

        /**
         * An Async wrapper for DeleteCampaign that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCampaignAsync(const Model::DeleteCampaignRequest& request, const DeleteCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a connect instance config from the specified AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/DeleteConnectInstanceConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConnectInstanceConfigOutcome DeleteConnectInstanceConfig(const Model::DeleteConnectInstanceConfigRequest& request) const;

        /**
         * A Callable wrapper for DeleteConnectInstanceConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteConnectInstanceConfigOutcomeCallable DeleteConnectInstanceConfigCallable(const Model::DeleteConnectInstanceConfigRequest& request) const;

        /**
         * An Async wrapper for DeleteConnectInstanceConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteConnectInstanceConfigAsync(const Model::DeleteConnectInstanceConfigRequest& request, const DeleteConnectInstanceConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete the Connect Campaigns onboarding job for the specified Amazon Connect
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/DeleteInstanceOnboardingJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInstanceOnboardingJobOutcome DeleteInstanceOnboardingJob(const Model::DeleteInstanceOnboardingJobRequest& request) const;

        /**
         * A Callable wrapper for DeleteInstanceOnboardingJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteInstanceOnboardingJobOutcomeCallable DeleteInstanceOnboardingJobCallable(const Model::DeleteInstanceOnboardingJobRequest& request) const;

        /**
         * An Async wrapper for DeleteInstanceOnboardingJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteInstanceOnboardingJobAsync(const Model::DeleteInstanceOnboardingJobRequest& request, const DeleteInstanceOnboardingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specific campaign.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/DescribeCampaign">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCampaignOutcome DescribeCampaign(const Model::DescribeCampaignRequest& request) const;

        /**
         * A Callable wrapper for DescribeCampaign that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCampaignOutcomeCallable DescribeCampaignCallable(const Model::DescribeCampaignRequest& request) const;

        /**
         * An Async wrapper for DescribeCampaign that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCampaignAsync(const Model::DescribeCampaignRequest& request, const DescribeCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get state of a campaign for the specified Amazon Connect
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/GetCampaignState">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCampaignStateOutcome GetCampaignState(const Model::GetCampaignStateRequest& request) const;

        /**
         * A Callable wrapper for GetCampaignState that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCampaignStateOutcomeCallable GetCampaignStateCallable(const Model::GetCampaignStateRequest& request) const;

        /**
         * An Async wrapper for GetCampaignState that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCampaignStateAsync(const Model::GetCampaignStateRequest& request, const GetCampaignStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get state of campaigns for the specified Amazon Connect
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/GetCampaignStateBatch">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCampaignStateBatchOutcome GetCampaignStateBatch(const Model::GetCampaignStateBatchRequest& request) const;

        /**
         * A Callable wrapper for GetCampaignStateBatch that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCampaignStateBatchOutcomeCallable GetCampaignStateBatchCallable(const Model::GetCampaignStateBatchRequest& request) const;

        /**
         * An Async wrapper for GetCampaignStateBatch that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCampaignStateBatchAsync(const Model::GetCampaignStateBatchRequest& request, const GetCampaignStateBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get the specific Connect instance config.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/GetConnectInstanceConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConnectInstanceConfigOutcome GetConnectInstanceConfig(const Model::GetConnectInstanceConfigRequest& request) const;

        /**
         * A Callable wrapper for GetConnectInstanceConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetConnectInstanceConfigOutcomeCallable GetConnectInstanceConfigCallable(const Model::GetConnectInstanceConfigRequest& request) const;

        /**
         * An Async wrapper for GetConnectInstanceConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetConnectInstanceConfigAsync(const Model::GetConnectInstanceConfigRequest& request, const GetConnectInstanceConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get the specific instance onboarding job status.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/GetInstanceOnboardingJobStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInstanceOnboardingJobStatusOutcome GetInstanceOnboardingJobStatus(const Model::GetInstanceOnboardingJobStatusRequest& request) const;

        /**
         * A Callable wrapper for GetInstanceOnboardingJobStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetInstanceOnboardingJobStatusOutcomeCallable GetInstanceOnboardingJobStatusCallable(const Model::GetInstanceOnboardingJobStatusRequest& request) const;

        /**
         * An Async wrapper for GetInstanceOnboardingJobStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetInstanceOnboardingJobStatusAsync(const Model::GetInstanceOnboardingJobStatusRequest& request, const GetInstanceOnboardingJobStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides summary information about the campaigns under the specified Amazon
         * Connect account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/ListCampaigns">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCampaignsOutcome ListCampaigns(const Model::ListCampaignsRequest& request) const;

        /**
         * A Callable wrapper for ListCampaigns that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCampaignsOutcomeCallable ListCampaignsCallable(const Model::ListCampaignsRequest& request) const;

        /**
         * An Async wrapper for ListCampaigns that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCampaignsAsync(const Model::ListCampaignsRequest& request, const ListCampaignsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List tags for a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Pauses a campaign for the specified Amazon Connect account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/PauseCampaign">AWS
         * API Reference</a></p>
         */
        virtual Model::PauseCampaignOutcome PauseCampaign(const Model::PauseCampaignRequest& request) const;

        /**
         * A Callable wrapper for PauseCampaign that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PauseCampaignOutcomeCallable PauseCampaignCallable(const Model::PauseCampaignRequest& request) const;

        /**
         * An Async wrapper for PauseCampaign that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PauseCampaignAsync(const Model::PauseCampaignRequest& request, const PauseCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates dials requests for the specified campaign Amazon Connect account.
         * This API is idempotent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/PutDialRequestBatch">AWS
         * API Reference</a></p>
         */
        virtual Model::PutDialRequestBatchOutcome PutDialRequestBatch(const Model::PutDialRequestBatchRequest& request) const;

        /**
         * A Callable wrapper for PutDialRequestBatch that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutDialRequestBatchOutcomeCallable PutDialRequestBatchCallable(const Model::PutDialRequestBatchRequest& request) const;

        /**
         * An Async wrapper for PutDialRequestBatch that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutDialRequestBatchAsync(const Model::PutDialRequestBatchRequest& request, const PutDialRequestBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops a campaign for the specified Amazon Connect account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/ResumeCampaign">AWS
         * API Reference</a></p>
         */
        virtual Model::ResumeCampaignOutcome ResumeCampaign(const Model::ResumeCampaignRequest& request) const;

        /**
         * A Callable wrapper for ResumeCampaign that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResumeCampaignOutcomeCallable ResumeCampaignCallable(const Model::ResumeCampaignRequest& request) const;

        /**
         * An Async wrapper for ResumeCampaign that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResumeCampaignAsync(const Model::ResumeCampaignRequest& request, const ResumeCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a campaign for the specified Amazon Connect account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/StartCampaign">AWS
         * API Reference</a></p>
         */
        virtual Model::StartCampaignOutcome StartCampaign(const Model::StartCampaignRequest& request) const;

        /**
         * A Callable wrapper for StartCampaign that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartCampaignOutcomeCallable StartCampaignCallable(const Model::StartCampaignRequest& request) const;

        /**
         * An Async wrapper for StartCampaign that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartCampaignAsync(const Model::StartCampaignRequest& request, const StartCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Onboard the specific Amazon Connect instance to Connect
         * Campaigns.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/StartInstanceOnboardingJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartInstanceOnboardingJobOutcome StartInstanceOnboardingJob(const Model::StartInstanceOnboardingJobRequest& request) const;

        /**
         * A Callable wrapper for StartInstanceOnboardingJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartInstanceOnboardingJobOutcomeCallable StartInstanceOnboardingJobCallable(const Model::StartInstanceOnboardingJobRequest& request) const;

        /**
         * An Async wrapper for StartInstanceOnboardingJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartInstanceOnboardingJobAsync(const Model::StartInstanceOnboardingJobRequest& request, const StartInstanceOnboardingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops a campaign for the specified Amazon Connect account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/StopCampaign">AWS
         * API Reference</a></p>
         */
        virtual Model::StopCampaignOutcome StopCampaign(const Model::StopCampaignRequest& request) const;

        /**
         * A Callable wrapper for StopCampaign that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopCampaignOutcomeCallable StopCampaignCallable(const Model::StopCampaignRequest& request) const;

        /**
         * An Async wrapper for StopCampaign that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopCampaignAsync(const Model::StopCampaignRequest& request, const StopCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Tag a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Untag a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the dialer config of a campaign. This API is
         * idempotent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/UpdateCampaignDialerConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCampaignDialerConfigOutcome UpdateCampaignDialerConfig(const Model::UpdateCampaignDialerConfigRequest& request) const;

        /**
         * A Callable wrapper for UpdateCampaignDialerConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateCampaignDialerConfigOutcomeCallable UpdateCampaignDialerConfigCallable(const Model::UpdateCampaignDialerConfigRequest& request) const;

        /**
         * An Async wrapper for UpdateCampaignDialerConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateCampaignDialerConfigAsync(const Model::UpdateCampaignDialerConfigRequest& request, const UpdateCampaignDialerConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the name of a campaign. This API is idempotent.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/UpdateCampaignName">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCampaignNameOutcome UpdateCampaignName(const Model::UpdateCampaignNameRequest& request) const;

        /**
         * A Callable wrapper for UpdateCampaignName that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateCampaignNameOutcomeCallable UpdateCampaignNameCallable(const Model::UpdateCampaignNameRequest& request) const;

        /**
         * An Async wrapper for UpdateCampaignName that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateCampaignNameAsync(const Model::UpdateCampaignNameRequest& request, const UpdateCampaignNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the outbound call config of a campaign. This API is
         * idempotent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/UpdateCampaignOutboundCallConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCampaignOutboundCallConfigOutcome UpdateCampaignOutboundCallConfig(const Model::UpdateCampaignOutboundCallConfigRequest& request) const;

        /**
         * A Callable wrapper for UpdateCampaignOutboundCallConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateCampaignOutboundCallConfigOutcomeCallable UpdateCampaignOutboundCallConfigCallable(const Model::UpdateCampaignOutboundCallConfigRequest& request) const;

        /**
         * An Async wrapper for UpdateCampaignOutboundCallConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateCampaignOutboundCallConfigAsync(const Model::UpdateCampaignOutboundCallConfigRequest& request, const UpdateCampaignOutboundCallConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ConnectCampaignsEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<ConnectCampaignsClient>;
      void init(const ConnectCampaignsClientConfiguration& clientConfiguration);

      ConnectCampaignsClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ConnectCampaignsEndpointProviderBase> m_endpointProvider;
  };

} // namespace ConnectCampaigns
} // namespace Aws
