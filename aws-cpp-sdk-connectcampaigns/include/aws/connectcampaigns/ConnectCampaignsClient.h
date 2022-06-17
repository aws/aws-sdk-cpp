/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaigns/ConnectCampaigns_EXPORTS.h>
#include <aws/connectcampaigns/ConnectCampaignsErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/connectcampaigns/model/CreateCampaignResult.h>
#include <aws/connectcampaigns/model/DescribeCampaignResult.h>
#include <aws/connectcampaigns/model/GetCampaignStateResult.h>
#include <aws/connectcampaigns/model/GetCampaignStateBatchResult.h>
#include <aws/connectcampaigns/model/GetConnectInstanceConfigResult.h>
#include <aws/connectcampaigns/model/GetInstanceOnboardingJobStatusResult.h>
#include <aws/connectcampaigns/model/ListCampaignsResult.h>
#include <aws/connectcampaigns/model/ListTagsForResourceResult.h>
#include <aws/connectcampaigns/model/PutDialRequestBatchResult.h>
#include <aws/connectcampaigns/model/StartInstanceOnboardingJobResult.h>
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

namespace ConnectCampaigns
{

namespace Model
{
        class CreateCampaignRequest;
        class DeleteCampaignRequest;
        class DeleteConnectInstanceConfigRequest;
        class DeleteInstanceOnboardingJobRequest;
        class DescribeCampaignRequest;
        class GetCampaignStateRequest;
        class GetCampaignStateBatchRequest;
        class GetConnectInstanceConfigRequest;
        class GetInstanceOnboardingJobStatusRequest;
        class ListCampaignsRequest;
        class ListTagsForResourceRequest;
        class PauseCampaignRequest;
        class PutDialRequestBatchRequest;
        class ResumeCampaignRequest;
        class StartCampaignRequest;
        class StartInstanceOnboardingJobRequest;
        class StopCampaignRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateCampaignDialerConfigRequest;
        class UpdateCampaignNameRequest;
        class UpdateCampaignOutboundCallConfigRequest;

        typedef Aws::Utils::Outcome<CreateCampaignResult, ConnectCampaignsError> CreateCampaignOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ConnectCampaignsError> DeleteCampaignOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ConnectCampaignsError> DeleteConnectInstanceConfigOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ConnectCampaignsError> DeleteInstanceOnboardingJobOutcome;
        typedef Aws::Utils::Outcome<DescribeCampaignResult, ConnectCampaignsError> DescribeCampaignOutcome;
        typedef Aws::Utils::Outcome<GetCampaignStateResult, ConnectCampaignsError> GetCampaignStateOutcome;
        typedef Aws::Utils::Outcome<GetCampaignStateBatchResult, ConnectCampaignsError> GetCampaignStateBatchOutcome;
        typedef Aws::Utils::Outcome<GetConnectInstanceConfigResult, ConnectCampaignsError> GetConnectInstanceConfigOutcome;
        typedef Aws::Utils::Outcome<GetInstanceOnboardingJobStatusResult, ConnectCampaignsError> GetInstanceOnboardingJobStatusOutcome;
        typedef Aws::Utils::Outcome<ListCampaignsResult, ConnectCampaignsError> ListCampaignsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, ConnectCampaignsError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ConnectCampaignsError> PauseCampaignOutcome;
        typedef Aws::Utils::Outcome<PutDialRequestBatchResult, ConnectCampaignsError> PutDialRequestBatchOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ConnectCampaignsError> ResumeCampaignOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ConnectCampaignsError> StartCampaignOutcome;
        typedef Aws::Utils::Outcome<StartInstanceOnboardingJobResult, ConnectCampaignsError> StartInstanceOnboardingJobOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ConnectCampaignsError> StopCampaignOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ConnectCampaignsError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ConnectCampaignsError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ConnectCampaignsError> UpdateCampaignDialerConfigOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ConnectCampaignsError> UpdateCampaignNameOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ConnectCampaignsError> UpdateCampaignOutboundCallConfigOutcome;

        typedef std::future<CreateCampaignOutcome> CreateCampaignOutcomeCallable;
        typedef std::future<DeleteCampaignOutcome> DeleteCampaignOutcomeCallable;
        typedef std::future<DeleteConnectInstanceConfigOutcome> DeleteConnectInstanceConfigOutcomeCallable;
        typedef std::future<DeleteInstanceOnboardingJobOutcome> DeleteInstanceOnboardingJobOutcomeCallable;
        typedef std::future<DescribeCampaignOutcome> DescribeCampaignOutcomeCallable;
        typedef std::future<GetCampaignStateOutcome> GetCampaignStateOutcomeCallable;
        typedef std::future<GetCampaignStateBatchOutcome> GetCampaignStateBatchOutcomeCallable;
        typedef std::future<GetConnectInstanceConfigOutcome> GetConnectInstanceConfigOutcomeCallable;
        typedef std::future<GetInstanceOnboardingJobStatusOutcome> GetInstanceOnboardingJobStatusOutcomeCallable;
        typedef std::future<ListCampaignsOutcome> ListCampaignsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<PauseCampaignOutcome> PauseCampaignOutcomeCallable;
        typedef std::future<PutDialRequestBatchOutcome> PutDialRequestBatchOutcomeCallable;
        typedef std::future<ResumeCampaignOutcome> ResumeCampaignOutcomeCallable;
        typedef std::future<StartCampaignOutcome> StartCampaignOutcomeCallable;
        typedef std::future<StartInstanceOnboardingJobOutcome> StartInstanceOnboardingJobOutcomeCallable;
        typedef std::future<StopCampaignOutcome> StopCampaignOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateCampaignDialerConfigOutcome> UpdateCampaignDialerConfigOutcomeCallable;
        typedef std::future<UpdateCampaignNameOutcome> UpdateCampaignNameOutcomeCallable;
        typedef std::future<UpdateCampaignOutboundCallConfigOutcome> UpdateCampaignOutboundCallConfigOutcomeCallable;
} // namespace Model

