/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/connectcampaignsv2/ConnectCampaignsV2ServiceClientModel.h>

namespace Aws
{
namespace ConnectCampaignsV2
{
  /**
   * <p>Provide APIs to create and manage Amazon Connect Campaigns.</p>
   */
  class AWS_CONNECTCAMPAIGNSV2_API ConnectCampaignsV2Client : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<ConnectCampaignsV2Client>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef ConnectCampaignsV2ClientConfiguration ClientConfigurationType;
      typedef ConnectCampaignsV2EndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ConnectCampaignsV2Client(const Aws::ConnectCampaignsV2::ConnectCampaignsV2ClientConfiguration& clientConfiguration = Aws::ConnectCampaignsV2::ConnectCampaignsV2ClientConfiguration(),
                                 std::shared_ptr<ConnectCampaignsV2EndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ConnectCampaignsV2Client(const Aws::Auth::AWSCredentials& credentials,
                                 std::shared_ptr<ConnectCampaignsV2EndpointProviderBase> endpointProvider = nullptr,
                                 const Aws::ConnectCampaignsV2::ConnectCampaignsV2ClientConfiguration& clientConfiguration = Aws::ConnectCampaignsV2::ConnectCampaignsV2ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ConnectCampaignsV2Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                 std::shared_ptr<ConnectCampaignsV2EndpointProviderBase> endpointProvider = nullptr,
                                 const Aws::ConnectCampaignsV2::ConnectCampaignsV2ClientConfiguration& clientConfiguration = Aws::ConnectCampaignsV2::ConnectCampaignsV2ClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ConnectCampaignsV2Client(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ConnectCampaignsV2Client(const Aws::Auth::AWSCredentials& credentials,
                                 const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ConnectCampaignsV2Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                 const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~ConnectCampaignsV2Client();

        /**
         * <p>Creates a campaign for the specified Amazon Connect account. This API is
         * idempotent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/CreateCampaign">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCampaignOutcome CreateCampaign(const Model::CreateCampaignRequest& request) const;

        /**
         * A Callable wrapper for CreateCampaign that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateCampaignRequestT = Model::CreateCampaignRequest>
        Model::CreateCampaignOutcomeCallable CreateCampaignCallable(const CreateCampaignRequestT& request) const
        {
            return SubmitCallable(&ConnectCampaignsV2Client::CreateCampaign, request);
        }

        /**
         * An Async wrapper for CreateCampaign that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateCampaignRequestT = Model::CreateCampaignRequest>
        void CreateCampaignAsync(const CreateCampaignRequestT& request, const CreateCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCampaignsV2Client::CreateCampaign, request, handler, context);
        }

        /**
         * <p>Deletes a campaign from the specified Amazon Connect account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/DeleteCampaign">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCampaignOutcome DeleteCampaign(const Model::DeleteCampaignRequest& request) const;

        /**
         * A Callable wrapper for DeleteCampaign that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteCampaignRequestT = Model::DeleteCampaignRequest>
        Model::DeleteCampaignOutcomeCallable DeleteCampaignCallable(const DeleteCampaignRequestT& request) const
        {
            return SubmitCallable(&ConnectCampaignsV2Client::DeleteCampaign, request);
        }

        /**
         * An Async wrapper for DeleteCampaign that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCampaignRequestT = Model::DeleteCampaignRequest>
        void DeleteCampaignAsync(const DeleteCampaignRequestT& request, const DeleteCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCampaignsV2Client::DeleteCampaign, request, handler, context);
        }

        /**
         * <p>Deletes the channel subtype config of a campaign. This API is
         * idempotent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/DeleteCampaignChannelSubtypeConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCampaignChannelSubtypeConfigOutcome DeleteCampaignChannelSubtypeConfig(const Model::DeleteCampaignChannelSubtypeConfigRequest& request) const;

        /**
         * A Callable wrapper for DeleteCampaignChannelSubtypeConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteCampaignChannelSubtypeConfigRequestT = Model::DeleteCampaignChannelSubtypeConfigRequest>
        Model::DeleteCampaignChannelSubtypeConfigOutcomeCallable DeleteCampaignChannelSubtypeConfigCallable(const DeleteCampaignChannelSubtypeConfigRequestT& request) const
        {
            return SubmitCallable(&ConnectCampaignsV2Client::DeleteCampaignChannelSubtypeConfig, request);
        }

        /**
         * An Async wrapper for DeleteCampaignChannelSubtypeConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCampaignChannelSubtypeConfigRequestT = Model::DeleteCampaignChannelSubtypeConfigRequest>
        void DeleteCampaignChannelSubtypeConfigAsync(const DeleteCampaignChannelSubtypeConfigRequestT& request, const DeleteCampaignChannelSubtypeConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCampaignsV2Client::DeleteCampaignChannelSubtypeConfig, request, handler, context);
        }

        /**
         * <p>Deletes the communication limits config for a campaign. This API is
         * idempotent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/DeleteCampaignCommunicationLimits">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCampaignCommunicationLimitsOutcome DeleteCampaignCommunicationLimits(const Model::DeleteCampaignCommunicationLimitsRequest& request) const;

        /**
         * A Callable wrapper for DeleteCampaignCommunicationLimits that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteCampaignCommunicationLimitsRequestT = Model::DeleteCampaignCommunicationLimitsRequest>
        Model::DeleteCampaignCommunicationLimitsOutcomeCallable DeleteCampaignCommunicationLimitsCallable(const DeleteCampaignCommunicationLimitsRequestT& request) const
        {
            return SubmitCallable(&ConnectCampaignsV2Client::DeleteCampaignCommunicationLimits, request);
        }

        /**
         * An Async wrapper for DeleteCampaignCommunicationLimits that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCampaignCommunicationLimitsRequestT = Model::DeleteCampaignCommunicationLimitsRequest>
        void DeleteCampaignCommunicationLimitsAsync(const DeleteCampaignCommunicationLimitsRequestT& request, const DeleteCampaignCommunicationLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCampaignsV2Client::DeleteCampaignCommunicationLimits, request, handler, context);
        }

        /**
         * <p>Deletes the communication time config for a campaign. This API is
         * idempotent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/DeleteCampaignCommunicationTime">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCampaignCommunicationTimeOutcome DeleteCampaignCommunicationTime(const Model::DeleteCampaignCommunicationTimeRequest& request) const;

        /**
         * A Callable wrapper for DeleteCampaignCommunicationTime that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteCampaignCommunicationTimeRequestT = Model::DeleteCampaignCommunicationTimeRequest>
        Model::DeleteCampaignCommunicationTimeOutcomeCallable DeleteCampaignCommunicationTimeCallable(const DeleteCampaignCommunicationTimeRequestT& request) const
        {
            return SubmitCallable(&ConnectCampaignsV2Client::DeleteCampaignCommunicationTime, request);
        }

        /**
         * An Async wrapper for DeleteCampaignCommunicationTime that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCampaignCommunicationTimeRequestT = Model::DeleteCampaignCommunicationTimeRequest>
        void DeleteCampaignCommunicationTimeAsync(const DeleteCampaignCommunicationTimeRequestT& request, const DeleteCampaignCommunicationTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCampaignsV2Client::DeleteCampaignCommunicationTime, request, handler, context);
        }

        /**
         * <p>Deletes a connect instance config from the specified AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/DeleteConnectInstanceConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConnectInstanceConfigOutcome DeleteConnectInstanceConfig(const Model::DeleteConnectInstanceConfigRequest& request) const;

        /**
         * A Callable wrapper for DeleteConnectInstanceConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteConnectInstanceConfigRequestT = Model::DeleteConnectInstanceConfigRequest>
        Model::DeleteConnectInstanceConfigOutcomeCallable DeleteConnectInstanceConfigCallable(const DeleteConnectInstanceConfigRequestT& request) const
        {
            return SubmitCallable(&ConnectCampaignsV2Client::DeleteConnectInstanceConfig, request);
        }

        /**
         * An Async wrapper for DeleteConnectInstanceConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteConnectInstanceConfigRequestT = Model::DeleteConnectInstanceConfigRequest>
        void DeleteConnectInstanceConfigAsync(const DeleteConnectInstanceConfigRequestT& request, const DeleteConnectInstanceConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCampaignsV2Client::DeleteConnectInstanceConfig, request, handler, context);
        }

        /**
         * <p>Delete the integration for the specified Amazon Connect
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/DeleteConnectInstanceIntegration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConnectInstanceIntegrationOutcome DeleteConnectInstanceIntegration(const Model::DeleteConnectInstanceIntegrationRequest& request) const;

        /**
         * A Callable wrapper for DeleteConnectInstanceIntegration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteConnectInstanceIntegrationRequestT = Model::DeleteConnectInstanceIntegrationRequest>
        Model::DeleteConnectInstanceIntegrationOutcomeCallable DeleteConnectInstanceIntegrationCallable(const DeleteConnectInstanceIntegrationRequestT& request) const
        {
            return SubmitCallable(&ConnectCampaignsV2Client::DeleteConnectInstanceIntegration, request);
        }

        /**
         * An Async wrapper for DeleteConnectInstanceIntegration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteConnectInstanceIntegrationRequestT = Model::DeleteConnectInstanceIntegrationRequest>
        void DeleteConnectInstanceIntegrationAsync(const DeleteConnectInstanceIntegrationRequestT& request, const DeleteConnectInstanceIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCampaignsV2Client::DeleteConnectInstanceIntegration, request, handler, context);
        }

        /**
         * <p>Delete the Connect Campaigns onboarding job for the specified Amazon Connect
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/DeleteInstanceOnboardingJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInstanceOnboardingJobOutcome DeleteInstanceOnboardingJob(const Model::DeleteInstanceOnboardingJobRequest& request) const;

        /**
         * A Callable wrapper for DeleteInstanceOnboardingJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteInstanceOnboardingJobRequestT = Model::DeleteInstanceOnboardingJobRequest>
        Model::DeleteInstanceOnboardingJobOutcomeCallable DeleteInstanceOnboardingJobCallable(const DeleteInstanceOnboardingJobRequestT& request) const
        {
            return SubmitCallable(&ConnectCampaignsV2Client::DeleteInstanceOnboardingJob, request);
        }

        /**
         * An Async wrapper for DeleteInstanceOnboardingJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteInstanceOnboardingJobRequestT = Model::DeleteInstanceOnboardingJobRequest>
        void DeleteInstanceOnboardingJobAsync(const DeleteInstanceOnboardingJobRequestT& request, const DeleteInstanceOnboardingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCampaignsV2Client::DeleteInstanceOnboardingJob, request, handler, context);
        }

        /**
         * <p>Describes the specific campaign.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/DescribeCampaign">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCampaignOutcome DescribeCampaign(const Model::DescribeCampaignRequest& request) const;

        /**
         * A Callable wrapper for DescribeCampaign that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeCampaignRequestT = Model::DescribeCampaignRequest>
        Model::DescribeCampaignOutcomeCallable DescribeCampaignCallable(const DescribeCampaignRequestT& request) const
        {
            return SubmitCallable(&ConnectCampaignsV2Client::DescribeCampaign, request);
        }

        /**
         * An Async wrapper for DescribeCampaign that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeCampaignRequestT = Model::DescribeCampaignRequest>
        void DescribeCampaignAsync(const DescribeCampaignRequestT& request, const DescribeCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCampaignsV2Client::DescribeCampaign, request, handler, context);
        }

        /**
         * <p>Get state of a campaign for the specified Amazon Connect
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/GetCampaignState">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCampaignStateOutcome GetCampaignState(const Model::GetCampaignStateRequest& request) const;

        /**
         * A Callable wrapper for GetCampaignState that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCampaignStateRequestT = Model::GetCampaignStateRequest>
        Model::GetCampaignStateOutcomeCallable GetCampaignStateCallable(const GetCampaignStateRequestT& request) const
        {
            return SubmitCallable(&ConnectCampaignsV2Client::GetCampaignState, request);
        }

        /**
         * An Async wrapper for GetCampaignState that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCampaignStateRequestT = Model::GetCampaignStateRequest>
        void GetCampaignStateAsync(const GetCampaignStateRequestT& request, const GetCampaignStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCampaignsV2Client::GetCampaignState, request, handler, context);
        }

        /**
         * <p>Get state of campaigns for the specified Amazon Connect
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/GetCampaignStateBatch">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCampaignStateBatchOutcome GetCampaignStateBatch(const Model::GetCampaignStateBatchRequest& request) const;

        /**
         * A Callable wrapper for GetCampaignStateBatch that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCampaignStateBatchRequestT = Model::GetCampaignStateBatchRequest>
        Model::GetCampaignStateBatchOutcomeCallable GetCampaignStateBatchCallable(const GetCampaignStateBatchRequestT& request) const
        {
            return SubmitCallable(&ConnectCampaignsV2Client::GetCampaignStateBatch, request);
        }

        /**
         * An Async wrapper for GetCampaignStateBatch that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCampaignStateBatchRequestT = Model::GetCampaignStateBatchRequest>
        void GetCampaignStateBatchAsync(const GetCampaignStateBatchRequestT& request, const GetCampaignStateBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCampaignsV2Client::GetCampaignStateBatch, request, handler, context);
        }

        /**
         * <p>Get the specific Connect instance config.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/GetConnectInstanceConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConnectInstanceConfigOutcome GetConnectInstanceConfig(const Model::GetConnectInstanceConfigRequest& request) const;

        /**
         * A Callable wrapper for GetConnectInstanceConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetConnectInstanceConfigRequestT = Model::GetConnectInstanceConfigRequest>
        Model::GetConnectInstanceConfigOutcomeCallable GetConnectInstanceConfigCallable(const GetConnectInstanceConfigRequestT& request) const
        {
            return SubmitCallable(&ConnectCampaignsV2Client::GetConnectInstanceConfig, request);
        }

        /**
         * An Async wrapper for GetConnectInstanceConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetConnectInstanceConfigRequestT = Model::GetConnectInstanceConfigRequest>
        void GetConnectInstanceConfigAsync(const GetConnectInstanceConfigRequestT& request, const GetConnectInstanceConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCampaignsV2Client::GetConnectInstanceConfig, request, handler, context);
        }

        /**
         * <p>Get the instance communication limits.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/GetInstanceCommunicationLimits">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInstanceCommunicationLimitsOutcome GetInstanceCommunicationLimits(const Model::GetInstanceCommunicationLimitsRequest& request) const;

        /**
         * A Callable wrapper for GetInstanceCommunicationLimits that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetInstanceCommunicationLimitsRequestT = Model::GetInstanceCommunicationLimitsRequest>
        Model::GetInstanceCommunicationLimitsOutcomeCallable GetInstanceCommunicationLimitsCallable(const GetInstanceCommunicationLimitsRequestT& request) const
        {
            return SubmitCallable(&ConnectCampaignsV2Client::GetInstanceCommunicationLimits, request);
        }

        /**
         * An Async wrapper for GetInstanceCommunicationLimits that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetInstanceCommunicationLimitsRequestT = Model::GetInstanceCommunicationLimitsRequest>
        void GetInstanceCommunicationLimitsAsync(const GetInstanceCommunicationLimitsRequestT& request, const GetInstanceCommunicationLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCampaignsV2Client::GetInstanceCommunicationLimits, request, handler, context);
        }

        /**
         * <p>Get the specific instance onboarding job status.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/GetInstanceOnboardingJobStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInstanceOnboardingJobStatusOutcome GetInstanceOnboardingJobStatus(const Model::GetInstanceOnboardingJobStatusRequest& request) const;

        /**
         * A Callable wrapper for GetInstanceOnboardingJobStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetInstanceOnboardingJobStatusRequestT = Model::GetInstanceOnboardingJobStatusRequest>
        Model::GetInstanceOnboardingJobStatusOutcomeCallable GetInstanceOnboardingJobStatusCallable(const GetInstanceOnboardingJobStatusRequestT& request) const
        {
            return SubmitCallable(&ConnectCampaignsV2Client::GetInstanceOnboardingJobStatus, request);
        }

        /**
         * An Async wrapper for GetInstanceOnboardingJobStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetInstanceOnboardingJobStatusRequestT = Model::GetInstanceOnboardingJobStatusRequest>
        void GetInstanceOnboardingJobStatusAsync(const GetInstanceOnboardingJobStatusRequestT& request, const GetInstanceOnboardingJobStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCampaignsV2Client::GetInstanceOnboardingJobStatus, request, handler, context);
        }

        /**
         * <p>Provides summary information about the campaigns under the specified Amazon
         * Connect account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/ListCampaigns">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCampaignsOutcome ListCampaigns(const Model::ListCampaignsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListCampaigns that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCampaignsRequestT = Model::ListCampaignsRequest>
        Model::ListCampaignsOutcomeCallable ListCampaignsCallable(const ListCampaignsRequestT& request = {}) const
        {
            return SubmitCallable(&ConnectCampaignsV2Client::ListCampaigns, request);
        }

        /**
         * An Async wrapper for ListCampaigns that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCampaignsRequestT = Model::ListCampaignsRequest>
        void ListCampaignsAsync(const ListCampaignsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListCampaignsRequestT& request = {}) const
        {
            return SubmitAsync(&ConnectCampaignsV2Client::ListCampaigns, request, handler, context);
        }

        /**
         * <p>Provides summary information about the integration under the specified
         * Connect instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/ListConnectInstanceIntegrations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConnectInstanceIntegrationsOutcome ListConnectInstanceIntegrations(const Model::ListConnectInstanceIntegrationsRequest& request) const;

        /**
         * A Callable wrapper for ListConnectInstanceIntegrations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListConnectInstanceIntegrationsRequestT = Model::ListConnectInstanceIntegrationsRequest>
        Model::ListConnectInstanceIntegrationsOutcomeCallable ListConnectInstanceIntegrationsCallable(const ListConnectInstanceIntegrationsRequestT& request) const
        {
            return SubmitCallable(&ConnectCampaignsV2Client::ListConnectInstanceIntegrations, request);
        }

        /**
         * An Async wrapper for ListConnectInstanceIntegrations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListConnectInstanceIntegrationsRequestT = Model::ListConnectInstanceIntegrationsRequest>
        void ListConnectInstanceIntegrationsAsync(const ListConnectInstanceIntegrationsRequestT& request, const ListConnectInstanceIntegrationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCampaignsV2Client::ListConnectInstanceIntegrations, request, handler, context);
        }

        /**
         * <p>List tags for a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&ConnectCampaignsV2Client::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCampaignsV2Client::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Pauses a campaign for the specified Amazon Connect account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/PauseCampaign">AWS
         * API Reference</a></p>
         */
        virtual Model::PauseCampaignOutcome PauseCampaign(const Model::PauseCampaignRequest& request) const;

        /**
         * A Callable wrapper for PauseCampaign that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PauseCampaignRequestT = Model::PauseCampaignRequest>
        Model::PauseCampaignOutcomeCallable PauseCampaignCallable(const PauseCampaignRequestT& request) const
        {
            return SubmitCallable(&ConnectCampaignsV2Client::PauseCampaign, request);
        }

        /**
         * An Async wrapper for PauseCampaign that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PauseCampaignRequestT = Model::PauseCampaignRequest>
        void PauseCampaignAsync(const PauseCampaignRequestT& request, const PauseCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCampaignsV2Client::PauseCampaign, request, handler, context);
        }

        /**
         * <p>Put or update the integration for the specified Amazon Connect
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/PutConnectInstanceIntegration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutConnectInstanceIntegrationOutcome PutConnectInstanceIntegration(const Model::PutConnectInstanceIntegrationRequest& request) const;

        /**
         * A Callable wrapper for PutConnectInstanceIntegration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutConnectInstanceIntegrationRequestT = Model::PutConnectInstanceIntegrationRequest>
        Model::PutConnectInstanceIntegrationOutcomeCallable PutConnectInstanceIntegrationCallable(const PutConnectInstanceIntegrationRequestT& request) const
        {
            return SubmitCallable(&ConnectCampaignsV2Client::PutConnectInstanceIntegration, request);
        }

        /**
         * An Async wrapper for PutConnectInstanceIntegration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutConnectInstanceIntegrationRequestT = Model::PutConnectInstanceIntegrationRequest>
        void PutConnectInstanceIntegrationAsync(const PutConnectInstanceIntegrationRequestT& request, const PutConnectInstanceIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCampaignsV2Client::PutConnectInstanceIntegration, request, handler, context);
        }

        /**
         * <p>Put the instance communication limits. This API is idempotent.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/PutInstanceCommunicationLimits">AWS
         * API Reference</a></p>
         */
        virtual Model::PutInstanceCommunicationLimitsOutcome PutInstanceCommunicationLimits(const Model::PutInstanceCommunicationLimitsRequest& request) const;

        /**
         * A Callable wrapper for PutInstanceCommunicationLimits that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutInstanceCommunicationLimitsRequestT = Model::PutInstanceCommunicationLimitsRequest>
        Model::PutInstanceCommunicationLimitsOutcomeCallable PutInstanceCommunicationLimitsCallable(const PutInstanceCommunicationLimitsRequestT& request) const
        {
            return SubmitCallable(&ConnectCampaignsV2Client::PutInstanceCommunicationLimits, request);
        }

        /**
         * An Async wrapper for PutInstanceCommunicationLimits that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutInstanceCommunicationLimitsRequestT = Model::PutInstanceCommunicationLimitsRequest>
        void PutInstanceCommunicationLimitsAsync(const PutInstanceCommunicationLimitsRequestT& request, const PutInstanceCommunicationLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCampaignsV2Client::PutInstanceCommunicationLimits, request, handler, context);
        }

        /**
         * <p>Creates outbound requests for the specified campaign Amazon Connect account.
         * This API is idempotent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/PutOutboundRequestBatch">AWS
         * API Reference</a></p>
         */
        virtual Model::PutOutboundRequestBatchOutcome PutOutboundRequestBatch(const Model::PutOutboundRequestBatchRequest& request) const;

        /**
         * A Callable wrapper for PutOutboundRequestBatch that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutOutboundRequestBatchRequestT = Model::PutOutboundRequestBatchRequest>
        Model::PutOutboundRequestBatchOutcomeCallable PutOutboundRequestBatchCallable(const PutOutboundRequestBatchRequestT& request) const
        {
            return SubmitCallable(&ConnectCampaignsV2Client::PutOutboundRequestBatch, request);
        }

        /**
         * An Async wrapper for PutOutboundRequestBatch that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutOutboundRequestBatchRequestT = Model::PutOutboundRequestBatchRequest>
        void PutOutboundRequestBatchAsync(const PutOutboundRequestBatchRequestT& request, const PutOutboundRequestBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCampaignsV2Client::PutOutboundRequestBatch, request, handler, context);
        }

        /**
         * <p>Takes in a list of profile outbound requests to be placed as part of an
         * outbound campaign. This API is idempotent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/PutProfileOutboundRequestBatch">AWS
         * API Reference</a></p>
         */
        virtual Model::PutProfileOutboundRequestBatchOutcome PutProfileOutboundRequestBatch(const Model::PutProfileOutboundRequestBatchRequest& request) const;

        /**
         * A Callable wrapper for PutProfileOutboundRequestBatch that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutProfileOutboundRequestBatchRequestT = Model::PutProfileOutboundRequestBatchRequest>
        Model::PutProfileOutboundRequestBatchOutcomeCallable PutProfileOutboundRequestBatchCallable(const PutProfileOutboundRequestBatchRequestT& request) const
        {
            return SubmitCallable(&ConnectCampaignsV2Client::PutProfileOutboundRequestBatch, request);
        }

        /**
         * An Async wrapper for PutProfileOutboundRequestBatch that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutProfileOutboundRequestBatchRequestT = Model::PutProfileOutboundRequestBatchRequest>
        void PutProfileOutboundRequestBatchAsync(const PutProfileOutboundRequestBatchRequestT& request, const PutProfileOutboundRequestBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCampaignsV2Client::PutProfileOutboundRequestBatch, request, handler, context);
        }

        /**
         * <p>Stops a campaign for the specified Amazon Connect account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/ResumeCampaign">AWS
         * API Reference</a></p>
         */
        virtual Model::ResumeCampaignOutcome ResumeCampaign(const Model::ResumeCampaignRequest& request) const;

        /**
         * A Callable wrapper for ResumeCampaign that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ResumeCampaignRequestT = Model::ResumeCampaignRequest>
        Model::ResumeCampaignOutcomeCallable ResumeCampaignCallable(const ResumeCampaignRequestT& request) const
        {
            return SubmitCallable(&ConnectCampaignsV2Client::ResumeCampaign, request);
        }

        /**
         * An Async wrapper for ResumeCampaign that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ResumeCampaignRequestT = Model::ResumeCampaignRequest>
        void ResumeCampaignAsync(const ResumeCampaignRequestT& request, const ResumeCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCampaignsV2Client::ResumeCampaign, request, handler, context);
        }

        /**
         * <p>Starts a campaign for the specified Amazon Connect account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/StartCampaign">AWS
         * API Reference</a></p>
         */
        virtual Model::StartCampaignOutcome StartCampaign(const Model::StartCampaignRequest& request) const;

        /**
         * A Callable wrapper for StartCampaign that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartCampaignRequestT = Model::StartCampaignRequest>
        Model::StartCampaignOutcomeCallable StartCampaignCallable(const StartCampaignRequestT& request) const
        {
            return SubmitCallable(&ConnectCampaignsV2Client::StartCampaign, request);
        }

        /**
         * An Async wrapper for StartCampaign that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartCampaignRequestT = Model::StartCampaignRequest>
        void StartCampaignAsync(const StartCampaignRequestT& request, const StartCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCampaignsV2Client::StartCampaign, request, handler, context);
        }

        /**
         * <p>Onboard the specific Amazon Connect instance to Connect
         * Campaigns.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/StartInstanceOnboardingJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartInstanceOnboardingJobOutcome StartInstanceOnboardingJob(const Model::StartInstanceOnboardingJobRequest& request) const;

        /**
         * A Callable wrapper for StartInstanceOnboardingJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartInstanceOnboardingJobRequestT = Model::StartInstanceOnboardingJobRequest>
        Model::StartInstanceOnboardingJobOutcomeCallable StartInstanceOnboardingJobCallable(const StartInstanceOnboardingJobRequestT& request) const
        {
            return SubmitCallable(&ConnectCampaignsV2Client::StartInstanceOnboardingJob, request);
        }

        /**
         * An Async wrapper for StartInstanceOnboardingJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartInstanceOnboardingJobRequestT = Model::StartInstanceOnboardingJobRequest>
        void StartInstanceOnboardingJobAsync(const StartInstanceOnboardingJobRequestT& request, const StartInstanceOnboardingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCampaignsV2Client::StartInstanceOnboardingJob, request, handler, context);
        }

        /**
         * <p>Stops a campaign for the specified Amazon Connect account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/StopCampaign">AWS
         * API Reference</a></p>
         */
        virtual Model::StopCampaignOutcome StopCampaign(const Model::StopCampaignRequest& request) const;

        /**
         * A Callable wrapper for StopCampaign that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopCampaignRequestT = Model::StopCampaignRequest>
        Model::StopCampaignOutcomeCallable StopCampaignCallable(const StopCampaignRequestT& request) const
        {
            return SubmitCallable(&ConnectCampaignsV2Client::StopCampaign, request);
        }

        /**
         * An Async wrapper for StopCampaign that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopCampaignRequestT = Model::StopCampaignRequest>
        void StopCampaignAsync(const StopCampaignRequestT& request, const StopCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCampaignsV2Client::StopCampaign, request, handler, context);
        }

        /**
         * <p>Tag a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&ConnectCampaignsV2Client::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCampaignsV2Client::TagResource, request, handler, context);
        }

        /**
         * <p>Untag a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&ConnectCampaignsV2Client::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCampaignsV2Client::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates the channel subtype config of a campaign. This API is
         * idempotent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/UpdateCampaignChannelSubtypeConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCampaignChannelSubtypeConfigOutcome UpdateCampaignChannelSubtypeConfig(const Model::UpdateCampaignChannelSubtypeConfigRequest& request) const;

        /**
         * A Callable wrapper for UpdateCampaignChannelSubtypeConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateCampaignChannelSubtypeConfigRequestT = Model::UpdateCampaignChannelSubtypeConfigRequest>
        Model::UpdateCampaignChannelSubtypeConfigOutcomeCallable UpdateCampaignChannelSubtypeConfigCallable(const UpdateCampaignChannelSubtypeConfigRequestT& request) const
        {
            return SubmitCallable(&ConnectCampaignsV2Client::UpdateCampaignChannelSubtypeConfig, request);
        }

        /**
         * An Async wrapper for UpdateCampaignChannelSubtypeConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateCampaignChannelSubtypeConfigRequestT = Model::UpdateCampaignChannelSubtypeConfigRequest>
        void UpdateCampaignChannelSubtypeConfigAsync(const UpdateCampaignChannelSubtypeConfigRequestT& request, const UpdateCampaignChannelSubtypeConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCampaignsV2Client::UpdateCampaignChannelSubtypeConfig, request, handler, context);
        }

        /**
         * <p>Updates the communication limits config for a campaign. This API is
         * idempotent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/UpdateCampaignCommunicationLimits">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCampaignCommunicationLimitsOutcome UpdateCampaignCommunicationLimits(const Model::UpdateCampaignCommunicationLimitsRequest& request) const;

        /**
         * A Callable wrapper for UpdateCampaignCommunicationLimits that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateCampaignCommunicationLimitsRequestT = Model::UpdateCampaignCommunicationLimitsRequest>
        Model::UpdateCampaignCommunicationLimitsOutcomeCallable UpdateCampaignCommunicationLimitsCallable(const UpdateCampaignCommunicationLimitsRequestT& request) const
        {
            return SubmitCallable(&ConnectCampaignsV2Client::UpdateCampaignCommunicationLimits, request);
        }

        /**
         * An Async wrapper for UpdateCampaignCommunicationLimits that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateCampaignCommunicationLimitsRequestT = Model::UpdateCampaignCommunicationLimitsRequest>
        void UpdateCampaignCommunicationLimitsAsync(const UpdateCampaignCommunicationLimitsRequestT& request, const UpdateCampaignCommunicationLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCampaignsV2Client::UpdateCampaignCommunicationLimits, request, handler, context);
        }

        /**
         * <p>Updates the communication time config for a campaign. This API is
         * idempotent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/UpdateCampaignCommunicationTime">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCampaignCommunicationTimeOutcome UpdateCampaignCommunicationTime(const Model::UpdateCampaignCommunicationTimeRequest& request) const;

        /**
         * A Callable wrapper for UpdateCampaignCommunicationTime that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateCampaignCommunicationTimeRequestT = Model::UpdateCampaignCommunicationTimeRequest>
        Model::UpdateCampaignCommunicationTimeOutcomeCallable UpdateCampaignCommunicationTimeCallable(const UpdateCampaignCommunicationTimeRequestT& request) const
        {
            return SubmitCallable(&ConnectCampaignsV2Client::UpdateCampaignCommunicationTime, request);
        }

        /**
         * An Async wrapper for UpdateCampaignCommunicationTime that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateCampaignCommunicationTimeRequestT = Model::UpdateCampaignCommunicationTimeRequest>
        void UpdateCampaignCommunicationTimeAsync(const UpdateCampaignCommunicationTimeRequestT& request, const UpdateCampaignCommunicationTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCampaignsV2Client::UpdateCampaignCommunicationTime, request, handler, context);
        }

        /**
         * <p>Updates the campaign flow associated with a campaign. This API is
         * idempotent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/UpdateCampaignFlowAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCampaignFlowAssociationOutcome UpdateCampaignFlowAssociation(const Model::UpdateCampaignFlowAssociationRequest& request) const;

        /**
         * A Callable wrapper for UpdateCampaignFlowAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateCampaignFlowAssociationRequestT = Model::UpdateCampaignFlowAssociationRequest>
        Model::UpdateCampaignFlowAssociationOutcomeCallable UpdateCampaignFlowAssociationCallable(const UpdateCampaignFlowAssociationRequestT& request) const
        {
            return SubmitCallable(&ConnectCampaignsV2Client::UpdateCampaignFlowAssociation, request);
        }

        /**
         * An Async wrapper for UpdateCampaignFlowAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateCampaignFlowAssociationRequestT = Model::UpdateCampaignFlowAssociationRequest>
        void UpdateCampaignFlowAssociationAsync(const UpdateCampaignFlowAssociationRequestT& request, const UpdateCampaignFlowAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCampaignsV2Client::UpdateCampaignFlowAssociation, request, handler, context);
        }

        /**
         * <p>Updates the name of a campaign. This API is idempotent.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/UpdateCampaignName">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCampaignNameOutcome UpdateCampaignName(const Model::UpdateCampaignNameRequest& request) const;

        /**
         * A Callable wrapper for UpdateCampaignName that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateCampaignNameRequestT = Model::UpdateCampaignNameRequest>
        Model::UpdateCampaignNameOutcomeCallable UpdateCampaignNameCallable(const UpdateCampaignNameRequestT& request) const
        {
            return SubmitCallable(&ConnectCampaignsV2Client::UpdateCampaignName, request);
        }

        /**
         * An Async wrapper for UpdateCampaignName that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateCampaignNameRequestT = Model::UpdateCampaignNameRequest>
        void UpdateCampaignNameAsync(const UpdateCampaignNameRequestT& request, const UpdateCampaignNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCampaignsV2Client::UpdateCampaignName, request, handler, context);
        }

        /**
         * <p>Updates the schedule for a campaign. This API is idempotent.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/UpdateCampaignSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCampaignScheduleOutcome UpdateCampaignSchedule(const Model::UpdateCampaignScheduleRequest& request) const;

        /**
         * A Callable wrapper for UpdateCampaignSchedule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateCampaignScheduleRequestT = Model::UpdateCampaignScheduleRequest>
        Model::UpdateCampaignScheduleOutcomeCallable UpdateCampaignScheduleCallable(const UpdateCampaignScheduleRequestT& request) const
        {
            return SubmitCallable(&ConnectCampaignsV2Client::UpdateCampaignSchedule, request);
        }

        /**
         * An Async wrapper for UpdateCampaignSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateCampaignScheduleRequestT = Model::UpdateCampaignScheduleRequest>
        void UpdateCampaignScheduleAsync(const UpdateCampaignScheduleRequestT& request, const UpdateCampaignScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCampaignsV2Client::UpdateCampaignSchedule, request, handler, context);
        }

        /**
         * <p>Updates the campaign source with a campaign. This API is
         * idempotent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/UpdateCampaignSource">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCampaignSourceOutcome UpdateCampaignSource(const Model::UpdateCampaignSourceRequest& request) const;

        /**
         * A Callable wrapper for UpdateCampaignSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateCampaignSourceRequestT = Model::UpdateCampaignSourceRequest>
        Model::UpdateCampaignSourceOutcomeCallable UpdateCampaignSourceCallable(const UpdateCampaignSourceRequestT& request) const
        {
            return SubmitCallable(&ConnectCampaignsV2Client::UpdateCampaignSource, request);
        }

        /**
         * An Async wrapper for UpdateCampaignSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateCampaignSourceRequestT = Model::UpdateCampaignSourceRequest>
        void UpdateCampaignSourceAsync(const UpdateCampaignSourceRequestT& request, const UpdateCampaignSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCampaignsV2Client::UpdateCampaignSource, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ConnectCampaignsV2EndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<ConnectCampaignsV2Client>;
      void init(const ConnectCampaignsV2ClientConfiguration& clientConfiguration);

      ConnectCampaignsV2ClientConfiguration m_clientConfiguration;
      std::shared_ptr<ConnectCampaignsV2EndpointProviderBase> m_endpointProvider;
  };

} // namespace ConnectCampaignsV2
} // namespace Aws
