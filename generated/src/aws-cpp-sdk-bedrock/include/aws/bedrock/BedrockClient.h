﻿/**
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
         * <p>API operation for creating and managing Amazon Bedrock automatic model
         * evaluation jobs and model evaluation jobs that use human workers. To learn more
         * about the requirements for creating a model evaluation job see, <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-evaluation.html">Model
         * evaluations</a>.</p><p><h3>See Also:</h3>   <a
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
         * <p>Creates a guardrail to block topics and to filter out harmful content.</p>
         * <ul> <li> <p>Specify a <code>name</code> and optional
         * <code>description</code>.</p> </li> <li> <p>Specify messages for when the
         * guardrail successfully blocks a prompt or a model response in the
         * <code>blockedInputMessaging</code> and <code>blockedOutputsMessaging</code>
         * fields.</p> </li> <li> <p>Specify topics for the guardrail to deny in the
         * <code>topicPolicyConfig</code> object. Each <a
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
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/guardrails-filters">Content
         * filters</a>. For more information about the fields in a content filter, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_GuardrailContentFilterConfig.html">GuardrailContentFilterConfig</a>.</p>
         * <ul> <li> <p>Specify the category in the <code>type</code> field.</p> </li> <li>
         * <p>Specify the strength of the filter for prompts in the
         * <code>inputStrength</code> field and for model responses in the
         * <code>strength</code> field of the <a
         * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_GuardrailContentFilterConfig.html">GuardrailContentFilterConfig</a>.</p>
         * </li> </ul> </li> <li> <p>(Optional) For security, include the ARN of a KMS key
         * in the <code>kmsKeyId</code> field.</p> </li> <li> <p>(Optional) Attach any tags
         * to the guardrail in the <code>tags</code> object. For more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/tagging">Tag
         * resources</a>.</p> </li> </ul><p><h3>See Also:</h3>   <a
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
         * models</a> in the Amazon Bedrock User Guide.</p><p><h3>See Also:</h3>   <a
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
         * <p>Creates dedicated throughput for a base or custom model with the model units
         * and for the duration that you specify. For pricing details, see <a
         * href="http://aws.amazon.com/bedrock/pricing/">Amazon Bedrock Pricing</a>. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/prov-throughput.html">Provisioned
         * Throughput</a> in the Amazon Bedrock User Guide.</p><p><h3>See Also:</h3>   <a
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
         * <p>Deletes a custom model that you created earlier. For more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/custom-models.html">Custom
         * models</a> in the Amazon Bedrock User Guide.</p><p><h3>See Also:</h3>   <a
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
         * <p>Deletes a Provisioned Throughput. You can't delete a Provisioned Throughput
         * before the commitment term is over. For more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/prov-throughput.html">Provisioned
         * Throughput</a> in the Amazon Bedrock User Guide.</p><p><h3>See Also:</h3>   <a
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
         * <p>Get the properties associated with a Amazon Bedrock custom model that you
         * have created.For more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/custom-models.html">Custom
         * models</a> in the Amazon Bedrock User Guide.</p><p><h3>See Also:</h3>   <a
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
         * <p>Retrieves the properties associated with a model evaluation job, including
         * the status of the job. For more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/latest/userguide/model-evaluation.html">Model
         * evaluations</a>.</p><p><h3>See Also:</h3>   <a
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
         * <p>Retrieves the properties associated with a model-customization job, including
         * the status of the job. For more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/custom-models.html">Custom
         * models</a> in the Amazon Bedrock User Guide.</p><p><h3>See Also:</h3>   <a
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
         * <p>Returns details for a Provisioned Throughput. For more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/prov-throughput.html">Provisioned
         * Throughput</a> in the Amazon Bedrock User Guide.</p><p><h3>See Also:</h3>   <a
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
         * <p>Returns a list of the custom models that you have created with the
         * <code>CreateModelCustomizationJob</code> operation.</p> <p>For more information,
         * see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/custom-models.html">Custom
         * models</a> in the Amazon Bedrock User Guide.</p><p><h3>See Also:</h3>   <a
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
         * <p>Lists model evaluation jobs.</p><p><h3>See Also:</h3>   <a
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
         * <p>Lists Amazon Bedrock foundation models that you can use. You can filter the
         * results with the request parameters. For more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/foundation-models.html">Foundation
         * models</a> in the Amazon Bedrock User Guide.</p><p><h3>See Also:</h3>   <a
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
         * <p>Returns a list of model customization jobs that you have submitted. You can
         * filter the jobs to return based on one or more criteria.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/custom-models.html">Custom
         * models</a> in the Amazon Bedrock User Guide.</p><p><h3>See Also:</h3>   <a
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
         * <p>Lists the Provisioned Throughputs in the account. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/prov-throughput.html">Provisioned
         * Throughput</a> in the Amazon Bedrock User Guide.</p><p><h3>See Also:</h3>   <a
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
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/tagging.html">Tagging
         * resources</a> in the Amazon Bedrock User Guide.</p><p><h3>See Also:</h3>   <a
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
         * <p>Stops an in progress model evaluation job.</p><p><h3>See Also:</h3>   <a
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
         * models</a> in the Amazon Bedrock User Guide.</p><p><h3>See Also:</h3>   <a
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
         * <p>Associate tags with a resource. For more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/tagging.html">Tagging
         * resources</a> in the Amazon Bedrock User Guide.</p><p><h3>See Also:</h3>   <a
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
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/tagging.html">Tagging
         * resources</a> in the Amazon Bedrock User Guide.</p><p><h3>See Also:</h3>   <a
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
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/guardrails-filters">Content
         * filters</a>. For more information about the fields in a content filter, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_GuardrailContentFilterConfig.html">GuardrailContentFilterConfig</a>.</p>
         * <ul> <li> <p>Specify the category in the <code>type</code> field.</p> </li> <li>
         * <p>Specify the strength of the filter for prompts in the
         * <code>inputStrength</code> field and for model responses in the
         * <code>strength</code> field of the <a
         * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_GuardrailContentFilterConfig.html">GuardrailContentFilterConfig</a>.</p>
         * </li> </ul> </li> <li> <p>(Optional) For security, include the ARN of a KMS key
         * in the <code>kmsKeyId</code> field.</p> </li> <li> <p>(Optional) Attach any tags
         * to the guardrail in the <code>tags</code> object. For more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/tagging">Tag
         * resources</a>.</p> </li> </ul><p><h3>See Also:</h3>   <a
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
         * <p>Updates the name or associated model for a Provisioned Throughput. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/prov-throughput.html">Provisioned
         * Throughput</a> in the Amazon Bedrock User Guide.</p><p><h3>See Also:</h3>   <a
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
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<BedrockEndpointProviderBase> m_endpointProvider;
  };

} // namespace Bedrock
} // namespace Aws
