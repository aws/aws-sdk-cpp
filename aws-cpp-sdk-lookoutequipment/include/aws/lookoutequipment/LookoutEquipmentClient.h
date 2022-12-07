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
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LookoutEquipmentClient(const Aws::LookoutEquipment::LookoutEquipmentClientConfiguration& clientConfiguration = Aws::LookoutEquipment::LookoutEquipmentClientConfiguration(),
                               std::shared_ptr<LookoutEquipmentEndpointProviderBase> endpointProvider = Aws::MakeShared<LookoutEquipmentEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LookoutEquipmentClient(const Aws::Auth::AWSCredentials& credentials,
                               std::shared_ptr<LookoutEquipmentEndpointProviderBase> endpointProvider = Aws::MakeShared<LookoutEquipmentEndpointProvider>(ALLOCATION_TAG),
                               const Aws::LookoutEquipment::LookoutEquipmentClientConfiguration& clientConfiguration = Aws::LookoutEquipment::LookoutEquipmentClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        LookoutEquipmentClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<LookoutEquipmentEndpointProviderBase> endpointProvider = Aws::MakeShared<LookoutEquipmentEndpointProvider>(ALLOCATION_TAG),
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
         * actually looks like. In other words, it contains the location of the data
         * source, the data schema, and other information. A dataset also contains any tags
         * associated with the ingested data. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/CreateDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDatasetOutcome CreateDataset(const Model::CreateDatasetRequest& request) const;

        /**
         * A Callable wrapper for CreateDataset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDatasetOutcomeCallable CreateDatasetCallable(const Model::CreateDatasetRequest& request) const;

        /**
         * An Async wrapper for CreateDataset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDatasetAsync(const Model::CreateDatasetRequest& request, const CreateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateInferenceSchedulerOutcomeCallable CreateInferenceSchedulerCallable(const Model::CreateInferenceSchedulerRequest& request) const;

        /**
         * An Async wrapper for CreateInferenceScheduler that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateInferenceSchedulerAsync(const Model::CreateInferenceSchedulerRequest& request, const CreateInferenceSchedulerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Creates a label for an event. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/CreateLabel">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLabelOutcome CreateLabel(const Model::CreateLabelRequest& request) const;

        /**
         * A Callable wrapper for CreateLabel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLabelOutcomeCallable CreateLabelCallable(const Model::CreateLabelRequest& request) const;

        /**
         * An Async wrapper for CreateLabel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLabelAsync(const Model::CreateLabelRequest& request, const CreateLabelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Creates a group of labels. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/CreateLabelGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLabelGroupOutcome CreateLabelGroup(const Model::CreateLabelGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateLabelGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLabelGroupOutcomeCallable CreateLabelGroupCallable(const Model::CreateLabelGroupRequest& request) const;

        /**
         * An Async wrapper for CreateLabelGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLabelGroupAsync(const Model::CreateLabelGroupRequest& request, const CreateLabelGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an ML model for data inference. </p> <p>A machine-learning (ML) model
         * is a mathematical model that finds patterns in your data. In Amazon Lookout for
         * Equipment, the model learns the patterns of normal behavior and detects abnormal
         * behavior that could be potential equipment failure (or maintenance events). The
         * models are made by analyzing normal data and abnormalities in machine behavior
         * that have already occurred.</p> <p>Your model is trained using a portion of the
         * data from your dataset and uses that data to learn patterns of normal behavior
         * and abnormal patterns that lead to equipment failure. Another portion of the
         * data is used to evaluate the model's accuracy. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/CreateModel">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateModelOutcome CreateModel(const Model::CreateModelRequest& request) const;

        /**
         * A Callable wrapper for CreateModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateModelOutcomeCallable CreateModelCallable(const Model::CreateModelRequest& request) const;

        /**
         * An Async wrapper for CreateModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateModelAsync(const Model::CreateModelRequest& request, const CreateModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteDatasetOutcomeCallable DeleteDatasetCallable(const Model::DeleteDatasetRequest& request) const;

        /**
         * An Async wrapper for DeleteDataset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDatasetAsync(const Model::DeleteDatasetRequest& request, const DeleteDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an inference scheduler that has been set up. Already processed output
         * results are not affected. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/DeleteInferenceScheduler">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInferenceSchedulerOutcome DeleteInferenceScheduler(const Model::DeleteInferenceSchedulerRequest& request) const;

        /**
         * A Callable wrapper for DeleteInferenceScheduler that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteInferenceSchedulerOutcomeCallable DeleteInferenceSchedulerCallable(const Model::DeleteInferenceSchedulerRequest& request) const;

        /**
         * An Async wrapper for DeleteInferenceScheduler that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteInferenceSchedulerAsync(const Model::DeleteInferenceSchedulerRequest& request, const DeleteInferenceSchedulerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Deletes a label. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/DeleteLabel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLabelOutcome DeleteLabel(const Model::DeleteLabelRequest& request) const;

        /**
         * A Callable wrapper for DeleteLabel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLabelOutcomeCallable DeleteLabelCallable(const Model::DeleteLabelRequest& request) const;

        /**
         * An Async wrapper for DeleteLabel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLabelAsync(const Model::DeleteLabelRequest& request, const DeleteLabelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Deletes a group of labels. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/DeleteLabelGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLabelGroupOutcome DeleteLabelGroup(const Model::DeleteLabelGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteLabelGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLabelGroupOutcomeCallable DeleteLabelGroupCallable(const Model::DeleteLabelGroupRequest& request) const;

        /**
         * An Async wrapper for DeleteLabelGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLabelGroupAsync(const Model::DeleteLabelGroupRequest& request, const DeleteLabelGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an ML model currently available for Amazon Lookout for Equipment.
         * This will prevent it from being used with an inference scheduler, even one that
         * is already set up. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/DeleteModel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteModelOutcome DeleteModel(const Model::DeleteModelRequest& request) const;

        /**
         * A Callable wrapper for DeleteModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteModelOutcomeCallable DeleteModelCallable(const Model::DeleteModelRequest& request) const;

        /**
         * An Async wrapper for DeleteModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteModelAsync(const Model::DeleteModelRequest& request, const DeleteModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeDataIngestionJobOutcomeCallable DescribeDataIngestionJobCallable(const Model::DescribeDataIngestionJobRequest& request) const;

        /**
         * An Async wrapper for DescribeDataIngestionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDataIngestionJobAsync(const Model::DescribeDataIngestionJobRequest& request, const DescribeDataIngestionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeDatasetOutcomeCallable DescribeDatasetCallable(const Model::DescribeDatasetRequest& request) const;

        /**
         * An Async wrapper for DescribeDataset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDatasetAsync(const Model::DescribeDatasetRequest& request, const DescribeDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeInferenceSchedulerOutcomeCallable DescribeInferenceSchedulerCallable(const Model::DescribeInferenceSchedulerRequest& request) const;

        /**
         * An Async wrapper for DescribeInferenceScheduler that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInferenceSchedulerAsync(const Model::DescribeInferenceSchedulerRequest& request, const DescribeInferenceSchedulerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns the name of the label. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/DescribeLabel">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLabelOutcome DescribeLabel(const Model::DescribeLabelRequest& request) const;

        /**
         * A Callable wrapper for DescribeLabel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLabelOutcomeCallable DescribeLabelCallable(const Model::DescribeLabelRequest& request) const;

        /**
         * An Async wrapper for DescribeLabel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLabelAsync(const Model::DescribeLabelRequest& request, const DescribeLabelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns information about the label group. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/DescribeLabelGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLabelGroupOutcome DescribeLabelGroup(const Model::DescribeLabelGroupRequest& request) const;

        /**
         * A Callable wrapper for DescribeLabelGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLabelGroupOutcomeCallable DescribeLabelGroupCallable(const Model::DescribeLabelGroupRequest& request) const;

        /**
         * An Async wrapper for DescribeLabelGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLabelGroupAsync(const Model::DescribeLabelGroupRequest& request, const DescribeLabelGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides a JSON containing the overall information about a specific ML model,
         * including model name and ARN, dataset, training and evaluation information,
         * status, and so on. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/DescribeModel">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeModelOutcome DescribeModel(const Model::DescribeModelRequest& request) const;

        /**
         * A Callable wrapper for DescribeModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeModelOutcomeCallable DescribeModelCallable(const Model::DescribeModelRequest& request) const;

        /**
         * An Async wrapper for DescribeModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeModelAsync(const Model::DescribeModelRequest& request, const DescribeModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListDataIngestionJobsOutcomeCallable ListDataIngestionJobsCallable(const Model::ListDataIngestionJobsRequest& request) const;

        /**
         * An Async wrapper for ListDataIngestionJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDataIngestionJobsAsync(const Model::ListDataIngestionJobsRequest& request, const ListDataIngestionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListDatasetsOutcomeCallable ListDatasetsCallable(const Model::ListDatasetsRequest& request) const;

        /**
         * An Async wrapper for ListDatasets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDatasetsAsync(const Model::ListDatasetsRequest& request, const ListDatasetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListInferenceEventsOutcomeCallable ListInferenceEventsCallable(const Model::ListInferenceEventsRequest& request) const;

        /**
         * An Async wrapper for ListInferenceEvents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListInferenceEventsAsync(const Model::ListInferenceEventsRequest& request, const ListInferenceEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListInferenceExecutionsOutcomeCallable ListInferenceExecutionsCallable(const Model::ListInferenceExecutionsRequest& request) const;

        /**
         * An Async wrapper for ListInferenceExecutions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListInferenceExecutionsAsync(const Model::ListInferenceExecutionsRequest& request, const ListInferenceExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListInferenceSchedulersOutcomeCallable ListInferenceSchedulersCallable(const Model::ListInferenceSchedulersRequest& request) const;

        /**
         * An Async wrapper for ListInferenceSchedulers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListInferenceSchedulersAsync(const Model::ListInferenceSchedulersRequest& request, const ListInferenceSchedulersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of the label groups. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/ListLabelGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLabelGroupsOutcome ListLabelGroups(const Model::ListLabelGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListLabelGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListLabelGroupsOutcomeCallable ListLabelGroupsCallable(const Model::ListLabelGroupsRequest& request) const;

        /**
         * An Async wrapper for ListLabelGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListLabelGroupsAsync(const Model::ListLabelGroupsRequest& request, const ListLabelGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Provides a list of labels. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/ListLabels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLabelsOutcome ListLabels(const Model::ListLabelsRequest& request) const;

        /**
         * A Callable wrapper for ListLabels that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListLabelsOutcomeCallable ListLabelsCallable(const Model::ListLabelsRequest& request) const;

        /**
         * An Async wrapper for ListLabels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListLabelsAsync(const Model::ListLabelsRequest& request, const ListLabelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListModelsOutcomeCallable ListModelsCallable(const Model::ListModelsRequest& request) const;

        /**
         * An Async wrapper for ListModels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListModelsAsync(const Model::ListModelsRequest& request, const ListModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListSensorStatisticsOutcomeCallable ListSensorStatisticsCallable(const Model::ListSensorStatisticsRequest& request) const;

        /**
         * An Async wrapper for ListSensorStatistics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSensorStatisticsAsync(const Model::ListSensorStatisticsRequest& request, const ListSensorStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::StartDataIngestionJobOutcomeCallable StartDataIngestionJobCallable(const Model::StartDataIngestionJobRequest& request) const;

        /**
         * An Async wrapper for StartDataIngestionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartDataIngestionJobAsync(const Model::StartDataIngestionJobRequest& request, const StartDataIngestionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts an inference scheduler. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/StartInferenceScheduler">AWS
         * API Reference</a></p>
         */
        virtual Model::StartInferenceSchedulerOutcome StartInferenceScheduler(const Model::StartInferenceSchedulerRequest& request) const;

        /**
         * A Callable wrapper for StartInferenceScheduler that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartInferenceSchedulerOutcomeCallable StartInferenceSchedulerCallable(const Model::StartInferenceSchedulerRequest& request) const;

        /**
         * An Async wrapper for StartInferenceScheduler that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartInferenceSchedulerAsync(const Model::StartInferenceSchedulerRequest& request, const StartInferenceSchedulerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops an inference scheduler. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/StopInferenceScheduler">AWS
         * API Reference</a></p>
         */
        virtual Model::StopInferenceSchedulerOutcome StopInferenceScheduler(const Model::StopInferenceSchedulerRequest& request) const;

        /**
         * A Callable wrapper for StopInferenceScheduler that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopInferenceSchedulerOutcomeCallable StopInferenceSchedulerCallable(const Model::StopInferenceSchedulerRequest& request) const;

        /**
         * An Async wrapper for StopInferenceScheduler that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopInferenceSchedulerAsync(const Model::StopInferenceSchedulerRequest& request, const StopInferenceSchedulerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an inference scheduler. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/UpdateInferenceScheduler">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateInferenceSchedulerOutcome UpdateInferenceScheduler(const Model::UpdateInferenceSchedulerRequest& request) const;

        /**
         * A Callable wrapper for UpdateInferenceScheduler that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateInferenceSchedulerOutcomeCallable UpdateInferenceSchedulerCallable(const Model::UpdateInferenceSchedulerRequest& request) const;

        /**
         * An Async wrapper for UpdateInferenceScheduler that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateInferenceSchedulerAsync(const Model::UpdateInferenceSchedulerRequest& request, const UpdateInferenceSchedulerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Updates the label group. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/UpdateLabelGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLabelGroupOutcome UpdateLabelGroup(const Model::UpdateLabelGroupRequest& request) const;

        /**
         * A Callable wrapper for UpdateLabelGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateLabelGroupOutcomeCallable UpdateLabelGroupCallable(const Model::UpdateLabelGroupRequest& request) const;

        /**
         * An Async wrapper for UpdateLabelGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateLabelGroupAsync(const Model::UpdateLabelGroupRequest& request, const UpdateLabelGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


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