  class ConnectCampaignsClient;

    typedef std::function<void(const ConnectCampaignsClient*, const Model::CreateCampaignRequest&, const Model::CreateCampaignOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCampaignResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsClient*, const Model::DeleteCampaignRequest&, const Model::DeleteCampaignOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCampaignResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsClient*, const Model::DeleteConnectInstanceConfigRequest&, const Model::DeleteConnectInstanceConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConnectInstanceConfigResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsClient*, const Model::DeleteInstanceOnboardingJobRequest&, const Model::DeleteInstanceOnboardingJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInstanceOnboardingJobResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsClient*, const Model::DescribeCampaignRequest&, const Model::DescribeCampaignOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCampaignResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsClient*, const Model::GetCampaignStateRequest&, const Model::GetCampaignStateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCampaignStateResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsClient*, const Model::GetCampaignStateBatchRequest&, const Model::GetCampaignStateBatchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCampaignStateBatchResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsClient*, const Model::GetConnectInstanceConfigRequest&, const Model::GetConnectInstanceConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConnectInstanceConfigResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsClient*, const Model::GetInstanceOnboardingJobStatusRequest&, const Model::GetInstanceOnboardingJobStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInstanceOnboardingJobStatusResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsClient*, const Model::ListCampaignsRequest&, const Model::ListCampaignsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCampaignsResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsClient*, const Model::PauseCampaignRequest&, const Model::PauseCampaignOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PauseCampaignResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsClient*, const Model::PutDialRequestBatchRequest&, const Model::PutDialRequestBatchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutDialRequestBatchResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsClient*, const Model::ResumeCampaignRequest&, const Model::ResumeCampaignOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResumeCampaignResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsClient*, const Model::StartCampaignRequest&, const Model::StartCampaignOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartCampaignResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsClient*, const Model::StartInstanceOnboardingJobRequest&, const Model::StartInstanceOnboardingJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartInstanceOnboardingJobResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsClient*, const Model::StopCampaignRequest&, const Model::StopCampaignOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopCampaignResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsClient*, const Model::UpdateCampaignDialerConfigRequest&, const Model::UpdateCampaignDialerConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCampaignDialerConfigResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsClient*, const Model::UpdateCampaignNameRequest&, const Model::UpdateCampaignNameOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCampaignNameResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsClient*, const Model::UpdateCampaignOutboundCallConfigRequest&, const Model::UpdateCampaignOutboundCallConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCampaignOutboundCallConfigResponseReceivedHandler;

  /**
   * <p>Provide APIs to create and manage Amazon Connect Campaigns.</p>
   */
  class AWS_CONNECTCAMPAIGNS_API ConnectCampaignsClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ConnectCampaignsClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ConnectCampaignsClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ConnectCampaignsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

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
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateCampaignAsyncHelper(const Model::CreateCampaignRequest& request, const CreateCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteCampaignAsyncHelper(const Model::DeleteCampaignRequest& request, const DeleteCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteConnectInstanceConfigAsyncHelper(const Model::DeleteConnectInstanceConfigRequest& request, const DeleteConnectInstanceConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteInstanceOnboardingJobAsyncHelper(const Model::DeleteInstanceOnboardingJobRequest& request, const DeleteInstanceOnboardingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeCampaignAsyncHelper(const Model::DescribeCampaignRequest& request, const DescribeCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCampaignStateAsyncHelper(const Model::GetCampaignStateRequest& request, const GetCampaignStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCampaignStateBatchAsyncHelper(const Model::GetCampaignStateBatchRequest& request, const GetCampaignStateBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetConnectInstanceConfigAsyncHelper(const Model::GetConnectInstanceConfigRequest& request, const GetConnectInstanceConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetInstanceOnboardingJobStatusAsyncHelper(const Model::GetInstanceOnboardingJobStatusRequest& request, const GetInstanceOnboardingJobStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListCampaignsAsyncHelper(const Model::ListCampaignsRequest& request, const ListCampaignsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PauseCampaignAsyncHelper(const Model::PauseCampaignRequest& request, const PauseCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutDialRequestBatchAsyncHelper(const Model::PutDialRequestBatchRequest& request, const PutDialRequestBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ResumeCampaignAsyncHelper(const Model::ResumeCampaignRequest& request, const ResumeCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartCampaignAsyncHelper(const Model::StartCampaignRequest& request, const StartCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartInstanceOnboardingJobAsyncHelper(const Model::StartInstanceOnboardingJobRequest& request, const StartInstanceOnboardingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopCampaignAsyncHelper(const Model::StopCampaignRequest& request, const StopCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateCampaignDialerConfigAsyncHelper(const Model::UpdateCampaignDialerConfigRequest& request, const UpdateCampaignDialerConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateCampaignNameAsyncHelper(const Model::UpdateCampaignNameRequest& request, const UpdateCampaignNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateCampaignOutboundCallConfigAsyncHelper(const Model::UpdateCampaignOutboundCallConfigRequest& request, const UpdateCampaignOutboundCallConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace ConnectCampaigns
} // namespace Aws
