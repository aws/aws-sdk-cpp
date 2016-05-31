/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
#include <aws/machinelearning/MachineLearningErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/machinelearning/model/CreateBatchPredictionResult.h>
#include <aws/machinelearning/model/CreateDataSourceFromRDSResult.h>
#include <aws/machinelearning/model/CreateDataSourceFromRedshiftResult.h>
#include <aws/machinelearning/model/CreateDataSourceFromS3Result.h>
#include <aws/machinelearning/model/CreateEvaluationResult.h>
#include <aws/machinelearning/model/CreateMLModelResult.h>
#include <aws/machinelearning/model/CreateRealtimeEndpointResult.h>
#include <aws/machinelearning/model/DeleteBatchPredictionResult.h>
#include <aws/machinelearning/model/DeleteDataSourceResult.h>
#include <aws/machinelearning/model/DeleteEvaluationResult.h>
#include <aws/machinelearning/model/DeleteMLModelResult.h>
#include <aws/machinelearning/model/DeleteRealtimeEndpointResult.h>
#include <aws/machinelearning/model/DescribeBatchPredictionsResult.h>
#include <aws/machinelearning/model/DescribeDataSourcesResult.h>
#include <aws/machinelearning/model/DescribeEvaluationsResult.h>
#include <aws/machinelearning/model/DescribeMLModelsResult.h>
#include <aws/machinelearning/model/GetBatchPredictionResult.h>
#include <aws/machinelearning/model/GetDataSourceResult.h>
#include <aws/machinelearning/model/GetEvaluationResult.h>
#include <aws/machinelearning/model/GetMLModelResult.h>
#include <aws/machinelearning/model/PredictResult.h>
#include <aws/machinelearning/model/UpdateBatchPredictionResult.h>
#include <aws/machinelearning/model/UpdateDataSourceResult.h>
#include <aws/machinelearning/model/UpdateEvaluationResult.h>
#include <aws/machinelearning/model/UpdateMLModelResult.h>
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

namespace Json
{
  class JsonValue;
} // namespace Json
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

namespace MachineLearning
{

namespace Model
{
        class CreateBatchPredictionRequest;
        class CreateDataSourceFromRDSRequest;
        class CreateDataSourceFromRedshiftRequest;
        class CreateDataSourceFromS3Request;
        class CreateEvaluationRequest;
        class CreateMLModelRequest;
        class CreateRealtimeEndpointRequest;
        class DeleteBatchPredictionRequest;
        class DeleteDataSourceRequest;
        class DeleteEvaluationRequest;
        class DeleteMLModelRequest;
        class DeleteRealtimeEndpointRequest;
        class DescribeBatchPredictionsRequest;
        class DescribeDataSourcesRequest;
        class DescribeEvaluationsRequest;
        class DescribeMLModelsRequest;
        class GetBatchPredictionRequest;
        class GetDataSourceRequest;
        class GetEvaluationRequest;
        class GetMLModelRequest;
        class PredictRequest;
        class UpdateBatchPredictionRequest;
        class UpdateDataSourceRequest;
        class UpdateEvaluationRequest;
        class UpdateMLModelRequest;

        typedef Aws::Utils::Outcome<CreateBatchPredictionResult, Aws::Client::AWSError<MachineLearningErrors>> CreateBatchPredictionOutcome;
        typedef Aws::Utils::Outcome<CreateDataSourceFromRDSResult, Aws::Client::AWSError<MachineLearningErrors>> CreateDataSourceFromRDSOutcome;
        typedef Aws::Utils::Outcome<CreateDataSourceFromRedshiftResult, Aws::Client::AWSError<MachineLearningErrors>> CreateDataSourceFromRedshiftOutcome;
        typedef Aws::Utils::Outcome<CreateDataSourceFromS3Result, Aws::Client::AWSError<MachineLearningErrors>> CreateDataSourceFromS3Outcome;
        typedef Aws::Utils::Outcome<CreateEvaluationResult, Aws::Client::AWSError<MachineLearningErrors>> CreateEvaluationOutcome;
        typedef Aws::Utils::Outcome<CreateMLModelResult, Aws::Client::AWSError<MachineLearningErrors>> CreateMLModelOutcome;
        typedef Aws::Utils::Outcome<CreateRealtimeEndpointResult, Aws::Client::AWSError<MachineLearningErrors>> CreateRealtimeEndpointOutcome;
        typedef Aws::Utils::Outcome<DeleteBatchPredictionResult, Aws::Client::AWSError<MachineLearningErrors>> DeleteBatchPredictionOutcome;
        typedef Aws::Utils::Outcome<DeleteDataSourceResult, Aws::Client::AWSError<MachineLearningErrors>> DeleteDataSourceOutcome;
        typedef Aws::Utils::Outcome<DeleteEvaluationResult, Aws::Client::AWSError<MachineLearningErrors>> DeleteEvaluationOutcome;
        typedef Aws::Utils::Outcome<DeleteMLModelResult, Aws::Client::AWSError<MachineLearningErrors>> DeleteMLModelOutcome;
        typedef Aws::Utils::Outcome<DeleteRealtimeEndpointResult, Aws::Client::AWSError<MachineLearningErrors>> DeleteRealtimeEndpointOutcome;
        typedef Aws::Utils::Outcome<DescribeBatchPredictionsResult, Aws::Client::AWSError<MachineLearningErrors>> DescribeBatchPredictionsOutcome;
        typedef Aws::Utils::Outcome<DescribeDataSourcesResult, Aws::Client::AWSError<MachineLearningErrors>> DescribeDataSourcesOutcome;
        typedef Aws::Utils::Outcome<DescribeEvaluationsResult, Aws::Client::AWSError<MachineLearningErrors>> DescribeEvaluationsOutcome;
        typedef Aws::Utils::Outcome<DescribeMLModelsResult, Aws::Client::AWSError<MachineLearningErrors>> DescribeMLModelsOutcome;
        typedef Aws::Utils::Outcome<GetBatchPredictionResult, Aws::Client::AWSError<MachineLearningErrors>> GetBatchPredictionOutcome;
        typedef Aws::Utils::Outcome<GetDataSourceResult, Aws::Client::AWSError<MachineLearningErrors>> GetDataSourceOutcome;
        typedef Aws::Utils::Outcome<GetEvaluationResult, Aws::Client::AWSError<MachineLearningErrors>> GetEvaluationOutcome;
        typedef Aws::Utils::Outcome<GetMLModelResult, Aws::Client::AWSError<MachineLearningErrors>> GetMLModelOutcome;
        typedef Aws::Utils::Outcome<PredictResult, Aws::Client::AWSError<MachineLearningErrors>> PredictOutcome;
        typedef Aws::Utils::Outcome<UpdateBatchPredictionResult, Aws::Client::AWSError<MachineLearningErrors>> UpdateBatchPredictionOutcome;
        typedef Aws::Utils::Outcome<UpdateDataSourceResult, Aws::Client::AWSError<MachineLearningErrors>> UpdateDataSourceOutcome;
        typedef Aws::Utils::Outcome<UpdateEvaluationResult, Aws::Client::AWSError<MachineLearningErrors>> UpdateEvaluationOutcome;
        typedef Aws::Utils::Outcome<UpdateMLModelResult, Aws::Client::AWSError<MachineLearningErrors>> UpdateMLModelOutcome;

