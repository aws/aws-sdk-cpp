/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/CodePipelineErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/codepipeline/model/AcknowledgeJobResult.h>
#include <aws/codepipeline/model/AcknowledgeThirdPartyJobResult.h>
#include <aws/codepipeline/model/CreateCustomActionTypeResult.h>
#include <aws/codepipeline/model/CreatePipelineResult.h>
#include <aws/codepipeline/model/DeleteWebhookResult.h>
#include <aws/codepipeline/model/DeregisterWebhookWithThirdPartyResult.h>
#include <aws/codepipeline/model/GetActionTypeResult.h>
#include <aws/codepipeline/model/GetJobDetailsResult.h>
#include <aws/codepipeline/model/GetPipelineResult.h>
#include <aws/codepipeline/model/GetPipelineExecutionResult.h>
#include <aws/codepipeline/model/GetPipelineStateResult.h>
#include <aws/codepipeline/model/GetThirdPartyJobDetailsResult.h>
#include <aws/codepipeline/model/ListActionExecutionsResult.h>
#include <aws/codepipeline/model/ListActionTypesResult.h>
#include <aws/codepipeline/model/ListPipelineExecutionsResult.h>
#include <aws/codepipeline/model/ListPipelinesResult.h>
#include <aws/codepipeline/model/ListTagsForResourceResult.h>
#include <aws/codepipeline/model/ListWebhooksResult.h>
#include <aws/codepipeline/model/PollForJobsResult.h>
#include <aws/codepipeline/model/PollForThirdPartyJobsResult.h>
#include <aws/codepipeline/model/PutActionRevisionResult.h>
#include <aws/codepipeline/model/PutApprovalResultResult.h>
#include <aws/codepipeline/model/PutWebhookResult.h>
#include <aws/codepipeline/model/RegisterWebhookWithThirdPartyResult.h>
#include <aws/codepipeline/model/RetryStageExecutionResult.h>
#include <aws/codepipeline/model/StartPipelineExecutionResult.h>
#include <aws/codepipeline/model/StopPipelineExecutionResult.h>
#include <aws/codepipeline/model/TagResourceResult.h>
#include <aws/codepipeline/model/UntagResourceResult.h>
#include <aws/codepipeline/model/UpdatePipelineResult.h>
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

namespace CodePipeline
{

namespace Model
{
        class AcknowledgeJobRequest;
        class AcknowledgeThirdPartyJobRequest;
        class CreateCustomActionTypeRequest;
        class CreatePipelineRequest;
        class DeleteCustomActionTypeRequest;
        class DeletePipelineRequest;
        class DeleteWebhookRequest;
        class DeregisterWebhookWithThirdPartyRequest;
        class DisableStageTransitionRequest;
        class EnableStageTransitionRequest;
        class GetActionTypeRequest;
        class GetJobDetailsRequest;
        class GetPipelineRequest;
        class GetPipelineExecutionRequest;
        class GetPipelineStateRequest;
        class GetThirdPartyJobDetailsRequest;
        class ListActionExecutionsRequest;
        class ListActionTypesRequest;
        class ListPipelineExecutionsRequest;
        class ListPipelinesRequest;
        class ListTagsForResourceRequest;
        class ListWebhooksRequest;
        class PollForJobsRequest;
        class PollForThirdPartyJobsRequest;
        class PutActionRevisionRequest;
        class PutApprovalResultRequest;
        class PutJobFailureResultRequest;
        class PutJobSuccessResultRequest;
        class PutThirdPartyJobFailureResultRequest;
        class PutThirdPartyJobSuccessResultRequest;
        class PutWebhookRequest;
        class RegisterWebhookWithThirdPartyRequest;
        class RetryStageExecutionRequest;
        class StartPipelineExecutionRequest;
        class StopPipelineExecutionRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateActionTypeRequest;
        class UpdatePipelineRequest;

        typedef Aws::Utils::Outcome<AcknowledgeJobResult, CodePipelineError> AcknowledgeJobOutcome;
        typedef Aws::Utils::Outcome<AcknowledgeThirdPartyJobResult, CodePipelineError> AcknowledgeThirdPartyJobOutcome;
        typedef Aws::Utils::Outcome<CreateCustomActionTypeResult, CodePipelineError> CreateCustomActionTypeOutcome;
        typedef Aws::Utils::Outcome<CreatePipelineResult, CodePipelineError> CreatePipelineOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, CodePipelineError> DeleteCustomActionTypeOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, CodePipelineError> DeletePipelineOutcome;
        typedef Aws::Utils::Outcome<DeleteWebhookResult, CodePipelineError> DeleteWebhookOutcome;
        typedef Aws::Utils::Outcome<DeregisterWebhookWithThirdPartyResult, CodePipelineError> DeregisterWebhookWithThirdPartyOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, CodePipelineError> DisableStageTransitionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, CodePipelineError> EnableStageTransitionOutcome;
        typedef Aws::Utils::Outcome<GetActionTypeResult, CodePipelineError> GetActionTypeOutcome;
        typedef Aws::Utils::Outcome<GetJobDetailsResult, CodePipelineError> GetJobDetailsOutcome;
        typedef Aws::Utils::Outcome<GetPipelineResult, CodePipelineError> GetPipelineOutcome;
        typedef Aws::Utils::Outcome<GetPipelineExecutionResult, CodePipelineError> GetPipelineExecutionOutcome;
        typedef Aws::Utils::Outcome<GetPipelineStateResult, CodePipelineError> GetPipelineStateOutcome;
        typedef Aws::Utils::Outcome<GetThirdPartyJobDetailsResult, CodePipelineError> GetThirdPartyJobDetailsOutcome;
        typedef Aws::Utils::Outcome<ListActionExecutionsResult, CodePipelineError> ListActionExecutionsOutcome;
        typedef Aws::Utils::Outcome<ListActionTypesResult, CodePipelineError> ListActionTypesOutcome;
        typedef Aws::Utils::Outcome<ListPipelineExecutionsResult, CodePipelineError> ListPipelineExecutionsOutcome;
        typedef Aws::Utils::Outcome<ListPipelinesResult, CodePipelineError> ListPipelinesOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, CodePipelineError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<ListWebhooksResult, CodePipelineError> ListWebhooksOutcome;
        typedef Aws::Utils::Outcome<PollForJobsResult, CodePipelineError> PollForJobsOutcome;
        typedef Aws::Utils::Outcome<PollForThirdPartyJobsResult, CodePipelineError> PollForThirdPartyJobsOutcome;
        typedef Aws::Utils::Outcome<PutActionRevisionResult, CodePipelineError> PutActionRevisionOutcome;
        typedef Aws::Utils::Outcome<PutApprovalResultResult, CodePipelineError> PutApprovalResultOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, CodePipelineError> PutJobFailureResultOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, CodePipelineError> PutJobSuccessResultOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, CodePipelineError> PutThirdPartyJobFailureResultOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, CodePipelineError> PutThirdPartyJobSuccessResultOutcome;
        typedef Aws::Utils::Outcome<PutWebhookResult, CodePipelineError> PutWebhookOutcome;
        typedef Aws::Utils::Outcome<RegisterWebhookWithThirdPartyResult, CodePipelineError> RegisterWebhookWithThirdPartyOutcome;
        typedef Aws::Utils::Outcome<RetryStageExecutionResult, CodePipelineError> RetryStageExecutionOutcome;
        typedef Aws::Utils::Outcome<StartPipelineExecutionResult, CodePipelineError> StartPipelineExecutionOutcome;
        typedef Aws::Utils::Outcome<StopPipelineExecutionResult, CodePipelineError> StopPipelineExecutionOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, CodePipelineError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, CodePipelineError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, CodePipelineError> UpdateActionTypeOutcome;
        typedef Aws::Utils::Outcome<UpdatePipelineResult, CodePipelineError> UpdatePipelineOutcome;

