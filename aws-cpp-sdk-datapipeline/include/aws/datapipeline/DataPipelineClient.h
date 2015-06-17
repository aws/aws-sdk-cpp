/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/datapipeline/DataPipeline_EXPORTS.h>
#include <aws/datapipeline/DataPipelineErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/Event.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
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
#include <aws/core/client/AsyncCallerContext.h>
#include <future>

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

namespace DataPipeline
{

namespace Model
{
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

  typedef Utils::Outcome<ActivatePipelineResult, Client::AWSError<DataPipelineErrors>> ActivatePipelineOutcome;
  typedef Utils::Outcome<AddTagsResult, Client::AWSError<DataPipelineErrors>> AddTagsOutcome;
  typedef Utils::Outcome<CreatePipelineResult, Client::AWSError<DataPipelineErrors>> CreatePipelineOutcome;
  typedef Utils::Outcome<DeactivatePipelineResult, Client::AWSError<DataPipelineErrors>> DeactivatePipelineOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<DataPipelineErrors>> DeletePipelineOutcome;
  typedef Utils::Outcome<DescribeObjectsResult, Client::AWSError<DataPipelineErrors>> DescribeObjectsOutcome;
  typedef Utils::Outcome<DescribePipelinesResult, Client::AWSError<DataPipelineErrors>> DescribePipelinesOutcome;
  typedef Utils::Outcome<EvaluateExpressionResult, Client::AWSError<DataPipelineErrors>> EvaluateExpressionOutcome;
  typedef Utils::Outcome<GetPipelineDefinitionResult, Client::AWSError<DataPipelineErrors>> GetPipelineDefinitionOutcome;
  typedef Utils::Outcome<ListPipelinesResult, Client::AWSError<DataPipelineErrors>> ListPipelinesOutcome;
  typedef Utils::Outcome<PollForTaskResult, Client::AWSError<DataPipelineErrors>> PollForTaskOutcome;
  typedef Utils::Outcome<PutPipelineDefinitionResult, Client::AWSError<DataPipelineErrors>> PutPipelineDefinitionOutcome;
  typedef Utils::Outcome<QueryObjectsResult, Client::AWSError<DataPipelineErrors>> QueryObjectsOutcome;
  typedef Utils::Outcome<RemoveTagsResult, Client::AWSError<DataPipelineErrors>> RemoveTagsOutcome;
  typedef Utils::Outcome<ReportTaskProgressResult, Client::AWSError<DataPipelineErrors>> ReportTaskProgressOutcome;
  typedef Utils::Outcome<ReportTaskRunnerHeartbeatResult, Client::AWSError<DataPipelineErrors>> ReportTaskRunnerHeartbeatOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<DataPipelineErrors>> SetStatusOutcome;
  typedef Utils::Outcome<SetTaskStatusResult, Client::AWSError<DataPipelineErrors>> SetTaskStatusOutcome;
  typedef Utils::Outcome<ValidatePipelineDefinitionResult, Client::AWSError<DataPipelineErrors>> ValidatePipelineDefinitionOutcome;

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
} // namespace Model

    class DataPipelineClient;

  typedef Aws::Utils::Event<DataPipelineClient, const Model::ActivatePipelineRequest&, const Model::ActivatePipelineOutcome&, const Aws::Client::AsyncCallerContext*> ActivatePipelineOutcomeReceivedEvent;
  typedef Aws::Utils::Event<DataPipelineClient, const Model::AddTagsRequest&, const Model::AddTagsOutcome&, const Aws::Client::AsyncCallerContext*> AddTagsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<DataPipelineClient, const Model::CreatePipelineRequest&, const Model::CreatePipelineOutcome&, const Aws::Client::AsyncCallerContext*> CreatePipelineOutcomeReceivedEvent;
  typedef Aws::Utils::Event<DataPipelineClient, const Model::DeactivatePipelineRequest&, const Model::DeactivatePipelineOutcome&, const Aws::Client::AsyncCallerContext*> DeactivatePipelineOutcomeReceivedEvent;
  typedef Aws::Utils::Event<DataPipelineClient, const Model::DeletePipelineRequest&, const Model::DeletePipelineOutcome&, const Aws::Client::AsyncCallerContext*> DeletePipelineOutcomeReceivedEvent;
  typedef Aws::Utils::Event<DataPipelineClient, const Model::DescribeObjectsRequest&, const Model::DescribeObjectsOutcome&, const Aws::Client::AsyncCallerContext*> DescribeObjectsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<DataPipelineClient, const Model::DescribePipelinesRequest&, const Model::DescribePipelinesOutcome&, const Aws::Client::AsyncCallerContext*> DescribePipelinesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<DataPipelineClient, const Model::EvaluateExpressionRequest&, const Model::EvaluateExpressionOutcome&, const Aws::Client::AsyncCallerContext*> EvaluateExpressionOutcomeReceivedEvent;
  typedef Aws::Utils::Event<DataPipelineClient, const Model::GetPipelineDefinitionRequest&, const Model::GetPipelineDefinitionOutcome&, const Aws::Client::AsyncCallerContext*> GetPipelineDefinitionOutcomeReceivedEvent;
  typedef Aws::Utils::Event<DataPipelineClient, const Model::ListPipelinesRequest&, const Model::ListPipelinesOutcome&, const Aws::Client::AsyncCallerContext*> ListPipelinesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<DataPipelineClient, const Model::PollForTaskRequest&, const Model::PollForTaskOutcome&, const Aws::Client::AsyncCallerContext*> PollForTaskOutcomeReceivedEvent;
  typedef Aws::Utils::Event<DataPipelineClient, const Model::PutPipelineDefinitionRequest&, const Model::PutPipelineDefinitionOutcome&, const Aws::Client::AsyncCallerContext*> PutPipelineDefinitionOutcomeReceivedEvent;
  typedef Aws::Utils::Event<DataPipelineClient, const Model::QueryObjectsRequest&, const Model::QueryObjectsOutcome&, const Aws::Client::AsyncCallerContext*> QueryObjectsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<DataPipelineClient, const Model::RemoveTagsRequest&, const Model::RemoveTagsOutcome&, const Aws::Client::AsyncCallerContext*> RemoveTagsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<DataPipelineClient, const Model::ReportTaskProgressRequest&, const Model::ReportTaskProgressOutcome&, const Aws::Client::AsyncCallerContext*> ReportTaskProgressOutcomeReceivedEvent;
  typedef Aws::Utils::Event<DataPipelineClient, const Model::ReportTaskRunnerHeartbeatRequest&, const Model::ReportTaskRunnerHeartbeatOutcome&, const Aws::Client::AsyncCallerContext*> ReportTaskRunnerHeartbeatOutcomeReceivedEvent;
  typedef Aws::Utils::Event<DataPipelineClient, const Model::SetStatusRequest&, const Model::SetStatusOutcome&, const Aws::Client::AsyncCallerContext*> SetStatusOutcomeReceivedEvent;
  typedef Aws::Utils::Event<DataPipelineClient, const Model::SetTaskStatusRequest&, const Model::SetTaskStatusOutcome&, const Aws::Client::AsyncCallerContext*> SetTaskStatusOutcomeReceivedEvent;
  typedef Aws::Utils::Event<DataPipelineClient, const Model::ValidatePipelineDefinitionRequest&, const Model::ValidatePipelineDefinitionOutcome&, const Aws::Client::AsyncCallerContext*> ValidatePipelineDefinitionOutcomeReceivedEvent;