        typedef std::future<CreateBatchPredictionOutcome> CreateBatchPredictionOutcomeCallable;
        typedef std::future<CreateDataSourceFromRDSOutcome> CreateDataSourceFromRDSOutcomeCallable;
        typedef std::future<CreateDataSourceFromRedshiftOutcome> CreateDataSourceFromRedshiftOutcomeCallable;
        typedef std::future<CreateDataSourceFromS3Outcome> CreateDataSourceFromS3OutcomeCallable;
        typedef std::future<CreateEvaluationOutcome> CreateEvaluationOutcomeCallable;
        typedef std::future<CreateMLModelOutcome> CreateMLModelOutcomeCallable;
        typedef std::future<CreateRealtimeEndpointOutcome> CreateRealtimeEndpointOutcomeCallable;
        typedef std::future<DeleteBatchPredictionOutcome> DeleteBatchPredictionOutcomeCallable;
        typedef std::future<DeleteDataSourceOutcome> DeleteDataSourceOutcomeCallable;
        typedef std::future<DeleteEvaluationOutcome> DeleteEvaluationOutcomeCallable;
        typedef std::future<DeleteMLModelOutcome> DeleteMLModelOutcomeCallable;
        typedef std::future<DeleteRealtimeEndpointOutcome> DeleteRealtimeEndpointOutcomeCallable;
        typedef std::future<DescribeBatchPredictionsOutcome> DescribeBatchPredictionsOutcomeCallable;
        typedef std::future<DescribeDataSourcesOutcome> DescribeDataSourcesOutcomeCallable;
        typedef std::future<DescribeEvaluationsOutcome> DescribeEvaluationsOutcomeCallable;
        typedef std::future<DescribeMLModelsOutcome> DescribeMLModelsOutcomeCallable;
        typedef std::future<GetBatchPredictionOutcome> GetBatchPredictionOutcomeCallable;
        typedef std::future<GetDataSourceOutcome> GetDataSourceOutcomeCallable;
        typedef std::future<GetEvaluationOutcome> GetEvaluationOutcomeCallable;
        typedef std::future<GetMLModelOutcome> GetMLModelOutcomeCallable;
        typedef std::future<PredictOutcome> PredictOutcomeCallable;
        typedef std::future<UpdateBatchPredictionOutcome> UpdateBatchPredictionOutcomeCallable;
        typedef std::future<UpdateDataSourceOutcome> UpdateDataSourceOutcomeCallable;
        typedef std::future<UpdateEvaluationOutcome> UpdateEvaluationOutcomeCallable;
        typedef std::future<UpdateMLModelOutcome> UpdateMLModelOutcomeCallable;
} // namespace Model

  class MachineLearningClient;

