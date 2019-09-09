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
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/robomaker/RoboMakerErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/robomaker/model/BatchDescribeSimulationJobResult.h>
#include <aws/robomaker/model/CancelDeploymentJobResult.h>
#include <aws/robomaker/model/CancelSimulationJobResult.h>
#include <aws/robomaker/model/CreateDeploymentJobResult.h>
#include <aws/robomaker/model/CreateFleetResult.h>
#include <aws/robomaker/model/CreateRobotResult.h>
#include <aws/robomaker/model/CreateRobotApplicationResult.h>
#include <aws/robomaker/model/CreateRobotApplicationVersionResult.h>
#include <aws/robomaker/model/CreateSimulationApplicationResult.h>
#include <aws/robomaker/model/CreateSimulationApplicationVersionResult.h>
#include <aws/robomaker/model/CreateSimulationJobResult.h>
#include <aws/robomaker/model/DeleteFleetResult.h>
#include <aws/robomaker/model/DeleteRobotResult.h>
#include <aws/robomaker/model/DeleteRobotApplicationResult.h>
#include <aws/robomaker/model/DeleteSimulationApplicationResult.h>
#include <aws/robomaker/model/DeregisterRobotResult.h>
#include <aws/robomaker/model/DescribeDeploymentJobResult.h>
#include <aws/robomaker/model/DescribeFleetResult.h>
#include <aws/robomaker/model/DescribeRobotResult.h>
#include <aws/robomaker/model/DescribeRobotApplicationResult.h>
#include <aws/robomaker/model/DescribeSimulationApplicationResult.h>
#include <aws/robomaker/model/DescribeSimulationJobResult.h>
#include <aws/robomaker/model/ListDeploymentJobsResult.h>
#include <aws/robomaker/model/ListFleetsResult.h>
#include <aws/robomaker/model/ListRobotApplicationsResult.h>
#include <aws/robomaker/model/ListRobotsResult.h>
#include <aws/robomaker/model/ListSimulationApplicationsResult.h>
#include <aws/robomaker/model/ListSimulationJobsResult.h>
#include <aws/robomaker/model/ListTagsForResourceResult.h>
#include <aws/robomaker/model/RegisterRobotResult.h>
#include <aws/robomaker/model/RestartSimulationJobResult.h>
#include <aws/robomaker/model/SyncDeploymentJobResult.h>
#include <aws/robomaker/model/TagResourceResult.h>
#include <aws/robomaker/model/UntagResourceResult.h>
#include <aws/robomaker/model/UpdateRobotApplicationResult.h>
#include <aws/robomaker/model/UpdateSimulationApplicationResult.h>
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

namespace RoboMaker
{

namespace Model
{
        class BatchDescribeSimulationJobRequest;
        class CancelDeploymentJobRequest;
        class CancelSimulationJobRequest;
        class CreateDeploymentJobRequest;
        class CreateFleetRequest;
        class CreateRobotRequest;
        class CreateRobotApplicationRequest;
        class CreateRobotApplicationVersionRequest;
        class CreateSimulationApplicationRequest;
        class CreateSimulationApplicationVersionRequest;
        class CreateSimulationJobRequest;
        class DeleteFleetRequest;
        class DeleteRobotRequest;
        class DeleteRobotApplicationRequest;
        class DeleteSimulationApplicationRequest;
        class DeregisterRobotRequest;
        class DescribeDeploymentJobRequest;
        class DescribeFleetRequest;
        class DescribeRobotRequest;
        class DescribeRobotApplicationRequest;
        class DescribeSimulationApplicationRequest;
        class DescribeSimulationJobRequest;
        class ListDeploymentJobsRequest;
        class ListFleetsRequest;
        class ListRobotApplicationsRequest;
        class ListRobotsRequest;
        class ListSimulationApplicationsRequest;
        class ListSimulationJobsRequest;
        class ListTagsForResourceRequest;
        class RegisterRobotRequest;
        class RestartSimulationJobRequest;
        class SyncDeploymentJobRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateRobotApplicationRequest;
        class UpdateSimulationApplicationRequest;

