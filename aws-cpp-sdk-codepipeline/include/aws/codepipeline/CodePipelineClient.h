﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/codepipeline/model/GetJobDetailsResult.h>
#include <aws/codepipeline/model/GetPipelineResult.h>
#include <aws/codepipeline/model/GetPipelineExecutionResult.h>
#include <aws/codepipeline/model/GetPipelineStateResult.h>
#include <aws/codepipeline/model/GetThirdPartyJobDetailsResult.h>
#include <aws/codepipeline/model/ListActionTypesResult.h>
#include <aws/codepipeline/model/ListPipelinesResult.h>
#include <aws/codepipeline/model/PollForJobsResult.h>
#include <aws/codepipeline/model/PollForThirdPartyJobsResult.h>
#include <aws/codepipeline/model/PutActionRevisionResult.h>
#include <aws/codepipeline/model/PutApprovalResultResult.h>
#include <aws/codepipeline/model/RetryStageExecutionResult.h>
#include <aws/codepipeline/model/StartPipelineExecutionResult.h>
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
        class DisableStageTransitionRequest;
        class EnableStageTransitionRequest;
        class GetJobDetailsRequest;
        class GetPipelineRequest;
        class GetPipelineExecutionRequest;
        class GetPipelineStateRequest;
        class GetThirdPartyJobDetailsRequest;
        class ListActionTypesRequest;
        class ListPipelinesRequest;
        class PollForJobsRequest;
        class PollForThirdPartyJobsRequest;
        class PutActionRevisionRequest;
        class PutApprovalResultRequest;
        class PutJobFailureResultRequest;
        class PutJobSuccessResultRequest;
        class PutThirdPartyJobFailureResultRequest;
        class PutThirdPartyJobSuccessResultRequest;
        class RetryStageExecutionRequest;
        class StartPipelineExecutionRequest;
        class UpdatePipelineRequest;

        typedef Aws::Utils::Outcome<AcknowledgeJobResult, Aws::Client::AWSError<CodePipelineErrors>> AcknowledgeJobOutcome;
        typedef Aws::Utils::Outcome<AcknowledgeThirdPartyJobResult, Aws::Client::AWSError<CodePipelineErrors>> AcknowledgeThirdPartyJobOutcome;
        typedef Aws::Utils::Outcome<CreateCustomActionTypeResult, Aws::Client::AWSError<CodePipelineErrors>> CreateCustomActionTypeOutcome;
        typedef Aws::Utils::Outcome<CreatePipelineResult, Aws::Client::AWSError<CodePipelineErrors>> CreatePipelineOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<CodePipelineErrors>> DeleteCustomActionTypeOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<CodePipelineErrors>> DeletePipelineOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<CodePipelineErrors>> DisableStageTransitionOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<CodePipelineErrors>> EnableStageTransitionOutcome;
        typedef Aws::Utils::Outcome<GetJobDetailsResult, Aws::Client::AWSError<CodePipelineErrors>> GetJobDetailsOutcome;
        typedef Aws::Utils::Outcome<GetPipelineResult, Aws::Client::AWSError<CodePipelineErrors>> GetPipelineOutcome;
        typedef Aws::Utils::Outcome<GetPipelineExecutionResult, Aws::Client::AWSError<CodePipelineErrors>> GetPipelineExecutionOutcome;
        typedef Aws::Utils::Outcome<GetPipelineStateResult, Aws::Client::AWSError<CodePipelineErrors>> GetPipelineStateOutcome;
        typedef Aws::Utils::Outcome<GetThirdPartyJobDetailsResult, Aws::Client::AWSError<CodePipelineErrors>> GetThirdPartyJobDetailsOutcome;
        typedef Aws::Utils::Outcome<ListActionTypesResult, Aws::Client::AWSError<CodePipelineErrors>> ListActionTypesOutcome;
        typedef Aws::Utils::Outcome<ListPipelinesResult, Aws::Client::AWSError<CodePipelineErrors>> ListPipelinesOutcome;
        typedef Aws::Utils::Outcome<PollForJobsResult, Aws::Client::AWSError<CodePipelineErrors>> PollForJobsOutcome;
        typedef Aws::Utils::Outcome<PollForThirdPartyJobsResult, Aws::Client::AWSError<CodePipelineErrors>> PollForThirdPartyJobsOutcome;
        typedef Aws::Utils::Outcome<PutActionRevisionResult, Aws::Client::AWSError<CodePipelineErrors>> PutActionRevisionOutcome;
        typedef Aws::Utils::Outcome<PutApprovalResultResult, Aws::Client::AWSError<CodePipelineErrors>> PutApprovalResultOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<CodePipelineErrors>> PutJobFailureResultOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<CodePipelineErrors>> PutJobSuccessResultOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<CodePipelineErrors>> PutThirdPartyJobFailureResultOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<CodePipelineErrors>> PutThirdPartyJobSuccessResultOutcome;
        typedef Aws::Utils::Outcome<RetryStageExecutionResult, Aws::Client::AWSError<CodePipelineErrors>> RetryStageExecutionOutcome;
        typedef Aws::Utils::Outcome<StartPipelineExecutionResult, Aws::Client::AWSError<CodePipelineErrors>> StartPipelineExecutionOutcome;
        typedef Aws::Utils::Outcome<UpdatePipelineResult, Aws::Client::AWSError<CodePipelineErrors>> UpdatePipelineOutcome;

        typedef std::future<AcknowledgeJobOutcome> AcknowledgeJobOutcomeCallable;
        typedef std::future<AcknowledgeThirdPartyJobOutcome> AcknowledgeThirdPartyJobOutcomeCallable;
        typedef std::future<CreateCustomActionTypeOutcome> CreateCustomActionTypeOutcomeCallable;
        typedef std::future<CreatePipelineOutcome> CreatePipelineOutcomeCallable;
        typedef std::future<DeleteCustomActionTypeOutcome> DeleteCustomActionTypeOutcomeCallable;
        typedef std::future<DeletePipelineOutcome> DeletePipelineOutcomeCallable;
        typedef std::future<DisableStageTransitionOutcome> DisableStageTransitionOutcomeCallable;
        typedef std::future<EnableStageTransitionOutcome> EnableStageTransitionOutcomeCallable;
        typedef std::future<GetJobDetailsOutcome> GetJobDetailsOutcomeCallable;
        typedef std::future<GetPipelineOutcome> GetPipelineOutcomeCallable;
        typedef std::future<GetPipelineExecutionOutcome> GetPipelineExecutionOutcomeCallable;
        typedef std::future<GetPipelineStateOutcome> GetPipelineStateOutcomeCallable;
        typedef std::future<GetThirdPartyJobDetailsOutcome> GetThirdPartyJobDetailsOutcomeCallable;
        typedef std::future<ListActionTypesOutcome> ListActionTypesOutcomeCallable;
        typedef std::future<ListPipelinesOutcome> ListPipelinesOutcomeCallable;
        typedef std::future<PollForJobsOutcome> PollForJobsOutcomeCallable;
        typedef std::future<PollForThirdPartyJobsOutcome> PollForThirdPartyJobsOutcomeCallable;
        typedef std::future<PutActionRevisionOutcome> PutActionRevisionOutcomeCallable;
        typedef std::future<PutApprovalResultOutcome> PutApprovalResultOutcomeCallable;
        typedef std::future<PutJobFailureResultOutcome> PutJobFailureResultOutcomeCallable;
        typedef std::future<PutJobSuccessResultOutcome> PutJobSuccessResultOutcomeCallable;
        typedef std::future<PutThirdPartyJobFailureResultOutcome> PutThirdPartyJobFailureResultOutcomeCallable;
        typedef std::future<PutThirdPartyJobSuccessResultOutcome> PutThirdPartyJobSuccessResultOutcomeCallable;
        typedef std::future<RetryStageExecutionOutcome> RetryStageExecutionOutcomeCallable;
        typedef std::future<StartPipelineExecutionOutcome> StartPipelineExecutionOutcomeCallable;
        typedef std::future<UpdatePipelineOutcome> UpdatePipelineOutcomeCallable;
} // namespace Model

  class CodePipelineClient;

    typedef std::function<void(const CodePipelineClient*, const Model::AcknowledgeJobRequest&, const Model::AcknowledgeJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AcknowledgeJobResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::AcknowledgeThirdPartyJobRequest&, const Model::AcknowledgeThirdPartyJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AcknowledgeThirdPartyJobResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::CreateCustomActionTypeRequest&, const Model::CreateCustomActionTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCustomActionTypeResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::CreatePipelineRequest&, const Model::CreatePipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePipelineResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::DeleteCustomActionTypeRequest&, const Model::DeleteCustomActionTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCustomActionTypeResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::DeletePipelineRequest&, const Model::DeletePipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePipelineResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::DisableStageTransitionRequest&, const Model::DisableStageTransitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableStageTransitionResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::EnableStageTransitionRequest&, const Model::EnableStageTransitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableStageTransitionResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::GetJobDetailsRequest&, const Model::GetJobDetailsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetJobDetailsResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::GetPipelineRequest&, const Model::GetPipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPipelineResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::GetPipelineExecutionRequest&, const Model::GetPipelineExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPipelineExecutionResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::GetPipelineStateRequest&, const Model::GetPipelineStateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPipelineStateResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::GetThirdPartyJobDetailsRequest&, const Model::GetThirdPartyJobDetailsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetThirdPartyJobDetailsResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::ListActionTypesRequest&, const Model::ListActionTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListActionTypesResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::ListPipelinesRequest&, const Model::ListPipelinesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPipelinesResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::PollForJobsRequest&, const Model::PollForJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PollForJobsResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::PollForThirdPartyJobsRequest&, const Model::PollForThirdPartyJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PollForThirdPartyJobsResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::PutActionRevisionRequest&, const Model::PutActionRevisionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutActionRevisionResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::PutApprovalResultRequest&, const Model::PutApprovalResultOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutApprovalResultResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::PutJobFailureResultRequest&, const Model::PutJobFailureResultOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutJobFailureResultResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::PutJobSuccessResultRequest&, const Model::PutJobSuccessResultOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutJobSuccessResultResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::PutThirdPartyJobFailureResultRequest&, const Model::PutThirdPartyJobFailureResultOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutThirdPartyJobFailureResultResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::PutThirdPartyJobSuccessResultRequest&, const Model::PutThirdPartyJobSuccessResultOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutThirdPartyJobSuccessResultResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::RetryStageExecutionRequest&, const Model::RetryStageExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RetryStageExecutionResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::StartPipelineExecutionRequest&, const Model::StartPipelineExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartPipelineExecutionResponseReceivedHandler;
    typedef std::function<void(const CodePipelineClient*, const Model::UpdatePipelineRequest&, const Model::UpdatePipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePipelineResponseReceivedHandler;

  /**
   * <fullname>AWS CodePipeline</fullname> <p> <b>Overview</b> </p> <p>This is the
   * AWS CodePipeline API Reference. This guide provides descriptions of the actions
   * and data types for AWS CodePipeline. Some functionality for your pipeline is
   * only configurable through the API. For additional information, see the <a
   * href="http://docs.aws.amazon.com/codepipeline/latest/userguide/welcome.html">AWS
   * CodePipeline User Guide</a>.</p> <p>You can use the AWS CodePipeline API to work
   * with pipelines, stages, actions, gates, and transitions, as described below.</p>
   * <p> <i>Pipelines</i> are models of automated release processes. Each pipeline is
   * uniquely named, and consists of actions, gates, and stages. </p> <p>You can work
   * with pipelines by calling:</p> <ul> <li> <p> <a>CreatePipeline</a>, which
   * creates a uniquely-named pipeline.</p> </li> <li> <p> <a>DeletePipeline</a>,
   * which deletes the specified pipeline.</p> </li> <li> <p> <a>GetPipeline</a>,
   * which returns information about a pipeline structure.</p> </li> <li> <p>
   * <a>GetPipelineExecution</a>, which returns information about a specific
   * execution of a pipeline.</p> </li> <li> <p> <a>GetPipelineState</a>, which
   * returns information about the current state of the stages and actions of a
   * pipeline.</p> </li> <li> <p> <a>ListPipelines</a>, which gets a summary of all
   * of the pipelines associated with your account.</p> </li> <li> <p>
   * <a>StartPipelineExecution</a>, which runs the the most recent revision of an
   * artifact through the pipeline.</p> </li> <li> <p> <a>UpdatePipeline</a>, which
   * updates a pipeline with edits or changes to the structure of the pipeline.</p>
   * </li> </ul> <p>Pipelines include <i>stages</i>, which are which are logical
   * groupings of gates and actions. Each stage contains one or more actions that
   * must complete before the next stage begins. A stage will result in success or
   * failure. If a stage fails, then the pipeline stops at that stage and will remain
   * stopped until either a new version of an artifact appears in the source
   * location, or a user takes action to re-run the most recent artifact through the
   * pipeline. You can call <a>GetPipelineState</a>, which displays the status of a
   * pipeline, including the status of stages in the pipeline, or <a>GetPipeline</a>,
   * which returns the entire structure of the pipeline, including the stages of that
   * pipeline. For more information about the structure of stages and actions, also
   * refer to the <a
   * href="http://docs.aws.amazon.com/codepipeline/latest/userguide/pipeline-structure.html">AWS
   * CodePipeline Pipeline Structure Reference</a>.</p> <p>Pipeline stages include
   * <i>actions</i>, which are categorized into categories such as source or build
   * actions performed within a stage of a pipeline. For example, you can use a
   * source action to import artifacts into a pipeline from a source such as Amazon
   * S3. Like stages, you do not work with actions directly in most cases, but you do
   * define and interact with actions when working with pipeline operations such as
   * <a>CreatePipeline</a> and <a>GetPipelineState</a>. </p> <p>Pipelines also
   * include <i>transitions</i>, which allow the transition of artifacts from one
   * stage to the next in a pipeline after the actions in one stage complete.</p>
   * <p>You can work with transitions by calling:</p> <ul> <li> <p>
   * <a>DisableStageTransition</a>, which prevents artifacts from transitioning to
   * the next stage in a pipeline.</p> </li> <li> <p> <a>EnableStageTransition</a>,
   * which enables transition of artifacts between stages in a pipeline. </p> </li>
   * </ul> <p> <b>Using the API to integrate with AWS CodePipeline</b> </p> <p>For
   * third-party integrators or developers who want to create their own integrations
   * with AWS CodePipeline, the expected sequence varies from the standard API user.
   * In order to integrate with AWS CodePipeline, developers will need to work with
   * the following items:</p> <p> <b>Jobs</b>, which are instances of an action. For
   * example, a job for a source action might import a revision of an artifact from a
   * source. </p> <p>You can work with jobs by calling:</p> <ul> <li> <p>
   * <a>AcknowledgeJob</a>, which confirms whether a job worker has received the
   * specified job,</p> </li> <li> <p> <a>GetJobDetails</a>, which returns the
   * details of a job,</p> </li> <li> <p> <a>PollForJobs</a>, which determines
   * whether there are any jobs to act upon, </p> </li> <li> <p>
   * <a>PutJobFailureResult</a>, which provides details of a job failure, and</p>
   * </li> <li> <p> <a>PutJobSuccessResult</a>, which provides details of a job
   * success.</p> </li> </ul> <p> <b>Third party jobs</b>, which are instances of an
   * action created by a partner action and integrated into AWS CodePipeline. Partner
   * actions are created by members of the AWS Partner Network.</p> <p>You can work
   * with third party jobs by calling:</p> <ul> <li> <p>
   * <a>AcknowledgeThirdPartyJob</a>, which confirms whether a job worker has
   * received the specified job,</p> </li> <li> <p> <a>GetThirdPartyJobDetails</a>,
   * which requests the details of a job for a partner action,</p> </li> <li> <p>
   * <a>PollForThirdPartyJobs</a>, which determines whether there are any jobs to act
   * upon, </p> </li> <li> <p> <a>PutThirdPartyJobFailureResult</a>, which provides
   * details of a job failure, and</p> </li> <li> <p>
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
        CodePipelineClient(const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodePipelineClient(const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CodePipelineClient(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
            const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

        virtual ~CodePipelineClient();

        /**
         * <p>Returns information about a specified job and whether that job has been
         * received by the job worker. Only used for custom actions.</p>
         */
        virtual Model::AcknowledgeJobOutcome AcknowledgeJob(const Model::AcknowledgeJobRequest& request) const;

        /**
         * <p>Returns information about a specified job and whether that job has been
         * received by the job worker. Only used for custom actions.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AcknowledgeJobOutcomeCallable AcknowledgeJobCallable(const Model::AcknowledgeJobRequest& request) const;

        /**
         * <p>Returns information about a specified job and whether that job has been
         * received by the job worker. Only used for custom actions.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AcknowledgeJobAsync(const Model::AcknowledgeJobRequest& request, const AcknowledgeJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Confirms a job worker has received the specified job. Only used for partner
         * actions.</p>
         */
        virtual Model::AcknowledgeThirdPartyJobOutcome AcknowledgeThirdPartyJob(const Model::AcknowledgeThirdPartyJobRequest& request) const;

        /**
         * <p>Confirms a job worker has received the specified job. Only used for partner
         * actions.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AcknowledgeThirdPartyJobOutcomeCallable AcknowledgeThirdPartyJobCallable(const Model::AcknowledgeThirdPartyJobRequest& request) const;

        /**
         * <p>Confirms a job worker has received the specified job. Only used for partner
         * actions.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AcknowledgeThirdPartyJobAsync(const Model::AcknowledgeThirdPartyJobRequest& request, const AcknowledgeThirdPartyJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new custom action that can be used in all pipelines associated with
         * the AWS account. Only used for custom actions.</p>
         */
        virtual Model::CreateCustomActionTypeOutcome CreateCustomActionType(const Model::CreateCustomActionTypeRequest& request) const;

        /**
         * <p>Creates a new custom action that can be used in all pipelines associated with
         * the AWS account. Only used for custom actions.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCustomActionTypeOutcomeCallable CreateCustomActionTypeCallable(const Model::CreateCustomActionTypeRequest& request) const;

        /**
         * <p>Creates a new custom action that can be used in all pipelines associated with
         * the AWS account. Only used for custom actions.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCustomActionTypeAsync(const Model::CreateCustomActionTypeRequest& request, const CreateCustomActionTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a pipeline.</p>
         */
        virtual Model::CreatePipelineOutcome CreatePipeline(const Model::CreatePipelineRequest& request) const;

        /**
         * <p>Creates a pipeline.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePipelineOutcomeCallable CreatePipelineCallable(const Model::CreatePipelineRequest& request) const;

        /**
         * <p>Creates a pipeline.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePipelineAsync(const Model::CreatePipelineRequest& request, const CreatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Marks a custom action as deleted. PollForJobs for the custom action will fail
         * after the action is marked for deletion. Only used for custom actions.</p>
         * <important> <p>You cannot recreate a custom action after it has been deleted
         * unless you increase the version number of the action.</p> </important>
         */
        virtual Model::DeleteCustomActionTypeOutcome DeleteCustomActionType(const Model::DeleteCustomActionTypeRequest& request) const;

        /**
         * <p>Marks a custom action as deleted. PollForJobs for the custom action will fail
         * after the action is marked for deletion. Only used for custom actions.</p>
         * <important> <p>You cannot recreate a custom action after it has been deleted
         * unless you increase the version number of the action.</p> </important>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCustomActionTypeOutcomeCallable DeleteCustomActionTypeCallable(const Model::DeleteCustomActionTypeRequest& request) const;

        /**
         * <p>Marks a custom action as deleted. PollForJobs for the custom action will fail
         * after the action is marked for deletion. Only used for custom actions.</p>
         * <important> <p>You cannot recreate a custom action after it has been deleted
         * unless you increase the version number of the action.</p> </important>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCustomActionTypeAsync(const Model::DeleteCustomActionTypeRequest& request, const DeleteCustomActionTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified pipeline.</p>
         */
        virtual Model::DeletePipelineOutcome DeletePipeline(const Model::DeletePipelineRequest& request) const;

        /**
         * <p>Deletes the specified pipeline.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePipelineOutcomeCallable DeletePipelineCallable(const Model::DeletePipelineRequest& request) const;

        /**
         * <p>Deletes the specified pipeline.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePipelineAsync(const Model::DeletePipelineRequest& request, const DeletePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Prevents artifacts in a pipeline from transitioning to the next stage in the
         * pipeline.</p>
         */
        virtual Model::DisableStageTransitionOutcome DisableStageTransition(const Model::DisableStageTransitionRequest& request) const;

        /**
         * <p>Prevents artifacts in a pipeline from transitioning to the next stage in the
         * pipeline.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableStageTransitionOutcomeCallable DisableStageTransitionCallable(const Model::DisableStageTransitionRequest& request) const;

        /**
         * <p>Prevents artifacts in a pipeline from transitioning to the next stage in the
         * pipeline.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableStageTransitionAsync(const Model::DisableStageTransitionRequest& request, const DisableStageTransitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables artifacts in a pipeline to transition to a stage in a pipeline.</p>
         */
        virtual Model::EnableStageTransitionOutcome EnableStageTransition(const Model::EnableStageTransitionRequest& request) const;

        /**
         * <p>Enables artifacts in a pipeline to transition to a stage in a pipeline.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableStageTransitionOutcomeCallable EnableStageTransitionCallable(const Model::EnableStageTransitionRequest& request) const;

        /**
         * <p>Enables artifacts in a pipeline to transition to a stage in a pipeline.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableStageTransitionAsync(const Model::EnableStageTransitionRequest& request, const EnableStageTransitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a job. Only used for custom actions.</p>
         * <important> <p>When this API is called, AWS CodePipeline returns temporary
         * credentials for the Amazon S3 bucket used to store artifacts for the pipeline,
         * if the action requires access to that Amazon S3 bucket for input or output
         * artifacts. Additionally, this API returns any secret values defined for the
         * action.</p> </important>
         */
        virtual Model::GetJobDetailsOutcome GetJobDetails(const Model::GetJobDetailsRequest& request) const;

        /**
         * <p>Returns information about a job. Only used for custom actions.</p>
         * <important> <p>When this API is called, AWS CodePipeline returns temporary
         * credentials for the Amazon S3 bucket used to store artifacts for the pipeline,
         * if the action requires access to that Amazon S3 bucket for input or output
         * artifacts. Additionally, this API returns any secret values defined for the
         * action.</p> </important>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetJobDetailsOutcomeCallable GetJobDetailsCallable(const Model::GetJobDetailsRequest& request) const;

        /**
         * <p>Returns information about a job. Only used for custom actions.</p>
         * <important> <p>When this API is called, AWS CodePipeline returns temporary
         * credentials for the Amazon S3 bucket used to store artifacts for the pipeline,
         * if the action requires access to that Amazon S3 bucket for input or output
         * artifacts. Additionally, this API returns any secret values defined for the
         * action.</p> </important>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetJobDetailsAsync(const Model::GetJobDetailsRequest& request, const GetJobDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the metadata, structure, stages, and actions of a pipeline. Can be
         * used to return the entire structure of a pipeline in JSON format, which can then
         * be modified and used to update the pipeline structure with
         * <a>UpdatePipeline</a>.</p>
         */
        virtual Model::GetPipelineOutcome GetPipeline(const Model::GetPipelineRequest& request) const;

        /**
         * <p>Returns the metadata, structure, stages, and actions of a pipeline. Can be
         * used to return the entire structure of a pipeline in JSON format, which can then
         * be modified and used to update the pipeline structure with
         * <a>UpdatePipeline</a>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPipelineOutcomeCallable GetPipelineCallable(const Model::GetPipelineRequest& request) const;

        /**
         * <p>Returns the metadata, structure, stages, and actions of a pipeline. Can be
         * used to return the entire structure of a pipeline in JSON format, which can then
         * be modified and used to update the pipeline structure with
         * <a>UpdatePipeline</a>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPipelineAsync(const Model::GetPipelineRequest& request, const GetPipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about an execution of a pipeline, including details about
         * artifacts, the pipeline execution ID, and the name, version, and status of the
         * pipeline.</p>
         */
        virtual Model::GetPipelineExecutionOutcome GetPipelineExecution(const Model::GetPipelineExecutionRequest& request) const;

        /**
         * <p>Returns information about an execution of a pipeline, including details about
         * artifacts, the pipeline execution ID, and the name, version, and status of the
         * pipeline.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPipelineExecutionOutcomeCallable GetPipelineExecutionCallable(const Model::GetPipelineExecutionRequest& request) const;

        /**
         * <p>Returns information about an execution of a pipeline, including details about
         * artifacts, the pipeline execution ID, and the name, version, and status of the
         * pipeline.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPipelineExecutionAsync(const Model::GetPipelineExecutionRequest& request, const GetPipelineExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the state of a pipeline, including the stages and
         * actions.</p>
         */
        virtual Model::GetPipelineStateOutcome GetPipelineState(const Model::GetPipelineStateRequest& request) const;

        /**
         * <p>Returns information about the state of a pipeline, including the stages and
         * actions.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPipelineStateOutcomeCallable GetPipelineStateCallable(const Model::GetPipelineStateRequest& request) const;

        /**
         * <p>Returns information about the state of a pipeline, including the stages and
         * actions.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPipelineStateAsync(const Model::GetPipelineStateRequest& request, const GetPipelineStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Requests the details of a job for a third party action. Only used for partner
         * actions.</p> <important> <p>When this API is called, AWS CodePipeline returns
         * temporary credentials for the Amazon S3 bucket used to store artifacts for the
         * pipeline, if the action requires access to that Amazon S3 bucket for input or
         * output artifacts. Additionally, this API returns any secret values defined for
         * the action.</p> </important>
         */
        virtual Model::GetThirdPartyJobDetailsOutcome GetThirdPartyJobDetails(const Model::GetThirdPartyJobDetailsRequest& request) const;

        /**
         * <p>Requests the details of a job for a third party action. Only used for partner
         * actions.</p> <important> <p>When this API is called, AWS CodePipeline returns
         * temporary credentials for the Amazon S3 bucket used to store artifacts for the
         * pipeline, if the action requires access to that Amazon S3 bucket for input or
         * output artifacts. Additionally, this API returns any secret values defined for
         * the action.</p> </important>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetThirdPartyJobDetailsOutcomeCallable GetThirdPartyJobDetailsCallable(const Model::GetThirdPartyJobDetailsRequest& request) const;

        /**
         * <p>Requests the details of a job for a third party action. Only used for partner
         * actions.</p> <important> <p>When this API is called, AWS CodePipeline returns
         * temporary credentials for the Amazon S3 bucket used to store artifacts for the
         * pipeline, if the action requires access to that Amazon S3 bucket for input or
         * output artifacts. Additionally, this API returns any secret values defined for
         * the action.</p> </important>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetThirdPartyJobDetailsAsync(const Model::GetThirdPartyJobDetailsRequest& request, const GetThirdPartyJobDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a summary of all AWS CodePipeline action types associated with your
         * account.</p>
         */
        virtual Model::ListActionTypesOutcome ListActionTypes(const Model::ListActionTypesRequest& request) const;

        /**
         * <p>Gets a summary of all AWS CodePipeline action types associated with your
         * account.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListActionTypesOutcomeCallable ListActionTypesCallable(const Model::ListActionTypesRequest& request) const;

        /**
         * <p>Gets a summary of all AWS CodePipeline action types associated with your
         * account.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListActionTypesAsync(const Model::ListActionTypesRequest& request, const ListActionTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a summary of all of the pipelines associated with your account.</p>
         */
        virtual Model::ListPipelinesOutcome ListPipelines(const Model::ListPipelinesRequest& request) const;

        /**
         * <p>Gets a summary of all of the pipelines associated with your account.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPipelinesOutcomeCallable ListPipelinesCallable(const Model::ListPipelinesRequest& request) const;

        /**
         * <p>Gets a summary of all of the pipelines associated with your account.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPipelinesAsync(const Model::ListPipelinesRequest& request, const ListPipelinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about any jobs for AWS CodePipeline to act upon.</p>
         * <important> <p>When this API is called, AWS CodePipeline returns temporary
         * credentials for the Amazon S3 bucket used to store artifacts for the pipeline,
         * if the action requires access to that Amazon S3 bucket for input or output
         * artifacts. Additionally, this API returns any secret values defined for the
         * action.</p> </important>
         */
        virtual Model::PollForJobsOutcome PollForJobs(const Model::PollForJobsRequest& request) const;

        /**
         * <p>Returns information about any jobs for AWS CodePipeline to act upon.</p>
         * <important> <p>When this API is called, AWS CodePipeline returns temporary
         * credentials for the Amazon S3 bucket used to store artifacts for the pipeline,
         * if the action requires access to that Amazon S3 bucket for input or output
         * artifacts. Additionally, this API returns any secret values defined for the
         * action.</p> </important>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PollForJobsOutcomeCallable PollForJobsCallable(const Model::PollForJobsRequest& request) const;

        /**
         * <p>Returns information about any jobs for AWS CodePipeline to act upon.</p>
         * <important> <p>When this API is called, AWS CodePipeline returns temporary
         * credentials for the Amazon S3 bucket used to store artifacts for the pipeline,
         * if the action requires access to that Amazon S3 bucket for input or output
         * artifacts. Additionally, this API returns any secret values defined for the
         * action.</p> </important>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PollForJobsAsync(const Model::PollForJobsRequest& request, const PollForJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Determines whether there are any third party jobs for a job worker to act on.
         * Only used for partner actions.</p> <important> <p>When this API is called, AWS
         * CodePipeline returns temporary credentials for the Amazon S3 bucket used to
         * store artifacts for the pipeline, if the action requires access to that Amazon
         * S3 bucket for input or output artifacts.</p> </important>
         */
        virtual Model::PollForThirdPartyJobsOutcome PollForThirdPartyJobs(const Model::PollForThirdPartyJobsRequest& request) const;

        /**
         * <p>Determines whether there are any third party jobs for a job worker to act on.
         * Only used for partner actions.</p> <important> <p>When this API is called, AWS
         * CodePipeline returns temporary credentials for the Amazon S3 bucket used to
         * store artifacts for the pipeline, if the action requires access to that Amazon
         * S3 bucket for input or output artifacts.</p> </important>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PollForThirdPartyJobsOutcomeCallable PollForThirdPartyJobsCallable(const Model::PollForThirdPartyJobsRequest& request) const;

        /**
         * <p>Determines whether there are any third party jobs for a job worker to act on.
         * Only used for partner actions.</p> <important> <p>When this API is called, AWS
         * CodePipeline returns temporary credentials for the Amazon S3 bucket used to
         * store artifacts for the pipeline, if the action requires access to that Amazon
         * S3 bucket for input or output artifacts.</p> </important>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PollForThirdPartyJobsAsync(const Model::PollForThirdPartyJobsRequest& request, const PollForThirdPartyJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides information to AWS CodePipeline about new revisions to a source.</p>
         */
        virtual Model::PutActionRevisionOutcome PutActionRevision(const Model::PutActionRevisionRequest& request) const;

        /**
         * <p>Provides information to AWS CodePipeline about new revisions to a source.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutActionRevisionOutcomeCallable PutActionRevisionCallable(const Model::PutActionRevisionRequest& request) const;

        /**
         * <p>Provides information to AWS CodePipeline about new revisions to a source.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutActionRevisionAsync(const Model::PutActionRevisionRequest& request, const PutActionRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides the response to a manual approval request to AWS CodePipeline. Valid
         * responses include Approved and Rejected.</p>
         */
        virtual Model::PutApprovalResultOutcome PutApprovalResult(const Model::PutApprovalResultRequest& request) const;

        /**
         * <p>Provides the response to a manual approval request to AWS CodePipeline. Valid
         * responses include Approved and Rejected.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutApprovalResultOutcomeCallable PutApprovalResultCallable(const Model::PutApprovalResultRequest& request) const;

        /**
         * <p>Provides the response to a manual approval request to AWS CodePipeline. Valid
         * responses include Approved and Rejected.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutApprovalResultAsync(const Model::PutApprovalResultRequest& request, const PutApprovalResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Represents the failure of a job as returned to the pipeline by a job worker.
         * Only used for custom actions.</p>
         */
        virtual Model::PutJobFailureResultOutcome PutJobFailureResult(const Model::PutJobFailureResultRequest& request) const;

        /**
         * <p>Represents the failure of a job as returned to the pipeline by a job worker.
         * Only used for custom actions.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutJobFailureResultOutcomeCallable PutJobFailureResultCallable(const Model::PutJobFailureResultRequest& request) const;

        /**
         * <p>Represents the failure of a job as returned to the pipeline by a job worker.
         * Only used for custom actions.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutJobFailureResultAsync(const Model::PutJobFailureResultRequest& request, const PutJobFailureResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Represents the success of a job as returned to the pipeline by a job worker.
         * Only used for custom actions.</p>
         */
        virtual Model::PutJobSuccessResultOutcome PutJobSuccessResult(const Model::PutJobSuccessResultRequest& request) const;

        /**
         * <p>Represents the success of a job as returned to the pipeline by a job worker.
         * Only used for custom actions.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutJobSuccessResultOutcomeCallable PutJobSuccessResultCallable(const Model::PutJobSuccessResultRequest& request) const;

        /**
         * <p>Represents the success of a job as returned to the pipeline by a job worker.
         * Only used for custom actions.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutJobSuccessResultAsync(const Model::PutJobSuccessResultRequest& request, const PutJobSuccessResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Represents the failure of a third party job as returned to the pipeline by a
         * job worker. Only used for partner actions.</p>
         */
        virtual Model::PutThirdPartyJobFailureResultOutcome PutThirdPartyJobFailureResult(const Model::PutThirdPartyJobFailureResultRequest& request) const;

        /**
         * <p>Represents the failure of a third party job as returned to the pipeline by a
         * job worker. Only used for partner actions.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutThirdPartyJobFailureResultOutcomeCallable PutThirdPartyJobFailureResultCallable(const Model::PutThirdPartyJobFailureResultRequest& request) const;

        /**
         * <p>Represents the failure of a third party job as returned to the pipeline by a
         * job worker. Only used for partner actions.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutThirdPartyJobFailureResultAsync(const Model::PutThirdPartyJobFailureResultRequest& request, const PutThirdPartyJobFailureResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Represents the success of a third party job as returned to the pipeline by a
         * job worker. Only used for partner actions.</p>
         */
        virtual Model::PutThirdPartyJobSuccessResultOutcome PutThirdPartyJobSuccessResult(const Model::PutThirdPartyJobSuccessResultRequest& request) const;

        /**
         * <p>Represents the success of a third party job as returned to the pipeline by a
         * job worker. Only used for partner actions.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutThirdPartyJobSuccessResultOutcomeCallable PutThirdPartyJobSuccessResultCallable(const Model::PutThirdPartyJobSuccessResultRequest& request) const;

        /**
         * <p>Represents the success of a third party job as returned to the pipeline by a
         * job worker. Only used for partner actions.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutThirdPartyJobSuccessResultAsync(const Model::PutThirdPartyJobSuccessResultRequest& request, const PutThirdPartyJobSuccessResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Resumes the pipeline execution by retrying the last failed actions in a
         * stage.</p>
         */
        virtual Model::RetryStageExecutionOutcome RetryStageExecution(const Model::RetryStageExecutionRequest& request) const;

        /**
         * <p>Resumes the pipeline execution by retrying the last failed actions in a
         * stage.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RetryStageExecutionOutcomeCallable RetryStageExecutionCallable(const Model::RetryStageExecutionRequest& request) const;

        /**
         * <p>Resumes the pipeline execution by retrying the last failed actions in a
         * stage.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RetryStageExecutionAsync(const Model::RetryStageExecutionRequest& request, const RetryStageExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts the specified pipeline. Specifically, it begins processing the latest
         * commit to the source location specified as part of the pipeline.</p>
         */
        virtual Model::StartPipelineExecutionOutcome StartPipelineExecution(const Model::StartPipelineExecutionRequest& request) const;

        /**
         * <p>Starts the specified pipeline. Specifically, it begins processing the latest
         * commit to the source location specified as part of the pipeline.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartPipelineExecutionOutcomeCallable StartPipelineExecutionCallable(const Model::StartPipelineExecutionRequest& request) const;

        /**
         * <p>Starts the specified pipeline. Specifically, it begins processing the latest
         * commit to the source location specified as part of the pipeline.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartPipelineExecutionAsync(const Model::StartPipelineExecutionRequest& request, const StartPipelineExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a specified pipeline with edits or changes to its structure. Use a
         * JSON file with the pipeline structure in conjunction with UpdatePipeline to
         * provide the full structure of the pipeline. Updating the pipeline increases the
         * version number of the pipeline by 1.</p>
         */
        virtual Model::UpdatePipelineOutcome UpdatePipeline(const Model::UpdatePipelineRequest& request) const;

        /**
         * <p>Updates a specified pipeline with edits or changes to its structure. Use a
         * JSON file with the pipeline structure in conjunction with UpdatePipeline to
         * provide the full structure of the pipeline. Updating the pipeline increases the
         * version number of the pipeline by 1.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePipelineOutcomeCallable UpdatePipelineCallable(const Model::UpdatePipelineRequest& request) const;

        /**
         * <p>Updates a specified pipeline with edits or changes to its structure. Use a
         * JSON file with the pipeline structure in conjunction with UpdatePipeline to
         * provide the full structure of the pipeline. Updating the pipeline increases the
         * version number of the pipeline by 1.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePipelineAsync(const Model::UpdatePipelineRequest& request, const UpdatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


    private:
      void init(const Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void AcknowledgeJobAsyncHelper(const Model::AcknowledgeJobRequest& request, const AcknowledgeJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AcknowledgeThirdPartyJobAsyncHelper(const Model::AcknowledgeThirdPartyJobRequest& request, const AcknowledgeThirdPartyJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateCustomActionTypeAsyncHelper(const Model::CreateCustomActionTypeRequest& request, const CreateCustomActionTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePipelineAsyncHelper(const Model::CreatePipelineRequest& request, const CreatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteCustomActionTypeAsyncHelper(const Model::DeleteCustomActionTypeRequest& request, const DeleteCustomActionTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePipelineAsyncHelper(const Model::DeletePipelineRequest& request, const DeletePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisableStageTransitionAsyncHelper(const Model::DisableStageTransitionRequest& request, const DisableStageTransitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void EnableStageTransitionAsyncHelper(const Model::EnableStageTransitionRequest& request, const EnableStageTransitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetJobDetailsAsyncHelper(const Model::GetJobDetailsRequest& request, const GetJobDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPipelineAsyncHelper(const Model::GetPipelineRequest& request, const GetPipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPipelineExecutionAsyncHelper(const Model::GetPipelineExecutionRequest& request, const GetPipelineExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPipelineStateAsyncHelper(const Model::GetPipelineStateRequest& request, const GetPipelineStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetThirdPartyJobDetailsAsyncHelper(const Model::GetThirdPartyJobDetailsRequest& request, const GetThirdPartyJobDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListActionTypesAsyncHelper(const Model::ListActionTypesRequest& request, const ListActionTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPipelinesAsyncHelper(const Model::ListPipelinesRequest& request, const ListPipelinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PollForJobsAsyncHelper(const Model::PollForJobsRequest& request, const PollForJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PollForThirdPartyJobsAsyncHelper(const Model::PollForThirdPartyJobsRequest& request, const PollForThirdPartyJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutActionRevisionAsyncHelper(const Model::PutActionRevisionRequest& request, const PutActionRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutApprovalResultAsyncHelper(const Model::PutApprovalResultRequest& request, const PutApprovalResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutJobFailureResultAsyncHelper(const Model::PutJobFailureResultRequest& request, const PutJobFailureResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutJobSuccessResultAsyncHelper(const Model::PutJobSuccessResultRequest& request, const PutJobSuccessResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutThirdPartyJobFailureResultAsyncHelper(const Model::PutThirdPartyJobFailureResultRequest& request, const PutThirdPartyJobFailureResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutThirdPartyJobSuccessResultAsyncHelper(const Model::PutThirdPartyJobSuccessResultRequest& request, const PutThirdPartyJobSuccessResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RetryStageExecutionAsyncHelper(const Model::RetryStageExecutionRequest& request, const RetryStageExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartPipelineExecutionAsyncHelper(const Model::StartPipelineExecutionRequest& request, const StartPipelineExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdatePipelineAsyncHelper(const Model::UpdatePipelineRequest& request, const UpdatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      std::shared_ptr<Utils::Threading::Executor> m_executor;
  };

} // namespace CodePipeline
} // namespace Aws