    typedef std::function<void(const MachineLearningClient*, const Model::CreateBatchPredictionRequest&, const Model::CreateBatchPredictionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBatchPredictionResponseReceivedHandler;
    typedef std::function<void(const MachineLearningClient*, const Model::CreateDataSourceFromRDSRequest&, const Model::CreateDataSourceFromRDSOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDataSourceFromRDSResponseReceivedHandler;
    typedef std::function<void(const MachineLearningClient*, const Model::CreateDataSourceFromRedshiftRequest&, const Model::CreateDataSourceFromRedshiftOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDataSourceFromRedshiftResponseReceivedHandler;
    typedef std::function<void(const MachineLearningClient*, const Model::CreateDataSourceFromS3Request&, const Model::CreateDataSourceFromS3Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDataSourceFromS3ResponseReceivedHandler;
    typedef std::function<void(const MachineLearningClient*, const Model::CreateEvaluationRequest&, const Model::CreateEvaluationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEvaluationResponseReceivedHandler;
    typedef std::function<void(const MachineLearningClient*, const Model::CreateMLModelRequest&, const Model::CreateMLModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMLModelResponseReceivedHandler;
    typedef std::function<void(const MachineLearningClient*, const Model::CreateRealtimeEndpointRequest&, const Model::CreateRealtimeEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRealtimeEndpointResponseReceivedHandler;
    typedef std::function<void(const MachineLearningClient*, const Model::DeleteBatchPredictionRequest&, const Model::DeleteBatchPredictionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBatchPredictionResponseReceivedHandler;
    typedef std::function<void(const MachineLearningClient*, const Model::DeleteDataSourceRequest&, const Model::DeleteDataSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDataSourceResponseReceivedHandler;
    typedef std::function<void(const MachineLearningClient*, const Model::DeleteEvaluationRequest&, const Model::DeleteEvaluationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEvaluationResponseReceivedHandler;
    typedef std::function<void(const MachineLearningClient*, const Model::DeleteMLModelRequest&, const Model::DeleteMLModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMLModelResponseReceivedHandler;
    typedef std::function<void(const MachineLearningClient*, const Model::DeleteRealtimeEndpointRequest&, const Model::DeleteRealtimeEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRealtimeEndpointResponseReceivedHandler;
    typedef std::function<void(const MachineLearningClient*, const Model::DescribeBatchPredictionsRequest&, const Model::DescribeBatchPredictionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeBatchPredictionsResponseReceivedHandler;
    typedef std::function<void(const MachineLearningClient*, const Model::DescribeDataSourcesRequest&, const Model::DescribeDataSourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDataSourcesResponseReceivedHandler;
    typedef std::function<void(const MachineLearningClient*, const Model::DescribeEvaluationsRequest&, const Model::DescribeEvaluationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEvaluationsResponseReceivedHandler;
    typedef std::function<void(const MachineLearningClient*, const Model::DescribeMLModelsRequest&, const Model::DescribeMLModelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMLModelsResponseReceivedHandler;
    typedef std::function<void(const MachineLearningClient*, const Model::GetBatchPredictionRequest&, const Model::GetBatchPredictionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBatchPredictionResponseReceivedHandler;
    typedef std::function<void(const MachineLearningClient*, const Model::GetDataSourceRequest&, const Model::GetDataSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDataSourceResponseReceivedHandler;
    typedef std::function<void(const MachineLearningClient*, const Model::GetEvaluationRequest&, const Model::GetEvaluationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEvaluationResponseReceivedHandler;
    typedef std::function<void(const MachineLearningClient*, const Model::GetMLModelRequest&, const Model::GetMLModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMLModelResponseReceivedHandler;
    typedef std::function<void(const MachineLearningClient*, const Model::PredictRequest&, const Model::PredictOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PredictResponseReceivedHandler;
    typedef std::function<void(const MachineLearningClient*, const Model::UpdateBatchPredictionRequest&, const Model::UpdateBatchPredictionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateBatchPredictionResponseReceivedHandler;
    typedef std::function<void(const MachineLearningClient*, const Model::UpdateDataSourceRequest&, const Model::UpdateDataSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDataSourceResponseReceivedHandler;
    typedef std::function<void(const MachineLearningClient*, const Model::UpdateEvaluationRequest&, const Model::UpdateEvaluationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEvaluationResponseReceivedHandler;
    typedef std::function<void(const MachineLearningClient*, const Model::UpdateMLModelRequest&, const Model::UpdateMLModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMLModelResponseReceivedHandler;

  /**
   * Definition of the public APIs exposed by Amazon Machine Learning
   */
  class AWS_MACHINELEARNING_API MachineLearningClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MachineLearningClient(const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MachineLearningClient(const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MachineLearningClient(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
            const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

        virtual ~MachineLearningClient();

        /**
         * <p>Generates predictions for a group of observations. The observations to
         * process exist in one or more data files referenced by a <code>DataSource</code>.
         * This operation creates a new <code>BatchPrediction</code>, and uses an
         * <code>MLModel</code> and the data files referenced by the
         * <code>DataSource</code> as information sources. </p>
         * <p><code>CreateBatchPrediction</code> is an asynchronous operation. In response
         * to <code>CreateBatchPrediction</code>, Amazon Machine Learning (Amazon ML)
         * immediately returns and sets the <code>BatchPrediction</code> status to
         * <code>PENDING</code>. After the <code>BatchPrediction</code> completes, Amazon
         * ML sets the status to <code>COMPLETED</code>. </p> <p>You can poll for status
         * updates by using the <a>GetBatchPrediction</a> operation and checking the
         * <code>Status</code> parameter of the result. After the <code>COMPLETED</code>
         * status appears, the results are available in the location specified by the
         * <code>OutputUri</code> parameter.</p>
         */
        virtual Model::CreateBatchPredictionOutcome CreateBatchPrediction(const Model::CreateBatchPredictionRequest& request) const;

        /**
         * <p>Generates predictions for a group of observations. The observations to
         * process exist in one or more data files referenced by a <code>DataSource</code>.
         * This operation creates a new <code>BatchPrediction</code>, and uses an
         * <code>MLModel</code> and the data files referenced by the
         * <code>DataSource</code> as information sources. </p>
         * <p><code>CreateBatchPrediction</code> is an asynchronous operation. In response
         * to <code>CreateBatchPrediction</code>, Amazon Machine Learning (Amazon ML)
         * immediately returns and sets the <code>BatchPrediction</code> status to
         * <code>PENDING</code>. After the <code>BatchPrediction</code> completes, Amazon
         * ML sets the status to <code>COMPLETED</code>. </p> <p>You can poll for status
         * updates by using the <a>GetBatchPrediction</a> operation and checking the
         * <code>Status</code> parameter of the result. After the <code>COMPLETED</code>
         * status appears, the results are available in the location specified by the
         * <code>OutputUri</code> parameter.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateBatchPredictionOutcomeCallable CreateBatchPredictionCallable(const Model::CreateBatchPredictionRequest& request) const;

        /**
         * <p>Generates predictions for a group of observations. The observations to
         * process exist in one or more data files referenced by a <code>DataSource</code>.
         * This operation creates a new <code>BatchPrediction</code>, and uses an
         * <code>MLModel</code> and the data files referenced by the
         * <code>DataSource</code> as information sources. </p>
         * <p><code>CreateBatchPrediction</code> is an asynchronous operation. In response
         * to <code>CreateBatchPrediction</code>, Amazon Machine Learning (Amazon ML)
         * immediately returns and sets the <code>BatchPrediction</code> status to
         * <code>PENDING</code>. After the <code>BatchPrediction</code> completes, Amazon
         * ML sets the status to <code>COMPLETED</code>. </p> <p>You can poll for status
         * updates by using the <a>GetBatchPrediction</a> operation and checking the
         * <code>Status</code> parameter of the result. After the <code>COMPLETED</code>
         * status appears, the results are available in the location specified by the
         * <code>OutputUri</code> parameter.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateBatchPredictionAsync(const Model::CreateBatchPredictionRequest& request, const CreateBatchPredictionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a <code>DataSource</code> object from an <a
         * href="http://aws.amazon.com/rds/"> Amazon Relational Database Service</a>
         * (Amazon RDS). A <code>DataSource</code> references data that can be used to
         * perform <a>CreateMLModel</a>, <a>CreateEvaluation</a>, or
         * <a>CreateBatchPrediction</a> operations.</p>
         * <p><code>CreateDataSourceFromRDS</code> is an asynchronous operation. In
         * response to <code>CreateDataSourceFromRDS</code>, Amazon Machine Learning
         * (Amazon ML) immediately returns and sets the <code>DataSource</code> status to
         * <code>PENDING</code>. After the <code>DataSource</code> is created and ready for
         * use, Amazon ML sets the <code>Status</code> parameter to <code>COMPLETED</code>.
         * <code>DataSource</code> in <code>COMPLETED</code> or <code>PENDING</code> status
         * can only be used to perform <a>CreateMLModel</a>, <a>CreateEvaluation</a>, or
         * <a>CreateBatchPrediction</a> operations. </p> <p> If Amazon ML cannot accept the
         * input source, it sets the <code>Status</code> parameter to <code>FAILED</code>
         * and includes an error message in the <code>Message</code> attribute of the
         * <a>GetDataSource</a> operation response. </p>
         */
        virtual Model::CreateDataSourceFromRDSOutcome CreateDataSourceFromRDS(const Model::CreateDataSourceFromRDSRequest& request) const;

        /**
         * <p>Creates a <code>DataSource</code> object from an <a
         * href="http://aws.amazon.com/rds/"> Amazon Relational Database Service</a>
         * (Amazon RDS). A <code>DataSource</code> references data that can be used to
         * perform <a>CreateMLModel</a>, <a>CreateEvaluation</a>, or
         * <a>CreateBatchPrediction</a> operations.</p>
         * <p><code>CreateDataSourceFromRDS</code> is an asynchronous operation. In
         * response to <code>CreateDataSourceFromRDS</code>, Amazon Machine Learning
         * (Amazon ML) immediately returns and sets the <code>DataSource</code> status to
         * <code>PENDING</code>. After the <code>DataSource</code> is created and ready for
         * use, Amazon ML sets the <code>Status</code> parameter to <code>COMPLETED</code>.
         * <code>DataSource</code> in <code>COMPLETED</code> or <code>PENDING</code> status
         * can only be used to perform <a>CreateMLModel</a>, <a>CreateEvaluation</a>, or
         * <a>CreateBatchPrediction</a> operations. </p> <p> If Amazon ML cannot accept the
         * input source, it sets the <code>Status</code> parameter to <code>FAILED</code>
         * and includes an error message in the <code>Message</code> attribute of the
         * <a>GetDataSource</a> operation response. </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDataSourceFromRDSOutcomeCallable CreateDataSourceFromRDSCallable(const Model::CreateDataSourceFromRDSRequest& request) const;

        /**
         * <p>Creates a <code>DataSource</code> object from an <a
         * href="http://aws.amazon.com/rds/"> Amazon Relational Database Service</a>
         * (Amazon RDS). A <code>DataSource</code> references data that can be used to
         * perform <a>CreateMLModel</a>, <a>CreateEvaluation</a>, or
         * <a>CreateBatchPrediction</a> operations.</p>
         * <p><code>CreateDataSourceFromRDS</code> is an asynchronous operation. In
         * response to <code>CreateDataSourceFromRDS</code>, Amazon Machine Learning
         * (Amazon ML) immediately returns and sets the <code>DataSource</code> status to
         * <code>PENDING</code>. After the <code>DataSource</code> is created and ready for
         * use, Amazon ML sets the <code>Status</code> parameter to <code>COMPLETED</code>.
         * <code>DataSource</code> in <code>COMPLETED</code> or <code>PENDING</code> status
         * can only be used to perform <a>CreateMLModel</a>, <a>CreateEvaluation</a>, or
         * <a>CreateBatchPrediction</a> operations. </p> <p> If Amazon ML cannot accept the
         * input source, it sets the <code>Status</code> parameter to <code>FAILED</code>
         * and includes an error message in the <code>Message</code> attribute of the
         * <a>GetDataSource</a> operation response. </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDataSourceFromRDSAsync(const Model::CreateDataSourceFromRDSRequest& request, const CreateDataSourceFromRDSResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a <code>DataSource</code> from <a
         * href="http://aws.amazon.com/redshift/">Amazon Redshift</a>. A
         * <code>DataSource</code> references data that can be used to perform either
         * <a>CreateMLModel</a>, <a>CreateEvaluation</a> or <a>CreateBatchPrediction</a>
         * operations.</p> <p><code>CreateDataSourceFromRedshift</code> is an asynchronous
         * operation. In response to <code>CreateDataSourceFromRedshift</code>, Amazon
         * Machine Learning (Amazon ML) immediately returns and sets the
         * <code>DataSource</code> status to <code>PENDING</code>. After the
         * <code>DataSource</code> is created and ready for use, Amazon ML sets the
         * <code>Status</code> parameter to <code>COMPLETED</code>. <code>DataSource</code>
         * in <code>COMPLETED</code> or <code>PENDING</code> status can only be used to
         * perform <a>CreateMLModel</a>, <a>CreateEvaluation</a>, or
         * <a>CreateBatchPrediction</a> operations. </p> <p> If Amazon ML cannot accept the
         * input source, it sets the <code>Status</code> parameter to <code>FAILED</code>
         * and includes an error message in the <code>Message</code> attribute of the
         * <a>GetDataSource</a> operation response. </p> <p>The observations should exist
         * in the database hosted on an Amazon Redshift cluster and should be specified by
         * a <code>SelectSqlQuery</code>. Amazon ML executes <a
         * href="http://docs.aws.amazon.com/redshift/latest/dg/t_Unloading_tables.html">
         * Unload</a> command in Amazon Redshift to transfer the result set of
         * <code>SelectSqlQuery</code> to <code>S3StagingLocation.</code> </p> <p>After the
         * <code>DataSource</code> is created, it's ready for use in evaluations and batch
         * predictions. If you plan to use the <code>DataSource</code> to train an
         * <code>MLModel</code>, the <code>DataSource</code> requires another item -- a
         * recipe. A recipe describes the observation variables that participate in
         * training an <code>MLModel</code>. A recipe describes how each input variable
         * will be used in training. Will the variable be included or excluded from
         * training? Will the variable be manipulated, for example, combined with another
         * variable or split apart into word combinations? The recipe provides answers to
         * these questions. For more information, see the Amazon Machine Learning Developer
         * Guide.</p>
         */
        virtual Model::CreateDataSourceFromRedshiftOutcome CreateDataSourceFromRedshift(const Model::CreateDataSourceFromRedshiftRequest& request) const;

        /**
         * <p>Creates a <code>DataSource</code> from <a
         * href="http://aws.amazon.com/redshift/">Amazon Redshift</a>. A
         * <code>DataSource</code> references data that can be used to perform either
         * <a>CreateMLModel</a>, <a>CreateEvaluation</a> or <a>CreateBatchPrediction</a>
         * operations.</p> <p><code>CreateDataSourceFromRedshift</code> is an asynchronous
         * operation. In response to <code>CreateDataSourceFromRedshift</code>, Amazon
         * Machine Learning (Amazon ML) immediately returns and sets the
         * <code>DataSource</code> status to <code>PENDING</code>. After the
         * <code>DataSource</code> is created and ready for use, Amazon ML sets the
         * <code>Status</code> parameter to <code>COMPLETED</code>. <code>DataSource</code>
         * in <code>COMPLETED</code> or <code>PENDING</code> status can only be used to
         * perform <a>CreateMLModel</a>, <a>CreateEvaluation</a>, or
         * <a>CreateBatchPrediction</a> operations. </p> <p> If Amazon ML cannot accept the
         * input source, it sets the <code>Status</code> parameter to <code>FAILED</code>
         * and includes an error message in the <code>Message</code> attribute of the
         * <a>GetDataSource</a> operation response. </p> <p>The observations should exist
         * in the database hosted on an Amazon Redshift cluster and should be specified by
         * a <code>SelectSqlQuery</code>. Amazon ML executes <a
         * href="http://docs.aws.amazon.com/redshift/latest/dg/t_Unloading_tables.html">
         * Unload</a> command in Amazon Redshift to transfer the result set of
         * <code>SelectSqlQuery</code> to <code>S3StagingLocation.</code> </p> <p>After the
         * <code>DataSource</code> is created, it's ready for use in evaluations and batch
         * predictions. If you plan to use the <code>DataSource</code> to train an
         * <code>MLModel</code>, the <code>DataSource</code> requires another item -- a
         * recipe. A recipe describes the observation variables that participate in
         * training an <code>MLModel</code>. A recipe describes how each input variable
         * will be used in training. Will the variable be included or excluded from
         * training? Will the variable be manipulated, for example, combined with another
         * variable or split apart into word combinations? The recipe provides answers to
         * these questions. For more information, see the Amazon Machine Learning Developer
         * Guide.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDataSourceFromRedshiftOutcomeCallable CreateDataSourceFromRedshiftCallable(const Model::CreateDataSourceFromRedshiftRequest& request) const;

        /**
         * <p>Creates a <code>DataSource</code> from <a
         * href="http://aws.amazon.com/redshift/">Amazon Redshift</a>. A
         * <code>DataSource</code> references data that can be used to perform either
         * <a>CreateMLModel</a>, <a>CreateEvaluation</a> or <a>CreateBatchPrediction</a>
         * operations.</p> <p><code>CreateDataSourceFromRedshift</code> is an asynchronous
         * operation. In response to <code>CreateDataSourceFromRedshift</code>, Amazon
         * Machine Learning (Amazon ML) immediately returns and sets the
         * <code>DataSource</code> status to <code>PENDING</code>. After the
         * <code>DataSource</code> is created and ready for use, Amazon ML sets the
         * <code>Status</code> parameter to <code>COMPLETED</code>. <code>DataSource</code>
         * in <code>COMPLETED</code> or <code>PENDING</code> status can only be used to
         * perform <a>CreateMLModel</a>, <a>CreateEvaluation</a>, or
         * <a>CreateBatchPrediction</a> operations. </p> <p> If Amazon ML cannot accept the
         * input source, it sets the <code>Status</code> parameter to <code>FAILED</code>
         * and includes an error message in the <code>Message</code> attribute of the
         * <a>GetDataSource</a> operation response. </p> <p>The observations should exist
         * in the database hosted on an Amazon Redshift cluster and should be specified by
         * a <code>SelectSqlQuery</code>. Amazon ML executes <a
         * href="http://docs.aws.amazon.com/redshift/latest/dg/t_Unloading_tables.html">
         * Unload</a> command in Amazon Redshift to transfer the result set of
         * <code>SelectSqlQuery</code> to <code>S3StagingLocation.</code> </p> <p>After the
         * <code>DataSource</code> is created, it's ready for use in evaluations and batch
         * predictions. If you plan to use the <code>DataSource</code> to train an
         * <code>MLModel</code>, the <code>DataSource</code> requires another item -- a
         * recipe. A recipe describes the observation variables that participate in
         * training an <code>MLModel</code>. A recipe describes how each input variable
         * will be used in training. Will the variable be included or excluded from
         * training? Will the variable be manipulated, for example, combined with another
         * variable or split apart into word combinations? The recipe provides answers to
         * these questions. For more information, see the Amazon Machine Learning Developer
         * Guide.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDataSourceFromRedshiftAsync(const Model::CreateDataSourceFromRedshiftRequest& request, const CreateDataSourceFromRedshiftResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a <code>DataSource</code> object. A <code>DataSource</code>
         * references data that can be used to perform <a>CreateMLModel</a>,
         * <a>CreateEvaluation</a>, or <a>CreateBatchPrediction</a> operations.</p>
         * <p><code>CreateDataSourceFromS3</code> is an asynchronous operation. In response
         * to <code>CreateDataSourceFromS3</code>, Amazon Machine Learning (Amazon ML)
         * immediately returns and sets the <code>DataSource</code> status to
         * <code>PENDING</code>. After the <code>DataSource</code> is created and ready for
         * use, Amazon ML sets the <code>Status</code> parameter to <code>COMPLETED</code>.
         * <code>DataSource</code> in <code>COMPLETED</code> or <code>PENDING</code> status
         * can only be used to perform <a>CreateMLModel</a>, <a>CreateEvaluation</a> or
         * <a>CreateBatchPrediction</a> operations. </p> <p> If Amazon ML cannot accept the
         * input source, it sets the <code>Status</code> parameter to <code>FAILED</code>
         * and includes an error message in the <code>Message</code> attribute of the
         * <a>GetDataSource</a> operation response. </p> <p>The observation data used in a
         * <code>DataSource</code> should be ready to use; that is, it should have a
         * consistent structure, and missing data values should be kept to a minimum. The
         * observation data must reside in one or more CSV files in an Amazon Simple
         * Storage Service (Amazon S3) bucket, along with a schema that describes the data
         * items by name and type. The same schema must be used for all of the data files
         * referenced by the <code>DataSource</code>. </p> <p>After the
         * <code>DataSource</code> has been created, it's ready to use in evaluations and
         * batch predictions. If you plan to use the <code>DataSource</code> to train an
         * <code>MLModel</code>, the <code>DataSource</code> requires another item: a
         * recipe. A recipe describes the observation variables that participate in
         * training an <code>MLModel</code>. A recipe describes how each input variable
         * will be used in training. Will the variable be included or excluded from
         * training? Will the variable be manipulated, for example, combined with another
         * variable, or split apart into word combinations? The recipe provides answers to
         * these questions. For more information, see the <a
         * href="http://docs.aws.amazon.com/machine-learning/latest/dg">Amazon Machine
         * Learning Developer Guide</a>.</p>
         */
        virtual Model::CreateDataSourceFromS3Outcome CreateDataSourceFromS3(const Model::CreateDataSourceFromS3Request& request) const;

        /**
         * <p>Creates a <code>DataSource</code> object. A <code>DataSource</code>
         * references data that can be used to perform <a>CreateMLModel</a>,
         * <a>CreateEvaluation</a>, or <a>CreateBatchPrediction</a> operations.</p>
         * <p><code>CreateDataSourceFromS3</code> is an asynchronous operation. In response
         * to <code>CreateDataSourceFromS3</code>, Amazon Machine Learning (Amazon ML)
         * immediately returns and sets the <code>DataSource</code> status to
         * <code>PENDING</code>. After the <code>DataSource</code> is created and ready for
         * use, Amazon ML sets the <code>Status</code> parameter to <code>COMPLETED</code>.
         * <code>DataSource</code> in <code>COMPLETED</code> or <code>PENDING</code> status
         * can only be used to perform <a>CreateMLModel</a>, <a>CreateEvaluation</a> or
         * <a>CreateBatchPrediction</a> operations. </p> <p> If Amazon ML cannot accept the
         * input source, it sets the <code>Status</code> parameter to <code>FAILED</code>
         * and includes an error message in the <code>Message</code> attribute of the
         * <a>GetDataSource</a> operation response. </p> <p>The observation data used in a
         * <code>DataSource</code> should be ready to use; that is, it should have a
         * consistent structure, and missing data values should be kept to a minimum. The
         * observation data must reside in one or more CSV files in an Amazon Simple
         * Storage Service (Amazon S3) bucket, along with a schema that describes the data
         * items by name and type. The same schema must be used for all of the data files
         * referenced by the <code>DataSource</code>. </p> <p>After the
         * <code>DataSource</code> has been created, it's ready to use in evaluations and
         * batch predictions. If you plan to use the <code>DataSource</code> to train an
         * <code>MLModel</code>, the <code>DataSource</code> requires another item: a
         * recipe. A recipe describes the observation variables that participate in
         * training an <code>MLModel</code>. A recipe describes how each input variable
         * will be used in training. Will the variable be included or excluded from
         * training? Will the variable be manipulated, for example, combined with another
         * variable, or split apart into word combinations? The recipe provides answers to
         * these questions. For more information, see the <a
         * href="http://docs.aws.amazon.com/machine-learning/latest/dg">Amazon Machine
         * Learning Developer Guide</a>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDataSourceFromS3OutcomeCallable CreateDataSourceFromS3Callable(const Model::CreateDataSourceFromS3Request& request) const;

        /**
         * <p>Creates a <code>DataSource</code> object. A <code>DataSource</code>
         * references data that can be used to perform <a>CreateMLModel</a>,
         * <a>CreateEvaluation</a>, or <a>CreateBatchPrediction</a> operations.</p>
         * <p><code>CreateDataSourceFromS3</code> is an asynchronous operation. In response
         * to <code>CreateDataSourceFromS3</code>, Amazon Machine Learning (Amazon ML)
         * immediately returns and sets the <code>DataSource</code> status to
         * <code>PENDING</code>. After the <code>DataSource</code> is created and ready for
         * use, Amazon ML sets the <code>Status</code> parameter to <code>COMPLETED</code>.
         * <code>DataSource</code> in <code>COMPLETED</code> or <code>PENDING</code> status
         * can only be used to perform <a>CreateMLModel</a>, <a>CreateEvaluation</a> or
         * <a>CreateBatchPrediction</a> operations. </p> <p> If Amazon ML cannot accept the
         * input source, it sets the <code>Status</code> parameter to <code>FAILED</code>
         * and includes an error message in the <code>Message</code> attribute of the
         * <a>GetDataSource</a> operation response. </p> <p>The observation data used in a
         * <code>DataSource</code> should be ready to use; that is, it should have a
         * consistent structure, and missing data values should be kept to a minimum. The
         * observation data must reside in one or more CSV files in an Amazon Simple
         * Storage Service (Amazon S3) bucket, along with a schema that describes the data
         * items by name and type. The same schema must be used for all of the data files
         * referenced by the <code>DataSource</code>. </p> <p>After the
         * <code>DataSource</code> has been created, it's ready to use in evaluations and
         * batch predictions. If you plan to use the <code>DataSource</code> to train an
         * <code>MLModel</code>, the <code>DataSource</code> requires another item: a
         * recipe. A recipe describes the observation variables that participate in
         * training an <code>MLModel</code>. A recipe describes how each input variable
         * will be used in training. Will the variable be included or excluded from
         * training? Will the variable be manipulated, for example, combined with another
         * variable, or split apart into word combinations? The recipe provides answers to
         * these questions. For more information, see the <a
         * href="http://docs.aws.amazon.com/machine-learning/latest/dg">Amazon Machine
         * Learning Developer Guide</a>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDataSourceFromS3Async(const Model::CreateDataSourceFromS3Request& request, const CreateDataSourceFromS3ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new <code>Evaluation</code> of an <code>MLModel</code>. An
         * <code>MLModel</code> is evaluated on a set of observations associated to a
         * <code>DataSource</code>. Like a <code>DataSource</code> for an
         * <code>MLModel</code>, the <code>DataSource</code> for an <code>Evaluation</code>
         * contains values for the Target Variable. The <code>Evaluation</code> compares
         * the predicted result for each observation to the actual outcome and provides a
         * summary so that you know how effective the <code>MLModel</code> functions on the
         * test data. Evaluation generates a relevant performance metric such as BinaryAUC,
         * RegressionRMSE or MulticlassAvgFScore based on the corresponding
         * <code>MLModelType</code>: <code>BINARY</code>, <code>REGRESSION</code> or
         * <code>MULTICLASS</code>. </p> <p><code>CreateEvaluation</code> is an
         * asynchronous operation. In response to <code>CreateEvaluation</code>, Amazon
         * Machine Learning (Amazon ML) immediately returns and sets the evaluation status
         * to <code>PENDING</code>. After the <code>Evaluation</code> is created and ready
         * for use, Amazon ML sets the status to <code>COMPLETED</code>. </p> <p>You can
         * use the <a>GetEvaluation</a> operation to check progress of the evaluation
         * during the creation operation.</p>
         */
        virtual Model::CreateEvaluationOutcome CreateEvaluation(const Model::CreateEvaluationRequest& request) const;

        /**
         * <p>Creates a new <code>Evaluation</code> of an <code>MLModel</code>. An
         * <code>MLModel</code> is evaluated on a set of observations associated to a
         * <code>DataSource</code>. Like a <code>DataSource</code> for an
         * <code>MLModel</code>, the <code>DataSource</code> for an <code>Evaluation</code>
         * contains values for the Target Variable. The <code>Evaluation</code> compares
         * the predicted result for each observation to the actual outcome and provides a
         * summary so that you know how effective the <code>MLModel</code> functions on the
         * test data. Evaluation generates a relevant performance metric such as BinaryAUC,
         * RegressionRMSE or MulticlassAvgFScore based on the corresponding
         * <code>MLModelType</code>: <code>BINARY</code>, <code>REGRESSION</code> or
         * <code>MULTICLASS</code>. </p> <p><code>CreateEvaluation</code> is an
         * asynchronous operation. In response to <code>CreateEvaluation</code>, Amazon
         * Machine Learning (Amazon ML) immediately returns and sets the evaluation status
         * to <code>PENDING</code>. After the <code>Evaluation</code> is created and ready
         * for use, Amazon ML sets the status to <code>COMPLETED</code>. </p> <p>You can
         * use the <a>GetEvaluation</a> operation to check progress of the evaluation
         * during the creation operation.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateEvaluationOutcomeCallable CreateEvaluationCallable(const Model::CreateEvaluationRequest& request) const;

        /**
         * <p>Creates a new <code>Evaluation</code> of an <code>MLModel</code>. An
         * <code>MLModel</code> is evaluated on a set of observations associated to a
         * <code>DataSource</code>. Like a <code>DataSource</code> for an
         * <code>MLModel</code>, the <code>DataSource</code> for an <code>Evaluation</code>
         * contains values for the Target Variable. The <code>Evaluation</code> compares
         * the predicted result for each observation to the actual outcome and provides a
         * summary so that you know how effective the <code>MLModel</code> functions on the
         * test data. Evaluation generates a relevant performance metric such as BinaryAUC,
         * RegressionRMSE or MulticlassAvgFScore based on the corresponding
         * <code>MLModelType</code>: <code>BINARY</code>, <code>REGRESSION</code> or
         * <code>MULTICLASS</code>. </p> <p><code>CreateEvaluation</code> is an
         * asynchronous operation. In response to <code>CreateEvaluation</code>, Amazon
         * Machine Learning (Amazon ML) immediately returns and sets the evaluation status
         * to <code>PENDING</code>. After the <code>Evaluation</code> is created and ready
         * for use, Amazon ML sets the status to <code>COMPLETED</code>. </p> <p>You can
         * use the <a>GetEvaluation</a> operation to check progress of the evaluation
         * during the creation operation.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateEvaluationAsync(const Model::CreateEvaluationRequest& request, const CreateEvaluationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new <code>MLModel</code> using the data files and the recipe as
         * information sources. </p> <p>An <code>MLModel</code> is nearly immutable. Users
         * can only update the <code>MLModelName</code> and the <code>ScoreThreshold</code>
         * in an <code>MLModel</code> without creating a new <code>MLModel</code>. </p>
         * <p><code>CreateMLModel</code> is an asynchronous operation. In response to
         * <code>CreateMLModel</code>, Amazon Machine Learning (Amazon ML) immediately
         * returns and sets the <code>MLModel</code> status to <code>PENDING</code>. After
         * the <code>MLModel</code> is created and ready for use, Amazon ML sets the status
         * to <code>COMPLETED</code>. </p> <p>You can use the <a>GetMLModel</a> operation
         * to check progress of the <code>MLModel</code> during the creation operation.</p>
         * <p> <a>CreateMLModel</a> requires a <code>DataSource</code> with computed
         * statistics, which can be created by setting <code>ComputeStatistics</code> to
         * <code>true</code> in <a>CreateDataSourceFromRDS</a>,
         * <a>CreateDataSourceFromS3</a>, or <a>CreateDataSourceFromRedshift</a>
         * operations. </p>
         */
        virtual Model::CreateMLModelOutcome CreateMLModel(const Model::CreateMLModelRequest& request) const;

        /**
         * <p>Creates a new <code>MLModel</code> using the data files and the recipe as
         * information sources. </p> <p>An <code>MLModel</code> is nearly immutable. Users
         * can only update the <code>MLModelName</code> and the <code>ScoreThreshold</code>
         * in an <code>MLModel</code> without creating a new <code>MLModel</code>. </p>
         * <p><code>CreateMLModel</code> is an asynchronous operation. In response to
         * <code>CreateMLModel</code>, Amazon Machine Learning (Amazon ML) immediately
         * returns and sets the <code>MLModel</code> status to <code>PENDING</code>. After
         * the <code>MLModel</code> is created and ready for use, Amazon ML sets the status
         * to <code>COMPLETED</code>. </p> <p>You can use the <a>GetMLModel</a> operation
         * to check progress of the <code>MLModel</code> during the creation operation.</p>
         * <p> <a>CreateMLModel</a> requires a <code>DataSource</code> with computed
         * statistics, which can be created by setting <code>ComputeStatistics</code> to
         * <code>true</code> in <a>CreateDataSourceFromRDS</a>,
         * <a>CreateDataSourceFromS3</a>, or <a>CreateDataSourceFromRedshift</a>
         * operations. </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateMLModelOutcomeCallable CreateMLModelCallable(const Model::CreateMLModelRequest& request) const;

        /**
         * <p>Creates a new <code>MLModel</code> using the data files and the recipe as
         * information sources. </p> <p>An <code>MLModel</code> is nearly immutable. Users
         * can only update the <code>MLModelName</code> and the <code>ScoreThreshold</code>
         * in an <code>MLModel</code> without creating a new <code>MLModel</code>. </p>
         * <p><code>CreateMLModel</code> is an asynchronous operation. In response to
         * <code>CreateMLModel</code>, Amazon Machine Learning (Amazon ML) immediately
         * returns and sets the <code>MLModel</code> status to <code>PENDING</code>. After
         * the <code>MLModel</code> is created and ready for use, Amazon ML sets the status
         * to <code>COMPLETED</code>. </p> <p>You can use the <a>GetMLModel</a> operation
         * to check progress of the <code>MLModel</code> during the creation operation.</p>
         * <p> <a>CreateMLModel</a> requires a <code>DataSource</code> with computed
         * statistics, which can be created by setting <code>ComputeStatistics</code> to
         * <code>true</code> in <a>CreateDataSourceFromRDS</a>,
         * <a>CreateDataSourceFromS3</a>, or <a>CreateDataSourceFromRedshift</a>
         * operations. </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMLModelAsync(const Model::CreateMLModelRequest& request, const CreateMLModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a real-time endpoint for the <code>MLModel</code>. The endpoint
         * contains the URI of the <code>MLModel</code>; that is, the location to send
         * real-time prediction requests for the specified <code>MLModel</code>.</p>
         */
        virtual Model::CreateRealtimeEndpointOutcome CreateRealtimeEndpoint(const Model::CreateRealtimeEndpointRequest& request) const;

        /**
         * <p>Creates a real-time endpoint for the <code>MLModel</code>. The endpoint
         * contains the URI of the <code>MLModel</code>; that is, the location to send
         * real-time prediction requests for the specified <code>MLModel</code>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRealtimeEndpointOutcomeCallable CreateRealtimeEndpointCallable(const Model::CreateRealtimeEndpointRequest& request) const;

        /**
         * <p>Creates a real-time endpoint for the <code>MLModel</code>. The endpoint
         * contains the URI of the <code>MLModel</code>; that is, the location to send
         * real-time prediction requests for the specified <code>MLModel</code>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRealtimeEndpointAsync(const Model::CreateRealtimeEndpointRequest& request, const CreateRealtimeEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Assigns the DELETED status to a <code>BatchPrediction</code>, rendering it
         * unusable.</p> <p>After using the <code>DeleteBatchPrediction</code> operation,
         * you can use the <a>GetBatchPrediction</a> operation to verify that the status of
         * the <code>BatchPrediction</code> changed to DELETED.</p> <p><b>Caution:</b> The
         * result of the <code>DeleteBatchPrediction</code> operation is irreversible.</p>
         */
        virtual Model::DeleteBatchPredictionOutcome DeleteBatchPrediction(const Model::DeleteBatchPredictionRequest& request) const;

        /**
         * <p>Assigns the DELETED status to a <code>BatchPrediction</code>, rendering it
         * unusable.</p> <p>After using the <code>DeleteBatchPrediction</code> operation,
         * you can use the <a>GetBatchPrediction</a> operation to verify that the status of
         * the <code>BatchPrediction</code> changed to DELETED.</p> <p><b>Caution:</b> The
         * result of the <code>DeleteBatchPrediction</code> operation is irreversible.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBatchPredictionOutcomeCallable DeleteBatchPredictionCallable(const Model::DeleteBatchPredictionRequest& request) const;

        /**
         * <p>Assigns the DELETED status to a <code>BatchPrediction</code>, rendering it
         * unusable.</p> <p>After using the <code>DeleteBatchPrediction</code> operation,
         * you can use the <a>GetBatchPrediction</a> operation to verify that the status of
         * the <code>BatchPrediction</code> changed to DELETED.</p> <p><b>Caution:</b> The
         * result of the <code>DeleteBatchPrediction</code> operation is irreversible.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBatchPredictionAsync(const Model::DeleteBatchPredictionRequest& request, const DeleteBatchPredictionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Assigns the DELETED status to a <code>DataSource</code>, rendering it
         * unusable.</p> <p>After using the <code>DeleteDataSource</code> operation, you
         * can use the <a>GetDataSource</a> operation to verify that the status of the
         * <code>DataSource</code> changed to DELETED.</p> <p><b>Caution:</b> The results
         * of the <code>DeleteDataSource</code> operation are irreversible.</p>
         */
        virtual Model::DeleteDataSourceOutcome DeleteDataSource(const Model::DeleteDataSourceRequest& request) const;

        /**
         * <p>Assigns the DELETED status to a <code>DataSource</code>, rendering it
         * unusable.</p> <p>After using the <code>DeleteDataSource</code> operation, you
         * can use the <a>GetDataSource</a> operation to verify that the status of the
         * <code>DataSource</code> changed to DELETED.</p> <p><b>Caution:</b> The results
         * of the <code>DeleteDataSource</code> operation are irreversible.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDataSourceOutcomeCallable DeleteDataSourceCallable(const Model::DeleteDataSourceRequest& request) const;

        /**
         * <p>Assigns the DELETED status to a <code>DataSource</code>, rendering it
         * unusable.</p> <p>After using the <code>DeleteDataSource</code> operation, you
         * can use the <a>GetDataSource</a> operation to verify that the status of the
         * <code>DataSource</code> changed to DELETED.</p> <p><b>Caution:</b> The results
         * of the <code>DeleteDataSource</code> operation are irreversible.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDataSourceAsync(const Model::DeleteDataSourceRequest& request, const DeleteDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Assigns the <code>DELETED</code> status to an <code>Evaluation</code>,
         * rendering it unusable.</p> <p>After invoking the <code>DeleteEvaluation</code>
         * operation, you can use the <a>GetEvaluation</a> operation to verify that the
         * status of the <code>Evaluation</code> changed to <code>DELETED</code>.</p>
         * <p><b>Caution:</b> The results of the <code>DeleteEvaluation</code> operation
         * are irreversible.</p>
         */
        virtual Model::DeleteEvaluationOutcome DeleteEvaluation(const Model::DeleteEvaluationRequest& request) const;

        /**
         * <p>Assigns the <code>DELETED</code> status to an <code>Evaluation</code>,
         * rendering it unusable.</p> <p>After invoking the <code>DeleteEvaluation</code>
         * operation, you can use the <a>GetEvaluation</a> operation to verify that the
         * status of the <code>Evaluation</code> changed to <code>DELETED</code>.</p>
         * <p><b>Caution:</b> The results of the <code>DeleteEvaluation</code> operation
         * are irreversible.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEvaluationOutcomeCallable DeleteEvaluationCallable(const Model::DeleteEvaluationRequest& request) const;

        /**
         * <p>Assigns the <code>DELETED</code> status to an <code>Evaluation</code>,
         * rendering it unusable.</p> <p>After invoking the <code>DeleteEvaluation</code>
         * operation, you can use the <a>GetEvaluation</a> operation to verify that the
         * status of the <code>Evaluation</code> changed to <code>DELETED</code>.</p>
         * <p><b>Caution:</b> The results of the <code>DeleteEvaluation</code> operation
         * are irreversible.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEvaluationAsync(const Model::DeleteEvaluationRequest& request, const DeleteEvaluationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Assigns the DELETED status to an <code>MLModel</code>, rendering it
         * unusable.</p> <p>After using the <code>DeleteMLModel</code> operation, you can
         * use the <a>GetMLModel</a> operation to verify that the status of the
         * <code>MLModel</code> changed to DELETED.</p> <p><b>Caution:</b> The result of
         * the <code>DeleteMLModel</code> operation is irreversible.</p>
         */
        virtual Model::DeleteMLModelOutcome DeleteMLModel(const Model::DeleteMLModelRequest& request) const;

        /**
         * <p>Assigns the DELETED status to an <code>MLModel</code>, rendering it
         * unusable.</p> <p>After using the <code>DeleteMLModel</code> operation, you can
         * use the <a>GetMLModel</a> operation to verify that the status of the
         * <code>MLModel</code> changed to DELETED.</p> <p><b>Caution:</b> The result of
         * the <code>DeleteMLModel</code> operation is irreversible.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMLModelOutcomeCallable DeleteMLModelCallable(const Model::DeleteMLModelRequest& request) const;

        /**
         * <p>Assigns the DELETED status to an <code>MLModel</code>, rendering it
         * unusable.</p> <p>After using the <code>DeleteMLModel</code> operation, you can
         * use the <a>GetMLModel</a> operation to verify that the status of the
         * <code>MLModel</code> changed to DELETED.</p> <p><b>Caution:</b> The result of
         * the <code>DeleteMLModel</code> operation is irreversible.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMLModelAsync(const Model::DeleteMLModelRequest& request, const DeleteMLModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a real time endpoint of an <code>MLModel</code>.</p>
         */
        virtual Model::DeleteRealtimeEndpointOutcome DeleteRealtimeEndpoint(const Model::DeleteRealtimeEndpointRequest& request) const;

        /**
         * <p>Deletes a real time endpoint of an <code>MLModel</code>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRealtimeEndpointOutcomeCallable DeleteRealtimeEndpointCallable(const Model::DeleteRealtimeEndpointRequest& request) const;

        /**
         * <p>Deletes a real time endpoint of an <code>MLModel</code>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRealtimeEndpointAsync(const Model::DeleteRealtimeEndpointRequest& request, const DeleteRealtimeEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of <code>BatchPrediction</code> operations that match the
         * search criteria in the request.</p>
         */
        virtual Model::DescribeBatchPredictionsOutcome DescribeBatchPredictions(const Model::DescribeBatchPredictionsRequest& request) const;

        /**
         * <p>Returns a list of <code>BatchPrediction</code> operations that match the
         * search criteria in the request.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeBatchPredictionsOutcomeCallable DescribeBatchPredictionsCallable(const Model::DescribeBatchPredictionsRequest& request) const;

        /**
         * <p>Returns a list of <code>BatchPrediction</code> operations that match the
         * search criteria in the request.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeBatchPredictionsAsync(const Model::DescribeBatchPredictionsRequest& request, const DescribeBatchPredictionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of <code>DataSource</code> that match the search criteria in
         * the request.</p>
         */
        virtual Model::DescribeDataSourcesOutcome DescribeDataSources(const Model::DescribeDataSourcesRequest& request) const;

        /**
         * <p>Returns a list of <code>DataSource</code> that match the search criteria in
         * the request.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDataSourcesOutcomeCallable DescribeDataSourcesCallable(const Model::DescribeDataSourcesRequest& request) const;

        /**
         * <p>Returns a list of <code>DataSource</code> that match the search criteria in
         * the request.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDataSourcesAsync(const Model::DescribeDataSourcesRequest& request, const DescribeDataSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of <code>DescribeEvaluations</code> that match the search
         * criteria in the request.</p>
         */
        virtual Model::DescribeEvaluationsOutcome DescribeEvaluations(const Model::DescribeEvaluationsRequest& request) const;

        /**
         * <p>Returns a list of <code>DescribeEvaluations</code> that match the search
         * criteria in the request.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEvaluationsOutcomeCallable DescribeEvaluationsCallable(const Model::DescribeEvaluationsRequest& request) const;

        /**
         * <p>Returns a list of <code>DescribeEvaluations</code> that match the search
         * criteria in the request.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEvaluationsAsync(const Model::DescribeEvaluationsRequest& request, const DescribeEvaluationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of <code>MLModel</code> that match the search criteria in the
         * request.</p>
         */
        virtual Model::DescribeMLModelsOutcome DescribeMLModels(const Model::DescribeMLModelsRequest& request) const;

        /**
         * <p>Returns a list of <code>MLModel</code> that match the search criteria in the
         * request.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeMLModelsOutcomeCallable DescribeMLModelsCallable(const Model::DescribeMLModelsRequest& request) const;

        /**
         * <p>Returns a list of <code>MLModel</code> that match the search criteria in the
         * request.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeMLModelsAsync(const Model::DescribeMLModelsRequest& request, const DescribeMLModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a <code>BatchPrediction</code> that includes detailed metadata,
         * status, and data file information for a <code>Batch Prediction</code>
         * request.</p>
         */
        virtual Model::GetBatchPredictionOutcome GetBatchPrediction(const Model::GetBatchPredictionRequest& request) const;

        /**
         * <p>Returns a <code>BatchPrediction</code> that includes detailed metadata,
         * status, and data file information for a <code>Batch Prediction</code>
         * request.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBatchPredictionOutcomeCallable GetBatchPredictionCallable(const Model::GetBatchPredictionRequest& request) const;

        /**
         * <p>Returns a <code>BatchPrediction</code> that includes detailed metadata,
         * status, and data file information for a <code>Batch Prediction</code>
         * request.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBatchPredictionAsync(const Model::GetBatchPredictionRequest& request, const GetBatchPredictionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a <code>DataSource</code> that includes metadata and data file
         * information, as well as the current status of the <code>DataSource</code>.</p>
         * <p><code>GetDataSource</code> provides results in normal or verbose format. The
         * verbose format adds the schema description and the list of files pointed to by
         * the DataSource to the normal format.</p>
         */
        virtual Model::GetDataSourceOutcome GetDataSource(const Model::GetDataSourceRequest& request) const;

        /**
         * <p>Returns a <code>DataSource</code> that includes metadata and data file
         * information, as well as the current status of the <code>DataSource</code>.</p>
         * <p><code>GetDataSource</code> provides results in normal or verbose format. The
         * verbose format adds the schema description and the list of files pointed to by
         * the DataSource to the normal format.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDataSourceOutcomeCallable GetDataSourceCallable(const Model::GetDataSourceRequest& request) const;

        /**
         * <p>Returns a <code>DataSource</code> that includes metadata and data file
         * information, as well as the current status of the <code>DataSource</code>.</p>
         * <p><code>GetDataSource</code> provides results in normal or verbose format. The
         * verbose format adds the schema description and the list of files pointed to by
         * the DataSource to the normal format.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDataSourceAsync(const Model::GetDataSourceRequest& request, const GetDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an <code>Evaluation</code> that includes metadata as well as the
         * current status of the <code>Evaluation</code>.</p>
         */
        virtual Model::GetEvaluationOutcome GetEvaluation(const Model::GetEvaluationRequest& request) const;

        /**
         * <p>Returns an <code>Evaluation</code> that includes metadata as well as the
         * current status of the <code>Evaluation</code>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEvaluationOutcomeCallable GetEvaluationCallable(const Model::GetEvaluationRequest& request) const;

        /**
         * <p>Returns an <code>Evaluation</code> that includes metadata as well as the
         * current status of the <code>Evaluation</code>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEvaluationAsync(const Model::GetEvaluationRequest& request, const GetEvaluationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an <code>MLModel</code> that includes detailed metadata, and data
         * source information as well as the current status of the
         * <code>MLModel</code>.</p> <p><code>GetMLModel</code> provides results in normal
         * or verbose format. </p>
         */
        virtual Model::GetMLModelOutcome GetMLModel(const Model::GetMLModelRequest& request) const;

        /**
         * <p>Returns an <code>MLModel</code> that includes detailed metadata, and data
         * source information as well as the current status of the
         * <code>MLModel</code>.</p> <p><code>GetMLModel</code> provides results in normal
         * or verbose format. </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMLModelOutcomeCallable GetMLModelCallable(const Model::GetMLModelRequest& request) const;

        /**
         * <p>Returns an <code>MLModel</code> that includes detailed metadata, and data
         * source information as well as the current status of the
         * <code>MLModel</code>.</p> <p><code>GetMLModel</code> provides results in normal
         * or verbose format. </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMLModelAsync(const Model::GetMLModelRequest& request, const GetMLModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Generates a prediction for the observation using the specified <code>ML
         * Model</code>.</p> <note><title>Note</title> <p>Not all response parameters will
         * be populated. Whether a response parameter is populated depends on the type of
         * model requested.</p></note>
         */
        virtual Model::PredictOutcome Predict(const Model::PredictRequest& request) const;

        /**
         * <p>Generates a prediction for the observation using the specified <code>ML
         * Model</code>.</p> <note><title>Note</title> <p>Not all response parameters will
         * be populated. Whether a response parameter is populated depends on the type of
         * model requested.</p></note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PredictOutcomeCallable PredictCallable(const Model::PredictRequest& request) const;

        /**
         * <p>Generates a prediction for the observation using the specified <code>ML
         * Model</code>.</p> <note><title>Note</title> <p>Not all response parameters will
         * be populated. Whether a response parameter is populated depends on the type of
         * model requested.</p></note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PredictAsync(const Model::PredictRequest& request, const PredictResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the <code>BatchPredictionName</code> of a
         * <code>BatchPrediction</code>.</p> <p>You can use the <a>GetBatchPrediction</a>
         * operation to view the contents of the updated data element.</p>
         */
        virtual Model::UpdateBatchPredictionOutcome UpdateBatchPrediction(const Model::UpdateBatchPredictionRequest& request) const;

        /**
         * <p>Updates the <code>BatchPredictionName</code> of a
         * <code>BatchPrediction</code>.</p> <p>You can use the <a>GetBatchPrediction</a>
         * operation to view the contents of the updated data element.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateBatchPredictionOutcomeCallable UpdateBatchPredictionCallable(const Model::UpdateBatchPredictionRequest& request) const;

        /**
         * <p>Updates the <code>BatchPredictionName</code> of a
         * <code>BatchPrediction</code>.</p> <p>You can use the <a>GetBatchPrediction</a>
         * operation to view the contents of the updated data element.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateBatchPredictionAsync(const Model::UpdateBatchPredictionRequest& request, const UpdateBatchPredictionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the <code>DataSourceName</code> of a <code>DataSource</code>.</p>
         * <p>You can use the <a>GetDataSource</a> operation to view the contents of the
         * updated data element.</p>
         */
        virtual Model::UpdateDataSourceOutcome UpdateDataSource(const Model::UpdateDataSourceRequest& request) const;

        /**
         * <p>Updates the <code>DataSourceName</code> of a <code>DataSource</code>.</p>
         * <p>You can use the <a>GetDataSource</a> operation to view the contents of the
         * updated data element.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDataSourceOutcomeCallable UpdateDataSourceCallable(const Model::UpdateDataSourceRequest& request) const;

        /**
         * <p>Updates the <code>DataSourceName</code> of a <code>DataSource</code>.</p>
         * <p>You can use the <a>GetDataSource</a> operation to view the contents of the
         * updated data element.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDataSourceAsync(const Model::UpdateDataSourceRequest& request, const UpdateDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the <code>EvaluationName</code> of an <code>Evaluation</code>.</p>
         * <p>You can use the <a>GetEvaluation</a> operation to view the contents of the
         * updated data element.</p>
         */
        virtual Model::UpdateEvaluationOutcome UpdateEvaluation(const Model::UpdateEvaluationRequest& request) const;

        /**
         * <p>Updates the <code>EvaluationName</code> of an <code>Evaluation</code>.</p>
         * <p>You can use the <a>GetEvaluation</a> operation to view the contents of the
         * updated data element.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateEvaluationOutcomeCallable UpdateEvaluationCallable(const Model::UpdateEvaluationRequest& request) const;

        /**
         * <p>Updates the <code>EvaluationName</code> of an <code>Evaluation</code>.</p>
         * <p>You can use the <a>GetEvaluation</a> operation to view the contents of the
         * updated data element.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateEvaluationAsync(const Model::UpdateEvaluationRequest& request, const UpdateEvaluationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the <code>MLModelName</code> and the <code>ScoreThreshold</code> of
         * an <code>MLModel</code>.</p> <p>You can use the <a>GetMLModel</a> operation to
         * view the contents of the updated data element.</p>
         */
        virtual Model::UpdateMLModelOutcome UpdateMLModel(const Model::UpdateMLModelRequest& request) const;

        /**
         * <p>Updates the <code>MLModelName</code> and the <code>ScoreThreshold</code> of
         * an <code>MLModel</code>.</p> <p>You can use the <a>GetMLModel</a> operation to
         * view the contents of the updated data element.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateMLModelOutcomeCallable UpdateMLModelCallable(const Model::UpdateMLModelRequest& request) const;

        /**
         * <p>Updates the <code>MLModelName</code> and the <code>ScoreThreshold</code> of
         * an <code>MLModel</code>.</p> <p>You can use the <a>GetMLModel</a> operation to
         * view the contents of the updated data element.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateMLModelAsync(const Model::UpdateMLModelRequest& request, const UpdateMLModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


    private:
      void init(const Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void CreateBatchPredictionAsyncHelper(const Model::CreateBatchPredictionRequest& request, const CreateBatchPredictionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDataSourceFromRDSAsyncHelper(const Model::CreateDataSourceFromRDSRequest& request, const CreateDataSourceFromRDSResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDataSourceFromRedshiftAsyncHelper(const Model::CreateDataSourceFromRedshiftRequest& request, const CreateDataSourceFromRedshiftResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDataSourceFromS3AsyncHelper(const Model::CreateDataSourceFromS3Request& request, const CreateDataSourceFromS3ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateEvaluationAsyncHelper(const Model::CreateEvaluationRequest& request, const CreateEvaluationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateMLModelAsyncHelper(const Model::CreateMLModelRequest& request, const CreateMLModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateRealtimeEndpointAsyncHelper(const Model::CreateRealtimeEndpointRequest& request, const CreateRealtimeEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBatchPredictionAsyncHelper(const Model::DeleteBatchPredictionRequest& request, const DeleteBatchPredictionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDataSourceAsyncHelper(const Model::DeleteDataSourceRequest& request, const DeleteDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteEvaluationAsyncHelper(const Model::DeleteEvaluationRequest& request, const DeleteEvaluationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteMLModelAsyncHelper(const Model::DeleteMLModelRequest& request, const DeleteMLModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRealtimeEndpointAsyncHelper(const Model::DeleteRealtimeEndpointRequest& request, const DeleteRealtimeEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeBatchPredictionsAsyncHelper(const Model::DescribeBatchPredictionsRequest& request, const DescribeBatchPredictionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDataSourcesAsyncHelper(const Model::DescribeDataSourcesRequest& request, const DescribeDataSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEvaluationsAsyncHelper(const Model::DescribeEvaluationsRequest& request, const DescribeEvaluationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeMLModelsAsyncHelper(const Model::DescribeMLModelsRequest& request, const DescribeMLModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBatchPredictionAsyncHelper(const Model::GetBatchPredictionRequest& request, const GetBatchPredictionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDataSourceAsyncHelper(const Model::GetDataSourceRequest& request, const GetDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetEvaluationAsyncHelper(const Model::GetEvaluationRequest& request, const GetEvaluationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMLModelAsyncHelper(const Model::GetMLModelRequest& request, const GetMLModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PredictAsyncHelper(const Model::PredictRequest& request, const PredictResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateBatchPredictionAsyncHelper(const Model::UpdateBatchPredictionRequest& request, const UpdateBatchPredictionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDataSourceAsyncHelper(const Model::UpdateDataSourceRequest& request, const UpdateDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateEvaluationAsyncHelper(const Model::UpdateEvaluationRequest& request, const UpdateEvaluationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateMLModelAsyncHelper(const Model::UpdateMLModelRequest& request, const UpdateMLModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      std::shared_ptr<Utils::Threading::Executor> m_executor;
  };

} // namespace MachineLearning
} // namespace Aws
