/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/forecast/ForecastServiceErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/forecast/model/CreateDatasetResult.h>
#include <aws/forecast/model/CreateDatasetGroupResult.h>
#include <aws/forecast/model/CreateDatasetImportJobResult.h>
#include <aws/forecast/model/CreateForecastResult.h>
#include <aws/forecast/model/CreateForecastExportJobResult.h>
#include <aws/forecast/model/CreatePredictorResult.h>
#include <aws/forecast/model/CreatePredictorBacktestExportJobResult.h>
#include <aws/forecast/model/DescribeDatasetResult.h>
#include <aws/forecast/model/DescribeDatasetGroupResult.h>
#include <aws/forecast/model/DescribeDatasetImportJobResult.h>
#include <aws/forecast/model/DescribeForecastResult.h>
#include <aws/forecast/model/DescribeForecastExportJobResult.h>
#include <aws/forecast/model/DescribePredictorResult.h>
#include <aws/forecast/model/DescribePredictorBacktestExportJobResult.h>
#include <aws/forecast/model/GetAccuracyMetricsResult.h>
#include <aws/forecast/model/ListDatasetGroupsResult.h>
#include <aws/forecast/model/ListDatasetImportJobsResult.h>
#include <aws/forecast/model/ListDatasetsResult.h>
#include <aws/forecast/model/ListForecastExportJobsResult.h>
#include <aws/forecast/model/ListForecastsResult.h>
#include <aws/forecast/model/ListPredictorBacktestExportJobsResult.h>
#include <aws/forecast/model/ListPredictorsResult.h>
#include <aws/forecast/model/ListTagsForResourceResult.h>
#include <aws/forecast/model/TagResourceResult.h>
#include <aws/forecast/model/UntagResourceResult.h>
#include <aws/forecast/model/UpdateDatasetGroupResult.h>
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

namespace ForecastService
{

namespace Model
{
        class CreateDatasetRequest;
        class CreateDatasetGroupRequest;
        class CreateDatasetImportJobRequest;
        class CreateForecastRequest;
        class CreateForecastExportJobRequest;
        class CreatePredictorRequest;
        class CreatePredictorBacktestExportJobRequest;
        class DeleteDatasetRequest;
        class DeleteDatasetGroupRequest;
        class DeleteDatasetImportJobRequest;
        class DeleteForecastRequest;
        class DeleteForecastExportJobRequest;
        class DeletePredictorRequest;
        class DeletePredictorBacktestExportJobRequest;
        class DescribeDatasetRequest;
        class DescribeDatasetGroupRequest;
        class DescribeDatasetImportJobRequest;
        class DescribeForecastRequest;
        class DescribeForecastExportJobRequest;
        class DescribePredictorRequest;
        class DescribePredictorBacktestExportJobRequest;
        class GetAccuracyMetricsRequest;
        class ListDatasetGroupsRequest;
        class ListDatasetImportJobsRequest;
        class ListDatasetsRequest;
        class ListForecastExportJobsRequest;
        class ListForecastsRequest;
        class ListPredictorBacktestExportJobsRequest;
        class ListPredictorsRequest;
        class ListTagsForResourceRequest;
        class StopResourceRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateDatasetGroupRequest;

        typedef Aws::Utils::Outcome<CreateDatasetResult, ForecastServiceError> CreateDatasetOutcome;
        typedef Aws::Utils::Outcome<CreateDatasetGroupResult, ForecastServiceError> CreateDatasetGroupOutcome;
        typedef Aws::Utils::Outcome<CreateDatasetImportJobResult, ForecastServiceError> CreateDatasetImportJobOutcome;
        typedef Aws::Utils::Outcome<CreateForecastResult, ForecastServiceError> CreateForecastOutcome;
        typedef Aws::Utils::Outcome<CreateForecastExportJobResult, ForecastServiceError> CreateForecastExportJobOutcome;
        typedef Aws::Utils::Outcome<CreatePredictorResult, ForecastServiceError> CreatePredictorOutcome;
        typedef Aws::Utils::Outcome<CreatePredictorBacktestExportJobResult, ForecastServiceError> CreatePredictorBacktestExportJobOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ForecastServiceError> DeleteDatasetOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ForecastServiceError> DeleteDatasetGroupOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ForecastServiceError> DeleteDatasetImportJobOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ForecastServiceError> DeleteForecastOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ForecastServiceError> DeleteForecastExportJobOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ForecastServiceError> DeletePredictorOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ForecastServiceError> DeletePredictorBacktestExportJobOutcome;
        typedef Aws::Utils::Outcome<DescribeDatasetResult, ForecastServiceError> DescribeDatasetOutcome;
        typedef Aws::Utils::Outcome<DescribeDatasetGroupResult, ForecastServiceError> DescribeDatasetGroupOutcome;
        typedef Aws::Utils::Outcome<DescribeDatasetImportJobResult, ForecastServiceError> DescribeDatasetImportJobOutcome;
        typedef Aws::Utils::Outcome<DescribeForecastResult, ForecastServiceError> DescribeForecastOutcome;
        typedef Aws::Utils::Outcome<DescribeForecastExportJobResult, ForecastServiceError> DescribeForecastExportJobOutcome;
        typedef Aws::Utils::Outcome<DescribePredictorResult, ForecastServiceError> DescribePredictorOutcome;
        typedef Aws::Utils::Outcome<DescribePredictorBacktestExportJobResult, ForecastServiceError> DescribePredictorBacktestExportJobOutcome;
        typedef Aws::Utils::Outcome<GetAccuracyMetricsResult, ForecastServiceError> GetAccuracyMetricsOutcome;
        typedef Aws::Utils::Outcome<ListDatasetGroupsResult, ForecastServiceError> ListDatasetGroupsOutcome;
        typedef Aws::Utils::Outcome<ListDatasetImportJobsResult, ForecastServiceError> ListDatasetImportJobsOutcome;
        typedef Aws::Utils::Outcome<ListDatasetsResult, ForecastServiceError> ListDatasetsOutcome;
        typedef Aws::Utils::Outcome<ListForecastExportJobsResult, ForecastServiceError> ListForecastExportJobsOutcome;
        typedef Aws::Utils::Outcome<ListForecastsResult, ForecastServiceError> ListForecastsOutcome;
        typedef Aws::Utils::Outcome<ListPredictorBacktestExportJobsResult, ForecastServiceError> ListPredictorBacktestExportJobsOutcome;
        typedef Aws::Utils::Outcome<ListPredictorsResult, ForecastServiceError> ListPredictorsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, ForecastServiceError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ForecastServiceError> StopResourceOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, ForecastServiceError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, ForecastServiceError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateDatasetGroupResult, ForecastServiceError> UpdateDatasetGroupOutcome;

        typedef std::future<CreateDatasetOutcome> CreateDatasetOutcomeCallable;
        typedef std::future<CreateDatasetGroupOutcome> CreateDatasetGroupOutcomeCallable;
        typedef std::future<CreateDatasetImportJobOutcome> CreateDatasetImportJobOutcomeCallable;
        typedef std::future<CreateForecastOutcome> CreateForecastOutcomeCallable;
        typedef std::future<CreateForecastExportJobOutcome> CreateForecastExportJobOutcomeCallable;
        typedef std::future<CreatePredictorOutcome> CreatePredictorOutcomeCallable;
        typedef std::future<CreatePredictorBacktestExportJobOutcome> CreatePredictorBacktestExportJobOutcomeCallable;
        typedef std::future<DeleteDatasetOutcome> DeleteDatasetOutcomeCallable;
        typedef std::future<DeleteDatasetGroupOutcome> DeleteDatasetGroupOutcomeCallable;
        typedef std::future<DeleteDatasetImportJobOutcome> DeleteDatasetImportJobOutcomeCallable;
        typedef std::future<DeleteForecastOutcome> DeleteForecastOutcomeCallable;
        typedef std::future<DeleteForecastExportJobOutcome> DeleteForecastExportJobOutcomeCallable;
        typedef std::future<DeletePredictorOutcome> DeletePredictorOutcomeCallable;
        typedef std::future<DeletePredictorBacktestExportJobOutcome> DeletePredictorBacktestExportJobOutcomeCallable;
        typedef std::future<DescribeDatasetOutcome> DescribeDatasetOutcomeCallable;
        typedef std::future<DescribeDatasetGroupOutcome> DescribeDatasetGroupOutcomeCallable;
        typedef std::future<DescribeDatasetImportJobOutcome> DescribeDatasetImportJobOutcomeCallable;
        typedef std::future<DescribeForecastOutcome> DescribeForecastOutcomeCallable;
        typedef std::future<DescribeForecastExportJobOutcome> DescribeForecastExportJobOutcomeCallable;
        typedef std::future<DescribePredictorOutcome> DescribePredictorOutcomeCallable;
        typedef std::future<DescribePredictorBacktestExportJobOutcome> DescribePredictorBacktestExportJobOutcomeCallable;
        typedef std::future<GetAccuracyMetricsOutcome> GetAccuracyMetricsOutcomeCallable;
        typedef std::future<ListDatasetGroupsOutcome> ListDatasetGroupsOutcomeCallable;
        typedef std::future<ListDatasetImportJobsOutcome> ListDatasetImportJobsOutcomeCallable;
        typedef std::future<ListDatasetsOutcome> ListDatasetsOutcomeCallable;
        typedef std::future<ListForecastExportJobsOutcome> ListForecastExportJobsOutcomeCallable;
        typedef std::future<ListForecastsOutcome> ListForecastsOutcomeCallable;
        typedef std::future<ListPredictorBacktestExportJobsOutcome> ListPredictorBacktestExportJobsOutcomeCallable;
        typedef std::future<ListPredictorsOutcome> ListPredictorsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<StopResourceOutcome> StopResourceOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateDatasetGroupOutcome> UpdateDatasetGroupOutcomeCallable;
} // namespace Model

  class ForecastServiceClient;

