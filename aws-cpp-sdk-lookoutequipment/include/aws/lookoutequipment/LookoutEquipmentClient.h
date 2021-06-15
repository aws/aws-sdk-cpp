/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/lookoutequipment/LookoutEquipmentErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lookoutequipment/model/CreateDatasetResult.h>
#include <aws/lookoutequipment/model/CreateInferenceSchedulerResult.h>
#include <aws/lookoutequipment/model/CreateModelResult.h>
#include <aws/lookoutequipment/model/DescribeDataIngestionJobResult.h>
#include <aws/lookoutequipment/model/DescribeDatasetResult.h>
#include <aws/lookoutequipment/model/DescribeInferenceSchedulerResult.h>
#include <aws/lookoutequipment/model/DescribeModelResult.h>
#include <aws/lookoutequipment/model/ListDataIngestionJobsResult.h>
#include <aws/lookoutequipment/model/ListDatasetsResult.h>
#include <aws/lookoutequipment/model/ListInferenceExecutionsResult.h>
#include <aws/lookoutequipment/model/ListInferenceSchedulersResult.h>
#include <aws/lookoutequipment/model/ListModelsResult.h>
#include <aws/lookoutequipment/model/ListTagsForResourceResult.h>
#include <aws/lookoutequipment/model/StartDataIngestionJobResult.h>
#include <aws/lookoutequipment/model/StartInferenceSchedulerResult.h>
#include <aws/lookoutequipment/model/StopInferenceSchedulerResult.h>
#include <aws/lookoutequipment/model/TagResourceResult.h>
#include <aws/lookoutequipment/model/UntagResourceResult.h>
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

namespace LookoutEquipment
{

namespace Model
{
        class CreateDatasetRequest;
        class CreateInferenceSchedulerRequest;
        class CreateModelRequest;
        class DeleteDatasetRequest;
        class DeleteInferenceSchedulerRequest;
        class DeleteModelRequest;
        class DescribeDataIngestionJobRequest;
        class DescribeDatasetRequest;
        class DescribeInferenceSchedulerRequest;
        class DescribeModelRequest;
        class ListDataIngestionJobsRequest;
        class ListDatasetsRequest;
        class ListInferenceExecutionsRequest;
        class ListInferenceSchedulersRequest;
        class ListModelsRequest;
        class ListTagsForResourceRequest;
        class StartDataIngestionJobRequest;
        class StartInferenceSchedulerRequest;
        class StopInferenceSchedulerRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateInferenceSchedulerRequest;

        typedef Aws::Utils::Outcome<CreateDatasetResult, LookoutEquipmentError> CreateDatasetOutcome;
        typedef Aws::Utils::Outcome<CreateInferenceSchedulerResult, LookoutEquipmentError> CreateInferenceSchedulerOutcome;
        typedef Aws::Utils::Outcome<CreateModelResult, LookoutEquipmentError> CreateModelOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, LookoutEquipmentError> DeleteDatasetOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, LookoutEquipmentError> DeleteInferenceSchedulerOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, LookoutEquipmentError> DeleteModelOutcome;
        typedef Aws::Utils::Outcome<DescribeDataIngestionJobResult, LookoutEquipmentError> DescribeDataIngestionJobOutcome;
        typedef Aws::Utils::Outcome<DescribeDatasetResult, LookoutEquipmentError> DescribeDatasetOutcome;
        typedef Aws::Utils::Outcome<DescribeInferenceSchedulerResult, LookoutEquipmentError> DescribeInferenceSchedulerOutcome;
        typedef Aws::Utils::Outcome<DescribeModelResult, LookoutEquipmentError> DescribeModelOutcome;
        typedef Aws::Utils::Outcome<ListDataIngestionJobsResult, LookoutEquipmentError> ListDataIngestionJobsOutcome;
        typedef Aws::Utils::Outcome<ListDatasetsResult, LookoutEquipmentError> ListDatasetsOutcome;
        typedef Aws::Utils::Outcome<ListInferenceExecutionsResult, LookoutEquipmentError> ListInferenceExecutionsOutcome;
        typedef Aws::Utils::Outcome<ListInferenceSchedulersResult, LookoutEquipmentError> ListInferenceSchedulersOutcome;
        typedef Aws::Utils::Outcome<ListModelsResult, LookoutEquipmentError> ListModelsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, LookoutEquipmentError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<StartDataIngestionJobResult, LookoutEquipmentError> StartDataIngestionJobOutcome;
        typedef Aws::Utils::Outcome<StartInferenceSchedulerResult, LookoutEquipmentError> StartInferenceSchedulerOutcome;
        typedef Aws::Utils::Outcome<StopInferenceSchedulerResult, LookoutEquipmentError> StopInferenceSchedulerOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, LookoutEquipmentError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, LookoutEquipmentError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, LookoutEquipmentError> UpdateInferenceSchedulerOutcome;

