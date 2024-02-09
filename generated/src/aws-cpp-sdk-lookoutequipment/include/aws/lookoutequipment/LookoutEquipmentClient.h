/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lookoutequipment/LookoutEquipmentServiceClientModel.h>

namespace Aws
{
namespace LookoutEquipment
{
  /**
   * <p>Amazon Lookout for Equipment is a machine learning service that uses advanced
   * analytics to identify anomalies in machines from sensor data for use in
   * predictive maintenance. </p>
   */
  class AWS_LOOKOUTEQUIPMENT_API LookoutEquipmentClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<LookoutEquipmentClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef LookoutEquipmentClientConfiguration ClientConfigurationType;
      typedef LookoutEquipmentEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LookoutEquipmentClient(const Aws::LookoutEquipment::LookoutEquipmentClientConfiguration& clientConfiguration = Aws::LookoutEquipment::LookoutEquipmentClientConfiguration(),
                               std::shared_ptr<LookoutEquipmentEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LookoutEquipmentClient(const Aws::Auth::AWSCredentials& credentials,
                               std::shared_ptr<LookoutEquipmentEndpointProviderBase> endpointProvider = nullptr,
                               const Aws::LookoutEquipment::LookoutEquipmentClientConfiguration& clientConfiguration = Aws::LookoutEquipment::LookoutEquipmentClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        LookoutEquipmentClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<LookoutEquipmentEndpointProviderBase> endpointProvider = nullptr,
                               const Aws::LookoutEquipment::LookoutEquipmentClientConfiguration& clientConfiguration = Aws::LookoutEquipment::LookoutEquipmentClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LookoutEquipmentClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LookoutEquipmentClient(const Aws::Auth::AWSCredentials& credentials,
                               const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        LookoutEquipmentClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~LookoutEquipmentClient();

        /**
         * <p>Creates a container for a collection of data being ingested for analysis. The
         * dataset contains the metadata describing where the data is and what the data
         * actually looks like. For example, it contains the location of the data source,
         * the data schema, and other information. A dataset also contains any tags
         * associated with the ingested data. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/CreateDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDatasetOutcome CreateDataset(const Model::CreateDatasetRequest& request) const;

        /**
         * A Callable wrapper for CreateDataset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDatasetRequestT = Model::CreateDatasetRequest>
        Model::CreateDatasetOutcomeCallable CreateDatasetCallable(const CreateDatasetRequestT& request) const
        {
            return SubmitCallable(&LookoutEquipmentClient::CreateDataset, request);
        }

        /**
         * An Async wrapper for CreateDataset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDatasetRequestT = Model::CreateDatasetRequest>
        void CreateDatasetAsync(const CreateDatasetRequestT& request, const CreateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutEquipmentClient::CreateDataset, request, handler, context);
        }

        /**
         * <p> Creates a scheduled inference. Scheduling an inference is setting up a
         * continuous real-time inference plan to analyze new measurement data. When
         * setting up the schedule, you provide an S3 bucket location for the input data,
         * assign it a delimiter between separate entries in the data, set an offset delay
         * if desired, and set the frequency of inferencing. You must also provide an S3
         * bucket location for the output data. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/CreateInferenceScheduler">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInferenceSchedulerOutcome CreateInferenceScheduler(const Model::CreateInferenceSchedulerRequest& request) const;

        /**
         * A Callable wrapper for CreateInferenceScheduler that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateInferenceSchedulerRequestT = Model::CreateInferenceSchedulerRequest>
        Model::CreateInferenceSchedulerOutcomeCallable CreateInferenceSchedulerCallable(const CreateInferenceSchedulerRequestT& request) const
        {
            return SubmitCallable(&LookoutEquipmentClient::CreateInferenceScheduler, request);
        }

        /**
         * An Async wrapper for CreateInferenceScheduler that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateInferenceSchedulerRequestT = Model::CreateInferenceSchedulerRequest>
        void CreateInferenceSchedulerAsync(const CreateInferenceSchedulerRequestT& request, const CreateInferenceSchedulerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutEquipmentClient::CreateInferenceScheduler, request, handler, context);
        }

        /**
         * <p> Creates a label for an event. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/CreateLabel">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLabelOutcome CreateLabel(const Model::CreateLabelRequest& request) const;

        /**
         * A Callable wrapper for CreateLabel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateLabelRequestT = Model::CreateLabelRequest>
        Model::CreateLabelOutcomeCallable CreateLabelCallable(const CreateLabelRequestT& request) const
        {
            return SubmitCallable(&LookoutEquipmentClient::CreateLabel, request);
        }

        /**
         * An Async wrapper for CreateLabel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateLabelRequestT = Model::CreateLabelRequest>
        void CreateLabelAsync(const CreateLabelRequestT& request, const CreateLabelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutEquipmentClient::CreateLabel, request, handler, context);
        }

        /**
         * <p> Creates a group of labels. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/CreateLabelGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLabelGroupOutcome CreateLabelGroup(const Model::CreateLabelGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateLabelGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateLabelGroupRequestT = Model::CreateLabelGroupRequest>
        Model::CreateLabelGroupOutcomeCallable CreateLabelGroupCallable(const CreateLabelGroupRequestT& request) const
        {
            return SubmitCallable(&LookoutEquipmentClient::CreateLabelGroup, request);
        }

        /**
         * An Async wrapper for CreateLabelGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateLabelGroupRequestT = Model::CreateLabelGroupRequest>
        void CreateLabelGroupAsync(const CreateLabelGroupRequestT& request, const CreateLabelGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutEquipmentClient::CreateLabelGroup, request, handler, context);
        }

        /**
         * <p>Creates a machine learning model for data inference. </p> <p>A
         * machine-learning (ML) model is a mathematical model that finds patterns in your
         * data. In Amazon Lookout for Equipment, the model learns the patterns of normal
         * behavior and detects abnormal behavior that could be potential equipment failure
         * (or maintenance events). The models are made by analyzing normal data and
         * abnormalities in machine behavior that have already occurred.</p> <p>Your model
         * is trained using a portion of the data from your dataset and uses that data to
         * learn patterns of normal behavior and abnormal patterns that lead to equipment
         * failure. Another portion of the data is used to evaluate the model's accuracy.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/CreateModel">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateModelOutcome CreateModel(const Model::CreateModelRequest& request) const;

        /**
         * A Callable wrapper for CreateModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateModelRequestT = Model::CreateModelRequest>
        Model::CreateModelOutcomeCallable CreateModelCallable(const CreateModelRequestT& request) const
        {
            return SubmitCallable(&LookoutEquipmentClient::CreateModel, request);
        }

        /**
         * An Async wrapper for CreateModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateModelRequestT = Model::CreateModelRequest>
        void CreateModelAsync(const CreateModelRequestT& request, const CreateModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutEquipmentClient::CreateModel, request, handler, context);
        }

        /**
         * <p>Creates a retraining scheduler on the specified model. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/CreateRetrainingScheduler">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRetrainingSchedulerOutcome CreateRetrainingScheduler(const Model::CreateRetrainingSchedulerRequest& request) const;

        /**
         * A Callable wrapper for CreateRetrainingScheduler that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateRetrainingSchedulerRequestT = Model::CreateRetrainingSchedulerRequest>
        Model::CreateRetrainingSchedulerOutcomeCallable CreateRetrainingSchedulerCallable(const CreateRetrainingSchedulerRequestT& request) const
        {
            return SubmitCallable(&LookoutEquipmentClient::CreateRetrainingScheduler, request);
        }

        /**
         * An Async wrapper for CreateRetrainingScheduler that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateRetrainingSchedulerRequestT = Model::CreateRetrainingSchedulerRequest>
        void CreateRetrainingSchedulerAsync(const CreateRetrainingSchedulerRequestT& request, const CreateRetrainingSchedulerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutEquipmentClient::CreateRetrainingScheduler, request, handler, context);
        }

        /**
         * <p> Deletes a dataset and associated artifacts. The operation will check to see
         * if any inference scheduler or data ingestion job is currently using the dataset,
         * and if there isn't, the dataset, its metadata, and any associated data stored in
         * S3 will be deleted. This does not affect any models that used this dataset for
         * training and evaluation, but does prevent it from being used in the future.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/DeleteDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDatasetOutcome DeleteDataset(const Model::DeleteDatasetRequest& request) const;

        /**
         * A Callable wrapper for DeleteDataset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDatasetRequestT = Model::DeleteDatasetRequest>
        Model::DeleteDatasetOutcomeCallable DeleteDatasetCallable(const DeleteDatasetRequestT& request) const
        {
            return SubmitCallable(&LookoutEquipmentClient::DeleteDataset, request);
        }

        /**
         * An Async wrapper for DeleteDataset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDatasetRequestT = Model::DeleteDatasetRequest>
        void DeleteDatasetAsync(const DeleteDatasetRequestT& request, const DeleteDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutEquipmentClient::DeleteDataset, request, handler, context);
        }

        /**
         * <p>Deletes an inference scheduler that has been set up. Prior inference results
         * will not be deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/DeleteInferenceScheduler">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInferenceSchedulerOutcome DeleteInferenceScheduler(const Model::DeleteInferenceSchedulerRequest& request) const;

        /**
         * A Callable wrapper for DeleteInferenceScheduler that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteInferenceSchedulerRequestT = Model::DeleteInferenceSchedulerRequest>
        Model::DeleteInferenceSchedulerOutcomeCallable DeleteInferenceSchedulerCallable(const DeleteInferenceSchedulerRequestT& request) const
        {
            return SubmitCallable(&LookoutEquipmentClient::DeleteInferenceScheduler, request);
        }

        /**
         * An Async wrapper for DeleteInferenceScheduler that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteInferenceSchedulerRequestT = Model::DeleteInferenceSchedulerRequest>
        void DeleteInferenceSchedulerAsync(const DeleteInferenceSchedulerRequestT& request, const DeleteInferenceSchedulerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutEquipmentClient::DeleteInferenceScheduler, request, handler, context);
        }

        /**
         * <p> Deletes a label. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/DeleteLabel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLabelOutcome DeleteLabel(const Model::DeleteLabelRequest& request) const;

        /**
         * A Callable wrapper for DeleteLabel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteLabelRequestT = Model::DeleteLabelRequest>
        Model::DeleteLabelOutcomeCallable DeleteLabelCallable(const DeleteLabelRequestT& request) const
        {
            return SubmitCallable(&LookoutEquipmentClient::DeleteLabel, request);
        }

        /**
         * An Async wrapper for DeleteLabel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteLabelRequestT = Model::DeleteLabelRequest>
        void DeleteLabelAsync(const DeleteLabelRequestT& request, const DeleteLabelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutEquipmentClient::DeleteLabel, request, handler, context);
        }

        /**
         * <p> Deletes a group of labels. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/DeleteLabelGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLabelGroupOutcome DeleteLabelGroup(const Model::DeleteLabelGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteLabelGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteLabelGroupRequestT = Model::DeleteLabelGroupRequest>
        Model::DeleteLabelGroupOutcomeCallable DeleteLabelGroupCallable(const DeleteLabelGroupRequestT& request) const
        {
            return SubmitCallable(&LookoutEquipmentClient::DeleteLabelGroup, request);
        }

        /**
         * An Async wrapper for DeleteLabelGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteLabelGroupRequestT = Model::DeleteLabelGroupRequest>
        void DeleteLabelGroupAsync(const DeleteLabelGroupRequestT& request, const DeleteLabelGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutEquipmentClient::DeleteLabelGroup, request, handler, context);
        }

        /**
         * <p>Deletes a machine learning model currently available for Amazon Lookout for
         * Equipment. This will prevent it from being used with an inference scheduler,
         * even one that is already set up. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/DeleteModel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteModelOutcome DeleteModel(const Model::DeleteModelRequest& request) const;

        /**
         * A Callable wrapper for DeleteModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteModelRequestT = Model::DeleteModelRequest>
        Model::DeleteModelOutcomeCallable DeleteModelCallable(const DeleteModelRequestT& request) const
        {
            return SubmitCallable(&LookoutEquipmentClient::DeleteModel, request);
        }

        /**
         * An Async wrapper for DeleteModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteModelRequestT = Model::DeleteModelRequest>
        void DeleteModelAsync(const DeleteModelRequestT& request, const DeleteModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutEquipmentClient::DeleteModel, request, handler, context);
        }

        /**
         * <p>Deletes the resource policy attached to the resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/DeleteResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourcePolicyOutcome DeleteResourcePolicy(const Model::DeleteResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteResourcePolicyRequestT = Model::DeleteResourcePolicyRequest>
        Model::DeleteResourcePolicyOutcomeCallable DeleteResourcePolicyCallable(const DeleteResourcePolicyRequestT& request) const
        {
            return SubmitCallable(&LookoutEquipmentClient::DeleteResourcePolicy, request);
        }

        /**
         * An Async wrapper for DeleteResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteResourcePolicyRequestT = Model::DeleteResourcePolicyRequest>
        void DeleteResourcePolicyAsync(const DeleteResourcePolicyRequestT& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutEquipmentClient::DeleteResourcePolicy, request, handler, context);
        }

        /**
         * <p>Deletes a retraining scheduler from a model. The retraining scheduler must be
         * in the <code>STOPPED</code> status. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/DeleteRetrainingScheduler">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRetrainingSchedulerOutcome DeleteRetrainingScheduler(const Model::DeleteRetrainingSchedulerRequest& request) const;

        /**
         * A Callable wrapper for DeleteRetrainingScheduler that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRetrainingSchedulerRequestT = Model::DeleteRetrainingSchedulerRequest>
        Model::DeleteRetrainingSchedulerOutcomeCallable DeleteRetrainingSchedulerCallable(const DeleteRetrainingSchedulerRequestT& request) const
        {
            return SubmitCallable(&LookoutEquipmentClient::DeleteRetrainingScheduler, request);
        }

        /**
         * An Async wrapper for DeleteRetrainingScheduler that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRetrainingSchedulerRequestT = Model::DeleteRetrainingSchedulerRequest>
        void DeleteRetrainingSchedulerAsync(const DeleteRetrainingSchedulerRequestT& request, const DeleteRetrainingSchedulerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutEquipmentClient::DeleteRetrainingScheduler, request, handler, context);
        }

        /**
         * <p>Provides information on a specific data ingestion job such as creation time,
         * dataset ARN, and status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/DescribeDataIngestionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDataIngestionJobOutcome DescribeDataIngestionJob(const Model::DescribeDataIngestionJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeDataIngestionJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDataIngestionJobRequestT = Model::DescribeDataIngestionJobRequest>
        Model::DescribeDataIngestionJobOutcomeCallable DescribeDataIngestionJobCallable(const DescribeDataIngestionJobRequestT& request) const
        {
            return SubmitCallable(&LookoutEquipmentClient::DescribeDataIngestionJob, request);
        }

        /**
         * An Async wrapper for DescribeDataIngestionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDataIngestionJobRequestT = Model::DescribeDataIngestionJobRequest>
        void DescribeDataIngestionJobAsync(const DescribeDataIngestionJobRequestT& request, const DescribeDataIngestionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutEquipmentClient::DescribeDataIngestionJob, request, handler, context);
        }

        /**
         * <p>Provides a JSON description of the data in each time series dataset,
         * including names, column names, and data types.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/DescribeDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDatasetOutcome DescribeDataset(const Model::DescribeDatasetRequest& request) const;

        /**
         * A Callable wrapper for DescribeDataset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDatasetRequestT = Model::DescribeDatasetRequest>
        Model::DescribeDatasetOutcomeCallable DescribeDatasetCallable(const DescribeDatasetRequestT& request) const
        {
            return SubmitCallable(&LookoutEquipmentClient::DescribeDataset, request);
        }

        /**
         * An Async wrapper for DescribeDataset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDatasetRequestT = Model::DescribeDatasetRequest>
        void DescribeDatasetAsync(const DescribeDatasetRequestT& request, const DescribeDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutEquipmentClient::DescribeDataset, request, handler, context);
        }

        /**
         * <p> Specifies information about the inference scheduler being used, including
         * name, model, status, and associated metadata </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/DescribeInferenceScheduler">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInferenceSchedulerOutcome DescribeInferenceScheduler(const Model::DescribeInferenceSchedulerRequest& request) const;

        /**
         * A Callable wrapper for DescribeInferenceScheduler that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeInferenceSchedulerRequestT = Model::DescribeInferenceSchedulerRequest>
        Model::DescribeInferenceSchedulerOutcomeCallable DescribeInferenceSchedulerCallable(const DescribeInferenceSchedulerRequestT& request) const
        {
            return SubmitCallable(&LookoutEquipmentClient::DescribeInferenceScheduler, request);
        }

        /**
         * An Async wrapper for DescribeInferenceScheduler that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeInferenceSchedulerRequestT = Model::DescribeInferenceSchedulerRequest>
        void DescribeInferenceSchedulerAsync(const DescribeInferenceSchedulerRequestT& request, const DescribeInferenceSchedulerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutEquipmentClient::DescribeInferenceScheduler, request, handler, context);
        }

        /**
         * <p> Returns the name of the label. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/DescribeLabel">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLabelOutcome DescribeLabel(const Model::DescribeLabelRequest& request) const;

        /**
         * A Callable wrapper for DescribeLabel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeLabelRequestT = Model::DescribeLabelRequest>
        Model::DescribeLabelOutcomeCallable DescribeLabelCallable(const DescribeLabelRequestT& request) const
        {
            return SubmitCallable(&LookoutEquipmentClient::DescribeLabel, request);
        }

        /**
         * An Async wrapper for DescribeLabel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeLabelRequestT = Model::DescribeLabelRequest>
        void DescribeLabelAsync(const DescribeLabelRequestT& request, const DescribeLabelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutEquipmentClient::DescribeLabel, request, handler, context);
        }

        /**
         * <p> Returns information about the label group. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/DescribeLabelGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLabelGroupOutcome DescribeLabelGroup(const Model::DescribeLabelGroupRequest& request) const;

        /**
         * A Callable wrapper for DescribeLabelGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeLabelGroupRequestT = Model::DescribeLabelGroupRequest>
        Model::DescribeLabelGroupOutcomeCallable DescribeLabelGroupCallable(const DescribeLabelGroupRequestT& request) const
        {
            return SubmitCallable(&LookoutEquipmentClient::DescribeLabelGroup, request);
        }

        /**
         * An Async wrapper for DescribeLabelGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeLabelGroupRequestT = Model::DescribeLabelGroupRequest>
        void DescribeLabelGroupAsync(const DescribeLabelGroupRequestT& request, const DescribeLabelGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutEquipmentClient::DescribeLabelGroup, request, handler, context);
        }

        /**
         * <p>Provides a JSON containing the overall information about a specific machine
         * learning model, including model name and ARN, dataset, training and evaluation
         * information, status, and so on. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/DescribeModel">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeModelOutcome DescribeModel(const Model::DescribeModelRequest& request) const;

        /**
         * A Callable wrapper for DescribeModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeModelRequestT = Model::DescribeModelRequest>
        Model::DescribeModelOutcomeCallable DescribeModelCallable(const DescribeModelRequestT& request) const
        {
            return SubmitCallable(&LookoutEquipmentClient::DescribeModel, request);
        }

        /**
         * An Async wrapper for DescribeModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeModelRequestT = Model::DescribeModelRequest>
        void DescribeModelAsync(const DescribeModelRequestT& request, const DescribeModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutEquipmentClient::DescribeModel, request, handler, context);
        }

        /**
         * <p>Retrieves information about a specific machine learning model
         * version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/DescribeModelVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeModelVersionOutcome DescribeModelVersion(const Model::DescribeModelVersionRequest& request) const;

        /**
         * A Callable wrapper for DescribeModelVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeModelVersionRequestT = Model::DescribeModelVersionRequest>
        Model::DescribeModelVersionOutcomeCallable DescribeModelVersionCallable(const DescribeModelVersionRequestT& request) const
        {
            return SubmitCallable(&LookoutEquipmentClient::DescribeModelVersion, request);
        }

        /**
         * An Async wrapper for DescribeModelVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeModelVersionRequestT = Model::DescribeModelVersionRequest>
        void DescribeModelVersionAsync(const DescribeModelVersionRequestT& request, const DescribeModelVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutEquipmentClient::DescribeModelVersion, request, handler, context);
        }

        /**
         * <p>Provides the details of a resource policy attached to a
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/DescribeResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeResourcePolicyOutcome DescribeResourcePolicy(const Model::DescribeResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for DescribeResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeResourcePolicyRequestT = Model::DescribeResourcePolicyRequest>
        Model::DescribeResourcePolicyOutcomeCallable DescribeResourcePolicyCallable(const DescribeResourcePolicyRequestT& request) const
        {
            return SubmitCallable(&LookoutEquipmentClient::DescribeResourcePolicy, request);
        }

        /**
         * An Async wrapper for DescribeResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeResourcePolicyRequestT = Model::DescribeResourcePolicyRequest>
        void DescribeResourcePolicyAsync(const DescribeResourcePolicyRequestT& request, const DescribeResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutEquipmentClient::DescribeResourcePolicy, request, handler, context);
        }

        /**
         * <p>Provides a description of the retraining scheduler, including information
         * such as the model name and retraining parameters. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/DescribeRetrainingScheduler">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRetrainingSchedulerOutcome DescribeRetrainingScheduler(const Model::DescribeRetrainingSchedulerRequest& request) const;

        /**
         * A Callable wrapper for DescribeRetrainingScheduler that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeRetrainingSchedulerRequestT = Model::DescribeRetrainingSchedulerRequest>
        Model::DescribeRetrainingSchedulerOutcomeCallable DescribeRetrainingSchedulerCallable(const DescribeRetrainingSchedulerRequestT& request) const
        {
            return SubmitCallable(&LookoutEquipmentClient::DescribeRetrainingScheduler, request);
        }

        /**
         * An Async wrapper for DescribeRetrainingScheduler that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeRetrainingSchedulerRequestT = Model::DescribeRetrainingSchedulerRequest>
        void DescribeRetrainingSchedulerAsync(const DescribeRetrainingSchedulerRequestT& request, const DescribeRetrainingSchedulerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutEquipmentClient::DescribeRetrainingScheduler, request, handler, context);
        }

        /**
         * <p>Imports a dataset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/ImportDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportDatasetOutcome ImportDataset(const Model::ImportDatasetRequest& request) const;

        /**
         * A Callable wrapper for ImportDataset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ImportDatasetRequestT = Model::ImportDatasetRequest>
        Model::ImportDatasetOutcomeCallable ImportDatasetCallable(const ImportDatasetRequestT& request) const
        {
            return SubmitCallable(&LookoutEquipmentClient::ImportDataset, request);
        }

        /**
         * An Async wrapper for ImportDataset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ImportDatasetRequestT = Model::ImportDatasetRequest>
        void ImportDatasetAsync(const ImportDatasetRequestT& request, const ImportDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutEquipmentClient::ImportDataset, request, handler, context);
        }

        /**
         * <p>Imports a model that has been trained successfully.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/ImportModelVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportModelVersionOutcome ImportModelVersion(const Model::ImportModelVersionRequest& request) const;

        /**
         * A Callable wrapper for ImportModelVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ImportModelVersionRequestT = Model::ImportModelVersionRequest>
        Model::ImportModelVersionOutcomeCallable ImportModelVersionCallable(const ImportModelVersionRequestT& request) const
        {
            return SubmitCallable(&LookoutEquipmentClient::ImportModelVersion, request);
        }

        /**
         * An Async wrapper for ImportModelVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ImportModelVersionRequestT = Model::ImportModelVersionRequest>
        void ImportModelVersionAsync(const ImportModelVersionRequestT& request, const ImportModelVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutEquipmentClient::ImportModelVersion, request, handler, context);
        }

        /**
         * <p>Provides a list of all data ingestion jobs, including dataset name and ARN,
         * S3 location of the input data, status, and so on. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/ListDataIngestionJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDataIngestionJobsOutcome ListDataIngestionJobs(const Model::ListDataIngestionJobsRequest& request) const;

        /**
         * A Callable wrapper for ListDataIngestionJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDataIngestionJobsRequestT = Model::ListDataIngestionJobsRequest>
        Model::ListDataIngestionJobsOutcomeCallable ListDataIngestionJobsCallable(const ListDataIngestionJobsRequestT& request) const
        {
            return SubmitCallable(&LookoutEquipmentClient::ListDataIngestionJobs, request);
        }

        /**
         * An Async wrapper for ListDataIngestionJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDataIngestionJobsRequestT = Model::ListDataIngestionJobsRequest>
        void ListDataIngestionJobsAsync(const ListDataIngestionJobsRequestT& request, const ListDataIngestionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutEquipmentClient::ListDataIngestionJobs, request, handler, context);
        }

        /**
         * <p>Lists all datasets currently available in your account, filtering on the
         * dataset name. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/ListDatasets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDatasetsOutcome ListDatasets(const Model::ListDatasetsRequest& request) const;

        /**
         * A Callable wrapper for ListDatasets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDatasetsRequestT = Model::ListDatasetsRequest>
        Model::ListDatasetsOutcomeCallable ListDatasetsCallable(const ListDatasetsRequestT& request) const
        {
            return SubmitCallable(&LookoutEquipmentClient::ListDatasets, request);
        }

        /**
         * An Async wrapper for ListDatasets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDatasetsRequestT = Model::ListDatasetsRequest>
        void ListDatasetsAsync(const ListDatasetsRequestT& request, const ListDatasetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutEquipmentClient::ListDatasets, request, handler, context);
        }

        /**
         * <p> Lists all inference events that have been found for the specified inference
         * scheduler. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/ListInferenceEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInferenceEventsOutcome ListInferenceEvents(const Model::ListInferenceEventsRequest& request) const;

        /**
         * A Callable wrapper for ListInferenceEvents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListInferenceEventsRequestT = Model::ListInferenceEventsRequest>
        Model::ListInferenceEventsOutcomeCallable ListInferenceEventsCallable(const ListInferenceEventsRequestT& request) const
        {
            return SubmitCallable(&LookoutEquipmentClient::ListInferenceEvents, request);
        }

        /**
         * An Async wrapper for ListInferenceEvents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListInferenceEventsRequestT = Model::ListInferenceEventsRequest>
        void ListInferenceEventsAsync(const ListInferenceEventsRequestT& request, const ListInferenceEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutEquipmentClient::ListInferenceEvents, request, handler, context);
        }

        /**
         * <p> Lists all inference executions that have been performed by the specified
         * inference scheduler. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/ListInferenceExecutions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInferenceExecutionsOutcome ListInferenceExecutions(const Model::ListInferenceExecutionsRequest& request) const;

        /**
         * A Callable wrapper for ListInferenceExecutions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListInferenceExecutionsRequestT = Model::ListInferenceExecutionsRequest>
        Model::ListInferenceExecutionsOutcomeCallable ListInferenceExecutionsCallable(const ListInferenceExecutionsRequestT& request) const
        {
            return SubmitCallable(&LookoutEquipmentClient::ListInferenceExecutions, request);
        }

        /**
         * An Async wrapper for ListInferenceExecutions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListInferenceExecutionsRequestT = Model::ListInferenceExecutionsRequest>
        void ListInferenceExecutionsAsync(const ListInferenceExecutionsRequestT& request, const ListInferenceExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutEquipmentClient::ListInferenceExecutions, request, handler, context);
        }

        /**
         * <p>Retrieves a list of all inference schedulers currently available for your
         * account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/ListInferenceSchedulers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInferenceSchedulersOutcome ListInferenceSchedulers(const Model::ListInferenceSchedulersRequest& request) const;

        /**
         * A Callable wrapper for ListInferenceSchedulers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListInferenceSchedulersRequestT = Model::ListInferenceSchedulersRequest>
        Model::ListInferenceSchedulersOutcomeCallable ListInferenceSchedulersCallable(const ListInferenceSchedulersRequestT& request) const
        {
            return SubmitCallable(&LookoutEquipmentClient::ListInferenceSchedulers, request);
        }

        /**
         * An Async wrapper for ListInferenceSchedulers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListInferenceSchedulersRequestT = Model::ListInferenceSchedulersRequest>
        void ListInferenceSchedulersAsync(const ListInferenceSchedulersRequestT& request, const ListInferenceSchedulersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutEquipmentClient::ListInferenceSchedulers, request, handler, context);
        }

        /**
         * <p> Returns a list of the label groups. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/ListLabelGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLabelGroupsOutcome ListLabelGroups(const Model::ListLabelGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListLabelGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListLabelGroupsRequestT = Model::ListLabelGroupsRequest>
        Model::ListLabelGroupsOutcomeCallable ListLabelGroupsCallable(const ListLabelGroupsRequestT& request) const
        {
            return SubmitCallable(&LookoutEquipmentClient::ListLabelGroups, request);
        }

        /**
         * An Async wrapper for ListLabelGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListLabelGroupsRequestT = Model::ListLabelGroupsRequest>
        void ListLabelGroupsAsync(const ListLabelGroupsRequestT& request, const ListLabelGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutEquipmentClient::ListLabelGroups, request, handler, context);
        }

        /**
         * <p> Provides a list of labels. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/ListLabels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLabelsOutcome ListLabels(const Model::ListLabelsRequest& request) const;

        /**
         * A Callable wrapper for ListLabels that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListLabelsRequestT = Model::ListLabelsRequest>
        Model::ListLabelsOutcomeCallable ListLabelsCallable(const ListLabelsRequestT& request) const
        {
            return SubmitCallable(&LookoutEquipmentClient::ListLabels, request);
        }

        /**
         * An Async wrapper for ListLabels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListLabelsRequestT = Model::ListLabelsRequest>
        void ListLabelsAsync(const ListLabelsRequestT& request, const ListLabelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutEquipmentClient::ListLabels, request, handler, context);
        }

        /**
         * <p>Generates a list of all model versions for a given model, including the model
         * version, model version ARN, and status. To list a subset of versions, use the
         * <code>MaxModelVersion</code> and <code>MinModelVersion</code>
         * fields.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/ListModelVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListModelVersionsOutcome ListModelVersions(const Model::ListModelVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListModelVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListModelVersionsRequestT = Model::ListModelVersionsRequest>
        Model::ListModelVersionsOutcomeCallable ListModelVersionsCallable(const ListModelVersionsRequestT& request) const
        {
            return SubmitCallable(&LookoutEquipmentClient::ListModelVersions, request);
        }

        /**
         * An Async wrapper for ListModelVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListModelVersionsRequestT = Model::ListModelVersionsRequest>
        void ListModelVersionsAsync(const ListModelVersionsRequestT& request, const ListModelVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutEquipmentClient::ListModelVersions, request, handler, context);
        }

        /**
         * <p>Generates a list of all models in the account, including model name and ARN,
         * dataset, and status. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/ListModels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListModelsOutcome ListModels(const Model::ListModelsRequest& request) const;

        /**
         * A Callable wrapper for ListModels that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListModelsRequestT = Model::ListModelsRequest>
        Model::ListModelsOutcomeCallable ListModelsCallable(const ListModelsRequestT& request) const
        {
            return SubmitCallable(&LookoutEquipmentClient::ListModels, request);
        }

        /**
         * An Async wrapper for ListModels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListModelsRequestT = Model::ListModelsRequest>
        void ListModelsAsync(const ListModelsRequestT& request, const ListModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutEquipmentClient::ListModels, request, handler, context);
        }

        /**
         * <p>Lists all retraining schedulers in your account, filtering by model name
         * prefix and status. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/ListRetrainingSchedulers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRetrainingSchedulersOutcome ListRetrainingSchedulers(const Model::ListRetrainingSchedulersRequest& request) const;

        /**
         * A Callable wrapper for ListRetrainingSchedulers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRetrainingSchedulersRequestT = Model::ListRetrainingSchedulersRequest>
        Model::ListRetrainingSchedulersOutcomeCallable ListRetrainingSchedulersCallable(const ListRetrainingSchedulersRequestT& request) const
        {
            return SubmitCallable(&LookoutEquipmentClient::ListRetrainingSchedulers, request);
        }

        /**
         * An Async wrapper for ListRetrainingSchedulers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRetrainingSchedulersRequestT = Model::ListRetrainingSchedulersRequest>
        void ListRetrainingSchedulersAsync(const ListRetrainingSchedulersRequestT& request, const ListRetrainingSchedulersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutEquipmentClient::ListRetrainingSchedulers, request, handler, context);
        }

        /**
         * <p> Lists statistics about the data collected for each of the sensors that have
         * been successfully ingested in the particular dataset. Can also be used to
         * retreive Sensor Statistics for a previous ingestion job. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/ListSensorStatistics">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSensorStatisticsOutcome ListSensorStatistics(const Model::ListSensorStatisticsRequest& request) const;

        /**
         * A Callable wrapper for ListSensorStatistics that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSensorStatisticsRequestT = Model::ListSensorStatisticsRequest>
        Model::ListSensorStatisticsOutcomeCallable ListSensorStatisticsCallable(const ListSensorStatisticsRequestT& request) const
        {
            return SubmitCallable(&LookoutEquipmentClient::ListSensorStatistics, request);
        }

        /**
         * An Async wrapper for ListSensorStatistics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSensorStatisticsRequestT = Model::ListSensorStatisticsRequest>
        void ListSensorStatisticsAsync(const ListSensorStatisticsRequestT& request, const ListSensorStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutEquipmentClient::ListSensorStatistics, request, handler, context);
        }

        /**
         * <p>Lists all the tags for a specified resource, including key and value.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&LookoutEquipmentClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutEquipmentClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Creates a resource control policy for a given resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/PutResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutResourcePolicyOutcome PutResourcePolicy(const Model::PutResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for PutResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutResourcePolicyRequestT = Model::PutResourcePolicyRequest>
        Model::PutResourcePolicyOutcomeCallable PutResourcePolicyCallable(const PutResourcePolicyRequestT& request) const
        {
            return SubmitCallable(&LookoutEquipmentClient::PutResourcePolicy, request);
        }

        /**
         * An Async wrapper for PutResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutResourcePolicyRequestT = Model::PutResourcePolicyRequest>
        void PutResourcePolicyAsync(const PutResourcePolicyRequestT& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutEquipmentClient::PutResourcePolicy, request, handler, context);
        }

        /**
         * <p>Starts a data ingestion job. Amazon Lookout for Equipment returns the job
         * status. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/StartDataIngestionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartDataIngestionJobOutcome StartDataIngestionJob(const Model::StartDataIngestionJobRequest& request) const;

        /**
         * A Callable wrapper for StartDataIngestionJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartDataIngestionJobRequestT = Model::StartDataIngestionJobRequest>
        Model::StartDataIngestionJobOutcomeCallable StartDataIngestionJobCallable(const StartDataIngestionJobRequestT& request) const
        {
            return SubmitCallable(&LookoutEquipmentClient::StartDataIngestionJob, request);
        }

        /**
         * An Async wrapper for StartDataIngestionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartDataIngestionJobRequestT = Model::StartDataIngestionJobRequest>
        void StartDataIngestionJobAsync(const StartDataIngestionJobRequestT& request, const StartDataIngestionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutEquipmentClient::StartDataIngestionJob, request, handler, context);
        }

        /**
         * <p>Starts an inference scheduler. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/StartInferenceScheduler">AWS
         * API Reference</a></p>
         */
        virtual Model::StartInferenceSchedulerOutcome StartInferenceScheduler(const Model::StartInferenceSchedulerRequest& request) const;

        /**
         * A Callable wrapper for StartInferenceScheduler that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartInferenceSchedulerRequestT = Model::StartInferenceSchedulerRequest>
        Model::StartInferenceSchedulerOutcomeCallable StartInferenceSchedulerCallable(const StartInferenceSchedulerRequestT& request) const
        {
            return SubmitCallable(&LookoutEquipmentClient::StartInferenceScheduler, request);
        }

        /**
         * An Async wrapper for StartInferenceScheduler that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartInferenceSchedulerRequestT = Model::StartInferenceSchedulerRequest>
        void StartInferenceSchedulerAsync(const StartInferenceSchedulerRequestT& request, const StartInferenceSchedulerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutEquipmentClient::StartInferenceScheduler, request, handler, context);
        }

        /**
         * <p>Starts a retraining scheduler. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/StartRetrainingScheduler">AWS
         * API Reference</a></p>
         */
        virtual Model::StartRetrainingSchedulerOutcome StartRetrainingScheduler(const Model::StartRetrainingSchedulerRequest& request) const;

        /**
         * A Callable wrapper for StartRetrainingScheduler that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartRetrainingSchedulerRequestT = Model::StartRetrainingSchedulerRequest>
        Model::StartRetrainingSchedulerOutcomeCallable StartRetrainingSchedulerCallable(const StartRetrainingSchedulerRequestT& request) const
        {
            return SubmitCallable(&LookoutEquipmentClient::StartRetrainingScheduler, request);
        }

        /**
         * An Async wrapper for StartRetrainingScheduler that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartRetrainingSchedulerRequestT = Model::StartRetrainingSchedulerRequest>
        void StartRetrainingSchedulerAsync(const StartRetrainingSchedulerRequestT& request, const StartRetrainingSchedulerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutEquipmentClient::StartRetrainingScheduler, request, handler, context);
        }

        /**
         * <p>Stops an inference scheduler. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/StopInferenceScheduler">AWS
         * API Reference</a></p>
         */
        virtual Model::StopInferenceSchedulerOutcome StopInferenceScheduler(const Model::StopInferenceSchedulerRequest& request) const;

        /**
         * A Callable wrapper for StopInferenceScheduler that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopInferenceSchedulerRequestT = Model::StopInferenceSchedulerRequest>
        Model::StopInferenceSchedulerOutcomeCallable StopInferenceSchedulerCallable(const StopInferenceSchedulerRequestT& request) const
        {
            return SubmitCallable(&LookoutEquipmentClient::StopInferenceScheduler, request);
        }

        /**
         * An Async wrapper for StopInferenceScheduler that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopInferenceSchedulerRequestT = Model::StopInferenceSchedulerRequest>
        void StopInferenceSchedulerAsync(const StopInferenceSchedulerRequestT& request, const StopInferenceSchedulerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutEquipmentClient::StopInferenceScheduler, request, handler, context);
        }

        /**
         * <p>Stops a retraining scheduler. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/StopRetrainingScheduler">AWS
         * API Reference</a></p>
         */
        virtual Model::StopRetrainingSchedulerOutcome StopRetrainingScheduler(const Model::StopRetrainingSchedulerRequest& request) const;

        /**
         * A Callable wrapper for StopRetrainingScheduler that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopRetrainingSchedulerRequestT = Model::StopRetrainingSchedulerRequest>
        Model::StopRetrainingSchedulerOutcomeCallable StopRetrainingSchedulerCallable(const StopRetrainingSchedulerRequestT& request) const
        {
            return SubmitCallable(&LookoutEquipmentClient::StopRetrainingScheduler, request);
        }

        /**
         * An Async wrapper for StopRetrainingScheduler that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopRetrainingSchedulerRequestT = Model::StopRetrainingSchedulerRequest>
        void StopRetrainingSchedulerAsync(const StopRetrainingSchedulerRequestT& request, const StopRetrainingSchedulerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutEquipmentClient::StopRetrainingScheduler, request, handler, context);
        }

        /**
         * <p>Associates a given tag to a resource in your account. A tag is a key-value
         * pair which can be added to an Amazon Lookout for Equipment resource as metadata.
         * Tags can be used for organizing your resources as well as helping you to search
         * and filter by tag. Multiple tags can be added to a resource, either when you
         * create it, or later. Up to 50 tags can be associated with each resource.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&LookoutEquipmentClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutEquipmentClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes a specific tag from a given resource. The tag is specified by its
         * key. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&LookoutEquipmentClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutEquipmentClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Sets the active model version for a given machine learning
         * model.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/UpdateActiveModelVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateActiveModelVersionOutcome UpdateActiveModelVersion(const Model::UpdateActiveModelVersionRequest& request) const;

        /**
         * A Callable wrapper for UpdateActiveModelVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateActiveModelVersionRequestT = Model::UpdateActiveModelVersionRequest>
        Model::UpdateActiveModelVersionOutcomeCallable UpdateActiveModelVersionCallable(const UpdateActiveModelVersionRequestT& request) const
        {
            return SubmitCallable(&LookoutEquipmentClient::UpdateActiveModelVersion, request);
        }

        /**
         * An Async wrapper for UpdateActiveModelVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateActiveModelVersionRequestT = Model::UpdateActiveModelVersionRequest>
        void UpdateActiveModelVersionAsync(const UpdateActiveModelVersionRequestT& request, const UpdateActiveModelVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutEquipmentClient::UpdateActiveModelVersion, request, handler, context);
        }

        /**
         * <p>Updates an inference scheduler. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/UpdateInferenceScheduler">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateInferenceSchedulerOutcome UpdateInferenceScheduler(const Model::UpdateInferenceSchedulerRequest& request) const;

        /**
         * A Callable wrapper for UpdateInferenceScheduler that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateInferenceSchedulerRequestT = Model::UpdateInferenceSchedulerRequest>
        Model::UpdateInferenceSchedulerOutcomeCallable UpdateInferenceSchedulerCallable(const UpdateInferenceSchedulerRequestT& request) const
        {
            return SubmitCallable(&LookoutEquipmentClient::UpdateInferenceScheduler, request);
        }

        /**
         * An Async wrapper for UpdateInferenceScheduler that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateInferenceSchedulerRequestT = Model::UpdateInferenceSchedulerRequest>
        void UpdateInferenceSchedulerAsync(const UpdateInferenceSchedulerRequestT& request, const UpdateInferenceSchedulerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutEquipmentClient::UpdateInferenceScheduler, request, handler, context);
        }

        /**
         * <p> Updates the label group. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/UpdateLabelGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLabelGroupOutcome UpdateLabelGroup(const Model::UpdateLabelGroupRequest& request) const;

        /**
         * A Callable wrapper for UpdateLabelGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateLabelGroupRequestT = Model::UpdateLabelGroupRequest>
        Model::UpdateLabelGroupOutcomeCallable UpdateLabelGroupCallable(const UpdateLabelGroupRequestT& request) const
        {
            return SubmitCallable(&LookoutEquipmentClient::UpdateLabelGroup, request);
        }

        /**
         * An Async wrapper for UpdateLabelGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateLabelGroupRequestT = Model::UpdateLabelGroupRequest>
        void UpdateLabelGroupAsync(const UpdateLabelGroupRequestT& request, const UpdateLabelGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutEquipmentClient::UpdateLabelGroup, request, handler, context);
        }

        /**
         * <p>Updates a model in the account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/UpdateModel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateModelOutcome UpdateModel(const Model::UpdateModelRequest& request) const;

        /**
         * A Callable wrapper for UpdateModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateModelRequestT = Model::UpdateModelRequest>
        Model::UpdateModelOutcomeCallable UpdateModelCallable(const UpdateModelRequestT& request) const
        {
            return SubmitCallable(&LookoutEquipmentClient::UpdateModel, request);
        }

        /**
         * An Async wrapper for UpdateModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateModelRequestT = Model::UpdateModelRequest>
        void UpdateModelAsync(const UpdateModelRequestT& request, const UpdateModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutEquipmentClient::UpdateModel, request, handler, context);
        }

        /**
         * <p>Updates a retraining scheduler. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/UpdateRetrainingScheduler">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRetrainingSchedulerOutcome UpdateRetrainingScheduler(const Model::UpdateRetrainingSchedulerRequest& request) const;

        /**
         * A Callable wrapper for UpdateRetrainingScheduler that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateRetrainingSchedulerRequestT = Model::UpdateRetrainingSchedulerRequest>
        Model::UpdateRetrainingSchedulerOutcomeCallable UpdateRetrainingSchedulerCallable(const UpdateRetrainingSchedulerRequestT& request) const
        {
            return SubmitCallable(&LookoutEquipmentClient::UpdateRetrainingScheduler, request);
        }

        /**
         * An Async wrapper for UpdateRetrainingScheduler that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateRetrainingSchedulerRequestT = Model::UpdateRetrainingSchedulerRequest>
        void UpdateRetrainingSchedulerAsync(const UpdateRetrainingSchedulerRequestT& request, const UpdateRetrainingSchedulerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutEquipmentClient::UpdateRetrainingScheduler, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<LookoutEquipmentEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<LookoutEquipmentClient>;
      void init(const LookoutEquipmentClientConfiguration& clientConfiguration);

      LookoutEquipmentClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<LookoutEquipmentEndpointProviderBase> m_endpointProvider;
  };

} // namespace LookoutEquipment
} // namespace Aws
