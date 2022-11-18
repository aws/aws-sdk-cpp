/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datapipeline/DataPipeline_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datapipeline/DataPipelineServiceClientModel.h>
#include <aws/datapipeline/DataPipelineLegacyAsyncMacros.h>

namespace Aws
{
namespace DataPipeline
{
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
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DataPipelineClient(const Aws::DataPipeline::DataPipelineClientConfiguration& clientConfiguration = Aws::DataPipeline::DataPipelineClientConfiguration(),
                           std::shared_ptr<DataPipelineEndpointProviderBase> endpointProvider = Aws::MakeShared<DataPipelineEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DataPipelineClient(const Aws::Auth::AWSCredentials& credentials,
                           std::shared_ptr<DataPipelineEndpointProviderBase> endpointProvider = Aws::MakeShared<DataPipelineEndpointProvider>(ALLOCATION_TAG),
                           const Aws::DataPipeline::DataPipelineClientConfiguration& clientConfiguration = Aws::DataPipeline::DataPipelineClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        DataPipelineClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<DataPipelineEndpointProviderBase> endpointProvider = Aws::MakeShared<DataPipelineEndpointProvider>(ALLOCATION_TAG),
                           const Aws::DataPipeline::DataPipelineClientConfiguration& clientConfiguration = Aws::DataPipeline::DataPipelineClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DataPipelineClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DataPipelineClient(const Aws::Auth::AWSCredentials& credentials,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        DataPipelineClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~DataPipelineClient();


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
         * <p>Adds or modifies tags for the specified pipeline.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/AddTags">AWS
         * API Reference</a></p>
         */
        virtual Model::AddTagsOutcome AddTags(const Model::AddTagsRequest& request) const;


        /**
         * <p>Creates a new, empty pipeline. Use <a>PutPipelineDefinition</a> to populate
         * the pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/CreatePipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePipelineOutcome CreatePipeline(const Model::CreatePipelineRequest& request) const;


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
         * <p>Gets the object definitions for a set of objects associated with the
         * pipeline. Object definitions are composed of a set of fields that define the
         * properties of the object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/DescribeObjects">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeObjectsOutcome DescribeObjects(const Model::DescribeObjectsRequest& request) const;


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
         * <p>Task runners call <code>EvaluateExpression</code> to evaluate a string in the
         * context of the specified object. For example, a task runner can evaluate SQL
         * queries stored in Amazon S3.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/EvaluateExpression">AWS
         * API Reference</a></p>
         */
        virtual Model::EvaluateExpressionOutcome EvaluateExpression(const Model::EvaluateExpressionRequest& request) const;


        /**
         * <p>Gets the definition of the specified pipeline. You can call
         * <code>GetPipelineDefinition</code> to retrieve the pipeline definition that you
         * provided using <a>PutPipelineDefinition</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/GetPipelineDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPipelineDefinitionOutcome GetPipelineDefinition(const Model::GetPipelineDefinitionRequest& request) const;


        /**
         * <p>Lists the pipeline identifiers for all active pipelines that you have
         * permission to access.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/ListPipelines">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPipelinesOutcome ListPipelines(const Model::ListPipelinesRequest& request) const;


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
         * <p>Queries the specified pipeline for the names of objects that match the
         * specified set of conditions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/QueryObjects">AWS
         * API Reference</a></p>
         */
        virtual Model::QueryObjectsOutcome QueryObjects(const Model::QueryObjectsRequest& request) const;


        /**
         * <p>Removes existing tags from the specified pipeline.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/RemoveTags">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveTagsOutcome RemoveTags(const Model::RemoveTagsRequest& request) const;


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
         * <p>Validates the specified pipeline definition to ensure that it is well formed
         * and can be run without error.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/ValidatePipelineDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::ValidatePipelineDefinitionOutcome ValidatePipelineDefinition(const Model::ValidatePipelineDefinitionRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<DataPipelineEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const DataPipelineClientConfiguration& clientConfiguration);

      DataPipelineClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<DataPipelineEndpointProviderBase> m_endpointProvider;
  };

} // namespace DataPipeline
} // namespace Aws