        typedef Aws::Utils::Outcome<BatchDescribeSimulationJobResult, Aws::Client::AWSError<RoboMakerErrors>> BatchDescribeSimulationJobOutcome;
        typedef Aws::Utils::Outcome<CancelDeploymentJobResult, Aws::Client::AWSError<RoboMakerErrors>> CancelDeploymentJobOutcome;
        typedef Aws::Utils::Outcome<CancelSimulationJobResult, Aws::Client::AWSError<RoboMakerErrors>> CancelSimulationJobOutcome;
        typedef Aws::Utils::Outcome<CreateDeploymentJobResult, Aws::Client::AWSError<RoboMakerErrors>> CreateDeploymentJobOutcome;
        typedef Aws::Utils::Outcome<CreateFleetResult, Aws::Client::AWSError<RoboMakerErrors>> CreateFleetOutcome;
        typedef Aws::Utils::Outcome<CreateRobotResult, Aws::Client::AWSError<RoboMakerErrors>> CreateRobotOutcome;
        typedef Aws::Utils::Outcome<CreateRobotApplicationResult, Aws::Client::AWSError<RoboMakerErrors>> CreateRobotApplicationOutcome;
        typedef Aws::Utils::Outcome<CreateRobotApplicationVersionResult, Aws::Client::AWSError<RoboMakerErrors>> CreateRobotApplicationVersionOutcome;
        typedef Aws::Utils::Outcome<CreateSimulationApplicationResult, Aws::Client::AWSError<RoboMakerErrors>> CreateSimulationApplicationOutcome;
        typedef Aws::Utils::Outcome<CreateSimulationApplicationVersionResult, Aws::Client::AWSError<RoboMakerErrors>> CreateSimulationApplicationVersionOutcome;
        typedef Aws::Utils::Outcome<CreateSimulationJobResult, Aws::Client::AWSError<RoboMakerErrors>> CreateSimulationJobOutcome;
        typedef Aws::Utils::Outcome<DeleteFleetResult, Aws::Client::AWSError<RoboMakerErrors>> DeleteFleetOutcome;
        typedef Aws::Utils::Outcome<DeleteRobotResult, Aws::Client::AWSError<RoboMakerErrors>> DeleteRobotOutcome;
        typedef Aws::Utils::Outcome<DeleteRobotApplicationResult, Aws::Client::AWSError<RoboMakerErrors>> DeleteRobotApplicationOutcome;
        typedef Aws::Utils::Outcome<DeleteSimulationApplicationResult, Aws::Client::AWSError<RoboMakerErrors>> DeleteSimulationApplicationOutcome;
        typedef Aws::Utils::Outcome<DeregisterRobotResult, Aws::Client::AWSError<RoboMakerErrors>> DeregisterRobotOutcome;
        typedef Aws::Utils::Outcome<DescribeDeploymentJobResult, Aws::Client::AWSError<RoboMakerErrors>> DescribeDeploymentJobOutcome;
        typedef Aws::Utils::Outcome<DescribeFleetResult, Aws::Client::AWSError<RoboMakerErrors>> DescribeFleetOutcome;
        typedef Aws::Utils::Outcome<DescribeRobotResult, Aws::Client::AWSError<RoboMakerErrors>> DescribeRobotOutcome;
        typedef Aws::Utils::Outcome<DescribeRobotApplicationResult, Aws::Client::AWSError<RoboMakerErrors>> DescribeRobotApplicationOutcome;
        typedef Aws::Utils::Outcome<DescribeSimulationApplicationResult, Aws::Client::AWSError<RoboMakerErrors>> DescribeSimulationApplicationOutcome;
        typedef Aws::Utils::Outcome<DescribeSimulationJobResult, Aws::Client::AWSError<RoboMakerErrors>> DescribeSimulationJobOutcome;
        typedef Aws::Utils::Outcome<ListDeploymentJobsResult, Aws::Client::AWSError<RoboMakerErrors>> ListDeploymentJobsOutcome;
        typedef Aws::Utils::Outcome<ListFleetsResult, Aws::Client::AWSError<RoboMakerErrors>> ListFleetsOutcome;
        typedef Aws::Utils::Outcome<ListRobotApplicationsResult, Aws::Client::AWSError<RoboMakerErrors>> ListRobotApplicationsOutcome;
        typedef Aws::Utils::Outcome<ListRobotsResult, Aws::Client::AWSError<RoboMakerErrors>> ListRobotsOutcome;
        typedef Aws::Utils::Outcome<ListSimulationApplicationsResult, Aws::Client::AWSError<RoboMakerErrors>> ListSimulationApplicationsOutcome;
        typedef Aws::Utils::Outcome<ListSimulationJobsResult, Aws::Client::AWSError<RoboMakerErrors>> ListSimulationJobsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, Aws::Client::AWSError<RoboMakerErrors>> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<RegisterRobotResult, Aws::Client::AWSError<RoboMakerErrors>> RegisterRobotOutcome;
        typedef Aws::Utils::Outcome<RestartSimulationJobResult, Aws::Client::AWSError<RoboMakerErrors>> RestartSimulationJobOutcome;
        typedef Aws::Utils::Outcome<SyncDeploymentJobResult, Aws::Client::AWSError<RoboMakerErrors>> SyncDeploymentJobOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, Aws::Client::AWSError<RoboMakerErrors>> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, Aws::Client::AWSError<RoboMakerErrors>> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateRobotApplicationResult, Aws::Client::AWSError<RoboMakerErrors>> UpdateRobotApplicationOutcome;
        typedef Aws::Utils::Outcome<UpdateSimulationApplicationResult, Aws::Client::AWSError<RoboMakerErrors>> UpdateSimulationApplicationOutcome;

