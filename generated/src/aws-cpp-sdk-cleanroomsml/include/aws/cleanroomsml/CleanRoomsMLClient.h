/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/cleanroomsml/CleanRoomsMLServiceClientModel.h>

namespace Aws
{
namespace CleanRoomsML
{
  /**
   * <p>Welcome to the <i>Amazon Web Services Clean Rooms ML API Reference</i>.</p>
   * <p>Amazon Web Services Clean Rooms ML provides a privacy-enhancing method for
   * two parties to identify similar users in their data without the need to share
   * their data with each other. The first party brings the training data to Clean
   * Rooms so that they can create and configure an audience model (lookalike model)
   * and associate it with a collaboration. The second party then brings their seed
   * data to Clean Rooms and generates an audience (lookalike segment) that resembles
   * the training data.</p> <p>To learn more about Amazon Web Services Clean Rooms ML
   * concepts, procedures, and best practices, see the <a
   * href="https://docs.aws.amazon.com/clean-rooms/latest/userguide/machine-learning.html">Clean
   * Rooms User Guide</a>.</p> <p>To learn more about SQL commands, functions, and
   * conditions supported in Clean Rooms, see the <a
   * href="https://docs.aws.amazon.com/clean-rooms/latest/sql-reference/sql-reference.html">Clean
   * Rooms SQL Reference</a>.</p> <p/>
   */
  class AWS_CLEANROOMSML_API CleanRoomsMLClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<CleanRoomsMLClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef CleanRoomsMLClientConfiguration ClientConfigurationType;
      typedef CleanRoomsMLEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CleanRoomsMLClient(const Aws::CleanRoomsML::CleanRoomsMLClientConfiguration& clientConfiguration = Aws::CleanRoomsML::CleanRoomsMLClientConfiguration(),
                           std::shared_ptr<CleanRoomsMLEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CleanRoomsMLClient(const Aws::Auth::AWSCredentials& credentials,
                           std::shared_ptr<CleanRoomsMLEndpointProviderBase> endpointProvider = nullptr,
                           const Aws::CleanRoomsML::CleanRoomsMLClientConfiguration& clientConfiguration = Aws::CleanRoomsML::CleanRoomsMLClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CleanRoomsMLClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<CleanRoomsMLEndpointProviderBase> endpointProvider = nullptr,
                           const Aws::CleanRoomsML::CleanRoomsMLClientConfiguration& clientConfiguration = Aws::CleanRoomsML::CleanRoomsMLClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CleanRoomsMLClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CleanRoomsMLClient(const Aws::Auth::AWSCredentials& credentials,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CleanRoomsMLClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~CleanRoomsMLClient();

        /**
         * <p>Submits a request to cancel the trained model job.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/CancelTrainedModel">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelTrainedModelOutcome CancelTrainedModel(const Model::CancelTrainedModelRequest& request) const;

        /**
         * A Callable wrapper for CancelTrainedModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelTrainedModelRequestT = Model::CancelTrainedModelRequest>
        Model::CancelTrainedModelOutcomeCallable CancelTrainedModelCallable(const CancelTrainedModelRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsMLClient::CancelTrainedModel, request);
        }

        /**
         * An Async wrapper for CancelTrainedModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelTrainedModelRequestT = Model::CancelTrainedModelRequest>
        void CancelTrainedModelAsync(const CancelTrainedModelRequestT& request, const CancelTrainedModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsMLClient::CancelTrainedModel, request, handler, context);
        }

        /**
         * <p>Submits a request to cancel a trained model inference job.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/CancelTrainedModelInferenceJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelTrainedModelInferenceJobOutcome CancelTrainedModelInferenceJob(const Model::CancelTrainedModelInferenceJobRequest& request) const;

        /**
         * A Callable wrapper for CancelTrainedModelInferenceJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelTrainedModelInferenceJobRequestT = Model::CancelTrainedModelInferenceJobRequest>
        Model::CancelTrainedModelInferenceJobOutcomeCallable CancelTrainedModelInferenceJobCallable(const CancelTrainedModelInferenceJobRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsMLClient::CancelTrainedModelInferenceJob, request);
        }

        /**
         * An Async wrapper for CancelTrainedModelInferenceJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelTrainedModelInferenceJobRequestT = Model::CancelTrainedModelInferenceJobRequest>
        void CancelTrainedModelInferenceJobAsync(const CancelTrainedModelInferenceJobRequestT& request, const CancelTrainedModelInferenceJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsMLClient::CancelTrainedModelInferenceJob, request, handler, context);
        }

        /**
         * <p>Defines the information necessary to create an audience model. An audience
         * model is a machine learning model that Clean Rooms ML trains to measure
         * similarity between users. Clean Rooms ML manages training and storing the
         * audience model. The audience model can be used in multiple calls to the
         * <a>StartAudienceGenerationJob</a> API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/CreateAudienceModel">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAudienceModelOutcome CreateAudienceModel(const Model::CreateAudienceModelRequest& request) const;

        /**
         * A Callable wrapper for CreateAudienceModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAudienceModelRequestT = Model::CreateAudienceModelRequest>
        Model::CreateAudienceModelOutcomeCallable CreateAudienceModelCallable(const CreateAudienceModelRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsMLClient::CreateAudienceModel, request);
        }

        /**
         * An Async wrapper for CreateAudienceModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAudienceModelRequestT = Model::CreateAudienceModelRequest>
        void CreateAudienceModelAsync(const CreateAudienceModelRequestT& request, const CreateAudienceModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsMLClient::CreateAudienceModel, request, handler, context);
        }

        /**
         * <p>Defines the information necessary to create a configured audience
         * model.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/CreateConfiguredAudienceModel">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConfiguredAudienceModelOutcome CreateConfiguredAudienceModel(const Model::CreateConfiguredAudienceModelRequest& request) const;

        /**
         * A Callable wrapper for CreateConfiguredAudienceModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateConfiguredAudienceModelRequestT = Model::CreateConfiguredAudienceModelRequest>
        Model::CreateConfiguredAudienceModelOutcomeCallable CreateConfiguredAudienceModelCallable(const CreateConfiguredAudienceModelRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsMLClient::CreateConfiguredAudienceModel, request);
        }

        /**
         * An Async wrapper for CreateConfiguredAudienceModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateConfiguredAudienceModelRequestT = Model::CreateConfiguredAudienceModelRequest>
        void CreateConfiguredAudienceModelAsync(const CreateConfiguredAudienceModelRequestT& request, const CreateConfiguredAudienceModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsMLClient::CreateConfiguredAudienceModel, request, handler, context);
        }

        /**
         * <p>Creates a configured model algorithm using a container image stored in an ECR
         * repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/CreateConfiguredModelAlgorithm">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConfiguredModelAlgorithmOutcome CreateConfiguredModelAlgorithm(const Model::CreateConfiguredModelAlgorithmRequest& request) const;

        /**
         * A Callable wrapper for CreateConfiguredModelAlgorithm that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateConfiguredModelAlgorithmRequestT = Model::CreateConfiguredModelAlgorithmRequest>
        Model::CreateConfiguredModelAlgorithmOutcomeCallable CreateConfiguredModelAlgorithmCallable(const CreateConfiguredModelAlgorithmRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsMLClient::CreateConfiguredModelAlgorithm, request);
        }

        /**
         * An Async wrapper for CreateConfiguredModelAlgorithm that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateConfiguredModelAlgorithmRequestT = Model::CreateConfiguredModelAlgorithmRequest>
        void CreateConfiguredModelAlgorithmAsync(const CreateConfiguredModelAlgorithmRequestT& request, const CreateConfiguredModelAlgorithmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsMLClient::CreateConfiguredModelAlgorithm, request, handler, context);
        }

        /**
         * <p>Associates a configured model algorithm to a collaboration for use by any
         * member of the collaboration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/CreateConfiguredModelAlgorithmAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConfiguredModelAlgorithmAssociationOutcome CreateConfiguredModelAlgorithmAssociation(const Model::CreateConfiguredModelAlgorithmAssociationRequest& request) const;

        /**
         * A Callable wrapper for CreateConfiguredModelAlgorithmAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateConfiguredModelAlgorithmAssociationRequestT = Model::CreateConfiguredModelAlgorithmAssociationRequest>
        Model::CreateConfiguredModelAlgorithmAssociationOutcomeCallable CreateConfiguredModelAlgorithmAssociationCallable(const CreateConfiguredModelAlgorithmAssociationRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsMLClient::CreateConfiguredModelAlgorithmAssociation, request);
        }

        /**
         * An Async wrapper for CreateConfiguredModelAlgorithmAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateConfiguredModelAlgorithmAssociationRequestT = Model::CreateConfiguredModelAlgorithmAssociationRequest>
        void CreateConfiguredModelAlgorithmAssociationAsync(const CreateConfiguredModelAlgorithmAssociationRequestT& request, const CreateConfiguredModelAlgorithmAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsMLClient::CreateConfiguredModelAlgorithmAssociation, request, handler, context);
        }

        /**
         * <p>Provides the information to create an ML input channel. An ML input channel
         * is the result of a query that can be used for ML modeling.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/CreateMLInputChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMLInputChannelOutcome CreateMLInputChannel(const Model::CreateMLInputChannelRequest& request) const;

        /**
         * A Callable wrapper for CreateMLInputChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateMLInputChannelRequestT = Model::CreateMLInputChannelRequest>
        Model::CreateMLInputChannelOutcomeCallable CreateMLInputChannelCallable(const CreateMLInputChannelRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsMLClient::CreateMLInputChannel, request);
        }

        /**
         * An Async wrapper for CreateMLInputChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateMLInputChannelRequestT = Model::CreateMLInputChannelRequest>
        void CreateMLInputChannelAsync(const CreateMLInputChannelRequestT& request, const CreateMLInputChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsMLClient::CreateMLInputChannel, request, handler, context);
        }

        /**
         * <p>Creates a trained model from an associated configured model algorithm using
         * data from any member of the collaboration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/CreateTrainedModel">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTrainedModelOutcome CreateTrainedModel(const Model::CreateTrainedModelRequest& request) const;

        /**
         * A Callable wrapper for CreateTrainedModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateTrainedModelRequestT = Model::CreateTrainedModelRequest>
        Model::CreateTrainedModelOutcomeCallable CreateTrainedModelCallable(const CreateTrainedModelRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsMLClient::CreateTrainedModel, request);
        }

        /**
         * An Async wrapper for CreateTrainedModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateTrainedModelRequestT = Model::CreateTrainedModelRequest>
        void CreateTrainedModelAsync(const CreateTrainedModelRequestT& request, const CreateTrainedModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsMLClient::CreateTrainedModel, request, handler, context);
        }

        /**
         * <p>Defines the information necessary to create a training dataset. In Clean
         * Rooms ML, the <code>TrainingDataset</code> is metadata that points to a Glue
         * table, which is read only during <code>AudienceModel</code>
         * creation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/CreateTrainingDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTrainingDatasetOutcome CreateTrainingDataset(const Model::CreateTrainingDatasetRequest& request) const;

        /**
         * A Callable wrapper for CreateTrainingDataset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateTrainingDatasetRequestT = Model::CreateTrainingDatasetRequest>
        Model::CreateTrainingDatasetOutcomeCallable CreateTrainingDatasetCallable(const CreateTrainingDatasetRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsMLClient::CreateTrainingDataset, request);
        }

        /**
         * An Async wrapper for CreateTrainingDataset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateTrainingDatasetRequestT = Model::CreateTrainingDatasetRequest>
        void CreateTrainingDatasetAsync(const CreateTrainingDatasetRequestT& request, const CreateTrainingDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsMLClient::CreateTrainingDataset, request, handler, context);
        }

        /**
         * <p>Deletes the specified audience generation job, and removes all data
         * associated with the job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/DeleteAudienceGenerationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAudienceGenerationJobOutcome DeleteAudienceGenerationJob(const Model::DeleteAudienceGenerationJobRequest& request) const;

        /**
         * A Callable wrapper for DeleteAudienceGenerationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAudienceGenerationJobRequestT = Model::DeleteAudienceGenerationJobRequest>
        Model::DeleteAudienceGenerationJobOutcomeCallable DeleteAudienceGenerationJobCallable(const DeleteAudienceGenerationJobRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsMLClient::DeleteAudienceGenerationJob, request);
        }

        /**
         * An Async wrapper for DeleteAudienceGenerationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAudienceGenerationJobRequestT = Model::DeleteAudienceGenerationJobRequest>
        void DeleteAudienceGenerationJobAsync(const DeleteAudienceGenerationJobRequestT& request, const DeleteAudienceGenerationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsMLClient::DeleteAudienceGenerationJob, request, handler, context);
        }

        /**
         * <p>Specifies an audience model that you want to delete. You can't delete an
         * audience model if there are any configured audience models that depend on the
         * audience model.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/DeleteAudienceModel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAudienceModelOutcome DeleteAudienceModel(const Model::DeleteAudienceModelRequest& request) const;

        /**
         * A Callable wrapper for DeleteAudienceModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAudienceModelRequestT = Model::DeleteAudienceModelRequest>
        Model::DeleteAudienceModelOutcomeCallable DeleteAudienceModelCallable(const DeleteAudienceModelRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsMLClient::DeleteAudienceModel, request);
        }

        /**
         * An Async wrapper for DeleteAudienceModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAudienceModelRequestT = Model::DeleteAudienceModelRequest>
        void DeleteAudienceModelAsync(const DeleteAudienceModelRequestT& request, const DeleteAudienceModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsMLClient::DeleteAudienceModel, request, handler, context);
        }

        /**
         * <p>Deletes the specified configured audience model. You can't delete a
         * configured audience model if there are any lookalike models that use the
         * configured audience model. If you delete a configured audience model, it will be
         * removed from any collaborations that it is associated to.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/DeleteConfiguredAudienceModel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConfiguredAudienceModelOutcome DeleteConfiguredAudienceModel(const Model::DeleteConfiguredAudienceModelRequest& request) const;

        /**
         * A Callable wrapper for DeleteConfiguredAudienceModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteConfiguredAudienceModelRequestT = Model::DeleteConfiguredAudienceModelRequest>
        Model::DeleteConfiguredAudienceModelOutcomeCallable DeleteConfiguredAudienceModelCallable(const DeleteConfiguredAudienceModelRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsMLClient::DeleteConfiguredAudienceModel, request);
        }

        /**
         * An Async wrapper for DeleteConfiguredAudienceModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteConfiguredAudienceModelRequestT = Model::DeleteConfiguredAudienceModelRequest>
        void DeleteConfiguredAudienceModelAsync(const DeleteConfiguredAudienceModelRequestT& request, const DeleteConfiguredAudienceModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsMLClient::DeleteConfiguredAudienceModel, request, handler, context);
        }

        /**
         * <p>Deletes the specified configured audience model policy.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/DeleteConfiguredAudienceModelPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConfiguredAudienceModelPolicyOutcome DeleteConfiguredAudienceModelPolicy(const Model::DeleteConfiguredAudienceModelPolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteConfiguredAudienceModelPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteConfiguredAudienceModelPolicyRequestT = Model::DeleteConfiguredAudienceModelPolicyRequest>
        Model::DeleteConfiguredAudienceModelPolicyOutcomeCallable DeleteConfiguredAudienceModelPolicyCallable(const DeleteConfiguredAudienceModelPolicyRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsMLClient::DeleteConfiguredAudienceModelPolicy, request);
        }

        /**
         * An Async wrapper for DeleteConfiguredAudienceModelPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteConfiguredAudienceModelPolicyRequestT = Model::DeleteConfiguredAudienceModelPolicyRequest>
        void DeleteConfiguredAudienceModelPolicyAsync(const DeleteConfiguredAudienceModelPolicyRequestT& request, const DeleteConfiguredAudienceModelPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsMLClient::DeleteConfiguredAudienceModelPolicy, request, handler, context);
        }

        /**
         * <p>Deletes a configured model algorithm.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/DeleteConfiguredModelAlgorithm">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConfiguredModelAlgorithmOutcome DeleteConfiguredModelAlgorithm(const Model::DeleteConfiguredModelAlgorithmRequest& request) const;

        /**
         * A Callable wrapper for DeleteConfiguredModelAlgorithm that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteConfiguredModelAlgorithmRequestT = Model::DeleteConfiguredModelAlgorithmRequest>
        Model::DeleteConfiguredModelAlgorithmOutcomeCallable DeleteConfiguredModelAlgorithmCallable(const DeleteConfiguredModelAlgorithmRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsMLClient::DeleteConfiguredModelAlgorithm, request);
        }

        /**
         * An Async wrapper for DeleteConfiguredModelAlgorithm that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteConfiguredModelAlgorithmRequestT = Model::DeleteConfiguredModelAlgorithmRequest>
        void DeleteConfiguredModelAlgorithmAsync(const DeleteConfiguredModelAlgorithmRequestT& request, const DeleteConfiguredModelAlgorithmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsMLClient::DeleteConfiguredModelAlgorithm, request, handler, context);
        }

        /**
         * <p>Deletes a configured model algorithm association.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/DeleteConfiguredModelAlgorithmAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConfiguredModelAlgorithmAssociationOutcome DeleteConfiguredModelAlgorithmAssociation(const Model::DeleteConfiguredModelAlgorithmAssociationRequest& request) const;

        /**
         * A Callable wrapper for DeleteConfiguredModelAlgorithmAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteConfiguredModelAlgorithmAssociationRequestT = Model::DeleteConfiguredModelAlgorithmAssociationRequest>
        Model::DeleteConfiguredModelAlgorithmAssociationOutcomeCallable DeleteConfiguredModelAlgorithmAssociationCallable(const DeleteConfiguredModelAlgorithmAssociationRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsMLClient::DeleteConfiguredModelAlgorithmAssociation, request);
        }

        /**
         * An Async wrapper for DeleteConfiguredModelAlgorithmAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteConfiguredModelAlgorithmAssociationRequestT = Model::DeleteConfiguredModelAlgorithmAssociationRequest>
        void DeleteConfiguredModelAlgorithmAssociationAsync(const DeleteConfiguredModelAlgorithmAssociationRequestT& request, const DeleteConfiguredModelAlgorithmAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsMLClient::DeleteConfiguredModelAlgorithmAssociation, request, handler, context);
        }

        /**
         * <p>Deletes a ML modeling configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/DeleteMLConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMLConfigurationOutcome DeleteMLConfiguration(const Model::DeleteMLConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteMLConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteMLConfigurationRequestT = Model::DeleteMLConfigurationRequest>
        Model::DeleteMLConfigurationOutcomeCallable DeleteMLConfigurationCallable(const DeleteMLConfigurationRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsMLClient::DeleteMLConfiguration, request);
        }

        /**
         * An Async wrapper for DeleteMLConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteMLConfigurationRequestT = Model::DeleteMLConfigurationRequest>
        void DeleteMLConfigurationAsync(const DeleteMLConfigurationRequestT& request, const DeleteMLConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsMLClient::DeleteMLConfiguration, request, handler, context);
        }

        /**
         * <p>Provides the information necessary to delete an ML input
         * channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/DeleteMLInputChannelData">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMLInputChannelDataOutcome DeleteMLInputChannelData(const Model::DeleteMLInputChannelDataRequest& request) const;

        /**
         * A Callable wrapper for DeleteMLInputChannelData that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteMLInputChannelDataRequestT = Model::DeleteMLInputChannelDataRequest>
        Model::DeleteMLInputChannelDataOutcomeCallable DeleteMLInputChannelDataCallable(const DeleteMLInputChannelDataRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsMLClient::DeleteMLInputChannelData, request);
        }

        /**
         * An Async wrapper for DeleteMLInputChannelData that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteMLInputChannelDataRequestT = Model::DeleteMLInputChannelDataRequest>
        void DeleteMLInputChannelDataAsync(const DeleteMLInputChannelDataRequestT& request, const DeleteMLInputChannelDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsMLClient::DeleteMLInputChannelData, request, handler, context);
        }

        /**
         * <p>Deletes the model artifacts stored by the service.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/DeleteTrainedModelOutput">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTrainedModelOutputOutcome DeleteTrainedModelOutput(const Model::DeleteTrainedModelOutputRequest& request) const;

        /**
         * A Callable wrapper for DeleteTrainedModelOutput that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteTrainedModelOutputRequestT = Model::DeleteTrainedModelOutputRequest>
        Model::DeleteTrainedModelOutputOutcomeCallable DeleteTrainedModelOutputCallable(const DeleteTrainedModelOutputRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsMLClient::DeleteTrainedModelOutput, request);
        }

        /**
         * An Async wrapper for DeleteTrainedModelOutput that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTrainedModelOutputRequestT = Model::DeleteTrainedModelOutputRequest>
        void DeleteTrainedModelOutputAsync(const DeleteTrainedModelOutputRequestT& request, const DeleteTrainedModelOutputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsMLClient::DeleteTrainedModelOutput, request, handler, context);
        }

        /**
         * <p>Specifies a training dataset that you want to delete. You can't delete a
         * training dataset if there are any audience models that depend on the training
         * dataset. In Clean Rooms ML, the <code>TrainingDataset</code> is metadata that
         * points to a Glue table, which is read only during <code>AudienceModel</code>
         * creation. This action deletes the metadata.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/DeleteTrainingDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTrainingDatasetOutcome DeleteTrainingDataset(const Model::DeleteTrainingDatasetRequest& request) const;

        /**
         * A Callable wrapper for DeleteTrainingDataset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteTrainingDatasetRequestT = Model::DeleteTrainingDatasetRequest>
        Model::DeleteTrainingDatasetOutcomeCallable DeleteTrainingDatasetCallable(const DeleteTrainingDatasetRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsMLClient::DeleteTrainingDataset, request);
        }

        /**
         * An Async wrapper for DeleteTrainingDataset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTrainingDatasetRequestT = Model::DeleteTrainingDatasetRequest>
        void DeleteTrainingDatasetAsync(const DeleteTrainingDatasetRequestT& request, const DeleteTrainingDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsMLClient::DeleteTrainingDataset, request, handler, context);
        }

        /**
         * <p>Returns information about an audience generation job.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/GetAudienceGenerationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAudienceGenerationJobOutcome GetAudienceGenerationJob(const Model::GetAudienceGenerationJobRequest& request) const;

        /**
         * A Callable wrapper for GetAudienceGenerationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAudienceGenerationJobRequestT = Model::GetAudienceGenerationJobRequest>
        Model::GetAudienceGenerationJobOutcomeCallable GetAudienceGenerationJobCallable(const GetAudienceGenerationJobRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsMLClient::GetAudienceGenerationJob, request);
        }

        /**
         * An Async wrapper for GetAudienceGenerationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAudienceGenerationJobRequestT = Model::GetAudienceGenerationJobRequest>
        void GetAudienceGenerationJobAsync(const GetAudienceGenerationJobRequestT& request, const GetAudienceGenerationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsMLClient::GetAudienceGenerationJob, request, handler, context);
        }

        /**
         * <p>Returns information about an audience model</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/GetAudienceModel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAudienceModelOutcome GetAudienceModel(const Model::GetAudienceModelRequest& request) const;

        /**
         * A Callable wrapper for GetAudienceModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAudienceModelRequestT = Model::GetAudienceModelRequest>
        Model::GetAudienceModelOutcomeCallable GetAudienceModelCallable(const GetAudienceModelRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsMLClient::GetAudienceModel, request);
        }

        /**
         * An Async wrapper for GetAudienceModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAudienceModelRequestT = Model::GetAudienceModelRequest>
        void GetAudienceModelAsync(const GetAudienceModelRequestT& request, const GetAudienceModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsMLClient::GetAudienceModel, request, handler, context);
        }

        /**
         * <p>Returns information about the configured model algorithm association in a
         * collaboration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/GetCollaborationConfiguredModelAlgorithmAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCollaborationConfiguredModelAlgorithmAssociationOutcome GetCollaborationConfiguredModelAlgorithmAssociation(const Model::GetCollaborationConfiguredModelAlgorithmAssociationRequest& request) const;

        /**
         * A Callable wrapper for GetCollaborationConfiguredModelAlgorithmAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCollaborationConfiguredModelAlgorithmAssociationRequestT = Model::GetCollaborationConfiguredModelAlgorithmAssociationRequest>
        Model::GetCollaborationConfiguredModelAlgorithmAssociationOutcomeCallable GetCollaborationConfiguredModelAlgorithmAssociationCallable(const GetCollaborationConfiguredModelAlgorithmAssociationRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsMLClient::GetCollaborationConfiguredModelAlgorithmAssociation, request);
        }

        /**
         * An Async wrapper for GetCollaborationConfiguredModelAlgorithmAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCollaborationConfiguredModelAlgorithmAssociationRequestT = Model::GetCollaborationConfiguredModelAlgorithmAssociationRequest>
        void GetCollaborationConfiguredModelAlgorithmAssociationAsync(const GetCollaborationConfiguredModelAlgorithmAssociationRequestT& request, const GetCollaborationConfiguredModelAlgorithmAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsMLClient::GetCollaborationConfiguredModelAlgorithmAssociation, request, handler, context);
        }

        /**
         * <p>Returns information about a specific ML input channel in a
         * collaboration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/GetCollaborationMLInputChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCollaborationMLInputChannelOutcome GetCollaborationMLInputChannel(const Model::GetCollaborationMLInputChannelRequest& request) const;

        /**
         * A Callable wrapper for GetCollaborationMLInputChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCollaborationMLInputChannelRequestT = Model::GetCollaborationMLInputChannelRequest>
        Model::GetCollaborationMLInputChannelOutcomeCallable GetCollaborationMLInputChannelCallable(const GetCollaborationMLInputChannelRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsMLClient::GetCollaborationMLInputChannel, request);
        }

        /**
         * An Async wrapper for GetCollaborationMLInputChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCollaborationMLInputChannelRequestT = Model::GetCollaborationMLInputChannelRequest>
        void GetCollaborationMLInputChannelAsync(const GetCollaborationMLInputChannelRequestT& request, const GetCollaborationMLInputChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsMLClient::GetCollaborationMLInputChannel, request, handler, context);
        }

        /**
         * <p>Returns information about a trained model in a collaboration.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/GetCollaborationTrainedModel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCollaborationTrainedModelOutcome GetCollaborationTrainedModel(const Model::GetCollaborationTrainedModelRequest& request) const;

        /**
         * A Callable wrapper for GetCollaborationTrainedModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCollaborationTrainedModelRequestT = Model::GetCollaborationTrainedModelRequest>
        Model::GetCollaborationTrainedModelOutcomeCallable GetCollaborationTrainedModelCallable(const GetCollaborationTrainedModelRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsMLClient::GetCollaborationTrainedModel, request);
        }

        /**
         * An Async wrapper for GetCollaborationTrainedModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCollaborationTrainedModelRequestT = Model::GetCollaborationTrainedModelRequest>
        void GetCollaborationTrainedModelAsync(const GetCollaborationTrainedModelRequestT& request, const GetCollaborationTrainedModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsMLClient::GetCollaborationTrainedModel, request, handler, context);
        }

        /**
         * <p>Returns information about a specified configured audience
         * model.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/GetConfiguredAudienceModel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConfiguredAudienceModelOutcome GetConfiguredAudienceModel(const Model::GetConfiguredAudienceModelRequest& request) const;

        /**
         * A Callable wrapper for GetConfiguredAudienceModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetConfiguredAudienceModelRequestT = Model::GetConfiguredAudienceModelRequest>
        Model::GetConfiguredAudienceModelOutcomeCallable GetConfiguredAudienceModelCallable(const GetConfiguredAudienceModelRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsMLClient::GetConfiguredAudienceModel, request);
        }

        /**
         * An Async wrapper for GetConfiguredAudienceModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetConfiguredAudienceModelRequestT = Model::GetConfiguredAudienceModelRequest>
        void GetConfiguredAudienceModelAsync(const GetConfiguredAudienceModelRequestT& request, const GetConfiguredAudienceModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsMLClient::GetConfiguredAudienceModel, request, handler, context);
        }

        /**
         * <p>Returns information about a configured audience model policy.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/GetConfiguredAudienceModelPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConfiguredAudienceModelPolicyOutcome GetConfiguredAudienceModelPolicy(const Model::GetConfiguredAudienceModelPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetConfiguredAudienceModelPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetConfiguredAudienceModelPolicyRequestT = Model::GetConfiguredAudienceModelPolicyRequest>
        Model::GetConfiguredAudienceModelPolicyOutcomeCallable GetConfiguredAudienceModelPolicyCallable(const GetConfiguredAudienceModelPolicyRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsMLClient::GetConfiguredAudienceModelPolicy, request);
        }

        /**
         * An Async wrapper for GetConfiguredAudienceModelPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetConfiguredAudienceModelPolicyRequestT = Model::GetConfiguredAudienceModelPolicyRequest>
        void GetConfiguredAudienceModelPolicyAsync(const GetConfiguredAudienceModelPolicyRequestT& request, const GetConfiguredAudienceModelPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsMLClient::GetConfiguredAudienceModelPolicy, request, handler, context);
        }

        /**
         * <p>Returns information about a configured model algorithm.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/GetConfiguredModelAlgorithm">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConfiguredModelAlgorithmOutcome GetConfiguredModelAlgorithm(const Model::GetConfiguredModelAlgorithmRequest& request) const;

        /**
         * A Callable wrapper for GetConfiguredModelAlgorithm that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetConfiguredModelAlgorithmRequestT = Model::GetConfiguredModelAlgorithmRequest>
        Model::GetConfiguredModelAlgorithmOutcomeCallable GetConfiguredModelAlgorithmCallable(const GetConfiguredModelAlgorithmRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsMLClient::GetConfiguredModelAlgorithm, request);
        }

        /**
         * An Async wrapper for GetConfiguredModelAlgorithm that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetConfiguredModelAlgorithmRequestT = Model::GetConfiguredModelAlgorithmRequest>
        void GetConfiguredModelAlgorithmAsync(const GetConfiguredModelAlgorithmRequestT& request, const GetConfiguredModelAlgorithmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsMLClient::GetConfiguredModelAlgorithm, request, handler, context);
        }

        /**
         * <p>Returns information about a configured model algorithm
         * association.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/GetConfiguredModelAlgorithmAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConfiguredModelAlgorithmAssociationOutcome GetConfiguredModelAlgorithmAssociation(const Model::GetConfiguredModelAlgorithmAssociationRequest& request) const;

        /**
         * A Callable wrapper for GetConfiguredModelAlgorithmAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetConfiguredModelAlgorithmAssociationRequestT = Model::GetConfiguredModelAlgorithmAssociationRequest>
        Model::GetConfiguredModelAlgorithmAssociationOutcomeCallable GetConfiguredModelAlgorithmAssociationCallable(const GetConfiguredModelAlgorithmAssociationRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsMLClient::GetConfiguredModelAlgorithmAssociation, request);
        }

        /**
         * An Async wrapper for GetConfiguredModelAlgorithmAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetConfiguredModelAlgorithmAssociationRequestT = Model::GetConfiguredModelAlgorithmAssociationRequest>
        void GetConfiguredModelAlgorithmAssociationAsync(const GetConfiguredModelAlgorithmAssociationRequestT& request, const GetConfiguredModelAlgorithmAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsMLClient::GetConfiguredModelAlgorithmAssociation, request, handler, context);
        }

        /**
         * <p>Returns information about a specific ML configuration.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/GetMLConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMLConfigurationOutcome GetMLConfiguration(const Model::GetMLConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetMLConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMLConfigurationRequestT = Model::GetMLConfigurationRequest>
        Model::GetMLConfigurationOutcomeCallable GetMLConfigurationCallable(const GetMLConfigurationRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsMLClient::GetMLConfiguration, request);
        }

        /**
         * An Async wrapper for GetMLConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMLConfigurationRequestT = Model::GetMLConfigurationRequest>
        void GetMLConfigurationAsync(const GetMLConfigurationRequestT& request, const GetMLConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsMLClient::GetMLConfiguration, request, handler, context);
        }

        /**
         * <p>Returns information about an ML input channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/GetMLInputChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMLInputChannelOutcome GetMLInputChannel(const Model::GetMLInputChannelRequest& request) const;

        /**
         * A Callable wrapper for GetMLInputChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMLInputChannelRequestT = Model::GetMLInputChannelRequest>
        Model::GetMLInputChannelOutcomeCallable GetMLInputChannelCallable(const GetMLInputChannelRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsMLClient::GetMLInputChannel, request);
        }

        /**
         * An Async wrapper for GetMLInputChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMLInputChannelRequestT = Model::GetMLInputChannelRequest>
        void GetMLInputChannelAsync(const GetMLInputChannelRequestT& request, const GetMLInputChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsMLClient::GetMLInputChannel, request, handler, context);
        }

        /**
         * <p>Returns information about a trained model.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/GetTrainedModel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTrainedModelOutcome GetTrainedModel(const Model::GetTrainedModelRequest& request) const;

        /**
         * A Callable wrapper for GetTrainedModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTrainedModelRequestT = Model::GetTrainedModelRequest>
        Model::GetTrainedModelOutcomeCallable GetTrainedModelCallable(const GetTrainedModelRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsMLClient::GetTrainedModel, request);
        }

        /**
         * An Async wrapper for GetTrainedModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTrainedModelRequestT = Model::GetTrainedModelRequest>
        void GetTrainedModelAsync(const GetTrainedModelRequestT& request, const GetTrainedModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsMLClient::GetTrainedModel, request, handler, context);
        }

        /**
         * <p>Returns information about a trained model inference job.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/GetTrainedModelInferenceJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTrainedModelInferenceJobOutcome GetTrainedModelInferenceJob(const Model::GetTrainedModelInferenceJobRequest& request) const;

        /**
         * A Callable wrapper for GetTrainedModelInferenceJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTrainedModelInferenceJobRequestT = Model::GetTrainedModelInferenceJobRequest>
        Model::GetTrainedModelInferenceJobOutcomeCallable GetTrainedModelInferenceJobCallable(const GetTrainedModelInferenceJobRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsMLClient::GetTrainedModelInferenceJob, request);
        }

        /**
         * An Async wrapper for GetTrainedModelInferenceJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTrainedModelInferenceJobRequestT = Model::GetTrainedModelInferenceJobRequest>
        void GetTrainedModelInferenceJobAsync(const GetTrainedModelInferenceJobRequestT& request, const GetTrainedModelInferenceJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsMLClient::GetTrainedModelInferenceJob, request, handler, context);
        }

        /**
         * <p>Returns information about a training dataset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/GetTrainingDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTrainingDatasetOutcome GetTrainingDataset(const Model::GetTrainingDatasetRequest& request) const;

        /**
         * A Callable wrapper for GetTrainingDataset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTrainingDatasetRequestT = Model::GetTrainingDatasetRequest>
        Model::GetTrainingDatasetOutcomeCallable GetTrainingDatasetCallable(const GetTrainingDatasetRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsMLClient::GetTrainingDataset, request);
        }

        /**
         * An Async wrapper for GetTrainingDataset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTrainingDatasetRequestT = Model::GetTrainingDatasetRequest>
        void GetTrainingDatasetAsync(const GetTrainingDatasetRequestT& request, const GetTrainingDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsMLClient::GetTrainingDataset, request, handler, context);
        }

        /**
         * <p>Returns a list of the audience export jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/ListAudienceExportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAudienceExportJobsOutcome ListAudienceExportJobs(const Model::ListAudienceExportJobsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListAudienceExportJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAudienceExportJobsRequestT = Model::ListAudienceExportJobsRequest>
        Model::ListAudienceExportJobsOutcomeCallable ListAudienceExportJobsCallable(const ListAudienceExportJobsRequestT& request = {}) const
        {
            return SubmitCallable(&CleanRoomsMLClient::ListAudienceExportJobs, request);
        }

        /**
         * An Async wrapper for ListAudienceExportJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAudienceExportJobsRequestT = Model::ListAudienceExportJobsRequest>
        void ListAudienceExportJobsAsync(const ListAudienceExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListAudienceExportJobsRequestT& request = {}) const
        {
            return SubmitAsync(&CleanRoomsMLClient::ListAudienceExportJobs, request, handler, context);
        }

        /**
         * <p>Returns a list of audience generation jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/ListAudienceGenerationJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAudienceGenerationJobsOutcome ListAudienceGenerationJobs(const Model::ListAudienceGenerationJobsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListAudienceGenerationJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAudienceGenerationJobsRequestT = Model::ListAudienceGenerationJobsRequest>
        Model::ListAudienceGenerationJobsOutcomeCallable ListAudienceGenerationJobsCallable(const ListAudienceGenerationJobsRequestT& request = {}) const
        {
            return SubmitCallable(&CleanRoomsMLClient::ListAudienceGenerationJobs, request);
        }

        /**
         * An Async wrapper for ListAudienceGenerationJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAudienceGenerationJobsRequestT = Model::ListAudienceGenerationJobsRequest>
        void ListAudienceGenerationJobsAsync(const ListAudienceGenerationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListAudienceGenerationJobsRequestT& request = {}) const
        {
            return SubmitAsync(&CleanRoomsMLClient::ListAudienceGenerationJobs, request, handler, context);
        }

        /**
         * <p>Returns a list of audience models.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/ListAudienceModels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAudienceModelsOutcome ListAudienceModels(const Model::ListAudienceModelsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListAudienceModels that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAudienceModelsRequestT = Model::ListAudienceModelsRequest>
        Model::ListAudienceModelsOutcomeCallable ListAudienceModelsCallable(const ListAudienceModelsRequestT& request = {}) const
        {
            return SubmitCallable(&CleanRoomsMLClient::ListAudienceModels, request);
        }

        /**
         * An Async wrapper for ListAudienceModels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAudienceModelsRequestT = Model::ListAudienceModelsRequest>
        void ListAudienceModelsAsync(const ListAudienceModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListAudienceModelsRequestT& request = {}) const
        {
            return SubmitAsync(&CleanRoomsMLClient::ListAudienceModels, request, handler, context);
        }

        /**
         * <p>Returns a list of the configured model algorithm associations in a
         * collaboration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/ListCollaborationConfiguredModelAlgorithmAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCollaborationConfiguredModelAlgorithmAssociationsOutcome ListCollaborationConfiguredModelAlgorithmAssociations(const Model::ListCollaborationConfiguredModelAlgorithmAssociationsRequest& request) const;

        /**
         * A Callable wrapper for ListCollaborationConfiguredModelAlgorithmAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCollaborationConfiguredModelAlgorithmAssociationsRequestT = Model::ListCollaborationConfiguredModelAlgorithmAssociationsRequest>
        Model::ListCollaborationConfiguredModelAlgorithmAssociationsOutcomeCallable ListCollaborationConfiguredModelAlgorithmAssociationsCallable(const ListCollaborationConfiguredModelAlgorithmAssociationsRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsMLClient::ListCollaborationConfiguredModelAlgorithmAssociations, request);
        }

        /**
         * An Async wrapper for ListCollaborationConfiguredModelAlgorithmAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCollaborationConfiguredModelAlgorithmAssociationsRequestT = Model::ListCollaborationConfiguredModelAlgorithmAssociationsRequest>
        void ListCollaborationConfiguredModelAlgorithmAssociationsAsync(const ListCollaborationConfiguredModelAlgorithmAssociationsRequestT& request, const ListCollaborationConfiguredModelAlgorithmAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsMLClient::ListCollaborationConfiguredModelAlgorithmAssociations, request, handler, context);
        }

        /**
         * <p>Returns a list of the ML input channels in a collaboration.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/ListCollaborationMLInputChannels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCollaborationMLInputChannelsOutcome ListCollaborationMLInputChannels(const Model::ListCollaborationMLInputChannelsRequest& request) const;

        /**
         * A Callable wrapper for ListCollaborationMLInputChannels that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCollaborationMLInputChannelsRequestT = Model::ListCollaborationMLInputChannelsRequest>
        Model::ListCollaborationMLInputChannelsOutcomeCallable ListCollaborationMLInputChannelsCallable(const ListCollaborationMLInputChannelsRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsMLClient::ListCollaborationMLInputChannels, request);
        }

        /**
         * An Async wrapper for ListCollaborationMLInputChannels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCollaborationMLInputChannelsRequestT = Model::ListCollaborationMLInputChannelsRequest>
        void ListCollaborationMLInputChannelsAsync(const ListCollaborationMLInputChannelsRequestT& request, const ListCollaborationMLInputChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsMLClient::ListCollaborationMLInputChannels, request, handler, context);
        }

        /**
         * <p>Returns a list of the export jobs for a trained model in a
         * collaboration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/ListCollaborationTrainedModelExportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCollaborationTrainedModelExportJobsOutcome ListCollaborationTrainedModelExportJobs(const Model::ListCollaborationTrainedModelExportJobsRequest& request) const;

        /**
         * A Callable wrapper for ListCollaborationTrainedModelExportJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCollaborationTrainedModelExportJobsRequestT = Model::ListCollaborationTrainedModelExportJobsRequest>
        Model::ListCollaborationTrainedModelExportJobsOutcomeCallable ListCollaborationTrainedModelExportJobsCallable(const ListCollaborationTrainedModelExportJobsRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsMLClient::ListCollaborationTrainedModelExportJobs, request);
        }

        /**
         * An Async wrapper for ListCollaborationTrainedModelExportJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCollaborationTrainedModelExportJobsRequestT = Model::ListCollaborationTrainedModelExportJobsRequest>
        void ListCollaborationTrainedModelExportJobsAsync(const ListCollaborationTrainedModelExportJobsRequestT& request, const ListCollaborationTrainedModelExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsMLClient::ListCollaborationTrainedModelExportJobs, request, handler, context);
        }

        /**
         * <p>Returns a list of trained model inference jobs in a specified
         * collaboration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/ListCollaborationTrainedModelInferenceJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCollaborationTrainedModelInferenceJobsOutcome ListCollaborationTrainedModelInferenceJobs(const Model::ListCollaborationTrainedModelInferenceJobsRequest& request) const;

        /**
         * A Callable wrapper for ListCollaborationTrainedModelInferenceJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCollaborationTrainedModelInferenceJobsRequestT = Model::ListCollaborationTrainedModelInferenceJobsRequest>
        Model::ListCollaborationTrainedModelInferenceJobsOutcomeCallable ListCollaborationTrainedModelInferenceJobsCallable(const ListCollaborationTrainedModelInferenceJobsRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsMLClient::ListCollaborationTrainedModelInferenceJobs, request);
        }

        /**
         * An Async wrapper for ListCollaborationTrainedModelInferenceJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCollaborationTrainedModelInferenceJobsRequestT = Model::ListCollaborationTrainedModelInferenceJobsRequest>
        void ListCollaborationTrainedModelInferenceJobsAsync(const ListCollaborationTrainedModelInferenceJobsRequestT& request, const ListCollaborationTrainedModelInferenceJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsMLClient::ListCollaborationTrainedModelInferenceJobs, request, handler, context);
        }

        /**
         * <p>Returns a list of the trained models in a collaboration.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/ListCollaborationTrainedModels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCollaborationTrainedModelsOutcome ListCollaborationTrainedModels(const Model::ListCollaborationTrainedModelsRequest& request) const;

        /**
         * A Callable wrapper for ListCollaborationTrainedModels that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCollaborationTrainedModelsRequestT = Model::ListCollaborationTrainedModelsRequest>
        Model::ListCollaborationTrainedModelsOutcomeCallable ListCollaborationTrainedModelsCallable(const ListCollaborationTrainedModelsRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsMLClient::ListCollaborationTrainedModels, request);
        }

        /**
         * An Async wrapper for ListCollaborationTrainedModels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCollaborationTrainedModelsRequestT = Model::ListCollaborationTrainedModelsRequest>
        void ListCollaborationTrainedModelsAsync(const ListCollaborationTrainedModelsRequestT& request, const ListCollaborationTrainedModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsMLClient::ListCollaborationTrainedModels, request, handler, context);
        }

        /**
         * <p>Returns a list of the configured audience models.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/ListConfiguredAudienceModels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConfiguredAudienceModelsOutcome ListConfiguredAudienceModels(const Model::ListConfiguredAudienceModelsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListConfiguredAudienceModels that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListConfiguredAudienceModelsRequestT = Model::ListConfiguredAudienceModelsRequest>
        Model::ListConfiguredAudienceModelsOutcomeCallable ListConfiguredAudienceModelsCallable(const ListConfiguredAudienceModelsRequestT& request = {}) const
        {
            return SubmitCallable(&CleanRoomsMLClient::ListConfiguredAudienceModels, request);
        }

        /**
         * An Async wrapper for ListConfiguredAudienceModels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListConfiguredAudienceModelsRequestT = Model::ListConfiguredAudienceModelsRequest>
        void ListConfiguredAudienceModelsAsync(const ListConfiguredAudienceModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListConfiguredAudienceModelsRequestT& request = {}) const
        {
            return SubmitAsync(&CleanRoomsMLClient::ListConfiguredAudienceModels, request, handler, context);
        }

        /**
         * <p>Returns a list of configured model algorithm associations.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/ListConfiguredModelAlgorithmAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConfiguredModelAlgorithmAssociationsOutcome ListConfiguredModelAlgorithmAssociations(const Model::ListConfiguredModelAlgorithmAssociationsRequest& request) const;

        /**
         * A Callable wrapper for ListConfiguredModelAlgorithmAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListConfiguredModelAlgorithmAssociationsRequestT = Model::ListConfiguredModelAlgorithmAssociationsRequest>
        Model::ListConfiguredModelAlgorithmAssociationsOutcomeCallable ListConfiguredModelAlgorithmAssociationsCallable(const ListConfiguredModelAlgorithmAssociationsRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsMLClient::ListConfiguredModelAlgorithmAssociations, request);
        }

        /**
         * An Async wrapper for ListConfiguredModelAlgorithmAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListConfiguredModelAlgorithmAssociationsRequestT = Model::ListConfiguredModelAlgorithmAssociationsRequest>
        void ListConfiguredModelAlgorithmAssociationsAsync(const ListConfiguredModelAlgorithmAssociationsRequestT& request, const ListConfiguredModelAlgorithmAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsMLClient::ListConfiguredModelAlgorithmAssociations, request, handler, context);
        }

        /**
         * <p>Returns a list of configured model algorithms.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/ListConfiguredModelAlgorithms">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConfiguredModelAlgorithmsOutcome ListConfiguredModelAlgorithms(const Model::ListConfiguredModelAlgorithmsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListConfiguredModelAlgorithms that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListConfiguredModelAlgorithmsRequestT = Model::ListConfiguredModelAlgorithmsRequest>
        Model::ListConfiguredModelAlgorithmsOutcomeCallable ListConfiguredModelAlgorithmsCallable(const ListConfiguredModelAlgorithmsRequestT& request = {}) const
        {
            return SubmitCallable(&CleanRoomsMLClient::ListConfiguredModelAlgorithms, request);
        }

        /**
         * An Async wrapper for ListConfiguredModelAlgorithms that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListConfiguredModelAlgorithmsRequestT = Model::ListConfiguredModelAlgorithmsRequest>
        void ListConfiguredModelAlgorithmsAsync(const ListConfiguredModelAlgorithmsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListConfiguredModelAlgorithmsRequestT& request = {}) const
        {
            return SubmitAsync(&CleanRoomsMLClient::ListConfiguredModelAlgorithms, request, handler, context);
        }

        /**
         * <p>Returns a list of ML input channels.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/ListMLInputChannels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMLInputChannelsOutcome ListMLInputChannels(const Model::ListMLInputChannelsRequest& request) const;

        /**
         * A Callable wrapper for ListMLInputChannels that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListMLInputChannelsRequestT = Model::ListMLInputChannelsRequest>
        Model::ListMLInputChannelsOutcomeCallable ListMLInputChannelsCallable(const ListMLInputChannelsRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsMLClient::ListMLInputChannels, request);
        }

        /**
         * An Async wrapper for ListMLInputChannels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMLInputChannelsRequestT = Model::ListMLInputChannelsRequest>
        void ListMLInputChannelsAsync(const ListMLInputChannelsRequestT& request, const ListMLInputChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsMLClient::ListMLInputChannels, request, handler, context);
        }

        /**
         * <p>Returns a list of tags for a provided resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsMLClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsMLClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Returns a list of trained model inference jobs that match the request
         * parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/ListTrainedModelInferenceJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTrainedModelInferenceJobsOutcome ListTrainedModelInferenceJobs(const Model::ListTrainedModelInferenceJobsRequest& request) const;

        /**
         * A Callable wrapper for ListTrainedModelInferenceJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTrainedModelInferenceJobsRequestT = Model::ListTrainedModelInferenceJobsRequest>
        Model::ListTrainedModelInferenceJobsOutcomeCallable ListTrainedModelInferenceJobsCallable(const ListTrainedModelInferenceJobsRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsMLClient::ListTrainedModelInferenceJobs, request);
        }

        /**
         * An Async wrapper for ListTrainedModelInferenceJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTrainedModelInferenceJobsRequestT = Model::ListTrainedModelInferenceJobsRequest>
        void ListTrainedModelInferenceJobsAsync(const ListTrainedModelInferenceJobsRequestT& request, const ListTrainedModelInferenceJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsMLClient::ListTrainedModelInferenceJobs, request, handler, context);
        }

        /**
         * <p>Returns a list of trained model versions for a specified trained model. This
         * operation allows you to view all versions of a trained model, including
         * information about their status and creation details. You can use this to track
         * the evolution of your trained models and select specific versions for inference
         * or further training.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/ListTrainedModelVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTrainedModelVersionsOutcome ListTrainedModelVersions(const Model::ListTrainedModelVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListTrainedModelVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTrainedModelVersionsRequestT = Model::ListTrainedModelVersionsRequest>
        Model::ListTrainedModelVersionsOutcomeCallable ListTrainedModelVersionsCallable(const ListTrainedModelVersionsRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsMLClient::ListTrainedModelVersions, request);
        }

        /**
         * An Async wrapper for ListTrainedModelVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTrainedModelVersionsRequestT = Model::ListTrainedModelVersionsRequest>
        void ListTrainedModelVersionsAsync(const ListTrainedModelVersionsRequestT& request, const ListTrainedModelVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsMLClient::ListTrainedModelVersions, request, handler, context);
        }

        /**
         * <p>Returns a list of trained models.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/ListTrainedModels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTrainedModelsOutcome ListTrainedModels(const Model::ListTrainedModelsRequest& request) const;

        /**
         * A Callable wrapper for ListTrainedModels that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTrainedModelsRequestT = Model::ListTrainedModelsRequest>
        Model::ListTrainedModelsOutcomeCallable ListTrainedModelsCallable(const ListTrainedModelsRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsMLClient::ListTrainedModels, request);
        }

        /**
         * An Async wrapper for ListTrainedModels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTrainedModelsRequestT = Model::ListTrainedModelsRequest>
        void ListTrainedModelsAsync(const ListTrainedModelsRequestT& request, const ListTrainedModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsMLClient::ListTrainedModels, request, handler, context);
        }

        /**
         * <p>Returns a list of training datasets.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/ListTrainingDatasets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTrainingDatasetsOutcome ListTrainingDatasets(const Model::ListTrainingDatasetsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListTrainingDatasets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTrainingDatasetsRequestT = Model::ListTrainingDatasetsRequest>
        Model::ListTrainingDatasetsOutcomeCallable ListTrainingDatasetsCallable(const ListTrainingDatasetsRequestT& request = {}) const
        {
            return SubmitCallable(&CleanRoomsMLClient::ListTrainingDatasets, request);
        }

        /**
         * An Async wrapper for ListTrainingDatasets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTrainingDatasetsRequestT = Model::ListTrainingDatasetsRequest>
        void ListTrainingDatasetsAsync(const ListTrainingDatasetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListTrainingDatasetsRequestT& request = {}) const
        {
            return SubmitAsync(&CleanRoomsMLClient::ListTrainingDatasets, request, handler, context);
        }

        /**
         * <p>Create or update the resource policy for a configured audience
         * model.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/PutConfiguredAudienceModelPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutConfiguredAudienceModelPolicyOutcome PutConfiguredAudienceModelPolicy(const Model::PutConfiguredAudienceModelPolicyRequest& request) const;

        /**
         * A Callable wrapper for PutConfiguredAudienceModelPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutConfiguredAudienceModelPolicyRequestT = Model::PutConfiguredAudienceModelPolicyRequest>
        Model::PutConfiguredAudienceModelPolicyOutcomeCallable PutConfiguredAudienceModelPolicyCallable(const PutConfiguredAudienceModelPolicyRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsMLClient::PutConfiguredAudienceModelPolicy, request);
        }

        /**
         * An Async wrapper for PutConfiguredAudienceModelPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutConfiguredAudienceModelPolicyRequestT = Model::PutConfiguredAudienceModelPolicyRequest>
        void PutConfiguredAudienceModelPolicyAsync(const PutConfiguredAudienceModelPolicyRequestT& request, const PutConfiguredAudienceModelPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsMLClient::PutConfiguredAudienceModelPolicy, request, handler, context);
        }

        /**
         * <p>Assigns information about an ML configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/PutMLConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutMLConfigurationOutcome PutMLConfiguration(const Model::PutMLConfigurationRequest& request) const;

        /**
         * A Callable wrapper for PutMLConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutMLConfigurationRequestT = Model::PutMLConfigurationRequest>
        Model::PutMLConfigurationOutcomeCallable PutMLConfigurationCallable(const PutMLConfigurationRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsMLClient::PutMLConfiguration, request);
        }

        /**
         * An Async wrapper for PutMLConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutMLConfigurationRequestT = Model::PutMLConfigurationRequest>
        void PutMLConfigurationAsync(const PutMLConfigurationRequestT& request, const PutMLConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsMLClient::PutMLConfiguration, request, handler, context);
        }

        /**
         * <p>Export an audience of a specified size after you have generated an
         * audience.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/StartAudienceExportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartAudienceExportJobOutcome StartAudienceExportJob(const Model::StartAudienceExportJobRequest& request) const;

        /**
         * A Callable wrapper for StartAudienceExportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartAudienceExportJobRequestT = Model::StartAudienceExportJobRequest>
        Model::StartAudienceExportJobOutcomeCallable StartAudienceExportJobCallable(const StartAudienceExportJobRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsMLClient::StartAudienceExportJob, request);
        }

        /**
         * An Async wrapper for StartAudienceExportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartAudienceExportJobRequestT = Model::StartAudienceExportJobRequest>
        void StartAudienceExportJobAsync(const StartAudienceExportJobRequestT& request, const StartAudienceExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsMLClient::StartAudienceExportJob, request, handler, context);
        }

        /**
         * <p>Information necessary to start the audience generation job.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/StartAudienceGenerationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartAudienceGenerationJobOutcome StartAudienceGenerationJob(const Model::StartAudienceGenerationJobRequest& request) const;

        /**
         * A Callable wrapper for StartAudienceGenerationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartAudienceGenerationJobRequestT = Model::StartAudienceGenerationJobRequest>
        Model::StartAudienceGenerationJobOutcomeCallable StartAudienceGenerationJobCallable(const StartAudienceGenerationJobRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsMLClient::StartAudienceGenerationJob, request);
        }

        /**
         * An Async wrapper for StartAudienceGenerationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartAudienceGenerationJobRequestT = Model::StartAudienceGenerationJobRequest>
        void StartAudienceGenerationJobAsync(const StartAudienceGenerationJobRequestT& request, const StartAudienceGenerationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsMLClient::StartAudienceGenerationJob, request, handler, context);
        }

        /**
         * <p>Provides the information necessary to start a trained model export
         * job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/StartTrainedModelExportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartTrainedModelExportJobOutcome StartTrainedModelExportJob(const Model::StartTrainedModelExportJobRequest& request) const;

        /**
         * A Callable wrapper for StartTrainedModelExportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartTrainedModelExportJobRequestT = Model::StartTrainedModelExportJobRequest>
        Model::StartTrainedModelExportJobOutcomeCallable StartTrainedModelExportJobCallable(const StartTrainedModelExportJobRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsMLClient::StartTrainedModelExportJob, request);
        }

        /**
         * An Async wrapper for StartTrainedModelExportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartTrainedModelExportJobRequestT = Model::StartTrainedModelExportJobRequest>
        void StartTrainedModelExportJobAsync(const StartTrainedModelExportJobRequestT& request, const StartTrainedModelExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsMLClient::StartTrainedModelExportJob, request, handler, context);
        }

        /**
         * <p>Defines the information necessary to begin a trained model inference
         * job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/StartTrainedModelInferenceJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartTrainedModelInferenceJobOutcome StartTrainedModelInferenceJob(const Model::StartTrainedModelInferenceJobRequest& request) const;

        /**
         * A Callable wrapper for StartTrainedModelInferenceJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartTrainedModelInferenceJobRequestT = Model::StartTrainedModelInferenceJobRequest>
        Model::StartTrainedModelInferenceJobOutcomeCallable StartTrainedModelInferenceJobCallable(const StartTrainedModelInferenceJobRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsMLClient::StartTrainedModelInferenceJob, request);
        }

        /**
         * An Async wrapper for StartTrainedModelInferenceJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartTrainedModelInferenceJobRequestT = Model::StartTrainedModelInferenceJobRequest>
        void StartTrainedModelInferenceJobAsync(const StartTrainedModelInferenceJobRequestT& request, const StartTrainedModelInferenceJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsMLClient::StartTrainedModelInferenceJob, request, handler, context);
        }

        /**
         * <p>Adds metadata tags to a specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsMLClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsMLClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes metadata tags from a specified resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsMLClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsMLClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Provides the information necessary to update a configured audience model.
         * Updates that impact audience generation jobs take effect when a new job starts,
         * but do not impact currently running jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/UpdateConfiguredAudienceModel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConfiguredAudienceModelOutcome UpdateConfiguredAudienceModel(const Model::UpdateConfiguredAudienceModelRequest& request) const;

        /**
         * A Callable wrapper for UpdateConfiguredAudienceModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateConfiguredAudienceModelRequestT = Model::UpdateConfiguredAudienceModelRequest>
        Model::UpdateConfiguredAudienceModelOutcomeCallable UpdateConfiguredAudienceModelCallable(const UpdateConfiguredAudienceModelRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsMLClient::UpdateConfiguredAudienceModel, request);
        }

        /**
         * An Async wrapper for UpdateConfiguredAudienceModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateConfiguredAudienceModelRequestT = Model::UpdateConfiguredAudienceModelRequest>
        void UpdateConfiguredAudienceModelAsync(const UpdateConfiguredAudienceModelRequestT& request, const UpdateConfiguredAudienceModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsMLClient::UpdateConfiguredAudienceModel, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<CleanRoomsMLEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<CleanRoomsMLClient>;
      void init(const CleanRoomsMLClientConfiguration& clientConfiguration);

      CleanRoomsMLClientConfiguration m_clientConfiguration;
      std::shared_ptr<CleanRoomsMLEndpointProviderBase> m_endpointProvider;
  };

} // namespace CleanRoomsML
} // namespace Aws
