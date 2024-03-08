/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/codepipeline/CodePipelineServiceClientModel.h>

namespace Aws
{
namespace CodePipeline
{
  /**
   * <fullname>CodePipeline</fullname> <p> <b>Overview</b> </p> <p>This is the
   * CodePipeline API Reference. This guide provides descriptions of the actions and
   * data types for CodePipeline. Some functionality for your pipeline can only be
   * configured through the API. For more information, see the <a
   * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/welcome.html">CodePipeline
   * User Guide</a>.</p> <p>You can use the CodePipeline API to work with pipelines,
   * stages, actions, and transitions.</p> <p> <i>Pipelines</i> are models of
   * automated release processes. Each pipeline is uniquely named, and consists of
   * stages, actions, and transitions. </p> <p>You can work with pipelines by
   * calling:</p> <ul> <li> <p> <a>CreatePipeline</a>, which creates a uniquely named
   * pipeline.</p> </li> <li> <p> <a>DeletePipeline</a>, which deletes the specified
   * pipeline.</p> </li> <li> <p> <a>GetPipeline</a>, which returns information about
   * the pipeline structure and pipeline metadata, including the pipeline Amazon
   * Resource Name (ARN).</p> </li> <li> <p> <a>GetPipelineExecution</a>, which
   * returns information about a specific execution of a pipeline.</p> </li> <li> <p>
   * <a>GetPipelineState</a>, which returns information about the current state of
   * the stages and actions of a pipeline.</p> </li> <li> <p>
   * <a>ListActionExecutions</a>, which returns action-level details for past
   * executions. The details include full stage and action-level details, including
   * individual action duration, status, any errors that occurred during the
   * execution, and input and output artifact location details.</p> </li> <li> <p>
   * <a>ListPipelines</a>, which gets a summary of all of the pipelines associated
   * with your account.</p> </li> <li> <p> <a>ListPipelineExecutions</a>, which gets
   * a summary of the most recent executions for a pipeline.</p> </li> <li> <p>
   * <a>StartPipelineExecution</a>, which runs the most recent revision of an
   * artifact through the pipeline.</p> </li> <li> <p> <a>StopPipelineExecution</a>,
   * which stops the specified pipeline execution from continuing through the
   * pipeline.</p> </li> <li> <p> <a>UpdatePipeline</a>, which updates a pipeline
   * with edits or changes to the structure of the pipeline.</p> </li> </ul>
   * <p>Pipelines include <i>stages</i>. Each stage contains one or more actions that
   * must complete before the next stage begins. A stage results in success or
   * failure. If a stage fails, the pipeline stops at that stage and remains stopped
   * until either a new version of an artifact appears in the source location, or a
   * user takes action to rerun the most recent artifact through the pipeline. You
   * can call <a>GetPipelineState</a>, which displays the status of a pipeline,
   * including the status of stages in the pipeline, or <a>GetPipeline</a>, which
   * returns the entire structure of the pipeline, including the stages of that
   * pipeline. For more information about the structure of stages and actions, see <a
   * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/pipeline-structure.html">CodePipeline
   * Pipeline Structure Reference</a>.</p> <p>Pipeline stages include <i>actions</i>
   * that are categorized into categories such as source or build actions performed
   * in a stage of a pipeline. For example, you can use a source action to import
   * artifacts into a pipeline from a source such as Amazon S3. Like stages, you do
   * not work with actions directly in most cases, but you do define and interact
   * with actions when working with pipeline operations such as <a>CreatePipeline</a>
   * and <a>GetPipelineState</a>. Valid action categories are:</p> <ul> <li>
   * <p>Source</p> </li> <li> <p>Build</p> </li> <li> <p>Test</p> </li> <li>
   * <p>Deploy</p> </li> <li> <p>Approval</p> </li> <li> <p>Invoke</p> </li> </ul>
   * <p>Pipelines also include <i>transitions</i>, which allow the transition of
   * artifacts from one stage to the next in a pipeline after the actions in one
   * stage complete.</p> <p>You can work with transitions by calling:</p> <ul> <li>
   * <p> <a>DisableStageTransition</a>, which prevents artifacts from transitioning
   * to the next stage in a pipeline.</p> </li> <li> <p>
   * <a>EnableStageTransition</a>, which enables transition of artifacts between
   * stages in a pipeline. </p> </li> </ul> <p> <b>Using the API to integrate with
   * CodePipeline</b> </p> <p>For third-party integrators or developers who want to
   * create their own integrations with CodePipeline, the expected sequence varies
   * from the standard API user. To integrate with CodePipeline, developers need to
   * work with the following items:</p> <p> <b>Jobs</b>, which are instances of an
   * action. For example, a job for a source action might import a revision of an
   * artifact from a source. </p> <p>You can work with jobs by calling:</p> <ul> <li>
   * <p> <a>AcknowledgeJob</a>, which confirms whether a job worker has received the
   * specified job.</p> </li> <li> <p> <a>GetJobDetails</a>, which returns the
   * details of a job.</p> </li> <li> <p> <a>PollForJobs</a>, which determines
   * whether there are any jobs to act on.</p> </li> <li> <p>
   * <a>PutJobFailureResult</a>, which provides details of a job failure. </p> </li>
   * <li> <p> <a>PutJobSuccessResult</a>, which provides details of a job
   * success.</p> </li> </ul> <p> <b>Third party jobs</b>, which are instances of an
   * action created by a partner action and integrated into CodePipeline. Partner
   * actions are created by members of the Amazon Web Services Partner Network.</p>
   * <p>You can work with third party jobs by calling:</p> <ul> <li> <p>
   * <a>AcknowledgeThirdPartyJob</a>, which confirms whether a job worker has
   * received the specified job.</p> </li> <li> <p> <a>GetThirdPartyJobDetails</a>,
   * which requests the details of a job for a partner action.</p> </li> <li> <p>
   * <a>PollForThirdPartyJobs</a>, which determines whether there are any jobs to act
   * on. </p> </li> <li> <p> <a>PutThirdPartyJobFailureResult</a>, which provides
   * details of a job failure.</p> </li> <li> <p>
   * <a>PutThirdPartyJobSuccessResult</a>, which provides details of a job
   * success.</p> </li> </ul>
   */
  class AWS_CODEPIPELINE_API CodePipelineClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<CodePipelineClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef CodePipelineClientConfiguration ClientConfigurationType;
      typedef CodePipelineEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodePipelineClient(const Aws::CodePipeline::CodePipelineClientConfiguration& clientConfiguration = Aws::CodePipeline::CodePipelineClientConfiguration(),
                           std::shared_ptr<CodePipelineEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodePipelineClient(const Aws::Auth::AWSCredentials& credentials,
                           std::shared_ptr<CodePipelineEndpointProviderBase> endpointProvider = nullptr,
                           const Aws::CodePipeline::CodePipelineClientConfiguration& clientConfiguration = Aws::CodePipeline::CodePipelineClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CodePipelineClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<CodePipelineEndpointProviderBase> endpointProvider = nullptr,
                           const Aws::CodePipeline::CodePipelineClientConfiguration& clientConfiguration = Aws::CodePipeline::CodePipelineClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodePipelineClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodePipelineClient(const Aws::Auth::AWSCredentials& credentials,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CodePipelineClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
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
         * A Callable wrapper for AcknowledgeJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AcknowledgeJobRequestT = Model::AcknowledgeJobRequest>
        Model::AcknowledgeJobOutcomeCallable AcknowledgeJobCallable(const AcknowledgeJobRequestT& request) const
        {
            return SubmitCallable(&CodePipelineClient::AcknowledgeJob, request);
        }

        /**
         * An Async wrapper for AcknowledgeJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AcknowledgeJobRequestT = Model::AcknowledgeJobRequest>
        void AcknowledgeJobAsync(const AcknowledgeJobRequestT& request, const AcknowledgeJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodePipelineClient::AcknowledgeJob, request, handler, context);
        }

        /**
         * <p>Confirms a job worker has received the specified job. Used for partner
         * actions only.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/AcknowledgeThirdPartyJob">AWS
         * API Reference</a></p>
         */
        virtual Model::AcknowledgeThirdPartyJobOutcome AcknowledgeThirdPartyJob(const Model::AcknowledgeThirdPartyJobRequest& request) const;

        /**
         * A Callable wrapper for AcknowledgeThirdPartyJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AcknowledgeThirdPartyJobRequestT = Model::AcknowledgeThirdPartyJobRequest>
        Model::AcknowledgeThirdPartyJobOutcomeCallable AcknowledgeThirdPartyJobCallable(const AcknowledgeThirdPartyJobRequestT& request) const
        {
            return SubmitCallable(&CodePipelineClient::AcknowledgeThirdPartyJob, request);
        }

        /**
         * An Async wrapper for AcknowledgeThirdPartyJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AcknowledgeThirdPartyJobRequestT = Model::AcknowledgeThirdPartyJobRequest>
        void AcknowledgeThirdPartyJobAsync(const AcknowledgeThirdPartyJobRequestT& request, const AcknowledgeThirdPartyJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodePipelineClient::AcknowledgeThirdPartyJob, request, handler, context);
        }

        /**
         * <p>Creates a new custom action that can be used in all pipelines associated with
         * the Amazon Web Services account. Only used for custom actions.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/CreateCustomActionType">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCustomActionTypeOutcome CreateCustomActionType(const Model::CreateCustomActionTypeRequest& request) const;

        /**
         * A Callable wrapper for CreateCustomActionType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateCustomActionTypeRequestT = Model::CreateCustomActionTypeRequest>
        Model::CreateCustomActionTypeOutcomeCallable CreateCustomActionTypeCallable(const CreateCustomActionTypeRequestT& request) const
        {
            return SubmitCallable(&CodePipelineClient::CreateCustomActionType, request);
        }

        /**
         * An Async wrapper for CreateCustomActionType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateCustomActionTypeRequestT = Model::CreateCustomActionTypeRequest>
        void CreateCustomActionTypeAsync(const CreateCustomActionTypeRequestT& request, const CreateCustomActionTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodePipelineClient::CreateCustomActionType, request, handler, context);
        }

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
         * A Callable wrapper for CreatePipeline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreatePipelineRequestT = Model::CreatePipelineRequest>
        Model::CreatePipelineOutcomeCallable CreatePipelineCallable(const CreatePipelineRequestT& request) const
        {
            return SubmitCallable(&CodePipelineClient::CreatePipeline, request);
        }

        /**
         * An Async wrapper for CreatePipeline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreatePipelineRequestT = Model::CreatePipelineRequest>
        void CreatePipelineAsync(const CreatePipelineRequestT& request, const CreatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodePipelineClient::CreatePipeline, request, handler, context);
        }

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
         * A Callable wrapper for DeleteCustomActionType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteCustomActionTypeRequestT = Model::DeleteCustomActionTypeRequest>
        Model::DeleteCustomActionTypeOutcomeCallable DeleteCustomActionTypeCallable(const DeleteCustomActionTypeRequestT& request) const
        {
            return SubmitCallable(&CodePipelineClient::DeleteCustomActionType, request);
        }

        /**
         * An Async wrapper for DeleteCustomActionType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCustomActionTypeRequestT = Model::DeleteCustomActionTypeRequest>
        void DeleteCustomActionTypeAsync(const DeleteCustomActionTypeRequestT& request, const DeleteCustomActionTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodePipelineClient::DeleteCustomActionType, request, handler, context);
        }

        /**
         * <p>Deletes the specified pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/DeletePipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePipelineOutcome DeletePipeline(const Model::DeletePipelineRequest& request) const;

        /**
         * A Callable wrapper for DeletePipeline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeletePipelineRequestT = Model::DeletePipelineRequest>
        Model::DeletePipelineOutcomeCallable DeletePipelineCallable(const DeletePipelineRequestT& request) const
        {
            return SubmitCallable(&CodePipelineClient::DeletePipeline, request);
        }

        /**
         * An Async wrapper for DeletePipeline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeletePipelineRequestT = Model::DeletePipelineRequest>
        void DeletePipelineAsync(const DeletePipelineRequestT& request, const DeletePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodePipelineClient::DeletePipeline, request, handler, context);
        }

        /**
         * <p>Deletes a previously created webhook by name. Deleting the webhook stops
         * CodePipeline from starting a pipeline every time an external event occurs. The
         * API returns successfully when trying to delete a webhook that is already
         * deleted. If a deleted webhook is re-created by calling PutWebhook with the same
         * name, it will have a different URL.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/DeleteWebhook">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWebhookOutcome DeleteWebhook(const Model::DeleteWebhookRequest& request) const;

        /**
         * A Callable wrapper for DeleteWebhook that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteWebhookRequestT = Model::DeleteWebhookRequest>
        Model::DeleteWebhookOutcomeCallable DeleteWebhookCallable(const DeleteWebhookRequestT& request) const
        {
            return SubmitCallable(&CodePipelineClient::DeleteWebhook, request);
        }

        /**
         * An Async wrapper for DeleteWebhook that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteWebhookRequestT = Model::DeleteWebhookRequest>
        void DeleteWebhookAsync(const DeleteWebhookRequestT& request, const DeleteWebhookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodePipelineClient::DeleteWebhook, request, handler, context);
        }

        /**
         * <p>Removes the connection between the webhook that was created by CodePipeline
         * and the external tool with events to be detected. Currently supported only for
         * webhooks that target an action type of GitHub.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/DeregisterWebhookWithThirdParty">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterWebhookWithThirdPartyOutcome DeregisterWebhookWithThirdParty(const Model::DeregisterWebhookWithThirdPartyRequest& request) const;

        /**
         * A Callable wrapper for DeregisterWebhookWithThirdParty that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeregisterWebhookWithThirdPartyRequestT = Model::DeregisterWebhookWithThirdPartyRequest>
        Model::DeregisterWebhookWithThirdPartyOutcomeCallable DeregisterWebhookWithThirdPartyCallable(const DeregisterWebhookWithThirdPartyRequestT& request) const
        {
            return SubmitCallable(&CodePipelineClient::DeregisterWebhookWithThirdParty, request);
        }

        /**
         * An Async wrapper for DeregisterWebhookWithThirdParty that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeregisterWebhookWithThirdPartyRequestT = Model::DeregisterWebhookWithThirdPartyRequest>
        void DeregisterWebhookWithThirdPartyAsync(const DeregisterWebhookWithThirdPartyRequestT& request, const DeregisterWebhookWithThirdPartyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodePipelineClient::DeregisterWebhookWithThirdParty, request, handler, context);
        }

        /**
         * <p>Prevents artifacts in a pipeline from transitioning to the next stage in the
         * pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/DisableStageTransition">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableStageTransitionOutcome DisableStageTransition(const Model::DisableStageTransitionRequest& request) const;

        /**
         * A Callable wrapper for DisableStageTransition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisableStageTransitionRequestT = Model::DisableStageTransitionRequest>
        Model::DisableStageTransitionOutcomeCallable DisableStageTransitionCallable(const DisableStageTransitionRequestT& request) const
        {
            return SubmitCallable(&CodePipelineClient::DisableStageTransition, request);
        }

        /**
         * An Async wrapper for DisableStageTransition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisableStageTransitionRequestT = Model::DisableStageTransitionRequest>
        void DisableStageTransitionAsync(const DisableStageTransitionRequestT& request, const DisableStageTransitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodePipelineClient::DisableStageTransition, request, handler, context);
        }

        /**
         * <p>Enables artifacts in a pipeline to transition to a stage in a
         * pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/EnableStageTransition">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableStageTransitionOutcome EnableStageTransition(const Model::EnableStageTransitionRequest& request) const;

        /**
         * A Callable wrapper for EnableStageTransition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename EnableStageTransitionRequestT = Model::EnableStageTransitionRequest>
        Model::EnableStageTransitionOutcomeCallable EnableStageTransitionCallable(const EnableStageTransitionRequestT& request) const
        {
            return SubmitCallable(&CodePipelineClient::EnableStageTransition, request);
        }

        /**
         * An Async wrapper for EnableStageTransition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename EnableStageTransitionRequestT = Model::EnableStageTransitionRequest>
        void EnableStageTransitionAsync(const EnableStageTransitionRequestT& request, const EnableStageTransitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodePipelineClient::EnableStageTransition, request, handler, context);
        }

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
         * A Callable wrapper for GetActionType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetActionTypeRequestT = Model::GetActionTypeRequest>
        Model::GetActionTypeOutcomeCallable GetActionTypeCallable(const GetActionTypeRequestT& request) const
        {
            return SubmitCallable(&CodePipelineClient::GetActionType, request);
        }

        /**
         * An Async wrapper for GetActionType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetActionTypeRequestT = Model::GetActionTypeRequest>
        void GetActionTypeAsync(const GetActionTypeRequestT& request, const GetActionTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodePipelineClient::GetActionType, request, handler, context);
        }

        /**
         * <p>Returns information about a job. Used for custom actions only.</p>
         *  <p>When this API is called, CodePipeline returns temporary
         * credentials for the S3 bucket used to store artifacts for the pipeline, if the
         * action requires access to that S3 bucket for input or output artifacts. This API
         * also returns any secret values defined for the action.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/GetJobDetails">AWS
         * API Reference</a></p>
         */
        virtual Model::GetJobDetailsOutcome GetJobDetails(const Model::GetJobDetailsRequest& request) const;

        /**
         * A Callable wrapper for GetJobDetails that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetJobDetailsRequestT = Model::GetJobDetailsRequest>
        Model::GetJobDetailsOutcomeCallable GetJobDetailsCallable(const GetJobDetailsRequestT& request) const
        {
            return SubmitCallable(&CodePipelineClient::GetJobDetails, request);
        }

        /**
         * An Async wrapper for GetJobDetails that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetJobDetailsRequestT = Model::GetJobDetailsRequest>
        void GetJobDetailsAsync(const GetJobDetailsRequestT& request, const GetJobDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodePipelineClient::GetJobDetails, request, handler, context);
        }

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
         * A Callable wrapper for GetPipeline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPipelineRequestT = Model::GetPipelineRequest>
        Model::GetPipelineOutcomeCallable GetPipelineCallable(const GetPipelineRequestT& request) const
        {
            return SubmitCallable(&CodePipelineClient::GetPipeline, request);
        }

        /**
         * An Async wrapper for GetPipeline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPipelineRequestT = Model::GetPipelineRequest>
        void GetPipelineAsync(const GetPipelineRequestT& request, const GetPipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodePipelineClient::GetPipeline, request, handler, context);
        }

        /**
         * <p>Returns information about an execution of a pipeline, including details about
         * artifacts, the pipeline execution ID, and the name, version, and status of the
         * pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/GetPipelineExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPipelineExecutionOutcome GetPipelineExecution(const Model::GetPipelineExecutionRequest& request) const;

        /**
         * A Callable wrapper for GetPipelineExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPipelineExecutionRequestT = Model::GetPipelineExecutionRequest>
        Model::GetPipelineExecutionOutcomeCallable GetPipelineExecutionCallable(const GetPipelineExecutionRequestT& request) const
        {
            return SubmitCallable(&CodePipelineClient::GetPipelineExecution, request);
        }

        /**
         * An Async wrapper for GetPipelineExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPipelineExecutionRequestT = Model::GetPipelineExecutionRequest>
        void GetPipelineExecutionAsync(const GetPipelineExecutionRequestT& request, const GetPipelineExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodePipelineClient::GetPipelineExecution, request, handler, context);
        }

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
         * A Callable wrapper for GetPipelineState that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPipelineStateRequestT = Model::GetPipelineStateRequest>
        Model::GetPipelineStateOutcomeCallable GetPipelineStateCallable(const GetPipelineStateRequestT& request) const
        {
            return SubmitCallable(&CodePipelineClient::GetPipelineState, request);
        }

        /**
         * An Async wrapper for GetPipelineState that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPipelineStateRequestT = Model::GetPipelineStateRequest>
        void GetPipelineStateAsync(const GetPipelineStateRequestT& request, const GetPipelineStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodePipelineClient::GetPipelineState, request, handler, context);
        }

        /**
         * <p>Requests the details of a job for a third party action. Used for partner
         * actions only.</p>  <p>When this API is called, CodePipeline returns
         * temporary credentials for the S3 bucket used to store artifacts for the
         * pipeline, if the action requires access to that S3 bucket for input or output
         * artifacts. This API also returns any secret values defined for the action.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/GetThirdPartyJobDetails">AWS
         * API Reference</a></p>
         */
        virtual Model::GetThirdPartyJobDetailsOutcome GetThirdPartyJobDetails(const Model::GetThirdPartyJobDetailsRequest& request) const;

        /**
         * A Callable wrapper for GetThirdPartyJobDetails that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetThirdPartyJobDetailsRequestT = Model::GetThirdPartyJobDetailsRequest>
        Model::GetThirdPartyJobDetailsOutcomeCallable GetThirdPartyJobDetailsCallable(const GetThirdPartyJobDetailsRequestT& request) const
        {
            return SubmitCallable(&CodePipelineClient::GetThirdPartyJobDetails, request);
        }

        /**
         * An Async wrapper for GetThirdPartyJobDetails that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetThirdPartyJobDetailsRequestT = Model::GetThirdPartyJobDetailsRequest>
        void GetThirdPartyJobDetailsAsync(const GetThirdPartyJobDetailsRequestT& request, const GetThirdPartyJobDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodePipelineClient::GetThirdPartyJobDetails, request, handler, context);
        }

        /**
         * <p>Lists the action executions that have occurred in a pipeline.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ListActionExecutions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListActionExecutionsOutcome ListActionExecutions(const Model::ListActionExecutionsRequest& request) const;

        /**
         * A Callable wrapper for ListActionExecutions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListActionExecutionsRequestT = Model::ListActionExecutionsRequest>
        Model::ListActionExecutionsOutcomeCallable ListActionExecutionsCallable(const ListActionExecutionsRequestT& request) const
        {
            return SubmitCallable(&CodePipelineClient::ListActionExecutions, request);
        }

        /**
         * An Async wrapper for ListActionExecutions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListActionExecutionsRequestT = Model::ListActionExecutionsRequest>
        void ListActionExecutionsAsync(const ListActionExecutionsRequestT& request, const ListActionExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodePipelineClient::ListActionExecutions, request, handler, context);
        }

        /**
         * <p>Gets a summary of all CodePipeline action types associated with your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ListActionTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListActionTypesOutcome ListActionTypes(const Model::ListActionTypesRequest& request) const;

        /**
         * A Callable wrapper for ListActionTypes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListActionTypesRequestT = Model::ListActionTypesRequest>
        Model::ListActionTypesOutcomeCallable ListActionTypesCallable(const ListActionTypesRequestT& request) const
        {
            return SubmitCallable(&CodePipelineClient::ListActionTypes, request);
        }

        /**
         * An Async wrapper for ListActionTypes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListActionTypesRequestT = Model::ListActionTypesRequest>
        void ListActionTypesAsync(const ListActionTypesRequestT& request, const ListActionTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodePipelineClient::ListActionTypes, request, handler, context);
        }

        /**
         * <p>Gets a summary of the most recent executions for a pipeline.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ListPipelineExecutions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPipelineExecutionsOutcome ListPipelineExecutions(const Model::ListPipelineExecutionsRequest& request) const;

        /**
         * A Callable wrapper for ListPipelineExecutions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPipelineExecutionsRequestT = Model::ListPipelineExecutionsRequest>
        Model::ListPipelineExecutionsOutcomeCallable ListPipelineExecutionsCallable(const ListPipelineExecutionsRequestT& request) const
        {
            return SubmitCallable(&CodePipelineClient::ListPipelineExecutions, request);
        }

        /**
         * An Async wrapper for ListPipelineExecutions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPipelineExecutionsRequestT = Model::ListPipelineExecutionsRequest>
        void ListPipelineExecutionsAsync(const ListPipelineExecutionsRequestT& request, const ListPipelineExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodePipelineClient::ListPipelineExecutions, request, handler, context);
        }

        /**
         * <p>Gets a summary of all of the pipelines associated with your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ListPipelines">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPipelinesOutcome ListPipelines(const Model::ListPipelinesRequest& request) const;

        /**
         * A Callable wrapper for ListPipelines that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPipelinesRequestT = Model::ListPipelinesRequest>
        Model::ListPipelinesOutcomeCallable ListPipelinesCallable(const ListPipelinesRequestT& request) const
        {
            return SubmitCallable(&CodePipelineClient::ListPipelines, request);
        }

        /**
         * An Async wrapper for ListPipelines that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPipelinesRequestT = Model::ListPipelinesRequest>
        void ListPipelinesAsync(const ListPipelinesRequestT& request, const ListPipelinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodePipelineClient::ListPipelines, request, handler, context);
        }

        /**
         * <p>Gets the set of key-value pairs (metadata) that are used to manage the
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&CodePipelineClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodePipelineClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Gets a listing of all the webhooks in this Amazon Web Services Region for
         * this account. The output lists all webhooks and includes the webhook URL and ARN
         * and the configuration for each webhook.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ListWebhooks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWebhooksOutcome ListWebhooks(const Model::ListWebhooksRequest& request) const;

        /**
         * A Callable wrapper for ListWebhooks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListWebhooksRequestT = Model::ListWebhooksRequest>
        Model::ListWebhooksOutcomeCallable ListWebhooksCallable(const ListWebhooksRequestT& request) const
        {
            return SubmitCallable(&CodePipelineClient::ListWebhooks, request);
        }

        /**
         * An Async wrapper for ListWebhooks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListWebhooksRequestT = Model::ListWebhooksRequest>
        void ListWebhooksAsync(const ListWebhooksRequestT& request, const ListWebhooksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodePipelineClient::ListWebhooks, request, handler, context);
        }

        /**
         * <p>Returns information about any jobs for CodePipeline to act on.
         * <code>PollForJobs</code> is valid only for action types with "Custom" in the
         * owner field. If the action type contains <code>AWS</code> or
         * <code>ThirdParty</code> in the owner field, the <code>PollForJobs</code> action
         * returns an error.</p>  <p>When this API is called, CodePipeline
         * returns temporary credentials for the S3 bucket used to store artifacts for the
         * pipeline, if the action requires access to that S3 bucket for input or output
         * artifacts. This API also returns any secret values defined for the action.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/PollForJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::PollForJobsOutcome PollForJobs(const Model::PollForJobsRequest& request) const;

        /**
         * A Callable wrapper for PollForJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PollForJobsRequestT = Model::PollForJobsRequest>
        Model::PollForJobsOutcomeCallable PollForJobsCallable(const PollForJobsRequestT& request) const
        {
            return SubmitCallable(&CodePipelineClient::PollForJobs, request);
        }

        /**
         * An Async wrapper for PollForJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PollForJobsRequestT = Model::PollForJobsRequest>
        void PollForJobsAsync(const PollForJobsRequestT& request, const PollForJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodePipelineClient::PollForJobs, request, handler, context);
        }

        /**
         * <p>Determines whether there are any third party jobs for a job worker to act on.
         * Used for partner actions only.</p>  <p>When this API is called,
         * CodePipeline returns temporary credentials for the S3 bucket used to store
         * artifacts for the pipeline, if the action requires access to that S3 bucket for
         * input or output artifacts.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/PollForThirdPartyJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::PollForThirdPartyJobsOutcome PollForThirdPartyJobs(const Model::PollForThirdPartyJobsRequest& request) const;

        /**
         * A Callable wrapper for PollForThirdPartyJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PollForThirdPartyJobsRequestT = Model::PollForThirdPartyJobsRequest>
        Model::PollForThirdPartyJobsOutcomeCallable PollForThirdPartyJobsCallable(const PollForThirdPartyJobsRequestT& request) const
        {
            return SubmitCallable(&CodePipelineClient::PollForThirdPartyJobs, request);
        }

        /**
         * An Async wrapper for PollForThirdPartyJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PollForThirdPartyJobsRequestT = Model::PollForThirdPartyJobsRequest>
        void PollForThirdPartyJobsAsync(const PollForThirdPartyJobsRequestT& request, const PollForThirdPartyJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodePipelineClient::PollForThirdPartyJobs, request, handler, context);
        }

        /**
         * <p>Provides information to CodePipeline about new revisions to a
         * source.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/PutActionRevision">AWS
         * API Reference</a></p>
         */
        virtual Model::PutActionRevisionOutcome PutActionRevision(const Model::PutActionRevisionRequest& request) const;

        /**
         * A Callable wrapper for PutActionRevision that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutActionRevisionRequestT = Model::PutActionRevisionRequest>
        Model::PutActionRevisionOutcomeCallable PutActionRevisionCallable(const PutActionRevisionRequestT& request) const
        {
            return SubmitCallable(&CodePipelineClient::PutActionRevision, request);
        }

        /**
         * An Async wrapper for PutActionRevision that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutActionRevisionRequestT = Model::PutActionRevisionRequest>
        void PutActionRevisionAsync(const PutActionRevisionRequestT& request, const PutActionRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodePipelineClient::PutActionRevision, request, handler, context);
        }

        /**
         * <p>Provides the response to a manual approval request to CodePipeline. Valid
         * responses include Approved and Rejected.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/PutApprovalResult">AWS
         * API Reference</a></p>
         */
        virtual Model::PutApprovalResultOutcome PutApprovalResult(const Model::PutApprovalResultRequest& request) const;

        /**
         * A Callable wrapper for PutApprovalResult that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutApprovalResultRequestT = Model::PutApprovalResultRequest>
        Model::PutApprovalResultOutcomeCallable PutApprovalResultCallable(const PutApprovalResultRequestT& request) const
        {
            return SubmitCallable(&CodePipelineClient::PutApprovalResult, request);
        }

        /**
         * An Async wrapper for PutApprovalResult that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutApprovalResultRequestT = Model::PutApprovalResultRequest>
        void PutApprovalResultAsync(const PutApprovalResultRequestT& request, const PutApprovalResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodePipelineClient::PutApprovalResult, request, handler, context);
        }

        /**
         * <p>Represents the failure of a job as returned to the pipeline by a job worker.
         * Used for custom actions only.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/PutJobFailureResult">AWS
         * API Reference</a></p>
         */
        virtual Model::PutJobFailureResultOutcome PutJobFailureResult(const Model::PutJobFailureResultRequest& request) const;

        /**
         * A Callable wrapper for PutJobFailureResult that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutJobFailureResultRequestT = Model::PutJobFailureResultRequest>
        Model::PutJobFailureResultOutcomeCallable PutJobFailureResultCallable(const PutJobFailureResultRequestT& request) const
        {
            return SubmitCallable(&CodePipelineClient::PutJobFailureResult, request);
        }

        /**
         * An Async wrapper for PutJobFailureResult that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutJobFailureResultRequestT = Model::PutJobFailureResultRequest>
        void PutJobFailureResultAsync(const PutJobFailureResultRequestT& request, const PutJobFailureResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodePipelineClient::PutJobFailureResult, request, handler, context);
        }

        /**
         * <p>Represents the success of a job as returned to the pipeline by a job worker.
         * Used for custom actions only.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/PutJobSuccessResult">AWS
         * API Reference</a></p>
         */
        virtual Model::PutJobSuccessResultOutcome PutJobSuccessResult(const Model::PutJobSuccessResultRequest& request) const;

        /**
         * A Callable wrapper for PutJobSuccessResult that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutJobSuccessResultRequestT = Model::PutJobSuccessResultRequest>
        Model::PutJobSuccessResultOutcomeCallable PutJobSuccessResultCallable(const PutJobSuccessResultRequestT& request) const
        {
            return SubmitCallable(&CodePipelineClient::PutJobSuccessResult, request);
        }

        /**
         * An Async wrapper for PutJobSuccessResult that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutJobSuccessResultRequestT = Model::PutJobSuccessResultRequest>
        void PutJobSuccessResultAsync(const PutJobSuccessResultRequestT& request, const PutJobSuccessResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodePipelineClient::PutJobSuccessResult, request, handler, context);
        }

        /**
         * <p>Represents the failure of a third party job as returned to the pipeline by a
         * job worker. Used for partner actions only.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/PutThirdPartyJobFailureResult">AWS
         * API Reference</a></p>
         */
        virtual Model::PutThirdPartyJobFailureResultOutcome PutThirdPartyJobFailureResult(const Model::PutThirdPartyJobFailureResultRequest& request) const;

        /**
         * A Callable wrapper for PutThirdPartyJobFailureResult that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutThirdPartyJobFailureResultRequestT = Model::PutThirdPartyJobFailureResultRequest>
        Model::PutThirdPartyJobFailureResultOutcomeCallable PutThirdPartyJobFailureResultCallable(const PutThirdPartyJobFailureResultRequestT& request) const
        {
            return SubmitCallable(&CodePipelineClient::PutThirdPartyJobFailureResult, request);
        }

        /**
         * An Async wrapper for PutThirdPartyJobFailureResult that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutThirdPartyJobFailureResultRequestT = Model::PutThirdPartyJobFailureResultRequest>
        void PutThirdPartyJobFailureResultAsync(const PutThirdPartyJobFailureResultRequestT& request, const PutThirdPartyJobFailureResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodePipelineClient::PutThirdPartyJobFailureResult, request, handler, context);
        }

        /**
         * <p>Represents the success of a third party job as returned to the pipeline by a
         * job worker. Used for partner actions only.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/PutThirdPartyJobSuccessResult">AWS
         * API Reference</a></p>
         */
        virtual Model::PutThirdPartyJobSuccessResultOutcome PutThirdPartyJobSuccessResult(const Model::PutThirdPartyJobSuccessResultRequest& request) const;

        /**
         * A Callable wrapper for PutThirdPartyJobSuccessResult that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutThirdPartyJobSuccessResultRequestT = Model::PutThirdPartyJobSuccessResultRequest>
        Model::PutThirdPartyJobSuccessResultOutcomeCallable PutThirdPartyJobSuccessResultCallable(const PutThirdPartyJobSuccessResultRequestT& request) const
        {
            return SubmitCallable(&CodePipelineClient::PutThirdPartyJobSuccessResult, request);
        }

        /**
         * An Async wrapper for PutThirdPartyJobSuccessResult that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutThirdPartyJobSuccessResultRequestT = Model::PutThirdPartyJobSuccessResultRequest>
        void PutThirdPartyJobSuccessResultAsync(const PutThirdPartyJobSuccessResultRequestT& request, const PutThirdPartyJobSuccessResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodePipelineClient::PutThirdPartyJobSuccessResult, request, handler, context);
        }

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
         * A Callable wrapper for PutWebhook that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutWebhookRequestT = Model::PutWebhookRequest>
        Model::PutWebhookOutcomeCallable PutWebhookCallable(const PutWebhookRequestT& request) const
        {
            return SubmitCallable(&CodePipelineClient::PutWebhook, request);
        }

        /**
         * An Async wrapper for PutWebhook that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutWebhookRequestT = Model::PutWebhookRequest>
        void PutWebhookAsync(const PutWebhookRequestT& request, const PutWebhookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodePipelineClient::PutWebhook, request, handler, context);
        }

        /**
         * <p>Configures a connection between the webhook that was created and the external
         * tool with events to be detected.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/RegisterWebhookWithThirdParty">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterWebhookWithThirdPartyOutcome RegisterWebhookWithThirdParty(const Model::RegisterWebhookWithThirdPartyRequest& request) const;

        /**
         * A Callable wrapper for RegisterWebhookWithThirdParty that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RegisterWebhookWithThirdPartyRequestT = Model::RegisterWebhookWithThirdPartyRequest>
        Model::RegisterWebhookWithThirdPartyOutcomeCallable RegisterWebhookWithThirdPartyCallable(const RegisterWebhookWithThirdPartyRequestT& request) const
        {
            return SubmitCallable(&CodePipelineClient::RegisterWebhookWithThirdParty, request);
        }

        /**
         * An Async wrapper for RegisterWebhookWithThirdParty that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RegisterWebhookWithThirdPartyRequestT = Model::RegisterWebhookWithThirdPartyRequest>
        void RegisterWebhookWithThirdPartyAsync(const RegisterWebhookWithThirdPartyRequestT& request, const RegisterWebhookWithThirdPartyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodePipelineClient::RegisterWebhookWithThirdParty, request, handler, context);
        }

        /**
         * <p>You can retry a stage that has failed without having to run a pipeline again
         * from the beginning. You do this by either retrying the failed actions in a stage
         * or by retrying all actions in the stage starting from the first action in the
         * stage. When you retry the failed actions in a stage, all actions that are still
         * in progress continue working, and failed actions are triggered again. When you
         * retry a failed stage from the first action in the stage, the stage cannot have
         * any actions in progress. Before a stage can be retried, it must either have all
         * actions failed or some actions failed and some succeeded.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/RetryStageExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::RetryStageExecutionOutcome RetryStageExecution(const Model::RetryStageExecutionRequest& request) const;

        /**
         * A Callable wrapper for RetryStageExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RetryStageExecutionRequestT = Model::RetryStageExecutionRequest>
        Model::RetryStageExecutionOutcomeCallable RetryStageExecutionCallable(const RetryStageExecutionRequestT& request) const
        {
            return SubmitCallable(&CodePipelineClient::RetryStageExecution, request);
        }

        /**
         * An Async wrapper for RetryStageExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RetryStageExecutionRequestT = Model::RetryStageExecutionRequest>
        void RetryStageExecutionAsync(const RetryStageExecutionRequestT& request, const RetryStageExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodePipelineClient::RetryStageExecution, request, handler, context);
        }

        /**
         * <p>Starts the specified pipeline. Specifically, it begins processing the latest
         * commit to the source location specified as part of the pipeline.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/StartPipelineExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::StartPipelineExecutionOutcome StartPipelineExecution(const Model::StartPipelineExecutionRequest& request) const;

        /**
         * A Callable wrapper for StartPipelineExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartPipelineExecutionRequestT = Model::StartPipelineExecutionRequest>
        Model::StartPipelineExecutionOutcomeCallable StartPipelineExecutionCallable(const StartPipelineExecutionRequestT& request) const
        {
            return SubmitCallable(&CodePipelineClient::StartPipelineExecution, request);
        }

        /**
         * An Async wrapper for StartPipelineExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartPipelineExecutionRequestT = Model::StartPipelineExecutionRequest>
        void StartPipelineExecutionAsync(const StartPipelineExecutionRequestT& request, const StartPipelineExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodePipelineClient::StartPipelineExecution, request, handler, context);
        }

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
         * A Callable wrapper for StopPipelineExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopPipelineExecutionRequestT = Model::StopPipelineExecutionRequest>
        Model::StopPipelineExecutionOutcomeCallable StopPipelineExecutionCallable(const StopPipelineExecutionRequestT& request) const
        {
            return SubmitCallable(&CodePipelineClient::StopPipelineExecution, request);
        }

        /**
         * An Async wrapper for StopPipelineExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopPipelineExecutionRequestT = Model::StopPipelineExecutionRequest>
        void StopPipelineExecutionAsync(const StopPipelineExecutionRequestT& request, const StopPipelineExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodePipelineClient::StopPipelineExecution, request, handler, context);
        }

        /**
         * <p>Adds to or modifies the tags of the given resource. Tags are metadata that
         * can be used to manage a resource. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&CodePipelineClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodePipelineClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes tags from an Amazon Web Services resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&CodePipelineClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodePipelineClient::UntagResource, request, handler, context);
        }

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
         * A Callable wrapper for UpdateActionType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateActionTypeRequestT = Model::UpdateActionTypeRequest>
        Model::UpdateActionTypeOutcomeCallable UpdateActionTypeCallable(const UpdateActionTypeRequestT& request) const
        {
            return SubmitCallable(&CodePipelineClient::UpdateActionType, request);
        }

        /**
         * An Async wrapper for UpdateActionType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateActionTypeRequestT = Model::UpdateActionTypeRequest>
        void UpdateActionTypeAsync(const UpdateActionTypeRequestT& request, const UpdateActionTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodePipelineClient::UpdateActionType, request, handler, context);
        }

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
         * A Callable wrapper for UpdatePipeline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdatePipelineRequestT = Model::UpdatePipelineRequest>
        Model::UpdatePipelineOutcomeCallable UpdatePipelineCallable(const UpdatePipelineRequestT& request) const
        {
            return SubmitCallable(&CodePipelineClient::UpdatePipeline, request);
        }

        /**
         * An Async wrapper for UpdatePipeline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdatePipelineRequestT = Model::UpdatePipelineRequest>
        void UpdatePipelineAsync(const UpdatePipelineRequestT& request, const UpdatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodePipelineClient::UpdatePipeline, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<CodePipelineEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<CodePipelineClient>;
      void init(const CodePipelineClientConfiguration& clientConfiguration);

      CodePipelineClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<CodePipelineEndpointProviderBase> m_endpointProvider;
  };

} // namespace CodePipeline
} // namespace Aws