        typedef std::future<CreateDatasetOutcome> CreateDatasetOutcomeCallable;
        typedef std::future<CreateInferenceSchedulerOutcome> CreateInferenceSchedulerOutcomeCallable;
        typedef std::future<CreateModelOutcome> CreateModelOutcomeCallable;
        typedef std::future<DeleteDatasetOutcome> DeleteDatasetOutcomeCallable;
        typedef std::future<DeleteInferenceSchedulerOutcome> DeleteInferenceSchedulerOutcomeCallable;
        typedef std::future<DeleteModelOutcome> DeleteModelOutcomeCallable;
        typedef std::future<DescribeDataIngestionJobOutcome> DescribeDataIngestionJobOutcomeCallable;
        typedef std::future<DescribeDatasetOutcome> DescribeDatasetOutcomeCallable;
        typedef std::future<DescribeInferenceSchedulerOutcome> DescribeInferenceSchedulerOutcomeCallable;
        typedef std::future<DescribeModelOutcome> DescribeModelOutcomeCallable;
        typedef std::future<ListDataIngestionJobsOutcome> ListDataIngestionJobsOutcomeCallable;
        typedef std::future<ListDatasetsOutcome> ListDatasetsOutcomeCallable;
        typedef std::future<ListInferenceExecutionsOutcome> ListInferenceExecutionsOutcomeCallable;
        typedef std::future<ListInferenceSchedulersOutcome> ListInferenceSchedulersOutcomeCallable;
        typedef std::future<ListModelsOutcome> ListModelsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<StartDataIngestionJobOutcome> StartDataIngestionJobOutcomeCallable;
        typedef std::future<StartInferenceSchedulerOutcome> StartInferenceSchedulerOutcomeCallable;
        typedef std::future<StopInferenceSchedulerOutcome> StopInferenceSchedulerOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateInferenceSchedulerOutcome> UpdateInferenceSchedulerOutcomeCallable;
} // namespace Model

  class LookoutEquipmentClient;

