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
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef ConnectCampaignsClientConfiguration ClientConfigurationType;
      typedef ConnectCampaignsEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ConnectCampaignsClient(const Aws::ConnectCampaigns::ConnectCampaignsClientConfiguration& clientConfiguration = Aws::ConnectCampaigns::ConnectCampaignsClientConfiguration(),
                               std::shared_ptr<ConnectCampaignsEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ConnectCampaignsClient(const Aws::Auth::AWSCredentials& credentials,
                               std::shared_ptr<ConnectCampaignsEndpointProviderBase> endpointProvider = nullptr,
                               const Aws::ConnectCampaigns::ConnectCampaignsClientConfiguration& clientConfiguration = Aws::ConnectCampaigns::ConnectCampaignsClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ConnectCampaignsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<ConnectCampaignsEndpointProviderBase> endpointProvider = nullptr,
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
        template<typename CreateCampaignRequestT = Model::CreateCampaignRequest>
        Model::CreateCampaignOutcomeCallable CreateCampaignCallable(const CreateCampaignRequestT& request) const
        {
            return SubmitCallable(&ConnectCampaignsClient::CreateCampaign, request);
        }

        /**
         * An Async wrapper for CreateCampaign that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateCampaignRequestT = Model::CreateCampaignRequest>
        void CreateCampaignAsync(const CreateCampaignRequestT& request, const CreateCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCampaignsClient::CreateCampaign, request, handler, context);
        }

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
        template<typename DeleteCampaignRequestT = Model::DeleteCampaignRequest>
        Model::DeleteCampaignOutcomeCallable DeleteCampaignCallable(const DeleteCampaignRequestT& request) const
        {
            return SubmitCallable(&ConnectCampaignsClient::DeleteCampaign, request);
        }

        /**
         * An Async wrapper for DeleteCampaign that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCampaignRequestT = Model::DeleteCampaignRequest>
        void DeleteCampaignAsync(const DeleteCampaignRequestT& request, const DeleteCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCampaignsClient::DeleteCampaign, request, handler, context);
        }

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
        template<typename DeleteConnectInstanceConfigRequestT = Model::DeleteConnectInstanceConfigRequest>
        Model::DeleteConnectInstanceConfigOutcomeCallable DeleteConnectInstanceConfigCallable(const DeleteConnectInstanceConfigRequestT& request) const
        {
            return SubmitCallable(&ConnectCampaignsClient::DeleteConnectInstanceConfig, request);
        }

        /**
         * An Async wrapper for DeleteConnectInstanceConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteConnectInstanceConfigRequestT = Model::DeleteConnectInstanceConfigRequest>
        void DeleteConnectInstanceConfigAsync(const DeleteConnectInstanceConfigRequestT& request, const DeleteConnectInstanceConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCampaignsClient::DeleteConnectInstanceConfig, request, handler, context);
        }

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
        template<typename DeleteInstanceOnboardingJobRequestT = Model::DeleteInstanceOnboardingJobRequest>
        Model::DeleteInstanceOnboardingJobOutcomeCallable DeleteInstanceOnboardingJobCallable(const DeleteInstanceOnboardingJobRequestT& request) const
        {
            return SubmitCallable(&ConnectCampaignsClient::DeleteInstanceOnboardingJob, request);
        }

        /**
         * An Async wrapper for DeleteInstanceOnboardingJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteInstanceOnboardingJobRequestT = Model::DeleteInstanceOnboardingJobRequest>
        void DeleteInstanceOnboardingJobAsync(const DeleteInstanceOnboardingJobRequestT& request, const DeleteInstanceOnboardingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCampaignsClient::DeleteInstanceOnboardingJob, request, handler, context);
        }

        /**
         * <p>Describes the specific campaign.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/DescribeCampaign">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCampaignOutcome DescribeCampaign(const Model::DescribeCampaignRequest& request) const;

        /**
         * A Callable wrapper for DescribeCampaign that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeCampaignRequestT = Model::DescribeCampaignRequest>
        Model::DescribeCampaignOutcomeCallable DescribeCampaignCallable(const DescribeCampaignRequestT& request) const
        {
            return SubmitCallable(&ConnectCampaignsClient::DescribeCampaign, request);
        }

        /**
         * An Async wrapper for DescribeCampaign that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeCampaignRequestT = Model::DescribeCampaignRequest>
        void DescribeCampaignAsync(const DescribeCampaignRequestT& request, const DescribeCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCampaignsClient::DescribeCampaign, request, handler, context);
        }

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
        template<typename GetCampaignStateRequestT = Model::GetCampaignStateRequest>
        Model::GetCampaignStateOutcomeCallable GetCampaignStateCallable(const GetCampaignStateRequestT& request) const
        {
            return SubmitCallable(&ConnectCampaignsClient::GetCampaignState, request);
        }

        /**
         * An Async wrapper for GetCampaignState that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCampaignStateRequestT = Model::GetCampaignStateRequest>
        void GetCampaignStateAsync(const GetCampaignStateRequestT& request, const GetCampaignStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCampaignsClient::GetCampaignState, request, handler, context);
        }

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
        template<typename GetCampaignStateBatchRequestT = Model::GetCampaignStateBatchRequest>
        Model::GetCampaignStateBatchOutcomeCallable GetCampaignStateBatchCallable(const GetCampaignStateBatchRequestT& request) const
        {
            return SubmitCallable(&ConnectCampaignsClient::GetCampaignStateBatch, request);
        }

        /**
         * An Async wrapper for GetCampaignStateBatch that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCampaignStateBatchRequestT = Model::GetCampaignStateBatchRequest>
        void GetCampaignStateBatchAsync(const GetCampaignStateBatchRequestT& request, const GetCampaignStateBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCampaignsClient::GetCampaignStateBatch, request, handler, context);
        }

        /**
         * <p>Get the specific Connect instance config.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/GetConnectInstanceConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConnectInstanceConfigOutcome GetConnectInstanceConfig(const Model::GetConnectInstanceConfigRequest& request) const;

        /**
         * A Callable wrapper for GetConnectInstanceConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetConnectInstanceConfigRequestT = Model::GetConnectInstanceConfigRequest>
        Model::GetConnectInstanceConfigOutcomeCallable GetConnectInstanceConfigCallable(const GetConnectInstanceConfigRequestT& request) const
        {
            return SubmitCallable(&ConnectCampaignsClient::GetConnectInstanceConfig, request);
        }

        /**
         * An Async wrapper for GetConnectInstanceConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetConnectInstanceConfigRequestT = Model::GetConnectInstanceConfigRequest>
        void GetConnectInstanceConfigAsync(const GetConnectInstanceConfigRequestT& request, const GetConnectInstanceConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCampaignsClient::GetConnectInstanceConfig, request, handler, context);
        }

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
        template<typename GetInstanceOnboardingJobStatusRequestT = Model::GetInstanceOnboardingJobStatusRequest>
        Model::GetInstanceOnboardingJobStatusOutcomeCallable GetInstanceOnboardingJobStatusCallable(const GetInstanceOnboardingJobStatusRequestT& request) const
        {
            return SubmitCallable(&ConnectCampaignsClient::GetInstanceOnboardingJobStatus, request);
        }

        /**
         * An Async wrapper for GetInstanceOnboardingJobStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetInstanceOnboardingJobStatusRequestT = Model::GetInstanceOnboardingJobStatusRequest>
        void GetInstanceOnboardingJobStatusAsync(const GetInstanceOnboardingJobStatusRequestT& request, const GetInstanceOnboardingJobStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCampaignsClient::GetInstanceOnboardingJobStatus, request, handler, context);
        }

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
        template<typename ListCampaignsRequestT = Model::ListCampaignsRequest>
        Model::ListCampaignsOutcomeCallable ListCampaignsCallable(const ListCampaignsRequestT& request) const
        {
            return SubmitCallable(&ConnectCampaignsClient::ListCampaigns, request);
        }

        /**
         * An Async wrapper for ListCampaigns that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCampaignsRequestT = Model::ListCampaignsRequest>
        void ListCampaignsAsync(const ListCampaignsRequestT& request, const ListCampaignsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCampaignsClient::ListCampaigns, request, handler, context);
        }

        /**
         * <p>List tags for a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&ConnectCampaignsClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCampaignsClient::ListTagsForResource, request, handler, context);
        }

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
        template<typename PauseCampaignRequestT = Model::PauseCampaignRequest>
        Model::PauseCampaignOutcomeCallable PauseCampaignCallable(const PauseCampaignRequestT& request) const
        {
            return SubmitCallable(&ConnectCampaignsClient::PauseCampaign, request);
        }

        /**
         * An Async wrapper for PauseCampaign that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PauseCampaignRequestT = Model::PauseCampaignRequest>
        void PauseCampaignAsync(const PauseCampaignRequestT& request, const PauseCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCampaignsClient::PauseCampaign, request, handler, context);
        }

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
        template<typename PutDialRequestBatchRequestT = Model::PutDialRequestBatchRequest>
        Model::PutDialRequestBatchOutcomeCallable PutDialRequestBatchCallable(const PutDialRequestBatchRequestT& request) const
        {
            return SubmitCallable(&ConnectCampaignsClient::PutDialRequestBatch, request);
        }

        /**
         * An Async wrapper for PutDialRequestBatch that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutDialRequestBatchRequestT = Model::PutDialRequestBatchRequest>
        void PutDialRequestBatchAsync(const PutDialRequestBatchRequestT& request, const PutDialRequestBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCampaignsClient::PutDialRequestBatch, request, handler, context);
        }

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
        template<typename ResumeCampaignRequestT = Model::ResumeCampaignRequest>
        Model::ResumeCampaignOutcomeCallable ResumeCampaignCallable(const ResumeCampaignRequestT& request) const
        {
            return SubmitCallable(&ConnectCampaignsClient::ResumeCampaign, request);
        }

        /**
         * An Async wrapper for ResumeCampaign that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ResumeCampaignRequestT = Model::ResumeCampaignRequest>
        void ResumeCampaignAsync(const ResumeCampaignRequestT& request, const ResumeCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCampaignsClient::ResumeCampaign, request, handler, context);
        }

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
        template<typename StartCampaignRequestT = Model::StartCampaignRequest>
        Model::StartCampaignOutcomeCallable StartCampaignCallable(const StartCampaignRequestT& request) const
        {
            return SubmitCallable(&ConnectCampaignsClient::StartCampaign, request);
        }

        /**
         * An Async wrapper for StartCampaign that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartCampaignRequestT = Model::StartCampaignRequest>
        void StartCampaignAsync(const StartCampaignRequestT& request, const StartCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCampaignsClient::StartCampaign, request, handler, context);
        }

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
        template<typename StartInstanceOnboardingJobRequestT = Model::StartInstanceOnboardingJobRequest>
        Model::StartInstanceOnboardingJobOutcomeCallable StartInstanceOnboardingJobCallable(const StartInstanceOnboardingJobRequestT& request) const
        {
            return SubmitCallable(&ConnectCampaignsClient::StartInstanceOnboardingJob, request);
        }

        /**
         * An Async wrapper for StartInstanceOnboardingJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartInstanceOnboardingJobRequestT = Model::StartInstanceOnboardingJobRequest>
        void StartInstanceOnboardingJobAsync(const StartInstanceOnboardingJobRequestT& request, const StartInstanceOnboardingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCampaignsClient::StartInstanceOnboardingJob, request, handler, context);
        }

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
        template<typename StopCampaignRequestT = Model::StopCampaignRequest>
        Model::StopCampaignOutcomeCallable StopCampaignCallable(const StopCampaignRequestT& request) const
        {
            return SubmitCallable(&ConnectCampaignsClient::StopCampaign, request);
        }

        /**
         * An Async wrapper for StopCampaign that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopCampaignRequestT = Model::StopCampaignRequest>
        void StopCampaignAsync(const StopCampaignRequestT& request, const StopCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCampaignsClient::StopCampaign, request, handler, context);
        }

        /**
         * <p>Tag a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&ConnectCampaignsClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCampaignsClient::TagResource, request, handler, context);
        }

        /**
         * <p>Untag a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&ConnectCampaignsClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCampaignsClient::UntagResource, request, handler, context);
        }

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
        template<typename UpdateCampaignDialerConfigRequestT = Model::UpdateCampaignDialerConfigRequest>
        Model::UpdateCampaignDialerConfigOutcomeCallable UpdateCampaignDialerConfigCallable(const UpdateCampaignDialerConfigRequestT& request) const
        {
            return SubmitCallable(&ConnectCampaignsClient::UpdateCampaignDialerConfig, request);
        }

        /**
         * An Async wrapper for UpdateCampaignDialerConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateCampaignDialerConfigRequestT = Model::UpdateCampaignDialerConfigRequest>
        void UpdateCampaignDialerConfigAsync(const UpdateCampaignDialerConfigRequestT& request, const UpdateCampaignDialerConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCampaignsClient::UpdateCampaignDialerConfig, request, handler, context);
        }

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
        template<typename UpdateCampaignNameRequestT = Model::UpdateCampaignNameRequest>
        Model::UpdateCampaignNameOutcomeCallable UpdateCampaignNameCallable(const UpdateCampaignNameRequestT& request) const
        {
            return SubmitCallable(&ConnectCampaignsClient::UpdateCampaignName, request);
        }

        /**
         * An Async wrapper for UpdateCampaignName that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateCampaignNameRequestT = Model::UpdateCampaignNameRequest>
        void UpdateCampaignNameAsync(const UpdateCampaignNameRequestT& request, const UpdateCampaignNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCampaignsClient::UpdateCampaignName, request, handler, context);
        }

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
        template<typename UpdateCampaignOutboundCallConfigRequestT = Model::UpdateCampaignOutboundCallConfigRequest>
        Model::UpdateCampaignOutboundCallConfigOutcomeCallable UpdateCampaignOutboundCallConfigCallable(const UpdateCampaignOutboundCallConfigRequestT& request) const
        {
            return SubmitCallable(&ConnectCampaignsClient::UpdateCampaignOutboundCallConfig, request);
        }

        /**
         * An Async wrapper for UpdateCampaignOutboundCallConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateCampaignOutboundCallConfigRequestT = Model::UpdateCampaignOutboundCallConfigRequest>
        void UpdateCampaignOutboundCallConfigAsync(const UpdateCampaignOutboundCallConfigRequestT& request, const UpdateCampaignOutboundCallConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCampaignsClient::UpdateCampaignOutboundCallConfig, request, handler, context);
        }


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
