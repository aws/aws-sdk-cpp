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
   * Rooms SQL Reference</a>.</p>
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
         * <p>Defines the information necessary to create a training dataset, or seed
         * audience. In Clean Rooms ML, the <code>TrainingDataset</code> is metadata that
         * points to a Glue table, which is read only during <code>AudienceModel</code>
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
        virtual Model::ListAudienceExportJobsOutcome ListAudienceExportJobs(const Model::ListAudienceExportJobsRequest& request) const;

        /**
         * A Callable wrapper for ListAudienceExportJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAudienceExportJobsRequestT = Model::ListAudienceExportJobsRequest>
        Model::ListAudienceExportJobsOutcomeCallable ListAudienceExportJobsCallable(const ListAudienceExportJobsRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsMLClient::ListAudienceExportJobs, request);
        }

        /**
         * An Async wrapper for ListAudienceExportJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAudienceExportJobsRequestT = Model::ListAudienceExportJobsRequest>
        void ListAudienceExportJobsAsync(const ListAudienceExportJobsRequestT& request, const ListAudienceExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsMLClient::ListAudienceExportJobs, request, handler, context);
        }

        /**
         * <p>Returns a list of audience generation jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/ListAudienceGenerationJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAudienceGenerationJobsOutcome ListAudienceGenerationJobs(const Model::ListAudienceGenerationJobsRequest& request) const;

        /**
         * A Callable wrapper for ListAudienceGenerationJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAudienceGenerationJobsRequestT = Model::ListAudienceGenerationJobsRequest>
        Model::ListAudienceGenerationJobsOutcomeCallable ListAudienceGenerationJobsCallable(const ListAudienceGenerationJobsRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsMLClient::ListAudienceGenerationJobs, request);
        }

        /**
         * An Async wrapper for ListAudienceGenerationJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAudienceGenerationJobsRequestT = Model::ListAudienceGenerationJobsRequest>
        void ListAudienceGenerationJobsAsync(const ListAudienceGenerationJobsRequestT& request, const ListAudienceGenerationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsMLClient::ListAudienceGenerationJobs, request, handler, context);
        }

        /**
         * <p>Returns a list of audience models.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/ListAudienceModels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAudienceModelsOutcome ListAudienceModels(const Model::ListAudienceModelsRequest& request) const;

        /**
         * A Callable wrapper for ListAudienceModels that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAudienceModelsRequestT = Model::ListAudienceModelsRequest>
        Model::ListAudienceModelsOutcomeCallable ListAudienceModelsCallable(const ListAudienceModelsRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsMLClient::ListAudienceModels, request);
        }

        /**
         * An Async wrapper for ListAudienceModels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAudienceModelsRequestT = Model::ListAudienceModelsRequest>
        void ListAudienceModelsAsync(const ListAudienceModelsRequestT& request, const ListAudienceModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsMLClient::ListAudienceModels, request, handler, context);
        }

        /**
         * <p>Returns a list of the configured audience models.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/ListConfiguredAudienceModels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConfiguredAudienceModelsOutcome ListConfiguredAudienceModels(const Model::ListConfiguredAudienceModelsRequest& request) const;

        /**
         * A Callable wrapper for ListConfiguredAudienceModels that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListConfiguredAudienceModelsRequestT = Model::ListConfiguredAudienceModelsRequest>
        Model::ListConfiguredAudienceModelsOutcomeCallable ListConfiguredAudienceModelsCallable(const ListConfiguredAudienceModelsRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsMLClient::ListConfiguredAudienceModels, request);
        }

        /**
         * An Async wrapper for ListConfiguredAudienceModels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListConfiguredAudienceModelsRequestT = Model::ListConfiguredAudienceModelsRequest>
        void ListConfiguredAudienceModelsAsync(const ListConfiguredAudienceModelsRequestT& request, const ListConfiguredAudienceModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CleanRoomsMLClient::ListConfiguredAudienceModels, request, handler, context);
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
         * <p>Returns a list of training datasets.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/ListTrainingDatasets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTrainingDatasetsOutcome ListTrainingDatasets(const Model::ListTrainingDatasetsRequest& request) const;

        /**
         * A Callable wrapper for ListTrainingDatasets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTrainingDatasetsRequestT = Model::ListTrainingDatasetsRequest>
        Model::ListTrainingDatasetsOutcomeCallable ListTrainingDatasetsCallable(const ListTrainingDatasetsRequestT& request) const
        {
            return SubmitCallable(&CleanRoomsMLClient::ListTrainingDatasets, request);
        }

        /**
         * An Async wrapper for ListTrainingDatasets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTrainingDatasetsRequestT = Model::ListTrainingDatasetsRequest>
        void ListTrainingDatasetsAsync(const ListTrainingDatasetsRequestT& request, const ListTrainingDatasetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
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
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<CleanRoomsMLEndpointProviderBase> m_endpointProvider;
  };

} // namespace CleanRoomsML
} // namespace Aws
