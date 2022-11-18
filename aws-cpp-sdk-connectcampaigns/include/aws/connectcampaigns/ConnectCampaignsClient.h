/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaigns/ConnectCampaigns_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/connectcampaigns/ConnectCampaignsServiceClientModel.h>
#include <aws/connectcampaigns/ConnectCampaignsLegacyAsyncMacros.h>

namespace Aws
{
namespace ConnectCampaigns
{
  /**
   * <p>Provide APIs to create and manage Amazon Connect Campaigns.</p>
   */
  class AWS_CONNECTCAMPAIGNS_API ConnectCampaignsClient : public Aws::Client::AWSJsonClient
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


        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         const RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncStreamingOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            const RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableStreamingOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }


        /**
         * <p>Creates a campaign for the specified Amazon Connect account. This API is
         * idempotent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/CreateCampaign">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCampaignOutcome CreateCampaign(const Model::CreateCampaignRequest& request) const;


        /**
         * <p>Deletes a campaign from the specified Amazon Connect account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/DeleteCampaign">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCampaignOutcome DeleteCampaign(const Model::DeleteCampaignRequest& request) const;


        /**
         * <p>Deletes a connect instance config from the specified AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/DeleteConnectInstanceConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConnectInstanceConfigOutcome DeleteConnectInstanceConfig(const Model::DeleteConnectInstanceConfigRequest& request) const;


        /**
         * <p>Delete the Connect Campaigns onboarding job for the specified Amazon Connect
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/DeleteInstanceOnboardingJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInstanceOnboardingJobOutcome DeleteInstanceOnboardingJob(const Model::DeleteInstanceOnboardingJobRequest& request) const;


        /**
         * <p>Describes the specific campaign.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/DescribeCampaign">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCampaignOutcome DescribeCampaign(const Model::DescribeCampaignRequest& request) const;


        /**
         * <p>Get state of a campaign for the specified Amazon Connect
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/GetCampaignState">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCampaignStateOutcome GetCampaignState(const Model::GetCampaignStateRequest& request) const;


        /**
         * <p>Get state of campaigns for the specified Amazon Connect
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/GetCampaignStateBatch">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCampaignStateBatchOutcome GetCampaignStateBatch(const Model::GetCampaignStateBatchRequest& request) const;


        /**
         * <p>Get the specific Connect instance config.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/GetConnectInstanceConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConnectInstanceConfigOutcome GetConnectInstanceConfig(const Model::GetConnectInstanceConfigRequest& request) const;


        /**
         * <p>Get the specific instance onboarding job status.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/GetInstanceOnboardingJobStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInstanceOnboardingJobStatusOutcome GetInstanceOnboardingJobStatus(const Model::GetInstanceOnboardingJobStatusRequest& request) const;


        /**
         * <p>Provides summary information about the campaigns under the specified Amazon
         * Connect account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/ListCampaigns">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCampaignsOutcome ListCampaigns(const Model::ListCampaignsRequest& request) const;


        /**
         * <p>List tags for a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>Pauses a campaign for the specified Amazon Connect account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/PauseCampaign">AWS
         * API Reference</a></p>
         */
        virtual Model::PauseCampaignOutcome PauseCampaign(const Model::PauseCampaignRequest& request) const;


        /**
         * <p>Creates dials requests for the specified campaign Amazon Connect account.
         * This API is idempotent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/PutDialRequestBatch">AWS
         * API Reference</a></p>
         */
        virtual Model::PutDialRequestBatchOutcome PutDialRequestBatch(const Model::PutDialRequestBatchRequest& request) const;


        /**
         * <p>Stops a campaign for the specified Amazon Connect account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/ResumeCampaign">AWS
         * API Reference</a></p>
         */
        virtual Model::ResumeCampaignOutcome ResumeCampaign(const Model::ResumeCampaignRequest& request) const;


        /**
         * <p>Starts a campaign for the specified Amazon Connect account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/StartCampaign">AWS
         * API Reference</a></p>
         */
        virtual Model::StartCampaignOutcome StartCampaign(const Model::StartCampaignRequest& request) const;


        /**
         * <p>Onboard the specific Amazon Connect instance to Connect
         * Campaigns.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/StartInstanceOnboardingJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartInstanceOnboardingJobOutcome StartInstanceOnboardingJob(const Model::StartInstanceOnboardingJobRequest& request) const;


        /**
         * <p>Stops a campaign for the specified Amazon Connect account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/StopCampaign">AWS
         * API Reference</a></p>
         */
        virtual Model::StopCampaignOutcome StopCampaign(const Model::StopCampaignRequest& request) const;


        /**
         * <p>Tag a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Untag a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Updates the dialer config of a campaign. This API is
         * idempotent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/UpdateCampaignDialerConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCampaignDialerConfigOutcome UpdateCampaignDialerConfig(const Model::UpdateCampaignDialerConfigRequest& request) const;


        /**
         * <p>Updates the name of a campaign. This API is idempotent.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/UpdateCampaignName">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCampaignNameOutcome UpdateCampaignName(const Model::UpdateCampaignNameRequest& request) const;


        /**
         * <p>Updates the outbound call config of a campaign. This API is
         * idempotent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/UpdateCampaignOutboundCallConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCampaignOutboundCallConfigOutcome UpdateCampaignOutboundCallConfig(const Model::UpdateCampaignOutboundCallConfigRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ConnectCampaignsEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const ConnectCampaignsClientConfiguration& clientConfiguration);

      ConnectCampaignsClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ConnectCampaignsEndpointProviderBase> m_endpointProvider;
  };

} // namespace ConnectCampaigns
} // namespace Aws
