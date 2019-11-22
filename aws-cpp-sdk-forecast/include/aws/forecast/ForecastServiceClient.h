/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
#include <aws/forecast/model/DescribeDatasetResult.h>
#include <aws/forecast/model/DescribeDatasetGroupResult.h>
#include <aws/forecast/model/DescribeDatasetImportJobResult.h>
#include <aws/forecast/model/DescribeForecastResult.h>
#include <aws/forecast/model/DescribeForecastExportJobResult.h>
#include <aws/forecast/model/DescribePredictorResult.h>
#include <aws/forecast/model/GetAccuracyMetricsResult.h>
#include <aws/forecast/model/ListDatasetGroupsResult.h>
#include <aws/forecast/model/ListDatasetImportJobsResult.h>
#include <aws/forecast/model/ListDatasetsResult.h>
#include <aws/forecast/model/ListForecastExportJobsResult.h>
#include <aws/forecast/model/ListForecastsResult.h>
#include <aws/forecast/model/ListPredictorsResult.h>
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
        class DeleteDatasetRequest;
        class DeleteDatasetGroupRequest;
        class DeleteDatasetImportJobRequest;
        class DeleteForecastRequest;
        class DeleteForecastExportJobRequest;
        class DeletePredictorRequest;
        class DescribeDatasetRequest;
        class DescribeDatasetGroupRequest;
        class DescribeDatasetImportJobRequest;
        class DescribeForecastRequest;
        class DescribeForecastExportJobRequest;
        class DescribePredictorRequest;
        class GetAccuracyMetricsRequest;
        class ListDatasetGroupsRequest;
        class ListDatasetImportJobsRequest;
        class ListDatasetsRequest;
        class ListForecastExportJobsRequest;
        class ListForecastsRequest;
        class ListPredictorsRequest;
        class UpdateDatasetGroupRequest;

        typedef Aws::Utils::Outcome<CreateDatasetResult, Aws::Client::AWSError<ForecastServiceErrors>> CreateDatasetOutcome;
        typedef Aws::Utils::Outcome<CreateDatasetGroupResult, Aws::Client::AWSError<ForecastServiceErrors>> CreateDatasetGroupOutcome;
        typedef Aws::Utils::Outcome<CreateDatasetImportJobResult, Aws::Client::AWSError<ForecastServiceErrors>> CreateDatasetImportJobOutcome;
        typedef Aws::Utils::Outcome<CreateForecastResult, Aws::Client::AWSError<ForecastServiceErrors>> CreateForecastOutcome;
        typedef Aws::Utils::Outcome<CreateForecastExportJobResult, Aws::Client::AWSError<ForecastServiceErrors>> CreateForecastExportJobOutcome;
        typedef Aws::Utils::Outcome<CreatePredictorResult, Aws::Client::AWSError<ForecastServiceErrors>> CreatePredictorOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<ForecastServiceErrors>> DeleteDatasetOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<ForecastServiceErrors>> DeleteDatasetGroupOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<ForecastServiceErrors>> DeleteDatasetImportJobOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<ForecastServiceErrors>> DeleteForecastOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<ForecastServiceErrors>> DeleteForecastExportJobOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<ForecastServiceErrors>> DeletePredictorOutcome;
        typedef Aws::Utils::Outcome<DescribeDatasetResult, Aws::Client::AWSError<ForecastServiceErrors>> DescribeDatasetOutcome;
        typedef Aws::Utils::Outcome<DescribeDatasetGroupResult, Aws::Client::AWSError<ForecastServiceErrors>> DescribeDatasetGroupOutcome;
        typedef Aws::Utils::Outcome<DescribeDatasetImportJobResult, Aws::Client::AWSError<ForecastServiceErrors>> DescribeDatasetImportJobOutcome;
        typedef Aws::Utils::Outcome<DescribeForecastResult, Aws::Client::AWSError<ForecastServiceErrors>> DescribeForecastOutcome;
        typedef Aws::Utils::Outcome<DescribeForecastExportJobResult, Aws::Client::AWSError<ForecastServiceErrors>> DescribeForecastExportJobOutcome;
        typedef Aws::Utils::Outcome<DescribePredictorResult, Aws::Client::AWSError<ForecastServiceErrors>> DescribePredictorOutcome;
        typedef Aws::Utils::Outcome<GetAccuracyMetricsResult, Aws::Client::AWSError<ForecastServiceErrors>> GetAccuracyMetricsOutcome;
        typedef Aws::Utils::Outcome<ListDatasetGroupsResult, Aws::Client::AWSError<ForecastServiceErrors>> ListDatasetGroupsOutcome;
        typedef Aws::Utils::Outcome<ListDatasetImportJobsResult, Aws::Client::AWSError<ForecastServiceErrors>> ListDatasetImportJobsOutcome;
        typedef Aws::Utils::Outcome<ListDatasetsResult, Aws::Client::AWSError<ForecastServiceErrors>> ListDatasetsOutcome;
        typedef Aws::Utils::Outcome<ListForecastExportJobsResult, Aws::Client::AWSError<ForecastServiceErrors>> ListForecastExportJobsOutcome;
        typedef Aws::Utils::Outcome<ListForecastsResult, Aws::Client::AWSError<ForecastServiceErrors>> ListForecastsOutcome;
        typedef Aws::Utils::Outcome<ListPredictorsResult, Aws::Client::AWSError<ForecastServiceErrors>> ListPredictorsOutcome;
        typedef Aws::Utils::Outcome<UpdateDatasetGroupResult, Aws::Client::AWSError<ForecastServiceErrors>> UpdateDatasetGroupOutcome;

        typedef std::future<CreateDatasetOutcome> CreateDatasetOutcomeCallable;
        typedef std::future<CreateDatasetGroupOutcome> CreateDatasetGroupOutcomeCallable;
        typedef std::future<CreateDatasetImportJobOutcome> CreateDatasetImportJobOutcomeCallable;
        typedef std::future<CreateForecastOutcome> CreateForecastOutcomeCallable;
        typedef std::future<CreateForecastExportJobOutcome> CreateForecastExportJobOutcomeCallable;
        typedef std::future<CreatePredictorOutcome> CreatePredictorOutcomeCallable;
        typedef std::future<DeleteDatasetOutcome> DeleteDatasetOutcomeCallable;
        typedef std::future<DeleteDatasetGroupOutcome> DeleteDatasetGroupOutcomeCallable;
        typedef std::future<DeleteDatasetImportJobOutcome> DeleteDatasetImportJobOutcomeCallable;
        typedef std::future<DeleteForecastOutcome> DeleteForecastOutcomeCallable;
        typedef std::future<DeleteForecastExportJobOutcome> DeleteForecastExportJobOutcomeCallable;
        typedef std::future<DeletePredictorOutcome> DeletePredictorOutcomeCallable;
        typedef std::future<DescribeDatasetOutcome> DescribeDatasetOutcomeCallable;
        typedef std::future<DescribeDatasetGroupOutcome> DescribeDatasetGroupOutcomeCallable;
        typedef std::future<DescribeDatasetImportJobOutcome> DescribeDatasetImportJobOutcomeCallable;
        typedef std::future<DescribeForecastOutcome> DescribeForecastOutcomeCallable;
        typedef std::future<DescribeForecastExportJobOutcome> DescribeForecastExportJobOutcomeCallable;
        typedef std::future<DescribePredictorOutcome> DescribePredictorOutcomeCallable;
        typedef std::future<GetAccuracyMetricsOutcome> GetAccuracyMetricsOutcomeCallable;
        typedef std::future<ListDatasetGroupsOutcome> ListDatasetGroupsOutcomeCallable;
        typedef std::future<ListDatasetImportJobsOutcome> ListDatasetImportJobsOutcomeCallable;
        typedef std::future<ListDatasetsOutcome> ListDatasetsOutcomeCallable;
        typedef std::future<ListForecastExportJobsOutcome> ListForecastExportJobsOutcomeCallable;
        typedef std::future<ListForecastsOutcome> ListForecastsOutcomeCallable;
        typedef std::future<ListPredictorsOutcome> ListPredictorsOutcomeCallable;
        typedef std::future<UpdateDatasetGroupOutcome> UpdateDatasetGroupOutcomeCallable;
} // namespace Model

  class ForecastServiceClient;

    typedef std::function<void(const ForecastServiceClient*, const Model::CreateDatasetRequest&, const Model::CreateDatasetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDatasetResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::CreateDatasetGroupRequest&, const Model::CreateDatasetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDatasetGroupResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::CreateDatasetImportJobRequest&, const Model::CreateDatasetImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDatasetImportJobResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::CreateForecastRequest&, const Model::CreateForecastOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateForecastResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::CreateForecastExportJobRequest&, const Model::CreateForecastExportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateForecastExportJobResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::CreatePredictorRequest&, const Model::CreatePredictorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePredictorResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::DeleteDatasetRequest&, const Model::DeleteDatasetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDatasetResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::DeleteDatasetGroupRequest&, const Model::DeleteDatasetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDatasetGroupResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::DeleteDatasetImportJobRequest&, const Model::DeleteDatasetImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDatasetImportJobResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::DeleteForecastRequest&, const Model::DeleteForecastOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteForecastResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::DeleteForecastExportJobRequest&, const Model::DeleteForecastExportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteForecastExportJobResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::DeletePredictorRequest&, const Model::DeletePredictorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePredictorResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::DescribeDatasetRequest&, const Model::DescribeDatasetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDatasetResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::DescribeDatasetGroupRequest&, const Model::DescribeDatasetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDatasetGroupResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::DescribeDatasetImportJobRequest&, const Model::DescribeDatasetImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDatasetImportJobResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::DescribeForecastRequest&, const Model::DescribeForecastOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeForecastResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::DescribeForecastExportJobRequest&, const Model::DescribeForecastExportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeForecastExportJobResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::DescribePredictorRequest&, const Model::DescribePredictorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePredictorResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::GetAccuracyMetricsRequest&, const Model::GetAccuracyMetricsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccuracyMetricsResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::ListDatasetGroupsRequest&, const Model::ListDatasetGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDatasetGroupsResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::ListDatasetImportJobsRequest&, const Model::ListDatasetImportJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDatasetImportJobsResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::ListDatasetsRequest&, const Model::ListDatasetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDatasetsResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::ListForecastExportJobsRequest&, const Model::ListForecastExportJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListForecastExportJobsResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::ListForecastsRequest&, const Model::ListForecastsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListForecastsResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::ListPredictorsRequest&, const Model::ListPredictorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPredictorsResponseReceivedHandler;
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

        inline virtual const char* GetServiceClientName() const override { return "forecast"; }


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
         * href="https://github.com/aws-samples/amazon-forecast-samples/tree/master/data">Amazon
         * Forecast Sample GitHub repository</a>.</p> <note> <p>The <code>Status</code> of
         * a dataset must be <code>ACTIVE</code> before you can import training data. Use
         * the <a>DescribeDataset</a> operation to get the status.</p> </note><p><h3>See
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
         * href="https://github.com/aws-samples/amazon-forecast-samples/tree/master/data">Amazon
         * Forecast Sample GitHub repository</a>.</p> <note> <p>The <code>Status</code> of
         * a dataset must be <code>ACTIVE</code> before you can import training data. Use
         * the <a>DescribeDataset</a> operation to get the status.</p> </note><p><h3>See
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
         * href="https://github.com/aws-samples/amazon-forecast-samples/tree/master/data">Amazon
         * Forecast Sample GitHub repository</a>.</p> <note> <p>The <code>Status</code> of
         * a dataset must be <code>ACTIVE</code> before you can import training data. Use
         * the <a>DescribeDataset</a> operation to get the status.</p> </note><p><h3>See
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
         * operation.</p> <note> <p>The <code>Status</code> of a dataset group must be
         * <code>ACTIVE</code> before you can create use the dataset group to create a
         * predictor. To get the status, use the <a>DescribeDatasetGroup</a> operation.</p>
         * </note><p><h3>See Also:</h3>   <a
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
         * operation.</p> <note> <p>The <code>Status</code> of a dataset group must be
         * <code>ACTIVE</code> before you can create use the dataset group to create a
         * predictor. To get the status, use the <a>DescribeDatasetGroup</a> operation.</p>
         * </note><p><h3>See Also:</h3>   <a
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
         * operation.</p> <note> <p>The <code>Status</code> of a dataset group must be
         * <code>ACTIVE</code> before you can create use the dataset group to create a
         * predictor. To get the status, use the <a>DescribeDatasetGroup</a> operation.</p>
         * </note><p><h3>See Also:</h3>   <a
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
         * access the data. For more information, see <a>aws-forecast-iam-roles</a>.</p>
         * <p>The training data must be in CSV format. The delimiter must be a comma
         * (,).</p> <p>You can specify the path to a specific CSV file, the S3 bucket, or
         * to a folder in the S3 bucket. For the latter two cases, Amazon Forecast imports
         * all files up to the limit of 10,000 files.</p> <p>To get a list of all your
         * dataset import jobs, filtered by specified criteria, use the
         * <a>ListDatasetImportJobs</a> operation.</p><p><h3>See Also:</h3>   <a
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
         * access the data. For more information, see <a>aws-forecast-iam-roles</a>.</p>
         * <p>The training data must be in CSV format. The delimiter must be a comma
         * (,).</p> <p>You can specify the path to a specific CSV file, the S3 bucket, or
         * to a folder in the S3 bucket. For the latter two cases, Amazon Forecast imports
         * all files up to the limit of 10,000 files.</p> <p>To get a list of all your
         * dataset import jobs, filtered by specified criteria, use the
         * <a>ListDatasetImportJobs</a> operation.</p><p><h3>See Also:</h3>   <a
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
         * access the data. For more information, see <a>aws-forecast-iam-roles</a>.</p>
         * <p>The training data must be in CSV format. The delimiter must be a comma
         * (,).</p> <p>You can specify the path to a specific CSV file, the S3 bucket, or
         * to a folder in the S3 bucket. For the latter two cases, Amazon Forecast imports
         * all files up to the limit of 10,000 files.</p> <p>To get a list of all your
         * dataset import jobs, filtered by specified criteria, use the
         * <a>ListDatasetImportJobs</a> operation.</p><p><h3>See Also:</h3>   <a
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
         * specify in the <a>CreatePredictor</a> request, multiplied by the
         * <code>DataFrequency</code> value, which you specify in the <a>CreateDataset</a>
         * request. When you query a forecast, you can request a specific date range within
         * the forecast.</p> <p>To get a list of all your forecasts, use the
         * <a>ListForecasts</a> operation.</p> <note> <p>The forecasts generated by Amazon
         * Forecast are in the same time zone as the dataset that was used to create the
         * predictor.</p> </note> <p>For more information, see
         * <a>howitworks-forecast</a>.</p> <note> <p>The <code>Status</code> of the
         * forecast must be <code>ACTIVE</code> before you can query or export the
         * forecast. Use the <a>DescribeForecast</a> operation to get the status.</p>
         * </note><p><h3>See Also:</h3>   <a
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
         * specify in the <a>CreatePredictor</a> request, multiplied by the
         * <code>DataFrequency</code> value, which you specify in the <a>CreateDataset</a>
         * request. When you query a forecast, you can request a specific date range within
         * the forecast.</p> <p>To get a list of all your forecasts, use the
         * <a>ListForecasts</a> operation.</p> <note> <p>The forecasts generated by Amazon
         * Forecast are in the same time zone as the dataset that was used to create the
         * predictor.</p> </note> <p>For more information, see
         * <a>howitworks-forecast</a>.</p> <note> <p>The <code>Status</code> of the
         * forecast must be <code>ACTIVE</code> before you can query or export the
         * forecast. Use the <a>DescribeForecast</a> operation to get the status.</p>
         * </note><p><h3>See Also:</h3>   <a
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
         * specify in the <a>CreatePredictor</a> request, multiplied by the
         * <code>DataFrequency</code> value, which you specify in the <a>CreateDataset</a>
         * request. When you query a forecast, you can request a specific date range within
         * the forecast.</p> <p>To get a list of all your forecasts, use the
         * <a>ListForecasts</a> operation.</p> <note> <p>The forecasts generated by Amazon
         * Forecast are in the same time zone as the dataset that was used to create the
         * predictor.</p> </note> <p>For more information, see
         * <a>howitworks-forecast</a>.</p> <note> <p>The <code>Status</code> of the
         * forecast must be <code>ACTIVE</code> before you can query or export the
         * forecast. Use the <a>DescribeForecast</a> operation to get the status.</p>
         * </note><p><h3>See Also:</h3>   <a
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
         * <p>&lt;ForecastExportJobName&gt;_&lt;ExportTimestamp&gt;_&lt;PageNumber&gt;</p>
         * <p>where the &lt;ExportTimestamp&gt; component is in Java SimpleDateFormat
         * (yyyy-MM-ddTHH-mm-ssZ).</p> <p>You must specify a <a>DataDestination</a> object
         * that includes an AWS Identity and Access Management (IAM) role that Amazon
         * Forecast can assume to access the Amazon S3 bucket. For more information, see
         * <a>aws-forecast-iam-roles</a>.</p> <p>For more information, see
         * <a>howitworks-forecast</a>.</p> <p>To get a list of all your forecast export
         * jobs, use the <a>ListForecastExportJobs</a> operation.</p> <note> <p>The
         * <code>Status</code> of the forecast export job must be <code>ACTIVE</code>
         * before you can access the forecast in your Amazon S3 bucket. To get the status,
         * use the <a>DescribeForecastExportJob</a> operation.</p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/CreateForecastExportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateForecastExportJobOutcome CreateForecastExportJob(const Model::CreateForecastExportJobRequest& request) const;

        /**
         * <p>Exports a forecast created by the <a>CreateForecast</a> operation to your
         * Amazon Simple Storage Service (Amazon S3) bucket. The forecast file name will
         * match the following conventions:</p>
         * <p>&lt;ForecastExportJobName&gt;_&lt;ExportTimestamp&gt;_&lt;PageNumber&gt;</p>
         * <p>where the &lt;ExportTimestamp&gt; component is in Java SimpleDateFormat
         * (yyyy-MM-ddTHH-mm-ssZ).</p> <p>You must specify a <a>DataDestination</a> object
         * that includes an AWS Identity and Access Management (IAM) role that Amazon
         * Forecast can assume to access the Amazon S3 bucket. For more information, see
         * <a>aws-forecast-iam-roles</a>.</p> <p>For more information, see
         * <a>howitworks-forecast</a>.</p> <p>To get a list of all your forecast export
         * jobs, use the <a>ListForecastExportJobs</a> operation.</p> <note> <p>The
         * <code>Status</code> of the forecast export job must be <code>ACTIVE</code>
         * before you can access the forecast in your Amazon S3 bucket. To get the status,
         * use the <a>DescribeForecastExportJob</a> operation.</p> </note><p><h3>See
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
         * <p>&lt;ForecastExportJobName&gt;_&lt;ExportTimestamp&gt;_&lt;PageNumber&gt;</p>
         * <p>where the &lt;ExportTimestamp&gt; component is in Java SimpleDateFormat
         * (yyyy-MM-ddTHH-mm-ssZ).</p> <p>You must specify a <a>DataDestination</a> object
         * that includes an AWS Identity and Access Management (IAM) role that Amazon
         * Forecast can assume to access the Amazon S3 bucket. For more information, see
         * <a>aws-forecast-iam-roles</a>.</p> <p>For more information, see
         * <a>howitworks-forecast</a>.</p> <p>To get a list of all your forecast export
         * jobs, use the <a>ListForecastExportJobs</a> operation.</p> <note> <p>The
         * <code>Status</code> of the forecast export job must be <code>ACTIVE</code>
         * before you can access the forecast in your Amazon S3 bucket. To get the status,
         * use the <a>DescribeForecastExportJob</a> operation.</p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/CreateForecastExportJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateForecastExportJobAsync(const Model::CreateForecastExportJobRequest& request, const CreateForecastExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an Amazon Forecast predictor.</p> <p>In the request, you provide a
         * dataset group and either specify an algorithm or let Amazon Forecast choose the
         * algorithm for you using AutoML. If you specify an algorithm, you also can
         * override algorithm-specific hyperparameters.</p> <p>Amazon Forecast uses the
         * chosen algorithm to train a model using the latest version of the datasets in
         * the specified dataset group. The result is called a predictor. You then generate
         * a forecast using the <a>CreateForecast</a> operation.</p> <p>After training a
         * model, the <code>CreatePredictor</code> operation also evaluates it. To see the
         * evaluation metrics, use the <a>GetAccuracyMetrics</a> operation. Always review
         * the evaluation metrics before deciding to use the predictor to generate a
         * forecast.</p> <p>Optionally, you can specify a featurization configuration to
         * fill and aggregate the data fields in the <code>TARGET_TIME_SERIES</code>
         * dataset to improve model training. For more information, see
         * <a>FeaturizationConfig</a>.</p> <p>For RELATED_TIME_SERIES datasets,
         * <code>CreatePredictor</code> verifies that the <code>DataFrequency</code>
         * specified when the dataset was created matches the
         * <code>ForecastFrequency</code>. TARGET_TIME_SERIES datasets don't have this
         * restriction. Amazon Forecast also verifies the delimiter and timestamp format.
         * For more information, see <a>howitworks-datasets-groups</a>.</p> <p>
         * <b>AutoML</b> </p> <p>If you want Amazon Forecast to evaluate each algorithm and
         * choose the one that minimizes the <code>objective function</code>, set
         * <code>PerformAutoML</code> to <code>true</code>. The <code>objective
         * function</code> is defined as the mean of the weighted p10, p50, and p90
         * quantile losses. For more information, see <a>EvaluationResult</a>.</p> <p>When
         * AutoML is enabled, the following properties are disallowed:</p> <ul> <li> <p>
         * <code>AlgorithmArn</code> </p> </li> <li> <p> <code>HPOConfig</code> </p> </li>
         * <li> <p> <code>PerformHPO</code> </p> </li> <li> <p>
         * <code>TrainingParameters</code> </p> </li> </ul> <p>To get a list of all of your
         * predictors, use the <a>ListPredictors</a> operation.</p> <note> <p>Before you
         * can use the predictor to create a forecast, the <code>Status</code> of the
         * predictor must be <code>ACTIVE</code>, signifying that training has completed.
         * To get the status, use the <a>DescribePredictor</a> operation.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/CreatePredictor">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePredictorOutcome CreatePredictor(const Model::CreatePredictorRequest& request) const;

        /**
         * <p>Creates an Amazon Forecast predictor.</p> <p>In the request, you provide a
         * dataset group and either specify an algorithm or let Amazon Forecast choose the
         * algorithm for you using AutoML. If you specify an algorithm, you also can
         * override algorithm-specific hyperparameters.</p> <p>Amazon Forecast uses the
         * chosen algorithm to train a model using the latest version of the datasets in
         * the specified dataset group. The result is called a predictor. You then generate
         * a forecast using the <a>CreateForecast</a> operation.</p> <p>After training a
         * model, the <code>CreatePredictor</code> operation also evaluates it. To see the
         * evaluation metrics, use the <a>GetAccuracyMetrics</a> operation. Always review
         * the evaluation metrics before deciding to use the predictor to generate a
         * forecast.</p> <p>Optionally, you can specify a featurization configuration to
         * fill and aggregate the data fields in the <code>TARGET_TIME_SERIES</code>
         * dataset to improve model training. For more information, see
         * <a>FeaturizationConfig</a>.</p> <p>For RELATED_TIME_SERIES datasets,
         * <code>CreatePredictor</code> verifies that the <code>DataFrequency</code>
         * specified when the dataset was created matches the
         * <code>ForecastFrequency</code>. TARGET_TIME_SERIES datasets don't have this
         * restriction. Amazon Forecast also verifies the delimiter and timestamp format.
         * For more information, see <a>howitworks-datasets-groups</a>.</p> <p>
         * <b>AutoML</b> </p> <p>If you want Amazon Forecast to evaluate each algorithm and
         * choose the one that minimizes the <code>objective function</code>, set
         * <code>PerformAutoML</code> to <code>true</code>. The <code>objective
         * function</code> is defined as the mean of the weighted p10, p50, and p90
         * quantile losses. For more information, see <a>EvaluationResult</a>.</p> <p>When
         * AutoML is enabled, the following properties are disallowed:</p> <ul> <li> <p>
         * <code>AlgorithmArn</code> </p> </li> <li> <p> <code>HPOConfig</code> </p> </li>
         * <li> <p> <code>PerformHPO</code> </p> </li> <li> <p>
         * <code>TrainingParameters</code> </p> </li> </ul> <p>To get a list of all of your
         * predictors, use the <a>ListPredictors</a> operation.</p> <note> <p>Before you
         * can use the predictor to create a forecast, the <code>Status</code> of the
         * predictor must be <code>ACTIVE</code>, signifying that training has completed.
         * To get the status, use the <a>DescribePredictor</a> operation.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/CreatePredictor">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePredictorOutcomeCallable CreatePredictorCallable(const Model::CreatePredictorRequest& request) const;

        /**
         * <p>Creates an Amazon Forecast predictor.</p> <p>In the request, you provide a
         * dataset group and either specify an algorithm or let Amazon Forecast choose the
         * algorithm for you using AutoML. If you specify an algorithm, you also can
         * override algorithm-specific hyperparameters.</p> <p>Amazon Forecast uses the
         * chosen algorithm to train a model using the latest version of the datasets in
         * the specified dataset group. The result is called a predictor. You then generate
         * a forecast using the <a>CreateForecast</a> operation.</p> <p>After training a
         * model, the <code>CreatePredictor</code> operation also evaluates it. To see the
         * evaluation metrics, use the <a>GetAccuracyMetrics</a> operation. Always review
         * the evaluation metrics before deciding to use the predictor to generate a
         * forecast.</p> <p>Optionally, you can specify a featurization configuration to
         * fill and aggregate the data fields in the <code>TARGET_TIME_SERIES</code>
         * dataset to improve model training. For more information, see
         * <a>FeaturizationConfig</a>.</p> <p>For RELATED_TIME_SERIES datasets,
         * <code>CreatePredictor</code> verifies that the <code>DataFrequency</code>
         * specified when the dataset was created matches the
         * <code>ForecastFrequency</code>. TARGET_TIME_SERIES datasets don't have this
         * restriction. Amazon Forecast also verifies the delimiter and timestamp format.
         * For more information, see <a>howitworks-datasets-groups</a>.</p> <p>
         * <b>AutoML</b> </p> <p>If you want Amazon Forecast to evaluate each algorithm and
         * choose the one that minimizes the <code>objective function</code>, set
         * <code>PerformAutoML</code> to <code>true</code>. The <code>objective
         * function</code> is defined as the mean of the weighted p10, p50, and p90
         * quantile losses. For more information, see <a>EvaluationResult</a>.</p> <p>When
         * AutoML is enabled, the following properties are disallowed:</p> <ul> <li> <p>
         * <code>AlgorithmArn</code> </p> </li> <li> <p> <code>HPOConfig</code> </p> </li>
         * <li> <p> <code>PerformHPO</code> </p> </li> <li> <p>
         * <code>TrainingParameters</code> </p> </li> </ul> <p>To get a list of all of your
         * predictors, use the <a>ListPredictors</a> operation.</p> <note> <p>Before you
         * can use the predictor to create a forecast, the <code>Status</code> of the
         * predictor must be <code>ACTIVE</code>, signifying that training has completed.
         * To get the status, use the <a>DescribePredictor</a> operation.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/CreatePredictor">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePredictorAsync(const Model::CreatePredictorRequest& request, const CreatePredictorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an Amazon Forecast dataset that was created using the
         * <a>CreateDataset</a> operation. You can only delete datasets that have a status
         * of <code>ACTIVE</code> or <code>CREATE_FAILED</code>. To get the status use the
         * <a>DescribeDataset</a> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/DeleteDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDatasetOutcome DeleteDataset(const Model::DeleteDatasetRequest& request) const;

        /**
         * <p>Deletes an Amazon Forecast dataset that was created using the
         * <a>CreateDataset</a> operation. You can only delete datasets that have a status
         * of <code>ACTIVE</code> or <code>CREATE_FAILED</code>. To get the status use the
         * <a>DescribeDataset</a> operation.</p><p><h3>See Also:</h3>   <a
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
         * <a>DescribeDataset</a> operation.</p><p><h3>See Also:</h3>   <a
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
         * <p>Provides metrics on the accuracy of the models that were trained by the
         * <a>CreatePredictor</a> operation. Use metrics to see how well the model
         * performed and to decide whether to use the predictor to generate a forecast. For
         * more information, see <a>metrics</a>.</p> <p>This operation generates metrics
         * for each backtest window that was evaluated. The number of backtest windows
         * (<code>NumberOfBacktestWindows</code>) is specified using the
         * <a>EvaluationParameters</a> object, which is optionally included in the
         * <code>CreatePredictor</code> request. If <code>NumberOfBacktestWindows</code>
         * isn't specified, the number defaults to one.</p> <p>The parameters of the
         * <code>filling</code> method determine which items contribute to the metrics. If
         * you want all items to contribute, specify <code>zero</code>. If you want only
         * those items that have complete data in the range being evaluated to contribute,
         * specify <code>nan</code>. For more information, see
         * <a>FeaturizationMethod</a>.</p> <note> <p>Before you can get accuracy metrics,
         * the <code>Status</code> of the predictor must be <code>ACTIVE</code>, signifying
         * that training has completed. To get the status, use the <a>DescribePredictor</a>
         * operation.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/GetAccuracyMetrics">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccuracyMetricsOutcome GetAccuracyMetrics(const Model::GetAccuracyMetricsRequest& request) const;

        /**
         * <p>Provides metrics on the accuracy of the models that were trained by the
         * <a>CreatePredictor</a> operation. Use metrics to see how well the model
         * performed and to decide whether to use the predictor to generate a forecast. For
         * more information, see <a>metrics</a>.</p> <p>This operation generates metrics
         * for each backtest window that was evaluated. The number of backtest windows
         * (<code>NumberOfBacktestWindows</code>) is specified using the
         * <a>EvaluationParameters</a> object, which is optionally included in the
         * <code>CreatePredictor</code> request. If <code>NumberOfBacktestWindows</code>
         * isn't specified, the number defaults to one.</p> <p>The parameters of the
         * <code>filling</code> method determine which items contribute to the metrics. If
         * you want all items to contribute, specify <code>zero</code>. If you want only
         * those items that have complete data in the range being evaluated to contribute,
         * specify <code>nan</code>. For more information, see
         * <a>FeaturizationMethod</a>.</p> <note> <p>Before you can get accuracy metrics,
         * the <code>Status</code> of the predictor must be <code>ACTIVE</code>, signifying
         * that training has completed. To get the status, use the <a>DescribePredictor</a>
         * operation.</p> </note><p><h3>See Also:</h3>   <a
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
         * more information, see <a>metrics</a>.</p> <p>This operation generates metrics
         * for each backtest window that was evaluated. The number of backtest windows
         * (<code>NumberOfBacktestWindows</code>) is specified using the
         * <a>EvaluationParameters</a> object, which is optionally included in the
         * <code>CreatePredictor</code> request. If <code>NumberOfBacktestWindows</code>
         * isn't specified, the number defaults to one.</p> <p>The parameters of the
         * <code>filling</code> method determine which items contribute to the metrics. If
         * you want all items to contribute, specify <code>zero</code>. If you want only
         * those items that have complete data in the range being evaluated to contribute,
         * specify <code>nan</code>. For more information, see
         * <a>FeaturizationMethod</a>.</p> <note> <p>Before you can get accuracy metrics,
         * the <code>Status</code> of the predictor must be <code>ACTIVE</code>, signifying
         * that training has completed. To get the status, use the <a>DescribePredictor</a>
         * operation.</p> </note><p><h3>See Also:</h3>   <a
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
         * <p>Replaces the datasets in a dataset group with the specified datasets.</p>
         * <note> <p>The <code>Status</code> of the dataset group must be
         * <code>ACTIVE</code> before you can use the dataset group to create a predictor.
         * Use the <a>DescribeDatasetGroup</a> operation to get the status.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/UpdateDatasetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDatasetGroupOutcome UpdateDatasetGroup(const Model::UpdateDatasetGroupRequest& request) const;

        /**
         * <p>Replaces the datasets in a dataset group with the specified datasets.</p>
         * <note> <p>The <code>Status</code> of the dataset group must be
         * <code>ACTIVE</code> before you can use the dataset group to create a predictor.
         * Use the <a>DescribeDatasetGroup</a> operation to get the status.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/UpdateDatasetGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDatasetGroupOutcomeCallable UpdateDatasetGroupCallable(const Model::UpdateDatasetGroupRequest& request) const;

        /**
         * <p>Replaces the datasets in a dataset group with the specified datasets.</p>
         * <note> <p>The <code>Status</code> of the dataset group must be
         * <code>ACTIVE</code> before you can use the dataset group to create a predictor.
         * Use the <a>DescribeDatasetGroup</a> operation to get the status.</p>
         * </note><p><h3>See Also:</h3>   <a
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
        void DeleteDatasetAsyncHelper(const Model::DeleteDatasetRequest& request, const DeleteDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDatasetGroupAsyncHelper(const Model::DeleteDatasetGroupRequest& request, const DeleteDatasetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDatasetImportJobAsyncHelper(const Model::DeleteDatasetImportJobRequest& request, const DeleteDatasetImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteForecastAsyncHelper(const Model::DeleteForecastRequest& request, const DeleteForecastResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteForecastExportJobAsyncHelper(const Model::DeleteForecastExportJobRequest& request, const DeleteForecastExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePredictorAsyncHelper(const Model::DeletePredictorRequest& request, const DeletePredictorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDatasetAsyncHelper(const Model::DescribeDatasetRequest& request, const DescribeDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDatasetGroupAsyncHelper(const Model::DescribeDatasetGroupRequest& request, const DescribeDatasetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDatasetImportJobAsyncHelper(const Model::DescribeDatasetImportJobRequest& request, const DescribeDatasetImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeForecastAsyncHelper(const Model::DescribeForecastRequest& request, const DescribeForecastResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeForecastExportJobAsyncHelper(const Model::DescribeForecastExportJobRequest& request, const DescribeForecastExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribePredictorAsyncHelper(const Model::DescribePredictorRequest& request, const DescribePredictorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAccuracyMetricsAsyncHelper(const Model::GetAccuracyMetricsRequest& request, const GetAccuracyMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDatasetGroupsAsyncHelper(const Model::ListDatasetGroupsRequest& request, const ListDatasetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDatasetImportJobsAsyncHelper(const Model::ListDatasetImportJobsRequest& request, const ListDatasetImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDatasetsAsyncHelper(const Model::ListDatasetsRequest& request, const ListDatasetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListForecastExportJobsAsyncHelper(const Model::ListForecastExportJobsRequest& request, const ListForecastExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListForecastsAsyncHelper(const Model::ListForecastsRequest& request, const ListForecastsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPredictorsAsyncHelper(const Model::ListPredictorsRequest& request, const ListPredictorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDatasetGroupAsyncHelper(const Model::UpdateDatasetGroupRequest& request, const UpdateDatasetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace ForecastService
} // namespace Aws