    typedef std::function<void(const ForecastServiceClient*, const Model::CreateDatasetRequest&, const Model::CreateDatasetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDatasetResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::CreateDatasetGroupRequest&, const Model::CreateDatasetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDatasetGroupResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::CreateDatasetImportJobRequest&, const Model::CreateDatasetImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDatasetImportJobResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::CreateForecastRequest&, const Model::CreateForecastOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateForecastResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::CreateForecastExportJobRequest&, const Model::CreateForecastExportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateForecastExportJobResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::CreatePredictorRequest&, const Model::CreatePredictorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePredictorResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::CreatePredictorBacktestExportJobRequest&, const Model::CreatePredictorBacktestExportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePredictorBacktestExportJobResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::DeleteDatasetRequest&, const Model::DeleteDatasetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDatasetResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::DeleteDatasetGroupRequest&, const Model::DeleteDatasetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDatasetGroupResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::DeleteDatasetImportJobRequest&, const Model::DeleteDatasetImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDatasetImportJobResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::DeleteForecastRequest&, const Model::DeleteForecastOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteForecastResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::DeleteForecastExportJobRequest&, const Model::DeleteForecastExportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteForecastExportJobResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::DeletePredictorRequest&, const Model::DeletePredictorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePredictorResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::DeletePredictorBacktestExportJobRequest&, const Model::DeletePredictorBacktestExportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePredictorBacktestExportJobResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::DescribeDatasetRequest&, const Model::DescribeDatasetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDatasetResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::DescribeDatasetGroupRequest&, const Model::DescribeDatasetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDatasetGroupResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::DescribeDatasetImportJobRequest&, const Model::DescribeDatasetImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDatasetImportJobResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::DescribeForecastRequest&, const Model::DescribeForecastOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeForecastResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::DescribeForecastExportJobRequest&, const Model::DescribeForecastExportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeForecastExportJobResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::DescribePredictorRequest&, const Model::DescribePredictorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePredictorResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::DescribePredictorBacktestExportJobRequest&, const Model::DescribePredictorBacktestExportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePredictorBacktestExportJobResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::GetAccuracyMetricsRequest&, const Model::GetAccuracyMetricsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccuracyMetricsResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::ListDatasetGroupsRequest&, const Model::ListDatasetGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDatasetGroupsResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::ListDatasetImportJobsRequest&, const Model::ListDatasetImportJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDatasetImportJobsResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::ListDatasetsRequest&, const Model::ListDatasetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDatasetsResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::ListForecastExportJobsRequest&, const Model::ListForecastExportJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListForecastExportJobsResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::ListForecastsRequest&, const Model::ListForecastsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListForecastsResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::ListPredictorBacktestExportJobsRequest&, const Model::ListPredictorBacktestExportJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPredictorBacktestExportJobsResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::ListPredictorsRequest&, const Model::ListPredictorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPredictorsResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::StopResourceRequest&, const Model::StopResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopResourceResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::UpdateDatasetGroupRequest&, const Model::UpdateDatasetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDatasetGroupResponseReceivedHandler;

  /**
   * <p>Provides APIs for creating and managing Amazon Forecast resources.</p>
   */
  class AWS_FORECASTSERVICE_API ForecastServiceClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ForecastServiceClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ForecastServiceClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ForecastServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~ForecastServiceClient();


        /**
         * <p>Creates an Amazon Forecast dataset. The information about the dataset that
         * you provide helps Forecast understand how to consume the data for model
         * training. This includes the following:</p> <ul> <li> <p> <i>
         * <code>DataFrequency</code> </i> - How frequently your historical time-series
         * data is collected.</p> </li> <li> <p> <i> <code>Domain</code> </i> and <i>
         * <code>DatasetType</code> </i> - Each dataset has an associated dataset domain
         * and a type within the domain. Amazon Forecast provides a list of predefined
         * domains and types within each domain. For each unique dataset domain and type
         * within the domain, Amazon Forecast requires your data to include a minimum set
         * of predefined fields.</p> </li> <li> <p> <i> <code>Schema</code> </i> - A schema
         * specifies the fields in the dataset, including the field name and data type.</p>
         * </li> </ul> <p>After creating a dataset, you import your training data into it
         * and add the dataset to a dataset group. You use the dataset group to create a
         * predictor. For more information, see <a>howitworks-datasets-groups</a>.</p>
         * <p>To get a list of all your datasets, use the <a>ListDatasets</a>
         * operation.</p> <p>For example Forecast datasets, see the <a
         * href="https://github.com/aws-samples/amazon-forecast-samples">Amazon Forecast
         * Sample GitHub repository</a>.</p>  <p>The <code>Status</code> of a dataset
         * must be <code>ACTIVE</code> before you can import training data. Use the
         * <a>DescribeDataset</a> operation to get the status.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/CreateDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDatasetOutcome CreateDataset(const Model::CreateDatasetRequest& request) const;

        /**
         * <p>Creates an Amazon Forecast dataset. The information about the dataset that
         * you provide helps Forecast understand how to consume the data for model
         * training. This includes the following:</p> <ul> <li> <p> <i>
         * <code>DataFrequency</code> </i> - How frequently your historical time-series
         * data is collected.</p> </li> <li> <p> <i> <code>Domain</code> </i> and <i>
         * <code>DatasetType</code> </i> - Each dataset has an associated dataset domain
         * and a type within the domain. Amazon Forecast provides a list of predefined
         * domains and types within each domain. For each unique dataset domain and type
         * within the domain, Amazon Forecast requires your data to include a minimum set
         * of predefined fields.</p> </li> <li> <p> <i> <code>Schema</code> </i> - A schema
         * specifies the fields in the dataset, including the field name and data type.</p>
         * </li> </ul> <p>After creating a dataset, you import your training data into it
         * and add the dataset to a dataset group. You use the dataset group to create a
         * predictor. For more information, see <a>howitworks-datasets-groups</a>.</p>
         * <p>To get a list of all your datasets, use the <a>ListDatasets</a>
         * operation.</p> <p>For example Forecast datasets, see the <a
         * href="https://github.com/aws-samples/amazon-forecast-samples">Amazon Forecast
         * Sample GitHub repository</a>.</p>  <p>The <code>Status</code> of a dataset
         * must be <code>ACTIVE</code> before you can import training data. Use the
         * <a>DescribeDataset</a> operation to get the status.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/CreateDataset">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDatasetOutcomeCallable CreateDatasetCallable(const Model::CreateDatasetRequest& request) const;

        /**
         * <p>Creates an Amazon Forecast dataset. The information about the dataset that
         * you provide helps Forecast understand how to consume the data for model
         * training. This includes the following:</p> <ul> <li> <p> <i>
         * <code>DataFrequency</code> </i> - How frequently your historical time-series
         * data is collected.</p> </li> <li> <p> <i> <code>Domain</code> </i> and <i>
         * <code>DatasetType</code> </i> - Each dataset has an associated dataset domain
         * and a type within the domain. Amazon Forecast provides a list of predefined
         * domains and types within each domain. For each unique dataset domain and type
         * within the domain, Amazon Forecast requires your data to include a minimum set
         * of predefined fields.</p> </li> <li> <p> <i> <code>Schema</code> </i> - A schema
         * specifies the fields in the dataset, including the field name and data type.</p>
         * </li> </ul> <p>After creating a dataset, you import your training data into it
         * and add the dataset to a dataset group. You use the dataset group to create a
         * predictor. For more information, see <a>howitworks-datasets-groups</a>.</p>
         * <p>To get a list of all your datasets, use the <a>ListDatasets</a>
         * operation.</p> <p>For example Forecast datasets, see the <a
         * href="https://github.com/aws-samples/amazon-forecast-samples">Amazon Forecast
         * Sample GitHub repository</a>.</p>  <p>The <code>Status</code> of a dataset
         * must be <code>ACTIVE</code> before you can import training data. Use the
         * <a>DescribeDataset</a> operation to get the status.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/CreateDataset">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDatasetAsync(const Model::CreateDatasetRequest& request, const CreateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a dataset group, which holds a collection of related datasets. You
         * can add datasets to the dataset group when you create the dataset group, or
         * later by using the <a>UpdateDatasetGroup</a> operation.</p> <p>After creating a
         * dataset group and adding datasets, you use the dataset group when you create a
         * predictor. For more information, see <a>howitworks-datasets-groups</a>.</p>
         * <p>To get a list of all your datasets groups, use the <a>ListDatasetGroups</a>
         * operation.</p>  <p>The <code>Status</code> of a dataset group must be
         * <code>ACTIVE</code> before you can use the dataset group to create a predictor.
         * To get the status, use the <a>DescribeDatasetGroup</a> operation.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/CreateDatasetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDatasetGroupOutcome CreateDatasetGroup(const Model::CreateDatasetGroupRequest& request) const;

        /**
         * <p>Creates a dataset group, which holds a collection of related datasets. You
         * can add datasets to the dataset group when you create the dataset group, or
         * later by using the <a>UpdateDatasetGroup</a> operation.</p> <p>After creating a
         * dataset group and adding datasets, you use the dataset group when you create a
         * predictor. For more information, see <a>howitworks-datasets-groups</a>.</p>
         * <p>To get a list of all your datasets groups, use the <a>ListDatasetGroups</a>
         * operation.</p>  <p>The <code>Status</code> of a dataset group must be
         * <code>ACTIVE</code> before you can use the dataset group to create a predictor.
         * To get the status, use the <a>DescribeDatasetGroup</a> operation.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/CreateDatasetGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDatasetGroupOutcomeCallable CreateDatasetGroupCallable(const Model::CreateDatasetGroupRequest& request) const;

        /**
         * <p>Creates a dataset group, which holds a collection of related datasets. You
         * can add datasets to the dataset group when you create the dataset group, or
         * later by using the <a>UpdateDatasetGroup</a> operation.</p> <p>After creating a
         * dataset group and adding datasets, you use the dataset group when you create a
         * predictor. For more information, see <a>howitworks-datasets-groups</a>.</p>
         * <p>To get a list of all your datasets groups, use the <a>ListDatasetGroups</a>
         * operation.</p>  <p>The <code>Status</code> of a dataset group must be
         * <code>ACTIVE</code> before you can use the dataset group to create a predictor.
         * To get the status, use the <a>DescribeDatasetGroup</a> operation.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/CreateDatasetGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDatasetGroupAsync(const Model::CreateDatasetGroupRequest& request, const CreateDatasetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Imports your training data to an Amazon Forecast dataset. You provide the
         * location of your training data in an Amazon Simple Storage Service (Amazon S3)
         * bucket and the Amazon Resource Name (ARN) of the dataset that you want to import
         * the data to.</p> <p>You must specify a <a>DataSource</a> object that includes an
         * AWS Identity and Access Management (IAM) role that Amazon Forecast can assume to
         * access the data, as Amazon Forecast makes a copy of your data and processes it
         * in an internal AWS system. For more information, see
         * <a>aws-forecast-iam-roles</a>.</p> <p>The training data must be in CSV format.
         * The delimiter must be a comma (,).</p> <p>You can specify the path to a specific
         * CSV file, the S3 bucket, or to a folder in the S3 bucket. For the latter two
         * cases, Amazon Forecast imports all files up to the limit of 10,000 files.</p>
         * <p>Because dataset imports are not aggregated, your most recent dataset import
         * is the one that is used when training a predictor or generating a forecast. Make
         * sure that your most recent dataset import contains all of the data you want to
         * model off of, and not just the new data collected since the previous import.</p>
         * <p>To get a list of all your dataset import jobs, filtered by specified
         * criteria, use the <a>ListDatasetImportJobs</a> operation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/CreateDatasetImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDatasetImportJobOutcome CreateDatasetImportJob(const Model::CreateDatasetImportJobRequest& request) const;

        /**
         * <p>Imports your training data to an Amazon Forecast dataset. You provide the
         * location of your training data in an Amazon Simple Storage Service (Amazon S3)
         * bucket and the Amazon Resource Name (ARN) of the dataset that you want to import
         * the data to.</p> <p>You must specify a <a>DataSource</a> object that includes an
         * AWS Identity and Access Management (IAM) role that Amazon Forecast can assume to
         * access the data, as Amazon Forecast makes a copy of your data and processes it
         * in an internal AWS system. For more information, see
         * <a>aws-forecast-iam-roles</a>.</p> <p>The training data must be in CSV format.
         * The delimiter must be a comma (,).</p> <p>You can specify the path to a specific
         * CSV file, the S3 bucket, or to a folder in the S3 bucket. For the latter two
         * cases, Amazon Forecast imports all files up to the limit of 10,000 files.</p>
         * <p>Because dataset imports are not aggregated, your most recent dataset import
         * is the one that is used when training a predictor or generating a forecast. Make
         * sure that your most recent dataset import contains all of the data you want to
         * model off of, and not just the new data collected since the previous import.</p>
         * <p>To get a list of all your dataset import jobs, filtered by specified
         * criteria, use the <a>ListDatasetImportJobs</a> operation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/CreateDatasetImportJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDatasetImportJobOutcomeCallable CreateDatasetImportJobCallable(const Model::CreateDatasetImportJobRequest& request) const;

        /**
         * <p>Imports your training data to an Amazon Forecast dataset. You provide the
         * location of your training data in an Amazon Simple Storage Service (Amazon S3)
         * bucket and the Amazon Resource Name (ARN) of the dataset that you want to import
         * the data to.</p> <p>You must specify a <a>DataSource</a> object that includes an
         * AWS Identity and Access Management (IAM) role that Amazon Forecast can assume to
         * access the data, as Amazon Forecast makes a copy of your data and processes it
         * in an internal AWS system. For more information, see
         * <a>aws-forecast-iam-roles</a>.</p> <p>The training data must be in CSV format.
         * The delimiter must be a comma (,).</p> <p>You can specify the path to a specific
         * CSV file, the S3 bucket, or to a folder in the S3 bucket. For the latter two
         * cases, Amazon Forecast imports all files up to the limit of 10,000 files.</p>
         * <p>Because dataset imports are not aggregated, your most recent dataset import
         * is the one that is used when training a predictor or generating a forecast. Make
         * sure that your most recent dataset import contains all of the data you want to
         * model off of, and not just the new data collected since the previous import.</p>
         * <p>To get a list of all your dataset import jobs, filtered by specified
         * criteria, use the <a>ListDatasetImportJobs</a> operation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/CreateDatasetImportJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDatasetImportJobAsync(const Model::CreateDatasetImportJobRequest& request, const CreateDatasetImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a forecast for each item in the <code>TARGET_TIME_SERIES</code>
         * dataset that was used to train the predictor. This is known as inference. To
         * retrieve the forecast for a single item at low latency, use the operation. To
         * export the complete forecast into your Amazon Simple Storage Service (Amazon S3)
         * bucket, use the <a>CreateForecastExportJob</a> operation.</p> <p>The range of
         * the forecast is determined by the <code>ForecastHorizon</code> value, which you
         * specify in the <a>CreatePredictor</a> request. When you query a forecast, you
         * can request a specific date range within the forecast.</p> <p>To get a list of
         * all your forecasts, use the <a>ListForecasts</a> operation.</p>  <p>The
         * forecasts generated by Amazon Forecast are in the same time zone as the dataset
         * that was used to create the predictor.</p>  <p>For more information, see
         * <a>howitworks-forecast</a>.</p>  <p>The <code>Status</code> of the
         * forecast must be <code>ACTIVE</code> before you can query or export the
         * forecast. Use the <a>DescribeForecast</a> operation to get the status.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/CreateForecast">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateForecastOutcome CreateForecast(const Model::CreateForecastRequest& request) const;

        /**
         * <p>Creates a forecast for each item in the <code>TARGET_TIME_SERIES</code>
         * dataset that was used to train the predictor. This is known as inference. To
         * retrieve the forecast for a single item at low latency, use the operation. To
         * export the complete forecast into your Amazon Simple Storage Service (Amazon S3)
         * bucket, use the <a>CreateForecastExportJob</a> operation.</p> <p>The range of
         * the forecast is determined by the <code>ForecastHorizon</code> value, which you
         * specify in the <a>CreatePredictor</a> request. When you query a forecast, you
         * can request a specific date range within the forecast.</p> <p>To get a list of
         * all your forecasts, use the <a>ListForecasts</a> operation.</p>  <p>The
         * forecasts generated by Amazon Forecast are in the same time zone as the dataset
         * that was used to create the predictor.</p>  <p>For more information, see
         * <a>howitworks-forecast</a>.</p>  <p>The <code>Status</code> of the
         * forecast must be <code>ACTIVE</code> before you can query or export the
         * forecast. Use the <a>DescribeForecast</a> operation to get the status.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/CreateForecast">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateForecastOutcomeCallable CreateForecastCallable(const Model::CreateForecastRequest& request) const;

        /**
         * <p>Creates a forecast for each item in the <code>TARGET_TIME_SERIES</code>
         * dataset that was used to train the predictor. This is known as inference. To
         * retrieve the forecast for a single item at low latency, use the operation. To
         * export the complete forecast into your Amazon Simple Storage Service (Amazon S3)
         * bucket, use the <a>CreateForecastExportJob</a> operation.</p> <p>The range of
         * the forecast is determined by the <code>ForecastHorizon</code> value, which you
         * specify in the <a>CreatePredictor</a> request. When you query a forecast, you
         * can request a specific date range within the forecast.</p> <p>To get a list of
         * all your forecasts, use the <a>ListForecasts</a> operation.</p>  <p>The
         * forecasts generated by Amazon Forecast are in the same time zone as the dataset
         * that was used to create the predictor.</p>  <p>For more information, see
         * <a>howitworks-forecast</a>.</p>  <p>The <code>Status</code> of the
         * forecast must be <code>ACTIVE</code> before you can query or export the
         * forecast. Use the <a>DescribeForecast</a> operation to get the status.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/CreateForecast">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateForecastAsync(const Model::CreateForecastRequest& request, const CreateForecastResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Exports a forecast created by the <a>CreateForecast</a> operation to your
         * Amazon Simple Storage Service (Amazon S3) bucket. The forecast file name will
         * match the following conventions:</p>
         * <p>&lt;ForecastExportJobName&gt;_&lt;ExportTimestamp&gt;_&lt;PartNumber&gt;</p>
         * <p>where the &lt;ExportTimestamp&gt; component is in Java SimpleDateFormat
         * (yyyy-MM-ddTHH-mm-ssZ).</p> <p>You must specify a <a>DataDestination</a> object
         * that includes an AWS Identity and Access Management (IAM) role that Amazon
         * Forecast can assume to access the Amazon S3 bucket. For more information, see
         * <a>aws-forecast-iam-roles</a>.</p> <p>For more information, see
         * <a>howitworks-forecast</a>.</p> <p>To get a list of all your forecast export
         * jobs, use the <a>ListForecastExportJobs</a> operation.</p>  <p>The
         * <code>Status</code> of the forecast export job must be <code>ACTIVE</code>
         * before you can access the forecast in your Amazon S3 bucket. To get the status,
         * use the <a>DescribeForecastExportJob</a> operation.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/CreateForecastExportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateForecastExportJobOutcome CreateForecastExportJob(const Model::CreateForecastExportJobRequest& request) const;

        /**
         * <p>Exports a forecast created by the <a>CreateForecast</a> operation to your
         * Amazon Simple Storage Service (Amazon S3) bucket. The forecast file name will
         * match the following conventions:</p>
         * <p>&lt;ForecastExportJobName&gt;_&lt;ExportTimestamp&gt;_&lt;PartNumber&gt;</p>
         * <p>where the &lt;ExportTimestamp&gt; component is in Java SimpleDateFormat
         * (yyyy-MM-ddTHH-mm-ssZ).</p> <p>You must specify a <a>DataDestination</a> object
         * that includes an AWS Identity and Access Management (IAM) role that Amazon
         * Forecast can assume to access the Amazon S3 bucket. For more information, see
         * <a>aws-forecast-iam-roles</a>.</p> <p>For more information, see
         * <a>howitworks-forecast</a>.</p> <p>To get a list of all your forecast export
         * jobs, use the <a>ListForecastExportJobs</a> operation.</p>  <p>The
         * <code>Status</code> of the forecast export job must be <code>ACTIVE</code>
         * before you can access the forecast in your Amazon S3 bucket. To get the status,
         * use the <a>DescribeForecastExportJob</a> operation.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/CreateForecastExportJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateForecastExportJobOutcomeCallable CreateForecastExportJobCallable(const Model::CreateForecastExportJobRequest& request) const;

        /**
         * <p>Exports a forecast created by the <a>CreateForecast</a> operation to your
         * Amazon Simple Storage Service (Amazon S3) bucket. The forecast file name will
         * match the following conventions:</p>
         * <p>&lt;ForecastExportJobName&gt;_&lt;ExportTimestamp&gt;_&lt;PartNumber&gt;</p>
         * <p>where the &lt;ExportTimestamp&gt; component is in Java SimpleDateFormat
         * (yyyy-MM-ddTHH-mm-ssZ).</p> <p>You must specify a <a>DataDestination</a> object
         * that includes an AWS Identity and Access Management (IAM) role that Amazon
         * Forecast can assume to access the Amazon S3 bucket. For more information, see
         * <a>aws-forecast-iam-roles</a>.</p> <p>For more information, see
         * <a>howitworks-forecast</a>.</p> <p>To get a list of all your forecast export
         * jobs, use the <a>ListForecastExportJobs</a> operation.</p>  <p>The
         * <code>Status</code> of the forecast export job must be <code>ACTIVE</code>
         * before you can access the forecast in your Amazon S3 bucket. To get the status,
         * use the <a>DescribeForecastExportJob</a> operation.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/CreateForecastExportJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateForecastExportJobAsync(const Model::CreateForecastExportJobRequest& request, const CreateForecastExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an Amazon Forecast predictor.</p> <p>In the request, provide a
         * dataset group and either specify an algorithm or let Amazon Forecast choose an
         * algorithm for you using AutoML. If you specify an algorithm, you also can
         * override algorithm-specific hyperparameters.</p> <p>Amazon Forecast uses the
         * algorithm to train a predictor using the latest version of the datasets in the
         * specified dataset group. You can then generate a forecast using the
         * <a>CreateForecast</a> operation.</p> <p> To see the evaluation metrics, use the
         * <a>GetAccuracyMetrics</a> operation. </p> <p>You can specify a featurization
         * configuration to fill and aggregate the data fields in the
         * <code>TARGET_TIME_SERIES</code> dataset to improve model training. For more
         * information, see <a>FeaturizationConfig</a>.</p> <p>For RELATED_TIME_SERIES
         * datasets, <code>CreatePredictor</code> verifies that the
         * <code>DataFrequency</code> specified when the dataset was created matches the
         * <code>ForecastFrequency</code>. TARGET_TIME_SERIES datasets don't have this
         * restriction. Amazon Forecast also verifies the delimiter and timestamp format.
         * For more information, see <a>howitworks-datasets-groups</a>.</p> <p>By default,
         * predictors are trained and evaluated at the 0.1 (P10), 0.5 (P50), and 0.9 (P90)
         * quantiles. You can choose custom forecast types to train and evaluate your
         * predictor by setting the <code>ForecastTypes</code>. </p> <p> <b>AutoML</b> </p>
         * <p>If you want Amazon Forecast to evaluate each algorithm and choose the one
         * that minimizes the <code>objective function</code>, set
         * <code>PerformAutoML</code> to <code>true</code>. The <code>objective
         * function</code> is defined as the mean of the weighted losses over the forecast
         * types. By default, these are the p10, p50, and p90 quantile losses. For more
         * information, see <a>EvaluationResult</a>.</p> <p>When AutoML is enabled, the
         * following properties are disallowed:</p> <ul> <li> <p> <code>AlgorithmArn</code>
         * </p> </li> <li> <p> <code>HPOConfig</code> </p> </li> <li> <p>
         * <code>PerformHPO</code> </p> </li> <li> <p> <code>TrainingParameters</code> </p>
         * </li> </ul> <p>To get a list of all of your predictors, use the
         * <a>ListPredictors</a> operation.</p>  <p>Before you can use the predictor
         * to create a forecast, the <code>Status</code> of the predictor must be
         * <code>ACTIVE</code>, signifying that training has completed. To get the status,
         * use the <a>DescribePredictor</a> operation.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/CreatePredictor">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePredictorOutcome CreatePredictor(const Model::CreatePredictorRequest& request) const;

        /**
         * <p>Creates an Amazon Forecast predictor.</p> <p>In the request, provide a
         * dataset group and either specify an algorithm or let Amazon Forecast choose an
         * algorithm for you using AutoML. If you specify an algorithm, you also can
         * override algorithm-specific hyperparameters.</p> <p>Amazon Forecast uses the
         * algorithm to train a predictor using the latest version of the datasets in the
         * specified dataset group. You can then generate a forecast using the
         * <a>CreateForecast</a> operation.</p> <p> To see the evaluation metrics, use the
         * <a>GetAccuracyMetrics</a> operation. </p> <p>You can specify a featurization
         * configuration to fill and aggregate the data fields in the
         * <code>TARGET_TIME_SERIES</code> dataset to improve model training. For more
         * information, see <a>FeaturizationConfig</a>.</p> <p>For RELATED_TIME_SERIES
         * datasets, <code>CreatePredictor</code> verifies that the
         * <code>DataFrequency</code> specified when the dataset was created matches the
         * <code>ForecastFrequency</code>. TARGET_TIME_SERIES datasets don't have this
         * restriction. Amazon Forecast also verifies the delimiter and timestamp format.
         * For more information, see <a>howitworks-datasets-groups</a>.</p> <p>By default,
         * predictors are trained and evaluated at the 0.1 (P10), 0.5 (P50), and 0.9 (P90)
         * quantiles. You can choose custom forecast types to train and evaluate your
         * predictor by setting the <code>ForecastTypes</code>. </p> <p> <b>AutoML</b> </p>
         * <p>If you want Amazon Forecast to evaluate each algorithm and choose the one
         * that minimizes the <code>objective function</code>, set
         * <code>PerformAutoML</code> to <code>true</code>. The <code>objective
         * function</code> is defined as the mean of the weighted losses over the forecast
         * types. By default, these are the p10, p50, and p90 quantile losses. For more
         * information, see <a>EvaluationResult</a>.</p> <p>When AutoML is enabled, the
         * following properties are disallowed:</p> <ul> <li> <p> <code>AlgorithmArn</code>
         * </p> </li> <li> <p> <code>HPOConfig</code> </p> </li> <li> <p>
         * <code>PerformHPO</code> </p> </li> <li> <p> <code>TrainingParameters</code> </p>
         * </li> </ul> <p>To get a list of all of your predictors, use the
         * <a>ListPredictors</a> operation.</p>  <p>Before you can use the predictor
         * to create a forecast, the <code>Status</code> of the predictor must be
         * <code>ACTIVE</code>, signifying that training has completed. To get the status,
         * use the <a>DescribePredictor</a> operation.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/CreatePredictor">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePredictorOutcomeCallable CreatePredictorCallable(const Model::CreatePredictorRequest& request) const;

        /**
         * <p>Creates an Amazon Forecast predictor.</p> <p>In the request, provide a
         * dataset group and either specify an algorithm or let Amazon Forecast choose an
         * algorithm for you using AutoML. If you specify an algorithm, you also can
         * override algorithm-specific hyperparameters.</p> <p>Amazon Forecast uses the
         * algorithm to train a predictor using the latest version of the datasets in the
         * specified dataset group. You can then generate a forecast using the
         * <a>CreateForecast</a> operation.</p> <p> To see the evaluation metrics, use the
         * <a>GetAccuracyMetrics</a> operation. </p> <p>You can specify a featurization
         * configuration to fill and aggregate the data fields in the
         * <code>TARGET_TIME_SERIES</code> dataset to improve model training. For more
         * information, see <a>FeaturizationConfig</a>.</p> <p>For RELATED_TIME_SERIES
         * datasets, <code>CreatePredictor</code> verifies that the
         * <code>DataFrequency</code> specified when the dataset was created matches the
         * <code>ForecastFrequency</code>. TARGET_TIME_SERIES datasets don't have this
         * restriction. Amazon Forecast also verifies the delimiter and timestamp format.
         * For more information, see <a>howitworks-datasets-groups</a>.</p> <p>By default,
         * predictors are trained and evaluated at the 0.1 (P10), 0.5 (P50), and 0.9 (P90)
         * quantiles. You can choose custom forecast types to train and evaluate your
         * predictor by setting the <code>ForecastTypes</code>. </p> <p> <b>AutoML</b> </p>
         * <p>If you want Amazon Forecast to evaluate each algorithm and choose the one
         * that minimizes the <code>objective function</code>, set
         * <code>PerformAutoML</code> to <code>true</code>. The <code>objective
         * function</code> is defined as the mean of the weighted losses over the forecast
         * types. By default, these are the p10, p50, and p90 quantile losses. For more
         * information, see <a>EvaluationResult</a>.</p> <p>When AutoML is enabled, the
         * following properties are disallowed:</p> <ul> <li> <p> <code>AlgorithmArn</code>
         * </p> </li> <li> <p> <code>HPOConfig</code> </p> </li> <li> <p>
         * <code>PerformHPO</code> </p> </li> <li> <p> <code>TrainingParameters</code> </p>
         * </li> </ul> <p>To get a list of all of your predictors, use the
         * <a>ListPredictors</a> operation.</p>  <p>Before you can use the predictor
         * to create a forecast, the <code>Status</code> of the predictor must be
         * <code>ACTIVE</code>, signifying that training has completed. To get the status,
         * use the <a>DescribePredictor</a> operation.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/CreatePredictor">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePredictorAsync(const Model::CreatePredictorRequest& request, const CreatePredictorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Exports backtest forecasts and accuracy metrics generated by the
         * <a>CreatePredictor</a> operation. Two folders containing CSV files are exported
         * to your specified S3 bucket.</p> <p> The export file names will match the
         * following conventions:</p> <p>
         * <code>&lt;ExportJobName&gt;_&lt;ExportTimestamp&gt;_&lt;PartNumber&gt;.csv</code>
         * </p> <p>The &lt;ExportTimestamp&gt; component is in Java SimpleDate format
         * (yyyy-MM-ddTHH-mm-ssZ).</p> <p>You must specify a <a>DataDestination</a> object
         * that includes an Amazon S3 bucket and an AWS Identity and Access Management
         * (IAM) role that Amazon Forecast can assume to access the Amazon S3 bucket. For
         * more information, see <a>aws-forecast-iam-roles</a>.</p>  <p>The
         * <code>Status</code> of the export job must be <code>ACTIVE</code> before you can
         * access the export in your Amazon S3 bucket. To get the status, use the
         * <a>DescribePredictorBacktestExportJob</a> operation.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/CreatePredictorBacktestExportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePredictorBacktestExportJobOutcome CreatePredictorBacktestExportJob(const Model::CreatePredictorBacktestExportJobRequest& request) const;

        /**
         * <p>Exports backtest forecasts and accuracy metrics generated by the
         * <a>CreatePredictor</a> operation. Two folders containing CSV files are exported
         * to your specified S3 bucket.</p> <p> The export file names will match the
         * following conventions:</p> <p>
         * <code>&lt;ExportJobName&gt;_&lt;ExportTimestamp&gt;_&lt;PartNumber&gt;.csv</code>
         * </p> <p>The &lt;ExportTimestamp&gt; component is in Java SimpleDate format
         * (yyyy-MM-ddTHH-mm-ssZ).</p> <p>You must specify a <a>DataDestination</a> object
         * that includes an Amazon S3 bucket and an AWS Identity and Access Management
         * (IAM) role that Amazon Forecast can assume to access the Amazon S3 bucket. For
         * more information, see <a>aws-forecast-iam-roles</a>.</p>  <p>The
         * <code>Status</code> of the export job must be <code>ACTIVE</code> before you can
         * access the export in your Amazon S3 bucket. To get the status, use the
         * <a>DescribePredictorBacktestExportJob</a> operation.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/CreatePredictorBacktestExportJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePredictorBacktestExportJobOutcomeCallable CreatePredictorBacktestExportJobCallable(const Model::CreatePredictorBacktestExportJobRequest& request) const;

        /**
         * <p>Exports backtest forecasts and accuracy metrics generated by the
         * <a>CreatePredictor</a> operation. Two folders containing CSV files are exported
         * to your specified S3 bucket.</p> <p> The export file names will match the
         * following conventions:</p> <p>
         * <code>&lt;ExportJobName&gt;_&lt;ExportTimestamp&gt;_&lt;PartNumber&gt;.csv</code>
         * </p> <p>The &lt;ExportTimestamp&gt; component is in Java SimpleDate format
         * (yyyy-MM-ddTHH-mm-ssZ).</p> <p>You must specify a <a>DataDestination</a> object
         * that includes an Amazon S3 bucket and an AWS Identity and Access Management
         * (IAM) role that Amazon Forecast can assume to access the Amazon S3 bucket. For
         * more information, see <a>aws-forecast-iam-roles</a>.</p>  <p>The
         * <code>Status</code> of the export job must be <code>ACTIVE</code> before you can
         * access the export in your Amazon S3 bucket. To get the status, use the
         * <a>DescribePredictorBacktestExportJob</a> operation.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/CreatePredictorBacktestExportJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePredictorBacktestExportJobAsync(const Model::CreatePredictorBacktestExportJobRequest& request, const CreatePredictorBacktestExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an Amazon Forecast dataset that was created using the
         * <a>CreateDataset</a> operation. You can only delete datasets that have a status
         * of <code>ACTIVE</code> or <code>CREATE_FAILED</code>. To get the status use the
         * <a>DescribeDataset</a> operation.</p>  <p>Forecast does not automatically
         * update any dataset groups that contain the deleted dataset. In order to update
         * the dataset group, use the operation, omitting the deleted dataset's ARN.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/DeleteDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDatasetOutcome DeleteDataset(const Model::DeleteDatasetRequest& request) const;

        /**
         * <p>Deletes an Amazon Forecast dataset that was created using the
         * <a>CreateDataset</a> operation. You can only delete datasets that have a status
         * of <code>ACTIVE</code> or <code>CREATE_FAILED</code>. To get the status use the
         * <a>DescribeDataset</a> operation.</p>  <p>Forecast does not automatically
         * update any dataset groups that contain the deleted dataset. In order to update
         * the dataset group, use the operation, omitting the deleted dataset's ARN.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/DeleteDataset">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDatasetOutcomeCallable DeleteDatasetCallable(const Model::DeleteDatasetRequest& request) const;

        /**
         * <p>Deletes an Amazon Forecast dataset that was created using the
         * <a>CreateDataset</a> operation. You can only delete datasets that have a status
         * of <code>ACTIVE</code> or <code>CREATE_FAILED</code>. To get the status use the
         * <a>DescribeDataset</a> operation.</p>  <p>Forecast does not automatically
         * update any dataset groups that contain the deleted dataset. In order to update
         * the dataset group, use the operation, omitting the deleted dataset's ARN.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/DeleteDataset">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDatasetAsync(const Model::DeleteDatasetRequest& request, const DeleteDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a dataset group created using the <a>CreateDatasetGroup</a>
         * operation. You can only delete dataset groups that have a status of
         * <code>ACTIVE</code>, <code>CREATE_FAILED</code>, or <code>UPDATE_FAILED</code>.
         * To get the status, use the <a>DescribeDatasetGroup</a> operation.</p> <p>This
         * operation deletes only the dataset group, not the datasets in the
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/DeleteDatasetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDatasetGroupOutcome DeleteDatasetGroup(const Model::DeleteDatasetGroupRequest& request) const;

        /**
         * <p>Deletes a dataset group created using the <a>CreateDatasetGroup</a>
         * operation. You can only delete dataset groups that have a status of
         * <code>ACTIVE</code>, <code>CREATE_FAILED</code>, or <code>UPDATE_FAILED</code>.
         * To get the status, use the <a>DescribeDatasetGroup</a> operation.</p> <p>This
         * operation deletes only the dataset group, not the datasets in the
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/DeleteDatasetGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDatasetGroupOutcomeCallable DeleteDatasetGroupCallable(const Model::DeleteDatasetGroupRequest& request) const;

        /**
         * <p>Deletes a dataset group created using the <a>CreateDatasetGroup</a>
         * operation. You can only delete dataset groups that have a status of
         * <code>ACTIVE</code>, <code>CREATE_FAILED</code>, or <code>UPDATE_FAILED</code>.
         * To get the status, use the <a>DescribeDatasetGroup</a> operation.</p> <p>This
         * operation deletes only the dataset group, not the datasets in the
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/DeleteDatasetGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDatasetGroupAsync(const Model::DeleteDatasetGroupRequest& request, const DeleteDatasetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a dataset import job created using the <a>CreateDatasetImportJob</a>
         * operation. You can delete only dataset import jobs that have a status of
         * <code>ACTIVE</code> or <code>CREATE_FAILED</code>. To get the status, use the
         * <a>DescribeDatasetImportJob</a> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/DeleteDatasetImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDatasetImportJobOutcome DeleteDatasetImportJob(const Model::DeleteDatasetImportJobRequest& request) const;

        /**
         * <p>Deletes a dataset import job created using the <a>CreateDatasetImportJob</a>
         * operation. You can delete only dataset import jobs that have a status of
         * <code>ACTIVE</code> or <code>CREATE_FAILED</code>. To get the status, use the
         * <a>DescribeDatasetImportJob</a> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/DeleteDatasetImportJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDatasetImportJobOutcomeCallable DeleteDatasetImportJobCallable(const Model::DeleteDatasetImportJobRequest& request) const;

        /**
         * <p>Deletes a dataset import job created using the <a>CreateDatasetImportJob</a>
         * operation. You can delete only dataset import jobs that have a status of
         * <code>ACTIVE</code> or <code>CREATE_FAILED</code>. To get the status, use the
         * <a>DescribeDatasetImportJob</a> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/DeleteDatasetImportJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDatasetImportJobAsync(const Model::DeleteDatasetImportJobRequest& request, const DeleteDatasetImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a forecast created using the <a>CreateForecast</a> operation. You can
         * delete only forecasts that have a status of <code>ACTIVE</code> or
         * <code>CREATE_FAILED</code>. To get the status, use the <a>DescribeForecast</a>
         * operation.</p> <p>You can't delete a forecast while it is being exported. After
         * a forecast is deleted, you can no longer query the forecast.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/DeleteForecast">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteForecastOutcome DeleteForecast(const Model::DeleteForecastRequest& request) const;

        /**
         * <p>Deletes a forecast created using the <a>CreateForecast</a> operation. You can
         * delete only forecasts that have a status of <code>ACTIVE</code> or
         * <code>CREATE_FAILED</code>. To get the status, use the <a>DescribeForecast</a>
         * operation.</p> <p>You can't delete a forecast while it is being exported. After
         * a forecast is deleted, you can no longer query the forecast.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/DeleteForecast">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteForecastOutcomeCallable DeleteForecastCallable(const Model::DeleteForecastRequest& request) const;

        /**
         * <p>Deletes a forecast created using the <a>CreateForecast</a> operation. You can
         * delete only forecasts that have a status of <code>ACTIVE</code> or
         * <code>CREATE_FAILED</code>. To get the status, use the <a>DescribeForecast</a>
         * operation.</p> <p>You can't delete a forecast while it is being exported. After
         * a forecast is deleted, you can no longer query the forecast.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/DeleteForecast">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteForecastAsync(const Model::DeleteForecastRequest& request, const DeleteForecastResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a forecast export job created using the
         * <a>CreateForecastExportJob</a> operation. You can delete only export jobs that
         * have a status of <code>ACTIVE</code> or <code>CREATE_FAILED</code>. To get the
         * status, use the <a>DescribeForecastExportJob</a> operation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/DeleteForecastExportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteForecastExportJobOutcome DeleteForecastExportJob(const Model::DeleteForecastExportJobRequest& request) const;

        /**
         * <p>Deletes a forecast export job created using the
         * <a>CreateForecastExportJob</a> operation. You can delete only export jobs that
         * have a status of <code>ACTIVE</code> or <code>CREATE_FAILED</code>. To get the
         * status, use the <a>DescribeForecastExportJob</a> operation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/DeleteForecastExportJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteForecastExportJobOutcomeCallable DeleteForecastExportJobCallable(const Model::DeleteForecastExportJobRequest& request) const;

        /**
         * <p>Deletes a forecast export job created using the
         * <a>CreateForecastExportJob</a> operation. You can delete only export jobs that
         * have a status of <code>ACTIVE</code> or <code>CREATE_FAILED</code>. To get the
         * status, use the <a>DescribeForecastExportJob</a> operation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/DeleteForecastExportJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteForecastExportJobAsync(const Model::DeleteForecastExportJobRequest& request, const DeleteForecastExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a predictor created using the <a>CreatePredictor</a> operation. You
         * can delete only predictor that have a status of <code>ACTIVE</code> or
         * <code>CREATE_FAILED</code>. To get the status, use the <a>DescribePredictor</a>
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/DeletePredictor">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePredictorOutcome DeletePredictor(const Model::DeletePredictorRequest& request) const;

        /**
         * <p>Deletes a predictor created using the <a>CreatePredictor</a> operation. You
         * can delete only predictor that have a status of <code>ACTIVE</code> or
         * <code>CREATE_FAILED</code>. To get the status, use the <a>DescribePredictor</a>
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/DeletePredictor">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePredictorOutcomeCallable DeletePredictorCallable(const Model::DeletePredictorRequest& request) const;

        /**
         * <p>Deletes a predictor created using the <a>CreatePredictor</a> operation. You
         * can delete only predictor that have a status of <code>ACTIVE</code> or
         * <code>CREATE_FAILED</code>. To get the status, use the <a>DescribePredictor</a>
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/DeletePredictor">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePredictorAsync(const Model::DeletePredictorRequest& request, const DeletePredictorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a predictor backtest export job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/DeletePredictorBacktestExportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePredictorBacktestExportJobOutcome DeletePredictorBacktestExportJob(const Model::DeletePredictorBacktestExportJobRequest& request) const;

        /**
         * <p>Deletes a predictor backtest export job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/DeletePredictorBacktestExportJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePredictorBacktestExportJobOutcomeCallable DeletePredictorBacktestExportJobCallable(const Model::DeletePredictorBacktestExportJobRequest& request) const;

        /**
         * <p>Deletes a predictor backtest export job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/DeletePredictorBacktestExportJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePredictorBacktestExportJobAsync(const Model::DeletePredictorBacktestExportJobRequest& request, const DeletePredictorBacktestExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes an Amazon Forecast dataset created using the <a>CreateDataset</a>
         * operation.</p> <p>In addition to listing the parameters specified in the
         * <code>CreateDataset</code> request, this operation includes the following
         * dataset properties:</p> <ul> <li> <p> <code>CreationTime</code> </p> </li> <li>
         * <p> <code>LastModificationTime</code> </p> </li> <li> <p> <code>Status</code>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/DescribeDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDatasetOutcome DescribeDataset(const Model::DescribeDatasetRequest& request) const;

        /**
         * <p>Describes an Amazon Forecast dataset created using the <a>CreateDataset</a>
         * operation.</p> <p>In addition to listing the parameters specified in the
         * <code>CreateDataset</code> request, this operation includes the following
         * dataset properties:</p> <ul> <li> <p> <code>CreationTime</code> </p> </li> <li>
         * <p> <code>LastModificationTime</code> </p> </li> <li> <p> <code>Status</code>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/DescribeDataset">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDatasetOutcomeCallable DescribeDatasetCallable(const Model::DescribeDatasetRequest& request) const;

        /**
         * <p>Describes an Amazon Forecast dataset created using the <a>CreateDataset</a>
         * operation.</p> <p>In addition to listing the parameters specified in the
         * <code>CreateDataset</code> request, this operation includes the following
         * dataset properties:</p> <ul> <li> <p> <code>CreationTime</code> </p> </li> <li>
         * <p> <code>LastModificationTime</code> </p> </li> <li> <p> <code>Status</code>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/DescribeDataset">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDatasetAsync(const Model::DescribeDatasetRequest& request, const DescribeDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a dataset group created using the <a>CreateDatasetGroup</a>
         * operation.</p> <p>In addition to listing the parameters provided in the
         * <code>CreateDatasetGroup</code> request, this operation includes the following
         * properties:</p> <ul> <li> <p> <code>DatasetArns</code> - The datasets belonging
         * to the group.</p> </li> <li> <p> <code>CreationTime</code> </p> </li> <li> <p>
         * <code>LastModificationTime</code> </p> </li> <li> <p> <code>Status</code> </p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/DescribeDatasetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDatasetGroupOutcome DescribeDatasetGroup(const Model::DescribeDatasetGroupRequest& request) const;

        /**
         * <p>Describes a dataset group created using the <a>CreateDatasetGroup</a>
         * operation.</p> <p>In addition to listing the parameters provided in the
         * <code>CreateDatasetGroup</code> request, this operation includes the following
         * properties:</p> <ul> <li> <p> <code>DatasetArns</code> - The datasets belonging
         * to the group.</p> </li> <li> <p> <code>CreationTime</code> </p> </li> <li> <p>
         * <code>LastModificationTime</code> </p> </li> <li> <p> <code>Status</code> </p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/DescribeDatasetGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDatasetGroupOutcomeCallable DescribeDatasetGroupCallable(const Model::DescribeDatasetGroupRequest& request) const;

        /**
         * <p>Describes a dataset group created using the <a>CreateDatasetGroup</a>
         * operation.</p> <p>In addition to listing the parameters provided in the
         * <code>CreateDatasetGroup</code> request, this operation includes the following
         * properties:</p> <ul> <li> <p> <code>DatasetArns</code> - The datasets belonging
         * to the group.</p> </li> <li> <p> <code>CreationTime</code> </p> </li> <li> <p>
         * <code>LastModificationTime</code> </p> </li> <li> <p> <code>Status</code> </p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/DescribeDatasetGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDatasetGroupAsync(const Model::DescribeDatasetGroupRequest& request, const DescribeDatasetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a dataset import job created using the
         * <a>CreateDatasetImportJob</a> operation.</p> <p>In addition to listing the
         * parameters provided in the <code>CreateDatasetImportJob</code> request, this
         * operation includes the following properties:</p> <ul> <li> <p>
         * <code>CreationTime</code> </p> </li> <li> <p> <code>LastModificationTime</code>
         * </p> </li> <li> <p> <code>DataSize</code> </p> </li> <li> <p>
         * <code>FieldStatistics</code> </p> </li> <li> <p> <code>Status</code> </p> </li>
         * <li> <p> <code>Message</code> - If an error occurred, information about the
         * error.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/DescribeDatasetImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDatasetImportJobOutcome DescribeDatasetImportJob(const Model::DescribeDatasetImportJobRequest& request) const;

        /**
         * <p>Describes a dataset import job created using the
         * <a>CreateDatasetImportJob</a> operation.</p> <p>In addition to listing the
         * parameters provided in the <code>CreateDatasetImportJob</code> request, this
         * operation includes the following properties:</p> <ul> <li> <p>
         * <code>CreationTime</code> </p> </li> <li> <p> <code>LastModificationTime</code>
         * </p> </li> <li> <p> <code>DataSize</code> </p> </li> <li> <p>
         * <code>FieldStatistics</code> </p> </li> <li> <p> <code>Status</code> </p> </li>
         * <li> <p> <code>Message</code> - If an error occurred, information about the
         * error.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/DescribeDatasetImportJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDatasetImportJobOutcomeCallable DescribeDatasetImportJobCallable(const Model::DescribeDatasetImportJobRequest& request) const;

        /**
         * <p>Describes a dataset import job created using the
         * <a>CreateDatasetImportJob</a> operation.</p> <p>In addition to listing the
         * parameters provided in the <code>CreateDatasetImportJob</code> request, this
         * operation includes the following properties:</p> <ul> <li> <p>
         * <code>CreationTime</code> </p> </li> <li> <p> <code>LastModificationTime</code>
         * </p> </li> <li> <p> <code>DataSize</code> </p> </li> <li> <p>
         * <code>FieldStatistics</code> </p> </li> <li> <p> <code>Status</code> </p> </li>
         * <li> <p> <code>Message</code> - If an error occurred, information about the
         * error.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/DescribeDatasetImportJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDatasetImportJobAsync(const Model::DescribeDatasetImportJobRequest& request, const DescribeDatasetImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a forecast created using the <a>CreateForecast</a> operation.</p>
         * <p>In addition to listing the properties provided in the
         * <code>CreateForecast</code> request, this operation lists the following
         * properties:</p> <ul> <li> <p> <code>DatasetGroupArn</code> - The dataset group
         * that provided the training data.</p> </li> <li> <p> <code>CreationTime</code>
         * </p> </li> <li> <p> <code>LastModificationTime</code> </p> </li> <li> <p>
         * <code>Status</code> </p> </li> <li> <p> <code>Message</code> - If an error
         * occurred, information about the error.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/DescribeForecast">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeForecastOutcome DescribeForecast(const Model::DescribeForecastRequest& request) const;

        /**
         * <p>Describes a forecast created using the <a>CreateForecast</a> operation.</p>
         * <p>In addition to listing the properties provided in the
         * <code>CreateForecast</code> request, this operation lists the following
         * properties:</p> <ul> <li> <p> <code>DatasetGroupArn</code> - The dataset group
         * that provided the training data.</p> </li> <li> <p> <code>CreationTime</code>
         * </p> </li> <li> <p> <code>LastModificationTime</code> </p> </li> <li> <p>
         * <code>Status</code> </p> </li> <li> <p> <code>Message</code> - If an error
         * occurred, information about the error.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/DescribeForecast">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeForecastOutcomeCallable DescribeForecastCallable(const Model::DescribeForecastRequest& request) const;

        /**
         * <p>Describes a forecast created using the <a>CreateForecast</a> operation.</p>
         * <p>In addition to listing the properties provided in the
         * <code>CreateForecast</code> request, this operation lists the following
         * properties:</p> <ul> <li> <p> <code>DatasetGroupArn</code> - The dataset group
         * that provided the training data.</p> </li> <li> <p> <code>CreationTime</code>
         * </p> </li> <li> <p> <code>LastModificationTime</code> </p> </li> <li> <p>
         * <code>Status</code> </p> </li> <li> <p> <code>Message</code> - If an error
         * occurred, information about the error.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/DescribeForecast">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeForecastAsync(const Model::DescribeForecastRequest& request, const DescribeForecastResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a forecast export job created using the
         * <a>CreateForecastExportJob</a> operation.</p> <p>In addition to listing the
         * properties provided by the user in the <code>CreateForecastExportJob</code>
         * request, this operation lists the following properties:</p> <ul> <li> <p>
         * <code>CreationTime</code> </p> </li> <li> <p> <code>LastModificationTime</code>
         * </p> </li> <li> <p> <code>Status</code> </p> </li> <li> <p> <code>Message</code>
         * - If an error occurred, information about the error.</p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/DescribeForecastExportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeForecastExportJobOutcome DescribeForecastExportJob(const Model::DescribeForecastExportJobRequest& request) const;

        /**
         * <p>Describes a forecast export job created using the
         * <a>CreateForecastExportJob</a> operation.</p> <p>In addition to listing the
         * properties provided by the user in the <code>CreateForecastExportJob</code>
         * request, this operation lists the following properties:</p> <ul> <li> <p>
         * <code>CreationTime</code> </p> </li> <li> <p> <code>LastModificationTime</code>
         * </p> </li> <li> <p> <code>Status</code> </p> </li> <li> <p> <code>Message</code>
         * - If an error occurred, information about the error.</p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/DescribeForecastExportJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeForecastExportJobOutcomeCallable DescribeForecastExportJobCallable(const Model::DescribeForecastExportJobRequest& request) const;

        /**
         * <p>Describes a forecast export job created using the
         * <a>CreateForecastExportJob</a> operation.</p> <p>In addition to listing the
         * properties provided by the user in the <code>CreateForecastExportJob</code>
         * request, this operation lists the following properties:</p> <ul> <li> <p>
         * <code>CreationTime</code> </p> </li> <li> <p> <code>LastModificationTime</code>
         * </p> </li> <li> <p> <code>Status</code> </p> </li> <li> <p> <code>Message</code>
         * - If an error occurred, information about the error.</p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/DescribeForecastExportJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeForecastExportJobAsync(const Model::DescribeForecastExportJobRequest& request, const DescribeForecastExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a predictor created using the <a>CreatePredictor</a> operation.</p>
         * <p>In addition to listing the properties provided in the
         * <code>CreatePredictor</code> request, this operation lists the following
         * properties:</p> <ul> <li> <p> <code>DatasetImportJobArns</code> - The dataset
         * import jobs used to import training data.</p> </li> <li> <p>
         * <code>AutoMLAlgorithmArns</code> - If AutoML is performed, the algorithms that
         * were evaluated.</p> </li> <li> <p> <code>CreationTime</code> </p> </li> <li> <p>
         * <code>LastModificationTime</code> </p> </li> <li> <p> <code>Status</code> </p>
         * </li> <li> <p> <code>Message</code> - If an error occurred, information about
         * the error.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/DescribePredictor">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePredictorOutcome DescribePredictor(const Model::DescribePredictorRequest& request) const;

        /**
         * <p>Describes a predictor created using the <a>CreatePredictor</a> operation.</p>
         * <p>In addition to listing the properties provided in the
         * <code>CreatePredictor</code> request, this operation lists the following
         * properties:</p> <ul> <li> <p> <code>DatasetImportJobArns</code> - The dataset
         * import jobs used to import training data.</p> </li> <li> <p>
         * <code>AutoMLAlgorithmArns</code> - If AutoML is performed, the algorithms that
         * were evaluated.</p> </li> <li> <p> <code>CreationTime</code> </p> </li> <li> <p>
         * <code>LastModificationTime</code> </p> </li> <li> <p> <code>Status</code> </p>
         * </li> <li> <p> <code>Message</code> - If an error occurred, information about
         * the error.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/DescribePredictor">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePredictorOutcomeCallable DescribePredictorCallable(const Model::DescribePredictorRequest& request) const;

        /**
         * <p>Describes a predictor created using the <a>CreatePredictor</a> operation.</p>
         * <p>In addition to listing the properties provided in the
         * <code>CreatePredictor</code> request, this operation lists the following
         * properties:</p> <ul> <li> <p> <code>DatasetImportJobArns</code> - The dataset
         * import jobs used to import training data.</p> </li> <li> <p>
         * <code>AutoMLAlgorithmArns</code> - If AutoML is performed, the algorithms that
         * were evaluated.</p> </li> <li> <p> <code>CreationTime</code> </p> </li> <li> <p>
         * <code>LastModificationTime</code> </p> </li> <li> <p> <code>Status</code> </p>
         * </li> <li> <p> <code>Message</code> - If an error occurred, information about
         * the error.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/DescribePredictor">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePredictorAsync(const Model::DescribePredictorRequest& request, const DescribePredictorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a predictor backtest export job created using the
         * <a>CreatePredictorBacktestExportJob</a> operation.</p> <p>In addition to listing
         * the properties provided by the user in the
         * <code>CreatePredictorBacktestExportJob</code> request, this operation lists the
         * following properties:</p> <ul> <li> <p> <code>CreationTime</code> </p> </li>
         * <li> <p> <code>LastModificationTime</code> </p> </li> <li> <p>
         * <code>Status</code> </p> </li> <li> <p> <code>Message</code> (if an error
         * occurred)</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/DescribePredictorBacktestExportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePredictorBacktestExportJobOutcome DescribePredictorBacktestExportJob(const Model::DescribePredictorBacktestExportJobRequest& request) const;

        /**
         * <p>Describes a predictor backtest export job created using the
         * <a>CreatePredictorBacktestExportJob</a> operation.</p> <p>In addition to listing
         * the properties provided by the user in the
         * <code>CreatePredictorBacktestExportJob</code> request, this operation lists the
         * following properties:</p> <ul> <li> <p> <code>CreationTime</code> </p> </li>
         * <li> <p> <code>LastModificationTime</code> </p> </li> <li> <p>
         * <code>Status</code> </p> </li> <li> <p> <code>Message</code> (if an error
         * occurred)</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/DescribePredictorBacktestExportJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePredictorBacktestExportJobOutcomeCallable DescribePredictorBacktestExportJobCallable(const Model::DescribePredictorBacktestExportJobRequest& request) const;

        /**
         * <p>Describes a predictor backtest export job created using the
         * <a>CreatePredictorBacktestExportJob</a> operation.</p> <p>In addition to listing
         * the properties provided by the user in the
         * <code>CreatePredictorBacktestExportJob</code> request, this operation lists the
         * following properties:</p> <ul> <li> <p> <code>CreationTime</code> </p> </li>
         * <li> <p> <code>LastModificationTime</code> </p> </li> <li> <p>
         * <code>Status</code> </p> </li> <li> <p> <code>Message</code> (if an error
         * occurred)</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/DescribePredictorBacktestExportJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePredictorBacktestExportJobAsync(const Model::DescribePredictorBacktestExportJobRequest& request, const DescribePredictorBacktestExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides metrics on the accuracy of the models that were trained by the
         * <a>CreatePredictor</a> operation. Use metrics to see how well the model
         * performed and to decide whether to use the predictor to generate a forecast. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/forecast/latest/dg/metrics.html">Predictor
         * Metrics</a>.</p> <p>This operation generates metrics for each backtest window
         * that was evaluated. The number of backtest windows
         * (<code>NumberOfBacktestWindows</code>) is specified using the
         * <a>EvaluationParameters</a> object, which is optionally included in the
         * <code>CreatePredictor</code> request. If <code>NumberOfBacktestWindows</code>
         * isn't specified, the number defaults to one.</p> <p>The parameters of the
         * <code>filling</code> method determine which items contribute to the metrics. If
         * you want all items to contribute, specify <code>zero</code>. If you want only
         * those items that have complete data in the range being evaluated to contribute,
         * specify <code>nan</code>. For more information, see
         * <a>FeaturizationMethod</a>.</p>  <p>Before you can get accuracy metrics,
         * the <code>Status</code> of the predictor must be <code>ACTIVE</code>, signifying
         * that training has completed. To get the status, use the <a>DescribePredictor</a>
         * operation.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/GetAccuracyMetrics">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccuracyMetricsOutcome GetAccuracyMetrics(const Model::GetAccuracyMetricsRequest& request) const;

        /**
         * <p>Provides metrics on the accuracy of the models that were trained by the
         * <a>CreatePredictor</a> operation. Use metrics to see how well the model
         * performed and to decide whether to use the predictor to generate a forecast. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/forecast/latest/dg/metrics.html">Predictor
         * Metrics</a>.</p> <p>This operation generates metrics for each backtest window
         * that was evaluated. The number of backtest windows
         * (<code>NumberOfBacktestWindows</code>) is specified using the
         * <a>EvaluationParameters</a> object, which is optionally included in the
         * <code>CreatePredictor</code> request. If <code>NumberOfBacktestWindows</code>
         * isn't specified, the number defaults to one.</p> <p>The parameters of the
         * <code>filling</code> method determine which items contribute to the metrics. If
         * you want all items to contribute, specify <code>zero</code>. If you want only
         * those items that have complete data in the range being evaluated to contribute,
         * specify <code>nan</code>. For more information, see
         * <a>FeaturizationMethod</a>.</p>  <p>Before you can get accuracy metrics,
         * the <code>Status</code> of the predictor must be <code>ACTIVE</code>, signifying
         * that training has completed. To get the status, use the <a>DescribePredictor</a>
         * operation.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/GetAccuracyMetrics">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAccuracyMetricsOutcomeCallable GetAccuracyMetricsCallable(const Model::GetAccuracyMetricsRequest& request) const;

        /**
         * <p>Provides metrics on the accuracy of the models that were trained by the
         * <a>CreatePredictor</a> operation. Use metrics to see how well the model
         * performed and to decide whether to use the predictor to generate a forecast. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/forecast/latest/dg/metrics.html">Predictor
         * Metrics</a>.</p> <p>This operation generates metrics for each backtest window
         * that was evaluated. The number of backtest windows
         * (<code>NumberOfBacktestWindows</code>) is specified using the
         * <a>EvaluationParameters</a> object, which is optionally included in the
         * <code>CreatePredictor</code> request. If <code>NumberOfBacktestWindows</code>
         * isn't specified, the number defaults to one.</p> <p>The parameters of the
         * <code>filling</code> method determine which items contribute to the metrics. If
         * you want all items to contribute, specify <code>zero</code>. If you want only
         * those items that have complete data in the range being evaluated to contribute,
         * specify <code>nan</code>. For more information, see
         * <a>FeaturizationMethod</a>.</p>  <p>Before you can get accuracy metrics,
         * the <code>Status</code> of the predictor must be <code>ACTIVE</code>, signifying
         * that training has completed. To get the status, use the <a>DescribePredictor</a>
         * operation.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/GetAccuracyMetrics">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAccuracyMetricsAsync(const Model::GetAccuracyMetricsRequest& request, const GetAccuracyMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of dataset groups created using the <a>CreateDatasetGroup</a>
         * operation. For each dataset group, this operation returns a summary of its
         * properties, including its Amazon Resource Name (ARN). You can retrieve the
         * complete set of properties by using the dataset group ARN with the
         * <a>DescribeDatasetGroup</a> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/ListDatasetGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDatasetGroupsOutcome ListDatasetGroups(const Model::ListDatasetGroupsRequest& request) const;

        /**
         * <p>Returns a list of dataset groups created using the <a>CreateDatasetGroup</a>
         * operation. For each dataset group, this operation returns a summary of its
         * properties, including its Amazon Resource Name (ARN). You can retrieve the
         * complete set of properties by using the dataset group ARN with the
         * <a>DescribeDatasetGroup</a> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/ListDatasetGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDatasetGroupsOutcomeCallable ListDatasetGroupsCallable(const Model::ListDatasetGroupsRequest& request) const;

        /**
         * <p>Returns a list of dataset groups created using the <a>CreateDatasetGroup</a>
         * operation. For each dataset group, this operation returns a summary of its
         * properties, including its Amazon Resource Name (ARN). You can retrieve the
         * complete set of properties by using the dataset group ARN with the
         * <a>DescribeDatasetGroup</a> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/ListDatasetGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDatasetGroupsAsync(const Model::ListDatasetGroupsRequest& request, const ListDatasetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of dataset import jobs created using the
         * <a>CreateDatasetImportJob</a> operation. For each import job, this operation
         * returns a summary of its properties, including its Amazon Resource Name (ARN).
         * You can retrieve the complete set of properties by using the ARN with the
         * <a>DescribeDatasetImportJob</a> operation. You can filter the list by providing
         * an array of <a>Filter</a> objects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/ListDatasetImportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDatasetImportJobsOutcome ListDatasetImportJobs(const Model::ListDatasetImportJobsRequest& request) const;

        /**
         * <p>Returns a list of dataset import jobs created using the
         * <a>CreateDatasetImportJob</a> operation. For each import job, this operation
         * returns a summary of its properties, including its Amazon Resource Name (ARN).
         * You can retrieve the complete set of properties by using the ARN with the
         * <a>DescribeDatasetImportJob</a> operation. You can filter the list by providing
         * an array of <a>Filter</a> objects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/ListDatasetImportJobs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDatasetImportJobsOutcomeCallable ListDatasetImportJobsCallable(const Model::ListDatasetImportJobsRequest& request) const;

        /**
         * <p>Returns a list of dataset import jobs created using the
         * <a>CreateDatasetImportJob</a> operation. For each import job, this operation
         * returns a summary of its properties, including its Amazon Resource Name (ARN).
         * You can retrieve the complete set of properties by using the ARN with the
         * <a>DescribeDatasetImportJob</a> operation. You can filter the list by providing
         * an array of <a>Filter</a> objects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/ListDatasetImportJobs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDatasetImportJobsAsync(const Model::ListDatasetImportJobsRequest& request, const ListDatasetImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of datasets created using the <a>CreateDataset</a> operation.
         * For each dataset, a summary of its properties, including its Amazon Resource
         * Name (ARN), is returned. To retrieve the complete set of properties, use the ARN
         * with the <a>DescribeDataset</a> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/ListDatasets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDatasetsOutcome ListDatasets(const Model::ListDatasetsRequest& request) const;

        /**
         * <p>Returns a list of datasets created using the <a>CreateDataset</a> operation.
         * For each dataset, a summary of its properties, including its Amazon Resource
         * Name (ARN), is returned. To retrieve the complete set of properties, use the ARN
         * with the <a>DescribeDataset</a> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/ListDatasets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDatasetsOutcomeCallable ListDatasetsCallable(const Model::ListDatasetsRequest& request) const;

        /**
         * <p>Returns a list of datasets created using the <a>CreateDataset</a> operation.
         * For each dataset, a summary of its properties, including its Amazon Resource
         * Name (ARN), is returned. To retrieve the complete set of properties, use the ARN
         * with the <a>DescribeDataset</a> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/ListDatasets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDatasetsAsync(const Model::ListDatasetsRequest& request, const ListDatasetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of forecast export jobs created using the
         * <a>CreateForecastExportJob</a> operation. For each forecast export job, this
         * operation returns a summary of its properties, including its Amazon Resource
         * Name (ARN). To retrieve the complete set of properties, use the ARN with the
         * <a>DescribeForecastExportJob</a> operation. You can filter the list using an
         * array of <a>Filter</a> objects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/ListForecastExportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListForecastExportJobsOutcome ListForecastExportJobs(const Model::ListForecastExportJobsRequest& request) const;

        /**
         * <p>Returns a list of forecast export jobs created using the
         * <a>CreateForecastExportJob</a> operation. For each forecast export job, this
         * operation returns a summary of its properties, including its Amazon Resource
         * Name (ARN). To retrieve the complete set of properties, use the ARN with the
         * <a>DescribeForecastExportJob</a> operation. You can filter the list using an
         * array of <a>Filter</a> objects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/ListForecastExportJobs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListForecastExportJobsOutcomeCallable ListForecastExportJobsCallable(const Model::ListForecastExportJobsRequest& request) const;

        /**
         * <p>Returns a list of forecast export jobs created using the
         * <a>CreateForecastExportJob</a> operation. For each forecast export job, this
         * operation returns a summary of its properties, including its Amazon Resource
         * Name (ARN). To retrieve the complete set of properties, use the ARN with the
         * <a>DescribeForecastExportJob</a> operation. You can filter the list using an
         * array of <a>Filter</a> objects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/ListForecastExportJobs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListForecastExportJobsAsync(const Model::ListForecastExportJobsRequest& request, const ListForecastExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of forecasts created using the <a>CreateForecast</a>
         * operation. For each forecast, this operation returns a summary of its
         * properties, including its Amazon Resource Name (ARN). To retrieve the complete
         * set of properties, specify the ARN with the <a>DescribeForecast</a> operation.
         * You can filter the list using an array of <a>Filter</a> objects.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/ListForecasts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListForecastsOutcome ListForecasts(const Model::ListForecastsRequest& request) const;

        /**
         * <p>Returns a list of forecasts created using the <a>CreateForecast</a>
         * operation. For each forecast, this operation returns a summary of its
         * properties, including its Amazon Resource Name (ARN). To retrieve the complete
         * set of properties, specify the ARN with the <a>DescribeForecast</a> operation.
         * You can filter the list using an array of <a>Filter</a> objects.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/ListForecasts">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListForecastsOutcomeCallable ListForecastsCallable(const Model::ListForecastsRequest& request) const;

        /**
         * <p>Returns a list of forecasts created using the <a>CreateForecast</a>
         * operation. For each forecast, this operation returns a summary of its
         * properties, including its Amazon Resource Name (ARN). To retrieve the complete
         * set of properties, specify the ARN with the <a>DescribeForecast</a> operation.
         * You can filter the list using an array of <a>Filter</a> objects.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/ListForecasts">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListForecastsAsync(const Model::ListForecastsRequest& request, const ListForecastsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of predictor backtest export jobs created using the
         * <a>CreatePredictorBacktestExportJob</a> operation. This operation returns a
         * summary for each backtest export job. You can filter the list using an array of
         * <a>Filter</a> objects.</p> <p>To retrieve the complete set of properties for a
         * particular backtest export job, use the ARN with the
         * <a>DescribePredictorBacktestExportJob</a> operation.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/ListPredictorBacktestExportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPredictorBacktestExportJobsOutcome ListPredictorBacktestExportJobs(const Model::ListPredictorBacktestExportJobsRequest& request) const;

        /**
         * <p>Returns a list of predictor backtest export jobs created using the
         * <a>CreatePredictorBacktestExportJob</a> operation. This operation returns a
         * summary for each backtest export job. You can filter the list using an array of
         * <a>Filter</a> objects.</p> <p>To retrieve the complete set of properties for a
         * particular backtest export job, use the ARN with the
         * <a>DescribePredictorBacktestExportJob</a> operation.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/ListPredictorBacktestExportJobs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPredictorBacktestExportJobsOutcomeCallable ListPredictorBacktestExportJobsCallable(const Model::ListPredictorBacktestExportJobsRequest& request) const;

        /**
         * <p>Returns a list of predictor backtest export jobs created using the
         * <a>CreatePredictorBacktestExportJob</a> operation. This operation returns a
         * summary for each backtest export job. You can filter the list using an array of
         * <a>Filter</a> objects.</p> <p>To retrieve the complete set of properties for a
         * particular backtest export job, use the ARN with the
         * <a>DescribePredictorBacktestExportJob</a> operation.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/ListPredictorBacktestExportJobs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPredictorBacktestExportJobsAsync(const Model::ListPredictorBacktestExportJobsRequest& request, const ListPredictorBacktestExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of predictors created using the <a>CreatePredictor</a>
         * operation. For each predictor, this operation returns a summary of its
         * properties, including its Amazon Resource Name (ARN). You can retrieve the
         * complete set of properties by using the ARN with the <a>DescribePredictor</a>
         * operation. You can filter the list using an array of <a>Filter</a>
         * objects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/ListPredictors">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPredictorsOutcome ListPredictors(const Model::ListPredictorsRequest& request) const;

        /**
         * <p>Returns a list of predictors created using the <a>CreatePredictor</a>
         * operation. For each predictor, this operation returns a summary of its
         * properties, including its Amazon Resource Name (ARN). You can retrieve the
         * complete set of properties by using the ARN with the <a>DescribePredictor</a>
         * operation. You can filter the list using an array of <a>Filter</a>
         * objects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/ListPredictors">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPredictorsOutcomeCallable ListPredictorsCallable(const Model::ListPredictorsRequest& request) const;

        /**
         * <p>Returns a list of predictors created using the <a>CreatePredictor</a>
         * operation. For each predictor, this operation returns a summary of its
         * properties, including its Amazon Resource Name (ARN). You can retrieve the
         * complete set of properties by using the ARN with the <a>DescribePredictor</a>
         * operation. You can filter the list using an array of <a>Filter</a>
         * objects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/ListPredictors">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPredictorsAsync(const Model::ListPredictorsRequest& request, const ListPredictorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags for an Amazon Forecast resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists the tags for an Amazon Forecast resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists the tags for an Amazon Forecast resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops a resource.</p> <p>The resource undergoes the following states:
         * <code>CREATE_STOPPING</code> and <code>CREATE_STOPPED</code>. You cannot resume
         * a resource once it has been stopped.</p> <p>This operation can be applied to the
         * following resources (and their corresponding child resources):</p> <ul> <li>
         * <p>Dataset Import Job</p> </li> <li> <p>Predictor Job</p> </li> <li> <p>Forecast
         * Job</p> </li> <li> <p>Forecast Export Job</p> </li> <li> <p>Predictor Backtest
         * Export Job</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/StopResource">AWS
         * API Reference</a></p>
         */
        virtual Model::StopResourceOutcome StopResource(const Model::StopResourceRequest& request) const;

        /**
         * <p>Stops a resource.</p> <p>The resource undergoes the following states:
         * <code>CREATE_STOPPING</code> and <code>CREATE_STOPPED</code>. You cannot resume
         * a resource once it has been stopped.</p> <p>This operation can be applied to the
         * following resources (and their corresponding child resources):</p> <ul> <li>
         * <p>Dataset Import Job</p> </li> <li> <p>Predictor Job</p> </li> <li> <p>Forecast
         * Job</p> </li> <li> <p>Forecast Export Job</p> </li> <li> <p>Predictor Backtest
         * Export Job</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/StopResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopResourceOutcomeCallable StopResourceCallable(const Model::StopResourceRequest& request) const;

        /**
         * <p>Stops a resource.</p> <p>The resource undergoes the following states:
         * <code>CREATE_STOPPING</code> and <code>CREATE_STOPPED</code>. You cannot resume
         * a resource once it has been stopped.</p> <p>This operation can be applied to the
         * following resources (and their corresponding child resources):</p> <ul> <li>
         * <p>Dataset Import Job</p> </li> <li> <p>Predictor Job</p> </li> <li> <p>Forecast
         * Job</p> </li> <li> <p>Forecast Export Job</p> </li> <li> <p>Predictor Backtest
         * Export Job</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/StopResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopResourceAsync(const Model::StopResourceRequest& request, const StopResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates the specified tags to a resource with the specified
         * <code>resourceArn</code>. If existing tags on a resource are not specified in
         * the request parameters, they are not changed. When a resource is deleted, the
         * tags associated with that resource are also deleted.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Associates the specified tags to a resource with the specified
         * <code>resourceArn</code>. If existing tags on a resource are not specified in
         * the request parameters, they are not changed. When a resource is deleted, the
         * tags associated with that resource are also deleted.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Associates the specified tags to a resource with the specified
         * <code>resourceArn</code>. If existing tags on a resource are not specified in
         * the request parameters, they are not changed. When a resource is deleted, the
         * tags associated with that resource are also deleted.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Deletes the specified tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Deletes the specified tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Replaces the datasets in a dataset group with the specified datasets.</p>
         *  <p>The <code>Status</code> of the dataset group must be
         * <code>ACTIVE</code> before you can use the dataset group to create a predictor.
         * Use the <a>DescribeDatasetGroup</a> operation to get the status.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/UpdateDatasetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDatasetGroupOutcome UpdateDatasetGroup(const Model::UpdateDatasetGroupRequest& request) const;

        /**
         * <p>Replaces the datasets in a dataset group with the specified datasets.</p>
         *  <p>The <code>Status</code> of the dataset group must be
         * <code>ACTIVE</code> before you can use the dataset group to create a predictor.
         * Use the <a>DescribeDatasetGroup</a> operation to get the status.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/UpdateDatasetGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDatasetGroupOutcomeCallable UpdateDatasetGroupCallable(const Model::UpdateDatasetGroupRequest& request) const;

        /**
         * <p>Replaces the datasets in a dataset group with the specified datasets.</p>
         *  <p>The <code>Status</code> of the dataset group must be
         * <code>ACTIVE</code> before you can use the dataset group to create a predictor.
         * Use the <a>DescribeDatasetGroup</a> operation to get the status.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/UpdateDatasetGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDatasetGroupAsync(const Model::UpdateDatasetGroupRequest& request, const UpdateDatasetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateDatasetAsyncHelper(const Model::CreateDatasetRequest& request, const CreateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDatasetGroupAsyncHelper(const Model::CreateDatasetGroupRequest& request, const CreateDatasetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDatasetImportJobAsyncHelper(const Model::CreateDatasetImportJobRequest& request, const CreateDatasetImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateForecastAsyncHelper(const Model::CreateForecastRequest& request, const CreateForecastResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateForecastExportJobAsyncHelper(const Model::CreateForecastExportJobRequest& request, const CreateForecastExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePredictorAsyncHelper(const Model::CreatePredictorRequest& request, const CreatePredictorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePredictorBacktestExportJobAsyncHelper(const Model::CreatePredictorBacktestExportJobRequest& request, const CreatePredictorBacktestExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDatasetAsyncHelper(const Model::DeleteDatasetRequest& request, const DeleteDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDatasetGroupAsyncHelper(const Model::DeleteDatasetGroupRequest& request, const DeleteDatasetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDatasetImportJobAsyncHelper(const Model::DeleteDatasetImportJobRequest& request, const DeleteDatasetImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteForecastAsyncHelper(const Model::DeleteForecastRequest& request, const DeleteForecastResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteForecastExportJobAsyncHelper(const Model::DeleteForecastExportJobRequest& request, const DeleteForecastExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePredictorAsyncHelper(const Model::DeletePredictorRequest& request, const DeletePredictorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePredictorBacktestExportJobAsyncHelper(const Model::DeletePredictorBacktestExportJobRequest& request, const DeletePredictorBacktestExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDatasetAsyncHelper(const Model::DescribeDatasetRequest& request, const DescribeDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDatasetGroupAsyncHelper(const Model::DescribeDatasetGroupRequest& request, const DescribeDatasetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDatasetImportJobAsyncHelper(const Model::DescribeDatasetImportJobRequest& request, const DescribeDatasetImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeForecastAsyncHelper(const Model::DescribeForecastRequest& request, const DescribeForecastResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeForecastExportJobAsyncHelper(const Model::DescribeForecastExportJobRequest& request, const DescribeForecastExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribePredictorAsyncHelper(const Model::DescribePredictorRequest& request, const DescribePredictorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribePredictorBacktestExportJobAsyncHelper(const Model::DescribePredictorBacktestExportJobRequest& request, const DescribePredictorBacktestExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAccuracyMetricsAsyncHelper(const Model::GetAccuracyMetricsRequest& request, const GetAccuracyMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDatasetGroupsAsyncHelper(const Model::ListDatasetGroupsRequest& request, const ListDatasetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDatasetImportJobsAsyncHelper(const Model::ListDatasetImportJobsRequest& request, const ListDatasetImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDatasetsAsyncHelper(const Model::ListDatasetsRequest& request, const ListDatasetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListForecastExportJobsAsyncHelper(const Model::ListForecastExportJobsRequest& request, const ListForecastExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListForecastsAsyncHelper(const Model::ListForecastsRequest& request, const ListForecastsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPredictorBacktestExportJobsAsyncHelper(const Model::ListPredictorBacktestExportJobsRequest& request, const ListPredictorBacktestExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPredictorsAsyncHelper(const Model::ListPredictorsRequest& request, const ListPredictorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopResourceAsyncHelper(const Model::StopResourceRequest& request, const StopResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDatasetGroupAsyncHelper(const Model::UpdateDatasetGroupRequest& request, const UpdateDatasetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace ForecastService
} // namespace Aws