    typedef std::function<void(const LookoutEquipmentClient*, const Model::CreateDatasetRequest&, const Model::CreateDatasetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDatasetResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::CreateInferenceSchedulerRequest&, const Model::CreateInferenceSchedulerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateInferenceSchedulerResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::CreateModelRequest&, const Model::CreateModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateModelResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::DeleteDatasetRequest&, const Model::DeleteDatasetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDatasetResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::DeleteInferenceSchedulerRequest&, const Model::DeleteInferenceSchedulerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInferenceSchedulerResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::DeleteModelRequest&, const Model::DeleteModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteModelResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::DescribeDataIngestionJobRequest&, const Model::DescribeDataIngestionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDataIngestionJobResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::DescribeDatasetRequest&, const Model::DescribeDatasetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDatasetResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::DescribeInferenceSchedulerRequest&, const Model::DescribeInferenceSchedulerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInferenceSchedulerResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::DescribeModelRequest&, const Model::DescribeModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeModelResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::ListDataIngestionJobsRequest&, const Model::ListDataIngestionJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDataIngestionJobsResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::ListDatasetsRequest&, const Model::ListDatasetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDatasetsResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::ListInferenceExecutionsRequest&, const Model::ListInferenceExecutionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInferenceExecutionsResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::ListInferenceSchedulersRequest&, const Model::ListInferenceSchedulersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInferenceSchedulersResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::ListModelsRequest&, const Model::ListModelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListModelsResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::StartDataIngestionJobRequest&, const Model::StartDataIngestionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartDataIngestionJobResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::StartInferenceSchedulerRequest&, const Model::StartInferenceSchedulerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartInferenceSchedulerResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::StopInferenceSchedulerRequest&, const Model::StopInferenceSchedulerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopInferenceSchedulerResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::UpdateInferenceSchedulerRequest&, const Model::UpdateInferenceSchedulerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateInferenceSchedulerResponseReceivedHandler;

  /**
   * <p>Amazon Lookout for Equipment is a machine learning service that uses advanced
   * analytics to identify anomalies in machines from sensor data for use in
   * predictive maintenance. </p>
   */
  class AWS_LOOKOUTEQUIPMENT_API LookoutEquipmentClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LookoutEquipmentClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LookoutEquipmentClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        LookoutEquipmentClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

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
         * <p>Creates a container for a collection of data being ingested for analysis. The
         * dataset contains the metadata describing where the data is and what the data
         * actually looks like. In other words, it contains the location of the data
         * source, the data schema, and other information. A dataset also contains any tags
         * associated with the ingested data. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/CreateDataset">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDatasetOutcomeCallable CreateDatasetCallable(const Model::CreateDatasetRequest& request) const;

        /**
         * <p>Creates a container for a collection of data being ingested for analysis. The
         * dataset contains the metadata describing where the data is and what the data
         * actually looks like. In other words, it contains the location of the data
         * source, the data schema, and other information. A dataset also contains any tags
         * associated with the ingested data. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/CreateDataset">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p> Creates a scheduled inference. Scheduling an inference is setting up a
         * continuous real-time inference plan to analyze new measurement data. When
         * setting up the schedule, you provide an S3 bucket location for the input data,
         * assign it a delimiter between separate entries in the data, set an offset delay
         * if desired, and set the frequency of inferencing. You must also provide an S3
         * bucket location for the output data. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/CreateInferenceScheduler">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateInferenceSchedulerOutcomeCallable CreateInferenceSchedulerCallable(const Model::CreateInferenceSchedulerRequest& request) const;

        /**
         * <p> Creates a scheduled inference. Scheduling an inference is setting up a
         * continuous real-time inference plan to analyze new measurement data. When
         * setting up the schedule, you provide an S3 bucket location for the input data,
         * assign it a delimiter between separate entries in the data, set an offset delay
         * if desired, and set the frequency of inferencing. You must also provide an S3
         * bucket location for the output data. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/CreateInferenceScheduler">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateInferenceSchedulerAsync(const Model::CreateInferenceSchedulerRequest& request, const CreateInferenceSchedulerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateModelOutcomeCallable CreateModelCallable(const Model::CreateModelRequest& request) const;

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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p> Deletes a dataset and associated artifacts. The operation will check to see
         * if any inference scheduler or data ingestion job is currently using the dataset,
         * and if there isn't, the dataset, its metadata, and any associated data stored in
         * S3 will be deleted. This does not affect any models that used this dataset for
         * training and evaluation, but does prevent it from being used in the future.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/DeleteDataset">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDatasetOutcomeCallable DeleteDatasetCallable(const Model::DeleteDatasetRequest& request) const;

        /**
         * <p> Deletes a dataset and associated artifacts. The operation will check to see
         * if any inference scheduler or data ingestion job is currently using the dataset,
         * and if there isn't, the dataset, its metadata, and any associated data stored in
         * S3 will be deleted. This does not affect any models that used this dataset for
         * training and evaluation, but does prevent it from being used in the future.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/DeleteDataset">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Deletes an inference scheduler that has been set up. Already processed output
         * results are not affected. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/DeleteInferenceScheduler">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteInferenceSchedulerOutcomeCallable DeleteInferenceSchedulerCallable(const Model::DeleteInferenceSchedulerRequest& request) const;

        /**
         * <p>Deletes an inference scheduler that has been set up. Already processed output
         * results are not affected. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/DeleteInferenceScheduler">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteInferenceSchedulerAsync(const Model::DeleteInferenceSchedulerRequest& request, const DeleteInferenceSchedulerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an ML model currently available for Amazon Lookout for Equipment.
         * This will prevent it from being used with an inference scheduler, even one that
         * is already set up. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/DeleteModel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteModelOutcome DeleteModel(const Model::DeleteModelRequest& request) const;

        /**
         * <p>Deletes an ML model currently available for Amazon Lookout for Equipment.
         * This will prevent it from being used with an inference scheduler, even one that
         * is already set up. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/DeleteModel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteModelOutcomeCallable DeleteModelCallable(const Model::DeleteModelRequest& request) const;

        /**
         * <p>Deletes an ML model currently available for Amazon Lookout for Equipment.
         * This will prevent it from being used with an inference scheduler, even one that
         * is already set up. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/DeleteModel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteModelAsync(const Model::DeleteModelRequest& request, const DeleteModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides information on a specific data ingestion job such as creation time,
         * dataset ARN, status, and so on. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/DescribeDataIngestionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDataIngestionJobOutcome DescribeDataIngestionJob(const Model::DescribeDataIngestionJobRequest& request) const;

        /**
         * <p>Provides information on a specific data ingestion job such as creation time,
         * dataset ARN, status, and so on. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/DescribeDataIngestionJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDataIngestionJobOutcomeCallable DescribeDataIngestionJobCallable(const Model::DescribeDataIngestionJobRequest& request) const;

        /**
         * <p>Provides information on a specific data ingestion job such as creation time,
         * dataset ARN, status, and so on. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/DescribeDataIngestionJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDataIngestionJobAsync(const Model::DescribeDataIngestionJobRequest& request, const DescribeDataIngestionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides information on a specified dataset such as the schema location,
         * status, and so on.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/DescribeDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDatasetOutcome DescribeDataset(const Model::DescribeDatasetRequest& request) const;

        /**
         * <p>Provides information on a specified dataset such as the schema location,
         * status, and so on.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/DescribeDataset">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDatasetOutcomeCallable DescribeDatasetCallable(const Model::DescribeDatasetRequest& request) const;

        /**
         * <p>Provides information on a specified dataset such as the schema location,
         * status, and so on.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/DescribeDataset">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p> Specifies information about the inference scheduler being used, including
         * name, model, status, and associated metadata </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/DescribeInferenceScheduler">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInferenceSchedulerOutcomeCallable DescribeInferenceSchedulerCallable(const Model::DescribeInferenceSchedulerRequest& request) const;

        /**
         * <p> Specifies information about the inference scheduler being used, including
         * name, model, status, and associated metadata </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/DescribeInferenceScheduler">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInferenceSchedulerAsync(const Model::DescribeInferenceSchedulerRequest& request, const DescribeInferenceSchedulerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides overall information about a specific ML model, including model name
         * and ARN, dataset, training and evaluation information, status, and so on.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/DescribeModel">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeModelOutcome DescribeModel(const Model::DescribeModelRequest& request) const;

        /**
         * <p>Provides overall information about a specific ML model, including model name
         * and ARN, dataset, training and evaluation information, status, and so on.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/DescribeModel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeModelOutcomeCallable DescribeModelCallable(const Model::DescribeModelRequest& request) const;

        /**
         * <p>Provides overall information about a specific ML model, including model name
         * and ARN, dataset, training and evaluation information, status, and so on.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/DescribeModel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Provides a list of all data ingestion jobs, including dataset name and ARN,
         * S3 location of the input data, status, and so on. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/ListDataIngestionJobs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDataIngestionJobsOutcomeCallable ListDataIngestionJobsCallable(const Model::ListDataIngestionJobsRequest& request) const;

        /**
         * <p>Provides a list of all data ingestion jobs, including dataset name and ARN,
         * S3 location of the input data, status, and so on. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/ListDataIngestionJobs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Lists all datasets currently available in your account, filtering on the
         * dataset name. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/ListDatasets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDatasetsOutcomeCallable ListDatasetsCallable(const Model::ListDatasetsRequest& request) const;

        /**
         * <p>Lists all datasets currently available in your account, filtering on the
         * dataset name. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/ListDatasets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDatasetsAsync(const Model::ListDatasetsRequest& request, const ListDatasetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Lists all inference executions that have been performed by the specified
         * inference scheduler. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/ListInferenceExecutions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInferenceExecutionsOutcome ListInferenceExecutions(const Model::ListInferenceExecutionsRequest& request) const;

        /**
         * <p> Lists all inference executions that have been performed by the specified
         * inference scheduler. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/ListInferenceExecutions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListInferenceExecutionsOutcomeCallable ListInferenceExecutionsCallable(const Model::ListInferenceExecutionsRequest& request) const;

        /**
         * <p> Lists all inference executions that have been performed by the specified
         * inference scheduler. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/ListInferenceExecutions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Retrieves a list of all inference schedulers currently available for your
         * account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/ListInferenceSchedulers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListInferenceSchedulersOutcomeCallable ListInferenceSchedulersCallable(const Model::ListInferenceSchedulersRequest& request) const;

        /**
         * <p>Retrieves a list of all inference schedulers currently available for your
         * account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/ListInferenceSchedulers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListInferenceSchedulersAsync(const Model::ListInferenceSchedulersRequest& request, const ListInferenceSchedulersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Generates a list of all models in the account, including model name and ARN,
         * dataset, and status. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/ListModels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListModelsOutcome ListModels(const Model::ListModelsRequest& request) const;

        /**
         * <p>Generates a list of all models in the account, including model name and ARN,
         * dataset, and status. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/ListModels">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListModelsOutcomeCallable ListModelsCallable(const Model::ListModelsRequest& request) const;

        /**
         * <p>Generates a list of all models in the account, including model name and ARN,
         * dataset, and status. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/ListModels">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListModelsAsync(const Model::ListModelsRequest& request, const ListModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all the tags for a specified resource, including key and value.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists all the tags for a specified resource, including key and value.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists all the tags for a specified resource, including key and value.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Starts a data ingestion job. Amazon Lookout for Equipment returns the job
         * status. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/StartDataIngestionJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartDataIngestionJobOutcomeCallable StartDataIngestionJobCallable(const Model::StartDataIngestionJobRequest& request) const;

        /**
         * <p>Starts a data ingestion job. Amazon Lookout for Equipment returns the job
         * status. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/StartDataIngestionJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartDataIngestionJobAsync(const Model::StartDataIngestionJobRequest& request, const StartDataIngestionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts an inference scheduler. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/StartInferenceScheduler">AWS
         * API Reference</a></p>
         */
        virtual Model::StartInferenceSchedulerOutcome StartInferenceScheduler(const Model::StartInferenceSchedulerRequest& request) const;

        /**
         * <p>Starts an inference scheduler. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/StartInferenceScheduler">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartInferenceSchedulerOutcomeCallable StartInferenceSchedulerCallable(const Model::StartInferenceSchedulerRequest& request) const;

        /**
         * <p>Starts an inference scheduler. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/StartInferenceScheduler">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartInferenceSchedulerAsync(const Model::StartInferenceSchedulerRequest& request, const StartInferenceSchedulerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops an inference scheduler. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/StopInferenceScheduler">AWS
         * API Reference</a></p>
         */
        virtual Model::StopInferenceSchedulerOutcome StopInferenceScheduler(const Model::StopInferenceSchedulerRequest& request) const;

        /**
         * <p>Stops an inference scheduler. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/StopInferenceScheduler">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopInferenceSchedulerOutcomeCallable StopInferenceSchedulerCallable(const Model::StopInferenceSchedulerRequest& request) const;

        /**
         * <p>Stops an inference scheduler. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/StopInferenceScheduler">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Associates a given tag to a resource in your account. A tag is a key-value
         * pair which can be added to an Amazon Lookout for Equipment resource as metadata.
         * Tags can be used for organizing your resources as well as helping you to search
         * and filter by tag. Multiple tags can be added to a resource, either when you
         * create it, or later. Up to 50 tags can be associated with each resource.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Associates a given tag to a resource in your account. A tag is a key-value
         * pair which can be added to an Amazon Lookout for Equipment resource as metadata.
         * Tags can be used for organizing your resources as well as helping you to search
         * and filter by tag. Multiple tags can be added to a resource, either when you
         * create it, or later. Up to 50 tags can be associated with each resource.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Removes a specific tag from a given resource. The tag is specified by its
         * key. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes a specific tag from a given resource. The tag is specified by its
         * key. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an inference scheduler. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/UpdateInferenceScheduler">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateInferenceSchedulerOutcome UpdateInferenceScheduler(const Model::UpdateInferenceSchedulerRequest& request) const;

        /**
         * <p>Updates an inference scheduler. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/UpdateInferenceScheduler">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateInferenceSchedulerOutcomeCallable UpdateInferenceSchedulerCallable(const Model::UpdateInferenceSchedulerRequest& request) const;

        /**
         * <p>Updates an inference scheduler. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/UpdateInferenceScheduler">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateInferenceSchedulerAsync(const Model::UpdateInferenceSchedulerRequest& request, const UpdateInferenceSchedulerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateDatasetAsyncHelper(const Model::CreateDatasetRequest& request, const CreateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateInferenceSchedulerAsyncHelper(const Model::CreateInferenceSchedulerRequest& request, const CreateInferenceSchedulerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateModelAsyncHelper(const Model::CreateModelRequest& request, const CreateModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDatasetAsyncHelper(const Model::DeleteDatasetRequest& request, const DeleteDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteInferenceSchedulerAsyncHelper(const Model::DeleteInferenceSchedulerRequest& request, const DeleteInferenceSchedulerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteModelAsyncHelper(const Model::DeleteModelRequest& request, const DeleteModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDataIngestionJobAsyncHelper(const Model::DescribeDataIngestionJobRequest& request, const DescribeDataIngestionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDatasetAsyncHelper(const Model::DescribeDatasetRequest& request, const DescribeDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeInferenceSchedulerAsyncHelper(const Model::DescribeInferenceSchedulerRequest& request, const DescribeInferenceSchedulerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeModelAsyncHelper(const Model::DescribeModelRequest& request, const DescribeModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDataIngestionJobsAsyncHelper(const Model::ListDataIngestionJobsRequest& request, const ListDataIngestionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDatasetsAsyncHelper(const Model::ListDatasetsRequest& request, const ListDatasetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListInferenceExecutionsAsyncHelper(const Model::ListInferenceExecutionsRequest& request, const ListInferenceExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListInferenceSchedulersAsyncHelper(const Model::ListInferenceSchedulersRequest& request, const ListInferenceSchedulersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListModelsAsyncHelper(const Model::ListModelsRequest& request, const ListModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartDataIngestionJobAsyncHelper(const Model::StartDataIngestionJobRequest& request, const StartDataIngestionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartInferenceSchedulerAsyncHelper(const Model::StartInferenceSchedulerRequest& request, const StartInferenceSchedulerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopInferenceSchedulerAsyncHelper(const Model::StopInferenceSchedulerRequest& request, const StopInferenceSchedulerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateInferenceSchedulerAsyncHelper(const Model::UpdateInferenceSchedulerRequest& request, const UpdateInferenceSchedulerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace LookoutEquipment
} // namespace Aws
