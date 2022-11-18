/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lookoutequipment/LookoutEquipmentServiceClientModel.h>
#include <aws/lookoutequipment/LookoutEquipmentLegacyAsyncMacros.h>

namespace Aws
{
namespace LookoutEquipment
{
  /**
   * <p>Amazon Lookout for Equipment is a machine learning service that uses advanced
   * analytics to identify anomalies in machines from sensor data for use in
   * predictive maintenance. </p>
   */
  class AWS_LOOKOUTEQUIPMENT_API LookoutEquipmentClient : public Aws::Client::AWSJsonClient
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
         * <p> Creates a label for an event. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/CreateLabel">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLabelOutcome CreateLabel(const Model::CreateLabelRequest& request) const;


        /**
         * <p> Creates a group of labels. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/CreateLabelGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLabelGroupOutcome CreateLabelGroup(const Model::CreateLabelGroupRequest& request) const;


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
         * <p>Deletes an inference scheduler that has been set up. Already processed output
         * results are not affected. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/DeleteInferenceScheduler">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInferenceSchedulerOutcome DeleteInferenceScheduler(const Model::DeleteInferenceSchedulerRequest& request) const;


        /**
         * <p> Deletes a label. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/DeleteLabel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLabelOutcome DeleteLabel(const Model::DeleteLabelRequest& request) const;


        /**
         * <p> Deletes a group of labels. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/DeleteLabelGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLabelGroupOutcome DeleteLabelGroup(const Model::DeleteLabelGroupRequest& request) const;


        /**
         * <p>Deletes an ML model currently available for Amazon Lookout for Equipment.
         * This will prevent it from being used with an inference scheduler, even one that
         * is already set up. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/DeleteModel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteModelOutcome DeleteModel(const Model::DeleteModelRequest& request) const;


        /**
         * <p>Provides information on a specific data ingestion job such as creation time,
         * dataset ARN, and status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/DescribeDataIngestionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDataIngestionJobOutcome DescribeDataIngestionJob(const Model::DescribeDataIngestionJobRequest& request) const;


        /**
         * <p>Provides a JSON description of the data in each time series dataset,
         * including names, column names, and data types.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/DescribeDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDatasetOutcome DescribeDataset(const Model::DescribeDatasetRequest& request) const;


        /**
         * <p> Specifies information about the inference scheduler being used, including
         * name, model, status, and associated metadata </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/DescribeInferenceScheduler">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInferenceSchedulerOutcome DescribeInferenceScheduler(const Model::DescribeInferenceSchedulerRequest& request) const;


        /**
         * <p> Returns the name of the label. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/DescribeLabel">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLabelOutcome DescribeLabel(const Model::DescribeLabelRequest& request) const;


        /**
         * <p> Returns information about the label group. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/DescribeLabelGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLabelGroupOutcome DescribeLabelGroup(const Model::DescribeLabelGroupRequest& request) const;


        /**
         * <p>Provides a JSON containing the overall information about a specific ML model,
         * including model name and ARN, dataset, training and evaluation information,
         * status, and so on. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/DescribeModel">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeModelOutcome DescribeModel(const Model::DescribeModelRequest& request) const;


        /**
         * <p>Provides a list of all data ingestion jobs, including dataset name and ARN,
         * S3 location of the input data, status, and so on. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/ListDataIngestionJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDataIngestionJobsOutcome ListDataIngestionJobs(const Model::ListDataIngestionJobsRequest& request) const;


        /**
         * <p>Lists all datasets currently available in your account, filtering on the
         * dataset name. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/ListDatasets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDatasetsOutcome ListDatasets(const Model::ListDatasetsRequest& request) const;


        /**
         * <p> Lists all inference events that have been found for the specified inference
         * scheduler. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/ListInferenceEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInferenceEventsOutcome ListInferenceEvents(const Model::ListInferenceEventsRequest& request) const;


        /**
         * <p> Lists all inference executions that have been performed by the specified
         * inference scheduler. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/ListInferenceExecutions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInferenceExecutionsOutcome ListInferenceExecutions(const Model::ListInferenceExecutionsRequest& request) const;


        /**
         * <p>Retrieves a list of all inference schedulers currently available for your
         * account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/ListInferenceSchedulers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInferenceSchedulersOutcome ListInferenceSchedulers(const Model::ListInferenceSchedulersRequest& request) const;


        /**
         * <p> Returns a list of the label groups. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/ListLabelGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLabelGroupsOutcome ListLabelGroups(const Model::ListLabelGroupsRequest& request) const;


        /**
         * <p> Provides a list of labels. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/ListLabels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLabelsOutcome ListLabels(const Model::ListLabelsRequest& request) const;


        /**
         * <p>Generates a list of all models in the account, including model name and ARN,
         * dataset, and status. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/ListModels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListModelsOutcome ListModels(const Model::ListModelsRequest& request) const;


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
         * <p>Lists all the tags for a specified resource, including key and value.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>Starts a data ingestion job. Amazon Lookout for Equipment returns the job
         * status. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/StartDataIngestionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartDataIngestionJobOutcome StartDataIngestionJob(const Model::StartDataIngestionJobRequest& request) const;


        /**
         * <p>Starts an inference scheduler. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/StartInferenceScheduler">AWS
         * API Reference</a></p>
         */
        virtual Model::StartInferenceSchedulerOutcome StartInferenceScheduler(const Model::StartInferenceSchedulerRequest& request) const;


        /**
         * <p>Stops an inference scheduler. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/StopInferenceScheduler">AWS
         * API Reference</a></p>
         */
        virtual Model::StopInferenceSchedulerOutcome StopInferenceScheduler(const Model::StopInferenceSchedulerRequest& request) const;


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
         * <p>Removes a specific tag from a given resource. The tag is specified by its
         * key. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Updates an inference scheduler. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/UpdateInferenceScheduler">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateInferenceSchedulerOutcome UpdateInferenceScheduler(const Model::UpdateInferenceSchedulerRequest& request) const;


        /**
         * <p> Updates the label group. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/UpdateLabelGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLabelGroupOutcome UpdateLabelGroup(const Model::UpdateLabelGroupRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<LookoutEquipmentEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const LookoutEquipmentClientConfiguration& clientConfiguration);

      LookoutEquipmentClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<LookoutEquipmentEndpointProviderBase> m_endpointProvider;
  };

} // namespace LookoutEquipment
} // namespace Aws