        typedef std::future<BatchDescribeSimulationJobOutcome> BatchDescribeSimulationJobOutcomeCallable;
        typedef std::future<CancelDeploymentJobOutcome> CancelDeploymentJobOutcomeCallable;
        typedef std::future<CancelSimulationJobOutcome> CancelSimulationJobOutcomeCallable;
        typedef std::future<CreateDeploymentJobOutcome> CreateDeploymentJobOutcomeCallable;
        typedef std::future<CreateFleetOutcome> CreateFleetOutcomeCallable;
        typedef std::future<CreateRobotOutcome> CreateRobotOutcomeCallable;
        typedef std::future<CreateRobotApplicationOutcome> CreateRobotApplicationOutcomeCallable;
        typedef std::future<CreateRobotApplicationVersionOutcome> CreateRobotApplicationVersionOutcomeCallable;
        typedef std::future<CreateSimulationApplicationOutcome> CreateSimulationApplicationOutcomeCallable;
        typedef std::future<CreateSimulationApplicationVersionOutcome> CreateSimulationApplicationVersionOutcomeCallable;
        typedef std::future<CreateSimulationJobOutcome> CreateSimulationJobOutcomeCallable;
        typedef std::future<DeleteFleetOutcome> DeleteFleetOutcomeCallable;
        typedef std::future<DeleteRobotOutcome> DeleteRobotOutcomeCallable;
        typedef std::future<DeleteRobotApplicationOutcome> DeleteRobotApplicationOutcomeCallable;
        typedef std::future<DeleteSimulationApplicationOutcome> DeleteSimulationApplicationOutcomeCallable;
        typedef std::future<DeregisterRobotOutcome> DeregisterRobotOutcomeCallable;
        typedef std::future<DescribeDeploymentJobOutcome> DescribeDeploymentJobOutcomeCallable;
        typedef std::future<DescribeFleetOutcome> DescribeFleetOutcomeCallable;
        typedef std::future<DescribeRobotOutcome> DescribeRobotOutcomeCallable;
        typedef std::future<DescribeRobotApplicationOutcome> DescribeRobotApplicationOutcomeCallable;
        typedef std::future<DescribeSimulationApplicationOutcome> DescribeSimulationApplicationOutcomeCallable;
        typedef std::future<DescribeSimulationJobOutcome> DescribeSimulationJobOutcomeCallable;
        typedef std::future<ListDeploymentJobsOutcome> ListDeploymentJobsOutcomeCallable;
        typedef std::future<ListFleetsOutcome> ListFleetsOutcomeCallable;
        typedef std::future<ListRobotApplicationsOutcome> ListRobotApplicationsOutcomeCallable;
        typedef std::future<ListRobotsOutcome> ListRobotsOutcomeCallable;
        typedef std::future<ListSimulationApplicationsOutcome> ListSimulationApplicationsOutcomeCallable;
        typedef std::future<ListSimulationJobsOutcome> ListSimulationJobsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<RegisterRobotOutcome> RegisterRobotOutcomeCallable;
        typedef std::future<RestartSimulationJobOutcome> RestartSimulationJobOutcomeCallable;
        typedef std::future<SyncDeploymentJobOutcome> SyncDeploymentJobOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateRobotApplicationOutcome> UpdateRobotApplicationOutcomeCallable;
        typedef std::future<UpdateSimulationApplicationOutcome> UpdateSimulationApplicationOutcomeCallable;
} // namespace Model

  class RoboMakerClient;

