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
#include <aws/datapipeline/DataPipeline_EXPORTS.h>
#include <aws/datapipeline/DataPipelineErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
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

        typedef Aws::Utils::Outcome<ActivatePipelineResult, Aws::Client::AWSError<DataPipelineErrors>> ActivatePipelineOutcome;
        typedef Aws::Utils::Outcome<AddTagsResult, Aws::Client::AWSError<DataPipelineErrors>> AddTagsOutcome;
        typedef Aws::Utils::Outcome<CreatePipelineResult, Aws::Client::AWSError<DataPipelineErrors>> CreatePipelineOutcome;
        typedef Aws::Utils::Outcome<DeactivatePipelineResult, Aws::Client::AWSError<DataPipelineErrors>> DeactivatePipelineOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<DataPipelineErrors>> DeletePipelineOutcome;
        typedef Aws::Utils::Outcome<DescribeObjectsResult, Aws::Client::AWSError<DataPipelineErrors>> DescribeObjectsOutcome;
        typedef Aws::Utils::Outcome<DescribePipelinesResult, Aws::Client::AWSError<DataPipelineErrors>> DescribePipelinesOutcome;
        typedef Aws::Utils::Outcome<EvaluateExpressionResult, Aws::Client::AWSError<DataPipelineErrors>> EvaluateExpressionOutcome;
        typedef Aws::Utils::Outcome<GetPipelineDefinitionResult, Aws::Client::AWSError<DataPipelineErrors>> GetPipelineDefinitionOutcome;
        typedef Aws::Utils::Outcome<ListPipelinesResult, Aws::Client::AWSError<DataPipelineErrors>> ListPipelinesOutcome;
        typedef Aws::Utils::Outcome<PollForTaskResult, Aws::Client::AWSError<DataPipelineErrors>> PollForTaskOutcome;
        typedef Aws::Utils::Outcome<PutPipelineDefinitionResult, Aws::Client::AWSError<DataPipelineErrors>> PutPipelineDefinitionOutcome;
        typedef Aws::Utils::Outcome<QueryObjectsResult, Aws::Client::AWSError<DataPipelineErrors>> QueryObjectsOutcome;
        typedef Aws::Utils::Outcome<RemoveTagsResult, Aws::Client::AWSError<DataPipelineErrors>> RemoveTagsOutcome;
        typedef Aws::Utils::Outcome<ReportTaskProgressResult, Aws::Client::AWSError<DataPipelineErrors>> ReportTaskProgressOutcome;
        typedef Aws::Utils::Outcome<ReportTaskRunnerHeartbeatResult, Aws::Client::AWSError<DataPipelineErrors>> ReportTaskRunnerHeartbeatOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<DataPipelineErrors>> SetStatusOutcome;
        typedef Aws::Utils::Outcome<SetTaskStatusResult, Aws::Client::AWSError<DataPipelineErrors>> SetTaskStatusOutcome;
        typedef Aws::Utils::Outcome<ValidatePipelineDefinitionResult, Aws::Client::AWSError<DataPipelineErrors>> ValidatePipelineDefinitionOutcome;

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

  /**
   * <p>AWS Data Pipeline configures and manages a data-driven workflow called a
   * pipeline. AWS Data Pipeline handles the details of scheduling and ensuring that
   * data dependencies are met so that your application can focus on processing the
   * data.</p> <p>AWS Data Pipeline provides a JAR implementation of a task runner
   * called AWS Data Pipeline Task Runner. AWS Data Pipeline Task Runner provides
   * logic for common data management scenarios, such as performing database queries
   * and running data analysis using Amazon Elastic MapReduce (Amazon EMR). You can
   * use AWS Data Pipeline Task Runner as your task runner, or you can write your own
   * task runner to provide custom data management.</p> <p>AWS Data Pipeline
   * implements two main sets of functionality. Use the first set to create a
   * pipeline and define data sources, schedules, dependencies, and the transforms to
   * be performed on the data. Use the second set in your task runner application to
   * receive the next task ready for processing. The logic for performing the task,
   * such as querying the data, running data analysis, or converting the data from
   * one format to another, is contained within the task runner. The task runner
   * performs the task assigned to it by the web service, reporting progress to the
   * web service as it does so. When the task is done, the task runner reports the
   * final success or failure of the task to the web service.</p>
   */
  class AWS_DATAPIPELINE_API DataPipelineClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DataPipelineClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DataPipelineClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        DataPipelineClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~DataPipelineClient();

        inline virtual const char* GetServiceClientName() const override { return "datapipeline"; }


        /**
         * <p>Validates the specified pipeline and starts processing pipeline tasks. If the
         * pipeline does not pass validation, activation fails.</p> <p>If you need to pause
         * the pipeline to investigate an issue with a component, such as a data source or
         * script, call <a>DeactivatePipeline</a>.</p> <p>To activate a finished pipeline,
         * modify the end date for the pipeline and then activate it.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/ActivatePipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::ActivatePipelineOutcome ActivatePipeline(const Model::ActivatePipelineRequest& request) const;

        /**
         * <p>Validates the specified pipeline and starts processing pipeline tasks. If the
         * pipeline does not pass validation, activation fails.</p> <p>If you need to pause
         * the pipeline to investigate an issue with a component, such as a data source or
         * script, call <a>DeactivatePipeline</a>.</p> <p>To activate a finished pipeline,
         * modify the end date for the pipeline and then activate it.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/ActivatePipeline">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ActivatePipelineOutcomeCallable ActivatePipelineCallable(const Model::ActivatePipelineRequest& request) const;

        /**
         * <p>Validates the specified pipeline and starts processing pipeline tasks. If the
         * pipeline does not pass validation, activation fails.</p> <p>If you need to pause
         * the pipeline to investigate an issue with a component, such as a data source or
         * script, call <a>DeactivatePipeline</a>.</p> <p>To activate a finished pipeline,
         * modify the end date for the pipeline and then activate it.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/ActivatePipeline">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ActivatePipelineAsync(const Model::ActivatePipelineRequest& request, const ActivatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds or modifies tags for the specified pipeline.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/AddTags">AWS
         * API Reference</a></p>
         */
        virtual Model::AddTagsOutcome AddTags(const Model::AddTagsRequest& request) const;

        /**
         * <p>Adds or modifies tags for the specified pipeline.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/AddTags">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddTagsOutcomeCallable AddTagsCallable(const Model::AddTagsRequest& request) const;

        /**
         * <p>Adds or modifies tags for the specified pipeline.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/AddTags">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddTagsAsync(const Model::AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new, empty pipeline. Use <a>PutPipelineDefinition</a> to populate
         * the pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/CreatePipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePipelineOutcome CreatePipeline(const Model::CreatePipelineRequest& request) const;

        /**
         * <p>Creates a new, empty pipeline. Use <a>PutPipelineDefinition</a> to populate
         * the pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/CreatePipeline">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePipelineOutcomeCallable CreatePipelineCallable(const Model::CreatePipelineRequest& request) const;

        /**
         * <p>Creates a new, empty pipeline. Use <a>PutPipelineDefinition</a> to populate
         * the pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/CreatePipeline">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePipelineAsync(const Model::CreatePipelineRequest& request, const CreatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deactivates the specified running pipeline. The pipeline is set to the
         * <code>DEACTIVATING</code> state until the deactivation process completes.</p>
         * <p>To resume a deactivated pipeline, use <a>ActivatePipeline</a>. By default,
         * the pipeline resumes from the last completed execution. Optionally, you can
         * specify the date and time to resume the pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/DeactivatePipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::DeactivatePipelineOutcome DeactivatePipeline(const Model::DeactivatePipelineRequest& request) const;

        /**
         * <p>Deactivates the specified running pipeline. The pipeline is set to the
         * <code>DEACTIVATING</code> state until the deactivation process completes.</p>
         * <p>To resume a deactivated pipeline, use <a>ActivatePipeline</a>. By default,
         * the pipeline resumes from the last completed execution. Optionally, you can
         * specify the date and time to resume the pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/DeactivatePipeline">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeactivatePipelineOutcomeCallable DeactivatePipelineCallable(const Model::DeactivatePipelineRequest& request) const;

        /**
         * <p>Deactivates the specified running pipeline. The pipeline is set to the
         * <code>DEACTIVATING</code> state until the deactivation process completes.</p>
         * <p>To resume a deactivated pipeline, use <a>ActivatePipeline</a>. By default,
         * the pipeline resumes from the last completed execution. Optionally, you can
         * specify the date and time to resume the pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/DeactivatePipeline">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeactivatePipelineAsync(const Model::DeactivatePipelineRequest& request, const DeactivatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a pipeline, its pipeline definition, and its run history. AWS Data
         * Pipeline attempts to cancel instances associated with the pipeline that are
         * currently being processed by task runners.</p> <p>Deleting a pipeline cannot be
         * undone. You cannot query or restore a deleted pipeline. To temporarily pause a
         * pipeline instead of deleting it, call <a>SetStatus</a> with the status set to
         * <code>PAUSE</code> on individual components. Components that are paused by
         * <a>SetStatus</a> can be resumed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/DeletePipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePipelineOutcome DeletePipeline(const Model::DeletePipelineRequest& request) const;

        /**
         * <p>Deletes a pipeline, its pipeline definition, and its run history. AWS Data
         * Pipeline attempts to cancel instances associated with the pipeline that are
         * currently being processed by task runners.</p> <p>Deleting a pipeline cannot be
         * undone. You cannot query or restore a deleted pipeline. To temporarily pause a
         * pipeline instead of deleting it, call <a>SetStatus</a> with the status set to
         * <code>PAUSE</code> on individual components. Components that are paused by
         * <a>SetStatus</a> can be resumed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/DeletePipeline">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePipelineOutcomeCallable DeletePipelineCallable(const Model::DeletePipelineRequest& request) const;

        /**
         * <p>Deletes a pipeline, its pipeline definition, and its run history. AWS Data
         * Pipeline attempts to cancel instances associated with the pipeline that are
         * currently being processed by task runners.</p> <p>Deleting a pipeline cannot be
         * undone. You cannot query or restore a deleted pipeline. To temporarily pause a
         * pipeline instead of deleting it, call <a>SetStatus</a> with the status set to
         * <code>PAUSE</code> on individual components. Components that are paused by
         * <a>SetStatus</a> can be resumed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/DeletePipeline">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePipelineAsync(const Model::DeletePipelineRequest& request, const DeletePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the object definitions for a set of objects associated with the
         * pipeline. Object definitions are composed of a set of fields that define the
         * properties of the object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/DescribeObjects">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeObjectsOutcome DescribeObjects(const Model::DescribeObjectsRequest& request) const;

        /**
         * <p>Gets the object definitions for a set of objects associated with the
         * pipeline. Object definitions are composed of a set of fields that define the
         * properties of the object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/DescribeObjects">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeObjectsOutcomeCallable DescribeObjectsCallable(const Model::DescribeObjectsRequest& request) const;

        /**
         * <p>Gets the object definitions for a set of objects associated with the
         * pipeline. Object definitions are composed of a set of fields that define the
         * properties of the object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/DescribeObjects">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeObjectsAsync(const Model::DescribeObjectsRequest& request, const DescribeObjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves metadata about one or more pipelines. The information retrieved
         * includes the name of the pipeline, the pipeline identifier, its current state,
         * and the user account that owns the pipeline. Using account credentials, you can
         * retrieve metadata about pipelines that you or your IAM users have created. If
         * you are using an IAM user account, you can retrieve metadata about only those
         * pipelines for which you have read permissions.</p> <p>To retrieve the full
         * pipeline definition instead of metadata about the pipeline, call
         * <a>GetPipelineDefinition</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/DescribePipelines">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePipelinesOutcome DescribePipelines(const Model::DescribePipelinesRequest& request) const;

        /**
         * <p>Retrieves metadata about one or more pipelines. The information retrieved
         * includes the name of the pipeline, the pipeline identifier, its current state,
         * and the user account that owns the pipeline. Using account credentials, you can
         * retrieve metadata about pipelines that you or your IAM users have created. If
         * you are using an IAM user account, you can retrieve metadata about only those
         * pipelines for which you have read permissions.</p> <p>To retrieve the full
         * pipeline definition instead of metadata about the pipeline, call
         * <a>GetPipelineDefinition</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/DescribePipelines">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePipelinesOutcomeCallable DescribePipelinesCallable(const Model::DescribePipelinesRequest& request) const;

        /**
         * <p>Retrieves metadata about one or more pipelines. The information retrieved
         * includes the name of the pipeline, the pipeline identifier, its current state,
         * and the user account that owns the pipeline. Using account credentials, you can
         * retrieve metadata about pipelines that you or your IAM users have created. If
         * you are using an IAM user account, you can retrieve metadata about only those
         * pipelines for which you have read permissions.</p> <p>To retrieve the full
         * pipeline definition instead of metadata about the pipeline, call
         * <a>GetPipelineDefinition</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/DescribePipelines">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePipelinesAsync(const Model::DescribePipelinesRequest& request, const DescribePipelinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Task runners call <code>EvaluateExpression</code> to evaluate a string in the
         * context of the specified object. For example, a task runner can evaluate SQL
         * queries stored in Amazon S3.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/EvaluateExpression">AWS
         * API Reference</a></p>
         */
        virtual Model::EvaluateExpressionOutcome EvaluateExpression(const Model::EvaluateExpressionRequest& request) const;

        /**
         * <p>Task runners call <code>EvaluateExpression</code> to evaluate a string in the
         * context of the specified object. For example, a task runner can evaluate SQL
         * queries stored in Amazon S3.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/EvaluateExpression">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EvaluateExpressionOutcomeCallable EvaluateExpressionCallable(const Model::EvaluateExpressionRequest& request) const;

        /**
         * <p>Task runners call <code>EvaluateExpression</code> to evaluate a string in the
         * context of the specified object. For example, a task runner can evaluate SQL
         * queries stored in Amazon S3.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/EvaluateExpression">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EvaluateExpressionAsync(const Model::EvaluateExpressionRequest& request, const EvaluateExpressionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the definition of the specified pipeline. You can call
         * <code>GetPipelineDefinition</code> to retrieve the pipeline definition that you
         * provided using <a>PutPipelineDefinition</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/GetPipelineDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPipelineDefinitionOutcome GetPipelineDefinition(const Model::GetPipelineDefinitionRequest& request) const;

        /**
         * <p>Gets the definition of the specified pipeline. You can call
         * <code>GetPipelineDefinition</code> to retrieve the pipeline definition that you
         * provided using <a>PutPipelineDefinition</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/GetPipelineDefinition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPipelineDefinitionOutcomeCallable GetPipelineDefinitionCallable(const Model::GetPipelineDefinitionRequest& request) const;

        /**
         * <p>Gets the definition of the specified pipeline. You can call
         * <code>GetPipelineDefinition</code> to retrieve the pipeline definition that you
         * provided using <a>PutPipelineDefinition</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/GetPipelineDefinition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPipelineDefinitionAsync(const Model::GetPipelineDefinitionRequest& request, const GetPipelineDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the pipeline identifiers for all active pipelines that you have
         * permission to access.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/ListPipelines">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPipelinesOutcome ListPipelines(const Model::ListPipelinesRequest& request) const;

        /**
         * <p>Lists the pipeline identifiers for all active pipelines that you have
         * permission to access.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/ListPipelines">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPipelinesOutcomeCallable ListPipelinesCallable(const Model::ListPipelinesRequest& request) const;

        /**
         * <p>Lists the pipeline identifiers for all active pipelines that you have
         * permission to access.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/ListPipelines">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPipelinesAsync(const Model::ListPipelinesRequest& request, const ListPipelinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Task runners call <code>PollForTask</code> to receive a task to perform from
         * AWS Data Pipeline. The task runner specifies which tasks it can perform by
         * setting a value for the <code>workerGroup</code> parameter. The task returned
         * can come from any of the pipelines that match the <code>workerGroup</code> value
         * passed in by the task runner and that was launched using the IAM user
         * credentials specified by the task runner.</p> <p>If tasks are ready in the work
         * queue, <code>PollForTask</code> returns a response immediately. If no tasks are
         * available in the queue, <code>PollForTask</code> uses long-polling and holds on
         * to a poll connection for up to a 90 seconds, during which time the first newly
         * scheduled task is handed to the task runner. To accomodate this, set the socket
         * timeout in your task runner to 90 seconds. The task runner should not call
         * <code>PollForTask</code> again on the same <code>workerGroup</code> until it
         * receives a response, and this can take up to 90 seconds. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/PollForTask">AWS
         * API Reference</a></p>
         */
        virtual Model::PollForTaskOutcome PollForTask(const Model::PollForTaskRequest& request) const;

        /**
         * <p>Task runners call <code>PollForTask</code> to receive a task to perform from
         * AWS Data Pipeline. The task runner specifies which tasks it can perform by
         * setting a value for the <code>workerGroup</code> parameter. The task returned
         * can come from any of the pipelines that match the <code>workerGroup</code> value
         * passed in by the task runner and that was launched using the IAM user
         * credentials specified by the task runner.</p> <p>If tasks are ready in the work
         * queue, <code>PollForTask</code> returns a response immediately. If no tasks are
         * available in the queue, <code>PollForTask</code> uses long-polling and holds on
         * to a poll connection for up to a 90 seconds, during which time the first newly
         * scheduled task is handed to the task runner. To accomodate this, set the socket
         * timeout in your task runner to 90 seconds. The task runner should not call
         * <code>PollForTask</code> again on the same <code>workerGroup</code> until it
         * receives a response, and this can take up to 90 seconds. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/PollForTask">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PollForTaskOutcomeCallable PollForTaskCallable(const Model::PollForTaskRequest& request) const;

        /**
         * <p>Task runners call <code>PollForTask</code> to receive a task to perform from
         * AWS Data Pipeline. The task runner specifies which tasks it can perform by
         * setting a value for the <code>workerGroup</code> parameter. The task returned
         * can come from any of the pipelines that match the <code>workerGroup</code> value
         * passed in by the task runner and that was launched using the IAM user
         * credentials specified by the task runner.</p> <p>If tasks are ready in the work
         * queue, <code>PollForTask</code> returns a response immediately. If no tasks are
         * available in the queue, <code>PollForTask</code> uses long-polling and holds on
         * to a poll connection for up to a 90 seconds, during which time the first newly
         * scheduled task is handed to the task runner. To accomodate this, set the socket
         * timeout in your task runner to 90 seconds. The task runner should not call
         * <code>PollForTask</code> again on the same <code>workerGroup</code> until it
         * receives a response, and this can take up to 90 seconds. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/PollForTask">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PollForTaskAsync(const Model::PollForTaskRequest& request, const PollForTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds tasks, schedules, and preconditions to the specified pipeline. You can
         * use <code>PutPipelineDefinition</code> to populate a new pipeline.</p> <p>
         * <code>PutPipelineDefinition</code> also validates the configuration as it adds
         * it to the pipeline. Changes to the pipeline are saved unless one of the
         * following three validation errors exists in the pipeline. </p> <ol> <li>An
         * object is missing a name or identifier field.</li> <li>A string or reference
         * field is empty.</li> <li>The number of objects in the pipeline exceeds the
         * maximum allowed objects.</li> <li>The pipeline is in a FINISHED state.</li>
         * </ol> <p> Pipeline object definitions are passed to the
         * <code>PutPipelineDefinition</code> action and returned by the
         * <a>GetPipelineDefinition</a> action. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/PutPipelineDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::PutPipelineDefinitionOutcome PutPipelineDefinition(const Model::PutPipelineDefinitionRequest& request) const;

        /**
         * <p>Adds tasks, schedules, and preconditions to the specified pipeline. You can
         * use <code>PutPipelineDefinition</code> to populate a new pipeline.</p> <p>
         * <code>PutPipelineDefinition</code> also validates the configuration as it adds
         * it to the pipeline. Changes to the pipeline are saved unless one of the
         * following three validation errors exists in the pipeline. </p> <ol> <li>An
         * object is missing a name or identifier field.</li> <li>A string or reference
         * field is empty.</li> <li>The number of objects in the pipeline exceeds the
         * maximum allowed objects.</li> <li>The pipeline is in a FINISHED state.</li>
         * </ol> <p> Pipeline object definitions are passed to the
         * <code>PutPipelineDefinition</code> action and returned by the
         * <a>GetPipelineDefinition</a> action. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/PutPipelineDefinition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutPipelineDefinitionOutcomeCallable PutPipelineDefinitionCallable(const Model::PutPipelineDefinitionRequest& request) const;

        /**
         * <p>Adds tasks, schedules, and preconditions to the specified pipeline. You can
         * use <code>PutPipelineDefinition</code> to populate a new pipeline.</p> <p>
         * <code>PutPipelineDefinition</code> also validates the configuration as it adds
         * it to the pipeline. Changes to the pipeline are saved unless one of the
         * following three validation errors exists in the pipeline. </p> <ol> <li>An
         * object is missing a name or identifier field.</li> <li>A string or reference
         * field is empty.</li> <li>The number of objects in the pipeline exceeds the
         * maximum allowed objects.</li> <li>The pipeline is in a FINISHED state.</li>
         * </ol> <p> Pipeline object definitions are passed to the
         * <code>PutPipelineDefinition</code> action and returned by the
         * <a>GetPipelineDefinition</a> action. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/PutPipelineDefinition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutPipelineDefinitionAsync(const Model::PutPipelineDefinitionRequest& request, const PutPipelineDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Queries the specified pipeline for the names of objects that match the
         * specified set of conditions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/QueryObjects">AWS
         * API Reference</a></p>
         */
        virtual Model::QueryObjectsOutcome QueryObjects(const Model::QueryObjectsRequest& request) const;

        /**
         * <p>Queries the specified pipeline for the names of objects that match the
         * specified set of conditions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/QueryObjects">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::QueryObjectsOutcomeCallable QueryObjectsCallable(const Model::QueryObjectsRequest& request) const;

        /**
         * <p>Queries the specified pipeline for the names of objects that match the
         * specified set of conditions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/QueryObjects">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void QueryObjectsAsync(const Model::QueryObjectsRequest& request, const QueryObjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes existing tags from the specified pipeline.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/RemoveTags">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveTagsOutcome RemoveTags(const Model::RemoveTagsRequest& request) const;

        /**
         * <p>Removes existing tags from the specified pipeline.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/RemoveTags">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveTagsOutcomeCallable RemoveTagsCallable(const Model::RemoveTagsRequest& request) const;

        /**
         * <p>Removes existing tags from the specified pipeline.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/RemoveTags">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveTagsAsync(const Model::RemoveTagsRequest& request, const RemoveTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Task runners call <code>ReportTaskProgress</code> when assigned a task to
         * acknowledge that it has the task. If the web service does not receive this
         * acknowledgement within 2 minutes, it assigns the task in a subsequent
         * <a>PollForTask</a> call. After this initial acknowledgement, the task runner
         * only needs to report progress every 15 minutes to maintain its ownership of the
         * task. You can change this reporting time from 15 minutes by specifying a
         * <code>reportProgressTimeout</code> field in your pipeline.</p> <p>If a task
         * runner does not report its status after 5 minutes, AWS Data Pipeline assumes
         * that the task runner is unable to process the task and reassigns the task in a
         * subsequent response to <a>PollForTask</a>. Task runners should call
         * <code>ReportTaskProgress</code> every 60 seconds.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/ReportTaskProgress">AWS
         * API Reference</a></p>
         */
        virtual Model::ReportTaskProgressOutcome ReportTaskProgress(const Model::ReportTaskProgressRequest& request) const;

        /**
         * <p>Task runners call <code>ReportTaskProgress</code> when assigned a task to
         * acknowledge that it has the task. If the web service does not receive this
         * acknowledgement within 2 minutes, it assigns the task in a subsequent
         * <a>PollForTask</a> call. After this initial acknowledgement, the task runner
         * only needs to report progress every 15 minutes to maintain its ownership of the
         * task. You can change this reporting time from 15 minutes by specifying a
         * <code>reportProgressTimeout</code> field in your pipeline.</p> <p>If a task
         * runner does not report its status after 5 minutes, AWS Data Pipeline assumes
         * that the task runner is unable to process the task and reassigns the task in a
         * subsequent response to <a>PollForTask</a>. Task runners should call
         * <code>ReportTaskProgress</code> every 60 seconds.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/ReportTaskProgress">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ReportTaskProgressOutcomeCallable ReportTaskProgressCallable(const Model::ReportTaskProgressRequest& request) const;

        /**
         * <p>Task runners call <code>ReportTaskProgress</code> when assigned a task to
         * acknowledge that it has the task. If the web service does not receive this
         * acknowledgement within 2 minutes, it assigns the task in a subsequent
         * <a>PollForTask</a> call. After this initial acknowledgement, the task runner
         * only needs to report progress every 15 minutes to maintain its ownership of the
         * task. You can change this reporting time from 15 minutes by specifying a
         * <code>reportProgressTimeout</code> field in your pipeline.</p> <p>If a task
         * runner does not report its status after 5 minutes, AWS Data Pipeline assumes
         * that the task runner is unable to process the task and reassigns the task in a
         * subsequent response to <a>PollForTask</a>. Task runners should call
         * <code>ReportTaskProgress</code> every 60 seconds.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/ReportTaskProgress">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ReportTaskProgressAsync(const Model::ReportTaskProgressRequest& request, const ReportTaskProgressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Task runners call <code>ReportTaskRunnerHeartbeat</code> every 15 minutes to
         * indicate that they are operational. If the AWS Data Pipeline Task Runner is
         * launched on a resource managed by AWS Data Pipeline, the web service can use
         * this call to detect when the task runner application has failed and restart a
         * new instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/ReportTaskRunnerHeartbeat">AWS
         * API Reference</a></p>
         */
        virtual Model::ReportTaskRunnerHeartbeatOutcome ReportTaskRunnerHeartbeat(const Model::ReportTaskRunnerHeartbeatRequest& request) const;

        /**
         * <p>Task runners call <code>ReportTaskRunnerHeartbeat</code> every 15 minutes to
         * indicate that they are operational. If the AWS Data Pipeline Task Runner is
         * launched on a resource managed by AWS Data Pipeline, the web service can use
         * this call to detect when the task runner application has failed and restart a
         * new instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/ReportTaskRunnerHeartbeat">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ReportTaskRunnerHeartbeatOutcomeCallable ReportTaskRunnerHeartbeatCallable(const Model::ReportTaskRunnerHeartbeatRequest& request) const;

        /**
         * <p>Task runners call <code>ReportTaskRunnerHeartbeat</code> every 15 minutes to
         * indicate that they are operational. If the AWS Data Pipeline Task Runner is
         * launched on a resource managed by AWS Data Pipeline, the web service can use
         * this call to detect when the task runner application has failed and restart a
         * new instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/ReportTaskRunnerHeartbeat">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ReportTaskRunnerHeartbeatAsync(const Model::ReportTaskRunnerHeartbeatRequest& request, const ReportTaskRunnerHeartbeatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Requests that the status of the specified physical or logical pipeline
         * objects be updated in the specified pipeline. This update might not occur
         * immediately, but is eventually consistent. The status that can be set depends on
         * the type of object (for example, DataNode or Activity). You cannot perform this
         * operation on <code>FINISHED</code> pipelines and attempting to do so returns
         * <code>InvalidRequestException</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/SetStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::SetStatusOutcome SetStatus(const Model::SetStatusRequest& request) const;

        /**
         * <p>Requests that the status of the specified physical or logical pipeline
         * objects be updated in the specified pipeline. This update might not occur
         * immediately, but is eventually consistent. The status that can be set depends on
         * the type of object (for example, DataNode or Activity). You cannot perform this
         * operation on <code>FINISHED</code> pipelines and attempting to do so returns
         * <code>InvalidRequestException</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/SetStatus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetStatusOutcomeCallable SetStatusCallable(const Model::SetStatusRequest& request) const;

        /**
         * <p>Requests that the status of the specified physical or logical pipeline
         * objects be updated in the specified pipeline. This update might not occur
         * immediately, but is eventually consistent. The status that can be set depends on
         * the type of object (for example, DataNode or Activity). You cannot perform this
         * operation on <code>FINISHED</code> pipelines and attempting to do so returns
         * <code>InvalidRequestException</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/SetStatus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetStatusAsync(const Model::SetStatusRequest& request, const SetStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Task runners call <code>SetTaskStatus</code> to notify AWS Data Pipeline that
         * a task is completed and provide information about the final status. A task
         * runner makes this call regardless of whether the task was sucessful. A task
         * runner does not need to call <code>SetTaskStatus</code> for tasks that are
         * canceled by the web service during a call to
         * <a>ReportTaskProgress</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/SetTaskStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::SetTaskStatusOutcome SetTaskStatus(const Model::SetTaskStatusRequest& request) const;

        /**
         * <p>Task runners call <code>SetTaskStatus</code> to notify AWS Data Pipeline that
         * a task is completed and provide information about the final status. A task
         * runner makes this call regardless of whether the task was sucessful. A task
         * runner does not need to call <code>SetTaskStatus</code> for tasks that are
         * canceled by the web service during a call to
         * <a>ReportTaskProgress</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/SetTaskStatus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetTaskStatusOutcomeCallable SetTaskStatusCallable(const Model::SetTaskStatusRequest& request) const;

        /**
         * <p>Task runners call <code>SetTaskStatus</code> to notify AWS Data Pipeline that
         * a task is completed and provide information about the final status. A task
         * runner makes this call regardless of whether the task was sucessful. A task
         * runner does not need to call <code>SetTaskStatus</code> for tasks that are
         * canceled by the web service during a call to
         * <a>ReportTaskProgress</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/SetTaskStatus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetTaskStatusAsync(const Model::SetTaskStatusRequest& request, const SetTaskStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Validates the specified pipeline definition to ensure that it is well formed
         * and can be run without error.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/ValidatePipelineDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::ValidatePipelineDefinitionOutcome ValidatePipelineDefinition(const Model::ValidatePipelineDefinitionRequest& request) const;

        /**
         * <p>Validates the specified pipeline definition to ensure that it is well formed
         * and can be run without error.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/ValidatePipelineDefinition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ValidatePipelineDefinitionOutcomeCallable ValidatePipelineDefinitionCallable(const Model::ValidatePipelineDefinitionRequest& request) const;

        /**
         * <p>Validates the specified pipeline definition to ensure that it is well formed
         * and can be run without error.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/ValidatePipelineDefinition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ValidatePipelineDefinitionAsync(const Model::ValidatePipelineDefinitionRequest& request, const ValidatePipelineDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void ActivatePipelineAsyncHelper(const Model::ActivatePipelineRequest& request, const ActivatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AddTagsAsyncHelper(const Model::AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePipelineAsyncHelper(const Model::CreatePipelineRequest& request, const CreatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeactivatePipelineAsyncHelper(const Model::DeactivatePipelineRequest& request, const DeactivatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePipelineAsyncHelper(const Model::DeletePipelineRequest& request, const DeletePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeObjectsAsyncHelper(const Model::DescribeObjectsRequest& request, const DescribeObjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribePipelinesAsyncHelper(const Model::DescribePipelinesRequest& request, const DescribePipelinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void EvaluateExpressionAsyncHelper(const Model::EvaluateExpressionRequest& request, const EvaluateExpressionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPipelineDefinitionAsyncHelper(const Model::GetPipelineDefinitionRequest& request, const GetPipelineDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPipelinesAsyncHelper(const Model::ListPipelinesRequest& request, const ListPipelinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PollForTaskAsyncHelper(const Model::PollForTaskRequest& request, const PollForTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutPipelineDefinitionAsyncHelper(const Model::PutPipelineDefinitionRequest& request, const PutPipelineDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void QueryObjectsAsyncHelper(const Model::QueryObjectsRequest& request, const QueryObjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveTagsAsyncHelper(const Model::RemoveTagsRequest& request, const RemoveTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ReportTaskProgressAsyncHelper(const Model::ReportTaskProgressRequest& request, const ReportTaskProgressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ReportTaskRunnerHeartbeatAsyncHelper(const Model::ReportTaskRunnerHeartbeatRequest& request, const ReportTaskRunnerHeartbeatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetStatusAsyncHelper(const Model::SetStatusRequest& request, const SetStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetTaskStatusAsyncHelper(const Model::SetTaskStatusRequest& request, const SetTaskStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ValidatePipelineDefinitionAsyncHelper(const Model::ValidatePipelineDefinitionRequest& request, const ValidatePipelineDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace DataPipeline
} // namespace Aws