        typedef std::future<AcknowledgeJobOutcome> AcknowledgeJobOutcomeCallable;
        typedef std::future<AcknowledgeThirdPartyJobOutcome> AcknowledgeThirdPartyJobOutcomeCallable;
        typedef std::future<CreateCustomActionTypeOutcome> CreateCustomActionTypeOutcomeCallable;
        typedef std::future<CreatePipelineOutcome> CreatePipelineOutcomeCallable;
        typedef std::future<DeleteCustomActionTypeOutcome> DeleteCustomActionTypeOutcomeCallable;
        typedef std::future<DeletePipelineOutcome> DeletePipelineOutcomeCallable;
        typedef std::future<DeleteWebhookOutcome> DeleteWebhookOutcomeCallable;
        typedef std::future<DeregisterWebhookWithThirdPartyOutcome> DeregisterWebhookWithThirdPartyOutcomeCallable;
        typedef std::future<DisableStageTransitionOutcome> DisableStageTransitionOutcomeCallable;
        typedef std::future<EnableStageTransitionOutcome> EnableStageTransitionOutcomeCallable;
        typedef std::future<GetActionTypeOutcome> GetActionTypeOutcomeCallable;
        typedef std::future<GetJobDetailsOutcome> GetJobDetailsOutcomeCallable;
        typedef std::future<GetPipelineOutcome> GetPipelineOutcomeCallable;
        typedef std::future<GetPipelineExecutionOutcome> GetPipelineExecutionOutcomeCallable;
        typedef std::future<GetPipelineStateOutcome> GetPipelineStateOutcomeCallable;
        typedef std::future<GetThirdPartyJobDetailsOutcome> GetThirdPartyJobDetailsOutcomeCallable;
        typedef std::future<ListActionExecutionsOutcome> ListActionExecutionsOutcomeCallable;
        typedef std::future<ListActionTypesOutcome> ListActionTypesOutcomeCallable;
        typedef std::future<ListPipelineExecutionsOutcome> ListPipelineExecutionsOutcomeCallable;
        typedef std::future<ListPipelinesOutcome> ListPipelinesOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<ListWebhooksOutcome> ListWebhooksOutcomeCallable;
        typedef std::future<PollForJobsOutcome> PollForJobsOutcomeCallable;
        typedef std::future<PollForThirdPartyJobsOutcome> PollForThirdPartyJobsOutcomeCallable;
        typedef std::future<PutActionRevisionOutcome> PutActionRevisionOutcomeCallable;
        typedef std::future<PutApprovalResultOutcome> PutApprovalResultOutcomeCallable;
        typedef std::future<PutJobFailureResultOutcome> PutJobFailureResultOutcomeCallable;
        typedef std::future<PutJobSuccessResultOutcome> PutJobSuccessResultOutcomeCallable;
        typedef std::future<PutThirdPartyJobFailureResultOutcome> PutThirdPartyJobFailureResultOutcomeCallable;
        typedef std::future<PutThirdPartyJobSuccessResultOutcome> PutThirdPartyJobSuccessResultOutcomeCallable;
        typedef std::future<PutWebhookOutcome> PutWebhookOutcomeCallable;
        typedef std::future<RegisterWebhookWithThirdPartyOutcome> RegisterWebhookWithThirdPartyOutcomeCallable;
        typedef std::future<RetryStageExecutionOutcome> RetryStageExecutionOutcomeCallable;
        typedef std::future<StartPipelineExecutionOutcome> StartPipelineExecutionOutcomeCallable;
        typedef std::future<StopPipelineExecutionOutcome> StopPipelineExecutionOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateActionTypeOutcome> UpdateActionTypeOutcomeCallable;
        typedef std::future<UpdatePipelineOutcome> UpdatePipelineOutcomeCallable;
} // namespace Model

  class CodePipelineClient;