    typedef std::function<void(const RoboMakerClient*, const Model::BatchDescribeSimulationJobRequest&, const Model::BatchDescribeSimulationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDescribeSimulationJobResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::CancelDeploymentJobRequest&, const Model::CancelDeploymentJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelDeploymentJobResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::CancelSimulationJobRequest&, const Model::CancelSimulationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelSimulationJobResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::CreateDeploymentJobRequest&, const Model::CreateDeploymentJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDeploymentJobResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::CreateFleetRequest&, const Model::CreateFleetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFleetResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::CreateRobotRequest&, const Model::CreateRobotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRobotResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::CreateRobotApplicationRequest&, const Model::CreateRobotApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRobotApplicationResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::CreateRobotApplicationVersionRequest&, const Model::CreateRobotApplicationVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRobotApplicationVersionResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::CreateSimulationApplicationRequest&, const Model::CreateSimulationApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSimulationApplicationResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::CreateSimulationApplicationVersionRequest&, const Model::CreateSimulationApplicationVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSimulationApplicationVersionResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::CreateSimulationJobRequest&, const Model::CreateSimulationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSimulationJobResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::DeleteFleetRequest&, const Model::DeleteFleetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFleetResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::DeleteRobotRequest&, const Model::DeleteRobotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRobotResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::DeleteRobotApplicationRequest&, const Model::DeleteRobotApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRobotApplicationResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::DeleteSimulationApplicationRequest&, const Model::DeleteSimulationApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSimulationApplicationResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::DeregisterRobotRequest&, const Model::DeregisterRobotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterRobotResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::DescribeDeploymentJobRequest&, const Model::DescribeDeploymentJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDeploymentJobResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::DescribeFleetRequest&, const Model::DescribeFleetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFleetResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::DescribeRobotRequest&, const Model::DescribeRobotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRobotResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::DescribeRobotApplicationRequest&, const Model::DescribeRobotApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRobotApplicationResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::DescribeSimulationApplicationRequest&, const Model::DescribeSimulationApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSimulationApplicationResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::DescribeSimulationJobRequest&, const Model::DescribeSimulationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSimulationJobResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::ListDeploymentJobsRequest&, const Model::ListDeploymentJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDeploymentJobsResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::ListFleetsRequest&, const Model::ListFleetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFleetsResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::ListRobotApplicationsRequest&, const Model::ListRobotApplicationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRobotApplicationsResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::ListRobotsRequest&, const Model::ListRobotsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRobotsResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::ListSimulationApplicationsRequest&, const Model::ListSimulationApplicationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSimulationApplicationsResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::ListSimulationJobsRequest&, const Model::ListSimulationJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSimulationJobsResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::RegisterRobotRequest&, const Model::RegisterRobotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterRobotResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::RestartSimulationJobRequest&, const Model::RestartSimulationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RestartSimulationJobResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::SyncDeploymentJobRequest&, const Model::SyncDeploymentJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SyncDeploymentJobResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::UpdateRobotApplicationRequest&, const Model::UpdateRobotApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRobotApplicationResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::UpdateSimulationApplicationRequest&, const Model::UpdateSimulationApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSimulationApplicationResponseReceivedHandler;

  /**
   * <p>This section provides documentation for the AWS RoboMaker API operations.</p>
   */
  class AWS_ROBOMAKER_API RoboMakerClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RoboMakerClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RoboMakerClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        RoboMakerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~RoboMakerClient();

        inline virtual const char* GetServiceClientName() const override { return "RoboMaker"; }


        /**
         * <p>Describes one or more simulation jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/BatchDescribeSimulationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDescribeSimulationJobOutcome BatchDescribeSimulationJob(const Model::BatchDescribeSimulationJobRequest& request) const;

        /**
         * <p>Describes one or more simulation jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/BatchDescribeSimulationJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchDescribeSimulationJobOutcomeCallable BatchDescribeSimulationJobCallable(const Model::BatchDescribeSimulationJobRequest& request) const;

        /**
         * <p>Describes one or more simulation jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/BatchDescribeSimulationJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchDescribeSimulationJobAsync(const Model::BatchDescribeSimulationJobRequest& request, const BatchDescribeSimulationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels the specified deployment job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CancelDeploymentJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelDeploymentJobOutcome CancelDeploymentJob(const Model::CancelDeploymentJobRequest& request) const;

        /**
         * <p>Cancels the specified deployment job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CancelDeploymentJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelDeploymentJobOutcomeCallable CancelDeploymentJobCallable(const Model::CancelDeploymentJobRequest& request) const;

        /**
         * <p>Cancels the specified deployment job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CancelDeploymentJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelDeploymentJobAsync(const Model::CancelDeploymentJobRequest& request, const CancelDeploymentJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels the specified simulation job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CancelSimulationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelSimulationJobOutcome CancelSimulationJob(const Model::CancelSimulationJobRequest& request) const;

        /**
         * <p>Cancels the specified simulation job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CancelSimulationJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelSimulationJobOutcomeCallable CancelSimulationJobCallable(const Model::CancelSimulationJobRequest& request) const;

        /**
         * <p>Cancels the specified simulation job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CancelSimulationJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelSimulationJobAsync(const Model::CancelSimulationJobRequest& request, const CancelSimulationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deploys a specific version of a robot application to robots in a fleet.</p>
         * <p>The robot application must have a numbered <code>applicationVersion</code>
         * for consistency reasons. To create a new version, use
         * <code>CreateRobotApplicationVersion</code> or see <a
         * href="https://docs.aws.amazon.com/robomaker/latest/dg/create-robot-application-version.html">Creating
         * a Robot Application Version</a>. </p> <note> <p>After 90 days, deployment jobs
         * expire and will be deleted. They will no longer be accessible. </p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CreateDeploymentJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDeploymentJobOutcome CreateDeploymentJob(const Model::CreateDeploymentJobRequest& request) const;

        /**
         * <p>Deploys a specific version of a robot application to robots in a fleet.</p>
         * <p>The robot application must have a numbered <code>applicationVersion</code>
         * for consistency reasons. To create a new version, use
         * <code>CreateRobotApplicationVersion</code> or see <a
         * href="https://docs.aws.amazon.com/robomaker/latest/dg/create-robot-application-version.html">Creating
         * a Robot Application Version</a>. </p> <note> <p>After 90 days, deployment jobs
         * expire and will be deleted. They will no longer be accessible. </p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CreateDeploymentJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDeploymentJobOutcomeCallable CreateDeploymentJobCallable(const Model::CreateDeploymentJobRequest& request) const;

        /**
         * <p>Deploys a specific version of a robot application to robots in a fleet.</p>
         * <p>The robot application must have a numbered <code>applicationVersion</code>
         * for consistency reasons. To create a new version, use
         * <code>CreateRobotApplicationVersion</code> or see <a
         * href="https://docs.aws.amazon.com/robomaker/latest/dg/create-robot-application-version.html">Creating
         * a Robot Application Version</a>. </p> <note> <p>After 90 days, deployment jobs
         * expire and will be deleted. They will no longer be accessible. </p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CreateDeploymentJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDeploymentJobAsync(const Model::CreateDeploymentJobRequest& request, const CreateDeploymentJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a fleet, a logical group of robots running the same robot
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CreateFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFleetOutcome CreateFleet(const Model::CreateFleetRequest& request) const;

        /**
         * <p>Creates a fleet, a logical group of robots running the same robot
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CreateFleet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFleetOutcomeCallable CreateFleetCallable(const Model::CreateFleetRequest& request) const;

        /**
         * <p>Creates a fleet, a logical group of robots running the same robot
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CreateFleet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFleetAsync(const Model::CreateFleetRequest& request, const CreateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a robot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CreateRobot">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRobotOutcome CreateRobot(const Model::CreateRobotRequest& request) const;

        /**
         * <p>Creates a robot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CreateRobot">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRobotOutcomeCallable CreateRobotCallable(const Model::CreateRobotRequest& request) const;

        /**
         * <p>Creates a robot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CreateRobot">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRobotAsync(const Model::CreateRobotRequest& request, const CreateRobotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a robot application. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CreateRobotApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRobotApplicationOutcome CreateRobotApplication(const Model::CreateRobotApplicationRequest& request) const;

        /**
         * <p>Creates a robot application. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CreateRobotApplication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRobotApplicationOutcomeCallable CreateRobotApplicationCallable(const Model::CreateRobotApplicationRequest& request) const;

        /**
         * <p>Creates a robot application. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CreateRobotApplication">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRobotApplicationAsync(const Model::CreateRobotApplicationRequest& request, const CreateRobotApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a version of a robot application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CreateRobotApplicationVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRobotApplicationVersionOutcome CreateRobotApplicationVersion(const Model::CreateRobotApplicationVersionRequest& request) const;

        /**
         * <p>Creates a version of a robot application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CreateRobotApplicationVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRobotApplicationVersionOutcomeCallable CreateRobotApplicationVersionCallable(const Model::CreateRobotApplicationVersionRequest& request) const;

        /**
         * <p>Creates a version of a robot application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CreateRobotApplicationVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRobotApplicationVersionAsync(const Model::CreateRobotApplicationVersionRequest& request, const CreateRobotApplicationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a simulation application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CreateSimulationApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSimulationApplicationOutcome CreateSimulationApplication(const Model::CreateSimulationApplicationRequest& request) const;

        /**
         * <p>Creates a simulation application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CreateSimulationApplication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSimulationApplicationOutcomeCallable CreateSimulationApplicationCallable(const Model::CreateSimulationApplicationRequest& request) const;

        /**
         * <p>Creates a simulation application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CreateSimulationApplication">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSimulationApplicationAsync(const Model::CreateSimulationApplicationRequest& request, const CreateSimulationApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a simulation application with a specific revision id.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CreateSimulationApplicationVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSimulationApplicationVersionOutcome CreateSimulationApplicationVersion(const Model::CreateSimulationApplicationVersionRequest& request) const;

        /**
         * <p>Creates a simulation application with a specific revision id.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CreateSimulationApplicationVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSimulationApplicationVersionOutcomeCallable CreateSimulationApplicationVersionCallable(const Model::CreateSimulationApplicationVersionRequest& request) const;

        /**
         * <p>Creates a simulation application with a specific revision id.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CreateSimulationApplicationVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSimulationApplicationVersionAsync(const Model::CreateSimulationApplicationVersionRequest& request, const CreateSimulationApplicationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a simulation job.</p> <note> <p>After 90 days, simulation jobs expire
         * and will be deleted. They will no longer be accessible. </p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CreateSimulationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSimulationJobOutcome CreateSimulationJob(const Model::CreateSimulationJobRequest& request) const;

        /**
         * <p>Creates a simulation job.</p> <note> <p>After 90 days, simulation jobs expire
         * and will be deleted. They will no longer be accessible. </p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CreateSimulationJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSimulationJobOutcomeCallable CreateSimulationJobCallable(const Model::CreateSimulationJobRequest& request) const;

        /**
         * <p>Creates a simulation job.</p> <note> <p>After 90 days, simulation jobs expire
         * and will be deleted. They will no longer be accessible. </p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CreateSimulationJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSimulationJobAsync(const Model::CreateSimulationJobRequest& request, const CreateSimulationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a fleet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DeleteFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFleetOutcome DeleteFleet(const Model::DeleteFleetRequest& request) const;

        /**
         * <p>Deletes a fleet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DeleteFleet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFleetOutcomeCallable DeleteFleetCallable(const Model::DeleteFleetRequest& request) const;

        /**
         * <p>Deletes a fleet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DeleteFleet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFleetAsync(const Model::DeleteFleetRequest& request, const DeleteFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a robot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DeleteRobot">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRobotOutcome DeleteRobot(const Model::DeleteRobotRequest& request) const;

        /**
         * <p>Deletes a robot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DeleteRobot">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRobotOutcomeCallable DeleteRobotCallable(const Model::DeleteRobotRequest& request) const;

        /**
         * <p>Deletes a robot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DeleteRobot">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRobotAsync(const Model::DeleteRobotRequest& request, const DeleteRobotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a robot application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DeleteRobotApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRobotApplicationOutcome DeleteRobotApplication(const Model::DeleteRobotApplicationRequest& request) const;

        /**
         * <p>Deletes a robot application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DeleteRobotApplication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRobotApplicationOutcomeCallable DeleteRobotApplicationCallable(const Model::DeleteRobotApplicationRequest& request) const;

        /**
         * <p>Deletes a robot application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DeleteRobotApplication">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRobotApplicationAsync(const Model::DeleteRobotApplicationRequest& request, const DeleteRobotApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a simulation application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DeleteSimulationApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSimulationApplicationOutcome DeleteSimulationApplication(const Model::DeleteSimulationApplicationRequest& request) const;

        /**
         * <p>Deletes a simulation application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DeleteSimulationApplication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSimulationApplicationOutcomeCallable DeleteSimulationApplicationCallable(const Model::DeleteSimulationApplicationRequest& request) const;

        /**
         * <p>Deletes a simulation application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DeleteSimulationApplication">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSimulationApplicationAsync(const Model::DeleteSimulationApplicationRequest& request, const DeleteSimulationApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deregisters a robot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DeregisterRobot">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterRobotOutcome DeregisterRobot(const Model::DeregisterRobotRequest& request) const;

        /**
         * <p>Deregisters a robot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DeregisterRobot">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeregisterRobotOutcomeCallable DeregisterRobotCallable(const Model::DeregisterRobotRequest& request) const;

        /**
         * <p>Deregisters a robot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DeregisterRobot">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeregisterRobotAsync(const Model::DeregisterRobotRequest& request, const DeregisterRobotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a deployment job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DescribeDeploymentJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDeploymentJobOutcome DescribeDeploymentJob(const Model::DescribeDeploymentJobRequest& request) const;

        /**
         * <p>Describes a deployment job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DescribeDeploymentJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDeploymentJobOutcomeCallable DescribeDeploymentJobCallable(const Model::DescribeDeploymentJobRequest& request) const;

        /**
         * <p>Describes a deployment job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DescribeDeploymentJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDeploymentJobAsync(const Model::DescribeDeploymentJobRequest& request, const DescribeDeploymentJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a fleet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DescribeFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFleetOutcome DescribeFleet(const Model::DescribeFleetRequest& request) const;

        /**
         * <p>Describes a fleet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DescribeFleet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFleetOutcomeCallable DescribeFleetCallable(const Model::DescribeFleetRequest& request) const;

        /**
         * <p>Describes a fleet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DescribeFleet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFleetAsync(const Model::DescribeFleetRequest& request, const DescribeFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a robot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DescribeRobot">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRobotOutcome DescribeRobot(const Model::DescribeRobotRequest& request) const;

        /**
         * <p>Describes a robot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DescribeRobot">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRobotOutcomeCallable DescribeRobotCallable(const Model::DescribeRobotRequest& request) const;

        /**
         * <p>Describes a robot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DescribeRobot">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRobotAsync(const Model::DescribeRobotRequest& request, const DescribeRobotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a robot application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DescribeRobotApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRobotApplicationOutcome DescribeRobotApplication(const Model::DescribeRobotApplicationRequest& request) const;

        /**
         * <p>Describes a robot application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DescribeRobotApplication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRobotApplicationOutcomeCallable DescribeRobotApplicationCallable(const Model::DescribeRobotApplicationRequest& request) const;

        /**
         * <p>Describes a robot application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DescribeRobotApplication">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRobotApplicationAsync(const Model::DescribeRobotApplicationRequest& request, const DescribeRobotApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a simulation application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DescribeSimulationApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSimulationApplicationOutcome DescribeSimulationApplication(const Model::DescribeSimulationApplicationRequest& request) const;

        /**
         * <p>Describes a simulation application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DescribeSimulationApplication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSimulationApplicationOutcomeCallable DescribeSimulationApplicationCallable(const Model::DescribeSimulationApplicationRequest& request) const;

        /**
         * <p>Describes a simulation application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DescribeSimulationApplication">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSimulationApplicationAsync(const Model::DescribeSimulationApplicationRequest& request, const DescribeSimulationApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a simulation job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DescribeSimulationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSimulationJobOutcome DescribeSimulationJob(const Model::DescribeSimulationJobRequest& request) const;

        /**
         * <p>Describes a simulation job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DescribeSimulationJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSimulationJobOutcomeCallable DescribeSimulationJobCallable(const Model::DescribeSimulationJobRequest& request) const;

        /**
         * <p>Describes a simulation job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DescribeSimulationJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSimulationJobAsync(const Model::DescribeSimulationJobRequest& request, const DescribeSimulationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of deployment jobs for a fleet. You can optionally provide
         * filters to retrieve specific deployment jobs. </p> <note> <p> </p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/ListDeploymentJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDeploymentJobsOutcome ListDeploymentJobs(const Model::ListDeploymentJobsRequest& request) const;

        /**
         * <p>Returns a list of deployment jobs for a fleet. You can optionally provide
         * filters to retrieve specific deployment jobs. </p> <note> <p> </p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/ListDeploymentJobs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDeploymentJobsOutcomeCallable ListDeploymentJobsCallable(const Model::ListDeploymentJobsRequest& request) const;

        /**
         * <p>Returns a list of deployment jobs for a fleet. You can optionally provide
         * filters to retrieve specific deployment jobs. </p> <note> <p> </p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/ListDeploymentJobs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDeploymentJobsAsync(const Model::ListDeploymentJobsRequest& request, const ListDeploymentJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of fleets. You can optionally provide filters to retrieve
         * specific fleets. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/ListFleets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFleetsOutcome ListFleets(const Model::ListFleetsRequest& request) const;

        /**
         * <p>Returns a list of fleets. You can optionally provide filters to retrieve
         * specific fleets. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/ListFleets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFleetsOutcomeCallable ListFleetsCallable(const Model::ListFleetsRequest& request) const;

        /**
         * <p>Returns a list of fleets. You can optionally provide filters to retrieve
         * specific fleets. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/ListFleets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFleetsAsync(const Model::ListFleetsRequest& request, const ListFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of robot application. You can optionally provide filters to
         * retrieve specific robot applications.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/ListRobotApplications">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRobotApplicationsOutcome ListRobotApplications(const Model::ListRobotApplicationsRequest& request) const;

        /**
         * <p>Returns a list of robot application. You can optionally provide filters to
         * retrieve specific robot applications.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/ListRobotApplications">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRobotApplicationsOutcomeCallable ListRobotApplicationsCallable(const Model::ListRobotApplicationsRequest& request) const;

        /**
         * <p>Returns a list of robot application. You can optionally provide filters to
         * retrieve specific robot applications.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/ListRobotApplications">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRobotApplicationsAsync(const Model::ListRobotApplicationsRequest& request, const ListRobotApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of robots. You can optionally provide filters to retrieve
         * specific robots.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/ListRobots">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRobotsOutcome ListRobots(const Model::ListRobotsRequest& request) const;

        /**
         * <p>Returns a list of robots. You can optionally provide filters to retrieve
         * specific robots.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/ListRobots">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRobotsOutcomeCallable ListRobotsCallable(const Model::ListRobotsRequest& request) const;

        /**
         * <p>Returns a list of robots. You can optionally provide filters to retrieve
         * specific robots.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/ListRobots">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRobotsAsync(const Model::ListRobotsRequest& request, const ListRobotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of simulation applications. You can optionally provide filters
         * to retrieve specific simulation applications. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/ListSimulationApplications">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSimulationApplicationsOutcome ListSimulationApplications(const Model::ListSimulationApplicationsRequest& request) const;

        /**
         * <p>Returns a list of simulation applications. You can optionally provide filters
         * to retrieve specific simulation applications. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/ListSimulationApplications">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSimulationApplicationsOutcomeCallable ListSimulationApplicationsCallable(const Model::ListSimulationApplicationsRequest& request) const;

        /**
         * <p>Returns a list of simulation applications. You can optionally provide filters
         * to retrieve specific simulation applications. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/ListSimulationApplications">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSimulationApplicationsAsync(const Model::ListSimulationApplicationsRequest& request, const ListSimulationApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of simulation jobs. You can optionally provide filters to
         * retrieve specific simulation jobs. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/ListSimulationJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSimulationJobsOutcome ListSimulationJobs(const Model::ListSimulationJobsRequest& request) const;

        /**
         * <p>Returns a list of simulation jobs. You can optionally provide filters to
         * retrieve specific simulation jobs. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/ListSimulationJobs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSimulationJobsOutcomeCallable ListSimulationJobsCallable(const Model::ListSimulationJobsRequest& request) const;

        /**
         * <p>Returns a list of simulation jobs. You can optionally provide filters to
         * retrieve specific simulation jobs. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/ListSimulationJobs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSimulationJobsAsync(const Model::ListSimulationJobsRequest& request, const ListSimulationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all tags on a AWS RoboMaker resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists all tags on a AWS RoboMaker resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists all tags on a AWS RoboMaker resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers a robot with a fleet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/RegisterRobot">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterRobotOutcome RegisterRobot(const Model::RegisterRobotRequest& request) const;

        /**
         * <p>Registers a robot with a fleet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/RegisterRobot">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterRobotOutcomeCallable RegisterRobotCallable(const Model::RegisterRobotRequest& request) const;

        /**
         * <p>Registers a robot with a fleet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/RegisterRobot">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterRobotAsync(const Model::RegisterRobotRequest& request, const RegisterRobotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Restarts a running simulation job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/RestartSimulationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::RestartSimulationJobOutcome RestartSimulationJob(const Model::RestartSimulationJobRequest& request) const;

        /**
         * <p>Restarts a running simulation job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/RestartSimulationJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RestartSimulationJobOutcomeCallable RestartSimulationJobCallable(const Model::RestartSimulationJobRequest& request) const;

        /**
         * <p>Restarts a running simulation job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/RestartSimulationJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RestartSimulationJobAsync(const Model::RestartSimulationJobRequest& request, const RestartSimulationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Syncrhonizes robots in a fleet to the latest deployment. This is helpful if
         * robots were added after a deployment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/SyncDeploymentJob">AWS
         * API Reference</a></p>
         */
        virtual Model::SyncDeploymentJobOutcome SyncDeploymentJob(const Model::SyncDeploymentJobRequest& request) const;

        /**
         * <p>Syncrhonizes robots in a fleet to the latest deployment. This is helpful if
         * robots were added after a deployment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/SyncDeploymentJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SyncDeploymentJobOutcomeCallable SyncDeploymentJobCallable(const Model::SyncDeploymentJobRequest& request) const;

        /**
         * <p>Syncrhonizes robots in a fleet to the latest deployment. This is helpful if
         * robots were added after a deployment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/SyncDeploymentJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SyncDeploymentJobAsync(const Model::SyncDeploymentJobRequest& request, const SyncDeploymentJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds or edits tags for a AWS RoboMaker resource.</p> <p>Each tag consists of
         * a tag key and a tag value. Tag keys and tag values are both required, but tag
         * values can be empty strings. </p> <p>For information about the rules that apply
         * to tag keys and tag values, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/allocation-tag-restrictions.html">User-Defined
         * Tag Restrictions</a> in the <i>AWS Billing and Cost Management User Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds or edits tags for a AWS RoboMaker resource.</p> <p>Each tag consists of
         * a tag key and a tag value. Tag keys and tag values are both required, but tag
         * values can be empty strings. </p> <p>For information about the rules that apply
         * to tag keys and tag values, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/allocation-tag-restrictions.html">User-Defined
         * Tag Restrictions</a> in the <i>AWS Billing and Cost Management User Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds or edits tags for a AWS RoboMaker resource.</p> <p>Each tag consists of
         * a tag key and a tag value. Tag keys and tag values are both required, but tag
         * values can be empty strings. </p> <p>For information about the rules that apply
         * to tag keys and tag values, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/allocation-tag-restrictions.html">User-Defined
         * Tag Restrictions</a> in the <i>AWS Billing and Cost Management User Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified tags from the specified AWS RoboMaker resource.</p>
         * <p>To remove a tag, specify the tag key. To change the tag value of an existing
         * tag key, use <a
         * href="https://docs.aws.amazon.com/robomaker/latest/dg/API_TagResource.html">
         * <code>TagResource</code> </a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes the specified tags from the specified AWS RoboMaker resource.</p>
         * <p>To remove a tag, specify the tag key. To change the tag value of an existing
         * tag key, use <a
         * href="https://docs.aws.amazon.com/robomaker/latest/dg/API_TagResource.html">
         * <code>TagResource</code> </a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes the specified tags from the specified AWS RoboMaker resource.</p>
         * <p>To remove a tag, specify the tag key. To change the tag value of an existing
         * tag key, use <a
         * href="https://docs.aws.amazon.com/robomaker/latest/dg/API_TagResource.html">
         * <code>TagResource</code> </a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a robot application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/UpdateRobotApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRobotApplicationOutcome UpdateRobotApplication(const Model::UpdateRobotApplicationRequest& request) const;

        /**
         * <p>Updates a robot application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/UpdateRobotApplication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRobotApplicationOutcomeCallable UpdateRobotApplicationCallable(const Model::UpdateRobotApplicationRequest& request) const;

        /**
         * <p>Updates a robot application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/UpdateRobotApplication">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRobotApplicationAsync(const Model::UpdateRobotApplicationRequest& request, const UpdateRobotApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a simulation application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/UpdateSimulationApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSimulationApplicationOutcome UpdateSimulationApplication(const Model::UpdateSimulationApplicationRequest& request) const;

        /**
         * <p>Updates a simulation application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/UpdateSimulationApplication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSimulationApplicationOutcomeCallable UpdateSimulationApplicationCallable(const Model::UpdateSimulationApplicationRequest& request) const;

        /**
         * <p>Updates a simulation application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/UpdateSimulationApplication">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSimulationApplicationAsync(const Model::UpdateSimulationApplicationRequest& request, const UpdateSimulationApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void BatchDescribeSimulationJobAsyncHelper(const Model::BatchDescribeSimulationJobRequest& request, const BatchDescribeSimulationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CancelDeploymentJobAsyncHelper(const Model::CancelDeploymentJobRequest& request, const CancelDeploymentJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CancelSimulationJobAsyncHelper(const Model::CancelSimulationJobRequest& request, const CancelSimulationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDeploymentJobAsyncHelper(const Model::CreateDeploymentJobRequest& request, const CreateDeploymentJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateFleetAsyncHelper(const Model::CreateFleetRequest& request, const CreateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateRobotAsyncHelper(const Model::CreateRobotRequest& request, const CreateRobotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateRobotApplicationAsyncHelper(const Model::CreateRobotApplicationRequest& request, const CreateRobotApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateRobotApplicationVersionAsyncHelper(const Model::CreateRobotApplicationVersionRequest& request, const CreateRobotApplicationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateSimulationApplicationAsyncHelper(const Model::CreateSimulationApplicationRequest& request, const CreateSimulationApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateSimulationApplicationVersionAsyncHelper(const Model::CreateSimulationApplicationVersionRequest& request, const CreateSimulationApplicationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateSimulationJobAsyncHelper(const Model::CreateSimulationJobRequest& request, const CreateSimulationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteFleetAsyncHelper(const Model::DeleteFleetRequest& request, const DeleteFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRobotAsyncHelper(const Model::DeleteRobotRequest& request, const DeleteRobotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRobotApplicationAsyncHelper(const Model::DeleteRobotApplicationRequest& request, const DeleteRobotApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSimulationApplicationAsyncHelper(const Model::DeleteSimulationApplicationRequest& request, const DeleteSimulationApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeregisterRobotAsyncHelper(const Model::DeregisterRobotRequest& request, const DeregisterRobotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDeploymentJobAsyncHelper(const Model::DescribeDeploymentJobRequest& request, const DescribeDeploymentJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeFleetAsyncHelper(const Model::DescribeFleetRequest& request, const DescribeFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeRobotAsyncHelper(const Model::DescribeRobotRequest& request, const DescribeRobotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeRobotApplicationAsyncHelper(const Model::DescribeRobotApplicationRequest& request, const DescribeRobotApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeSimulationApplicationAsyncHelper(const Model::DescribeSimulationApplicationRequest& request, const DescribeSimulationApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeSimulationJobAsyncHelper(const Model::DescribeSimulationJobRequest& request, const DescribeSimulationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDeploymentJobsAsyncHelper(const Model::ListDeploymentJobsRequest& request, const ListDeploymentJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListFleetsAsyncHelper(const Model::ListFleetsRequest& request, const ListFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRobotApplicationsAsyncHelper(const Model::ListRobotApplicationsRequest& request, const ListRobotApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRobotsAsyncHelper(const Model::ListRobotsRequest& request, const ListRobotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSimulationApplicationsAsyncHelper(const Model::ListSimulationApplicationsRequest& request, const ListSimulationApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSimulationJobsAsyncHelper(const Model::ListSimulationJobsRequest& request, const ListSimulationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RegisterRobotAsyncHelper(const Model::RegisterRobotRequest& request, const RegisterRobotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RestartSimulationJobAsyncHelper(const Model::RestartSimulationJobRequest& request, const RestartSimulationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SyncDeploymentJobAsyncHelper(const Model::SyncDeploymentJobRequest& request, const SyncDeploymentJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateRobotApplicationAsyncHelper(const Model::UpdateRobotApplicationRequest& request, const UpdateRobotApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateSimulationApplicationAsyncHelper(const Model::UpdateSimulationApplicationRequest& request, const UpdateSimulationApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace RoboMaker
} // namespace Aws
