/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/robomaker/RoboMakerErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/robomaker/model/BatchDeleteWorldsResult.h>
#include <aws/robomaker/model/BatchDescribeSimulationJobResult.h>
#include <aws/robomaker/model/CancelDeploymentJobResult.h>
#include <aws/robomaker/model/CancelSimulationJobResult.h>
#include <aws/robomaker/model/CancelSimulationJobBatchResult.h>
#include <aws/robomaker/model/CancelWorldExportJobResult.h>
#include <aws/robomaker/model/CancelWorldGenerationJobResult.h>
#include <aws/robomaker/model/CreateDeploymentJobResult.h>
#include <aws/robomaker/model/CreateFleetResult.h>
#include <aws/robomaker/model/CreateRobotResult.h>
#include <aws/robomaker/model/CreateRobotApplicationResult.h>
#include <aws/robomaker/model/CreateRobotApplicationVersionResult.h>
#include <aws/robomaker/model/CreateSimulationApplicationResult.h>
#include <aws/robomaker/model/CreateSimulationApplicationVersionResult.h>
#include <aws/robomaker/model/CreateSimulationJobResult.h>
#include <aws/robomaker/model/CreateWorldExportJobResult.h>
#include <aws/robomaker/model/CreateWorldGenerationJobResult.h>
#include <aws/robomaker/model/CreateWorldTemplateResult.h>
#include <aws/robomaker/model/DeleteFleetResult.h>
#include <aws/robomaker/model/DeleteRobotResult.h>
#include <aws/robomaker/model/DeleteRobotApplicationResult.h>
#include <aws/robomaker/model/DeleteSimulationApplicationResult.h>
#include <aws/robomaker/model/DeleteWorldTemplateResult.h>
#include <aws/robomaker/model/DeregisterRobotResult.h>
#include <aws/robomaker/model/DescribeDeploymentJobResult.h>
#include <aws/robomaker/model/DescribeFleetResult.h>
#include <aws/robomaker/model/DescribeRobotResult.h>
#include <aws/robomaker/model/DescribeRobotApplicationResult.h>
#include <aws/robomaker/model/DescribeSimulationApplicationResult.h>
#include <aws/robomaker/model/DescribeSimulationJobResult.h>
#include <aws/robomaker/model/DescribeSimulationJobBatchResult.h>
#include <aws/robomaker/model/DescribeWorldResult.h>
#include <aws/robomaker/model/DescribeWorldExportJobResult.h>
#include <aws/robomaker/model/DescribeWorldGenerationJobResult.h>
#include <aws/robomaker/model/DescribeWorldTemplateResult.h>
#include <aws/robomaker/model/GetWorldTemplateBodyResult.h>
#include <aws/robomaker/model/ListDeploymentJobsResult.h>
#include <aws/robomaker/model/ListFleetsResult.h>
#include <aws/robomaker/model/ListRobotApplicationsResult.h>
#include <aws/robomaker/model/ListRobotsResult.h>
#include <aws/robomaker/model/ListSimulationApplicationsResult.h>
#include <aws/robomaker/model/ListSimulationJobBatchesResult.h>
#include <aws/robomaker/model/ListSimulationJobsResult.h>
#include <aws/robomaker/model/ListTagsForResourceResult.h>
#include <aws/robomaker/model/ListWorldExportJobsResult.h>
#include <aws/robomaker/model/ListWorldGenerationJobsResult.h>
#include <aws/robomaker/model/ListWorldTemplatesResult.h>
#include <aws/robomaker/model/ListWorldsResult.h>
#include <aws/robomaker/model/RegisterRobotResult.h>
#include <aws/robomaker/model/RestartSimulationJobResult.h>
#include <aws/robomaker/model/StartSimulationJobBatchResult.h>
#include <aws/robomaker/model/SyncDeploymentJobResult.h>
#include <aws/robomaker/model/TagResourceResult.h>
#include <aws/robomaker/model/UntagResourceResult.h>
#include <aws/robomaker/model/UpdateRobotApplicationResult.h>
#include <aws/robomaker/model/UpdateSimulationApplicationResult.h>
#include <aws/robomaker/model/UpdateWorldTemplateResult.h>
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
        class BatchDeleteWorldsRequest;
        class BatchDescribeSimulationJobRequest;
        class CancelDeploymentJobRequest;
        class CancelSimulationJobRequest;
        class CancelSimulationJobBatchRequest;
        class CancelWorldExportJobRequest;
        class CancelWorldGenerationJobRequest;
        class CreateDeploymentJobRequest;
        class CreateFleetRequest;
        class CreateRobotRequest;
        class CreateRobotApplicationRequest;
        class CreateRobotApplicationVersionRequest;
        class CreateSimulationApplicationRequest;
        class CreateSimulationApplicationVersionRequest;
        class CreateSimulationJobRequest;
        class CreateWorldExportJobRequest;
        class CreateWorldGenerationJobRequest;
        class CreateWorldTemplateRequest;
        class DeleteFleetRequest;
        class DeleteRobotRequest;
        class DeleteRobotApplicationRequest;
        class DeleteSimulationApplicationRequest;
        class DeleteWorldTemplateRequest;
        class DeregisterRobotRequest;
        class DescribeDeploymentJobRequest;
        class DescribeFleetRequest;
        class DescribeRobotRequest;
        class DescribeRobotApplicationRequest;
        class DescribeSimulationApplicationRequest;
        class DescribeSimulationJobRequest;
        class DescribeSimulationJobBatchRequest;
        class DescribeWorldRequest;
        class DescribeWorldExportJobRequest;
        class DescribeWorldGenerationJobRequest;
        class DescribeWorldTemplateRequest;
        class GetWorldTemplateBodyRequest;
        class ListDeploymentJobsRequest;
        class ListFleetsRequest;
        class ListRobotApplicationsRequest;
        class ListRobotsRequest;
        class ListSimulationApplicationsRequest;
        class ListSimulationJobBatchesRequest;
        class ListSimulationJobsRequest;
        class ListTagsForResourceRequest;
        class ListWorldExportJobsRequest;
        class ListWorldGenerationJobsRequest;
        class ListWorldTemplatesRequest;
        class ListWorldsRequest;
        class RegisterRobotRequest;
        class RestartSimulationJobRequest;
        class StartSimulationJobBatchRequest;
        class SyncDeploymentJobRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateRobotApplicationRequest;
        class UpdateSimulationApplicationRequest;
        class UpdateWorldTemplateRequest;

        typedef Aws::Utils::Outcome<BatchDeleteWorldsResult, RoboMakerError> BatchDeleteWorldsOutcome;
        typedef Aws::Utils::Outcome<BatchDescribeSimulationJobResult, RoboMakerError> BatchDescribeSimulationJobOutcome;
        typedef Aws::Utils::Outcome<CancelDeploymentJobResult, RoboMakerError> CancelDeploymentJobOutcome;
        typedef Aws::Utils::Outcome<CancelSimulationJobResult, RoboMakerError> CancelSimulationJobOutcome;
        typedef Aws::Utils::Outcome<CancelSimulationJobBatchResult, RoboMakerError> CancelSimulationJobBatchOutcome;
        typedef Aws::Utils::Outcome<CancelWorldExportJobResult, RoboMakerError> CancelWorldExportJobOutcome;
        typedef Aws::Utils::Outcome<CancelWorldGenerationJobResult, RoboMakerError> CancelWorldGenerationJobOutcome;
        typedef Aws::Utils::Outcome<CreateDeploymentJobResult, RoboMakerError> CreateDeploymentJobOutcome;
        typedef Aws::Utils::Outcome<CreateFleetResult, RoboMakerError> CreateFleetOutcome;
        typedef Aws::Utils::Outcome<CreateRobotResult, RoboMakerError> CreateRobotOutcome;
        typedef Aws::Utils::Outcome<CreateRobotApplicationResult, RoboMakerError> CreateRobotApplicationOutcome;
        typedef Aws::Utils::Outcome<CreateRobotApplicationVersionResult, RoboMakerError> CreateRobotApplicationVersionOutcome;
        typedef Aws::Utils::Outcome<CreateSimulationApplicationResult, RoboMakerError> CreateSimulationApplicationOutcome;
        typedef Aws::Utils::Outcome<CreateSimulationApplicationVersionResult, RoboMakerError> CreateSimulationApplicationVersionOutcome;
        typedef Aws::Utils::Outcome<CreateSimulationJobResult, RoboMakerError> CreateSimulationJobOutcome;
        typedef Aws::Utils::Outcome<CreateWorldExportJobResult, RoboMakerError> CreateWorldExportJobOutcome;
        typedef Aws::Utils::Outcome<CreateWorldGenerationJobResult, RoboMakerError> CreateWorldGenerationJobOutcome;
        typedef Aws::Utils::Outcome<CreateWorldTemplateResult, RoboMakerError> CreateWorldTemplateOutcome;
        typedef Aws::Utils::Outcome<DeleteFleetResult, RoboMakerError> DeleteFleetOutcome;
        typedef Aws::Utils::Outcome<DeleteRobotResult, RoboMakerError> DeleteRobotOutcome;
        typedef Aws::Utils::Outcome<DeleteRobotApplicationResult, RoboMakerError> DeleteRobotApplicationOutcome;
        typedef Aws::Utils::Outcome<DeleteSimulationApplicationResult, RoboMakerError> DeleteSimulationApplicationOutcome;
        typedef Aws::Utils::Outcome<DeleteWorldTemplateResult, RoboMakerError> DeleteWorldTemplateOutcome;
        typedef Aws::Utils::Outcome<DeregisterRobotResult, RoboMakerError> DeregisterRobotOutcome;
        typedef Aws::Utils::Outcome<DescribeDeploymentJobResult, RoboMakerError> DescribeDeploymentJobOutcome;
        typedef Aws::Utils::Outcome<DescribeFleetResult, RoboMakerError> DescribeFleetOutcome;
        typedef Aws::Utils::Outcome<DescribeRobotResult, RoboMakerError> DescribeRobotOutcome;
        typedef Aws::Utils::Outcome<DescribeRobotApplicationResult, RoboMakerError> DescribeRobotApplicationOutcome;
        typedef Aws::Utils::Outcome<DescribeSimulationApplicationResult, RoboMakerError> DescribeSimulationApplicationOutcome;
        typedef Aws::Utils::Outcome<DescribeSimulationJobResult, RoboMakerError> DescribeSimulationJobOutcome;
        typedef Aws::Utils::Outcome<DescribeSimulationJobBatchResult, RoboMakerError> DescribeSimulationJobBatchOutcome;
        typedef Aws::Utils::Outcome<DescribeWorldResult, RoboMakerError> DescribeWorldOutcome;
        typedef Aws::Utils::Outcome<DescribeWorldExportJobResult, RoboMakerError> DescribeWorldExportJobOutcome;
        typedef Aws::Utils::Outcome<DescribeWorldGenerationJobResult, RoboMakerError> DescribeWorldGenerationJobOutcome;
        typedef Aws::Utils::Outcome<DescribeWorldTemplateResult, RoboMakerError> DescribeWorldTemplateOutcome;
        typedef Aws::Utils::Outcome<GetWorldTemplateBodyResult, RoboMakerError> GetWorldTemplateBodyOutcome;
        typedef Aws::Utils::Outcome<ListDeploymentJobsResult, RoboMakerError> ListDeploymentJobsOutcome;
        typedef Aws::Utils::Outcome<ListFleetsResult, RoboMakerError> ListFleetsOutcome;
        typedef Aws::Utils::Outcome<ListRobotApplicationsResult, RoboMakerError> ListRobotApplicationsOutcome;
        typedef Aws::Utils::Outcome<ListRobotsResult, RoboMakerError> ListRobotsOutcome;
        typedef Aws::Utils::Outcome<ListSimulationApplicationsResult, RoboMakerError> ListSimulationApplicationsOutcome;
        typedef Aws::Utils::Outcome<ListSimulationJobBatchesResult, RoboMakerError> ListSimulationJobBatchesOutcome;
        typedef Aws::Utils::Outcome<ListSimulationJobsResult, RoboMakerError> ListSimulationJobsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, RoboMakerError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<ListWorldExportJobsResult, RoboMakerError> ListWorldExportJobsOutcome;
        typedef Aws::Utils::Outcome<ListWorldGenerationJobsResult, RoboMakerError> ListWorldGenerationJobsOutcome;
        typedef Aws::Utils::Outcome<ListWorldTemplatesResult, RoboMakerError> ListWorldTemplatesOutcome;
        typedef Aws::Utils::Outcome<ListWorldsResult, RoboMakerError> ListWorldsOutcome;
        typedef Aws::Utils::Outcome<RegisterRobotResult, RoboMakerError> RegisterRobotOutcome;
        typedef Aws::Utils::Outcome<RestartSimulationJobResult, RoboMakerError> RestartSimulationJobOutcome;
        typedef Aws::Utils::Outcome<StartSimulationJobBatchResult, RoboMakerError> StartSimulationJobBatchOutcome;
        typedef Aws::Utils::Outcome<SyncDeploymentJobResult, RoboMakerError> SyncDeploymentJobOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, RoboMakerError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, RoboMakerError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateRobotApplicationResult, RoboMakerError> UpdateRobotApplicationOutcome;
        typedef Aws::Utils::Outcome<UpdateSimulationApplicationResult, RoboMakerError> UpdateSimulationApplicationOutcome;
        typedef Aws::Utils::Outcome<UpdateWorldTemplateResult, RoboMakerError> UpdateWorldTemplateOutcome;

        typedef std::future<BatchDeleteWorldsOutcome> BatchDeleteWorldsOutcomeCallable;
        typedef std::future<BatchDescribeSimulationJobOutcome> BatchDescribeSimulationJobOutcomeCallable;
        typedef std::future<CancelDeploymentJobOutcome> CancelDeploymentJobOutcomeCallable;
        typedef std::future<CancelSimulationJobOutcome> CancelSimulationJobOutcomeCallable;
        typedef std::future<CancelSimulationJobBatchOutcome> CancelSimulationJobBatchOutcomeCallable;
        typedef std::future<CancelWorldExportJobOutcome> CancelWorldExportJobOutcomeCallable;
        typedef std::future<CancelWorldGenerationJobOutcome> CancelWorldGenerationJobOutcomeCallable;
        typedef std::future<CreateDeploymentJobOutcome> CreateDeploymentJobOutcomeCallable;
        typedef std::future<CreateFleetOutcome> CreateFleetOutcomeCallable;
        typedef std::future<CreateRobotOutcome> CreateRobotOutcomeCallable;
        typedef std::future<CreateRobotApplicationOutcome> CreateRobotApplicationOutcomeCallable;
        typedef std::future<CreateRobotApplicationVersionOutcome> CreateRobotApplicationVersionOutcomeCallable;
        typedef std::future<CreateSimulationApplicationOutcome> CreateSimulationApplicationOutcomeCallable;
        typedef std::future<CreateSimulationApplicationVersionOutcome> CreateSimulationApplicationVersionOutcomeCallable;
        typedef std::future<CreateSimulationJobOutcome> CreateSimulationJobOutcomeCallable;
        typedef std::future<CreateWorldExportJobOutcome> CreateWorldExportJobOutcomeCallable;
        typedef std::future<CreateWorldGenerationJobOutcome> CreateWorldGenerationJobOutcomeCallable;
        typedef std::future<CreateWorldTemplateOutcome> CreateWorldTemplateOutcomeCallable;
        typedef std::future<DeleteFleetOutcome> DeleteFleetOutcomeCallable;
        typedef std::future<DeleteRobotOutcome> DeleteRobotOutcomeCallable;
        typedef std::future<DeleteRobotApplicationOutcome> DeleteRobotApplicationOutcomeCallable;
        typedef std::future<DeleteSimulationApplicationOutcome> DeleteSimulationApplicationOutcomeCallable;
        typedef std::future<DeleteWorldTemplateOutcome> DeleteWorldTemplateOutcomeCallable;
        typedef std::future<DeregisterRobotOutcome> DeregisterRobotOutcomeCallable;
        typedef std::future<DescribeDeploymentJobOutcome> DescribeDeploymentJobOutcomeCallable;
        typedef std::future<DescribeFleetOutcome> DescribeFleetOutcomeCallable;
        typedef std::future<DescribeRobotOutcome> DescribeRobotOutcomeCallable;
        typedef std::future<DescribeRobotApplicationOutcome> DescribeRobotApplicationOutcomeCallable;
        typedef std::future<DescribeSimulationApplicationOutcome> DescribeSimulationApplicationOutcomeCallable;
        typedef std::future<DescribeSimulationJobOutcome> DescribeSimulationJobOutcomeCallable;
        typedef std::future<DescribeSimulationJobBatchOutcome> DescribeSimulationJobBatchOutcomeCallable;
        typedef std::future<DescribeWorldOutcome> DescribeWorldOutcomeCallable;
        typedef std::future<DescribeWorldExportJobOutcome> DescribeWorldExportJobOutcomeCallable;
        typedef std::future<DescribeWorldGenerationJobOutcome> DescribeWorldGenerationJobOutcomeCallable;
        typedef std::future<DescribeWorldTemplateOutcome> DescribeWorldTemplateOutcomeCallable;
        typedef std::future<GetWorldTemplateBodyOutcome> GetWorldTemplateBodyOutcomeCallable;
        typedef std::future<ListDeploymentJobsOutcome> ListDeploymentJobsOutcomeCallable;
        typedef std::future<ListFleetsOutcome> ListFleetsOutcomeCallable;
        typedef std::future<ListRobotApplicationsOutcome> ListRobotApplicationsOutcomeCallable;
        typedef std::future<ListRobotsOutcome> ListRobotsOutcomeCallable;
        typedef std::future<ListSimulationApplicationsOutcome> ListSimulationApplicationsOutcomeCallable;
        typedef std::future<ListSimulationJobBatchesOutcome> ListSimulationJobBatchesOutcomeCallable;
        typedef std::future<ListSimulationJobsOutcome> ListSimulationJobsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<ListWorldExportJobsOutcome> ListWorldExportJobsOutcomeCallable;
        typedef std::future<ListWorldGenerationJobsOutcome> ListWorldGenerationJobsOutcomeCallable;
        typedef std::future<ListWorldTemplatesOutcome> ListWorldTemplatesOutcomeCallable;
        typedef std::future<ListWorldsOutcome> ListWorldsOutcomeCallable;
        typedef std::future<RegisterRobotOutcome> RegisterRobotOutcomeCallable;
        typedef std::future<RestartSimulationJobOutcome> RestartSimulationJobOutcomeCallable;
        typedef std::future<StartSimulationJobBatchOutcome> StartSimulationJobBatchOutcomeCallable;
        typedef std::future<SyncDeploymentJobOutcome> SyncDeploymentJobOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateRobotApplicationOutcome> UpdateRobotApplicationOutcomeCallable;
        typedef std::future<UpdateSimulationApplicationOutcome> UpdateSimulationApplicationOutcomeCallable;
        typedef std::future<UpdateWorldTemplateOutcome> UpdateWorldTemplateOutcomeCallable;
} // namespace Model

  class RoboMakerClient;

    typedef std::function<void(const RoboMakerClient*, const Model::BatchDeleteWorldsRequest&, const Model::BatchDeleteWorldsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDeleteWorldsResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::BatchDescribeSimulationJobRequest&, const Model::BatchDescribeSimulationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDescribeSimulationJobResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::CancelDeploymentJobRequest&, const Model::CancelDeploymentJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelDeploymentJobResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::CancelSimulationJobRequest&, const Model::CancelSimulationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelSimulationJobResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::CancelSimulationJobBatchRequest&, const Model::CancelSimulationJobBatchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelSimulationJobBatchResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::CancelWorldExportJobRequest&, const Model::CancelWorldExportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelWorldExportJobResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::CancelWorldGenerationJobRequest&, const Model::CancelWorldGenerationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelWorldGenerationJobResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::CreateDeploymentJobRequest&, const Model::CreateDeploymentJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDeploymentJobResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::CreateFleetRequest&, const Model::CreateFleetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFleetResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::CreateRobotRequest&, const Model::CreateRobotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRobotResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::CreateRobotApplicationRequest&, const Model::CreateRobotApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRobotApplicationResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::CreateRobotApplicationVersionRequest&, const Model::CreateRobotApplicationVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRobotApplicationVersionResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::CreateSimulationApplicationRequest&, const Model::CreateSimulationApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSimulationApplicationResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::CreateSimulationApplicationVersionRequest&, const Model::CreateSimulationApplicationVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSimulationApplicationVersionResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::CreateSimulationJobRequest&, const Model::CreateSimulationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSimulationJobResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::CreateWorldExportJobRequest&, const Model::CreateWorldExportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWorldExportJobResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::CreateWorldGenerationJobRequest&, const Model::CreateWorldGenerationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWorldGenerationJobResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::CreateWorldTemplateRequest&, const Model::CreateWorldTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWorldTemplateResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::DeleteFleetRequest&, const Model::DeleteFleetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFleetResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::DeleteRobotRequest&, const Model::DeleteRobotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRobotResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::DeleteRobotApplicationRequest&, const Model::DeleteRobotApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRobotApplicationResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::DeleteSimulationApplicationRequest&, const Model::DeleteSimulationApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSimulationApplicationResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::DeleteWorldTemplateRequest&, const Model::DeleteWorldTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWorldTemplateResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::DeregisterRobotRequest&, const Model::DeregisterRobotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterRobotResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::DescribeDeploymentJobRequest&, const Model::DescribeDeploymentJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDeploymentJobResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::DescribeFleetRequest&, const Model::DescribeFleetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFleetResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::DescribeRobotRequest&, const Model::DescribeRobotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRobotResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::DescribeRobotApplicationRequest&, const Model::DescribeRobotApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRobotApplicationResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::DescribeSimulationApplicationRequest&, const Model::DescribeSimulationApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSimulationApplicationResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::DescribeSimulationJobRequest&, const Model::DescribeSimulationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSimulationJobResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::DescribeSimulationJobBatchRequest&, const Model::DescribeSimulationJobBatchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSimulationJobBatchResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::DescribeWorldRequest&, const Model::DescribeWorldOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeWorldResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::DescribeWorldExportJobRequest&, const Model::DescribeWorldExportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeWorldExportJobResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::DescribeWorldGenerationJobRequest&, const Model::DescribeWorldGenerationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeWorldGenerationJobResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::DescribeWorldTemplateRequest&, const Model::DescribeWorldTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeWorldTemplateResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::GetWorldTemplateBodyRequest&, const Model::GetWorldTemplateBodyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetWorldTemplateBodyResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::ListDeploymentJobsRequest&, const Model::ListDeploymentJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDeploymentJobsResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::ListFleetsRequest&, const Model::ListFleetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFleetsResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::ListRobotApplicationsRequest&, const Model::ListRobotApplicationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRobotApplicationsResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::ListRobotsRequest&, const Model::ListRobotsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRobotsResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::ListSimulationApplicationsRequest&, const Model::ListSimulationApplicationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSimulationApplicationsResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::ListSimulationJobBatchesRequest&, const Model::ListSimulationJobBatchesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSimulationJobBatchesResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::ListSimulationJobsRequest&, const Model::ListSimulationJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSimulationJobsResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::ListWorldExportJobsRequest&, const Model::ListWorldExportJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListWorldExportJobsResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::ListWorldGenerationJobsRequest&, const Model::ListWorldGenerationJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListWorldGenerationJobsResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::ListWorldTemplatesRequest&, const Model::ListWorldTemplatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListWorldTemplatesResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::ListWorldsRequest&, const Model::ListWorldsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListWorldsResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::RegisterRobotRequest&, const Model::RegisterRobotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterRobotResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::RestartSimulationJobRequest&, const Model::RestartSimulationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RestartSimulationJobResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::StartSimulationJobBatchRequest&, const Model::StartSimulationJobBatchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartSimulationJobBatchResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::SyncDeploymentJobRequest&, const Model::SyncDeploymentJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SyncDeploymentJobResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::UpdateRobotApplicationRequest&, const Model::UpdateRobotApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRobotApplicationResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::UpdateSimulationApplicationRequest&, const Model::UpdateSimulationApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSimulationApplicationResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::UpdateWorldTemplateRequest&, const Model::UpdateWorldTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateWorldTemplateResponseReceivedHandler;

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


        /**
         * <p>Deletes one or more worlds in a batch operation.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/BatchDeleteWorlds">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDeleteWorldsOutcome BatchDeleteWorlds(const Model::BatchDeleteWorldsRequest& request) const;

        /**
         * <p>Deletes one or more worlds in a batch operation.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/BatchDeleteWorlds">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchDeleteWorldsOutcomeCallable BatchDeleteWorldsCallable(const Model::BatchDeleteWorldsRequest& request) const;

        /**
         * <p>Deletes one or more worlds in a batch operation.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/BatchDeleteWorlds">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchDeleteWorldsAsync(const Model::BatchDeleteWorldsRequest& request, const BatchDeleteWorldsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Cancels a simulation job batch. When you cancel a simulation job batch, you
         * are also cancelling all of the active simulation jobs created as part of the
         * batch. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CancelSimulationJobBatch">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelSimulationJobBatchOutcome CancelSimulationJobBatch(const Model::CancelSimulationJobBatchRequest& request) const;

        /**
         * <p>Cancels a simulation job batch. When you cancel a simulation job batch, you
         * are also cancelling all of the active simulation jobs created as part of the
         * batch. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CancelSimulationJobBatch">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelSimulationJobBatchOutcomeCallable CancelSimulationJobBatchCallable(const Model::CancelSimulationJobBatchRequest& request) const;

        /**
         * <p>Cancels a simulation job batch. When you cancel a simulation job batch, you
         * are also cancelling all of the active simulation jobs created as part of the
         * batch. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CancelSimulationJobBatch">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelSimulationJobBatchAsync(const Model::CancelSimulationJobBatchRequest& request, const CancelSimulationJobBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels the specified export job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CancelWorldExportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelWorldExportJobOutcome CancelWorldExportJob(const Model::CancelWorldExportJobRequest& request) const;

        /**
         * <p>Cancels the specified export job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CancelWorldExportJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelWorldExportJobOutcomeCallable CancelWorldExportJobCallable(const Model::CancelWorldExportJobRequest& request) const;

        /**
         * <p>Cancels the specified export job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CancelWorldExportJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelWorldExportJobAsync(const Model::CancelWorldExportJobRequest& request, const CancelWorldExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels the specified world generator job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CancelWorldGenerationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelWorldGenerationJobOutcome CancelWorldGenerationJob(const Model::CancelWorldGenerationJobRequest& request) const;

        /**
         * <p>Cancels the specified world generator job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CancelWorldGenerationJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelWorldGenerationJobOutcomeCallable CancelWorldGenerationJobCallable(const Model::CancelWorldGenerationJobRequest& request) const;

        /**
         * <p>Cancels the specified world generator job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CancelWorldGenerationJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelWorldGenerationJobAsync(const Model::CancelWorldGenerationJobRequest& request, const CancelWorldGenerationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deploys a specific version of a robot application to robots in a fleet.</p>
         * <p>The robot application must have a numbered <code>applicationVersion</code>
         * for consistency reasons. To create a new version, use
         * <code>CreateRobotApplicationVersion</code> or see <a
         * href="https://docs.aws.amazon.com/robomaker/latest/dg/create-robot-application-version.html">Creating
         * a Robot Application Version</a>. </p>  <p>After 90 days, deployment jobs
         * expire and will be deleted. They will no longer be accessible. </p>
         * <p><h3>See Also:</h3>   <a
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
         * a Robot Application Version</a>. </p>  <p>After 90 days, deployment jobs
         * expire and will be deleted. They will no longer be accessible. </p>
         * <p><h3>See Also:</h3>   <a
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
         * a Robot Application Version</a>. </p>  <p>After 90 days, deployment jobs
         * expire and will be deleted. They will no longer be accessible. </p>
         * <p><h3>See Also:</h3>   <a
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
         * <p>Creates a simulation job.</p>  <p>After 90 days, simulation jobs expire
         * and will be deleted. They will no longer be accessible. </p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CreateSimulationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSimulationJobOutcome CreateSimulationJob(const Model::CreateSimulationJobRequest& request) const;

        /**
         * <p>Creates a simulation job.</p>  <p>After 90 days, simulation jobs expire
         * and will be deleted. They will no longer be accessible. </p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CreateSimulationJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSimulationJobOutcomeCallable CreateSimulationJobCallable(const Model::CreateSimulationJobRequest& request) const;

        /**
         * <p>Creates a simulation job.</p>  <p>After 90 days, simulation jobs expire
         * and will be deleted. They will no longer be accessible. </p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CreateSimulationJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSimulationJobAsync(const Model::CreateSimulationJobRequest& request, const CreateSimulationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a world export job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CreateWorldExportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorldExportJobOutcome CreateWorldExportJob(const Model::CreateWorldExportJobRequest& request) const;

        /**
         * <p>Creates a world export job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CreateWorldExportJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateWorldExportJobOutcomeCallable CreateWorldExportJobCallable(const Model::CreateWorldExportJobRequest& request) const;

        /**
         * <p>Creates a world export job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CreateWorldExportJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateWorldExportJobAsync(const Model::CreateWorldExportJobRequest& request, const CreateWorldExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates worlds using the specified template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CreateWorldGenerationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorldGenerationJobOutcome CreateWorldGenerationJob(const Model::CreateWorldGenerationJobRequest& request) const;

        /**
         * <p>Creates worlds using the specified template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CreateWorldGenerationJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateWorldGenerationJobOutcomeCallable CreateWorldGenerationJobCallable(const Model::CreateWorldGenerationJobRequest& request) const;

        /**
         * <p>Creates worlds using the specified template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CreateWorldGenerationJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateWorldGenerationJobAsync(const Model::CreateWorldGenerationJobRequest& request, const CreateWorldGenerationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a world template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CreateWorldTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorldTemplateOutcome CreateWorldTemplate(const Model::CreateWorldTemplateRequest& request) const;

        /**
         * <p>Creates a world template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CreateWorldTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateWorldTemplateOutcomeCallable CreateWorldTemplateCallable(const Model::CreateWorldTemplateRequest& request) const;

        /**
         * <p>Creates a world template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CreateWorldTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateWorldTemplateAsync(const Model::CreateWorldTemplateRequest& request, const CreateWorldTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Deletes a world template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DeleteWorldTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWorldTemplateOutcome DeleteWorldTemplate(const Model::DeleteWorldTemplateRequest& request) const;

        /**
         * <p>Deletes a world template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DeleteWorldTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteWorldTemplateOutcomeCallable DeleteWorldTemplateCallable(const Model::DeleteWorldTemplateRequest& request) const;

        /**
         * <p>Deletes a world template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DeleteWorldTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteWorldTemplateAsync(const Model::DeleteWorldTemplateRequest& request, const DeleteWorldTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Describes a simulation job batch.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DescribeSimulationJobBatch">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSimulationJobBatchOutcome DescribeSimulationJobBatch(const Model::DescribeSimulationJobBatchRequest& request) const;

        /**
         * <p>Describes a simulation job batch.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DescribeSimulationJobBatch">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSimulationJobBatchOutcomeCallable DescribeSimulationJobBatchCallable(const Model::DescribeSimulationJobBatchRequest& request) const;

        /**
         * <p>Describes a simulation job batch.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DescribeSimulationJobBatch">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSimulationJobBatchAsync(const Model::DescribeSimulationJobBatchRequest& request, const DescribeSimulationJobBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a world.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DescribeWorld">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWorldOutcome DescribeWorld(const Model::DescribeWorldRequest& request) const;

        /**
         * <p>Describes a world.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DescribeWorld">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeWorldOutcomeCallable DescribeWorldCallable(const Model::DescribeWorldRequest& request) const;

        /**
         * <p>Describes a world.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DescribeWorld">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeWorldAsync(const Model::DescribeWorldRequest& request, const DescribeWorldResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a world export job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DescribeWorldExportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWorldExportJobOutcome DescribeWorldExportJob(const Model::DescribeWorldExportJobRequest& request) const;

        /**
         * <p>Describes a world export job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DescribeWorldExportJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeWorldExportJobOutcomeCallable DescribeWorldExportJobCallable(const Model::DescribeWorldExportJobRequest& request) const;

        /**
         * <p>Describes a world export job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DescribeWorldExportJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeWorldExportJobAsync(const Model::DescribeWorldExportJobRequest& request, const DescribeWorldExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a world generation job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DescribeWorldGenerationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWorldGenerationJobOutcome DescribeWorldGenerationJob(const Model::DescribeWorldGenerationJobRequest& request) const;

        /**
         * <p>Describes a world generation job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DescribeWorldGenerationJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeWorldGenerationJobOutcomeCallable DescribeWorldGenerationJobCallable(const Model::DescribeWorldGenerationJobRequest& request) const;

        /**
         * <p>Describes a world generation job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DescribeWorldGenerationJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeWorldGenerationJobAsync(const Model::DescribeWorldGenerationJobRequest& request, const DescribeWorldGenerationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a world template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DescribeWorldTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWorldTemplateOutcome DescribeWorldTemplate(const Model::DescribeWorldTemplateRequest& request) const;

        /**
         * <p>Describes a world template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DescribeWorldTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeWorldTemplateOutcomeCallable DescribeWorldTemplateCallable(const Model::DescribeWorldTemplateRequest& request) const;

        /**
         * <p>Describes a world template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DescribeWorldTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeWorldTemplateAsync(const Model::DescribeWorldTemplateRequest& request, const DescribeWorldTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the world template body.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/GetWorldTemplateBody">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWorldTemplateBodyOutcome GetWorldTemplateBody(const Model::GetWorldTemplateBodyRequest& request) const;

        /**
         * <p>Gets the world template body.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/GetWorldTemplateBody">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetWorldTemplateBodyOutcomeCallable GetWorldTemplateBodyCallable(const Model::GetWorldTemplateBodyRequest& request) const;

        /**
         * <p>Gets the world template body.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/GetWorldTemplateBody">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetWorldTemplateBodyAsync(const Model::GetWorldTemplateBodyRequest& request, const GetWorldTemplateBodyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of deployment jobs for a fleet. You can optionally provide
         * filters to retrieve specific deployment jobs. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/ListDeploymentJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDeploymentJobsOutcome ListDeploymentJobs(const Model::ListDeploymentJobsRequest& request) const;

        /**
         * <p>Returns a list of deployment jobs for a fleet. You can optionally provide
         * filters to retrieve specific deployment jobs. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/ListDeploymentJobs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDeploymentJobsOutcomeCallable ListDeploymentJobsCallable(const Model::ListDeploymentJobsRequest& request) const;

        /**
         * <p>Returns a list of deployment jobs for a fleet. You can optionally provide
         * filters to retrieve specific deployment jobs. </p><p><h3>See Also:</h3>   <a
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
         * <p>Returns a list simulation job batches. You can optionally provide filters to
         * retrieve specific simulation batch jobs. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/ListSimulationJobBatches">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSimulationJobBatchesOutcome ListSimulationJobBatches(const Model::ListSimulationJobBatchesRequest& request) const;

        /**
         * <p>Returns a list simulation job batches. You can optionally provide filters to
         * retrieve specific simulation batch jobs. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/ListSimulationJobBatches">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSimulationJobBatchesOutcomeCallable ListSimulationJobBatchesCallable(const Model::ListSimulationJobBatchesRequest& request) const;

        /**
         * <p>Returns a list simulation job batches. You can optionally provide filters to
         * retrieve specific simulation batch jobs. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/ListSimulationJobBatches">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSimulationJobBatchesAsync(const Model::ListSimulationJobBatchesRequest& request, const ListSimulationJobBatchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Lists world export jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/ListWorldExportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorldExportJobsOutcome ListWorldExportJobs(const Model::ListWorldExportJobsRequest& request) const;

        /**
         * <p>Lists world export jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/ListWorldExportJobs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListWorldExportJobsOutcomeCallable ListWorldExportJobsCallable(const Model::ListWorldExportJobsRequest& request) const;

        /**
         * <p>Lists world export jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/ListWorldExportJobs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListWorldExportJobsAsync(const Model::ListWorldExportJobsRequest& request, const ListWorldExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists world generator jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/ListWorldGenerationJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorldGenerationJobsOutcome ListWorldGenerationJobs(const Model::ListWorldGenerationJobsRequest& request) const;

        /**
         * <p>Lists world generator jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/ListWorldGenerationJobs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListWorldGenerationJobsOutcomeCallable ListWorldGenerationJobsCallable(const Model::ListWorldGenerationJobsRequest& request) const;

        /**
         * <p>Lists world generator jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/ListWorldGenerationJobs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListWorldGenerationJobsAsync(const Model::ListWorldGenerationJobsRequest& request, const ListWorldGenerationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists world templates.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/ListWorldTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorldTemplatesOutcome ListWorldTemplates(const Model::ListWorldTemplatesRequest& request) const;

        /**
         * <p>Lists world templates.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/ListWorldTemplates">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListWorldTemplatesOutcomeCallable ListWorldTemplatesCallable(const Model::ListWorldTemplatesRequest& request) const;

        /**
         * <p>Lists world templates.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/ListWorldTemplates">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListWorldTemplatesAsync(const Model::ListWorldTemplatesRequest& request, const ListWorldTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists worlds.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/ListWorlds">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorldsOutcome ListWorlds(const Model::ListWorldsRequest& request) const;

        /**
         * <p>Lists worlds.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/ListWorlds">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListWorldsOutcomeCallable ListWorldsCallable(const Model::ListWorldsRequest& request) const;

        /**
         * <p>Lists worlds.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/ListWorlds">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListWorldsAsync(const Model::ListWorldsRequest& request, const ListWorldsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Starts a new simulation job batch. The batch is defined using one or more
         * <code>SimulationJobRequest</code> objects. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/StartSimulationJobBatch">AWS
         * API Reference</a></p>
         */
        virtual Model::StartSimulationJobBatchOutcome StartSimulationJobBatch(const Model::StartSimulationJobBatchRequest& request) const;

        /**
         * <p>Starts a new simulation job batch. The batch is defined using one or more
         * <code>SimulationJobRequest</code> objects. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/StartSimulationJobBatch">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartSimulationJobBatchOutcomeCallable StartSimulationJobBatchCallable(const Model::StartSimulationJobBatchRequest& request) const;

        /**
         * <p>Starts a new simulation job batch. The batch is defined using one or more
         * <code>SimulationJobRequest</code> objects. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/StartSimulationJobBatch">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartSimulationJobBatchAsync(const Model::StartSimulationJobBatchRequest& request, const StartSimulationJobBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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

        /**
         * <p>Updates a world template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/UpdateWorldTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWorldTemplateOutcome UpdateWorldTemplate(const Model::UpdateWorldTemplateRequest& request) const;

        /**
         * <p>Updates a world template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/UpdateWorldTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateWorldTemplateOutcomeCallable UpdateWorldTemplateCallable(const Model::UpdateWorldTemplateRequest& request) const;

        /**
         * <p>Updates a world template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/UpdateWorldTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateWorldTemplateAsync(const Model::UpdateWorldTemplateRequest& request, const UpdateWorldTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void BatchDeleteWorldsAsyncHelper(const Model::BatchDeleteWorldsRequest& request, const BatchDeleteWorldsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchDescribeSimulationJobAsyncHelper(const Model::BatchDescribeSimulationJobRequest& request, const BatchDescribeSimulationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CancelDeploymentJobAsyncHelper(const Model::CancelDeploymentJobRequest& request, const CancelDeploymentJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CancelSimulationJobAsyncHelper(const Model::CancelSimulationJobRequest& request, const CancelSimulationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CancelSimulationJobBatchAsyncHelper(const Model::CancelSimulationJobBatchRequest& request, const CancelSimulationJobBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CancelWorldExportJobAsyncHelper(const Model::CancelWorldExportJobRequest& request, const CancelWorldExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CancelWorldGenerationJobAsyncHelper(const Model::CancelWorldGenerationJobRequest& request, const CancelWorldGenerationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDeploymentJobAsyncHelper(const Model::CreateDeploymentJobRequest& request, const CreateDeploymentJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateFleetAsyncHelper(const Model::CreateFleetRequest& request, const CreateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateRobotAsyncHelper(const Model::CreateRobotRequest& request, const CreateRobotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateRobotApplicationAsyncHelper(const Model::CreateRobotApplicationRequest& request, const CreateRobotApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateRobotApplicationVersionAsyncHelper(const Model::CreateRobotApplicationVersionRequest& request, const CreateRobotApplicationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateSimulationApplicationAsyncHelper(const Model::CreateSimulationApplicationRequest& request, const CreateSimulationApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateSimulationApplicationVersionAsyncHelper(const Model::CreateSimulationApplicationVersionRequest& request, const CreateSimulationApplicationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateSimulationJobAsyncHelper(const Model::CreateSimulationJobRequest& request, const CreateSimulationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateWorldExportJobAsyncHelper(const Model::CreateWorldExportJobRequest& request, const CreateWorldExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateWorldGenerationJobAsyncHelper(const Model::CreateWorldGenerationJobRequest& request, const CreateWorldGenerationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateWorldTemplateAsyncHelper(const Model::CreateWorldTemplateRequest& request, const CreateWorldTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteFleetAsyncHelper(const Model::DeleteFleetRequest& request, const DeleteFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRobotAsyncHelper(const Model::DeleteRobotRequest& request, const DeleteRobotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRobotApplicationAsyncHelper(const Model::DeleteRobotApplicationRequest& request, const DeleteRobotApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSimulationApplicationAsyncHelper(const Model::DeleteSimulationApplicationRequest& request, const DeleteSimulationApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteWorldTemplateAsyncHelper(const Model::DeleteWorldTemplateRequest& request, const DeleteWorldTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeregisterRobotAsyncHelper(const Model::DeregisterRobotRequest& request, const DeregisterRobotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDeploymentJobAsyncHelper(const Model::DescribeDeploymentJobRequest& request, const DescribeDeploymentJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeFleetAsyncHelper(const Model::DescribeFleetRequest& request, const DescribeFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeRobotAsyncHelper(const Model::DescribeRobotRequest& request, const DescribeRobotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeRobotApplicationAsyncHelper(const Model::DescribeRobotApplicationRequest& request, const DescribeRobotApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeSimulationApplicationAsyncHelper(const Model::DescribeSimulationApplicationRequest& request, const DescribeSimulationApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeSimulationJobAsyncHelper(const Model::DescribeSimulationJobRequest& request, const DescribeSimulationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeSimulationJobBatchAsyncHelper(const Model::DescribeSimulationJobBatchRequest& request, const DescribeSimulationJobBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeWorldAsyncHelper(const Model::DescribeWorldRequest& request, const DescribeWorldResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeWorldExportJobAsyncHelper(const Model::DescribeWorldExportJobRequest& request, const DescribeWorldExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeWorldGenerationJobAsyncHelper(const Model::DescribeWorldGenerationJobRequest& request, const DescribeWorldGenerationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeWorldTemplateAsyncHelper(const Model::DescribeWorldTemplateRequest& request, const DescribeWorldTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetWorldTemplateBodyAsyncHelper(const Model::GetWorldTemplateBodyRequest& request, const GetWorldTemplateBodyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDeploymentJobsAsyncHelper(const Model::ListDeploymentJobsRequest& request, const ListDeploymentJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListFleetsAsyncHelper(const Model::ListFleetsRequest& request, const ListFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRobotApplicationsAsyncHelper(const Model::ListRobotApplicationsRequest& request, const ListRobotApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRobotsAsyncHelper(const Model::ListRobotsRequest& request, const ListRobotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSimulationApplicationsAsyncHelper(const Model::ListSimulationApplicationsRequest& request, const ListSimulationApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSimulationJobBatchesAsyncHelper(const Model::ListSimulationJobBatchesRequest& request, const ListSimulationJobBatchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSimulationJobsAsyncHelper(const Model::ListSimulationJobsRequest& request, const ListSimulationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListWorldExportJobsAsyncHelper(const Model::ListWorldExportJobsRequest& request, const ListWorldExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListWorldGenerationJobsAsyncHelper(const Model::ListWorldGenerationJobsRequest& request, const ListWorldGenerationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListWorldTemplatesAsyncHelper(const Model::ListWorldTemplatesRequest& request, const ListWorldTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListWorldsAsyncHelper(const Model::ListWorldsRequest& request, const ListWorldsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RegisterRobotAsyncHelper(const Model::RegisterRobotRequest& request, const RegisterRobotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RestartSimulationJobAsyncHelper(const Model::RestartSimulationJobRequest& request, const RestartSimulationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartSimulationJobBatchAsyncHelper(const Model::StartSimulationJobBatchRequest& request, const StartSimulationJobBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SyncDeploymentJobAsyncHelper(const Model::SyncDeploymentJobRequest& request, const SyncDeploymentJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateRobotApplicationAsyncHelper(const Model::UpdateRobotApplicationRequest& request, const UpdateRobotApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateSimulationApplicationAsyncHelper(const Model::UpdateSimulationApplicationRequest& request, const UpdateSimulationApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateWorldTemplateAsyncHelper(const Model::UpdateWorldTemplateRequest& request, const UpdateWorldTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace RoboMaker
} // namespace Aws
