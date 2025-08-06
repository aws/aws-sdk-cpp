/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/bedrock/BedrockServiceClientModel.h>

namespace Aws
{
namespace Bedrock
{
  /**
   * <p>Describes the API operations for creating, managing, fine-turning, and
   * evaluating Amazon Bedrock models.</p>
   */
  class AWS_BEDROCK_API BedrockClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<BedrockClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef BedrockClientConfiguration ClientConfigurationType;
      typedef BedrockEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BedrockClient(const Aws::Bedrock::BedrockClientConfiguration& clientConfiguration = Aws::Bedrock::BedrockClientConfiguration(),
                      std::shared_ptr<BedrockEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BedrockClient(const Aws::Auth::AWSCredentials& credentials,
                      std::shared_ptr<BedrockEndpointProviderBase> endpointProvider = nullptr,
                      const Aws::Bedrock::BedrockClientConfiguration& clientConfiguration = Aws::Bedrock::BedrockClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        BedrockClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      std::shared_ptr<BedrockEndpointProviderBase> endpointProvider = nullptr,
                      const Aws::Bedrock::BedrockClientConfiguration& clientConfiguration = Aws::Bedrock::BedrockClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BedrockClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BedrockClient(const Aws::Auth::AWSCredentials& credentials,
                      const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        BedrockClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~BedrockClient();

        /**
         * <p>Deletes a batch of evaluation jobs. An evaluation job can only be deleted if
         * it has following status <code>FAILED</code>, <code>COMPLETED</code>, and
         * <code>STOPPED</code>. You can request up to 25 model evaluation jobs be deleted
         * in a single request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/BatchDeleteEvaluationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDeleteEvaluationJobOutcome BatchDeleteEvaluationJob(const Model::BatchDeleteEvaluationJobRequest& request) const;

        /**
         * A Callable wrapper for BatchDeleteEvaluationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchDeleteEvaluationJobRequestT = Model::BatchDeleteEvaluationJobRequest>
        Model::BatchDeleteEvaluationJobOutcomeCallable BatchDeleteEvaluationJobCallable(const BatchDeleteEvaluationJobRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::BatchDeleteEvaluationJob, request);
        }

        /**
         * An Async wrapper for BatchDeleteEvaluationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchDeleteEvaluationJobRequestT = Model::BatchDeleteEvaluationJobRequest>
        void BatchDeleteEvaluationJobAsync(const BatchDeleteEvaluationJobRequestT& request, const BatchDeleteEvaluationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::BatchDeleteEvaluationJob, request, handler, context);
        }

        /**
         * <p>Cancels a running Automated Reasoning policy build workflow. This stops the
         * policy generation process and prevents further processing of the source
         * documents.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/CancelAutomatedReasoningPolicyBuildWorkflow">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelAutomatedReasoningPolicyBuildWorkflowOutcome CancelAutomatedReasoningPolicyBuildWorkflow(const Model::CancelAutomatedReasoningPolicyBuildWorkflowRequest& request) const;

        /**
         * A Callable wrapper for CancelAutomatedReasoningPolicyBuildWorkflow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelAutomatedReasoningPolicyBuildWorkflowRequestT = Model::CancelAutomatedReasoningPolicyBuildWorkflowRequest>
        Model::CancelAutomatedReasoningPolicyBuildWorkflowOutcomeCallable CancelAutomatedReasoningPolicyBuildWorkflowCallable(const CancelAutomatedReasoningPolicyBuildWorkflowRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::CancelAutomatedReasoningPolicyBuildWorkflow, request);
        }

        /**
         * An Async wrapper for CancelAutomatedReasoningPolicyBuildWorkflow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelAutomatedReasoningPolicyBuildWorkflowRequestT = Model::CancelAutomatedReasoningPolicyBuildWorkflowRequest>
        void CancelAutomatedReasoningPolicyBuildWorkflowAsync(const CancelAutomatedReasoningPolicyBuildWorkflowRequestT& request, const CancelAutomatedReasoningPolicyBuildWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::CancelAutomatedReasoningPolicyBuildWorkflow, request, handler, context);
        }

        /**
         * <p>Creates an Automated Reasoning policy for Amazon Bedrock Guardrails.
         * Automated Reasoning policies use mathematical techniques to detect
         * hallucinations, suggest corrections, and highlight unstated assumptions in the
         * responses of your GenAI application.</p> <p>To create a policy, you upload a
         * source document that describes the rules that you're encoding. Automated
         * Reasoning extracts important concepts from the source document that will become
         * variables in the policy and infers policy rules.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/CreateAutomatedReasoningPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAutomatedReasoningPolicyOutcome CreateAutomatedReasoningPolicy(const Model::CreateAutomatedReasoningPolicyRequest& request) const;

        /**
         * A Callable wrapper for CreateAutomatedReasoningPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAutomatedReasoningPolicyRequestT = Model::CreateAutomatedReasoningPolicyRequest>
        Model::CreateAutomatedReasoningPolicyOutcomeCallable CreateAutomatedReasoningPolicyCallable(const CreateAutomatedReasoningPolicyRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::CreateAutomatedReasoningPolicy, request);
        }

        /**
         * An Async wrapper for CreateAutomatedReasoningPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAutomatedReasoningPolicyRequestT = Model::CreateAutomatedReasoningPolicyRequest>
        void CreateAutomatedReasoningPolicyAsync(const CreateAutomatedReasoningPolicyRequestT& request, const CreateAutomatedReasoningPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::CreateAutomatedReasoningPolicy, request, handler, context);
        }

        /**
         * <p>Creates a test for an Automated Reasoning policy. Tests validate that your
         * policy works as expected by providing sample inputs and expected outcomes. Use
         * tests to verify policy behavior before deploying to production.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/CreateAutomatedReasoningPolicyTestCase">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAutomatedReasoningPolicyTestCaseOutcome CreateAutomatedReasoningPolicyTestCase(const Model::CreateAutomatedReasoningPolicyTestCaseRequest& request) const;

        /**
         * A Callable wrapper for CreateAutomatedReasoningPolicyTestCase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAutomatedReasoningPolicyTestCaseRequestT = Model::CreateAutomatedReasoningPolicyTestCaseRequest>
        Model::CreateAutomatedReasoningPolicyTestCaseOutcomeCallable CreateAutomatedReasoningPolicyTestCaseCallable(const CreateAutomatedReasoningPolicyTestCaseRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::CreateAutomatedReasoningPolicyTestCase, request);
        }

        /**
         * An Async wrapper for CreateAutomatedReasoningPolicyTestCase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAutomatedReasoningPolicyTestCaseRequestT = Model::CreateAutomatedReasoningPolicyTestCaseRequest>
        void CreateAutomatedReasoningPolicyTestCaseAsync(const CreateAutomatedReasoningPolicyTestCaseRequestT& request, const CreateAutomatedReasoningPolicyTestCaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::CreateAutomatedReasoningPolicyTestCase, request, handler, context);
        }

        /**
         * <p>Creates a new version of an existing Automated Reasoning policy. This allows
         * you to iterate on your policy rules while maintaining previous versions for
         * rollback or comparison purposes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/CreateAutomatedReasoningPolicyVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAutomatedReasoningPolicyVersionOutcome CreateAutomatedReasoningPolicyVersion(const Model::CreateAutomatedReasoningPolicyVersionRequest& request) const;

        /**
         * A Callable wrapper for CreateAutomatedReasoningPolicyVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAutomatedReasoningPolicyVersionRequestT = Model::CreateAutomatedReasoningPolicyVersionRequest>
        Model::CreateAutomatedReasoningPolicyVersionOutcomeCallable CreateAutomatedReasoningPolicyVersionCallable(const CreateAutomatedReasoningPolicyVersionRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::CreateAutomatedReasoningPolicyVersion, request);
        }

        /**
         * An Async wrapper for CreateAutomatedReasoningPolicyVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAutomatedReasoningPolicyVersionRequestT = Model::CreateAutomatedReasoningPolicyVersionRequest>
        void CreateAutomatedReasoningPolicyVersionAsync(const CreateAutomatedReasoningPolicyVersionRequestT& request, const CreateAutomatedReasoningPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::CreateAutomatedReasoningPolicyVersion, request, handler, context);
        }

        /**
         * <p>Creates a new custom model in Amazon Bedrock. After the model is active, you
         * can use it for inference.</p> <p>To use the model for inference, you must
         * purchase Provisioned Throughput for it. You can't use On-demand inference with
         * these custom models. For more information about Provisioned Throughput, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/prov-throughput.html">Provisioned
         * Throughput</a>.</p> <p>The model appears in <code>ListCustomModels</code> with a
         * <code>customizationType</code> of <code>imported</code>. To track the status of
         * the new model, you use the <code>GetCustomModel</code> API operation. The model
         * can be in the following states:</p> <ul> <li> <p> <code>Creating</code> -
         * Initial state during validation and registration</p> </li> <li> <p>
         * <code>Active</code> - Model is ready for use in inference</p> </li> <li> <p>
         * <code>Failed</code> - Creation process encountered an error</p> </li> </ul> <p>
         * <b>Related APIs</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_GetCustomModel.html">GetCustomModel</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_ListCustomModels.html">ListCustomModels</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_DeleteCustomModel.html">DeleteCustomModel</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/CreateCustomModel">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCustomModelOutcome CreateCustomModel(const Model::CreateCustomModelRequest& request) const;

        /**
         * A Callable wrapper for CreateCustomModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateCustomModelRequestT = Model::CreateCustomModelRequest>
        Model::CreateCustomModelOutcomeCallable CreateCustomModelCallable(const CreateCustomModelRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::CreateCustomModel, request);
        }

        /**
         * An Async wrapper for CreateCustomModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateCustomModelRequestT = Model::CreateCustomModelRequest>
        void CreateCustomModelAsync(const CreateCustomModelRequestT& request, const CreateCustomModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::CreateCustomModel, request, handler, context);
        }

        /**
         * <p>Deploys a custom model for on-demand inference in Amazon Bedrock. After you
         * deploy your custom model, you use the deployment's Amazon Resource Name (ARN) as
         * the <code>modelId</code> parameter when you submit prompts and generate
         * responses with model inference.</p> <p> For more information about setting up
         * on-demand inference for custom models, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-customization-use.html">Set
         * up inference for a custom model</a>. </p> <p>The following actions are related
         * to the <code>CreateCustomModelDeployment</code> operation:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_GetCustomModelDeployment.html">GetCustomModelDeployment</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_ListCustomModelDeployments.html">ListCustomModelDeployments</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_DeleteCustomModelDeployment.html">DeleteCustomModelDeployment</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/CreateCustomModelDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCustomModelDeploymentOutcome CreateCustomModelDeployment(const Model::CreateCustomModelDeploymentRequest& request) const;

        /**
         * A Callable wrapper for CreateCustomModelDeployment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateCustomModelDeploymentRequestT = Model::CreateCustomModelDeploymentRequest>
        Model::CreateCustomModelDeploymentOutcomeCallable CreateCustomModelDeploymentCallable(const CreateCustomModelDeploymentRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::CreateCustomModelDeployment, request);
        }

        /**
         * An Async wrapper for CreateCustomModelDeployment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateCustomModelDeploymentRequestT = Model::CreateCustomModelDeploymentRequest>
        void CreateCustomModelDeploymentAsync(const CreateCustomModelDeploymentRequestT& request, const CreateCustomModelDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::CreateCustomModelDeployment, request, handler, context);
        }

        /**
         * <p>Creates an evaluation job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/CreateEvaluationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEvaluationJobOutcome CreateEvaluationJob(const Model::CreateEvaluationJobRequest& request) const;

        /**
         * A Callable wrapper for CreateEvaluationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateEvaluationJobRequestT = Model::CreateEvaluationJobRequest>
        Model::CreateEvaluationJobOutcomeCallable CreateEvaluationJobCallable(const CreateEvaluationJobRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::CreateEvaluationJob, request);
        }

        /**
         * An Async wrapper for CreateEvaluationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateEvaluationJobRequestT = Model::CreateEvaluationJobRequest>
        void CreateEvaluationJobAsync(const CreateEvaluationJobRequestT& request, const CreateEvaluationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::CreateEvaluationJob, request, handler, context);
        }

        /**
         * <p>Request a model access agreement for the specified model.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/CreateFoundationModelAgreement">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFoundationModelAgreementOutcome CreateFoundationModelAgreement(const Model::CreateFoundationModelAgreementRequest& request) const;

        /**
         * A Callable wrapper for CreateFoundationModelAgreement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateFoundationModelAgreementRequestT = Model::CreateFoundationModelAgreementRequest>
        Model::CreateFoundationModelAgreementOutcomeCallable CreateFoundationModelAgreementCallable(const CreateFoundationModelAgreementRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::CreateFoundationModelAgreement, request);
        }

        /**
         * An Async wrapper for CreateFoundationModelAgreement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateFoundationModelAgreementRequestT = Model::CreateFoundationModelAgreementRequest>
        void CreateFoundationModelAgreementAsync(const CreateFoundationModelAgreementRequestT& request, const CreateFoundationModelAgreementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::CreateFoundationModelAgreement, request, handler, context);
        }

        /**
         * <p>Creates a guardrail to block topics and to implement safeguards for your
         * generative AI applications.</p> <p>You can configure the following policies in a
         * guardrail to avoid undesirable and harmful content, filter out denied topics and
         * words, and remove sensitive information for privacy protection.</p> <ul> <li>
         * <p> <b>Content filters</b> - Adjust filter strengths to block input prompts or
         * model responses containing harmful content.</p> </li> <li> <p> <b>Denied
         * topics</b> - Define a set of topics that are undesirable in the context of your
         * application. These topics will be blocked if detected in user queries or model
         * responses.</p> </li> <li> <p> <b>Word filters</b> - Configure filters to block
         * undesirable words, phrases, and profanity. Such words can include offensive
         * terms, competitor names etc.</p> </li> <li> <p> <b>Sensitive information
         * filters</b> - Block or mask sensitive information such as personally
         * identifiable information (PII) or custom regex in user inputs and model
         * responses.</p> </li> </ul> <p>In addition to the above policies, you can also
         * configure the messages to be returned to the user if a user input or model
         * response is in violation of the policies defined in the guardrail.</p> <p>For
         * more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/guardrails.html">Amazon
         * Bedrock Guardrails</a> in the <i>Amazon Bedrock User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/CreateGuardrail">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGuardrailOutcome CreateGuardrail(const Model::CreateGuardrailRequest& request) const;

        /**
         * A Callable wrapper for CreateGuardrail that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateGuardrailRequestT = Model::CreateGuardrailRequest>
        Model::CreateGuardrailOutcomeCallable CreateGuardrailCallable(const CreateGuardrailRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::CreateGuardrail, request);
        }

        /**
         * An Async wrapper for CreateGuardrail that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateGuardrailRequestT = Model::CreateGuardrailRequest>
        void CreateGuardrailAsync(const CreateGuardrailRequestT& request, const CreateGuardrailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::CreateGuardrail, request, handler, context);
        }

        /**
         * <p>Creates a version of the guardrail. Use this API to create a snapshot of the
         * guardrail when you are satisfied with a configuration, or to compare the
         * configuration with another version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/CreateGuardrailVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGuardrailVersionOutcome CreateGuardrailVersion(const Model::CreateGuardrailVersionRequest& request) const;

        /**
         * A Callable wrapper for CreateGuardrailVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateGuardrailVersionRequestT = Model::CreateGuardrailVersionRequest>
        Model::CreateGuardrailVersionOutcomeCallable CreateGuardrailVersionCallable(const CreateGuardrailVersionRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::CreateGuardrailVersion, request);
        }

        /**
         * An Async wrapper for CreateGuardrailVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateGuardrailVersionRequestT = Model::CreateGuardrailVersionRequest>
        void CreateGuardrailVersionAsync(const CreateGuardrailVersionRequestT& request, const CreateGuardrailVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::CreateGuardrailVersion, request, handler, context);
        }

        /**
         * <p>Creates an application inference profile to track metrics and costs when
         * invoking a model. To create an application inference profile for a foundation
         * model in one region, specify the ARN of the model in that region. To create an
         * application inference profile for a foundation model across multiple regions,
         * specify the ARN of the system-defined inference profile that contains the
         * regions that you want to route requests to. For more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/cross-region-inference.html">Increase
         * throughput and resilience with cross-region inference in Amazon Bedrock</a>. in
         * the Amazon Bedrock User Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/CreateInferenceProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInferenceProfileOutcome CreateInferenceProfile(const Model::CreateInferenceProfileRequest& request) const;

        /**
         * A Callable wrapper for CreateInferenceProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateInferenceProfileRequestT = Model::CreateInferenceProfileRequest>
        Model::CreateInferenceProfileOutcomeCallable CreateInferenceProfileCallable(const CreateInferenceProfileRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::CreateInferenceProfile, request);
        }

        /**
         * An Async wrapper for CreateInferenceProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateInferenceProfileRequestT = Model::CreateInferenceProfileRequest>
        void CreateInferenceProfileAsync(const CreateInferenceProfileRequestT& request, const CreateInferenceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::CreateInferenceProfile, request, handler, context);
        }

        /**
         * <p>Creates an endpoint for a model from Amazon Bedrock Marketplace. The endpoint
         * is hosted by Amazon SageMaker.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/CreateMarketplaceModelEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMarketplaceModelEndpointOutcome CreateMarketplaceModelEndpoint(const Model::CreateMarketplaceModelEndpointRequest& request) const;

        /**
         * A Callable wrapper for CreateMarketplaceModelEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateMarketplaceModelEndpointRequestT = Model::CreateMarketplaceModelEndpointRequest>
        Model::CreateMarketplaceModelEndpointOutcomeCallable CreateMarketplaceModelEndpointCallable(const CreateMarketplaceModelEndpointRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::CreateMarketplaceModelEndpoint, request);
        }

        /**
         * An Async wrapper for CreateMarketplaceModelEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateMarketplaceModelEndpointRequestT = Model::CreateMarketplaceModelEndpointRequest>
        void CreateMarketplaceModelEndpointAsync(const CreateMarketplaceModelEndpointRequestT& request, const CreateMarketplaceModelEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::CreateMarketplaceModelEndpoint, request, handler, context);
        }

        /**
         * <p>Copies a model to another region so that it can be used there. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/copy-model.html">Copy
         * models to be used in other regions</a> in the <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/what-is-service.html">Amazon
         * Bedrock User Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/CreateModelCopyJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateModelCopyJobOutcome CreateModelCopyJob(const Model::CreateModelCopyJobRequest& request) const;

        /**
         * A Callable wrapper for CreateModelCopyJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateModelCopyJobRequestT = Model::CreateModelCopyJobRequest>
        Model::CreateModelCopyJobOutcomeCallable CreateModelCopyJobCallable(const CreateModelCopyJobRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::CreateModelCopyJob, request);
        }

        /**
         * An Async wrapper for CreateModelCopyJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateModelCopyJobRequestT = Model::CreateModelCopyJobRequest>
        void CreateModelCopyJobAsync(const CreateModelCopyJobRequestT& request, const CreateModelCopyJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::CreateModelCopyJob, request, handler, context);
        }

        /**
         * <p>Creates a fine-tuning job to customize a base model.</p> <p>You specify the
         * base foundation model and the location of the training data. After the
         * model-customization job completes successfully, your custom model resource will
         * be ready to use. Amazon Bedrock returns validation loss metrics and output
         * generations after the job completes. </p> <p>For information on the format of
         * training and validation data, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-customization-prepare.html">Prepare
         * the datasets</a>.</p> <p> Model-customization jobs are asynchronous and the
         * completion time depends on the base model and the training/validation data size.
         * To monitor a job, use the <code>GetModelCustomizationJob</code> operation to
         * retrieve the job status.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/custom-models.html">Custom
         * models</a> in the <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/what-is-service.html">Amazon
         * Bedrock User Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/CreateModelCustomizationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateModelCustomizationJobOutcome CreateModelCustomizationJob(const Model::CreateModelCustomizationJobRequest& request) const;

        /**
         * A Callable wrapper for CreateModelCustomizationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateModelCustomizationJobRequestT = Model::CreateModelCustomizationJobRequest>
        Model::CreateModelCustomizationJobOutcomeCallable CreateModelCustomizationJobCallable(const CreateModelCustomizationJobRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::CreateModelCustomizationJob, request);
        }

        /**
         * An Async wrapper for CreateModelCustomizationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateModelCustomizationJobRequestT = Model::CreateModelCustomizationJobRequest>
        void CreateModelCustomizationJobAsync(const CreateModelCustomizationJobRequestT& request, const CreateModelCustomizationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::CreateModelCustomizationJob, request, handler, context);
        }

        /**
         * <p>Creates a model import job to import model that you have customized in other
         * environments, such as Amazon SageMaker. For more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-customization-import-model.html">Import
         * a customized model</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/CreateModelImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateModelImportJobOutcome CreateModelImportJob(const Model::CreateModelImportJobRequest& request) const;

        /**
         * A Callable wrapper for CreateModelImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateModelImportJobRequestT = Model::CreateModelImportJobRequest>
        Model::CreateModelImportJobOutcomeCallable CreateModelImportJobCallable(const CreateModelImportJobRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::CreateModelImportJob, request);
        }

        /**
         * An Async wrapper for CreateModelImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateModelImportJobRequestT = Model::CreateModelImportJobRequest>
        void CreateModelImportJobAsync(const CreateModelImportJobRequestT& request, const CreateModelImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::CreateModelImportJob, request, handler, context);
        }

        /**
         * <p>Creates a batch inference job to invoke a model on multiple prompts. Format
         * your data according to <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/batch-inference-data">Format
         * your inference data</a> and upload it to an Amazon S3 bucket. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/batch-inference.html">Process
         * multiple prompts with batch inference</a>.</p> <p>The response returns a
         * <code>jobArn</code> that you can use to stop or get details about the
         * job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/CreateModelInvocationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateModelInvocationJobOutcome CreateModelInvocationJob(const Model::CreateModelInvocationJobRequest& request) const;

        /**
         * A Callable wrapper for CreateModelInvocationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateModelInvocationJobRequestT = Model::CreateModelInvocationJobRequest>
        Model::CreateModelInvocationJobOutcomeCallable CreateModelInvocationJobCallable(const CreateModelInvocationJobRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::CreateModelInvocationJob, request);
        }

        /**
         * An Async wrapper for CreateModelInvocationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateModelInvocationJobRequestT = Model::CreateModelInvocationJobRequest>
        void CreateModelInvocationJobAsync(const CreateModelInvocationJobRequestT& request, const CreateModelInvocationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::CreateModelInvocationJob, request, handler, context);
        }

        /**
         * <p>Creates a prompt router that manages the routing of requests between multiple
         * foundation models based on the routing criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/CreatePromptRouter">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePromptRouterOutcome CreatePromptRouter(const Model::CreatePromptRouterRequest& request) const;

        /**
         * A Callable wrapper for CreatePromptRouter that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreatePromptRouterRequestT = Model::CreatePromptRouterRequest>
        Model::CreatePromptRouterOutcomeCallable CreatePromptRouterCallable(const CreatePromptRouterRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::CreatePromptRouter, request);
        }

        /**
         * An Async wrapper for CreatePromptRouter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreatePromptRouterRequestT = Model::CreatePromptRouterRequest>
        void CreatePromptRouterAsync(const CreatePromptRouterRequestT& request, const CreatePromptRouterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::CreatePromptRouter, request, handler, context);
        }

        /**
         * <p>Creates dedicated throughput for a base or custom model with the model units
         * and for the duration that you specify. For pricing details, see <a
         * href="http://aws.amazon.com/bedrock/pricing/">Amazon Bedrock Pricing</a>. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/prov-throughput.html">Provisioned
         * Throughput</a> in the <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/what-is-service.html">Amazon
         * Bedrock User Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/CreateProvisionedModelThroughput">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProvisionedModelThroughputOutcome CreateProvisionedModelThroughput(const Model::CreateProvisionedModelThroughputRequest& request) const;

        /**
         * A Callable wrapper for CreateProvisionedModelThroughput that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateProvisionedModelThroughputRequestT = Model::CreateProvisionedModelThroughputRequest>
        Model::CreateProvisionedModelThroughputOutcomeCallable CreateProvisionedModelThroughputCallable(const CreateProvisionedModelThroughputRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::CreateProvisionedModelThroughput, request);
        }

        /**
         * An Async wrapper for CreateProvisionedModelThroughput that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateProvisionedModelThroughputRequestT = Model::CreateProvisionedModelThroughputRequest>
        void CreateProvisionedModelThroughputAsync(const CreateProvisionedModelThroughputRequestT& request, const CreateProvisionedModelThroughputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::CreateProvisionedModelThroughput, request, handler, context);
        }

        /**
         * <p>Deletes an Automated Reasoning policy or policy version. This operation is
         * idempotent. If you delete a policy more than once, each call succeeds. Deleting
         * a policy removes it permanently and cannot be undone.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/DeleteAutomatedReasoningPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAutomatedReasoningPolicyOutcome DeleteAutomatedReasoningPolicy(const Model::DeleteAutomatedReasoningPolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteAutomatedReasoningPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAutomatedReasoningPolicyRequestT = Model::DeleteAutomatedReasoningPolicyRequest>
        Model::DeleteAutomatedReasoningPolicyOutcomeCallable DeleteAutomatedReasoningPolicyCallable(const DeleteAutomatedReasoningPolicyRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::DeleteAutomatedReasoningPolicy, request);
        }

        /**
         * An Async wrapper for DeleteAutomatedReasoningPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAutomatedReasoningPolicyRequestT = Model::DeleteAutomatedReasoningPolicyRequest>
        void DeleteAutomatedReasoningPolicyAsync(const DeleteAutomatedReasoningPolicyRequestT& request, const DeleteAutomatedReasoningPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::DeleteAutomatedReasoningPolicy, request, handler, context);
        }

        /**
         * <p>Deletes an Automated Reasoning policy build workflow and its associated
         * artifacts. This permanently removes the workflow history and any generated
         * assets.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/DeleteAutomatedReasoningPolicyBuildWorkflow">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAutomatedReasoningPolicyBuildWorkflowOutcome DeleteAutomatedReasoningPolicyBuildWorkflow(const Model::DeleteAutomatedReasoningPolicyBuildWorkflowRequest& request) const;

        /**
         * A Callable wrapper for DeleteAutomatedReasoningPolicyBuildWorkflow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAutomatedReasoningPolicyBuildWorkflowRequestT = Model::DeleteAutomatedReasoningPolicyBuildWorkflowRequest>
        Model::DeleteAutomatedReasoningPolicyBuildWorkflowOutcomeCallable DeleteAutomatedReasoningPolicyBuildWorkflowCallable(const DeleteAutomatedReasoningPolicyBuildWorkflowRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::DeleteAutomatedReasoningPolicyBuildWorkflow, request);
        }

        /**
         * An Async wrapper for DeleteAutomatedReasoningPolicyBuildWorkflow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAutomatedReasoningPolicyBuildWorkflowRequestT = Model::DeleteAutomatedReasoningPolicyBuildWorkflowRequest>
        void DeleteAutomatedReasoningPolicyBuildWorkflowAsync(const DeleteAutomatedReasoningPolicyBuildWorkflowRequestT& request, const DeleteAutomatedReasoningPolicyBuildWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::DeleteAutomatedReasoningPolicyBuildWorkflow, request, handler, context);
        }

        /**
         * <p>Deletes an Automated Reasoning policy test. This operation is idempotent; if
         * you delete a test more than once, each call succeeds.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/DeleteAutomatedReasoningPolicyTestCase">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAutomatedReasoningPolicyTestCaseOutcome DeleteAutomatedReasoningPolicyTestCase(const Model::DeleteAutomatedReasoningPolicyTestCaseRequest& request) const;

        /**
         * A Callable wrapper for DeleteAutomatedReasoningPolicyTestCase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAutomatedReasoningPolicyTestCaseRequestT = Model::DeleteAutomatedReasoningPolicyTestCaseRequest>
        Model::DeleteAutomatedReasoningPolicyTestCaseOutcomeCallable DeleteAutomatedReasoningPolicyTestCaseCallable(const DeleteAutomatedReasoningPolicyTestCaseRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::DeleteAutomatedReasoningPolicyTestCase, request);
        }

        /**
         * An Async wrapper for DeleteAutomatedReasoningPolicyTestCase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAutomatedReasoningPolicyTestCaseRequestT = Model::DeleteAutomatedReasoningPolicyTestCaseRequest>
        void DeleteAutomatedReasoningPolicyTestCaseAsync(const DeleteAutomatedReasoningPolicyTestCaseRequestT& request, const DeleteAutomatedReasoningPolicyTestCaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::DeleteAutomatedReasoningPolicyTestCase, request, handler, context);
        }

        /**
         * <p>Deletes a custom model that you created earlier. For more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/custom-models.html">Custom
         * models</a> in the <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/what-is-service.html">Amazon
         * Bedrock User Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/DeleteCustomModel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCustomModelOutcome DeleteCustomModel(const Model::DeleteCustomModelRequest& request) const;

        /**
         * A Callable wrapper for DeleteCustomModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteCustomModelRequestT = Model::DeleteCustomModelRequest>
        Model::DeleteCustomModelOutcomeCallable DeleteCustomModelCallable(const DeleteCustomModelRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::DeleteCustomModel, request);
        }

        /**
         * An Async wrapper for DeleteCustomModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCustomModelRequestT = Model::DeleteCustomModelRequest>
        void DeleteCustomModelAsync(const DeleteCustomModelRequestT& request, const DeleteCustomModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::DeleteCustomModel, request, handler, context);
        }

        /**
         * <p>Deletes a custom model deployment. This operation stops the deployment and
         * removes it from your account. After deletion, the deployment ARN can no longer
         * be used for inference requests.</p> <p>The following actions are related to the
         * <code>DeleteCustomModelDeployment</code> operation:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_CreateCustomModelDeployment.html">CreateCustomModelDeployment</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_GetCustomModelDeployment.html">GetCustomModelDeployment</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_ListCustomModelDeployments.html">ListCustomModelDeployments</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/DeleteCustomModelDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCustomModelDeploymentOutcome DeleteCustomModelDeployment(const Model::DeleteCustomModelDeploymentRequest& request) const;

        /**
         * A Callable wrapper for DeleteCustomModelDeployment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteCustomModelDeploymentRequestT = Model::DeleteCustomModelDeploymentRequest>
        Model::DeleteCustomModelDeploymentOutcomeCallable DeleteCustomModelDeploymentCallable(const DeleteCustomModelDeploymentRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::DeleteCustomModelDeployment, request);
        }

        /**
         * An Async wrapper for DeleteCustomModelDeployment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCustomModelDeploymentRequestT = Model::DeleteCustomModelDeploymentRequest>
        void DeleteCustomModelDeploymentAsync(const DeleteCustomModelDeploymentRequestT& request, const DeleteCustomModelDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::DeleteCustomModelDeployment, request, handler, context);
        }

        /**
         * <p>Delete the model access agreement for the specified model.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/DeleteFoundationModelAgreement">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFoundationModelAgreementOutcome DeleteFoundationModelAgreement(const Model::DeleteFoundationModelAgreementRequest& request) const;

        /**
         * A Callable wrapper for DeleteFoundationModelAgreement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteFoundationModelAgreementRequestT = Model::DeleteFoundationModelAgreementRequest>
        Model::DeleteFoundationModelAgreementOutcomeCallable DeleteFoundationModelAgreementCallable(const DeleteFoundationModelAgreementRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::DeleteFoundationModelAgreement, request);
        }

        /**
         * An Async wrapper for DeleteFoundationModelAgreement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteFoundationModelAgreementRequestT = Model::DeleteFoundationModelAgreementRequest>
        void DeleteFoundationModelAgreementAsync(const DeleteFoundationModelAgreementRequestT& request, const DeleteFoundationModelAgreementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::DeleteFoundationModelAgreement, request, handler, context);
        }

        /**
         * <p>Deletes a guardrail.</p> <ul> <li> <p>To delete a guardrail, only specify the
         * ARN of the guardrail in the <code>guardrailIdentifier</code> field. If you
         * delete a guardrail, all of its versions will be deleted.</p> </li> <li> <p>To
         * delete a version of a guardrail, specify the ARN of the guardrail in the
         * <code>guardrailIdentifier</code> field and the version in the
         * <code>guardrailVersion</code> field.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/DeleteGuardrail">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGuardrailOutcome DeleteGuardrail(const Model::DeleteGuardrailRequest& request) const;

        /**
         * A Callable wrapper for DeleteGuardrail that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteGuardrailRequestT = Model::DeleteGuardrailRequest>
        Model::DeleteGuardrailOutcomeCallable DeleteGuardrailCallable(const DeleteGuardrailRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::DeleteGuardrail, request);
        }

        /**
         * An Async wrapper for DeleteGuardrail that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteGuardrailRequestT = Model::DeleteGuardrailRequest>
        void DeleteGuardrailAsync(const DeleteGuardrailRequestT& request, const DeleteGuardrailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::DeleteGuardrail, request, handler, context);
        }

        /**
         * <p>Deletes a custom model that you imported earlier. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-customization-import-model.html">Import
         * a customized model</a> in the <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/what-is-service.html">Amazon
         * Bedrock User Guide</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/DeleteImportedModel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteImportedModelOutcome DeleteImportedModel(const Model::DeleteImportedModelRequest& request) const;

        /**
         * A Callable wrapper for DeleteImportedModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteImportedModelRequestT = Model::DeleteImportedModelRequest>
        Model::DeleteImportedModelOutcomeCallable DeleteImportedModelCallable(const DeleteImportedModelRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::DeleteImportedModel, request);
        }

        /**
         * An Async wrapper for DeleteImportedModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteImportedModelRequestT = Model::DeleteImportedModelRequest>
        void DeleteImportedModelAsync(const DeleteImportedModelRequestT& request, const DeleteImportedModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::DeleteImportedModel, request, handler, context);
        }

        /**
         * <p>Deletes an application inference profile. For more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/cross-region-inference.html">Increase
         * throughput and resilience with cross-region inference in Amazon Bedrock</a>. in
         * the Amazon Bedrock User Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/DeleteInferenceProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInferenceProfileOutcome DeleteInferenceProfile(const Model::DeleteInferenceProfileRequest& request) const;

        /**
         * A Callable wrapper for DeleteInferenceProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteInferenceProfileRequestT = Model::DeleteInferenceProfileRequest>
        Model::DeleteInferenceProfileOutcomeCallable DeleteInferenceProfileCallable(const DeleteInferenceProfileRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::DeleteInferenceProfile, request);
        }

        /**
         * An Async wrapper for DeleteInferenceProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteInferenceProfileRequestT = Model::DeleteInferenceProfileRequest>
        void DeleteInferenceProfileAsync(const DeleteInferenceProfileRequestT& request, const DeleteInferenceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::DeleteInferenceProfile, request, handler, context);
        }

        /**
         * <p>Deletes an endpoint for a model from Amazon Bedrock
         * Marketplace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/DeleteMarketplaceModelEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMarketplaceModelEndpointOutcome DeleteMarketplaceModelEndpoint(const Model::DeleteMarketplaceModelEndpointRequest& request) const;

        /**
         * A Callable wrapper for DeleteMarketplaceModelEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteMarketplaceModelEndpointRequestT = Model::DeleteMarketplaceModelEndpointRequest>
        Model::DeleteMarketplaceModelEndpointOutcomeCallable DeleteMarketplaceModelEndpointCallable(const DeleteMarketplaceModelEndpointRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::DeleteMarketplaceModelEndpoint, request);
        }

        /**
         * An Async wrapper for DeleteMarketplaceModelEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteMarketplaceModelEndpointRequestT = Model::DeleteMarketplaceModelEndpointRequest>
        void DeleteMarketplaceModelEndpointAsync(const DeleteMarketplaceModelEndpointRequestT& request, const DeleteMarketplaceModelEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::DeleteMarketplaceModelEndpoint, request, handler, context);
        }

        /**
         * <p>Delete the invocation logging. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/DeleteModelInvocationLoggingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteModelInvocationLoggingConfigurationOutcome DeleteModelInvocationLoggingConfiguration(const Model::DeleteModelInvocationLoggingConfigurationRequest& request = {}) const;

        /**
         * A Callable wrapper for DeleteModelInvocationLoggingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteModelInvocationLoggingConfigurationRequestT = Model::DeleteModelInvocationLoggingConfigurationRequest>
        Model::DeleteModelInvocationLoggingConfigurationOutcomeCallable DeleteModelInvocationLoggingConfigurationCallable(const DeleteModelInvocationLoggingConfigurationRequestT& request = {}) const
        {
            return SubmitCallable(&BedrockClient::DeleteModelInvocationLoggingConfiguration, request);
        }

        /**
         * An Async wrapper for DeleteModelInvocationLoggingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteModelInvocationLoggingConfigurationRequestT = Model::DeleteModelInvocationLoggingConfigurationRequest>
        void DeleteModelInvocationLoggingConfigurationAsync(const DeleteModelInvocationLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const DeleteModelInvocationLoggingConfigurationRequestT& request = {}) const
        {
            return SubmitAsync(&BedrockClient::DeleteModelInvocationLoggingConfiguration, request, handler, context);
        }

        /**
         * <p>Deletes a specified prompt router. This action cannot be
         * undone.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/DeletePromptRouter">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePromptRouterOutcome DeletePromptRouter(const Model::DeletePromptRouterRequest& request) const;

        /**
         * A Callable wrapper for DeletePromptRouter that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeletePromptRouterRequestT = Model::DeletePromptRouterRequest>
        Model::DeletePromptRouterOutcomeCallable DeletePromptRouterCallable(const DeletePromptRouterRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::DeletePromptRouter, request);
        }

        /**
         * An Async wrapper for DeletePromptRouter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeletePromptRouterRequestT = Model::DeletePromptRouterRequest>
        void DeletePromptRouterAsync(const DeletePromptRouterRequestT& request, const DeletePromptRouterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::DeletePromptRouter, request, handler, context);
        }

        /**
         * <p>Deletes a Provisioned Throughput. You can't delete a Provisioned Throughput
         * before the commitment term is over. For more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/prov-throughput.html">Provisioned
         * Throughput</a> in the <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/what-is-service.html">Amazon
         * Bedrock User Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/DeleteProvisionedModelThroughput">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProvisionedModelThroughputOutcome DeleteProvisionedModelThroughput(const Model::DeleteProvisionedModelThroughputRequest& request) const;

        /**
         * A Callable wrapper for DeleteProvisionedModelThroughput that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteProvisionedModelThroughputRequestT = Model::DeleteProvisionedModelThroughputRequest>
        Model::DeleteProvisionedModelThroughputOutcomeCallable DeleteProvisionedModelThroughputCallable(const DeleteProvisionedModelThroughputRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::DeleteProvisionedModelThroughput, request);
        }

        /**
         * An Async wrapper for DeleteProvisionedModelThroughput that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteProvisionedModelThroughputRequestT = Model::DeleteProvisionedModelThroughputRequest>
        void DeleteProvisionedModelThroughputAsync(const DeleteProvisionedModelThroughputRequestT& request, const DeleteProvisionedModelThroughputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::DeleteProvisionedModelThroughput, request, handler, context);
        }

        /**
         * <p>Deregisters an endpoint for a model from Amazon Bedrock Marketplace. This
         * operation removes the endpoint's association with Amazon Bedrock but does not
         * delete the underlying Amazon SageMaker endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/DeregisterMarketplaceModelEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterMarketplaceModelEndpointOutcome DeregisterMarketplaceModelEndpoint(const Model::DeregisterMarketplaceModelEndpointRequest& request) const;

        /**
         * A Callable wrapper for DeregisterMarketplaceModelEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeregisterMarketplaceModelEndpointRequestT = Model::DeregisterMarketplaceModelEndpointRequest>
        Model::DeregisterMarketplaceModelEndpointOutcomeCallable DeregisterMarketplaceModelEndpointCallable(const DeregisterMarketplaceModelEndpointRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::DeregisterMarketplaceModelEndpoint, request);
        }

        /**
         * An Async wrapper for DeregisterMarketplaceModelEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeregisterMarketplaceModelEndpointRequestT = Model::DeregisterMarketplaceModelEndpointRequest>
        void DeregisterMarketplaceModelEndpointAsync(const DeregisterMarketplaceModelEndpointRequestT& request, const DeregisterMarketplaceModelEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::DeregisterMarketplaceModelEndpoint, request, handler, context);
        }

        /**
         * <p>Exports the policy definition for an Automated Reasoning policy version.
         * Returns the complete policy definition including rules, variables, and custom
         * variable types in a structured format.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/ExportAutomatedReasoningPolicyVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::ExportAutomatedReasoningPolicyVersionOutcome ExportAutomatedReasoningPolicyVersion(const Model::ExportAutomatedReasoningPolicyVersionRequest& request) const;

        /**
         * A Callable wrapper for ExportAutomatedReasoningPolicyVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ExportAutomatedReasoningPolicyVersionRequestT = Model::ExportAutomatedReasoningPolicyVersionRequest>
        Model::ExportAutomatedReasoningPolicyVersionOutcomeCallable ExportAutomatedReasoningPolicyVersionCallable(const ExportAutomatedReasoningPolicyVersionRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::ExportAutomatedReasoningPolicyVersion, request);
        }

        /**
         * An Async wrapper for ExportAutomatedReasoningPolicyVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ExportAutomatedReasoningPolicyVersionRequestT = Model::ExportAutomatedReasoningPolicyVersionRequest>
        void ExportAutomatedReasoningPolicyVersionAsync(const ExportAutomatedReasoningPolicyVersionRequestT& request, const ExportAutomatedReasoningPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::ExportAutomatedReasoningPolicyVersion, request, handler, context);
        }

        /**
         * <p>Retrieves details about an Automated Reasoning policy or policy version.
         * Returns information including the policy definition, metadata, and
         * timestamps.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/GetAutomatedReasoningPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAutomatedReasoningPolicyOutcome GetAutomatedReasoningPolicy(const Model::GetAutomatedReasoningPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetAutomatedReasoningPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAutomatedReasoningPolicyRequestT = Model::GetAutomatedReasoningPolicyRequest>
        Model::GetAutomatedReasoningPolicyOutcomeCallable GetAutomatedReasoningPolicyCallable(const GetAutomatedReasoningPolicyRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::GetAutomatedReasoningPolicy, request);
        }

        /**
         * An Async wrapper for GetAutomatedReasoningPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAutomatedReasoningPolicyRequestT = Model::GetAutomatedReasoningPolicyRequest>
        void GetAutomatedReasoningPolicyAsync(const GetAutomatedReasoningPolicyRequestT& request, const GetAutomatedReasoningPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::GetAutomatedReasoningPolicy, request, handler, context);
        }

        /**
         * <p>Retrieves the current annotations for an Automated Reasoning policy build
         * workflow. Annotations contain corrections to the rules, variables and types to
         * be applied to the policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/GetAutomatedReasoningPolicyAnnotations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAutomatedReasoningPolicyAnnotationsOutcome GetAutomatedReasoningPolicyAnnotations(const Model::GetAutomatedReasoningPolicyAnnotationsRequest& request) const;

        /**
         * A Callable wrapper for GetAutomatedReasoningPolicyAnnotations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAutomatedReasoningPolicyAnnotationsRequestT = Model::GetAutomatedReasoningPolicyAnnotationsRequest>
        Model::GetAutomatedReasoningPolicyAnnotationsOutcomeCallable GetAutomatedReasoningPolicyAnnotationsCallable(const GetAutomatedReasoningPolicyAnnotationsRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::GetAutomatedReasoningPolicyAnnotations, request);
        }

        /**
         * An Async wrapper for GetAutomatedReasoningPolicyAnnotations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAutomatedReasoningPolicyAnnotationsRequestT = Model::GetAutomatedReasoningPolicyAnnotationsRequest>
        void GetAutomatedReasoningPolicyAnnotationsAsync(const GetAutomatedReasoningPolicyAnnotationsRequestT& request, const GetAutomatedReasoningPolicyAnnotationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::GetAutomatedReasoningPolicyAnnotations, request, handler, context);
        }

        /**
         * <p>Retrieves detailed information about an Automated Reasoning policy build
         * workflow, including its status, configuration, and metadata.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/GetAutomatedReasoningPolicyBuildWorkflow">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAutomatedReasoningPolicyBuildWorkflowOutcome GetAutomatedReasoningPolicyBuildWorkflow(const Model::GetAutomatedReasoningPolicyBuildWorkflowRequest& request) const;

        /**
         * A Callable wrapper for GetAutomatedReasoningPolicyBuildWorkflow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAutomatedReasoningPolicyBuildWorkflowRequestT = Model::GetAutomatedReasoningPolicyBuildWorkflowRequest>
        Model::GetAutomatedReasoningPolicyBuildWorkflowOutcomeCallable GetAutomatedReasoningPolicyBuildWorkflowCallable(const GetAutomatedReasoningPolicyBuildWorkflowRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::GetAutomatedReasoningPolicyBuildWorkflow, request);
        }

        /**
         * An Async wrapper for GetAutomatedReasoningPolicyBuildWorkflow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAutomatedReasoningPolicyBuildWorkflowRequestT = Model::GetAutomatedReasoningPolicyBuildWorkflowRequest>
        void GetAutomatedReasoningPolicyBuildWorkflowAsync(const GetAutomatedReasoningPolicyBuildWorkflowRequestT& request, const GetAutomatedReasoningPolicyBuildWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::GetAutomatedReasoningPolicyBuildWorkflow, request, handler, context);
        }

        /**
         * <p>Retrieves the resulting assets from a completed Automated Reasoning policy
         * build workflow, including build logs, quality reports, and generated policy
         * artifacts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/GetAutomatedReasoningPolicyBuildWorkflowResultAssets">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAutomatedReasoningPolicyBuildWorkflowResultAssetsOutcome GetAutomatedReasoningPolicyBuildWorkflowResultAssets(const Model::GetAutomatedReasoningPolicyBuildWorkflowResultAssetsRequest& request) const;

        /**
         * A Callable wrapper for GetAutomatedReasoningPolicyBuildWorkflowResultAssets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAutomatedReasoningPolicyBuildWorkflowResultAssetsRequestT = Model::GetAutomatedReasoningPolicyBuildWorkflowResultAssetsRequest>
        Model::GetAutomatedReasoningPolicyBuildWorkflowResultAssetsOutcomeCallable GetAutomatedReasoningPolicyBuildWorkflowResultAssetsCallable(const GetAutomatedReasoningPolicyBuildWorkflowResultAssetsRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::GetAutomatedReasoningPolicyBuildWorkflowResultAssets, request);
        }

        /**
         * An Async wrapper for GetAutomatedReasoningPolicyBuildWorkflowResultAssets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAutomatedReasoningPolicyBuildWorkflowResultAssetsRequestT = Model::GetAutomatedReasoningPolicyBuildWorkflowResultAssetsRequest>
        void GetAutomatedReasoningPolicyBuildWorkflowResultAssetsAsync(const GetAutomatedReasoningPolicyBuildWorkflowResultAssetsRequestT& request, const GetAutomatedReasoningPolicyBuildWorkflowResultAssetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::GetAutomatedReasoningPolicyBuildWorkflowResultAssets, request, handler, context);
        }

        /**
         * <p>Retrieves the next test scenario for validating an Automated Reasoning
         * policy. This is used during the interactive policy refinement process to test
         * policy behavior.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/GetAutomatedReasoningPolicyNextScenario">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAutomatedReasoningPolicyNextScenarioOutcome GetAutomatedReasoningPolicyNextScenario(const Model::GetAutomatedReasoningPolicyNextScenarioRequest& request) const;

        /**
         * A Callable wrapper for GetAutomatedReasoningPolicyNextScenario that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAutomatedReasoningPolicyNextScenarioRequestT = Model::GetAutomatedReasoningPolicyNextScenarioRequest>
        Model::GetAutomatedReasoningPolicyNextScenarioOutcomeCallable GetAutomatedReasoningPolicyNextScenarioCallable(const GetAutomatedReasoningPolicyNextScenarioRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::GetAutomatedReasoningPolicyNextScenario, request);
        }

        /**
         * An Async wrapper for GetAutomatedReasoningPolicyNextScenario that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAutomatedReasoningPolicyNextScenarioRequestT = Model::GetAutomatedReasoningPolicyNextScenarioRequest>
        void GetAutomatedReasoningPolicyNextScenarioAsync(const GetAutomatedReasoningPolicyNextScenarioRequestT& request, const GetAutomatedReasoningPolicyNextScenarioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::GetAutomatedReasoningPolicyNextScenario, request, handler, context);
        }

        /**
         * <p>Retrieves details about a specific Automated Reasoning policy
         * test.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/GetAutomatedReasoningPolicyTestCase">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAutomatedReasoningPolicyTestCaseOutcome GetAutomatedReasoningPolicyTestCase(const Model::GetAutomatedReasoningPolicyTestCaseRequest& request) const;

        /**
         * A Callable wrapper for GetAutomatedReasoningPolicyTestCase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAutomatedReasoningPolicyTestCaseRequestT = Model::GetAutomatedReasoningPolicyTestCaseRequest>
        Model::GetAutomatedReasoningPolicyTestCaseOutcomeCallable GetAutomatedReasoningPolicyTestCaseCallable(const GetAutomatedReasoningPolicyTestCaseRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::GetAutomatedReasoningPolicyTestCase, request);
        }

        /**
         * An Async wrapper for GetAutomatedReasoningPolicyTestCase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAutomatedReasoningPolicyTestCaseRequestT = Model::GetAutomatedReasoningPolicyTestCaseRequest>
        void GetAutomatedReasoningPolicyTestCaseAsync(const GetAutomatedReasoningPolicyTestCaseRequestT& request, const GetAutomatedReasoningPolicyTestCaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::GetAutomatedReasoningPolicyTestCase, request, handler, context);
        }

        /**
         * <p>Retrieves the test result for a specific Automated Reasoning policy test.
         * Returns detailed validation findings and execution status.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/GetAutomatedReasoningPolicyTestResult">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAutomatedReasoningPolicyTestResultOutcome GetAutomatedReasoningPolicyTestResult(const Model::GetAutomatedReasoningPolicyTestResultRequest& request) const;

        /**
         * A Callable wrapper for GetAutomatedReasoningPolicyTestResult that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAutomatedReasoningPolicyTestResultRequestT = Model::GetAutomatedReasoningPolicyTestResultRequest>
        Model::GetAutomatedReasoningPolicyTestResultOutcomeCallable GetAutomatedReasoningPolicyTestResultCallable(const GetAutomatedReasoningPolicyTestResultRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::GetAutomatedReasoningPolicyTestResult, request);
        }

        /**
         * An Async wrapper for GetAutomatedReasoningPolicyTestResult that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAutomatedReasoningPolicyTestResultRequestT = Model::GetAutomatedReasoningPolicyTestResultRequest>
        void GetAutomatedReasoningPolicyTestResultAsync(const GetAutomatedReasoningPolicyTestResultRequestT& request, const GetAutomatedReasoningPolicyTestResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::GetAutomatedReasoningPolicyTestResult, request, handler, context);
        }

        /**
         * <p>Get the properties associated with a Amazon Bedrock custom model that you
         * have created. For more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/custom-models.html">Custom
         * models</a> in the <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/what-is-service.html">Amazon
         * Bedrock User Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/GetCustomModel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCustomModelOutcome GetCustomModel(const Model::GetCustomModelRequest& request) const;

        /**
         * A Callable wrapper for GetCustomModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCustomModelRequestT = Model::GetCustomModelRequest>
        Model::GetCustomModelOutcomeCallable GetCustomModelCallable(const GetCustomModelRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::GetCustomModel, request);
        }

        /**
         * An Async wrapper for GetCustomModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCustomModelRequestT = Model::GetCustomModelRequest>
        void GetCustomModelAsync(const GetCustomModelRequestT& request, const GetCustomModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::GetCustomModel, request, handler, context);
        }

        /**
         * <p>Retrieves information about a custom model deployment, including its status,
         * configuration, and metadata. Use this operation to monitor the deployment status
         * and retrieve details needed for inference requests.</p> <p>The following actions
         * are related to the <code>GetCustomModelDeployment</code> operation:</p> <ul>
         * <li> <p> <a
         * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_CreateCustomModelDeployment.html">CreateCustomModelDeployment</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_ListCustomModelDeployments.html">ListCustomModelDeployments</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_DeleteCustomModelDeployment.html">DeleteCustomModelDeployment</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/GetCustomModelDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCustomModelDeploymentOutcome GetCustomModelDeployment(const Model::GetCustomModelDeploymentRequest& request) const;

        /**
         * A Callable wrapper for GetCustomModelDeployment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCustomModelDeploymentRequestT = Model::GetCustomModelDeploymentRequest>
        Model::GetCustomModelDeploymentOutcomeCallable GetCustomModelDeploymentCallable(const GetCustomModelDeploymentRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::GetCustomModelDeployment, request);
        }

        /**
         * An Async wrapper for GetCustomModelDeployment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCustomModelDeploymentRequestT = Model::GetCustomModelDeploymentRequest>
        void GetCustomModelDeploymentAsync(const GetCustomModelDeploymentRequestT& request, const GetCustomModelDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::GetCustomModelDeployment, request, handler, context);
        }

        /**
         * <p>Gets information about an evaluation job, such as the status of the
         * job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/GetEvaluationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEvaluationJobOutcome GetEvaluationJob(const Model::GetEvaluationJobRequest& request) const;

        /**
         * A Callable wrapper for GetEvaluationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetEvaluationJobRequestT = Model::GetEvaluationJobRequest>
        Model::GetEvaluationJobOutcomeCallable GetEvaluationJobCallable(const GetEvaluationJobRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::GetEvaluationJob, request);
        }

        /**
         * An Async wrapper for GetEvaluationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEvaluationJobRequestT = Model::GetEvaluationJobRequest>
        void GetEvaluationJobAsync(const GetEvaluationJobRequestT& request, const GetEvaluationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::GetEvaluationJob, request, handler, context);
        }

        /**
         * <p>Get details about a Amazon Bedrock foundation model.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/GetFoundationModel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFoundationModelOutcome GetFoundationModel(const Model::GetFoundationModelRequest& request) const;

        /**
         * A Callable wrapper for GetFoundationModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetFoundationModelRequestT = Model::GetFoundationModelRequest>
        Model::GetFoundationModelOutcomeCallable GetFoundationModelCallable(const GetFoundationModelRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::GetFoundationModel, request);
        }

        /**
         * An Async wrapper for GetFoundationModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetFoundationModelRequestT = Model::GetFoundationModelRequest>
        void GetFoundationModelAsync(const GetFoundationModelRequestT& request, const GetFoundationModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::GetFoundationModel, request, handler, context);
        }

        /**
         * <p>Get information about the Foundation model availability.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/GetFoundationModelAvailability">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFoundationModelAvailabilityOutcome GetFoundationModelAvailability(const Model::GetFoundationModelAvailabilityRequest& request) const;

        /**
         * A Callable wrapper for GetFoundationModelAvailability that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetFoundationModelAvailabilityRequestT = Model::GetFoundationModelAvailabilityRequest>
        Model::GetFoundationModelAvailabilityOutcomeCallable GetFoundationModelAvailabilityCallable(const GetFoundationModelAvailabilityRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::GetFoundationModelAvailability, request);
        }

        /**
         * An Async wrapper for GetFoundationModelAvailability that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetFoundationModelAvailabilityRequestT = Model::GetFoundationModelAvailabilityRequest>
        void GetFoundationModelAvailabilityAsync(const GetFoundationModelAvailabilityRequestT& request, const GetFoundationModelAvailabilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::GetFoundationModelAvailability, request, handler, context);
        }

        /**
         * <p>Gets details about a guardrail. If you don't specify a version, the response
         * returns details for the <code>DRAFT</code> version.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/GetGuardrail">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGuardrailOutcome GetGuardrail(const Model::GetGuardrailRequest& request) const;

        /**
         * A Callable wrapper for GetGuardrail that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetGuardrailRequestT = Model::GetGuardrailRequest>
        Model::GetGuardrailOutcomeCallable GetGuardrailCallable(const GetGuardrailRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::GetGuardrail, request);
        }

        /**
         * An Async wrapper for GetGuardrail that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetGuardrailRequestT = Model::GetGuardrailRequest>
        void GetGuardrailAsync(const GetGuardrailRequestT& request, const GetGuardrailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::GetGuardrail, request, handler, context);
        }

        /**
         * <p>Gets properties associated with a customized model you imported.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/GetImportedModel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetImportedModelOutcome GetImportedModel(const Model::GetImportedModelRequest& request) const;

        /**
         * A Callable wrapper for GetImportedModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetImportedModelRequestT = Model::GetImportedModelRequest>
        Model::GetImportedModelOutcomeCallable GetImportedModelCallable(const GetImportedModelRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::GetImportedModel, request);
        }

        /**
         * An Async wrapper for GetImportedModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetImportedModelRequestT = Model::GetImportedModelRequest>
        void GetImportedModelAsync(const GetImportedModelRequestT& request, const GetImportedModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::GetImportedModel, request, handler, context);
        }

        /**
         * <p>Gets information about an inference profile. For more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/cross-region-inference.html">Increase
         * throughput and resilience with cross-region inference in Amazon Bedrock</a>. in
         * the Amazon Bedrock User Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/GetInferenceProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInferenceProfileOutcome GetInferenceProfile(const Model::GetInferenceProfileRequest& request) const;

        /**
         * A Callable wrapper for GetInferenceProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetInferenceProfileRequestT = Model::GetInferenceProfileRequest>
        Model::GetInferenceProfileOutcomeCallable GetInferenceProfileCallable(const GetInferenceProfileRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::GetInferenceProfile, request);
        }

        /**
         * An Async wrapper for GetInferenceProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetInferenceProfileRequestT = Model::GetInferenceProfileRequest>
        void GetInferenceProfileAsync(const GetInferenceProfileRequestT& request, const GetInferenceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::GetInferenceProfile, request, handler, context);
        }

        /**
         * <p>Retrieves details about a specific endpoint for a model from Amazon Bedrock
         * Marketplace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/GetMarketplaceModelEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMarketplaceModelEndpointOutcome GetMarketplaceModelEndpoint(const Model::GetMarketplaceModelEndpointRequest& request) const;

        /**
         * A Callable wrapper for GetMarketplaceModelEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMarketplaceModelEndpointRequestT = Model::GetMarketplaceModelEndpointRequest>
        Model::GetMarketplaceModelEndpointOutcomeCallable GetMarketplaceModelEndpointCallable(const GetMarketplaceModelEndpointRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::GetMarketplaceModelEndpoint, request);
        }

        /**
         * An Async wrapper for GetMarketplaceModelEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMarketplaceModelEndpointRequestT = Model::GetMarketplaceModelEndpointRequest>
        void GetMarketplaceModelEndpointAsync(const GetMarketplaceModelEndpointRequestT& request, const GetMarketplaceModelEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::GetMarketplaceModelEndpoint, request, handler, context);
        }

        /**
         * <p>Retrieves information about a model copy job. For more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/copy-model.html">Copy
         * models to be used in other regions</a> in the <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/what-is-service.html">Amazon
         * Bedrock User Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/GetModelCopyJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetModelCopyJobOutcome GetModelCopyJob(const Model::GetModelCopyJobRequest& request) const;

        /**
         * A Callable wrapper for GetModelCopyJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetModelCopyJobRequestT = Model::GetModelCopyJobRequest>
        Model::GetModelCopyJobOutcomeCallable GetModelCopyJobCallable(const GetModelCopyJobRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::GetModelCopyJob, request);
        }

        /**
         * An Async wrapper for GetModelCopyJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetModelCopyJobRequestT = Model::GetModelCopyJobRequest>
        void GetModelCopyJobAsync(const GetModelCopyJobRequestT& request, const GetModelCopyJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::GetModelCopyJob, request, handler, context);
        }

        /**
         * <p>Retrieves the properties associated with a model-customization job, including
         * the status of the job. For more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/custom-models.html">Custom
         * models</a> in the <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/what-is-service.html">Amazon
         * Bedrock User Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/GetModelCustomizationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetModelCustomizationJobOutcome GetModelCustomizationJob(const Model::GetModelCustomizationJobRequest& request) const;

        /**
         * A Callable wrapper for GetModelCustomizationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetModelCustomizationJobRequestT = Model::GetModelCustomizationJobRequest>
        Model::GetModelCustomizationJobOutcomeCallable GetModelCustomizationJobCallable(const GetModelCustomizationJobRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::GetModelCustomizationJob, request);
        }

        /**
         * An Async wrapper for GetModelCustomizationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetModelCustomizationJobRequestT = Model::GetModelCustomizationJobRequest>
        void GetModelCustomizationJobAsync(const GetModelCustomizationJobRequestT& request, const GetModelCustomizationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::GetModelCustomizationJob, request, handler, context);
        }

        /**
         * <p>Retrieves the properties associated with import model job, including the
         * status of the job. For more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-customization-import-model.html">Import
         * a customized model</a> in the <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/what-is-service.html">Amazon
         * Bedrock User Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/GetModelImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetModelImportJobOutcome GetModelImportJob(const Model::GetModelImportJobRequest& request) const;

        /**
         * A Callable wrapper for GetModelImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetModelImportJobRequestT = Model::GetModelImportJobRequest>
        Model::GetModelImportJobOutcomeCallable GetModelImportJobCallable(const GetModelImportJobRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::GetModelImportJob, request);
        }

        /**
         * An Async wrapper for GetModelImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetModelImportJobRequestT = Model::GetModelImportJobRequest>
        void GetModelImportJobAsync(const GetModelImportJobRequestT& request, const GetModelImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::GetModelImportJob, request, handler, context);
        }

        /**
         * <p>Gets details about a batch inference job. For more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/batch-inference-monitor">Monitor
         * batch inference jobs</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/GetModelInvocationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetModelInvocationJobOutcome GetModelInvocationJob(const Model::GetModelInvocationJobRequest& request) const;

        /**
         * A Callable wrapper for GetModelInvocationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetModelInvocationJobRequestT = Model::GetModelInvocationJobRequest>
        Model::GetModelInvocationJobOutcomeCallable GetModelInvocationJobCallable(const GetModelInvocationJobRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::GetModelInvocationJob, request);
        }

        /**
         * An Async wrapper for GetModelInvocationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetModelInvocationJobRequestT = Model::GetModelInvocationJobRequest>
        void GetModelInvocationJobAsync(const GetModelInvocationJobRequestT& request, const GetModelInvocationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::GetModelInvocationJob, request, handler, context);
        }

        /**
         * <p>Get the current configuration values for model invocation
         * logging.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/GetModelInvocationLoggingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetModelInvocationLoggingConfigurationOutcome GetModelInvocationLoggingConfiguration(const Model::GetModelInvocationLoggingConfigurationRequest& request = {}) const;

        /**
         * A Callable wrapper for GetModelInvocationLoggingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetModelInvocationLoggingConfigurationRequestT = Model::GetModelInvocationLoggingConfigurationRequest>
        Model::GetModelInvocationLoggingConfigurationOutcomeCallable GetModelInvocationLoggingConfigurationCallable(const GetModelInvocationLoggingConfigurationRequestT& request = {}) const
        {
            return SubmitCallable(&BedrockClient::GetModelInvocationLoggingConfiguration, request);
        }

        /**
         * An Async wrapper for GetModelInvocationLoggingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetModelInvocationLoggingConfigurationRequestT = Model::GetModelInvocationLoggingConfigurationRequest>
        void GetModelInvocationLoggingConfigurationAsync(const GetModelInvocationLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const GetModelInvocationLoggingConfigurationRequestT& request = {}) const
        {
            return SubmitAsync(&BedrockClient::GetModelInvocationLoggingConfiguration, request, handler, context);
        }

        /**
         * <p>Retrieves details about a prompt router.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/GetPromptRouter">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPromptRouterOutcome GetPromptRouter(const Model::GetPromptRouterRequest& request) const;

        /**
         * A Callable wrapper for GetPromptRouter that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPromptRouterRequestT = Model::GetPromptRouterRequest>
        Model::GetPromptRouterOutcomeCallable GetPromptRouterCallable(const GetPromptRouterRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::GetPromptRouter, request);
        }

        /**
         * An Async wrapper for GetPromptRouter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPromptRouterRequestT = Model::GetPromptRouterRequest>
        void GetPromptRouterAsync(const GetPromptRouterRequestT& request, const GetPromptRouterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::GetPromptRouter, request, handler, context);
        }

        /**
         * <p>Returns details for a Provisioned Throughput. For more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/prov-throughput.html">Provisioned
         * Throughput</a> in the <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/what-is-service.html">Amazon
         * Bedrock User Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/GetProvisionedModelThroughput">AWS
         * API Reference</a></p>
         */
        virtual Model::GetProvisionedModelThroughputOutcome GetProvisionedModelThroughput(const Model::GetProvisionedModelThroughputRequest& request) const;

        /**
         * A Callable wrapper for GetProvisionedModelThroughput that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetProvisionedModelThroughputRequestT = Model::GetProvisionedModelThroughputRequest>
        Model::GetProvisionedModelThroughputOutcomeCallable GetProvisionedModelThroughputCallable(const GetProvisionedModelThroughputRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::GetProvisionedModelThroughput, request);
        }

        /**
         * An Async wrapper for GetProvisionedModelThroughput that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetProvisionedModelThroughputRequestT = Model::GetProvisionedModelThroughputRequest>
        void GetProvisionedModelThroughputAsync(const GetProvisionedModelThroughputRequestT& request, const GetProvisionedModelThroughputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::GetProvisionedModelThroughput, request, handler, context);
        }

        /**
         * <p>Get usecase for model access.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/GetUseCaseForModelAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUseCaseForModelAccessOutcome GetUseCaseForModelAccess(const Model::GetUseCaseForModelAccessRequest& request = {}) const;

        /**
         * A Callable wrapper for GetUseCaseForModelAccess that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetUseCaseForModelAccessRequestT = Model::GetUseCaseForModelAccessRequest>
        Model::GetUseCaseForModelAccessOutcomeCallable GetUseCaseForModelAccessCallable(const GetUseCaseForModelAccessRequestT& request = {}) const
        {
            return SubmitCallable(&BedrockClient::GetUseCaseForModelAccess, request);
        }

        /**
         * An Async wrapper for GetUseCaseForModelAccess that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetUseCaseForModelAccessRequestT = Model::GetUseCaseForModelAccessRequest>
        void GetUseCaseForModelAccessAsync(const GetUseCaseForModelAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const GetUseCaseForModelAccessRequestT& request = {}) const
        {
            return SubmitAsync(&BedrockClient::GetUseCaseForModelAccess, request, handler, context);
        }

        /**
         * <p>Lists all Automated Reasoning policies in your account, with optional
         * filtering by policy ARN. This helps you manage and discover existing
         * policies.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/ListAutomatedReasoningPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAutomatedReasoningPoliciesOutcome ListAutomatedReasoningPolicies(const Model::ListAutomatedReasoningPoliciesRequest& request = {}) const;

        /**
         * A Callable wrapper for ListAutomatedReasoningPolicies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAutomatedReasoningPoliciesRequestT = Model::ListAutomatedReasoningPoliciesRequest>
        Model::ListAutomatedReasoningPoliciesOutcomeCallable ListAutomatedReasoningPoliciesCallable(const ListAutomatedReasoningPoliciesRequestT& request = {}) const
        {
            return SubmitCallable(&BedrockClient::ListAutomatedReasoningPolicies, request);
        }

        /**
         * An Async wrapper for ListAutomatedReasoningPolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAutomatedReasoningPoliciesRequestT = Model::ListAutomatedReasoningPoliciesRequest>
        void ListAutomatedReasoningPoliciesAsync(const ListAutomatedReasoningPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListAutomatedReasoningPoliciesRequestT& request = {}) const
        {
            return SubmitAsync(&BedrockClient::ListAutomatedReasoningPolicies, request, handler, context);
        }

        /**
         * <p>Lists all build workflows for an Automated Reasoning policy, showing the
         * history of policy creation and modification attempts.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/ListAutomatedReasoningPolicyBuildWorkflows">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAutomatedReasoningPolicyBuildWorkflowsOutcome ListAutomatedReasoningPolicyBuildWorkflows(const Model::ListAutomatedReasoningPolicyBuildWorkflowsRequest& request) const;

        /**
         * A Callable wrapper for ListAutomatedReasoningPolicyBuildWorkflows that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAutomatedReasoningPolicyBuildWorkflowsRequestT = Model::ListAutomatedReasoningPolicyBuildWorkflowsRequest>
        Model::ListAutomatedReasoningPolicyBuildWorkflowsOutcomeCallable ListAutomatedReasoningPolicyBuildWorkflowsCallable(const ListAutomatedReasoningPolicyBuildWorkflowsRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::ListAutomatedReasoningPolicyBuildWorkflows, request);
        }

        /**
         * An Async wrapper for ListAutomatedReasoningPolicyBuildWorkflows that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAutomatedReasoningPolicyBuildWorkflowsRequestT = Model::ListAutomatedReasoningPolicyBuildWorkflowsRequest>
        void ListAutomatedReasoningPolicyBuildWorkflowsAsync(const ListAutomatedReasoningPolicyBuildWorkflowsRequestT& request, const ListAutomatedReasoningPolicyBuildWorkflowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::ListAutomatedReasoningPolicyBuildWorkflows, request, handler, context);
        }

        /**
         * <p>Lists tests for an Automated Reasoning policy. We recommend using pagination
         * to ensure that the operation returns quickly and successfully.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/ListAutomatedReasoningPolicyTestCases">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAutomatedReasoningPolicyTestCasesOutcome ListAutomatedReasoningPolicyTestCases(const Model::ListAutomatedReasoningPolicyTestCasesRequest& request) const;

        /**
         * A Callable wrapper for ListAutomatedReasoningPolicyTestCases that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAutomatedReasoningPolicyTestCasesRequestT = Model::ListAutomatedReasoningPolicyTestCasesRequest>
        Model::ListAutomatedReasoningPolicyTestCasesOutcomeCallable ListAutomatedReasoningPolicyTestCasesCallable(const ListAutomatedReasoningPolicyTestCasesRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::ListAutomatedReasoningPolicyTestCases, request);
        }

        /**
         * An Async wrapper for ListAutomatedReasoningPolicyTestCases that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAutomatedReasoningPolicyTestCasesRequestT = Model::ListAutomatedReasoningPolicyTestCasesRequest>
        void ListAutomatedReasoningPolicyTestCasesAsync(const ListAutomatedReasoningPolicyTestCasesRequestT& request, const ListAutomatedReasoningPolicyTestCasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::ListAutomatedReasoningPolicyTestCases, request, handler, context);
        }

        /**
         * <p>Lists test results for an Automated Reasoning policy, showing how the policy
         * performed against various test scenarios and validation checks.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/ListAutomatedReasoningPolicyTestResults">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAutomatedReasoningPolicyTestResultsOutcome ListAutomatedReasoningPolicyTestResults(const Model::ListAutomatedReasoningPolicyTestResultsRequest& request) const;

        /**
         * A Callable wrapper for ListAutomatedReasoningPolicyTestResults that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAutomatedReasoningPolicyTestResultsRequestT = Model::ListAutomatedReasoningPolicyTestResultsRequest>
        Model::ListAutomatedReasoningPolicyTestResultsOutcomeCallable ListAutomatedReasoningPolicyTestResultsCallable(const ListAutomatedReasoningPolicyTestResultsRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::ListAutomatedReasoningPolicyTestResults, request);
        }

        /**
         * An Async wrapper for ListAutomatedReasoningPolicyTestResults that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAutomatedReasoningPolicyTestResultsRequestT = Model::ListAutomatedReasoningPolicyTestResultsRequest>
        void ListAutomatedReasoningPolicyTestResultsAsync(const ListAutomatedReasoningPolicyTestResultsRequestT& request, const ListAutomatedReasoningPolicyTestResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::ListAutomatedReasoningPolicyTestResults, request, handler, context);
        }

        /**
         * <p>Lists custom model deployments in your account. You can filter the results by
         * creation time, name, status, and associated model. Use this operation to manage
         * and monitor your custom model deployments.</p> <p>We recommend using pagination
         * to ensure that the operation returns quickly and successfully.</p> <p>The
         * following actions are related to the <code>ListCustomModelDeployments</code>
         * operation:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_CreateCustomModelDeployment.html">CreateCustomModelDeployment</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_GetCustomModelDeployment.html">GetCustomModelDeployment</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_DeleteCustomModelDeployment.html">DeleteCustomModelDeployment</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/ListCustomModelDeployments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCustomModelDeploymentsOutcome ListCustomModelDeployments(const Model::ListCustomModelDeploymentsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListCustomModelDeployments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCustomModelDeploymentsRequestT = Model::ListCustomModelDeploymentsRequest>
        Model::ListCustomModelDeploymentsOutcomeCallable ListCustomModelDeploymentsCallable(const ListCustomModelDeploymentsRequestT& request = {}) const
        {
            return SubmitCallable(&BedrockClient::ListCustomModelDeployments, request);
        }

        /**
         * An Async wrapper for ListCustomModelDeployments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCustomModelDeploymentsRequestT = Model::ListCustomModelDeploymentsRequest>
        void ListCustomModelDeploymentsAsync(const ListCustomModelDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListCustomModelDeploymentsRequestT& request = {}) const
        {
            return SubmitAsync(&BedrockClient::ListCustomModelDeployments, request, handler, context);
        }

        /**
         * <p>Returns a list of the custom models that you have created with the
         * <code>CreateModelCustomizationJob</code> operation.</p> <p>For more information,
         * see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/custom-models.html">Custom
         * models</a> in the <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/what-is-service.html">Amazon
         * Bedrock User Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/ListCustomModels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCustomModelsOutcome ListCustomModels(const Model::ListCustomModelsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListCustomModels that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCustomModelsRequestT = Model::ListCustomModelsRequest>
        Model::ListCustomModelsOutcomeCallable ListCustomModelsCallable(const ListCustomModelsRequestT& request = {}) const
        {
            return SubmitCallable(&BedrockClient::ListCustomModels, request);
        }

        /**
         * An Async wrapper for ListCustomModels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCustomModelsRequestT = Model::ListCustomModelsRequest>
        void ListCustomModelsAsync(const ListCustomModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListCustomModelsRequestT& request = {}) const
        {
            return SubmitAsync(&BedrockClient::ListCustomModels, request, handler, context);
        }

        /**
         * <p>Lists all existing evaluation jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/ListEvaluationJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEvaluationJobsOutcome ListEvaluationJobs(const Model::ListEvaluationJobsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListEvaluationJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEvaluationJobsRequestT = Model::ListEvaluationJobsRequest>
        Model::ListEvaluationJobsOutcomeCallable ListEvaluationJobsCallable(const ListEvaluationJobsRequestT& request = {}) const
        {
            return SubmitCallable(&BedrockClient::ListEvaluationJobs, request);
        }

        /**
         * An Async wrapper for ListEvaluationJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEvaluationJobsRequestT = Model::ListEvaluationJobsRequest>
        void ListEvaluationJobsAsync(const ListEvaluationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListEvaluationJobsRequestT& request = {}) const
        {
            return SubmitAsync(&BedrockClient::ListEvaluationJobs, request, handler, context);
        }

        /**
         * <p>Get the offers associated with the specified model.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/ListFoundationModelAgreementOffers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFoundationModelAgreementOffersOutcome ListFoundationModelAgreementOffers(const Model::ListFoundationModelAgreementOffersRequest& request) const;

        /**
         * A Callable wrapper for ListFoundationModelAgreementOffers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListFoundationModelAgreementOffersRequestT = Model::ListFoundationModelAgreementOffersRequest>
        Model::ListFoundationModelAgreementOffersOutcomeCallable ListFoundationModelAgreementOffersCallable(const ListFoundationModelAgreementOffersRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::ListFoundationModelAgreementOffers, request);
        }

        /**
         * An Async wrapper for ListFoundationModelAgreementOffers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFoundationModelAgreementOffersRequestT = Model::ListFoundationModelAgreementOffersRequest>
        void ListFoundationModelAgreementOffersAsync(const ListFoundationModelAgreementOffersRequestT& request, const ListFoundationModelAgreementOffersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::ListFoundationModelAgreementOffers, request, handler, context);
        }

        /**
         * <p>Lists Amazon Bedrock foundation models that you can use. You can filter the
         * results with the request parameters. For more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/foundation-models.html">Foundation
         * models</a> in the <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/what-is-service.html">Amazon
         * Bedrock User Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/ListFoundationModels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFoundationModelsOutcome ListFoundationModels(const Model::ListFoundationModelsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListFoundationModels that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListFoundationModelsRequestT = Model::ListFoundationModelsRequest>
        Model::ListFoundationModelsOutcomeCallable ListFoundationModelsCallable(const ListFoundationModelsRequestT& request = {}) const
        {
            return SubmitCallable(&BedrockClient::ListFoundationModels, request);
        }

        /**
         * An Async wrapper for ListFoundationModels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFoundationModelsRequestT = Model::ListFoundationModelsRequest>
        void ListFoundationModelsAsync(const ListFoundationModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListFoundationModelsRequestT& request = {}) const
        {
            return SubmitAsync(&BedrockClient::ListFoundationModels, request, handler, context);
        }

        /**
         * <p>Lists details about all the guardrails in an account. To list the
         * <code>DRAFT</code> version of all your guardrails, don't specify the
         * <code>guardrailIdentifier</code> field. To list all versions of a guardrail,
         * specify the ARN of the guardrail in the <code>guardrailIdentifier</code>
         * field.</p> <p>You can set the maximum number of results to return in a response
         * in the <code>maxResults</code> field. If there are more results than the number
         * you set, the response returns a <code>nextToken</code> that you can send in
         * another <code>ListGuardrails</code> request to see the next batch of
         * results.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/ListGuardrails">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGuardrailsOutcome ListGuardrails(const Model::ListGuardrailsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListGuardrails that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListGuardrailsRequestT = Model::ListGuardrailsRequest>
        Model::ListGuardrailsOutcomeCallable ListGuardrailsCallable(const ListGuardrailsRequestT& request = {}) const
        {
            return SubmitCallable(&BedrockClient::ListGuardrails, request);
        }

        /**
         * An Async wrapper for ListGuardrails that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListGuardrailsRequestT = Model::ListGuardrailsRequest>
        void ListGuardrailsAsync(const ListGuardrailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListGuardrailsRequestT& request = {}) const
        {
            return SubmitAsync(&BedrockClient::ListGuardrails, request, handler, context);
        }

        /**
         * <p>Returns a list of models you've imported. You can filter the results to
         * return based on one or more criteria. For more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-customization-import-model.html">Import
         * a customized model</a> in the <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/what-is-service.html">Amazon
         * Bedrock User Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/ListImportedModels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListImportedModelsOutcome ListImportedModels(const Model::ListImportedModelsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListImportedModels that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListImportedModelsRequestT = Model::ListImportedModelsRequest>
        Model::ListImportedModelsOutcomeCallable ListImportedModelsCallable(const ListImportedModelsRequestT& request = {}) const
        {
            return SubmitCallable(&BedrockClient::ListImportedModels, request);
        }

        /**
         * An Async wrapper for ListImportedModels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListImportedModelsRequestT = Model::ListImportedModelsRequest>
        void ListImportedModelsAsync(const ListImportedModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListImportedModelsRequestT& request = {}) const
        {
            return SubmitAsync(&BedrockClient::ListImportedModels, request, handler, context);
        }

        /**
         * <p>Returns a list of inference profiles that you can use. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/cross-region-inference.html">Increase
         * throughput and resilience with cross-region inference in Amazon Bedrock</a>. in
         * the Amazon Bedrock User Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/ListInferenceProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInferenceProfilesOutcome ListInferenceProfiles(const Model::ListInferenceProfilesRequest& request = {}) const;

        /**
         * A Callable wrapper for ListInferenceProfiles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListInferenceProfilesRequestT = Model::ListInferenceProfilesRequest>
        Model::ListInferenceProfilesOutcomeCallable ListInferenceProfilesCallable(const ListInferenceProfilesRequestT& request = {}) const
        {
            return SubmitCallable(&BedrockClient::ListInferenceProfiles, request);
        }

        /**
         * An Async wrapper for ListInferenceProfiles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListInferenceProfilesRequestT = Model::ListInferenceProfilesRequest>
        void ListInferenceProfilesAsync(const ListInferenceProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListInferenceProfilesRequestT& request = {}) const
        {
            return SubmitAsync(&BedrockClient::ListInferenceProfiles, request, handler, context);
        }

        /**
         * <p>Lists the endpoints for models from Amazon Bedrock Marketplace in your Amazon
         * Web Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/ListMarketplaceModelEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMarketplaceModelEndpointsOutcome ListMarketplaceModelEndpoints(const Model::ListMarketplaceModelEndpointsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListMarketplaceModelEndpoints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListMarketplaceModelEndpointsRequestT = Model::ListMarketplaceModelEndpointsRequest>
        Model::ListMarketplaceModelEndpointsOutcomeCallable ListMarketplaceModelEndpointsCallable(const ListMarketplaceModelEndpointsRequestT& request = {}) const
        {
            return SubmitCallable(&BedrockClient::ListMarketplaceModelEndpoints, request);
        }

        /**
         * An Async wrapper for ListMarketplaceModelEndpoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMarketplaceModelEndpointsRequestT = Model::ListMarketplaceModelEndpointsRequest>
        void ListMarketplaceModelEndpointsAsync(const ListMarketplaceModelEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListMarketplaceModelEndpointsRequestT& request = {}) const
        {
            return SubmitAsync(&BedrockClient::ListMarketplaceModelEndpoints, request, handler, context);
        }

        /**
         * <p>Returns a list of model copy jobs that you have submitted. You can filter the
         * jobs to return based on one or more criteria. For more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/copy-model.html">Copy
         * models to be used in other regions</a> in the <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/what-is-service.html">Amazon
         * Bedrock User Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/ListModelCopyJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListModelCopyJobsOutcome ListModelCopyJobs(const Model::ListModelCopyJobsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListModelCopyJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListModelCopyJobsRequestT = Model::ListModelCopyJobsRequest>
        Model::ListModelCopyJobsOutcomeCallable ListModelCopyJobsCallable(const ListModelCopyJobsRequestT& request = {}) const
        {
            return SubmitCallable(&BedrockClient::ListModelCopyJobs, request);
        }

        /**
         * An Async wrapper for ListModelCopyJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListModelCopyJobsRequestT = Model::ListModelCopyJobsRequest>
        void ListModelCopyJobsAsync(const ListModelCopyJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListModelCopyJobsRequestT& request = {}) const
        {
            return SubmitAsync(&BedrockClient::ListModelCopyJobs, request, handler, context);
        }

        /**
         * <p>Returns a list of model customization jobs that you have submitted. You can
         * filter the jobs to return based on one or more criteria.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/custom-models.html">Custom
         * models</a> in the <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/what-is-service.html">Amazon
         * Bedrock User Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/ListModelCustomizationJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListModelCustomizationJobsOutcome ListModelCustomizationJobs(const Model::ListModelCustomizationJobsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListModelCustomizationJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListModelCustomizationJobsRequestT = Model::ListModelCustomizationJobsRequest>
        Model::ListModelCustomizationJobsOutcomeCallable ListModelCustomizationJobsCallable(const ListModelCustomizationJobsRequestT& request = {}) const
        {
            return SubmitCallable(&BedrockClient::ListModelCustomizationJobs, request);
        }

        /**
         * An Async wrapper for ListModelCustomizationJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListModelCustomizationJobsRequestT = Model::ListModelCustomizationJobsRequest>
        void ListModelCustomizationJobsAsync(const ListModelCustomizationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListModelCustomizationJobsRequestT& request = {}) const
        {
            return SubmitAsync(&BedrockClient::ListModelCustomizationJobs, request, handler, context);
        }

        /**
         * <p>Returns a list of import jobs you've submitted. You can filter the results to
         * return based on one or more criteria. For more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-customization-import-model.html">Import
         * a customized model</a> in the <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/what-is-service.html">Amazon
         * Bedrock User Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/ListModelImportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListModelImportJobsOutcome ListModelImportJobs(const Model::ListModelImportJobsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListModelImportJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListModelImportJobsRequestT = Model::ListModelImportJobsRequest>
        Model::ListModelImportJobsOutcomeCallable ListModelImportJobsCallable(const ListModelImportJobsRequestT& request = {}) const
        {
            return SubmitCallable(&BedrockClient::ListModelImportJobs, request);
        }

        /**
         * An Async wrapper for ListModelImportJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListModelImportJobsRequestT = Model::ListModelImportJobsRequest>
        void ListModelImportJobsAsync(const ListModelImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListModelImportJobsRequestT& request = {}) const
        {
            return SubmitAsync(&BedrockClient::ListModelImportJobs, request, handler, context);
        }

        /**
         * <p>Lists all batch inference jobs in the account. For more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/batch-inference-view.html">View
         * details about a batch inference job</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/ListModelInvocationJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListModelInvocationJobsOutcome ListModelInvocationJobs(const Model::ListModelInvocationJobsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListModelInvocationJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListModelInvocationJobsRequestT = Model::ListModelInvocationJobsRequest>
        Model::ListModelInvocationJobsOutcomeCallable ListModelInvocationJobsCallable(const ListModelInvocationJobsRequestT& request = {}) const
        {
            return SubmitCallable(&BedrockClient::ListModelInvocationJobs, request);
        }

        /**
         * An Async wrapper for ListModelInvocationJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListModelInvocationJobsRequestT = Model::ListModelInvocationJobsRequest>
        void ListModelInvocationJobsAsync(const ListModelInvocationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListModelInvocationJobsRequestT& request = {}) const
        {
            return SubmitAsync(&BedrockClient::ListModelInvocationJobs, request, handler, context);
        }

        /**
         * <p>Retrieves a list of prompt routers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/ListPromptRouters">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPromptRoutersOutcome ListPromptRouters(const Model::ListPromptRoutersRequest& request = {}) const;

        /**
         * A Callable wrapper for ListPromptRouters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPromptRoutersRequestT = Model::ListPromptRoutersRequest>
        Model::ListPromptRoutersOutcomeCallable ListPromptRoutersCallable(const ListPromptRoutersRequestT& request = {}) const
        {
            return SubmitCallable(&BedrockClient::ListPromptRouters, request);
        }

        /**
         * An Async wrapper for ListPromptRouters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPromptRoutersRequestT = Model::ListPromptRoutersRequest>
        void ListPromptRoutersAsync(const ListPromptRoutersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListPromptRoutersRequestT& request = {}) const
        {
            return SubmitAsync(&BedrockClient::ListPromptRouters, request, handler, context);
        }

        /**
         * <p>Lists the Provisioned Throughputs in the account. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/prov-throughput.html">Provisioned
         * Throughput</a> in the <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/what-is-service.html">Amazon
         * Bedrock User Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/ListProvisionedModelThroughputs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProvisionedModelThroughputsOutcome ListProvisionedModelThroughputs(const Model::ListProvisionedModelThroughputsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListProvisionedModelThroughputs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListProvisionedModelThroughputsRequestT = Model::ListProvisionedModelThroughputsRequest>
        Model::ListProvisionedModelThroughputsOutcomeCallable ListProvisionedModelThroughputsCallable(const ListProvisionedModelThroughputsRequestT& request = {}) const
        {
            return SubmitCallable(&BedrockClient::ListProvisionedModelThroughputs, request);
        }

        /**
         * An Async wrapper for ListProvisionedModelThroughputs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListProvisionedModelThroughputsRequestT = Model::ListProvisionedModelThroughputsRequest>
        void ListProvisionedModelThroughputsAsync(const ListProvisionedModelThroughputsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListProvisionedModelThroughputsRequestT& request = {}) const
        {
            return SubmitAsync(&BedrockClient::ListProvisionedModelThroughputs, request, handler, context);
        }

        /**
         * <p>List the tags associated with the specified resource.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/what-is-service.html">Tagging
         * resources</a> in the <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/what-is-service.html">Amazon
         * Bedrock User Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Set the configuration values for model invocation logging.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/PutModelInvocationLoggingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutModelInvocationLoggingConfigurationOutcome PutModelInvocationLoggingConfiguration(const Model::PutModelInvocationLoggingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for PutModelInvocationLoggingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutModelInvocationLoggingConfigurationRequestT = Model::PutModelInvocationLoggingConfigurationRequest>
        Model::PutModelInvocationLoggingConfigurationOutcomeCallable PutModelInvocationLoggingConfigurationCallable(const PutModelInvocationLoggingConfigurationRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::PutModelInvocationLoggingConfiguration, request);
        }

        /**
         * An Async wrapper for PutModelInvocationLoggingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutModelInvocationLoggingConfigurationRequestT = Model::PutModelInvocationLoggingConfigurationRequest>
        void PutModelInvocationLoggingConfigurationAsync(const PutModelInvocationLoggingConfigurationRequestT& request, const PutModelInvocationLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::PutModelInvocationLoggingConfiguration, request, handler, context);
        }

        /**
         * <p>Put usecase for model access.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/PutUseCaseForModelAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::PutUseCaseForModelAccessOutcome PutUseCaseForModelAccess(const Model::PutUseCaseForModelAccessRequest& request) const;

        /**
         * A Callable wrapper for PutUseCaseForModelAccess that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutUseCaseForModelAccessRequestT = Model::PutUseCaseForModelAccessRequest>
        Model::PutUseCaseForModelAccessOutcomeCallable PutUseCaseForModelAccessCallable(const PutUseCaseForModelAccessRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::PutUseCaseForModelAccess, request);
        }

        /**
         * An Async wrapper for PutUseCaseForModelAccess that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutUseCaseForModelAccessRequestT = Model::PutUseCaseForModelAccessRequest>
        void PutUseCaseForModelAccessAsync(const PutUseCaseForModelAccessRequestT& request, const PutUseCaseForModelAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::PutUseCaseForModelAccess, request, handler, context);
        }

        /**
         * <p>Registers an existing Amazon SageMaker endpoint with Amazon Bedrock
         * Marketplace, allowing it to be used with Amazon Bedrock APIs.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/RegisterMarketplaceModelEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterMarketplaceModelEndpointOutcome RegisterMarketplaceModelEndpoint(const Model::RegisterMarketplaceModelEndpointRequest& request) const;

        /**
         * A Callable wrapper for RegisterMarketplaceModelEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RegisterMarketplaceModelEndpointRequestT = Model::RegisterMarketplaceModelEndpointRequest>
        Model::RegisterMarketplaceModelEndpointOutcomeCallable RegisterMarketplaceModelEndpointCallable(const RegisterMarketplaceModelEndpointRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::RegisterMarketplaceModelEndpoint, request);
        }

        /**
         * An Async wrapper for RegisterMarketplaceModelEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RegisterMarketplaceModelEndpointRequestT = Model::RegisterMarketplaceModelEndpointRequest>
        void RegisterMarketplaceModelEndpointAsync(const RegisterMarketplaceModelEndpointRequestT& request, const RegisterMarketplaceModelEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::RegisterMarketplaceModelEndpoint, request, handler, context);
        }

        /**
         * <p>Starts a new build workflow for an Automated Reasoning policy. This initiates
         * the process of analyzing source documents and generating policy rules,
         * variables, and types.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/StartAutomatedReasoningPolicyBuildWorkflow">AWS
         * API Reference</a></p>
         */
        virtual Model::StartAutomatedReasoningPolicyBuildWorkflowOutcome StartAutomatedReasoningPolicyBuildWorkflow(const Model::StartAutomatedReasoningPolicyBuildWorkflowRequest& request) const;

        /**
         * A Callable wrapper for StartAutomatedReasoningPolicyBuildWorkflow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartAutomatedReasoningPolicyBuildWorkflowRequestT = Model::StartAutomatedReasoningPolicyBuildWorkflowRequest>
        Model::StartAutomatedReasoningPolicyBuildWorkflowOutcomeCallable StartAutomatedReasoningPolicyBuildWorkflowCallable(const StartAutomatedReasoningPolicyBuildWorkflowRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::StartAutomatedReasoningPolicyBuildWorkflow, request);
        }

        /**
         * An Async wrapper for StartAutomatedReasoningPolicyBuildWorkflow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartAutomatedReasoningPolicyBuildWorkflowRequestT = Model::StartAutomatedReasoningPolicyBuildWorkflowRequest>
        void StartAutomatedReasoningPolicyBuildWorkflowAsync(const StartAutomatedReasoningPolicyBuildWorkflowRequestT& request, const StartAutomatedReasoningPolicyBuildWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::StartAutomatedReasoningPolicyBuildWorkflow, request, handler, context);
        }

        /**
         * <p>Initiates a test workflow to validate Automated Reasoning policy tests. The
         * workflow executes the specified tests against the policy and generates
         * validation results.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/StartAutomatedReasoningPolicyTestWorkflow">AWS
         * API Reference</a></p>
         */
        virtual Model::StartAutomatedReasoningPolicyTestWorkflowOutcome StartAutomatedReasoningPolicyTestWorkflow(const Model::StartAutomatedReasoningPolicyTestWorkflowRequest& request) const;

        /**
         * A Callable wrapper for StartAutomatedReasoningPolicyTestWorkflow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartAutomatedReasoningPolicyTestWorkflowRequestT = Model::StartAutomatedReasoningPolicyTestWorkflowRequest>
        Model::StartAutomatedReasoningPolicyTestWorkflowOutcomeCallable StartAutomatedReasoningPolicyTestWorkflowCallable(const StartAutomatedReasoningPolicyTestWorkflowRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::StartAutomatedReasoningPolicyTestWorkflow, request);
        }

        /**
         * An Async wrapper for StartAutomatedReasoningPolicyTestWorkflow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartAutomatedReasoningPolicyTestWorkflowRequestT = Model::StartAutomatedReasoningPolicyTestWorkflowRequest>
        void StartAutomatedReasoningPolicyTestWorkflowAsync(const StartAutomatedReasoningPolicyTestWorkflowRequestT& request, const StartAutomatedReasoningPolicyTestWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::StartAutomatedReasoningPolicyTestWorkflow, request, handler, context);
        }

        /**
         * <p>Stops an evaluation job that is current being created or
         * running.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/StopEvaluationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopEvaluationJobOutcome StopEvaluationJob(const Model::StopEvaluationJobRequest& request) const;

        /**
         * A Callable wrapper for StopEvaluationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopEvaluationJobRequestT = Model::StopEvaluationJobRequest>
        Model::StopEvaluationJobOutcomeCallable StopEvaluationJobCallable(const StopEvaluationJobRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::StopEvaluationJob, request);
        }

        /**
         * An Async wrapper for StopEvaluationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopEvaluationJobRequestT = Model::StopEvaluationJobRequest>
        void StopEvaluationJobAsync(const StopEvaluationJobRequestT& request, const StopEvaluationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::StopEvaluationJob, request, handler, context);
        }

        /**
         * <p>Stops an active model customization job. For more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/custom-models.html">Custom
         * models</a> in the <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/what-is-service.html">Amazon
         * Bedrock User Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/StopModelCustomizationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopModelCustomizationJobOutcome StopModelCustomizationJob(const Model::StopModelCustomizationJobRequest& request) const;

        /**
         * A Callable wrapper for StopModelCustomizationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopModelCustomizationJobRequestT = Model::StopModelCustomizationJobRequest>
        Model::StopModelCustomizationJobOutcomeCallable StopModelCustomizationJobCallable(const StopModelCustomizationJobRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::StopModelCustomizationJob, request);
        }

        /**
         * An Async wrapper for StopModelCustomizationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopModelCustomizationJobRequestT = Model::StopModelCustomizationJobRequest>
        void StopModelCustomizationJobAsync(const StopModelCustomizationJobRequestT& request, const StopModelCustomizationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::StopModelCustomizationJob, request, handler, context);
        }

        /**
         * <p>Stops a batch inference job. You're only charged for tokens that were already
         * processed. For more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/batch-inference-stop.html">Stop
         * a batch inference job</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/StopModelInvocationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopModelInvocationJobOutcome StopModelInvocationJob(const Model::StopModelInvocationJobRequest& request) const;

        /**
         * A Callable wrapper for StopModelInvocationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopModelInvocationJobRequestT = Model::StopModelInvocationJobRequest>
        Model::StopModelInvocationJobOutcomeCallable StopModelInvocationJobCallable(const StopModelInvocationJobRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::StopModelInvocationJob, request);
        }

        /**
         * An Async wrapper for StopModelInvocationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopModelInvocationJobRequestT = Model::StopModelInvocationJobRequest>
        void StopModelInvocationJobAsync(const StopModelInvocationJobRequestT& request, const StopModelInvocationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::StopModelInvocationJob, request, handler, context);
        }

        /**
         * <p>Associate tags with a resource. For more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/what-is-service.html">Tagging
         * resources</a> in the <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/what-is-service.html">Amazon
         * Bedrock User Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::TagResource, request, handler, context);
        }

        /**
         * <p>Remove one or more tags from a resource. For more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/what-is-service.html">Tagging
         * resources</a> in the <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/what-is-service.html">Amazon
         * Bedrock User Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates an existing Automated Reasoning policy with new rules, variables, or
         * configuration. This creates a new version of the policy while preserving the
         * previous version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/UpdateAutomatedReasoningPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAutomatedReasoningPolicyOutcome UpdateAutomatedReasoningPolicy(const Model::UpdateAutomatedReasoningPolicyRequest& request) const;

        /**
         * A Callable wrapper for UpdateAutomatedReasoningPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAutomatedReasoningPolicyRequestT = Model::UpdateAutomatedReasoningPolicyRequest>
        Model::UpdateAutomatedReasoningPolicyOutcomeCallable UpdateAutomatedReasoningPolicyCallable(const UpdateAutomatedReasoningPolicyRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::UpdateAutomatedReasoningPolicy, request);
        }

        /**
         * An Async wrapper for UpdateAutomatedReasoningPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAutomatedReasoningPolicyRequestT = Model::UpdateAutomatedReasoningPolicyRequest>
        void UpdateAutomatedReasoningPolicyAsync(const UpdateAutomatedReasoningPolicyRequestT& request, const UpdateAutomatedReasoningPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::UpdateAutomatedReasoningPolicy, request, handler, context);
        }

        /**
         * <p>Updates the annotations for an Automated Reasoning policy build workflow.
         * This allows you to modify extracted rules, variables, and types before
         * finalizing the policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/UpdateAutomatedReasoningPolicyAnnotations">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAutomatedReasoningPolicyAnnotationsOutcome UpdateAutomatedReasoningPolicyAnnotations(const Model::UpdateAutomatedReasoningPolicyAnnotationsRequest& request) const;

        /**
         * A Callable wrapper for UpdateAutomatedReasoningPolicyAnnotations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAutomatedReasoningPolicyAnnotationsRequestT = Model::UpdateAutomatedReasoningPolicyAnnotationsRequest>
        Model::UpdateAutomatedReasoningPolicyAnnotationsOutcomeCallable UpdateAutomatedReasoningPolicyAnnotationsCallable(const UpdateAutomatedReasoningPolicyAnnotationsRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::UpdateAutomatedReasoningPolicyAnnotations, request);
        }

        /**
         * An Async wrapper for UpdateAutomatedReasoningPolicyAnnotations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAutomatedReasoningPolicyAnnotationsRequestT = Model::UpdateAutomatedReasoningPolicyAnnotationsRequest>
        void UpdateAutomatedReasoningPolicyAnnotationsAsync(const UpdateAutomatedReasoningPolicyAnnotationsRequestT& request, const UpdateAutomatedReasoningPolicyAnnotationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::UpdateAutomatedReasoningPolicyAnnotations, request, handler, context);
        }

        /**
         * <p>Updates an existing Automated Reasoning policy test. You can modify the
         * content, query, expected result, and confidence threshold.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/UpdateAutomatedReasoningPolicyTestCase">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAutomatedReasoningPolicyTestCaseOutcome UpdateAutomatedReasoningPolicyTestCase(const Model::UpdateAutomatedReasoningPolicyTestCaseRequest& request) const;

        /**
         * A Callable wrapper for UpdateAutomatedReasoningPolicyTestCase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAutomatedReasoningPolicyTestCaseRequestT = Model::UpdateAutomatedReasoningPolicyTestCaseRequest>
        Model::UpdateAutomatedReasoningPolicyTestCaseOutcomeCallable UpdateAutomatedReasoningPolicyTestCaseCallable(const UpdateAutomatedReasoningPolicyTestCaseRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::UpdateAutomatedReasoningPolicyTestCase, request);
        }

        /**
         * An Async wrapper for UpdateAutomatedReasoningPolicyTestCase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAutomatedReasoningPolicyTestCaseRequestT = Model::UpdateAutomatedReasoningPolicyTestCaseRequest>
        void UpdateAutomatedReasoningPolicyTestCaseAsync(const UpdateAutomatedReasoningPolicyTestCaseRequestT& request, const UpdateAutomatedReasoningPolicyTestCaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::UpdateAutomatedReasoningPolicyTestCase, request, handler, context);
        }

        /**
         * <p>Updates a guardrail with the values you specify.</p> <ul> <li> <p>Specify a
         * <code>name</code> and optional <code>description</code>.</p> </li> <li>
         * <p>Specify messages for when the guardrail successfully blocks a prompt or a
         * model response in the <code>blockedInputMessaging</code> and
         * <code>blockedOutputsMessaging</code> fields.</p> </li> <li> <p>Specify topics
         * for the guardrail to deny in the <code>topicPolicyConfig</code> object. Each <a
         * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_GuardrailTopicConfig.html">GuardrailTopicConfig</a>
         * object in the <code>topicsConfig</code> list pertains to one topic.</p> <ul>
         * <li> <p>Give a <code>name</code> and <code>description</code> so that the
         * guardrail can properly identify the topic.</p> </li> <li> <p>Specify
         * <code>DENY</code> in the <code>type</code> field.</p> </li> <li> <p>(Optional)
         * Provide up to five prompts that you would categorize as belonging to the topic
         * in the <code>examples</code> list.</p> </li> </ul> </li> <li> <p>Specify filter
         * strengths for the harmful categories defined in Amazon Bedrock in the
         * <code>contentPolicyConfig</code> object. Each <a
         * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_GuardrailContentFilterConfig.html">GuardrailContentFilterConfig</a>
         * object in the <code>filtersConfig</code> list pertains to a harmful category.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/guardrails-content-filters">Content
         * filters</a>. For more information about the fields in a content filter, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_GuardrailContentFilterConfig.html">GuardrailContentFilterConfig</a>.</p>
         * <ul> <li> <p>Specify the category in the <code>type</code> field.</p> </li> <li>
         * <p>Specify the strength of the filter for prompts in the
         * <code>inputStrength</code> field and for model responses in the
         * <code>strength</code> field of the <a
         * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_GuardrailContentFilterConfig.html">GuardrailContentFilterConfig</a>.</p>
         * </li> </ul> </li> <li> <p>(Optional) For security, include the ARN of a KMS key
         * in the <code>kmsKeyId</code> field.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/UpdateGuardrail">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGuardrailOutcome UpdateGuardrail(const Model::UpdateGuardrailRequest& request) const;

        /**
         * A Callable wrapper for UpdateGuardrail that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateGuardrailRequestT = Model::UpdateGuardrailRequest>
        Model::UpdateGuardrailOutcomeCallable UpdateGuardrailCallable(const UpdateGuardrailRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::UpdateGuardrail, request);
        }

        /**
         * An Async wrapper for UpdateGuardrail that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateGuardrailRequestT = Model::UpdateGuardrailRequest>
        void UpdateGuardrailAsync(const UpdateGuardrailRequestT& request, const UpdateGuardrailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::UpdateGuardrail, request, handler, context);
        }

        /**
         * <p>Updates the configuration of an existing endpoint for a model from Amazon
         * Bedrock Marketplace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/UpdateMarketplaceModelEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMarketplaceModelEndpointOutcome UpdateMarketplaceModelEndpoint(const Model::UpdateMarketplaceModelEndpointRequest& request) const;

        /**
         * A Callable wrapper for UpdateMarketplaceModelEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateMarketplaceModelEndpointRequestT = Model::UpdateMarketplaceModelEndpointRequest>
        Model::UpdateMarketplaceModelEndpointOutcomeCallable UpdateMarketplaceModelEndpointCallable(const UpdateMarketplaceModelEndpointRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::UpdateMarketplaceModelEndpoint, request);
        }

        /**
         * An Async wrapper for UpdateMarketplaceModelEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateMarketplaceModelEndpointRequestT = Model::UpdateMarketplaceModelEndpointRequest>
        void UpdateMarketplaceModelEndpointAsync(const UpdateMarketplaceModelEndpointRequestT& request, const UpdateMarketplaceModelEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::UpdateMarketplaceModelEndpoint, request, handler, context);
        }

        /**
         * <p>Updates the name or associated model for a Provisioned Throughput. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/prov-throughput.html">Provisioned
         * Throughput</a> in the <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/what-is-service.html">Amazon
         * Bedrock User Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/UpdateProvisionedModelThroughput">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateProvisionedModelThroughputOutcome UpdateProvisionedModelThroughput(const Model::UpdateProvisionedModelThroughputRequest& request) const;

        /**
         * A Callable wrapper for UpdateProvisionedModelThroughput that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateProvisionedModelThroughputRequestT = Model::UpdateProvisionedModelThroughputRequest>
        Model::UpdateProvisionedModelThroughputOutcomeCallable UpdateProvisionedModelThroughputCallable(const UpdateProvisionedModelThroughputRequestT& request) const
        {
            return SubmitCallable(&BedrockClient::UpdateProvisionedModelThroughput, request);
        }

        /**
         * An Async wrapper for UpdateProvisionedModelThroughput that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateProvisionedModelThroughputRequestT = Model::UpdateProvisionedModelThroughputRequest>
        void UpdateProvisionedModelThroughputAsync(const UpdateProvisionedModelThroughputRequestT& request, const UpdateProvisionedModelThroughputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockClient::UpdateProvisionedModelThroughput, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<BedrockEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<BedrockClient>;
      void init(const BedrockClientConfiguration& clientConfiguration);

      BedrockClientConfiguration m_clientConfiguration;
      std::shared_ptr<BedrockEndpointProviderBase> m_endpointProvider;
  };

} // namespace Bedrock
} // namespace Aws