    typedef std::function<void(const CodePipelineClient*, const Model::AcknowledgeJobRequest&, const Model::AcknowledgeJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AcknowledgeJobResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::AcknowledgeThirdPartyJobRequest&, const Model::AcknowledgeThirdPartyJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AcknowledgeThirdPartyJobResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::CreateCustomActionTypeRequest&, const Model::CreateCustomActionTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCustomActionTypeResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::CreatePipelineRequest&, const Model::CreatePipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePipelineResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::DeleteCustomActionTypeRequest&, const Model::DeleteCustomActionTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCustomActionTypeResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::DeletePipelineRequest&, const Model::DeletePipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePipelineResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::DeleteWebhookRequest&, const Model::DeleteWebhookOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWebhookResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::DeregisterWebhookWithThirdPartyRequest&, const Model::DeregisterWebhookWithThirdPartyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterWebhookWithThirdPartyResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::DisableStageTransitionRequest&, const Model::DisableStageTransitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableStageTransitionResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::EnableStageTransitionRequest&, const Model::EnableStageTransitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableStageTransitionResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::GetActionTypeRequest&, const Model::GetActionTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetActionTypeResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::GetJobDetailsRequest&, const Model::GetJobDetailsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetJobDetailsResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::GetPipelineRequest&, const Model::GetPipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPipelineResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::GetPipelineExecutionRequest&, const Model::GetPipelineExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPipelineExecutionResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::GetPipelineStateRequest&, const Model::GetPipelineStateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPipelineStateResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::GetThirdPartyJobDetailsRequest&, const Model::GetThirdPartyJobDetailsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetThirdPartyJobDetailsResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::ListActionExecutionsRequest&, const Model::ListActionExecutionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListActionExecutionsResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::ListActionTypesRequest&, const Model::ListActionTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListActionTypesResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::ListPipelineExecutionsRequest&, const Model::ListPipelineExecutionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPipelineExecutionsResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::ListPipelinesRequest&, const Model::ListPipelinesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPipelinesResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::ListWebhooksRequest&, const Model::ListWebhooksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListWebhooksResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::PollForJobsRequest&, const Model::PollForJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PollForJobsResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::PollForThirdPartyJobsRequest&, const Model::PollForThirdPartyJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PollForThirdPartyJobsResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::PutActionRevisionRequest&, const Model::PutActionRevisionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutActionRevisionResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::PutApprovalResultRequest&, const Model::PutApprovalResultOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutApprovalResultResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::PutJobFailureResultRequest&, const Model::PutJobFailureResultOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutJobFailureResultResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::PutJobSuccessResultRequest&, const Model::PutJobSuccessResultOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutJobSuccessResultResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::PutThirdPartyJobFailureResultRequest&, const Model::PutThirdPartyJobFailureResultOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutThirdPartyJobFailureResultResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::PutThirdPartyJobSuccessResultRequest&, const Model::PutThirdPartyJobSuccessResultOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutThirdPartyJobSuccessResultResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::PutWebhookRequest&, const Model::PutWebhookOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutWebhookResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::RegisterWebhookWithThirdPartyRequest&, const Model::RegisterWebhookWithThirdPartyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterWebhookWithThirdPartyResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::RetryStageExecutionRequest&, const Model::RetryStageExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RetryStageExecutionResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::StartPipelineExecutionRequest&, const Model::StartPipelineExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartPipelineExecutionResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::StopPipelineExecutionRequest&, const Model::StopPipelineExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopPipelineExecutionResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::UpdateActionTypeRequest&, const Model::UpdateActionTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateActionTypeResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::UpdatePipelineRequest&, const Model::UpdatePipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePipelineResponseReceivedHandler;

  /**
   * <fullname>AWS CodePipeline</fullname> <p> <b>Overview</b> </p> <p>This is the
   * AWS CodePipeline API Reference. This guide provides descriptions of the actions
   * and data types for AWS CodePipeline. Some functionality for your pipeline can
   * only be configured through the API. For more information, see the <a
   * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/welcome.html">AWS
   * CodePipeline User Guide</a>.</p> <p>You can use the AWS CodePipeline API to work
   * with pipelines, stages, actions, and transitions.</p> <p> <i>Pipelines</i> are
   * models of automated release processes. Each pipeline is uniquely named, and
   * consists of stages, actions, and transitions. </p> <p>You can work with
   * pipelines by calling:</p> <ul> <li> <p> <a>CreatePipeline</a>, which creates a
   * uniquely named pipeline.</p> </li> <li> <p> <a>DeletePipeline</a>, which deletes
   * the specified pipeline.</p> </li> <li> <p> <a>GetPipeline</a>, which returns
   * information about the pipeline structure and pipeline metadata, including the
   * pipeline Amazon Resource Name (ARN).</p> </li> <li> <p>
   * <a>GetPipelineExecution</a>, which returns information about a specific
   * execution of a pipeline.</p> </li> <li> <p> <a>GetPipelineState</a>, which
   * returns information about the current state of the stages and actions of a
   * pipeline.</p> </li> <li> <p> <a>ListActionExecutions</a>, which returns
   * action-level details for past executions. The details include full stage and
   * action-level details, including individual action duration, status, any errors
   * that occurred during the execution, and input and output artifact location
   * details.</p> </li> <li> <p> <a>ListPipelines</a>, which gets a summary of all of
   * the pipelines associated with your account.</p> </li> <li> <p>
   * <a>ListPipelineExecutions</a>, which gets a summary of the most recent
   * executions for a pipeline.</p> </li> <li> <p> <a>StartPipelineExecution</a>,
   * which runs the most recent revision of an artifact through the pipeline.</p>
   * </li> <li> <p> <a>StopPipelineExecution</a>, which stops the specified pipeline
   * execution from continuing through the pipeline.</p> </li> <li> <p>
   * <a>UpdatePipeline</a>, which updates a pipeline with edits or changes to the
   * structure of the pipeline.</p> </li> </ul> <p>Pipelines include <i>stages</i>.
   * Each stage contains one or more actions that must complete before the next stage
   * begins. A stage results in success or failure. If a stage fails, the pipeline
   * stops at that stage and remains stopped until either a new version of an
   * artifact appears in the source location, or a user takes action to rerun the
   * most recent artifact through the pipeline. You can call <a>GetPipelineState</a>,
   * which displays the status of a pipeline, including the status of stages in the
   * pipeline, or <a>GetPipeline</a>, which returns the entire structure of the
   * pipeline, including the stages of that pipeline. For more information about the
   * structure of stages and actions, see <a
   * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/pipeline-structure.html">AWS
   * CodePipeline Pipeline Structure Reference</a>.</p> <p>Pipeline stages include
   * <i>actions</i> that are categorized into categories such as source or build
   * actions performed in a stage of a pipeline. For example, you can use a source
   * action to import artifacts into a pipeline from a source such as Amazon S3. Like
   * stages, you do not work with actions directly in most cases, but you do define
   * and interact with actions when working with pipeline operations such as
   * <a>CreatePipeline</a> and <a>GetPipelineState</a>. Valid action categories
   * are:</p> <ul> <li> <p>Source</p> </li> <li> <p>Build</p> </li> <li> <p>Test</p>
   * </li> <li> <p>Deploy</p> </li> <li> <p>Approval</p> </li> <li> <p>Invoke</p>
   * </li> </ul> <p>Pipelines also include <i>transitions</i>, which allow the
   * transition of artifacts from one stage to the next in a pipeline after the
   * actions in one stage complete.</p> <p>You can work with transitions by
   * calling:</p> <ul> <li> <p> <a>DisableStageTransition</a>, which prevents
   * artifacts from transitioning to the next stage in a pipeline.</p> </li> <li> <p>
   * <a>EnableStageTransition</a>, which enables transition of artifacts between
   * stages in a pipeline. </p> </li> </ul> <p> <b>Using the API to integrate with
   * AWS CodePipeline</b> </p> <p>For third-party integrators or developers who want
   * to create their own integrations with AWS CodePipeline, the expected sequence
   * varies from the standard API user. To integrate with AWS CodePipeline,
   * developers need to work with the following items:</p> <p> <b>Jobs</b>, which are
   * instances of an action. For example, a job for a source action might import a
   * revision of an artifact from a source. </p> <p>You can work with jobs by
   * calling:</p> <ul> <li> <p> <a>AcknowledgeJob</a>, which confirms whether a job
   * worker has received the specified job.</p> </li> <li> <p> <a>GetJobDetails</a>,
   * which returns the details of a job.</p> </li> <li> <p> <a>PollForJobs</a>, which
   * determines whether there are any jobs to act on.</p> </li> <li> <p>
   * <a>PutJobFailureResult</a>, which provides details of a job failure. </p> </li>
   * <li> <p> <a>PutJobSuccessResult</a>, which provides details of a job
   * success.</p> </li> </ul> <p> <b>Third party jobs</b>, which are instances of an
   * action created by a partner action and integrated into AWS CodePipeline. Partner
   * actions are created by members of the AWS Partner Network.</p> <p>You can work
   * with third party jobs by calling:</p> <ul> <li> <p>
   * <a>AcknowledgeThirdPartyJob</a>, which confirms whether a job worker has
   * received the specified job.</p> </li> <li> <p> <a>GetThirdPartyJobDetails</a>,
   * which requests the details of a job for a partner action.</p> </li> <li> <p>
   * <a>PollForThirdPartyJobs</a>, which determines whether there are any jobs to act
   * on. </p> </li> <li> <p> <a>PutThirdPartyJobFailureResult</a>, which provides
   * details of a job failure.</p> </li> <li> <p>
   * <a>PutThirdPartyJobSuccessResult</a>, which provides details of a job
   * success.</p> </li> </ul>
   */
  class AWS_CODEPIPELINE_API CodePipelineClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodePipelineClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodePipelineClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CodePipelineClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~CodePipelineClient();


        /**
         * <p>Returns information about a specified job and whether that job has been
         * received by the job worker. Used for custom actions only.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/AcknowledgeJob">AWS
         * API Reference</a></p>
         */
        virtual Model::AcknowledgeJobOutcome AcknowledgeJob(const Model::AcknowledgeJobRequest& request) const;

        /**
         * <p>Returns information about a specified job and whether that job has been
         * received by the job worker. Used for custom actions only.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/AcknowledgeJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AcknowledgeJobOutcomeCallable AcknowledgeJobCallable(const Model::AcknowledgeJobRequest& request) const;

        /**
         * <p>Returns information about a specified job and whether that job has been
         * received by the job worker. Used for custom actions only.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/AcknowledgeJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AcknowledgeJobAsync(const Model::AcknowledgeJobRequest& request, const AcknowledgeJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Confirms a job worker has received the specified job. Used for partner
         * actions only.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/AcknowledgeThirdPartyJob">AWS
         * API Reference</a></p>
         */
        virtual Model::AcknowledgeThirdPartyJobOutcome AcknowledgeThirdPartyJob(const Model::AcknowledgeThirdPartyJobRequest& request) const;

        /**
         * <p>Confirms a job worker has received the specified job. Used for partner
         * actions only.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/AcknowledgeThirdPartyJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AcknowledgeThirdPartyJobOutcomeCallable AcknowledgeThirdPartyJobCallable(const Model::AcknowledgeThirdPartyJobRequest& request) const;

        /**
         * <p>Confirms a job worker has received the specified job. Used for partner
         * actions only.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/AcknowledgeThirdPartyJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AcknowledgeThirdPartyJobAsync(const Model::AcknowledgeThirdPartyJobRequest& request, const AcknowledgeThirdPartyJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new custom action that can be used in all pipelines associated with
         * the AWS account. Only used for custom actions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/CreateCustomActionType">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCustomActionTypeOutcome CreateCustomActionType(const Model::CreateCustomActionTypeRequest& request) const;

        /**
         * <p>Creates a new custom action that can be used in all pipelines associated with
         * the AWS account. Only used for custom actions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/CreateCustomActionType">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCustomActionTypeOutcomeCallable CreateCustomActionTypeCallable(const Model::CreateCustomActionTypeRequest& request) const;

        /**
         * <p>Creates a new custom action that can be used in all pipelines associated with
         * the AWS account. Only used for custom actions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/CreateCustomActionType">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCustomActionTypeAsync(const Model::CreateCustomActionTypeRequest& request, const CreateCustomActionTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a pipeline.</p>  <p>In the pipeline structure, you must include
         * either <code>artifactStore</code> or <code>artifactStores</code> in your
         * pipeline, but you cannot use both. If you create a cross-region action in your
         * pipeline, you must use <code>artifactStores</code>.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/CreatePipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePipelineOutcome CreatePipeline(const Model::CreatePipelineRequest& request) const;

        /**
         * <p>Creates a pipeline.</p>  <p>In the pipeline structure, you must include
         * either <code>artifactStore</code> or <code>artifactStores</code> in your
         * pipeline, but you cannot use both. If you create a cross-region action in your
         * pipeline, you must use <code>artifactStores</code>.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/CreatePipeline">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePipelineOutcomeCallable CreatePipelineCallable(const Model::CreatePipelineRequest& request) const;

        /**
         * <p>Creates a pipeline.</p>  <p>In the pipeline structure, you must include
         * either <code>artifactStore</code> or <code>artifactStores</code> in your
         * pipeline, but you cannot use both. If you create a cross-region action in your
         * pipeline, you must use <code>artifactStores</code>.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/CreatePipeline">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePipelineAsync(const Model::CreatePipelineRequest& request, const CreatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Marks a custom action as deleted. <code>PollForJobs</code> for the custom
         * action fails after the action is marked for deletion. Used for custom actions
         * only.</p>  <p>To re-create a custom action after it has been deleted
         * you must use a string in the version field that has never been used before. This
         * string can be an incremented version number, for example. To restore a deleted
         * custom action, use a JSON file that is identical to the deleted action,
         * including the original string in the version field.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/DeleteCustomActionType">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCustomActionTypeOutcome DeleteCustomActionType(const Model::DeleteCustomActionTypeRequest& request) const;

        /**
         * <p>Marks a custom action as deleted. <code>PollForJobs</code> for the custom
         * action fails after the action is marked for deletion. Used for custom actions
         * only.</p>  <p>To re-create a custom action after it has been deleted
         * you must use a string in the version field that has never been used before. This
         * string can be an incremented version number, for example. To restore a deleted
         * custom action, use a JSON file that is identical to the deleted action,
         * including the original string in the version field.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/DeleteCustomActionType">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCustomActionTypeOutcomeCallable DeleteCustomActionTypeCallable(const Model::DeleteCustomActionTypeRequest& request) const;

        /**
         * <p>Marks a custom action as deleted. <code>PollForJobs</code> for the custom
         * action fails after the action is marked for deletion. Used for custom actions
         * only.</p>  <p>To re-create a custom action after it has been deleted
         * you must use a string in the version field that has never been used before. This
         * string can be an incremented version number, for example. To restore a deleted
         * custom action, use a JSON file that is identical to the deleted action,
         * including the original string in the version field.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/DeleteCustomActionType">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCustomActionTypeAsync(const Model::DeleteCustomActionTypeRequest& request, const DeleteCustomActionTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/DeletePipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePipelineOutcome DeletePipeline(const Model::DeletePipelineRequest& request) const;

        /**
         * <p>Deletes the specified pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/DeletePipeline">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePipelineOutcomeCallable DeletePipelineCallable(const Model::DeletePipelineRequest& request) const;

        /**
         * <p>Deletes the specified pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/DeletePipeline">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePipelineAsync(const Model::DeletePipelineRequest& request, const DeletePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a previously created webhook by name. Deleting the webhook stops AWS
         * CodePipeline from starting a pipeline every time an external event occurs. The
         * API returns successfully when trying to delete a webhook that is already
         * deleted. If a deleted webhook is re-created by calling PutWebhook with the same
         * name, it will have a different URL.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/DeleteWebhook">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWebhookOutcome DeleteWebhook(const Model::DeleteWebhookRequest& request) const;

        /**
         * <p>Deletes a previously created webhook by name. Deleting the webhook stops AWS
         * CodePipeline from starting a pipeline every time an external event occurs. The
         * API returns successfully when trying to delete a webhook that is already
         * deleted. If a deleted webhook is re-created by calling PutWebhook with the same
         * name, it will have a different URL.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/DeleteWebhook">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteWebhookOutcomeCallable DeleteWebhookCallable(const Model::DeleteWebhookRequest& request) const;

        /**
         * <p>Deletes a previously created webhook by name. Deleting the webhook stops AWS
         * CodePipeline from starting a pipeline every time an external event occurs. The
         * API returns successfully when trying to delete a webhook that is already
         * deleted. If a deleted webhook is re-created by calling PutWebhook with the same
         * name, it will have a different URL.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/DeleteWebhook">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteWebhookAsync(const Model::DeleteWebhookRequest& request, const DeleteWebhookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the connection between the webhook that was created by CodePipeline
         * and the external tool with events to be detected. Currently supported only for
         * webhooks that target an action type of GitHub.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/DeregisterWebhookWithThirdParty">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterWebhookWithThirdPartyOutcome DeregisterWebhookWithThirdParty(const Model::DeregisterWebhookWithThirdPartyRequest& request) const;

        /**
         * <p>Removes the connection between the webhook that was created by CodePipeline
         * and the external tool with events to be detected. Currently supported only for
         * webhooks that target an action type of GitHub.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/DeregisterWebhookWithThirdParty">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeregisterWebhookWithThirdPartyOutcomeCallable DeregisterWebhookWithThirdPartyCallable(const Model::DeregisterWebhookWithThirdPartyRequest& request) const;

        /**
         * <p>Removes the connection between the webhook that was created by CodePipeline
         * and the external tool with events to be detected. Currently supported only for
         * webhooks that target an action type of GitHub.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/DeregisterWebhookWithThirdParty">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeregisterWebhookWithThirdPartyAsync(const Model::DeregisterWebhookWithThirdPartyRequest& request, const DeregisterWebhookWithThirdPartyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Prevents artifacts in a pipeline from transitioning to the next stage in the
         * pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/DisableStageTransition">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableStageTransitionOutcome DisableStageTransition(const Model::DisableStageTransitionRequest& request) const;

        /**
         * <p>Prevents artifacts in a pipeline from transitioning to the next stage in the
         * pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/DisableStageTransition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableStageTransitionOutcomeCallable DisableStageTransitionCallable(const Model::DisableStageTransitionRequest& request) const;

        /**
         * <p>Prevents artifacts in a pipeline from transitioning to the next stage in the
         * pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/DisableStageTransition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableStageTransitionAsync(const Model::DisableStageTransitionRequest& request, const DisableStageTransitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables artifacts in a pipeline to transition to a stage in a
         * pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/EnableStageTransition">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableStageTransitionOutcome EnableStageTransition(const Model::EnableStageTransitionRequest& request) const;

        /**
         * <p>Enables artifacts in a pipeline to transition to a stage in a
         * pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/EnableStageTransition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableStageTransitionOutcomeCallable EnableStageTransitionCallable(const Model::EnableStageTransitionRequest& request) const;

        /**
         * <p>Enables artifacts in a pipeline to transition to a stage in a
         * pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/EnableStageTransition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableStageTransitionAsync(const Model::EnableStageTransitionRequest& request, const EnableStageTransitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about an action type created for an external provider,
         * where the action is to be used by customers of the external provider. The action
         * can be created with any supported integration model.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/GetActionType">AWS
         * API Reference</a></p>
         */
        virtual Model::GetActionTypeOutcome GetActionType(const Model::GetActionTypeRequest& request) const;

        /**
         * <p>Returns information about an action type created for an external provider,
         * where the action is to be used by customers of the external provider. The action
         * can be created with any supported integration model.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/GetActionType">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetActionTypeOutcomeCallable GetActionTypeCallable(const Model::GetActionTypeRequest& request) const;

        /**
         * <p>Returns information about an action type created for an external provider,
         * where the action is to be used by customers of the external provider. The action
         * can be created with any supported integration model.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/GetActionType">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetActionTypeAsync(const Model::GetActionTypeRequest& request, const GetActionTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a job. Used for custom actions only.</p>
         *  <p>When this API is called, AWS CodePipeline returns temporary
         * credentials for the S3 bucket used to store artifacts for the pipeline, if the
         * action requires access to that S3 bucket for input or output artifacts. This API
         * also returns any secret values defined for the action.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/GetJobDetails">AWS
         * API Reference</a></p>
         */
        virtual Model::GetJobDetailsOutcome GetJobDetails(const Model::GetJobDetailsRequest& request) const;

        /**
         * <p>Returns information about a job. Used for custom actions only.</p>
         *  <p>When this API is called, AWS CodePipeline returns temporary
         * credentials for the S3 bucket used to store artifacts for the pipeline, if the
         * action requires access to that S3 bucket for input or output artifacts. This API
         * also returns any secret values defined for the action.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/GetJobDetails">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetJobDetailsOutcomeCallable GetJobDetailsCallable(const Model::GetJobDetailsRequest& request) const;

        /**
         * <p>Returns information about a job. Used for custom actions only.</p>
         *  <p>When this API is called, AWS CodePipeline returns temporary
         * credentials for the S3 bucket used to store artifacts for the pipeline, if the
         * action requires access to that S3 bucket for input or output artifacts. This API
         * also returns any secret values defined for the action.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/GetJobDetails">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetJobDetailsAsync(const Model::GetJobDetailsRequest& request, const GetJobDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the metadata, structure, stages, and actions of a pipeline. Can be
         * used to return the entire structure of a pipeline in JSON format, which can then
         * be modified and used to update the pipeline structure with
         * <a>UpdatePipeline</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/GetPipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPipelineOutcome GetPipeline(const Model::GetPipelineRequest& request) const;

        /**
         * <p>Returns the metadata, structure, stages, and actions of a pipeline. Can be
         * used to return the entire structure of a pipeline in JSON format, which can then
         * be modified and used to update the pipeline structure with
         * <a>UpdatePipeline</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/GetPipeline">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPipelineOutcomeCallable GetPipelineCallable(const Model::GetPipelineRequest& request) const;

        /**
         * <p>Returns the metadata, structure, stages, and actions of a pipeline. Can be
         * used to return the entire structure of a pipeline in JSON format, which can then
         * be modified and used to update the pipeline structure with
         * <a>UpdatePipeline</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/GetPipeline">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPipelineAsync(const Model::GetPipelineRequest& request, const GetPipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about an execution of a pipeline, including details about
         * artifacts, the pipeline execution ID, and the name, version, and status of the
         * pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/GetPipelineExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPipelineExecutionOutcome GetPipelineExecution(const Model::GetPipelineExecutionRequest& request) const;

        /**
         * <p>Returns information about an execution of a pipeline, including details about
         * artifacts, the pipeline execution ID, and the name, version, and status of the
         * pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/GetPipelineExecution">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPipelineExecutionOutcomeCallable GetPipelineExecutionCallable(const Model::GetPipelineExecutionRequest& request) const;

        /**
         * <p>Returns information about an execution of a pipeline, including details about
         * artifacts, the pipeline execution ID, and the name, version, and status of the
         * pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/GetPipelineExecution">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPipelineExecutionAsync(const Model::GetPipelineExecutionRequest& request, const GetPipelineExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the state of a pipeline, including the stages and
         * actions.</p>  <p>Values returned in the <code>revisionId</code> and
         * <code>revisionUrl</code> fields indicate the source revision information, such
         * as the commit ID, for the current state.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/GetPipelineState">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPipelineStateOutcome GetPipelineState(const Model::GetPipelineStateRequest& request) const;

        /**
         * <p>Returns information about the state of a pipeline, including the stages and
         * actions.</p>  <p>Values returned in the <code>revisionId</code> and
         * <code>revisionUrl</code> fields indicate the source revision information, such
         * as the commit ID, for the current state.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/GetPipelineState">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPipelineStateOutcomeCallable GetPipelineStateCallable(const Model::GetPipelineStateRequest& request) const;

        /**
         * <p>Returns information about the state of a pipeline, including the stages and
         * actions.</p>  <p>Values returned in the <code>revisionId</code> and
         * <code>revisionUrl</code> fields indicate the source revision information, such
         * as the commit ID, for the current state.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/GetPipelineState">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPipelineStateAsync(const Model::GetPipelineStateRequest& request, const GetPipelineStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Requests the details of a job for a third party action. Used for partner
         * actions only.</p>  <p>When this API is called, AWS CodePipeline
         * returns temporary credentials for the S3 bucket used to store artifacts for the
         * pipeline, if the action requires access to that S3 bucket for input or output
         * artifacts. This API also returns any secret values defined for the action.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/GetThirdPartyJobDetails">AWS
         * API Reference</a></p>
         */
        virtual Model::GetThirdPartyJobDetailsOutcome GetThirdPartyJobDetails(const Model::GetThirdPartyJobDetailsRequest& request) const;

        /**
         * <p>Requests the details of a job for a third party action. Used for partner
         * actions only.</p>  <p>When this API is called, AWS CodePipeline
         * returns temporary credentials for the S3 bucket used to store artifacts for the
         * pipeline, if the action requires access to that S3 bucket for input or output
         * artifacts. This API also returns any secret values defined for the action.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/GetThirdPartyJobDetails">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetThirdPartyJobDetailsOutcomeCallable GetThirdPartyJobDetailsCallable(const Model::GetThirdPartyJobDetailsRequest& request) const;

        /**
         * <p>Requests the details of a job for a third party action. Used for partner
         * actions only.</p>  <p>When this API is called, AWS CodePipeline
         * returns temporary credentials for the S3 bucket used to store artifacts for the
         * pipeline, if the action requires access to that S3 bucket for input or output
         * artifacts. This API also returns any secret values defined for the action.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/GetThirdPartyJobDetails">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetThirdPartyJobDetailsAsync(const Model::GetThirdPartyJobDetailsRequest& request, const GetThirdPartyJobDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the action executions that have occurred in a pipeline.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ListActionExecutions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListActionExecutionsOutcome ListActionExecutions(const Model::ListActionExecutionsRequest& request) const;

        /**
         * <p>Lists the action executions that have occurred in a pipeline.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ListActionExecutions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListActionExecutionsOutcomeCallable ListActionExecutionsCallable(const Model::ListActionExecutionsRequest& request) const;

        /**
         * <p>Lists the action executions that have occurred in a pipeline.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ListActionExecutions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListActionExecutionsAsync(const Model::ListActionExecutionsRequest& request, const ListActionExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a summary of all AWS CodePipeline action types associated with your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ListActionTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListActionTypesOutcome ListActionTypes(const Model::ListActionTypesRequest& request) const;

        /**
         * <p>Gets a summary of all AWS CodePipeline action types associated with your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ListActionTypes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListActionTypesOutcomeCallable ListActionTypesCallable(const Model::ListActionTypesRequest& request) const;

        /**
         * <p>Gets a summary of all AWS CodePipeline action types associated with your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ListActionTypes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListActionTypesAsync(const Model::ListActionTypesRequest& request, const ListActionTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a summary of the most recent executions for a pipeline.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ListPipelineExecutions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPipelineExecutionsOutcome ListPipelineExecutions(const Model::ListPipelineExecutionsRequest& request) const;

        /**
         * <p>Gets a summary of the most recent executions for a pipeline.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ListPipelineExecutions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPipelineExecutionsOutcomeCallable ListPipelineExecutionsCallable(const Model::ListPipelineExecutionsRequest& request) const;

        /**
         * <p>Gets a summary of the most recent executions for a pipeline.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ListPipelineExecutions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPipelineExecutionsAsync(const Model::ListPipelineExecutionsRequest& request, const ListPipelineExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a summary of all of the pipelines associated with your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ListPipelines">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPipelinesOutcome ListPipelines(const Model::ListPipelinesRequest& request) const;

        /**
         * <p>Gets a summary of all of the pipelines associated with your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ListPipelines">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPipelinesOutcomeCallable ListPipelinesCallable(const Model::ListPipelinesRequest& request) const;

        /**
         * <p>Gets a summary of all of the pipelines associated with your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ListPipelines">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPipelinesAsync(const Model::ListPipelinesRequest& request, const ListPipelinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the set of key-value pairs (metadata) that are used to manage the
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Gets the set of key-value pairs (metadata) that are used to manage the
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Gets the set of key-value pairs (metadata) that are used to manage the
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a listing of all the webhooks in this AWS Region for this account. The
         * output lists all webhooks and includes the webhook URL and ARN and the
         * configuration for each webhook.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ListWebhooks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWebhooksOutcome ListWebhooks(const Model::ListWebhooksRequest& request) const;

        /**
         * <p>Gets a listing of all the webhooks in this AWS Region for this account. The
         * output lists all webhooks and includes the webhook URL and ARN and the
         * configuration for each webhook.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ListWebhooks">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListWebhooksOutcomeCallable ListWebhooksCallable(const Model::ListWebhooksRequest& request) const;

        /**
         * <p>Gets a listing of all the webhooks in this AWS Region for this account. The
         * output lists all webhooks and includes the webhook URL and ARN and the
         * configuration for each webhook.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ListWebhooks">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListWebhooksAsync(const Model::ListWebhooksRequest& request, const ListWebhooksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about any jobs for AWS CodePipeline to act on.
         * <code>PollForJobs</code> is valid only for action types with "Custom" in the
         * owner field. If the action type contains "AWS" or "ThirdParty" in the owner
         * field, the <code>PollForJobs</code> action returns an error.</p> 
         * <p>When this API is called, AWS CodePipeline returns temporary credentials for
         * the S3 bucket used to store artifacts for the pipeline, if the action requires
         * access to that S3 bucket for input or output artifacts. This API also returns
         * any secret values defined for the action.</p> <p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/PollForJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::PollForJobsOutcome PollForJobs(const Model::PollForJobsRequest& request) const;

        /**
         * <p>Returns information about any jobs for AWS CodePipeline to act on.
         * <code>PollForJobs</code> is valid only for action types with "Custom" in the
         * owner field. If the action type contains "AWS" or "ThirdParty" in the owner
         * field, the <code>PollForJobs</code> action returns an error.</p> 
         * <p>When this API is called, AWS CodePipeline returns temporary credentials for
         * the S3 bucket used to store artifacts for the pipeline, if the action requires
         * access to that S3 bucket for input or output artifacts. This API also returns
         * any secret values defined for the action.</p> <p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/PollForJobs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PollForJobsOutcomeCallable PollForJobsCallable(const Model::PollForJobsRequest& request) const;

        /**
         * <p>Returns information about any jobs for AWS CodePipeline to act on.
         * <code>PollForJobs</code> is valid only for action types with "Custom" in the
         * owner field. If the action type contains "AWS" or "ThirdParty" in the owner
         * field, the <code>PollForJobs</code> action returns an error.</p> 
         * <p>When this API is called, AWS CodePipeline returns temporary credentials for
         * the S3 bucket used to store artifacts for the pipeline, if the action requires
         * access to that S3 bucket for input or output artifacts. This API also returns
         * any secret values defined for the action.</p> <p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/PollForJobs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PollForJobsAsync(const Model::PollForJobsRequest& request, const PollForJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Determines whether there are any third party jobs for a job worker to act on.
         * Used for partner actions only.</p>  <p>When this API is called, AWS
         * CodePipeline returns temporary credentials for the S3 bucket used to store
         * artifacts for the pipeline, if the action requires access to that S3 bucket for
         * input or output artifacts.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/PollForThirdPartyJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::PollForThirdPartyJobsOutcome PollForThirdPartyJobs(const Model::PollForThirdPartyJobsRequest& request) const;

        /**
         * <p>Determines whether there are any third party jobs for a job worker to act on.
         * Used for partner actions only.</p>  <p>When this API is called, AWS
         * CodePipeline returns temporary credentials for the S3 bucket used to store
         * artifacts for the pipeline, if the action requires access to that S3 bucket for
         * input or output artifacts.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/PollForThirdPartyJobs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PollForThirdPartyJobsOutcomeCallable PollForThirdPartyJobsCallable(const Model::PollForThirdPartyJobsRequest& request) const;

        /**
         * <p>Determines whether there are any third party jobs for a job worker to act on.
         * Used for partner actions only.</p>  <p>When this API is called, AWS
         * CodePipeline returns temporary credentials for the S3 bucket used to store
         * artifacts for the pipeline, if the action requires access to that S3 bucket for
         * input or output artifacts.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/PollForThirdPartyJobs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PollForThirdPartyJobsAsync(const Model::PollForThirdPartyJobsRequest& request, const PollForThirdPartyJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides information to AWS CodePipeline about new revisions to a
         * source.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/PutActionRevision">AWS
         * API Reference</a></p>
         */
        virtual Model::PutActionRevisionOutcome PutActionRevision(const Model::PutActionRevisionRequest& request) const;

        /**
         * <p>Provides information to AWS CodePipeline about new revisions to a
         * source.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/PutActionRevision">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutActionRevisionOutcomeCallable PutActionRevisionCallable(const Model::PutActionRevisionRequest& request) const;

        /**
         * <p>Provides information to AWS CodePipeline about new revisions to a
         * source.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/PutActionRevision">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutActionRevisionAsync(const Model::PutActionRevisionRequest& request, const PutActionRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides the response to a manual approval request to AWS CodePipeline. Valid
         * responses include Approved and Rejected.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/PutApprovalResult">AWS
         * API Reference</a></p>
         */
        virtual Model::PutApprovalResultOutcome PutApprovalResult(const Model::PutApprovalResultRequest& request) const;

        /**
         * <p>Provides the response to a manual approval request to AWS CodePipeline. Valid
         * responses include Approved and Rejected.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/PutApprovalResult">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutApprovalResultOutcomeCallable PutApprovalResultCallable(const Model::PutApprovalResultRequest& request) const;

        /**
         * <p>Provides the response to a manual approval request to AWS CodePipeline. Valid
         * responses include Approved and Rejected.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/PutApprovalResult">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutApprovalResultAsync(const Model::PutApprovalResultRequest& request, const PutApprovalResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Represents the failure of a job as returned to the pipeline by a job worker.
         * Used for custom actions only.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/PutJobFailureResult">AWS
         * API Reference</a></p>
         */
        virtual Model::PutJobFailureResultOutcome PutJobFailureResult(const Model::PutJobFailureResultRequest& request) const;

        /**
         * <p>Represents the failure of a job as returned to the pipeline by a job worker.
         * Used for custom actions only.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/PutJobFailureResult">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutJobFailureResultOutcomeCallable PutJobFailureResultCallable(const Model::PutJobFailureResultRequest& request) const;

        /**
         * <p>Represents the failure of a job as returned to the pipeline by a job worker.
         * Used for custom actions only.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/PutJobFailureResult">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutJobFailureResultAsync(const Model::PutJobFailureResultRequest& request, const PutJobFailureResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Represents the success of a job as returned to the pipeline by a job worker.
         * Used for custom actions only.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/PutJobSuccessResult">AWS
         * API Reference</a></p>
         */
        virtual Model::PutJobSuccessResultOutcome PutJobSuccessResult(const Model::PutJobSuccessResultRequest& request) const;

        /**
         * <p>Represents the success of a job as returned to the pipeline by a job worker.
         * Used for custom actions only.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/PutJobSuccessResult">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutJobSuccessResultOutcomeCallable PutJobSuccessResultCallable(const Model::PutJobSuccessResultRequest& request) const;

        /**
         * <p>Represents the success of a job as returned to the pipeline by a job worker.
         * Used for custom actions only.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/PutJobSuccessResult">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutJobSuccessResultAsync(const Model::PutJobSuccessResultRequest& request, const PutJobSuccessResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Represents the failure of a third party job as returned to the pipeline by a
         * job worker. Used for partner actions only.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/PutThirdPartyJobFailureResult">AWS
         * API Reference</a></p>
         */
        virtual Model::PutThirdPartyJobFailureResultOutcome PutThirdPartyJobFailureResult(const Model::PutThirdPartyJobFailureResultRequest& request) const;

        /**
         * <p>Represents the failure of a third party job as returned to the pipeline by a
         * job worker. Used for partner actions only.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/PutThirdPartyJobFailureResult">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutThirdPartyJobFailureResultOutcomeCallable PutThirdPartyJobFailureResultCallable(const Model::PutThirdPartyJobFailureResultRequest& request) const;

        /**
         * <p>Represents the failure of a third party job as returned to the pipeline by a
         * job worker. Used for partner actions only.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/PutThirdPartyJobFailureResult">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutThirdPartyJobFailureResultAsync(const Model::PutThirdPartyJobFailureResultRequest& request, const PutThirdPartyJobFailureResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Represents the success of a third party job as returned to the pipeline by a
         * job worker. Used for partner actions only.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/PutThirdPartyJobSuccessResult">AWS
         * API Reference</a></p>
         */
        virtual Model::PutThirdPartyJobSuccessResultOutcome PutThirdPartyJobSuccessResult(const Model::PutThirdPartyJobSuccessResultRequest& request) const;

        /**
         * <p>Represents the success of a third party job as returned to the pipeline by a
         * job worker. Used for partner actions only.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/PutThirdPartyJobSuccessResult">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutThirdPartyJobSuccessResultOutcomeCallable PutThirdPartyJobSuccessResultCallable(const Model::PutThirdPartyJobSuccessResultRequest& request) const;

        /**
         * <p>Represents the success of a third party job as returned to the pipeline by a
         * job worker. Used for partner actions only.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/PutThirdPartyJobSuccessResult">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutThirdPartyJobSuccessResultAsync(const Model::PutThirdPartyJobSuccessResultRequest& request, const PutThirdPartyJobSuccessResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Defines a webhook and returns a unique webhook URL generated by CodePipeline.
         * This URL can be supplied to third party source hosting providers to call every
         * time there's a code change. When CodePipeline receives a POST request on this
         * URL, the pipeline defined in the webhook is started as long as the POST request
         * satisfied the authentication and filtering requirements supplied when defining
         * the webhook. RegisterWebhookWithThirdParty and DeregisterWebhookWithThirdParty
         * APIs can be used to automatically configure supported third parties to call the
         * generated webhook URL.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/PutWebhook">AWS
         * API Reference</a></p>
         */
        virtual Model::PutWebhookOutcome PutWebhook(const Model::PutWebhookRequest& request) const;

        /**
         * <p>Defines a webhook and returns a unique webhook URL generated by CodePipeline.
         * This URL can be supplied to third party source hosting providers to call every
         * time there's a code change. When CodePipeline receives a POST request on this
         * URL, the pipeline defined in the webhook is started as long as the POST request
         * satisfied the authentication and filtering requirements supplied when defining
         * the webhook. RegisterWebhookWithThirdParty and DeregisterWebhookWithThirdParty
         * APIs can be used to automatically configure supported third parties to call the
         * generated webhook URL.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/PutWebhook">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutWebhookOutcomeCallable PutWebhookCallable(const Model::PutWebhookRequest& request) const;

        /**
         * <p>Defines a webhook and returns a unique webhook URL generated by CodePipeline.
         * This URL can be supplied to third party source hosting providers to call every
         * time there's a code change. When CodePipeline receives a POST request on this
         * URL, the pipeline defined in the webhook is started as long as the POST request
         * satisfied the authentication and filtering requirements supplied when defining
         * the webhook. RegisterWebhookWithThirdParty and DeregisterWebhookWithThirdParty
         * APIs can be used to automatically configure supported third parties to call the
         * generated webhook URL.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/PutWebhook">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutWebhookAsync(const Model::PutWebhookRequest& request, const PutWebhookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Configures a connection between the webhook that was created and the external
         * tool with events to be detected.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/RegisterWebhookWithThirdParty">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterWebhookWithThirdPartyOutcome RegisterWebhookWithThirdParty(const Model::RegisterWebhookWithThirdPartyRequest& request) const;

        /**
         * <p>Configures a connection between the webhook that was created and the external
         * tool with events to be detected.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/RegisterWebhookWithThirdParty">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterWebhookWithThirdPartyOutcomeCallable RegisterWebhookWithThirdPartyCallable(const Model::RegisterWebhookWithThirdPartyRequest& request) const;

        /**
         * <p>Configures a connection between the webhook that was created and the external
         * tool with events to be detected.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/RegisterWebhookWithThirdParty">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterWebhookWithThirdPartyAsync(const Model::RegisterWebhookWithThirdPartyRequest& request, const RegisterWebhookWithThirdPartyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Resumes the pipeline execution by retrying the last failed actions in a
         * stage. You can retry a stage immediately if any of the actions in the stage
         * fail. When you retry, all actions that are still in progress continue working,
         * and failed actions are triggered again.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/RetryStageExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::RetryStageExecutionOutcome RetryStageExecution(const Model::RetryStageExecutionRequest& request) const;

        /**
         * <p>Resumes the pipeline execution by retrying the last failed actions in a
         * stage. You can retry a stage immediately if any of the actions in the stage
         * fail. When you retry, all actions that are still in progress continue working,
         * and failed actions are triggered again.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/RetryStageExecution">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RetryStageExecutionOutcomeCallable RetryStageExecutionCallable(const Model::RetryStageExecutionRequest& request) const;

        /**
         * <p>Resumes the pipeline execution by retrying the last failed actions in a
         * stage. You can retry a stage immediately if any of the actions in the stage
         * fail. When you retry, all actions that are still in progress continue working,
         * and failed actions are triggered again.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/RetryStageExecution">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RetryStageExecutionAsync(const Model::RetryStageExecutionRequest& request, const RetryStageExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts the specified pipeline. Specifically, it begins processing the latest
         * commit to the source location specified as part of the pipeline.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/StartPipelineExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::StartPipelineExecutionOutcome StartPipelineExecution(const Model::StartPipelineExecutionRequest& request) const;

        /**
         * <p>Starts the specified pipeline. Specifically, it begins processing the latest
         * commit to the source location specified as part of the pipeline.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/StartPipelineExecution">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartPipelineExecutionOutcomeCallable StartPipelineExecutionCallable(const Model::StartPipelineExecutionRequest& request) const;

        /**
         * <p>Starts the specified pipeline. Specifically, it begins processing the latest
         * commit to the source location specified as part of the pipeline.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/StartPipelineExecution">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartPipelineExecutionAsync(const Model::StartPipelineExecutionRequest& request, const StartPipelineExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops the specified pipeline execution. You choose to either stop the
         * pipeline execution by completing in-progress actions without starting subsequent
         * actions, or by abandoning in-progress actions. While completing or abandoning
         * in-progress actions, the pipeline execution is in a <code>Stopping</code> state.
         * After all in-progress actions are completed or abandoned, the pipeline execution
         * is in a <code>Stopped</code> state.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/StopPipelineExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::StopPipelineExecutionOutcome StopPipelineExecution(const Model::StopPipelineExecutionRequest& request) const;

        /**
         * <p>Stops the specified pipeline execution. You choose to either stop the
         * pipeline execution by completing in-progress actions without starting subsequent
         * actions, or by abandoning in-progress actions. While completing or abandoning
         * in-progress actions, the pipeline execution is in a <code>Stopping</code> state.
         * After all in-progress actions are completed or abandoned, the pipeline execution
         * is in a <code>Stopped</code> state.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/StopPipelineExecution">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopPipelineExecutionOutcomeCallable StopPipelineExecutionCallable(const Model::StopPipelineExecutionRequest& request) const;

        /**
         * <p>Stops the specified pipeline execution. You choose to either stop the
         * pipeline execution by completing in-progress actions without starting subsequent
         * actions, or by abandoning in-progress actions. While completing or abandoning
         * in-progress actions, the pipeline execution is in a <code>Stopping</code> state.
         * After all in-progress actions are completed or abandoned, the pipeline execution
         * is in a <code>Stopped</code> state.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/StopPipelineExecution">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopPipelineExecutionAsync(const Model::StopPipelineExecutionRequest& request, const StopPipelineExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds to or modifies the tags of the given resource. Tags are metadata that
         * can be used to manage a resource. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds to or modifies the tags of the given resource. Tags are metadata that
         * can be used to manage a resource. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds to or modifies the tags of the given resource. Tags are metadata that
         * can be used to manage a resource. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes tags from an AWS resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes tags from an AWS resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes tags from an AWS resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an action type that was created with any supported integration model,
         * where the action type is to be used by customers of the action type provider.
         * Use a JSON file with the action definition and <code>UpdateActionType</code> to
         * provide the full structure.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/UpdateActionType">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateActionTypeOutcome UpdateActionType(const Model::UpdateActionTypeRequest& request) const;

        /**
         * <p>Updates an action type that was created with any supported integration model,
         * where the action type is to be used by customers of the action type provider.
         * Use a JSON file with the action definition and <code>UpdateActionType</code> to
         * provide the full structure.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/UpdateActionType">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateActionTypeOutcomeCallable UpdateActionTypeCallable(const Model::UpdateActionTypeRequest& request) const;

        /**
         * <p>Updates an action type that was created with any supported integration model,
         * where the action type is to be used by customers of the action type provider.
         * Use a JSON file with the action definition and <code>UpdateActionType</code> to
         * provide the full structure.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/UpdateActionType">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateActionTypeAsync(const Model::UpdateActionTypeRequest& request, const UpdateActionTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a specified pipeline with edits or changes to its structure. Use a
         * JSON file with the pipeline structure and <code>UpdatePipeline</code> to provide
         * the full structure of the pipeline. Updating the pipeline increases the version
         * number of the pipeline by 1.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/UpdatePipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePipelineOutcome UpdatePipeline(const Model::UpdatePipelineRequest& request) const;

        /**
         * <p>Updates a specified pipeline with edits or changes to its structure. Use a
         * JSON file with the pipeline structure and <code>UpdatePipeline</code> to provide
         * the full structure of the pipeline. Updating the pipeline increases the version
         * number of the pipeline by 1.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/UpdatePipeline">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePipelineOutcomeCallable UpdatePipelineCallable(const Model::UpdatePipelineRequest& request) const;

        /**
         * <p>Updates a specified pipeline with edits or changes to its structure. Use a
         * JSON file with the pipeline structure and <code>UpdatePipeline</code> to provide
         * the full structure of the pipeline. Updating the pipeline increases the version
         * number of the pipeline by 1.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/UpdatePipeline">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePipelineAsync(const Model::UpdatePipelineRequest& request, const UpdatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AcknowledgeJobAsyncHelper(const Model::AcknowledgeJobRequest& request, const AcknowledgeJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AcknowledgeThirdPartyJobAsyncHelper(const Model::AcknowledgeThirdPartyJobRequest& request, const AcknowledgeThirdPartyJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateCustomActionTypeAsyncHelper(const Model::CreateCustomActionTypeRequest& request, const CreateCustomActionTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePipelineAsyncHelper(const Model::CreatePipelineRequest& request, const CreatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteCustomActionTypeAsyncHelper(const Model::DeleteCustomActionTypeRequest& request, const DeleteCustomActionTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePipelineAsyncHelper(const Model::DeletePipelineRequest& request, const DeletePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteWebhookAsyncHelper(const Model::DeleteWebhookRequest& request, const DeleteWebhookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeregisterWebhookWithThirdPartyAsyncHelper(const Model::DeregisterWebhookWithThirdPartyRequest& request, const DeregisterWebhookWithThirdPartyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisableStageTransitionAsyncHelper(const Model::DisableStageTransitionRequest& request, const DisableStageTransitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void EnableStageTransitionAsyncHelper(const Model::EnableStageTransitionRequest& request, const EnableStageTransitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetActionTypeAsyncHelper(const Model::GetActionTypeRequest& request, const GetActionTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetJobDetailsAsyncHelper(const Model::GetJobDetailsRequest& request, const GetJobDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPipelineAsyncHelper(const Model::GetPipelineRequest& request, const GetPipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPipelineExecutionAsyncHelper(const Model::GetPipelineExecutionRequest& request, const GetPipelineExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPipelineStateAsyncHelper(const Model::GetPipelineStateRequest& request, const GetPipelineStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetThirdPartyJobDetailsAsyncHelper(const Model::GetThirdPartyJobDetailsRequest& request, const GetThirdPartyJobDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListActionExecutionsAsyncHelper(const Model::ListActionExecutionsRequest& request, const ListActionExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListActionTypesAsyncHelper(const Model::ListActionTypesRequest& request, const ListActionTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPipelineExecutionsAsyncHelper(const Model::ListPipelineExecutionsRequest& request, const ListPipelineExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPipelinesAsyncHelper(const Model::ListPipelinesRequest& request, const ListPipelinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListWebhooksAsyncHelper(const Model::ListWebhooksRequest& request, const ListWebhooksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PollForJobsAsyncHelper(const Model::PollForJobsRequest& request, const PollForJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PollForThirdPartyJobsAsyncHelper(const Model::PollForThirdPartyJobsRequest& request, const PollForThirdPartyJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutActionRevisionAsyncHelper(const Model::PutActionRevisionRequest& request, const PutActionRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutApprovalResultAsyncHelper(const Model::PutApprovalResultRequest& request, const PutApprovalResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutJobFailureResultAsyncHelper(const Model::PutJobFailureResultRequest& request, const PutJobFailureResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutJobSuccessResultAsyncHelper(const Model::PutJobSuccessResultRequest& request, const PutJobSuccessResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutThirdPartyJobFailureResultAsyncHelper(const Model::PutThirdPartyJobFailureResultRequest& request, const PutThirdPartyJobFailureResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutThirdPartyJobSuccessResultAsyncHelper(const Model::PutThirdPartyJobSuccessResultRequest& request, const PutThirdPartyJobSuccessResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutWebhookAsyncHelper(const Model::PutWebhookRequest& request, const PutWebhookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RegisterWebhookWithThirdPartyAsyncHelper(const Model::RegisterWebhookWithThirdPartyRequest& request, const RegisterWebhookWithThirdPartyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RetryStageExecutionAsyncHelper(const Model::RetryStageExecutionRequest& request, const RetryStageExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartPipelineExecutionAsyncHelper(const Model::StartPipelineExecutionRequest& request, const StartPipelineExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopPipelineExecutionAsyncHelper(const Model::StopPipelineExecutionRequest& request, const StopPipelineExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateActionTypeAsyncHelper(const Model::UpdateActionTypeRequest& request, const UpdateActionTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdatePipelineAsyncHelper(const Model::UpdatePipelineRequest& request, const UpdatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace CodePipeline
} // namespace Aws