  /*
    <p>AWS Data Pipeline configures and manages a data-driven workflow called a pipeline. AWS Data Pipeline handles the details of scheduling and ensuring that data dependencies are met so that your application can focus on processing the data.</p> <p>AWS Data Pipeline provides a JAR implementation of a task runner called AWS Data Pipeline Task Runner. AWS Data Pipeline Task Runner provides logic for common data management scenarios, such as performing database queries and running data analysis using Amazon Elastic MapReduce (Amazon EMR). You can use AWS Data Pipeline Task Runner as your task runner, or you can write your own task runner to provide custom data management.</p> <p>AWS Data Pipeline implements two main sets of functionality. Use the first set to create a pipeline and define data sources, schedules, dependencies, and the transforms to be performed on the data. Use the second set in your task runner application to receive the next task ready for processing. The logic for performing the task, such as querying the data, running data analysis, or converting the data from one format to another, is contained within the task runner. The task runner performs the task assigned to it by the web service, reporting progress to the web service as it does so. When the task is done, the task runner reports the final success or failure of the task to the web service.</p>
  */
  class AWS_DATAPIPELINE_API DataPipelineClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

     /**
      * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
      * is not specified, it will be initialized to default values.
      */
      DataPipelineClient(const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

     /**
      * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
      * is not specified, it will be initialized to default values.
      */
      DataPipelineClient(const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

     /**
      * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
      * the default http client factory will be used
      */
      DataPipelineClient(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
        const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration(),
        const std::shared_ptr<Http::HttpClientFactory const>& httpClientFactory = nullptr);

      ~DataPipelineClient();

     /*
       <p>Validates the specified pipeline and starts processing pipeline tasks. If the pipeline does not pass validation, activation fails.</p> <p>If you need to pause the pipeline to investigate an issue with a component, such as a data source or script, call <a>DeactivatePipeline</a>.</p> <p>To activate a finished pipeline, modify the end date for the pipeline and then activate it.</p>
     */
     Model::ActivatePipelineOutcome ActivatePipeline(const Model::ActivatePipelineRequest& request) const;

     /*
       <p>Validates the specified pipeline and starts processing pipeline tasks. If the pipeline does not pass validation, activation fails.</p> <p>If you need to pause the pipeline to investigate an issue with a component, such as a data source or script, call <a>DeactivatePipeline</a>.</p> <p>To activate a finished pipeline, modify the end date for the pipeline and then activate it.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ActivatePipelineOutcomeCallable ActivatePipelineCallable(const Model::ActivatePipelineRequest& request) const;

     /*
       <p>Validates the specified pipeline and starts processing pipeline tasks. If the pipeline does not pass validation, activation fails.</p> <p>If you need to pause the pipeline to investigate an issue with a component, such as a data source or script, call <a>DeactivatePipeline</a>.</p> <p>To activate a finished pipeline, modify the end date for the pipeline and then activate it.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ActivatePipelineAsync(const Model::ActivatePipelineRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Adds or modifies tags for the specified pipeline.</p>
     */
     Model::AddTagsOutcome AddTags(const Model::AddTagsRequest& request) const;

     /*
       <p>Adds or modifies tags for the specified pipeline.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::AddTagsOutcomeCallable AddTagsCallable(const Model::AddTagsRequest& request) const;

     /*
       <p>Adds or modifies tags for the specified pipeline.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void AddTagsAsync(const Model::AddTagsRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Creates a new, empty pipeline. Use <a>PutPipelineDefinition</a> to populate the pipeline.</p>
     */
     Model::CreatePipelineOutcome CreatePipeline(const Model::CreatePipelineRequest& request) const;

     /*
       <p>Creates a new, empty pipeline. Use <a>PutPipelineDefinition</a> to populate the pipeline.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CreatePipelineOutcomeCallable CreatePipelineCallable(const Model::CreatePipelineRequest& request) const;

     /*
       <p>Creates a new, empty pipeline. Use <a>PutPipelineDefinition</a> to populate the pipeline.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CreatePipelineAsync(const Model::CreatePipelineRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Deactivates the specified running pipeline. The pipeline is set to the <code>DEACTIVATING</code> state until the deactivation process completes.</p> <p>To resume a deactivated pipeline, use <a>ActivatePipeline</a>. By default, the pipeline resumes from the last completed execution. Optionally, you can specify the date and time to resume the pipeline.</p>
     */
     Model::DeactivatePipelineOutcome DeactivatePipeline(const Model::DeactivatePipelineRequest& request) const;

     /*
       <p>Deactivates the specified running pipeline. The pipeline is set to the <code>DEACTIVATING</code> state until the deactivation process completes.</p> <p>To resume a deactivated pipeline, use <a>ActivatePipeline</a>. By default, the pipeline resumes from the last completed execution. Optionally, you can specify the date and time to resume the pipeline.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeactivatePipelineOutcomeCallable DeactivatePipelineCallable(const Model::DeactivatePipelineRequest& request) const;

     /*
       <p>Deactivates the specified running pipeline. The pipeline is set to the <code>DEACTIVATING</code> state until the deactivation process completes.</p> <p>To resume a deactivated pipeline, use <a>ActivatePipeline</a>. By default, the pipeline resumes from the last completed execution. Optionally, you can specify the date and time to resume the pipeline.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeactivatePipelineAsync(const Model::DeactivatePipelineRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Deletes a pipeline, its pipeline definition, and its run history. AWS Data Pipeline attempts to cancel instances associated with the pipeline that are currently being processed by task runners.</p> <p>Deleting a pipeline cannot be undone. You cannot query or restore a deleted pipeline. To temporarily pause a pipeline instead of deleting it, call <a>SetStatus</a> with the status set to <code>PAUSE</code> on individual components. Components that are paused by <a>SetStatus</a> can be resumed.</p>
     */
     Model::DeletePipelineOutcome DeletePipeline(const Model::DeletePipelineRequest& request) const;

     /*
       <p>Deletes a pipeline, its pipeline definition, and its run history. AWS Data Pipeline attempts to cancel instances associated with the pipeline that are currently being processed by task runners.</p> <p>Deleting a pipeline cannot be undone. You cannot query or restore a deleted pipeline. To temporarily pause a pipeline instead of deleting it, call <a>SetStatus</a> with the status set to <code>PAUSE</code> on individual components. Components that are paused by <a>SetStatus</a> can be resumed.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeletePipelineOutcomeCallable DeletePipelineCallable(const Model::DeletePipelineRequest& request) const;

     /*
       <p>Deletes a pipeline, its pipeline definition, and its run history. AWS Data Pipeline attempts to cancel instances associated with the pipeline that are currently being processed by task runners.</p> <p>Deleting a pipeline cannot be undone. You cannot query or restore a deleted pipeline. To temporarily pause a pipeline instead of deleting it, call <a>SetStatus</a> with the status set to <code>PAUSE</code> on individual components. Components that are paused by <a>SetStatus</a> can be resumed.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeletePipelineAsync(const Model::DeletePipelineRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Gets the object definitions for a set of objects associated with the pipeline. Object definitions are composed of a set of fields that define the properties of the object.</p>
     */
     Model::DescribeObjectsOutcome DescribeObjects(const Model::DescribeObjectsRequest& request) const;

     /*
       <p>Gets the object definitions for a set of objects associated with the pipeline. Object definitions are composed of a set of fields that define the properties of the object.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeObjectsOutcomeCallable DescribeObjectsCallable(const Model::DescribeObjectsRequest& request) const;

     /*
       <p>Gets the object definitions for a set of objects associated with the pipeline. Object definitions are composed of a set of fields that define the properties of the object.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeObjectsAsync(const Model::DescribeObjectsRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Retrieves metadata about one or more pipelines. The information retrieved includes the name of the pipeline, the pipeline identifier, its current state, and the user account that owns the pipeline. Using account credentials, you can retrieve metadata about pipelines that you or your IAM users have created. If you are using an IAM user account, you can retrieve metadata about only those pipelines for which you have read permissions.</p> <p>To retrieve the full pipeline definition instead of metadata about the pipeline, call <a>GetPipelineDefinition</a>.</p>
     */
     Model::DescribePipelinesOutcome DescribePipelines(const Model::DescribePipelinesRequest& request) const;

     /*
       <p>Retrieves metadata about one or more pipelines. The information retrieved includes the name of the pipeline, the pipeline identifier, its current state, and the user account that owns the pipeline. Using account credentials, you can retrieve metadata about pipelines that you or your IAM users have created. If you are using an IAM user account, you can retrieve metadata about only those pipelines for which you have read permissions.</p> <p>To retrieve the full pipeline definition instead of metadata about the pipeline, call <a>GetPipelineDefinition</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribePipelinesOutcomeCallable DescribePipelinesCallable(const Model::DescribePipelinesRequest& request) const;

     /*
       <p>Retrieves metadata about one or more pipelines. The information retrieved includes the name of the pipeline, the pipeline identifier, its current state, and the user account that owns the pipeline. Using account credentials, you can retrieve metadata about pipelines that you or your IAM users have created. If you are using an IAM user account, you can retrieve metadata about only those pipelines for which you have read permissions.</p> <p>To retrieve the full pipeline definition instead of metadata about the pipeline, call <a>GetPipelineDefinition</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribePipelinesAsync(const Model::DescribePipelinesRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Task runners call <code>EvaluateExpression</code> to evaluate a string in the context of the specified object. For example, a task runner can evaluate SQL queries stored in Amazon S3.</p>
     */
     Model::EvaluateExpressionOutcome EvaluateExpression(const Model::EvaluateExpressionRequest& request) const;

     /*
       <p>Task runners call <code>EvaluateExpression</code> to evaluate a string in the context of the specified object. For example, a task runner can evaluate SQL queries stored in Amazon S3.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::EvaluateExpressionOutcomeCallable EvaluateExpressionCallable(const Model::EvaluateExpressionRequest& request) const;

     /*
       <p>Task runners call <code>EvaluateExpression</code> to evaluate a string in the context of the specified object. For example, a task runner can evaluate SQL queries stored in Amazon S3.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void EvaluateExpressionAsync(const Model::EvaluateExpressionRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Gets the definition of the specified pipeline. You can call <code>GetPipelineDefinition</code> to retrieve the pipeline definition that you provided using <a>PutPipelineDefinition</a>.</p>
     */
     Model::GetPipelineDefinitionOutcome GetPipelineDefinition(const Model::GetPipelineDefinitionRequest& request) const;

     /*
       <p>Gets the definition of the specified pipeline. You can call <code>GetPipelineDefinition</code> to retrieve the pipeline definition that you provided using <a>PutPipelineDefinition</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::GetPipelineDefinitionOutcomeCallable GetPipelineDefinitionCallable(const Model::GetPipelineDefinitionRequest& request) const;

     /*
       <p>Gets the definition of the specified pipeline. You can call <code>GetPipelineDefinition</code> to retrieve the pipeline definition that you provided using <a>PutPipelineDefinition</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void GetPipelineDefinitionAsync(const Model::GetPipelineDefinitionRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Lists the pipeline identifiers for all active pipelines that you have permission to access.</p>
     */
     Model::ListPipelinesOutcome ListPipelines(const Model::ListPipelinesRequest& request) const;

     /*
       <p>Lists the pipeline identifiers for all active pipelines that you have permission to access.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ListPipelinesOutcomeCallable ListPipelinesCallable(const Model::ListPipelinesRequest& request) const;

     /*
       <p>Lists the pipeline identifiers for all active pipelines that you have permission to access.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ListPipelinesAsync(const Model::ListPipelinesRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Task runners call <code>PollForTask</code> to receive a task to perform from AWS Data Pipeline. The task runner specifies which tasks it can perform by setting a value for the <code>workerGroup</code> parameter. The task returned can come from any of the pipelines that match the <code>workerGroup</code> value passed in by the task runner and that was launched using the IAM user credentials specified by the task runner.</p> <p>If tasks are ready in the work queue, <code>PollForTask</code> returns a response immediately. If no tasks are available in the queue, <code>PollForTask</code> uses long-polling and holds on to a poll connection for up to a 90 seconds, during which time the first newly scheduled task is handed to the task runner. To accomodate this, set the socket timeout in your task runner to 90 seconds. The task runner should not call <code>PollForTask</code> again on the same <code>workerGroup</code> until it receives a response, and this can take up to 90 seconds. </p>
     */
     Model::PollForTaskOutcome PollForTask(const Model::PollForTaskRequest& request) const;

     /*
       <p>Task runners call <code>PollForTask</code> to receive a task to perform from AWS Data Pipeline. The task runner specifies which tasks it can perform by setting a value for the <code>workerGroup</code> parameter. The task returned can come from any of the pipelines that match the <code>workerGroup</code> value passed in by the task runner and that was launched using the IAM user credentials specified by the task runner.</p> <p>If tasks are ready in the work queue, <code>PollForTask</code> returns a response immediately. If no tasks are available in the queue, <code>PollForTask</code> uses long-polling and holds on to a poll connection for up to a 90 seconds, during which time the first newly scheduled task is handed to the task runner. To accomodate this, set the socket timeout in your task runner to 90 seconds. The task runner should not call <code>PollForTask</code> again on the same <code>workerGroup</code> until it receives a response, and this can take up to 90 seconds. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::PollForTaskOutcomeCallable PollForTaskCallable(const Model::PollForTaskRequest& request) const;

     /*
       <p>Task runners call <code>PollForTask</code> to receive a task to perform from AWS Data Pipeline. The task runner specifies which tasks it can perform by setting a value for the <code>workerGroup</code> parameter. The task returned can come from any of the pipelines that match the <code>workerGroup</code> value passed in by the task runner and that was launched using the IAM user credentials specified by the task runner.</p> <p>If tasks are ready in the work queue, <code>PollForTask</code> returns a response immediately. If no tasks are available in the queue, <code>PollForTask</code> uses long-polling and holds on to a poll connection for up to a 90 seconds, during which time the first newly scheduled task is handed to the task runner. To accomodate this, set the socket timeout in your task runner to 90 seconds. The task runner should not call <code>PollForTask</code> again on the same <code>workerGroup</code> until it receives a response, and this can take up to 90 seconds. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void PollForTaskAsync(const Model::PollForTaskRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Adds tasks, schedules, and preconditions to the specified pipeline. You can use <code>PutPipelineDefinition</code> to populate a new pipeline.</p> <p> <code>PutPipelineDefinition</code> also validates the configuration as it adds it to the pipeline. Changes to the pipeline are saved unless one of the following three validation errors exists in the pipeline. </p> <ol> <li>An object is missing a name or identifier field.</li> <li>A string or reference field is empty.</li> <li>The number of objects in the pipeline exceeds the maximum allowed objects.</li> <li>The pipeline is in a FINISHED state.</li> </ol> <p> Pipeline object definitions are passed to the <code>PutPipelineDefinition</code> action and returned by the <a>GetPipelineDefinition</a> action. </p>
     */
     Model::PutPipelineDefinitionOutcome PutPipelineDefinition(const Model::PutPipelineDefinitionRequest& request) const;

     /*
       <p>Adds tasks, schedules, and preconditions to the specified pipeline. You can use <code>PutPipelineDefinition</code> to populate a new pipeline.</p> <p> <code>PutPipelineDefinition</code> also validates the configuration as it adds it to the pipeline. Changes to the pipeline are saved unless one of the following three validation errors exists in the pipeline. </p> <ol> <li>An object is missing a name or identifier field.</li> <li>A string or reference field is empty.</li> <li>The number of objects in the pipeline exceeds the maximum allowed objects.</li> <li>The pipeline is in a FINISHED state.</li> </ol> <p> Pipeline object definitions are passed to the <code>PutPipelineDefinition</code> action and returned by the <a>GetPipelineDefinition</a> action. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::PutPipelineDefinitionOutcomeCallable PutPipelineDefinitionCallable(const Model::PutPipelineDefinitionRequest& request) const;

     /*
       <p>Adds tasks, schedules, and preconditions to the specified pipeline. You can use <code>PutPipelineDefinition</code> to populate a new pipeline.</p> <p> <code>PutPipelineDefinition</code> also validates the configuration as it adds it to the pipeline. Changes to the pipeline are saved unless one of the following three validation errors exists in the pipeline. </p> <ol> <li>An object is missing a name or identifier field.</li> <li>A string or reference field is empty.</li> <li>The number of objects in the pipeline exceeds the maximum allowed objects.</li> <li>The pipeline is in a FINISHED state.</li> </ol> <p> Pipeline object definitions are passed to the <code>PutPipelineDefinition</code> action and returned by the <a>GetPipelineDefinition</a> action. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void PutPipelineDefinitionAsync(const Model::PutPipelineDefinitionRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Queries the specified pipeline for the names of objects that match the specified set of conditions.</p>
     */
     Model::QueryObjectsOutcome QueryObjects(const Model::QueryObjectsRequest& request) const;

     /*
       <p>Queries the specified pipeline for the names of objects that match the specified set of conditions.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::QueryObjectsOutcomeCallable QueryObjectsCallable(const Model::QueryObjectsRequest& request) const;

     /*
       <p>Queries the specified pipeline for the names of objects that match the specified set of conditions.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void QueryObjectsAsync(const Model::QueryObjectsRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Removes existing tags from the specified pipeline.</p>
     */
     Model::RemoveTagsOutcome RemoveTags(const Model::RemoveTagsRequest& request) const;

     /*
       <p>Removes existing tags from the specified pipeline.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::RemoveTagsOutcomeCallable RemoveTagsCallable(const Model::RemoveTagsRequest& request) const;

     /*
       <p>Removes existing tags from the specified pipeline.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void RemoveTagsAsync(const Model::RemoveTagsRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Task runners call <code>ReportTaskProgress</code> when assigned a task to acknowledge that it has the task. If the web service does not receive this acknowledgement within 2 minutes, it assigns the task in a subsequent <a>PollForTask</a> call. After this initial acknowledgement, the task runner only needs to report progress every 15 minutes to maintain its ownership of the task. You can change this reporting time from 15 minutes by specifying a <code>reportProgressTimeout</code> field in your pipeline.</p> <p>If a task runner does not report its status after 5 minutes, AWS Data Pipeline assumes that the task runner is unable to process the task and reassigns the task in a subsequent response to <a>PollForTask</a>. Task runners should call <code>ReportTaskProgress</code> every 60 seconds.</p>
     */
     Model::ReportTaskProgressOutcome ReportTaskProgress(const Model::ReportTaskProgressRequest& request) const;

     /*
       <p>Task runners call <code>ReportTaskProgress</code> when assigned a task to acknowledge that it has the task. If the web service does not receive this acknowledgement within 2 minutes, it assigns the task in a subsequent <a>PollForTask</a> call. After this initial acknowledgement, the task runner only needs to report progress every 15 minutes to maintain its ownership of the task. You can change this reporting time from 15 minutes by specifying a <code>reportProgressTimeout</code> field in your pipeline.</p> <p>If a task runner does not report its status after 5 minutes, AWS Data Pipeline assumes that the task runner is unable to process the task and reassigns the task in a subsequent response to <a>PollForTask</a>. Task runners should call <code>ReportTaskProgress</code> every 60 seconds.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ReportTaskProgressOutcomeCallable ReportTaskProgressCallable(const Model::ReportTaskProgressRequest& request) const;

     /*
       <p>Task runners call <code>ReportTaskProgress</code> when assigned a task to acknowledge that it has the task. If the web service does not receive this acknowledgement within 2 minutes, it assigns the task in a subsequent <a>PollForTask</a> call. After this initial acknowledgement, the task runner only needs to report progress every 15 minutes to maintain its ownership of the task. You can change this reporting time from 15 minutes by specifying a <code>reportProgressTimeout</code> field in your pipeline.</p> <p>If a task runner does not report its status after 5 minutes, AWS Data Pipeline assumes that the task runner is unable to process the task and reassigns the task in a subsequent response to <a>PollForTask</a>. Task runners should call <code>ReportTaskProgress</code> every 60 seconds.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ReportTaskProgressAsync(const Model::ReportTaskProgressRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Task runners call <code>ReportTaskRunnerHeartbeat</code> every 15 minutes to indicate that they are operational. If the AWS Data Pipeline Task Runner is launched on a resource managed by AWS Data Pipeline, the web service can use this call to detect when the task runner application has failed and restart a new instance.</p>
     */
     Model::ReportTaskRunnerHeartbeatOutcome ReportTaskRunnerHeartbeat(const Model::ReportTaskRunnerHeartbeatRequest& request) const;

     /*
       <p>Task runners call <code>ReportTaskRunnerHeartbeat</code> every 15 minutes to indicate that they are operational. If the AWS Data Pipeline Task Runner is launched on a resource managed by AWS Data Pipeline, the web service can use this call to detect when the task runner application has failed and restart a new instance.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ReportTaskRunnerHeartbeatOutcomeCallable ReportTaskRunnerHeartbeatCallable(const Model::ReportTaskRunnerHeartbeatRequest& request) const;

     /*
       <p>Task runners call <code>ReportTaskRunnerHeartbeat</code> every 15 minutes to indicate that they are operational. If the AWS Data Pipeline Task Runner is launched on a resource managed by AWS Data Pipeline, the web service can use this call to detect when the task runner application has failed and restart a new instance.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ReportTaskRunnerHeartbeatAsync(const Model::ReportTaskRunnerHeartbeatRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Requests that the status of the specified physical or logical pipeline objects be updated in the specified pipeline. This update might not occur immediately, but is eventually consistent. The status that can be set depends on the type of object (for example, DataNode or Activity). You cannot perform this operation on <code>FINISHED</code> pipelines and attempting to do so returns <code>InvalidRequestException</code>.</p>
     */
     Model::SetStatusOutcome SetStatus(const Model::SetStatusRequest& request) const;

     /*
       <p>Requests that the status of the specified physical or logical pipeline objects be updated in the specified pipeline. This update might not occur immediately, but is eventually consistent. The status that can be set depends on the type of object (for example, DataNode or Activity). You cannot perform this operation on <code>FINISHED</code> pipelines and attempting to do so returns <code>InvalidRequestException</code>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::SetStatusOutcomeCallable SetStatusCallable(const Model::SetStatusRequest& request) const;

     /*
       <p>Requests that the status of the specified physical or logical pipeline objects be updated in the specified pipeline. This update might not occur immediately, but is eventually consistent. The status that can be set depends on the type of object (for example, DataNode or Activity). You cannot perform this operation on <code>FINISHED</code> pipelines and attempting to do so returns <code>InvalidRequestException</code>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void SetStatusAsync(const Model::SetStatusRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Task runners call <code>SetTaskStatus</code> to notify AWS Data Pipeline that a task is completed and provide information about the final status. A task runner makes this call regardless of whether the task was sucessful. A task runner does not need to call <code>SetTaskStatus</code> for tasks that are canceled by the web service during a call to <a>ReportTaskProgress</a>.</p>
     */
     Model::SetTaskStatusOutcome SetTaskStatus(const Model::SetTaskStatusRequest& request) const;

     /*
       <p>Task runners call <code>SetTaskStatus</code> to notify AWS Data Pipeline that a task is completed and provide information about the final status. A task runner makes this call regardless of whether the task was sucessful. A task runner does not need to call <code>SetTaskStatus</code> for tasks that are canceled by the web service during a call to <a>ReportTaskProgress</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::SetTaskStatusOutcomeCallable SetTaskStatusCallable(const Model::SetTaskStatusRequest& request) const;

     /*
       <p>Task runners call <code>SetTaskStatus</code> to notify AWS Data Pipeline that a task is completed and provide information about the final status. A task runner makes this call regardless of whether the task was sucessful. A task runner does not need to call <code>SetTaskStatus</code> for tasks that are canceled by the web service during a call to <a>ReportTaskProgress</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void SetTaskStatusAsync(const Model::SetTaskStatusRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Validates the specified pipeline definition to ensure that it is well formed and can be run without error.</p>
     */
     Model::ValidatePipelineDefinitionOutcome ValidatePipelineDefinition(const Model::ValidatePipelineDefinitionRequest& request) const;

     /*
       <p>Validates the specified pipeline definition to ensure that it is well formed and can be run without error.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ValidatePipelineDefinitionOutcomeCallable ValidatePipelineDefinitionCallable(const Model::ValidatePipelineDefinitionRequest& request) const;

     /*
       <p>Validates the specified pipeline definition to ensure that it is well formed and can be run without error.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ValidatePipelineDefinitionAsync(const Model::ValidatePipelineDefinitionRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

   /**
    * Adds an event handler for ActivatePipelineAsync to call upon completion to the handler chain. You need to call this to
    * use ActivatePipelineAsync.
    */
    inline void RegisterActivatePipelineOutcomeReceivedHandler(const ActivatePipelineOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onActivatePipelineOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ActivatePipeline.
    */
    inline void ClearAllActivatePipelineOutcomeReceivedHandlers()
    {
      m_onActivatePipelineOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for AddTagsAsync to call upon completion to the handler chain. You need to call this to
    * use AddTagsAsync.
    */
    inline void RegisterAddTagsOutcomeReceivedHandler(const AddTagsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onAddTagsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for AddTags.
    */
    inline void ClearAllAddTagsOutcomeReceivedHandlers()
    {
      m_onAddTagsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CreatePipelineAsync to call upon completion to the handler chain. You need to call this to
    * use CreatePipelineAsync.
    */
    inline void RegisterCreatePipelineOutcomeReceivedHandler(const CreatePipelineOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCreatePipelineOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CreatePipeline.
    */
    inline void ClearAllCreatePipelineOutcomeReceivedHandlers()
    {
      m_onCreatePipelineOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeactivatePipelineAsync to call upon completion to the handler chain. You need to call this to
    * use DeactivatePipelineAsync.
    */
    inline void RegisterDeactivatePipelineOutcomeReceivedHandler(const DeactivatePipelineOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeactivatePipelineOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeactivatePipeline.
    */
    inline void ClearAllDeactivatePipelineOutcomeReceivedHandlers()
    {
      m_onDeactivatePipelineOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeletePipelineAsync to call upon completion to the handler chain. You need to call this to
    * use DeletePipelineAsync.
    */
    inline void RegisterDeletePipelineOutcomeReceivedHandler(const DeletePipelineOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeletePipelineOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeletePipeline.
    */
    inline void ClearAllDeletePipelineOutcomeReceivedHandlers()
    {
      m_onDeletePipelineOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeObjectsAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeObjectsAsync.
    */
    inline void RegisterDescribeObjectsOutcomeReceivedHandler(const DescribeObjectsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeObjectsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeObjects.
    */
    inline void ClearAllDescribeObjectsOutcomeReceivedHandlers()
    {
      m_onDescribeObjectsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribePipelinesAsync to call upon completion to the handler chain. You need to call this to
    * use DescribePipelinesAsync.
    */
    inline void RegisterDescribePipelinesOutcomeReceivedHandler(const DescribePipelinesOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribePipelinesOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribePipelines.
    */
    inline void ClearAllDescribePipelinesOutcomeReceivedHandlers()
    {
      m_onDescribePipelinesOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for EvaluateExpressionAsync to call upon completion to the handler chain. You need to call this to
    * use EvaluateExpressionAsync.
    */
    inline void RegisterEvaluateExpressionOutcomeReceivedHandler(const EvaluateExpressionOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onEvaluateExpressionOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for EvaluateExpression.
    */
    inline void ClearAllEvaluateExpressionOutcomeReceivedHandlers()
    {
      m_onEvaluateExpressionOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for GetPipelineDefinitionAsync to call upon completion to the handler chain. You need to call this to
    * use GetPipelineDefinitionAsync.
    */
    inline void RegisterGetPipelineDefinitionOutcomeReceivedHandler(const GetPipelineDefinitionOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onGetPipelineDefinitionOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for GetPipelineDefinition.
    */
    inline void ClearAllGetPipelineDefinitionOutcomeReceivedHandlers()
    {
      m_onGetPipelineDefinitionOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ListPipelinesAsync to call upon completion to the handler chain. You need to call this to
    * use ListPipelinesAsync.
    */
    inline void RegisterListPipelinesOutcomeReceivedHandler(const ListPipelinesOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onListPipelinesOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ListPipelines.
    */
    inline void ClearAllListPipelinesOutcomeReceivedHandlers()
    {
      m_onListPipelinesOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for PollForTaskAsync to call upon completion to the handler chain. You need to call this to
    * use PollForTaskAsync.
    */
    inline void RegisterPollForTaskOutcomeReceivedHandler(const PollForTaskOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onPollForTaskOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for PollForTask.
    */
    inline void ClearAllPollForTaskOutcomeReceivedHandlers()
    {
      m_onPollForTaskOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for PutPipelineDefinitionAsync to call upon completion to the handler chain. You need to call this to
    * use PutPipelineDefinitionAsync.
    */
    inline void RegisterPutPipelineDefinitionOutcomeReceivedHandler(const PutPipelineDefinitionOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onPutPipelineDefinitionOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for PutPipelineDefinition.
    */
    inline void ClearAllPutPipelineDefinitionOutcomeReceivedHandlers()
    {
      m_onPutPipelineDefinitionOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for QueryObjectsAsync to call upon completion to the handler chain. You need to call this to
    * use QueryObjectsAsync.
    */
    inline void RegisterQueryObjectsOutcomeReceivedHandler(const QueryObjectsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onQueryObjectsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for QueryObjects.
    */
    inline void ClearAllQueryObjectsOutcomeReceivedHandlers()
    {
      m_onQueryObjectsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for RemoveTagsAsync to call upon completion to the handler chain. You need to call this to
    * use RemoveTagsAsync.
    */
    inline void RegisterRemoveTagsOutcomeReceivedHandler(const RemoveTagsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onRemoveTagsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for RemoveTags.
    */
    inline void ClearAllRemoveTagsOutcomeReceivedHandlers()
    {
      m_onRemoveTagsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ReportTaskProgressAsync to call upon completion to the handler chain. You need to call this to
    * use ReportTaskProgressAsync.
    */
    inline void RegisterReportTaskProgressOutcomeReceivedHandler(const ReportTaskProgressOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onReportTaskProgressOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ReportTaskProgress.
    */
    inline void ClearAllReportTaskProgressOutcomeReceivedHandlers()
    {
      m_onReportTaskProgressOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ReportTaskRunnerHeartbeatAsync to call upon completion to the handler chain. You need to call this to
    * use ReportTaskRunnerHeartbeatAsync.
    */
    inline void RegisterReportTaskRunnerHeartbeatOutcomeReceivedHandler(const ReportTaskRunnerHeartbeatOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onReportTaskRunnerHeartbeatOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ReportTaskRunnerHeartbeat.
    */
    inline void ClearAllReportTaskRunnerHeartbeatOutcomeReceivedHandlers()
    {
      m_onReportTaskRunnerHeartbeatOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for SetStatusAsync to call upon completion to the handler chain. You need to call this to
    * use SetStatusAsync.
    */
    inline void RegisterSetStatusOutcomeReceivedHandler(const SetStatusOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onSetStatusOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for SetStatus.
    */
    inline void ClearAllSetStatusOutcomeReceivedHandlers()
    {
      m_onSetStatusOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for SetTaskStatusAsync to call upon completion to the handler chain. You need to call this to
    * use SetTaskStatusAsync.
    */
    inline void RegisterSetTaskStatusOutcomeReceivedHandler(const SetTaskStatusOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onSetTaskStatusOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for SetTaskStatus.
    */
    inline void ClearAllSetTaskStatusOutcomeReceivedHandlers()
    {
      m_onSetTaskStatusOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ValidatePipelineDefinitionAsync to call upon completion to the handler chain. You need to call this to
    * use ValidatePipelineDefinitionAsync.
    */
    inline void RegisterValidatePipelineDefinitionOutcomeReceivedHandler(const ValidatePipelineDefinitionOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onValidatePipelineDefinitionOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ValidatePipelineDefinition.
    */
    inline void ClearAllValidatePipelineDefinitionOutcomeReceivedHandlers()
    {
      m_onValidatePipelineDefinitionOutcomeReceived.Clear();
    }

  private:
    void init(const Client::ClientConfiguration& clientConfiguration);

    /**Async helpers**/
    void ActivatePipelineAsyncHelper(const Model::ActivatePipelineRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void AddTagsAsyncHelper(const Model::AddTagsRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void CreatePipelineAsyncHelper(const Model::CreatePipelineRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DeactivatePipelineAsyncHelper(const Model::DeactivatePipelineRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DeletePipelineAsyncHelper(const Model::DeletePipelineRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DescribeObjectsAsyncHelper(const Model::DescribeObjectsRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DescribePipelinesAsyncHelper(const Model::DescribePipelinesRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void EvaluateExpressionAsyncHelper(const Model::EvaluateExpressionRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void GetPipelineDefinitionAsyncHelper(const Model::GetPipelineDefinitionRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void ListPipelinesAsyncHelper(const Model::ListPipelinesRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void PollForTaskAsyncHelper(const Model::PollForTaskRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void PutPipelineDefinitionAsyncHelper(const Model::PutPipelineDefinitionRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void QueryObjectsAsyncHelper(const Model::QueryObjectsRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void RemoveTagsAsyncHelper(const Model::RemoveTagsRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void ReportTaskProgressAsyncHelper(const Model::ReportTaskProgressRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void ReportTaskRunnerHeartbeatAsyncHelper(const Model::ReportTaskRunnerHeartbeatRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void SetStatusAsyncHelper(const Model::SetStatusRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void SetTaskStatusAsyncHelper(const Model::SetTaskStatusRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void ValidatePipelineDefinitionAsyncHelper(const Model::ValidatePipelineDefinitionRequest& request, const Aws::Client::AsyncCallerContext* context) const;

    Aws::String m_uri;
    std::shared_ptr<Utils::Threading::Executor> m_executor;

    /** events **/
    ActivatePipelineOutcomeReceivedEvent m_onActivatePipelineOutcomeReceived;
    AddTagsOutcomeReceivedEvent m_onAddTagsOutcomeReceived;
    CreatePipelineOutcomeReceivedEvent m_onCreatePipelineOutcomeReceived;
    DeactivatePipelineOutcomeReceivedEvent m_onDeactivatePipelineOutcomeReceived;
    DeletePipelineOutcomeReceivedEvent m_onDeletePipelineOutcomeReceived;
    DescribeObjectsOutcomeReceivedEvent m_onDescribeObjectsOutcomeReceived;
    DescribePipelinesOutcomeReceivedEvent m_onDescribePipelinesOutcomeReceived;
    EvaluateExpressionOutcomeReceivedEvent m_onEvaluateExpressionOutcomeReceived;
    GetPipelineDefinitionOutcomeReceivedEvent m_onGetPipelineDefinitionOutcomeReceived;
    ListPipelinesOutcomeReceivedEvent m_onListPipelinesOutcomeReceived;
    PollForTaskOutcomeReceivedEvent m_onPollForTaskOutcomeReceived;
    PutPipelineDefinitionOutcomeReceivedEvent m_onPutPipelineDefinitionOutcomeReceived;
    QueryObjectsOutcomeReceivedEvent m_onQueryObjectsOutcomeReceived;
    RemoveTagsOutcomeReceivedEvent m_onRemoveTagsOutcomeReceived;
    ReportTaskProgressOutcomeReceivedEvent m_onReportTaskProgressOutcomeReceived;
    ReportTaskRunnerHeartbeatOutcomeReceivedEvent m_onReportTaskRunnerHeartbeatOutcomeReceived;
    SetStatusOutcomeReceivedEvent m_onSetStatusOutcomeReceived;
    SetTaskStatusOutcomeReceivedEvent m_onSetTaskStatusOutcomeReceived;
    ValidatePipelineDefinitionOutcomeReceivedEvent m_onValidatePipelineDefinitionOutcomeReceived;
  };

} // namespace DataPipeline
} // namespace Aws
