/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/datapipeline/DataPipelineErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/datapipeline/DataPipelineEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in DataPipelineClient header */
#include <aws/datapipeline/model/ActivatePipelineResult.h>
#include <aws/datapipeline/model/AddTagsResult.h>
#include <aws/datapipeline/model/CreatePipelineResult.h>
#include <aws/datapipeline/model/DeactivatePipelineResult.h>
#include <aws/datapipeline/model/DescribeObjectsResult.h>
#include <aws/datapipeline/model/DescribePipelinesResult.h>
#include <aws/datapipeline/model/EvaluateExpressionResult.h>
#include <aws/datapipeline/model/GetPipelineDefinitionResult.h>
#include <aws/datapipeline/model/ListPipelinesResult.h>
#include <aws/datapipeline/model/PollForTaskResult.h>
#include <aws/datapipeline/model/PutPipelineDefinitionResult.h>
#include <aws/datapipeline/model/QueryObjectsResult.h>
#include <aws/datapipeline/model/RemoveTagsResult.h>
#include <aws/datapipeline/model/ReportTaskProgressResult.h>
#include <aws/datapipeline/model/ReportTaskRunnerHeartbeatResult.h>
#include <aws/datapipeline/model/SetTaskStatusResult.h>
#include <aws/datapipeline/model/ValidatePipelineDefinitionResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in DataPipelineClient header */

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

  namespace DataPipeline
  {
    using DataPipelineClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using DataPipelineEndpointProviderBase = Aws::DataPipeline::Endpoint::DataPipelineEndpointProviderBase;
    using DataPipelineEndpointProvider = Aws::DataPipeline::Endpoint::DataPipelineEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in DataPipelineClient header */
      class ActivatePipelineRequest;
      class AddTagsRequest;
      class CreatePipelineRequest;
      class DeactivatePipelineRequest;
      class DeletePipelineRequest;
      class DescribeObjectsRequest;
      class DescribePipelinesRequest;
      class EvaluateExpressionRequest;
      class GetPipelineDefinitionRequest;
      class ListPipelinesRequest;
      class PollForTaskRequest;
      class PutPipelineDefinitionRequest;
      class QueryObjectsRequest;
      class RemoveTagsRequest;
      class ReportTaskProgressRequest;
      class ReportTaskRunnerHeartbeatRequest;
      class SetStatusRequest;
      class SetTaskStatusRequest;
      class ValidatePipelineDefinitionRequest;
      /* End of service model forward declarations required in DataPipelineClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<ActivatePipelineResult, DataPipelineError> ActivatePipelineOutcome;
      typedef Aws::Utils::Outcome<AddTagsResult, DataPipelineError> AddTagsOutcome;
      typedef Aws::Utils::Outcome<CreatePipelineResult, DataPipelineError> CreatePipelineOutcome;
      typedef Aws::Utils::Outcome<DeactivatePipelineResult, DataPipelineError> DeactivatePipelineOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, DataPipelineError> DeletePipelineOutcome;
      typedef Aws::Utils::Outcome<DescribeObjectsResult, DataPipelineError> DescribeObjectsOutcome;
      typedef Aws::Utils::Outcome<DescribePipelinesResult, DataPipelineError> DescribePipelinesOutcome;
      typedef Aws::Utils::Outcome<EvaluateExpressionResult, DataPipelineError> EvaluateExpressionOutcome;
      typedef Aws::Utils::Outcome<GetPipelineDefinitionResult, DataPipelineError> GetPipelineDefinitionOutcome;
      typedef Aws::Utils::Outcome<ListPipelinesResult, DataPipelineError> ListPipelinesOutcome;
      typedef Aws::Utils::Outcome<PollForTaskResult, DataPipelineError> PollForTaskOutcome;
      typedef Aws::Utils::Outcome<PutPipelineDefinitionResult, DataPipelineError> PutPipelineDefinitionOutcome;
      typedef Aws::Utils::Outcome<QueryObjectsResult, DataPipelineError> QueryObjectsOutcome;
      typedef Aws::Utils::Outcome<RemoveTagsResult, DataPipelineError> RemoveTagsOutcome;
      typedef Aws::Utils::Outcome<ReportTaskProgressResult, DataPipelineError> ReportTaskProgressOutcome;
      typedef Aws::Utils::Outcome<ReportTaskRunnerHeartbeatResult, DataPipelineError> ReportTaskRunnerHeartbeatOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, DataPipelineError> SetStatusOutcome;
      typedef Aws::Utils::Outcome<SetTaskStatusResult, DataPipelineError> SetTaskStatusOutcome;
      typedef Aws::Utils::Outcome<ValidatePipelineDefinitionResult, DataPipelineError> ValidatePipelineDefinitionOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<ActivatePipelineOutcome> ActivatePipelineOutcomeCallable;
      typedef std::future<AddTagsOutcome> AddTagsOutcomeCallable;
      typedef std::future<CreatePipelineOutcome> CreatePipelineOutcomeCallable;
      typedef std::future<DeactivatePipelineOutcome> DeactivatePipelineOutcomeCallable;
      typedef std::future<DeletePipelineOutcome> DeletePipelineOutcomeCallable;
      typedef std::future<DescribeObjectsOutcome> DescribeObjectsOutcomeCallable;
      typedef std::future<DescribePipelinesOutcome> DescribePipelinesOutcomeCallable;
      typedef std::future<EvaluateExpressionOutcome> EvaluateExpressionOutcomeCallable;
      typedef std::future<GetPipelineDefinitionOutcome> GetPipelineDefinitionOutcomeCallable;
      typedef std::future<ListPipelinesOutcome> ListPipelinesOutcomeCallable;
      typedef std::future<PollForTaskOutcome> PollForTaskOutcomeCallable;
      typedef std::future<PutPipelineDefinitionOutcome> PutPipelineDefinitionOutcomeCallable;
      typedef std::future<QueryObjectsOutcome> QueryObjectsOutcomeCallable;
      typedef std::future<RemoveTagsOutcome> RemoveTagsOutcomeCallable;
      typedef std::future<ReportTaskProgressOutcome> ReportTaskProgressOutcomeCallable;
      typedef std::future<ReportTaskRunnerHeartbeatOutcome> ReportTaskRunnerHeartbeatOutcomeCallable;
      typedef std::future<SetStatusOutcome> SetStatusOutcomeCallable;
      typedef std::future<SetTaskStatusOutcome> SetTaskStatusOutcomeCallable;
      typedef std::future<ValidatePipelineDefinitionOutcome> ValidatePipelineDefinitionOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class DataPipelineClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const DataPipelineClient*, const Model::ActivatePipelineRequest&, const Model::ActivatePipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ActivatePipelineResponseReceivedHandler;
    typedef std::function<void(const DataPipelineClient*, const Model::AddTagsRequest&, const Model::AddTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddTagsResponseReceivedHandler;
    typedef std::function<void(const DataPipelineClient*, const Model::CreatePipelineRequest&, const Model::CreatePipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePipelineResponseReceivedHandler;
    typedef std::function<void(const DataPipelineClient*, const Model::DeactivatePipelineRequest&, const Model::DeactivatePipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeactivatePipelineResponseReceivedHandler;
    typedef std::function<void(const DataPipelineClient*, const Model::DeletePipelineRequest&, const Model::DeletePipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePipelineResponseReceivedHandler;
    typedef std::function<void(const DataPipelineClient*, const Model::DescribeObjectsRequest&, const Model::DescribeObjectsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeObjectsResponseReceivedHandler;
    typedef std::function<void(const DataPipelineClient*, const Model::DescribePipelinesRequest&, const Model::DescribePipelinesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePipelinesResponseReceivedHandler;
    typedef std::function<void(const DataPipelineClient*, const Model::EvaluateExpressionRequest&, const Model::EvaluateExpressionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EvaluateExpressionResponseReceivedHandler;
    typedef std::function<void(const DataPipelineClient*, const Model::GetPipelineDefinitionRequest&, const Model::GetPipelineDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPipelineDefinitionResponseReceivedHandler;
    typedef std::function<void(const DataPipelineClient*, const Model::ListPipelinesRequest&, const Model::ListPipelinesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPipelinesResponseReceivedHandler;
    typedef std::function<void(const DataPipelineClient*, const Model::PollForTaskRequest&, const Model::PollForTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PollForTaskResponseReceivedHandler;
    typedef std::function<void(const DataPipelineClient*, const Model::PutPipelineDefinitionRequest&, const Model::PutPipelineDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutPipelineDefinitionResponseReceivedHandler;
    typedef std::function<void(const DataPipelineClient*, const Model::QueryObjectsRequest&, const Model::QueryObjectsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > QueryObjectsResponseReceivedHandler;
    typedef std::function<void(const DataPipelineClient*, const Model::RemoveTagsRequest&, const Model::RemoveTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveTagsResponseReceivedHandler;
    typedef std::function<void(const DataPipelineClient*, const Model::ReportTaskProgressRequest&, const Model::ReportTaskProgressOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ReportTaskProgressResponseReceivedHandler;
    typedef std::function<void(const DataPipelineClient*, const Model::ReportTaskRunnerHeartbeatRequest&, const Model::ReportTaskRunnerHeartbeatOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ReportTaskRunnerHeartbeatResponseReceivedHandler;
    typedef std::function<void(const DataPipelineClient*, const Model::SetStatusRequest&, const Model::SetStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetStatusResponseReceivedHandler;
    typedef std::function<void(const DataPipelineClient*, const Model::SetTaskStatusRequest&, const Model::SetTaskStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetTaskStatusResponseReceivedHandler;
    typedef std::function<void(const DataPipelineClient*, const Model::ValidatePipelineDefinitionRequest&, const Model::ValidatePipelineDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ValidatePipelineDefinitionResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace DataPipeline
} // namespace Aws
