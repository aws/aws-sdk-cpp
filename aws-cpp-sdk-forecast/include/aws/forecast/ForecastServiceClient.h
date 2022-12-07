/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/forecast/ForecastServiceServiceClientModel.h>

namespace Aws
{
namespace ForecastService
{
  /**
   * <p>Provides APIs for creating and managing Amazon Forecast resources.</p>
   */
  class AWS_FORECASTSERVICE_API ForecastServiceClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<ForecastServiceClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ForecastServiceClient(const Aws::ForecastService::ForecastServiceClientConfiguration& clientConfiguration = Aws::ForecastService::ForecastServiceClientConfiguration(),
                              std::shared_ptr<ForecastServiceEndpointProviderBase> endpointProvider = Aws::MakeShared<ForecastServiceEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ForecastServiceClient(const Aws::Auth::AWSCredentials& credentials,
                              std::shared_ptr<ForecastServiceEndpointProviderBase> endpointProvider = Aws::MakeShared<ForecastServiceEndpointProvider>(ALLOCATION_TAG),
                              const Aws::ForecastService::ForecastServiceClientConfiguration& clientConfiguration = Aws::ForecastService::ForecastServiceClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ForecastServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                              std::shared_ptr<ForecastServiceEndpointProviderBase> endpointProvider = Aws::MakeShared<ForecastServiceEndpointProvider>(ALLOCATION_TAG),
                              const Aws::ForecastService::ForecastServiceClientConfiguration& clientConfiguration = Aws::ForecastService::ForecastServiceClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ForecastServiceClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ForecastServiceClient(const Aws::Auth::AWSCredentials& credentials,
                              const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ForecastServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                              const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~ForecastServiceClient();

        /**
         * <p>Creates an Amazon Forecast predictor.</p> <p>Amazon Forecast creates
         * predictors with AutoPredictor, which involves applying the optimal combination
         * of algorithms to each time series in your datasets. You can use
         * <a>CreateAutoPredictor</a> to create new predictors or upgrade/retrain existing
         * predictors.</p> <p> <b>Creating new predictors</b> </p> <p>The following
         * parameters are required when creating a new predictor:</p> <ul> <li> <p>
         * <code>PredictorName</code> - A unique name for the predictor.</p> </li> <li> <p>
         * <code>DatasetGroupArn</code> - The ARN of the dataset group used to train the
         * predictor.</p> </li> <li> <p> <code>ForecastFrequency</code> - The granularity
         * of your forecasts (hourly, daily, weekly, etc).</p> </li> <li> <p>
         * <code>ForecastHorizon</code> - The number of time-steps that the model predicts.
         * The forecast horizon is also called the prediction length.</p> </li> </ul>
         * <p>When creating a new predictor, do not specify a value for
         * <code>ReferencePredictorArn</code>.</p> <p> <b>Upgrading and retraining
         * predictors</b> </p> <p>The following parameters are required when retraining or
         * upgrading a predictor:</p> <ul> <li> <p> <code>PredictorName</code> - A unique
         * name for the predictor.</p> </li> <li> <p> <code>ReferencePredictorArn</code> -
         * The ARN of the predictor to retrain or upgrade.</p> </li> </ul> <p>When
         * upgrading or retraining a predictor, only specify values for the
         * <code>ReferencePredictorArn</code> and <code>PredictorName</code>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/CreateAutoPredictor">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAutoPredictorOutcome CreateAutoPredictor(const Model::CreateAutoPredictorRequest& request) const;

        /**
         * A Callable wrapper for CreateAutoPredictor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAutoPredictorOutcomeCallable CreateAutoPredictorCallable(const Model::CreateAutoPredictorRequest& request) const;

        /**
         * An Async wrapper for CreateAutoPredictor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAutoPredictorAsync(const Model::CreateAutoPredictorRequest& request, const CreateAutoPredictorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * predictor. For more information, see <a
         * href="https://docs.aws.amazon.com/forecast/latest/dg/howitworks-datasets-groups.html">Importing
         * datasets</a>.</p> <p>To get a list of all your datasets, use the <a
         * href="https://docs.aws.amazon.com/forecast/latest/dg/API_ListDatasets.html">ListDatasets</a>
         * operation.</p> <p>For example Forecast datasets, see the <a
         * href="https://github.com/aws-samples/amazon-forecast-samples">Amazon Forecast
         * Sample GitHub repository</a>.</p>  <p>The <code>Status</code> of a dataset
         * must be <code>ACTIVE</code> before you can import training data. Use the <a
         * href="https://docs.aws.amazon.com/forecast/latest/dg/API_DescribeDataset.html">DescribeDataset</a>
         * operation to get the status.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/CreateDataset">AWS
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
         * <p>Creates a dataset group, which holds a collection of related datasets. You
         * can add datasets to the dataset group when you create the dataset group, or
         * later by using the <a
         * href="https://docs.aws.amazon.com/forecast/latest/dg/API_UpdateDatasetGroup.html">UpdateDatasetGroup</a>
         * operation.</p> <p>After creating a dataset group and adding datasets, you use
         * the dataset group when you create a predictor. For more information, see <a
         * href="https://docs.aws.amazon.com/forecast/latest/dg/howitworks-datasets-groups.html">Dataset
         * groups</a>.</p> <p>To get a list of all your datasets groups, use the <a
         * href="https://docs.aws.amazon.com/forecast/latest/dg/API_ListDatasetGroups.html">ListDatasetGroups</a>
         * operation.</p>  <p>The <code>Status</code> of a dataset group must be
         * <code>ACTIVE</code> before you can use the dataset group to create a predictor.
         * To get the status, use the <a
         * href="https://docs.aws.amazon.com/forecast/latest/dg/API_DescribeDatasetGroup.html">DescribeDatasetGroup</a>
         * operation.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/CreateDatasetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDatasetGroupOutcome CreateDatasetGroup(const Model::CreateDatasetGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateDatasetGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDatasetGroupOutcomeCallable CreateDatasetGroupCallable(const Model::CreateDatasetGroupRequest& request) const;

        /**
         * An Async wrapper for CreateDatasetGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDatasetGroupAsync(const Model::CreateDatasetGroupRequest& request, const CreateDatasetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Imports your training data to an Amazon Forecast dataset. You provide the
         * location of your training data in an Amazon Simple Storage Service (Amazon S3)
         * bucket and the Amazon Resource Name (ARN) of the dataset that you want to import
         * the data to.</p> <p>You must specify a <a
         * href="https://docs.aws.amazon.com/forecast/latest/dg/API_DataSource.html">DataSource</a>
         * object that includes an AWS Identity and Access Management (IAM) role that
         * Amazon Forecast can assume to access the data, as Amazon Forecast makes a copy
         * of your data and processes it in an internal AWS system. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/forecast/latest/dg/aws-forecast-iam-roles.html">Set
         * up permissions</a>.</p> <p>The training data must be in CSV or Parquet format.
         * The delimiter must be a comma (,).</p> <p>You can specify the path to a specific
         * file, the S3 bucket, or to a folder in the S3 bucket. For the latter two cases,
         * Amazon Forecast imports all files up to the limit of 10,000 files.</p>
         * <p>Because dataset imports are not aggregated, your most recent dataset import
         * is the one that is used when training a predictor or generating a forecast. Make
         * sure that your most recent dataset import contains all of the data you want to
         * model off of, and not just the new data collected since the previous import.</p>
         * <p>To get a list of all your dataset import jobs, filtered by specified
         * criteria, use the <a
         * href="https://docs.aws.amazon.com/forecast/latest/dg/API_ListDatasetImportJobs.html">ListDatasetImportJobs</a>
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/CreateDatasetImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDatasetImportJobOutcome CreateDatasetImportJob(const Model::CreateDatasetImportJobRequest& request) const;

        /**
         * A Callable wrapper for CreateDatasetImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDatasetImportJobOutcomeCallable CreateDatasetImportJobCallable(const Model::CreateDatasetImportJobRequest& request) const;

        /**
         * An Async wrapper for CreateDatasetImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDatasetImportJobAsync(const Model::CreateDatasetImportJobRequest& request, const CreateDatasetImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>Explainability is only available for Forecasts and Predictors
         * generated from an AutoPredictor (<a>CreateAutoPredictor</a>)</p> 
         * <p>Creates an Amazon Forecast Explainability.</p> <p>Explainability helps you
         * better understand how the attributes in your datasets impact forecast. Amazon
         * Forecast uses a metric called Impact scores to quantify the relative impact of
         * each attribute and determine whether they increase or decrease forecast
         * values.</p> <p>To enable Forecast Explainability, your predictor must include at
         * least one of the following: related time series, item metadata, or additional
         * datasets like Holidays and the Weather Index.</p> <p>CreateExplainability
         * accepts either a Predictor ARN or Forecast ARN. To receive aggregated Impact
         * scores for all time series and time points in your datasets, provide a Predictor
         * ARN. To receive Impact scores for specific time series and time points, provide
         * a Forecast ARN.</p> <p> <b>CreateExplainability with a Predictor ARN</b> </p>
         *  <p>You can only have one Explainability resource per predictor. If you
         * already enabled <code>ExplainPredictor</code> in <a>CreateAutoPredictor</a>,
         * that predictor already has an Explainability resource.</p>  <p>The
         * following parameters are required when providing a Predictor ARN:</p> <ul> <li>
         * <p> <code>ExplainabilityName</code> - A unique name for the Explainability.</p>
         * </li> <li> <p> <code>ResourceArn</code> - The Arn of the predictor.</p> </li>
         * <li> <p> <code>TimePointGranularity</code> - Must be set to “ALL”.</p> </li>
         * <li> <p> <code>TimeSeriesGranularity</code> - Must be set to “ALL”.</p> </li>
         * </ul> <p>Do not specify a value for the following parameters:</p> <ul> <li> <p>
         * <code>DataSource</code> - Only valid when TimeSeriesGranularity is
         * “SPECIFIC”.</p> </li> <li> <p> <code>Schema</code> - Only valid when
         * TimeSeriesGranularity is “SPECIFIC”.</p> </li> <li> <p>
         * <code>StartDateTime</code> - Only valid when TimePointGranularity is
         * “SPECIFIC”.</p> </li> <li> <p> <code>EndDateTime</code> - Only valid when
         * TimePointGranularity is “SPECIFIC”.</p> </li> </ul> <p> <b>CreateExplainability
         * with a Forecast ARN</b> </p>  <p>You can specify a maximum of 50 time
         * series and 500 time points.</p>  <p>The following parameters are required
         * when providing a Predictor ARN:</p> <ul> <li> <p>
         * <code>ExplainabilityName</code> - A unique name for the Explainability.</p>
         * </li> <li> <p> <code>ResourceArn</code> - The Arn of the forecast.</p> </li>
         * <li> <p> <code>TimePointGranularity</code> - Either “ALL” or “SPECIFIC”.</p>
         * </li> <li> <p> <code>TimeSeriesGranularity</code> - Either “ALL” or
         * “SPECIFIC”.</p> </li> </ul> <p>If you set TimeSeriesGranularity to “SPECIFIC”,
         * you must also provide the following:</p> <ul> <li> <p> <code>DataSource</code> -
         * The S3 location of the CSV file specifying your time series.</p> </li> <li> <p>
         * <code>Schema</code> - The Schema defines the attributes and attribute types
         * listed in the Data Source.</p> </li> </ul> <p>If you set TimePointGranularity to
         * “SPECIFIC”, you must also provide the following:</p> <ul> <li> <p>
         * <code>StartDateTime</code> - The first timestamp in the range of time
         * points.</p> </li> <li> <p> <code>EndDateTime</code> - The last timestamp in the
         * range of time points.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/CreateExplainability">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateExplainabilityOutcome CreateExplainability(const Model::CreateExplainabilityRequest& request) const;

        /**
         * A Callable wrapper for CreateExplainability that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateExplainabilityOutcomeCallable CreateExplainabilityCallable(const Model::CreateExplainabilityRequest& request) const;

        /**
         * An Async wrapper for CreateExplainability that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateExplainabilityAsync(const Model::CreateExplainabilityRequest& request, const CreateExplainabilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Exports an Explainability resource created by the <a>CreateExplainability</a>
         * operation. Exported files are exported to an Amazon Simple Storage Service
         * (Amazon S3) bucket.</p> <p>You must specify a <a>DataDestination</a> object that
         * includes an Amazon S3 bucket and an AWS Identity and Access Management (IAM)
         * role that Amazon Forecast can assume to access the Amazon S3 bucket. For more
         * information, see <a>aws-forecast-iam-roles</a>.</p>  <p>The
         * <code>Status</code> of the export job must be <code>ACTIVE</code> before you can
         * access the export in your Amazon S3 bucket. To get the status, use the
         * <a>DescribeExplainabilityExport</a> operation.</p> <p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/CreateExplainabilityExport">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateExplainabilityExportOutcome CreateExplainabilityExport(const Model::CreateExplainabilityExportRequest& request) const;

        /**
         * A Callable wrapper for CreateExplainabilityExport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateExplainabilityExportOutcomeCallable CreateExplainabilityExportCallable(const Model::CreateExplainabilityExportRequest& request) const;

        /**
         * An Async wrapper for CreateExplainabilityExport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateExplainabilityExportAsync(const Model::CreateExplainabilityExportRequest& request, const CreateExplainabilityExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         *  <p>By default, a forecast includes predictions for every item
         * (<code>item_id</code>) in the dataset group that was used to train the
         * predictor. However, you can use the <code>TimeSeriesSelector</code> object to
         * generate a forecast on a subset of time series. Forecast creation is skipped for
         * any time series that you specify that are not in the input dataset. The forecast
         * export file will not contain these time series or their forecasted
         * values.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/CreateForecast">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateForecastOutcome CreateForecast(const Model::CreateForecastRequest& request) const;

        /**
         * A Callable wrapper for CreateForecast that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateForecastOutcomeCallable CreateForecastCallable(const Model::CreateForecastRequest& request) const;

        /**
         * An Async wrapper for CreateForecast that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for CreateForecastExportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateForecastExportJobOutcomeCallable CreateForecastExportJobCallable(const Model::CreateForecastExportJobRequest& request) const;

        /**
         * An Async wrapper for CreateForecastExportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateForecastExportJobAsync(const Model::CreateForecastExportJobRequest& request, const CreateForecastExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a predictor monitor resource for an existing auto predictor.
         * Predictor monitoring allows you to see how your predictor's performance changes
         * over time. For more information, see <a
         * href="https://docs.aws.amazon.com/forecast/latest/dg/predictor-monitoring.html">Predictor
         * Monitoring</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/CreateMonitor">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMonitorOutcome CreateMonitor(const Model::CreateMonitorRequest& request) const;

        /**
         * A Callable wrapper for CreateMonitor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateMonitorOutcomeCallable CreateMonitorCallable(const Model::CreateMonitorRequest& request) const;

        /**
         * An Async wrapper for CreateMonitor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMonitorAsync(const Model::CreateMonitorRequest& request, const CreateMonitorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p> This operation creates a legacy predictor that does not include all
         * the predictor functionalities provided by Amazon Forecast. To create a predictor
         * that is compatible with all aspects of Forecast, use
         * <a>CreateAutoPredictor</a>.</p>  <p>Creates an Amazon Forecast
         * predictor.</p> <p>In the request, provide a dataset group and either specify an
         * algorithm or let Amazon Forecast choose an algorithm for you using AutoML. If
         * you specify an algorithm, you also can override algorithm-specific
         * hyperparameters.</p> <p>Amazon Forecast uses the algorithm to train a predictor
         * using the latest version of the datasets in the specified dataset group. You can
         * then generate a forecast using the <a>CreateForecast</a> operation.</p> <p> To
         * see the evaluation metrics, use the <a>GetAccuracyMetrics</a> operation. </p>
         * <p>You can specify a featurization configuration to fill and aggregate the data
         * fields in the <code>TARGET_TIME_SERIES</code> dataset to improve model training.
         * For more information, see <a>FeaturizationConfig</a>.</p> <p>For
         * RELATED_TIME_SERIES datasets, <code>CreatePredictor</code> verifies that the
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
         * A Callable wrapper for CreatePredictor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePredictorOutcomeCallable CreatePredictorCallable(const Model::CreatePredictorRequest& request) const;

        /**
         * An Async wrapper for CreatePredictor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePredictorAsync(const Model::CreatePredictorRequest& request, const CreatePredictorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Exports backtest forecasts and accuracy metrics generated by the
         * <a>CreateAutoPredictor</a> or <a>CreatePredictor</a> operations. Two folders
         * containing CSV or Parquet files are exported to your specified S3 bucket.</p>
         * <p> The export file names will match the following conventions:</p> <p>
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
         * A Callable wrapper for CreatePredictorBacktestExportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePredictorBacktestExportJobOutcomeCallable CreatePredictorBacktestExportJobCallable(const Model::CreatePredictorBacktestExportJobRequest& request) const;

        /**
         * An Async wrapper for CreatePredictorBacktestExportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePredictorBacktestExportJobAsync(const Model::CreatePredictorBacktestExportJobRequest& request, const CreatePredictorBacktestExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>What-if analysis is a scenario modeling technique where you make a
         * hypothetical change to a time series and compare the forecasts generated by
         * these changes against the baseline, unchanged time series. It is important to
         * remember that the purpose of a what-if analysis is to understand how a forecast
         * can change given different modifications to the baseline time series.</p> <p>For
         * example, imagine you are a clothing retailer who is considering an end of season
         * sale to clear space for new styles. After creating a baseline forecast, you can
         * use a what-if analysis to investigate how different sales tactics might affect
         * your goals. You could create a scenario where everything is given a 25% markdown
         * and another where everything is given a fixed dollar markdown. You can create a
         * scenario where the sale lasts for 1 week and another where the sale lasts for 1
         * month. Your what-if analysis enables you to compare many different scenarios
         * against each other.</p> <p>Note that a what-if analysis is meant to display what
         * the forecasting model has learned and how it will behave in the scenarios that
         * you are evaluating. Do not blindly use the results of the what-if analysis to
         * make business decisions. For instance, forecasts might not be accurate for novel
         * scenarios where there is no reference available to determine whether a forecast
         * is good.</p> <p>The <a>TimeSeriesSelector</a> object defines the items that you
         * want in the what-if analysis.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/CreateWhatIfAnalysis">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWhatIfAnalysisOutcome CreateWhatIfAnalysis(const Model::CreateWhatIfAnalysisRequest& request) const;

        /**
         * A Callable wrapper for CreateWhatIfAnalysis that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateWhatIfAnalysisOutcomeCallable CreateWhatIfAnalysisCallable(const Model::CreateWhatIfAnalysisRequest& request) const;

        /**
         * An Async wrapper for CreateWhatIfAnalysis that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateWhatIfAnalysisAsync(const Model::CreateWhatIfAnalysisRequest& request, const CreateWhatIfAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>A what-if forecast is a forecast that is created from a modified version of
         * the baseline forecast. Each what-if forecast incorporates either a replacement
         * dataset or a set of transformations to the original dataset. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/CreateWhatIfForecast">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWhatIfForecastOutcome CreateWhatIfForecast(const Model::CreateWhatIfForecastRequest& request) const;

        /**
         * A Callable wrapper for CreateWhatIfForecast that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateWhatIfForecastOutcomeCallable CreateWhatIfForecastCallable(const Model::CreateWhatIfForecastRequest& request) const;

        /**
         * An Async wrapper for CreateWhatIfForecast that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateWhatIfForecastAsync(const Model::CreateWhatIfForecastRequest& request, const CreateWhatIfForecastResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Exports a forecast created by the <a>CreateWhatIfForecast</a> operation to
         * your Amazon Simple Storage Service (Amazon S3) bucket. The forecast file name
         * will match the following conventions:</p> <p>
         * <code>≈&lt;ForecastExportJobName&gt;_&lt;ExportTimestamp&gt;_&lt;PartNumber&gt;</code>
         * </p> <p>The &lt;ExportTimestamp&gt; component is in Java SimpleDateFormat
         * (yyyy-MM-ddTHH-mm-ssZ).</p> <p>You must specify a <a>DataDestination</a> object
         * that includes an AWS Identity and Access Management (IAM) role that Amazon
         * Forecast can assume to access the Amazon S3 bucket. For more information, see
         * <a>aws-forecast-iam-roles</a>.</p> <p>For more information, see
         * <a>howitworks-forecast</a>.</p> <p>To get a list of all your what-if forecast
         * export jobs, use the <a>ListWhatIfForecastExports</a> operation.</p> 
         * <p>The <code>Status</code> of the forecast export job must be
         * <code>ACTIVE</code> before you can access the forecast in your Amazon S3 bucket.
         * To get the status, use the <a>DescribeWhatIfForecastExport</a> operation.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/CreateWhatIfForecastExport">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWhatIfForecastExportOutcome CreateWhatIfForecastExport(const Model::CreateWhatIfForecastExportRequest& request) const;

        /**
         * A Callable wrapper for CreateWhatIfForecastExport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateWhatIfForecastExportOutcomeCallable CreateWhatIfForecastExportCallable(const Model::CreateWhatIfForecastExportRequest& request) const;

        /**
         * An Async wrapper for CreateWhatIfForecastExport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateWhatIfForecastExportAsync(const Model::CreateWhatIfForecastExportRequest& request, const CreateWhatIfForecastExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an Amazon Forecast dataset that was created using the <a
         * href="https://docs.aws.amazon.com/forecast/latest/dg/API_CreateDataset.html">CreateDataset</a>
         * operation. You can only delete datasets that have a status of
         * <code>ACTIVE</code> or <code>CREATE_FAILED</code>. To get the status use the <a
         * href="https://docs.aws.amazon.com/forecast/latest/dg/API_DescribeDataset.html">DescribeDataset</a>
         * operation.</p>  <p>Forecast does not automatically update any dataset
         * groups that contain the deleted dataset. In order to update the dataset group,
         * use the <a
         * href="https://docs.aws.amazon.com/forecast/latest/dg/API_UpdateDatasetGroup.html">UpdateDatasetGroup</a>
         * operation, omitting the deleted dataset's ARN.</p> <p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/DeleteDataset">AWS
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
         * <p>Deletes a dataset group created using the <a
         * href="https://docs.aws.amazon.com/forecast/latest/dg/API_CreateDatasetGroup.html">CreateDatasetGroup</a>
         * operation. You can only delete dataset groups that have a status of
         * <code>ACTIVE</code>, <code>CREATE_FAILED</code>, or <code>UPDATE_FAILED</code>.
         * To get the status, use the <a
         * href="https://docs.aws.amazon.com/forecast/latest/dg/API_DescribeDatasetGroup.html">DescribeDatasetGroup</a>
         * operation.</p> <p>This operation deletes only the dataset group, not the
         * datasets in the group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/DeleteDatasetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDatasetGroupOutcome DeleteDatasetGroup(const Model::DeleteDatasetGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteDatasetGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDatasetGroupOutcomeCallable DeleteDatasetGroupCallable(const Model::DeleteDatasetGroupRequest& request) const;

        /**
         * An Async wrapper for DeleteDatasetGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDatasetGroupAsync(const Model::DeleteDatasetGroupRequest& request, const DeleteDatasetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a dataset import job created using the <a
         * href="https://docs.aws.amazon.com/forecast/latest/dg/API_CreateDatasetImportJob.html">CreateDatasetImportJob</a>
         * operation. You can delete only dataset import jobs that have a status of
         * <code>ACTIVE</code> or <code>CREATE_FAILED</code>. To get the status, use the <a
         * href="https://docs.aws.amazon.com/forecast/latest/dg/API_DescribeDatasetImportJob.html">DescribeDatasetImportJob</a>
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/DeleteDatasetImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDatasetImportJobOutcome DeleteDatasetImportJob(const Model::DeleteDatasetImportJobRequest& request) const;

        /**
         * A Callable wrapper for DeleteDatasetImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDatasetImportJobOutcomeCallable DeleteDatasetImportJobCallable(const Model::DeleteDatasetImportJobRequest& request) const;

        /**
         * An Async wrapper for DeleteDatasetImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDatasetImportJobAsync(const Model::DeleteDatasetImportJobRequest& request, const DeleteDatasetImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an Explainability resource.</p> <p>You can delete only predictor that
         * have a status of <code>ACTIVE</code> or <code>CREATE_FAILED</code>. To get the
         * status, use the <a>DescribeExplainability</a> operation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/DeleteExplainability">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteExplainabilityOutcome DeleteExplainability(const Model::DeleteExplainabilityRequest& request) const;

        /**
         * A Callable wrapper for DeleteExplainability that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteExplainabilityOutcomeCallable DeleteExplainabilityCallable(const Model::DeleteExplainabilityRequest& request) const;

        /**
         * An Async wrapper for DeleteExplainability that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteExplainabilityAsync(const Model::DeleteExplainabilityRequest& request, const DeleteExplainabilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an Explainability export.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/DeleteExplainabilityExport">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteExplainabilityExportOutcome DeleteExplainabilityExport(const Model::DeleteExplainabilityExportRequest& request) const;

        /**
         * A Callable wrapper for DeleteExplainabilityExport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteExplainabilityExportOutcomeCallable DeleteExplainabilityExportCallable(const Model::DeleteExplainabilityExportRequest& request) const;

        /**
         * An Async wrapper for DeleteExplainabilityExport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteExplainabilityExportAsync(const Model::DeleteExplainabilityExportRequest& request, const DeleteExplainabilityExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for DeleteForecast that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteForecastOutcomeCallable DeleteForecastCallable(const Model::DeleteForecastRequest& request) const;

        /**
         * An Async wrapper for DeleteForecast that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DeleteForecastExportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteForecastExportJobOutcomeCallable DeleteForecastExportJobCallable(const Model::DeleteForecastExportJobRequest& request) const;

        /**
         * An Async wrapper for DeleteForecastExportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteForecastExportJobAsync(const Model::DeleteForecastExportJobRequest& request, const DeleteForecastExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a monitor resource. You can only delete a monitor resource with a
         * status of <code>ACTIVE</code>, <code>ACTIVE_STOPPED</code>,
         * <code>CREATE_FAILED</code>, or <code>CREATE_STOPPED</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/DeleteMonitor">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMonitorOutcome DeleteMonitor(const Model::DeleteMonitorRequest& request) const;

        /**
         * A Callable wrapper for DeleteMonitor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMonitorOutcomeCallable DeleteMonitorCallable(const Model::DeleteMonitorRequest& request) const;

        /**
         * An Async wrapper for DeleteMonitor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMonitorAsync(const Model::DeleteMonitorRequest& request, const DeleteMonitorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a predictor created using the <a>DescribePredictor</a> or
         * <a>CreatePredictor</a> operations. You can delete only predictor that have a
         * status of <code>ACTIVE</code> or <code>CREATE_FAILED</code>. To get the status,
         * use the <a>DescribePredictor</a> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/DeletePredictor">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePredictorOutcome DeletePredictor(const Model::DeletePredictorRequest& request) const;

        /**
         * A Callable wrapper for DeletePredictor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePredictorOutcomeCallable DeletePredictorCallable(const Model::DeletePredictorRequest& request) const;

        /**
         * An Async wrapper for DeletePredictor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePredictorAsync(const Model::DeletePredictorRequest& request, const DeletePredictorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a predictor backtest export job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/DeletePredictorBacktestExportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePredictorBacktestExportJobOutcome DeletePredictorBacktestExportJob(const Model::DeletePredictorBacktestExportJobRequest& request) const;

        /**
         * A Callable wrapper for DeletePredictorBacktestExportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePredictorBacktestExportJobOutcomeCallable DeletePredictorBacktestExportJobCallable(const Model::DeletePredictorBacktestExportJobRequest& request) const;

        /**
         * An Async wrapper for DeletePredictorBacktestExportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePredictorBacktestExportJobAsync(const Model::DeletePredictorBacktestExportJobRequest& request, const DeletePredictorBacktestExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an entire resource tree. This operation will delete the parent
         * resource and its child resources.</p> <p>Child resources are resources that were
         * created from another resource. For example, when a forecast is generated from a
         * predictor, the forecast is the child resource and the predictor is the parent
         * resource.</p> <p>Amazon Forecast resources possess the following parent-child
         * resource hierarchies:</p> <ul> <li> <p> <b>Dataset</b>: dataset import jobs</p>
         * </li> <li> <p> <b>Dataset Group</b>: predictors, predictor backtest export jobs,
         * forecasts, forecast export jobs</p> </li> <li> <p> <b>Predictor</b>: predictor
         * backtest export jobs, forecasts, forecast export jobs</p> </li> <li> <p>
         * <b>Forecast</b>: forecast export jobs</p> </li> </ul>  <p>
         * <code>DeleteResourceTree</code> will only delete Amazon Forecast resources, and
         * will not delete datasets or exported files stored in Amazon S3. </p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/DeleteResourceTree">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourceTreeOutcome DeleteResourceTree(const Model::DeleteResourceTreeRequest& request) const;

        /**
         * A Callable wrapper for DeleteResourceTree that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteResourceTreeOutcomeCallable DeleteResourceTreeCallable(const Model::DeleteResourceTreeRequest& request) const;

        /**
         * An Async wrapper for DeleteResourceTree that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteResourceTreeAsync(const Model::DeleteResourceTreeRequest& request, const DeleteResourceTreeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a what-if analysis created using the <a>CreateWhatIfAnalysis</a>
         * operation. You can delete only what-if analyses that have a status of
         * <code>ACTIVE</code> or <code>CREATE_FAILED</code>. To get the status, use the
         * <a>DescribeWhatIfAnalysis</a> operation. </p> <p>You can't delete a what-if
         * analysis while any of its forecasts are being exported.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/DeleteWhatIfAnalysis">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWhatIfAnalysisOutcome DeleteWhatIfAnalysis(const Model::DeleteWhatIfAnalysisRequest& request) const;

        /**
         * A Callable wrapper for DeleteWhatIfAnalysis that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteWhatIfAnalysisOutcomeCallable DeleteWhatIfAnalysisCallable(const Model::DeleteWhatIfAnalysisRequest& request) const;

        /**
         * An Async wrapper for DeleteWhatIfAnalysis that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteWhatIfAnalysisAsync(const Model::DeleteWhatIfAnalysisRequest& request, const DeleteWhatIfAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a what-if forecast created using the <a>CreateWhatIfForecast</a>
         * operation. You can delete only what-if forecasts that have a status of
         * <code>ACTIVE</code> or <code>CREATE_FAILED</code>. To get the status, use the
         * <a>DescribeWhatIfForecast</a> operation. </p> <p>You can't delete a what-if
         * forecast while it is being exported. After a what-if forecast is deleted, you
         * can no longer query the what-if analysis.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/DeleteWhatIfForecast">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWhatIfForecastOutcome DeleteWhatIfForecast(const Model::DeleteWhatIfForecastRequest& request) const;

        /**
         * A Callable wrapper for DeleteWhatIfForecast that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteWhatIfForecastOutcomeCallable DeleteWhatIfForecastCallable(const Model::DeleteWhatIfForecastRequest& request) const;

        /**
         * An Async wrapper for DeleteWhatIfForecast that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteWhatIfForecastAsync(const Model::DeleteWhatIfForecastRequest& request, const DeleteWhatIfForecastResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a what-if forecast export created using the
         * <a>CreateWhatIfForecastExport</a> operation. You can delete only what-if
         * forecast exports that have a status of <code>ACTIVE</code> or
         * <code>CREATE_FAILED</code>. To get the status, use the
         * <a>DescribeWhatIfForecastExport</a> operation. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/DeleteWhatIfForecastExport">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWhatIfForecastExportOutcome DeleteWhatIfForecastExport(const Model::DeleteWhatIfForecastExportRequest& request) const;

        /**
         * A Callable wrapper for DeleteWhatIfForecastExport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteWhatIfForecastExportOutcomeCallable DeleteWhatIfForecastExportCallable(const Model::DeleteWhatIfForecastExportRequest& request) const;

        /**
         * An Async wrapper for DeleteWhatIfForecastExport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteWhatIfForecastExportAsync(const Model::DeleteWhatIfForecastExportRequest& request, const DeleteWhatIfForecastExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a predictor created using the CreateAutoPredictor
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/DescribeAutoPredictor">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAutoPredictorOutcome DescribeAutoPredictor(const Model::DescribeAutoPredictorRequest& request) const;

        /**
         * A Callable wrapper for DescribeAutoPredictor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAutoPredictorOutcomeCallable DescribeAutoPredictorCallable(const Model::DescribeAutoPredictorRequest& request) const;

        /**
         * An Async wrapper for DescribeAutoPredictor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAutoPredictorAsync(const Model::DescribeAutoPredictorRequest& request, const DescribeAutoPredictorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes an Amazon Forecast dataset created using the <a
         * href="https://docs.aws.amazon.com/forecast/latest/dg/API_CreateDataset.html">CreateDataset</a>
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
         * A Callable wrapper for DescribeDataset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDatasetOutcomeCallable DescribeDatasetCallable(const Model::DescribeDatasetRequest& request) const;

        /**
         * An Async wrapper for DescribeDataset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDatasetAsync(const Model::DescribeDatasetRequest& request, const DescribeDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a dataset group created using the <a
         * href="https://docs.aws.amazon.com/forecast/latest/dg/API_CreateDatasetGroup.html">CreateDatasetGroup</a>
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
         * A Callable wrapper for DescribeDatasetGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDatasetGroupOutcomeCallable DescribeDatasetGroupCallable(const Model::DescribeDatasetGroupRequest& request) const;

        /**
         * An Async wrapper for DescribeDatasetGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDatasetGroupAsync(const Model::DescribeDatasetGroupRequest& request, const DescribeDatasetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a dataset import job created using the <a
         * href="https://docs.aws.amazon.com/forecast/latest/dg/API_CreateDatasetImportJob.html">CreateDatasetImportJob</a>
         * operation.</p> <p>In addition to listing the parameters provided in the
         * <code>CreateDatasetImportJob</code> request, this operation includes the
         * following properties:</p> <ul> <li> <p> <code>CreationTime</code> </p> </li>
         * <li> <p> <code>LastModificationTime</code> </p> </li> <li> <p>
         * <code>DataSize</code> </p> </li> <li> <p> <code>FieldStatistics</code> </p>
         * </li> <li> <p> <code>Status</code> </p> </li> <li> <p> <code>Message</code> - If
         * an error occurred, information about the error.</p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/DescribeDatasetImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDatasetImportJobOutcome DescribeDatasetImportJob(const Model::DescribeDatasetImportJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeDatasetImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDatasetImportJobOutcomeCallable DescribeDatasetImportJobCallable(const Model::DescribeDatasetImportJobRequest& request) const;

        /**
         * An Async wrapper for DescribeDatasetImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDatasetImportJobAsync(const Model::DescribeDatasetImportJobRequest& request, const DescribeDatasetImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes an Explainability resource created using the
         * <a>CreateExplainability</a> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/DescribeExplainability">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeExplainabilityOutcome DescribeExplainability(const Model::DescribeExplainabilityRequest& request) const;

        /**
         * A Callable wrapper for DescribeExplainability that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeExplainabilityOutcomeCallable DescribeExplainabilityCallable(const Model::DescribeExplainabilityRequest& request) const;

        /**
         * An Async wrapper for DescribeExplainability that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeExplainabilityAsync(const Model::DescribeExplainabilityRequest& request, const DescribeExplainabilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes an Explainability export created using the
         * <a>CreateExplainabilityExport</a> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/DescribeExplainabilityExport">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeExplainabilityExportOutcome DescribeExplainabilityExport(const Model::DescribeExplainabilityExportRequest& request) const;

        /**
         * A Callable wrapper for DescribeExplainabilityExport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeExplainabilityExportOutcomeCallable DescribeExplainabilityExportCallable(const Model::DescribeExplainabilityExportRequest& request) const;

        /**
         * An Async wrapper for DescribeExplainabilityExport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeExplainabilityExportAsync(const Model::DescribeExplainabilityExportRequest& request, const DescribeExplainabilityExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for DescribeForecast that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeForecastOutcomeCallable DescribeForecastCallable(const Model::DescribeForecastRequest& request) const;

        /**
         * An Async wrapper for DescribeForecast that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DescribeForecastExportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeForecastExportJobOutcomeCallable DescribeForecastExportJobCallable(const Model::DescribeForecastExportJobRequest& request) const;

        /**
         * An Async wrapper for DescribeForecastExportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeForecastExportJobAsync(const Model::DescribeForecastExportJobRequest& request, const DescribeForecastExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a monitor resource. In addition to listing the properties provided
         * in the <a>CreateMonitor</a> request, this operation lists the following
         * properties:</p> <ul> <li> <p> <code>Baseline</code> </p> </li> <li> <p>
         * <code>CreationTime</code> </p> </li> <li> <p> <code>LastEvaluationTime</code>
         * </p> </li> <li> <p> <code>LastEvaluationState</code> </p> </li> <li> <p>
         * <code>LastModificationTime</code> </p> </li> <li> <p> <code>Message</code> </p>
         * </li> <li> <p> <code>Status</code> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/DescribeMonitor">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMonitorOutcome DescribeMonitor(const Model::DescribeMonitorRequest& request) const;

        /**
         * A Callable wrapper for DescribeMonitor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeMonitorOutcomeCallable DescribeMonitorCallable(const Model::DescribeMonitorRequest& request) const;

        /**
         * An Async wrapper for DescribeMonitor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeMonitorAsync(const Model::DescribeMonitorRequest& request, const DescribeMonitorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p> This operation is only valid for legacy predictors created with
         * CreatePredictor. If you are not using a legacy predictor, use
         * <a>DescribeAutoPredictor</a>.</p>  <p>Describes a predictor created using
         * the <a>CreatePredictor</a> operation.</p> <p>In addition to listing the
         * properties provided in the <code>CreatePredictor</code> request, this operation
         * lists the following properties:</p> <ul> <li> <p>
         * <code>DatasetImportJobArns</code> - The dataset import jobs used to import
         * training data.</p> </li> <li> <p> <code>AutoMLAlgorithmArns</code> - If AutoML
         * is performed, the algorithms that were evaluated.</p> </li> <li> <p>
         * <code>CreationTime</code> </p> </li> <li> <p> <code>LastModificationTime</code>
         * </p> </li> <li> <p> <code>Status</code> </p> </li> <li> <p> <code>Message</code>
         * - If an error occurred, information about the error.</p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/DescribePredictor">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePredictorOutcome DescribePredictor(const Model::DescribePredictorRequest& request) const;

        /**
         * A Callable wrapper for DescribePredictor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePredictorOutcomeCallable DescribePredictorCallable(const Model::DescribePredictorRequest& request) const;

        /**
         * An Async wrapper for DescribePredictor that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DescribePredictorBacktestExportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePredictorBacktestExportJobOutcomeCallable DescribePredictorBacktestExportJobCallable(const Model::DescribePredictorBacktestExportJobRequest& request) const;

        /**
         * An Async wrapper for DescribePredictorBacktestExportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePredictorBacktestExportJobAsync(const Model::DescribePredictorBacktestExportJobRequest& request, const DescribePredictorBacktestExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the what-if analysis created using the <a>CreateWhatIfAnalysis</a>
         * operation.</p> <p>In addition to listing the properties provided in the
         * <code>CreateWhatIfAnalysis</code> request, this operation lists the following
         * properties:</p> <ul> <li> <p> <code>CreationTime</code> </p> </li> <li> <p>
         * <code>LastModificationTime</code> </p> </li> <li> <p> <code>Message</code> - If
         * an error occurred, information about the error.</p> </li> <li> <p>
         * <code>Status</code> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/DescribeWhatIfAnalysis">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWhatIfAnalysisOutcome DescribeWhatIfAnalysis(const Model::DescribeWhatIfAnalysisRequest& request) const;

        /**
         * A Callable wrapper for DescribeWhatIfAnalysis that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeWhatIfAnalysisOutcomeCallable DescribeWhatIfAnalysisCallable(const Model::DescribeWhatIfAnalysisRequest& request) const;

        /**
         * An Async wrapper for DescribeWhatIfAnalysis that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeWhatIfAnalysisAsync(const Model::DescribeWhatIfAnalysisRequest& request, const DescribeWhatIfAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the what-if forecast created using the <a>CreateWhatIfForecast</a>
         * operation.</p> <p>In addition to listing the properties provided in the
         * <code>CreateWhatIfForecast</code> request, this operation lists the following
         * properties:</p> <ul> <li> <p> <code>CreationTime</code> </p> </li> <li> <p>
         * <code>LastModificationTime</code> </p> </li> <li> <p> <code>Message</code> - If
         * an error occurred, information about the error.</p> </li> <li> <p>
         * <code>Status</code> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/DescribeWhatIfForecast">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWhatIfForecastOutcome DescribeWhatIfForecast(const Model::DescribeWhatIfForecastRequest& request) const;

        /**
         * A Callable wrapper for DescribeWhatIfForecast that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeWhatIfForecastOutcomeCallable DescribeWhatIfForecastCallable(const Model::DescribeWhatIfForecastRequest& request) const;

        /**
         * An Async wrapper for DescribeWhatIfForecast that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeWhatIfForecastAsync(const Model::DescribeWhatIfForecastRequest& request, const DescribeWhatIfForecastResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the what-if forecast export created using the
         * <a>CreateWhatIfForecastExport</a> operation.</p> <p>In addition to listing the
         * properties provided in the <code>CreateWhatIfForecastExport</code> request, this
         * operation lists the following properties:</p> <ul> <li> <p>
         * <code>CreationTime</code> </p> </li> <li> <p> <code>LastModificationTime</code>
         * </p> </li> <li> <p> <code>Message</code> - If an error occurred, information
         * about the error.</p> </li> <li> <p> <code>Status</code> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/DescribeWhatIfForecastExport">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWhatIfForecastExportOutcome DescribeWhatIfForecastExport(const Model::DescribeWhatIfForecastExportRequest& request) const;

        /**
         * A Callable wrapper for DescribeWhatIfForecastExport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeWhatIfForecastExportOutcomeCallable DescribeWhatIfForecastExportCallable(const Model::DescribeWhatIfForecastExportRequest& request) const;

        /**
         * An Async wrapper for DescribeWhatIfForecastExport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeWhatIfForecastExportAsync(const Model::DescribeWhatIfForecastExportRequest& request, const DescribeWhatIfForecastExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for GetAccuracyMetrics that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAccuracyMetricsOutcomeCallable GetAccuracyMetricsCallable(const Model::GetAccuracyMetricsRequest& request) const;

        /**
         * An Async wrapper for GetAccuracyMetrics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAccuracyMetricsAsync(const Model::GetAccuracyMetricsRequest& request, const GetAccuracyMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of dataset groups created using the <a
         * href="https://docs.aws.amazon.com/forecast/latest/dg/API_CreateDatasetGroup.html">CreateDatasetGroup</a>
         * operation. For each dataset group, this operation returns a summary of its
         * properties, including its Amazon Resource Name (ARN). You can retrieve the
         * complete set of properties by using the dataset group ARN with the <a
         * href="https://docs.aws.amazon.com/forecast/latest/dg/API_DescribeDatasetGroup.html">DescribeDatasetGroup</a>
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/ListDatasetGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDatasetGroupsOutcome ListDatasetGroups(const Model::ListDatasetGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListDatasetGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDatasetGroupsOutcomeCallable ListDatasetGroupsCallable(const Model::ListDatasetGroupsRequest& request) const;

        /**
         * An Async wrapper for ListDatasetGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDatasetGroupsAsync(const Model::ListDatasetGroupsRequest& request, const ListDatasetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of dataset import jobs created using the <a
         * href="https://docs.aws.amazon.com/forecast/latest/dg/API_CreateDatasetImportJob.html">CreateDatasetImportJob</a>
         * operation. For each import job, this operation returns a summary of its
         * properties, including its Amazon Resource Name (ARN). You can retrieve the
         * complete set of properties by using the ARN with the <a
         * href="https://docs.aws.amazon.com/forecast/latest/dg/API_DescribeDatasetImportJob.html">DescribeDatasetImportJob</a>
         * operation. You can filter the list by providing an array of <a
         * href="https://docs.aws.amazon.com/forecast/latest/dg/API_Filter.html">Filter</a>
         * objects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/ListDatasetImportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDatasetImportJobsOutcome ListDatasetImportJobs(const Model::ListDatasetImportJobsRequest& request) const;

        /**
         * A Callable wrapper for ListDatasetImportJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDatasetImportJobsOutcomeCallable ListDatasetImportJobsCallable(const Model::ListDatasetImportJobsRequest& request) const;

        /**
         * An Async wrapper for ListDatasetImportJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDatasetImportJobsAsync(const Model::ListDatasetImportJobsRequest& request, const ListDatasetImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of datasets created using the <a
         * href="https://docs.aws.amazon.com/forecast/latest/dg/API_CreateDataset.html">CreateDataset</a>
         * operation. For each dataset, a summary of its properties, including its Amazon
         * Resource Name (ARN), is returned. To retrieve the complete set of properties,
         * use the ARN with the <a
         * href="https://docs.aws.amazon.com/forecast/latest/dg/API_DescribeDataset.html">DescribeDataset</a>
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/ListDatasets">AWS
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
         * <p>Returns a list of Explainability resources created using the
         * <a>CreateExplainability</a> operation. This operation returns a summary for each
         * Explainability. You can filter the list using an array of <a>Filter</a>
         * objects.</p> <p>To retrieve the complete set of properties for a particular
         * Explainability resource, use the ARN with the <a>DescribeExplainability</a>
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/ListExplainabilities">AWS
         * API Reference</a></p>
         */
        virtual Model::ListExplainabilitiesOutcome ListExplainabilities(const Model::ListExplainabilitiesRequest& request) const;

        /**
         * A Callable wrapper for ListExplainabilities that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListExplainabilitiesOutcomeCallable ListExplainabilitiesCallable(const Model::ListExplainabilitiesRequest& request) const;

        /**
         * An Async wrapper for ListExplainabilities that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListExplainabilitiesAsync(const Model::ListExplainabilitiesRequest& request, const ListExplainabilitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of Explainability exports created using the
         * <a>CreateExplainabilityExport</a> operation. This operation returns a summary
         * for each Explainability export. You can filter the list using an array of
         * <a>Filter</a> objects.</p> <p>To retrieve the complete set of properties for a
         * particular Explainability export, use the ARN with the
         * <a>DescribeExplainability</a> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/ListExplainabilityExports">AWS
         * API Reference</a></p>
         */
        virtual Model::ListExplainabilityExportsOutcome ListExplainabilityExports(const Model::ListExplainabilityExportsRequest& request) const;

        /**
         * A Callable wrapper for ListExplainabilityExports that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListExplainabilityExportsOutcomeCallable ListExplainabilityExportsCallable(const Model::ListExplainabilityExportsRequest& request) const;

        /**
         * An Async wrapper for ListExplainabilityExports that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListExplainabilityExportsAsync(const Model::ListExplainabilityExportsRequest& request, const ListExplainabilityExportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for ListForecastExportJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListForecastExportJobsOutcomeCallable ListForecastExportJobsCallable(const Model::ListForecastExportJobsRequest& request) const;

        /**
         * An Async wrapper for ListForecastExportJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListForecasts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListForecastsOutcomeCallable ListForecastsCallable(const Model::ListForecastsRequest& request) const;

        /**
         * An Async wrapper for ListForecasts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListForecastsAsync(const Model::ListForecastsRequest& request, const ListForecastsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of the monitoring evaluation results and predictor events
         * collected by the monitor resource during different windows of time.</p> <p>For
         * information about monitoring see <a>predictor-monitoring</a>. For more
         * information about retrieving monitoring results see <a
         * href="https://docs.aws.amazon.com/forecast/latest/dg/predictor-monitoring-results.html">Viewing
         * Monitoring Results</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/ListMonitorEvaluations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMonitorEvaluationsOutcome ListMonitorEvaluations(const Model::ListMonitorEvaluationsRequest& request) const;

        /**
         * A Callable wrapper for ListMonitorEvaluations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMonitorEvaluationsOutcomeCallable ListMonitorEvaluationsCallable(const Model::ListMonitorEvaluationsRequest& request) const;

        /**
         * An Async wrapper for ListMonitorEvaluations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMonitorEvaluationsAsync(const Model::ListMonitorEvaluationsRequest& request, const ListMonitorEvaluationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of monitors created with the <a>CreateMonitor</a> operation
         * and <a>CreateAutoPredictor</a> operation. For each monitor resource, this
         * operation returns of a summary of its properties, including its Amazon Resource
         * Name (ARN). You can retrieve a complete set of properties of a monitor resource
         * by specify the monitor's ARN in the <a>DescribeMonitor</a>
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/ListMonitors">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMonitorsOutcome ListMonitors(const Model::ListMonitorsRequest& request) const;

        /**
         * A Callable wrapper for ListMonitors that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMonitorsOutcomeCallable ListMonitorsCallable(const Model::ListMonitorsRequest& request) const;

        /**
         * An Async wrapper for ListMonitors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMonitorsAsync(const Model::ListMonitorsRequest& request, const ListMonitorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for ListPredictorBacktestExportJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPredictorBacktestExportJobsOutcomeCallable ListPredictorBacktestExportJobsCallable(const Model::ListPredictorBacktestExportJobsRequest& request) const;

        /**
         * An Async wrapper for ListPredictorBacktestExportJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPredictorBacktestExportJobsAsync(const Model::ListPredictorBacktestExportJobsRequest& request, const ListPredictorBacktestExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of predictors created using the <a>CreateAutoPredictor</a> or
         * <a>CreatePredictor</a> operations. For each predictor, this operation returns a
         * summary of its properties, including its Amazon Resource Name (ARN). </p> <p>You
         * can retrieve the complete set of properties by using the ARN with the
         * <a>DescribeAutoPredictor</a> and <a>DescribePredictor</a> operations. You can
         * filter the list using an array of <a>Filter</a> objects.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/ListPredictors">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPredictorsOutcome ListPredictors(const Model::ListPredictorsRequest& request) const;

        /**
         * A Callable wrapper for ListPredictors that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPredictorsOutcomeCallable ListPredictorsCallable(const Model::ListPredictorsRequest& request) const;

        /**
         * An Async wrapper for ListPredictors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPredictorsAsync(const Model::ListPredictorsRequest& request, const ListPredictorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags for an Amazon Forecast resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/ListTagsForResource">AWS
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
         * <p>Returns a list of what-if analyses created using the
         * <a>CreateWhatIfAnalysis</a> operation. For each what-if analysis, this operation
         * returns a summary of its properties, including its Amazon Resource Name (ARN).
         * You can retrieve the complete set of properties by using the what-if analysis
         * ARN with the <a>DescribeWhatIfAnalysis</a> operation.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/ListWhatIfAnalyses">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWhatIfAnalysesOutcome ListWhatIfAnalyses(const Model::ListWhatIfAnalysesRequest& request) const;

        /**
         * A Callable wrapper for ListWhatIfAnalyses that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListWhatIfAnalysesOutcomeCallable ListWhatIfAnalysesCallable(const Model::ListWhatIfAnalysesRequest& request) const;

        /**
         * An Async wrapper for ListWhatIfAnalyses that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListWhatIfAnalysesAsync(const Model::ListWhatIfAnalysesRequest& request, const ListWhatIfAnalysesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of what-if forecast exports created using the
         * <a>CreateWhatIfForecastExport</a> operation. For each what-if forecast export,
         * this operation returns a summary of its properties, including its Amazon
         * Resource Name (ARN). You can retrieve the complete set of properties by using
         * the what-if forecast export ARN with the <a>DescribeWhatIfForecastExport</a>
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/ListWhatIfForecastExports">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWhatIfForecastExportsOutcome ListWhatIfForecastExports(const Model::ListWhatIfForecastExportsRequest& request) const;

        /**
         * A Callable wrapper for ListWhatIfForecastExports that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListWhatIfForecastExportsOutcomeCallable ListWhatIfForecastExportsCallable(const Model::ListWhatIfForecastExportsRequest& request) const;

        /**
         * An Async wrapper for ListWhatIfForecastExports that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListWhatIfForecastExportsAsync(const Model::ListWhatIfForecastExportsRequest& request, const ListWhatIfForecastExportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of what-if forecasts created using the
         * <a>CreateWhatIfForecast</a> operation. For each what-if forecast, this operation
         * returns a summary of its properties, including its Amazon Resource Name (ARN).
         * You can retrieve the complete set of properties by using the what-if forecast
         * ARN with the <a>DescribeWhatIfForecast</a> operation.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/ListWhatIfForecasts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWhatIfForecastsOutcome ListWhatIfForecasts(const Model::ListWhatIfForecastsRequest& request) const;

        /**
         * A Callable wrapper for ListWhatIfForecasts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListWhatIfForecastsOutcomeCallable ListWhatIfForecastsCallable(const Model::ListWhatIfForecastsRequest& request) const;

        /**
         * An Async wrapper for ListWhatIfForecasts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListWhatIfForecastsAsync(const Model::ListWhatIfForecastsRequest& request, const ListWhatIfForecastsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Resumes a stopped monitor resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/ResumeResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ResumeResourceOutcome ResumeResource(const Model::ResumeResourceRequest& request) const;

        /**
         * A Callable wrapper for ResumeResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResumeResourceOutcomeCallable ResumeResourceCallable(const Model::ResumeResourceRequest& request) const;

        /**
         * An Async wrapper for ResumeResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResumeResourceAsync(const Model::ResumeResourceRequest& request, const ResumeResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops a resource.</p> <p>The resource undergoes the following states:
         * <code>CREATE_STOPPING</code> and <code>CREATE_STOPPED</code>. You cannot resume
         * a resource once it has been stopped.</p> <p>This operation can be applied to the
         * following resources (and their corresponding child resources):</p> <ul> <li>
         * <p>Dataset Import Job</p> </li> <li> <p>Predictor Job</p> </li> <li> <p>Forecast
         * Job</p> </li> <li> <p>Forecast Export Job</p> </li> <li> <p>Predictor Backtest
         * Export Job</p> </li> <li> <p>Explainability Job</p> </li> <li> <p>Explainability
         * Export Job</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/StopResource">AWS
         * API Reference</a></p>
         */
        virtual Model::StopResourceOutcome StopResource(const Model::StopResourceRequest& request) const;

        /**
         * A Callable wrapper for StopResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopResourceOutcomeCallable StopResourceCallable(const Model::StopResourceRequest& request) const;

        /**
         * An Async wrapper for StopResource that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/UntagResource">AWS
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
         * <p>Replaces the datasets in a dataset group with the specified datasets.</p>
         *  <p>The <code>Status</code> of the dataset group must be
         * <code>ACTIVE</code> before you can use the dataset group to create a predictor.
         * Use the <a
         * href="https://docs.aws.amazon.com/forecast/latest/dg/API_DescribeDatasetGroup.html">DescribeDatasetGroup</a>
         * operation to get the status.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/UpdateDatasetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDatasetGroupOutcome UpdateDatasetGroup(const Model::UpdateDatasetGroupRequest& request) const;

        /**
         * A Callable wrapper for UpdateDatasetGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDatasetGroupOutcomeCallable UpdateDatasetGroupCallable(const Model::UpdateDatasetGroupRequest& request) const;

        /**
         * An Async wrapper for UpdateDatasetGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDatasetGroupAsync(const Model::UpdateDatasetGroupRequest& request, const UpdateDatasetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ForecastServiceEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<ForecastServiceClient>;
      void init(const ForecastServiceClientConfiguration& clientConfiguration);

      ForecastServiceClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ForecastServiceEndpointProviderBase> m_endpointProvider;
  };

} // namespace ForecastService
} // namespace Aws
