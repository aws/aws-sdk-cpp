/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/machinelearning/MachineLearningServiceClientModel.h>

namespace Aws
{
namespace MachineLearning
{
  /**
   * Definition of the public APIs exposed by Amazon Machine Learning
   */
  class AWS_MACHINELEARNING_API MachineLearningClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<MachineLearningClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef MachineLearningClientConfiguration ClientConfigurationType;
      typedef MachineLearningEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MachineLearningClient(const Aws::MachineLearning::MachineLearningClientConfiguration& clientConfiguration = Aws::MachineLearning::MachineLearningClientConfiguration(),
                              std::shared_ptr<MachineLearningEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MachineLearningClient(const Aws::Auth::AWSCredentials& credentials,
                              std::shared_ptr<MachineLearningEndpointProviderBase> endpointProvider = nullptr,
                              const Aws::MachineLearning::MachineLearningClientConfiguration& clientConfiguration = Aws::MachineLearning::MachineLearningClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MachineLearningClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                              std::shared_ptr<MachineLearningEndpointProviderBase> endpointProvider = nullptr,
                              const Aws::MachineLearning::MachineLearningClientConfiguration& clientConfiguration = Aws::MachineLearning::MachineLearningClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MachineLearningClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MachineLearningClient(const Aws::Auth::AWSCredentials& credentials,
                              const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MachineLearningClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                              const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~MachineLearningClient();

        /**
         * <p>Adds one or more tags to an object, up to a limit of 10. Each tag consists of
         * a key and an optional value. If you add a tag using a key that is already
         * associated with the ML object, <code>AddTags</code> updates the tag's
         * value.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/AddTags">AWS
         * API Reference</a></p>
         */
        virtual Model::AddTagsOutcome AddTags(const Model::AddTagsRequest& request) const;

        /**
         * A Callable wrapper for AddTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AddTagsRequestT = Model::AddTagsRequest>
        Model::AddTagsOutcomeCallable AddTagsCallable(const AddTagsRequestT& request) const
        {
            return SubmitCallable(&MachineLearningClient::AddTags, request);
        }

        /**
         * An Async wrapper for AddTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AddTagsRequestT = Model::AddTagsRequest>
        void AddTagsAsync(const AddTagsRequestT& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MachineLearningClient::AddTags, request, handler, context);
        }

        /**
         * <p>Generates predictions for a group of observations. The observations to
         * process exist in one or more data files referenced by a <code>DataSource</code>.
         * This operation creates a new <code>BatchPrediction</code>, and uses an
         * <code>MLModel</code> and the data files referenced by the
         * <code>DataSource</code> as information sources. </p> <p>
         * <code>CreateBatchPrediction</code> is an asynchronous operation. In response to
         * <code>CreateBatchPrediction</code>, Amazon Machine Learning (Amazon ML)
         * immediately returns and sets the <code>BatchPrediction</code> status to
         * <code>PENDING</code>. After the <code>BatchPrediction</code> completes, Amazon
         * ML sets the status to <code>COMPLETED</code>. </p> <p>You can poll for status
         * updates by using the <a>GetBatchPrediction</a> operation and checking the
         * <code>Status</code> parameter of the result. After the <code>COMPLETED</code>
         * status appears, the results are available in the location specified by the
         * <code>OutputUri</code> parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/CreateBatchPrediction">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBatchPredictionOutcome CreateBatchPrediction(const Model::CreateBatchPredictionRequest& request) const;

        /**
         * A Callable wrapper for CreateBatchPrediction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateBatchPredictionRequestT = Model::CreateBatchPredictionRequest>
        Model::CreateBatchPredictionOutcomeCallable CreateBatchPredictionCallable(const CreateBatchPredictionRequestT& request) const
        {
            return SubmitCallable(&MachineLearningClient::CreateBatchPrediction, request);
        }

        /**
         * An Async wrapper for CreateBatchPrediction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateBatchPredictionRequestT = Model::CreateBatchPredictionRequest>
        void CreateBatchPredictionAsync(const CreateBatchPredictionRequestT& request, const CreateBatchPredictionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MachineLearningClient::CreateBatchPrediction, request, handler, context);
        }

        /**
         * <p>Creates a <code>DataSource</code> object from an <a
         * href="http://aws.amazon.com/rds/"> Amazon Relational Database Service</a>
         * (Amazon RDS). A <code>DataSource</code> references data that can be used to
         * perform <code>CreateMLModel</code>, <code>CreateEvaluation</code>, or
         * <code>CreateBatchPrediction</code> operations.</p> <p>
         * <code>CreateDataSourceFromRDS</code> is an asynchronous operation. In response
         * to <code>CreateDataSourceFromRDS</code>, Amazon Machine Learning (Amazon ML)
         * immediately returns and sets the <code>DataSource</code> status to
         * <code>PENDING</code>. After the <code>DataSource</code> is created and ready for
         * use, Amazon ML sets the <code>Status</code> parameter to <code>COMPLETED</code>.
         * <code>DataSource</code> in the <code>COMPLETED</code> or <code>PENDING</code>
         * state can be used only to perform <code>&gt;CreateMLModel</code>&gt;,
         * <code>CreateEvaluation</code>, or <code>CreateBatchPrediction</code> operations.
         * </p> <p> If Amazon ML cannot accept the input source, it sets the
         * <code>Status</code> parameter to <code>FAILED</code> and includes an error
         * message in the <code>Message</code> attribute of the <code>GetDataSource</code>
         * operation response. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/CreateDataSourceFromRDS">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDataSourceFromRDSOutcome CreateDataSourceFromRDS(const Model::CreateDataSourceFromRDSRequest& request) const;

        /**
         * A Callable wrapper for CreateDataSourceFromRDS that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDataSourceFromRDSRequestT = Model::CreateDataSourceFromRDSRequest>
        Model::CreateDataSourceFromRDSOutcomeCallable CreateDataSourceFromRDSCallable(const CreateDataSourceFromRDSRequestT& request) const
        {
            return SubmitCallable(&MachineLearningClient::CreateDataSourceFromRDS, request);
        }

        /**
         * An Async wrapper for CreateDataSourceFromRDS that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDataSourceFromRDSRequestT = Model::CreateDataSourceFromRDSRequest>
        void CreateDataSourceFromRDSAsync(const CreateDataSourceFromRDSRequestT& request, const CreateDataSourceFromRDSResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MachineLearningClient::CreateDataSourceFromRDS, request, handler, context);
        }

        /**
         * <p>Creates a <code>DataSource</code> from a database hosted on an Amazon
         * Redshift cluster. A <code>DataSource</code> references data that can be used to
         * perform either <code>CreateMLModel</code>, <code>CreateEvaluation</code>, or
         * <code>CreateBatchPrediction</code> operations.</p> <p>
         * <code>CreateDataSourceFromRedshift</code> is an asynchronous operation. In
         * response to <code>CreateDataSourceFromRedshift</code>, Amazon Machine Learning
         * (Amazon ML) immediately returns and sets the <code>DataSource</code> status to
         * <code>PENDING</code>. After the <code>DataSource</code> is created and ready for
         * use, Amazon ML sets the <code>Status</code> parameter to <code>COMPLETED</code>.
         * <code>DataSource</code> in <code>COMPLETED</code> or <code>PENDING</code> states
         * can be used to perform only <code>CreateMLModel</code>,
         * <code>CreateEvaluation</code>, or <code>CreateBatchPrediction</code> operations.
         * </p> <p> If Amazon ML can't accept the input source, it sets the
         * <code>Status</code> parameter to <code>FAILED</code> and includes an error
         * message in the <code>Message</code> attribute of the <code>GetDataSource</code>
         * operation response. </p> <p>The observations should be contained in the database
         * hosted on an Amazon Redshift cluster and should be specified by a
         * <code>SelectSqlQuery</code> query. Amazon ML executes an <code>Unload</code>
         * command in Amazon Redshift to transfer the result set of the
         * <code>SelectSqlQuery</code> query to <code>S3StagingLocation</code>.</p>
         * <p>After the <code>DataSource</code> has been created, it's ready for use in
         * evaluations and batch predictions. If you plan to use the
         * <code>DataSource</code> to train an <code>MLModel</code>, the
         * <code>DataSource</code> also requires a recipe. A recipe describes how each
         * input variable will be used in training an <code>MLModel</code>. Will the
         * variable be included or excluded from training? Will the variable be
         * manipulated; for example, will it be combined with another variable or will it
         * be split apart into word combinations? The recipe provides answers to these
         * questions.</p> <p>You can't change an existing datasource, but you can copy and
         * modify the settings from an existing Amazon Redshift datasource to create a new
         * datasource. To do so, call <code>GetDataSource</code> for an existing datasource
         * and copy the values to a <code>CreateDataSource</code> call. Change the settings
         * that you want to change and make sure that all required fields have the
         * appropriate values.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/CreateDataSourceFromRedshift">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDataSourceFromRedshiftOutcome CreateDataSourceFromRedshift(const Model::CreateDataSourceFromRedshiftRequest& request) const;

        /**
         * A Callable wrapper for CreateDataSourceFromRedshift that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDataSourceFromRedshiftRequestT = Model::CreateDataSourceFromRedshiftRequest>
        Model::CreateDataSourceFromRedshiftOutcomeCallable CreateDataSourceFromRedshiftCallable(const CreateDataSourceFromRedshiftRequestT& request) const
        {
            return SubmitCallable(&MachineLearningClient::CreateDataSourceFromRedshift, request);
        }

        /**
         * An Async wrapper for CreateDataSourceFromRedshift that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDataSourceFromRedshiftRequestT = Model::CreateDataSourceFromRedshiftRequest>
        void CreateDataSourceFromRedshiftAsync(const CreateDataSourceFromRedshiftRequestT& request, const CreateDataSourceFromRedshiftResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MachineLearningClient::CreateDataSourceFromRedshift, request, handler, context);
        }

        /**
         * <p>Creates a <code>DataSource</code> object. A <code>DataSource</code>
         * references data that can be used to perform <code>CreateMLModel</code>,
         * <code>CreateEvaluation</code>, or <code>CreateBatchPrediction</code>
         * operations.</p> <p> <code>CreateDataSourceFromS3</code> is an asynchronous
         * operation. In response to <code>CreateDataSourceFromS3</code>, Amazon Machine
         * Learning (Amazon ML) immediately returns and sets the <code>DataSource</code>
         * status to <code>PENDING</code>. After the <code>DataSource</code> has been
         * created and is ready for use, Amazon ML sets the <code>Status</code> parameter
         * to <code>COMPLETED</code>. <code>DataSource</code> in the <code>COMPLETED</code>
         * or <code>PENDING</code> state can be used to perform only
         * <code>CreateMLModel</code>, <code>CreateEvaluation</code> or
         * <code>CreateBatchPrediction</code> operations. </p> <p> If Amazon ML can't
         * accept the input source, it sets the <code>Status</code> parameter to
         * <code>FAILED</code> and includes an error message in the <code>Message</code>
         * attribute of the <code>GetDataSource</code> operation response. </p> <p>The
         * observation data used in a <code>DataSource</code> should be ready to use; that
         * is, it should have a consistent structure, and missing data values should be
         * kept to a minimum. The observation data must reside in one or more .csv files in
         * an Amazon Simple Storage Service (Amazon S3) location, along with a schema that
         * describes the data items by name and type. The same schema must be used for all
         * of the data files referenced by the <code>DataSource</code>. </p> <p>After the
         * <code>DataSource</code> has been created, it's ready to use in evaluations and
         * batch predictions. If you plan to use the <code>DataSource</code> to train an
         * <code>MLModel</code>, the <code>DataSource</code> also needs a recipe. A recipe
         * describes how each input variable will be used in training an
         * <code>MLModel</code>. Will the variable be included or excluded from training?
         * Will the variable be manipulated; for example, will it be combined with another
         * variable or will it be split apart into word combinations? The recipe provides
         * answers to these questions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/CreateDataSourceFromS3">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDataSourceFromS3Outcome CreateDataSourceFromS3(const Model::CreateDataSourceFromS3Request& request) const;

        /**
         * A Callable wrapper for CreateDataSourceFromS3 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDataSourceFromS3RequestT = Model::CreateDataSourceFromS3Request>
        Model::CreateDataSourceFromS3OutcomeCallable CreateDataSourceFromS3Callable(const CreateDataSourceFromS3RequestT& request) const
        {
            return SubmitCallable(&MachineLearningClient::CreateDataSourceFromS3, request);
        }

        /**
         * An Async wrapper for CreateDataSourceFromS3 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDataSourceFromS3RequestT = Model::CreateDataSourceFromS3Request>
        void CreateDataSourceFromS3Async(const CreateDataSourceFromS3RequestT& request, const CreateDataSourceFromS3ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MachineLearningClient::CreateDataSourceFromS3, request, handler, context);
        }

        /**
         * <p>Creates a new <code>Evaluation</code> of an <code>MLModel</code>. An
         * <code>MLModel</code> is evaluated on a set of observations associated to a
         * <code>DataSource</code>. Like a <code>DataSource</code> for an
         * <code>MLModel</code>, the <code>DataSource</code> for an <code>Evaluation</code>
         * contains values for the <code>Target Variable</code>. The
         * <code>Evaluation</code> compares the predicted result for each observation to
         * the actual outcome and provides a summary so that you know how effective the
         * <code>MLModel</code> functions on the test data. Evaluation generates a relevant
         * performance metric, such as BinaryAUC, RegressionRMSE or MulticlassAvgFScore
         * based on the corresponding <code>MLModelType</code>: <code>BINARY</code>,
         * <code>REGRESSION</code> or <code>MULTICLASS</code>. </p> <p>
         * <code>CreateEvaluation</code> is an asynchronous operation. In response to
         * <code>CreateEvaluation</code>, Amazon Machine Learning (Amazon ML) immediately
         * returns and sets the evaluation status to <code>PENDING</code>. After the
         * <code>Evaluation</code> is created and ready for use, Amazon ML sets the status
         * to <code>COMPLETED</code>. </p> <p>You can use the <code>GetEvaluation</code>
         * operation to check progress of the evaluation during the creation
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/CreateEvaluation">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEvaluationOutcome CreateEvaluation(const Model::CreateEvaluationRequest& request) const;

        /**
         * A Callable wrapper for CreateEvaluation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateEvaluationRequestT = Model::CreateEvaluationRequest>
        Model::CreateEvaluationOutcomeCallable CreateEvaluationCallable(const CreateEvaluationRequestT& request) const
        {
            return SubmitCallable(&MachineLearningClient::CreateEvaluation, request);
        }

        /**
         * An Async wrapper for CreateEvaluation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateEvaluationRequestT = Model::CreateEvaluationRequest>
        void CreateEvaluationAsync(const CreateEvaluationRequestT& request, const CreateEvaluationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MachineLearningClient::CreateEvaluation, request, handler, context);
        }

        /**
         * <p>Creates a new <code>MLModel</code> using the <code>DataSource</code> and the
         * recipe as information sources. </p> <p>An <code>MLModel</code> is nearly
         * immutable. Users can update only the <code>MLModelName</code> and the
         * <code>ScoreThreshold</code> in an <code>MLModel</code> without creating a new
         * <code>MLModel</code>. </p> <p> <code>CreateMLModel</code> is an asynchronous
         * operation. In response to <code>CreateMLModel</code>, Amazon Machine Learning
         * (Amazon ML) immediately returns and sets the <code>MLModel</code> status to
         * <code>PENDING</code>. After the <code>MLModel</code> has been created and ready
         * is for use, Amazon ML sets the status to <code>COMPLETED</code>. </p> <p>You can
         * use the <code>GetMLModel</code> operation to check the progress of the
         * <code>MLModel</code> during the creation operation.</p> <p>
         * <code>CreateMLModel</code> requires a <code>DataSource</code> with computed
         * statistics, which can be created by setting <code>ComputeStatistics</code> to
         * <code>true</code> in <code>CreateDataSourceFromRDS</code>,
         * <code>CreateDataSourceFromS3</code>, or
         * <code>CreateDataSourceFromRedshift</code> operations. </p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/CreateMLModel">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMLModelOutcome CreateMLModel(const Model::CreateMLModelRequest& request) const;

        /**
         * A Callable wrapper for CreateMLModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateMLModelRequestT = Model::CreateMLModelRequest>
        Model::CreateMLModelOutcomeCallable CreateMLModelCallable(const CreateMLModelRequestT& request) const
        {
            return SubmitCallable(&MachineLearningClient::CreateMLModel, request);
        }

        /**
         * An Async wrapper for CreateMLModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateMLModelRequestT = Model::CreateMLModelRequest>
        void CreateMLModelAsync(const CreateMLModelRequestT& request, const CreateMLModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MachineLearningClient::CreateMLModel, request, handler, context);
        }

        /**
         * <p>Creates a real-time endpoint for the <code>MLModel</code>. The endpoint
         * contains the URI of the <code>MLModel</code>; that is, the location to send
         * real-time prediction requests for the specified
         * <code>MLModel</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/CreateRealtimeEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRealtimeEndpointOutcome CreateRealtimeEndpoint(const Model::CreateRealtimeEndpointRequest& request) const;

        /**
         * A Callable wrapper for CreateRealtimeEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateRealtimeEndpointRequestT = Model::CreateRealtimeEndpointRequest>
        Model::CreateRealtimeEndpointOutcomeCallable CreateRealtimeEndpointCallable(const CreateRealtimeEndpointRequestT& request) const
        {
            return SubmitCallable(&MachineLearningClient::CreateRealtimeEndpoint, request);
        }

        /**
         * An Async wrapper for CreateRealtimeEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateRealtimeEndpointRequestT = Model::CreateRealtimeEndpointRequest>
        void CreateRealtimeEndpointAsync(const CreateRealtimeEndpointRequestT& request, const CreateRealtimeEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MachineLearningClient::CreateRealtimeEndpoint, request, handler, context);
        }

        /**
         * <p>Assigns the DELETED status to a <code>BatchPrediction</code>, rendering it
         * unusable.</p> <p>After using the <code>DeleteBatchPrediction</code> operation,
         * you can use the <a>GetBatchPrediction</a> operation to verify that the status of
         * the <code>BatchPrediction</code> changed to DELETED.</p> <p> <b>Caution:</b> The
         * result of the <code>DeleteBatchPrediction</code> operation is
         * irreversible.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/DeleteBatchPrediction">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBatchPredictionOutcome DeleteBatchPrediction(const Model::DeleteBatchPredictionRequest& request) const;

        /**
         * A Callable wrapper for DeleteBatchPrediction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteBatchPredictionRequestT = Model::DeleteBatchPredictionRequest>
        Model::DeleteBatchPredictionOutcomeCallable DeleteBatchPredictionCallable(const DeleteBatchPredictionRequestT& request) const
        {
            return SubmitCallable(&MachineLearningClient::DeleteBatchPrediction, request);
        }

        /**
         * An Async wrapper for DeleteBatchPrediction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteBatchPredictionRequestT = Model::DeleteBatchPredictionRequest>
        void DeleteBatchPredictionAsync(const DeleteBatchPredictionRequestT& request, const DeleteBatchPredictionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MachineLearningClient::DeleteBatchPrediction, request, handler, context);
        }

        /**
         * <p>Assigns the DELETED status to a <code>DataSource</code>, rendering it
         * unusable.</p> <p>After using the <code>DeleteDataSource</code> operation, you
         * can use the <a>GetDataSource</a> operation to verify that the status of the
         * <code>DataSource</code> changed to DELETED.</p> <p> <b>Caution:</b> The results
         * of the <code>DeleteDataSource</code> operation are irreversible.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/DeleteDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDataSourceOutcome DeleteDataSource(const Model::DeleteDataSourceRequest& request) const;

        /**
         * A Callable wrapper for DeleteDataSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDataSourceRequestT = Model::DeleteDataSourceRequest>
        Model::DeleteDataSourceOutcomeCallable DeleteDataSourceCallable(const DeleteDataSourceRequestT& request) const
        {
            return SubmitCallable(&MachineLearningClient::DeleteDataSource, request);
        }

        /**
         * An Async wrapper for DeleteDataSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDataSourceRequestT = Model::DeleteDataSourceRequest>
        void DeleteDataSourceAsync(const DeleteDataSourceRequestT& request, const DeleteDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MachineLearningClient::DeleteDataSource, request, handler, context);
        }

        /**
         * <p>Assigns the <code>DELETED</code> status to an <code>Evaluation</code>,
         * rendering it unusable.</p> <p>After invoking the <code>DeleteEvaluation</code>
         * operation, you can use the <code>GetEvaluation</code> operation to verify that
         * the status of the <code>Evaluation</code> changed to <code>DELETED</code>.</p>
         * <p> <b>Caution:</b> The results of the <code>DeleteEvaluation</code> operation
         * are irreversible.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/DeleteEvaluation">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEvaluationOutcome DeleteEvaluation(const Model::DeleteEvaluationRequest& request) const;

        /**
         * A Callable wrapper for DeleteEvaluation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteEvaluationRequestT = Model::DeleteEvaluationRequest>
        Model::DeleteEvaluationOutcomeCallable DeleteEvaluationCallable(const DeleteEvaluationRequestT& request) const
        {
            return SubmitCallable(&MachineLearningClient::DeleteEvaluation, request);
        }

        /**
         * An Async wrapper for DeleteEvaluation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteEvaluationRequestT = Model::DeleteEvaluationRequest>
        void DeleteEvaluationAsync(const DeleteEvaluationRequestT& request, const DeleteEvaluationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MachineLearningClient::DeleteEvaluation, request, handler, context);
        }

        /**
         * <p>Assigns the <code>DELETED</code> status to an <code>MLModel</code>, rendering
         * it unusable.</p> <p>After using the <code>DeleteMLModel</code> operation, you
         * can use the <code>GetMLModel</code> operation to verify that the status of the
         * <code>MLModel</code> changed to DELETED.</p> <p> <b>Caution:</b> The result of
         * the <code>DeleteMLModel</code> operation is irreversible.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/DeleteMLModel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMLModelOutcome DeleteMLModel(const Model::DeleteMLModelRequest& request) const;

        /**
         * A Callable wrapper for DeleteMLModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteMLModelRequestT = Model::DeleteMLModelRequest>
        Model::DeleteMLModelOutcomeCallable DeleteMLModelCallable(const DeleteMLModelRequestT& request) const
        {
            return SubmitCallable(&MachineLearningClient::DeleteMLModel, request);
        }

        /**
         * An Async wrapper for DeleteMLModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteMLModelRequestT = Model::DeleteMLModelRequest>
        void DeleteMLModelAsync(const DeleteMLModelRequestT& request, const DeleteMLModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MachineLearningClient::DeleteMLModel, request, handler, context);
        }

        /**
         * <p>Deletes a real time endpoint of an <code>MLModel</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/DeleteRealtimeEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRealtimeEndpointOutcome DeleteRealtimeEndpoint(const Model::DeleteRealtimeEndpointRequest& request) const;

        /**
         * A Callable wrapper for DeleteRealtimeEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRealtimeEndpointRequestT = Model::DeleteRealtimeEndpointRequest>
        Model::DeleteRealtimeEndpointOutcomeCallable DeleteRealtimeEndpointCallable(const DeleteRealtimeEndpointRequestT& request) const
        {
            return SubmitCallable(&MachineLearningClient::DeleteRealtimeEndpoint, request);
        }

        /**
         * An Async wrapper for DeleteRealtimeEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRealtimeEndpointRequestT = Model::DeleteRealtimeEndpointRequest>
        void DeleteRealtimeEndpointAsync(const DeleteRealtimeEndpointRequestT& request, const DeleteRealtimeEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MachineLearningClient::DeleteRealtimeEndpoint, request, handler, context);
        }

        /**
         * <p>Deletes the specified tags associated with an ML object. After this operation
         * is complete, you can't recover deleted tags.</p> <p>If you specify a tag that
         * doesn't exist, Amazon ML ignores it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/DeleteTags">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTagsOutcome DeleteTags(const Model::DeleteTagsRequest& request) const;

        /**
         * A Callable wrapper for DeleteTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteTagsRequestT = Model::DeleteTagsRequest>
        Model::DeleteTagsOutcomeCallable DeleteTagsCallable(const DeleteTagsRequestT& request) const
        {
            return SubmitCallable(&MachineLearningClient::DeleteTags, request);
        }

        /**
         * An Async wrapper for DeleteTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTagsRequestT = Model::DeleteTagsRequest>
        void DeleteTagsAsync(const DeleteTagsRequestT& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MachineLearningClient::DeleteTags, request, handler, context);
        }

        /**
         * <p>Returns a list of <code>BatchPrediction</code> operations that match the
         * search criteria in the request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/DescribeBatchPredictions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBatchPredictionsOutcome DescribeBatchPredictions(const Model::DescribeBatchPredictionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeBatchPredictions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeBatchPredictionsRequestT = Model::DescribeBatchPredictionsRequest>
        Model::DescribeBatchPredictionsOutcomeCallable DescribeBatchPredictionsCallable(const DescribeBatchPredictionsRequestT& request) const
        {
            return SubmitCallable(&MachineLearningClient::DescribeBatchPredictions, request);
        }

        /**
         * An Async wrapper for DescribeBatchPredictions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeBatchPredictionsRequestT = Model::DescribeBatchPredictionsRequest>
        void DescribeBatchPredictionsAsync(const DescribeBatchPredictionsRequestT& request, const DescribeBatchPredictionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MachineLearningClient::DescribeBatchPredictions, request, handler, context);
        }

        /**
         * <p>Returns a list of <code>DataSource</code> that match the search criteria in
         * the request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/DescribeDataSources">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDataSourcesOutcome DescribeDataSources(const Model::DescribeDataSourcesRequest& request) const;

        /**
         * A Callable wrapper for DescribeDataSources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDataSourcesRequestT = Model::DescribeDataSourcesRequest>
        Model::DescribeDataSourcesOutcomeCallable DescribeDataSourcesCallable(const DescribeDataSourcesRequestT& request) const
        {
            return SubmitCallable(&MachineLearningClient::DescribeDataSources, request);
        }

        /**
         * An Async wrapper for DescribeDataSources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDataSourcesRequestT = Model::DescribeDataSourcesRequest>
        void DescribeDataSourcesAsync(const DescribeDataSourcesRequestT& request, const DescribeDataSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MachineLearningClient::DescribeDataSources, request, handler, context);
        }

        /**
         * <p>Returns a list of <code>DescribeEvaluations</code> that match the search
         * criteria in the request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/DescribeEvaluations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEvaluationsOutcome DescribeEvaluations(const Model::DescribeEvaluationsRequest& request) const;

        /**
         * A Callable wrapper for DescribeEvaluations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeEvaluationsRequestT = Model::DescribeEvaluationsRequest>
        Model::DescribeEvaluationsOutcomeCallable DescribeEvaluationsCallable(const DescribeEvaluationsRequestT& request) const
        {
            return SubmitCallable(&MachineLearningClient::DescribeEvaluations, request);
        }

        /**
         * An Async wrapper for DescribeEvaluations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeEvaluationsRequestT = Model::DescribeEvaluationsRequest>
        void DescribeEvaluationsAsync(const DescribeEvaluationsRequestT& request, const DescribeEvaluationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MachineLearningClient::DescribeEvaluations, request, handler, context);
        }

        /**
         * <p>Returns a list of <code>MLModel</code> that match the search criteria in the
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/DescribeMLModels">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMLModelsOutcome DescribeMLModels(const Model::DescribeMLModelsRequest& request) const;

        /**
         * A Callable wrapper for DescribeMLModels that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeMLModelsRequestT = Model::DescribeMLModelsRequest>
        Model::DescribeMLModelsOutcomeCallable DescribeMLModelsCallable(const DescribeMLModelsRequestT& request) const
        {
            return SubmitCallable(&MachineLearningClient::DescribeMLModels, request);
        }

        /**
         * An Async wrapper for DescribeMLModels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeMLModelsRequestT = Model::DescribeMLModelsRequest>
        void DescribeMLModelsAsync(const DescribeMLModelsRequestT& request, const DescribeMLModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MachineLearningClient::DescribeMLModels, request, handler, context);
        }

        /**
         * <p>Describes one or more of the tags for your Amazon ML object.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/DescribeTags">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTagsOutcome DescribeTags(const Model::DescribeTagsRequest& request) const;

        /**
         * A Callable wrapper for DescribeTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeTagsRequestT = Model::DescribeTagsRequest>
        Model::DescribeTagsOutcomeCallable DescribeTagsCallable(const DescribeTagsRequestT& request) const
        {
            return SubmitCallable(&MachineLearningClient::DescribeTags, request);
        }

        /**
         * An Async wrapper for DescribeTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeTagsRequestT = Model::DescribeTagsRequest>
        void DescribeTagsAsync(const DescribeTagsRequestT& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MachineLearningClient::DescribeTags, request, handler, context);
        }

        /**
         * <p>Returns a <code>BatchPrediction</code> that includes detailed metadata,
         * status, and data file information for a <code>Batch Prediction</code>
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/GetBatchPrediction">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBatchPredictionOutcome GetBatchPrediction(const Model::GetBatchPredictionRequest& request) const;

        /**
         * A Callable wrapper for GetBatchPrediction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetBatchPredictionRequestT = Model::GetBatchPredictionRequest>
        Model::GetBatchPredictionOutcomeCallable GetBatchPredictionCallable(const GetBatchPredictionRequestT& request) const
        {
            return SubmitCallable(&MachineLearningClient::GetBatchPrediction, request);
        }

        /**
         * An Async wrapper for GetBatchPrediction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetBatchPredictionRequestT = Model::GetBatchPredictionRequest>
        void GetBatchPredictionAsync(const GetBatchPredictionRequestT& request, const GetBatchPredictionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MachineLearningClient::GetBatchPrediction, request, handler, context);
        }

        /**
         * <p>Returns a <code>DataSource</code> that includes metadata and data file
         * information, as well as the current status of the <code>DataSource</code>.</p>
         * <p> <code>GetDataSource</code> provides results in normal or verbose format. The
         * verbose format adds the schema description and the list of files pointed to by
         * the DataSource to the normal format.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/GetDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDataSourceOutcome GetDataSource(const Model::GetDataSourceRequest& request) const;

        /**
         * A Callable wrapper for GetDataSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDataSourceRequestT = Model::GetDataSourceRequest>
        Model::GetDataSourceOutcomeCallable GetDataSourceCallable(const GetDataSourceRequestT& request) const
        {
            return SubmitCallable(&MachineLearningClient::GetDataSource, request);
        }

        /**
         * An Async wrapper for GetDataSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDataSourceRequestT = Model::GetDataSourceRequest>
        void GetDataSourceAsync(const GetDataSourceRequestT& request, const GetDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MachineLearningClient::GetDataSource, request, handler, context);
        }

        /**
         * <p>Returns an <code>Evaluation</code> that includes metadata as well as the
         * current status of the <code>Evaluation</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/GetEvaluation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEvaluationOutcome GetEvaluation(const Model::GetEvaluationRequest& request) const;

        /**
         * A Callable wrapper for GetEvaluation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetEvaluationRequestT = Model::GetEvaluationRequest>
        Model::GetEvaluationOutcomeCallable GetEvaluationCallable(const GetEvaluationRequestT& request) const
        {
            return SubmitCallable(&MachineLearningClient::GetEvaluation, request);
        }

        /**
         * An Async wrapper for GetEvaluation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEvaluationRequestT = Model::GetEvaluationRequest>
        void GetEvaluationAsync(const GetEvaluationRequestT& request, const GetEvaluationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MachineLearningClient::GetEvaluation, request, handler, context);
        }

        /**
         * <p>Returns an <code>MLModel</code> that includes detailed metadata, data source
         * information, and the current status of the <code>MLModel</code>.</p> <p>
         * <code>GetMLModel</code> provides results in normal or verbose format.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/GetMLModel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMLModelOutcome GetMLModel(const Model::GetMLModelRequest& request) const;

        /**
         * A Callable wrapper for GetMLModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMLModelRequestT = Model::GetMLModelRequest>
        Model::GetMLModelOutcomeCallable GetMLModelCallable(const GetMLModelRequestT& request) const
        {
            return SubmitCallable(&MachineLearningClient::GetMLModel, request);
        }

        /**
         * An Async wrapper for GetMLModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMLModelRequestT = Model::GetMLModelRequest>
        void GetMLModelAsync(const GetMLModelRequestT& request, const GetMLModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MachineLearningClient::GetMLModel, request, handler, context);
        }

        /**
         * <p>Generates a prediction for the observation using the specified <code>ML
         * Model</code>.</p> <p> <b>Note:</b> Not all response parameters will be
         * populated. Whether a response parameter is populated depends on the type of
         * model requested.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/Predict">AWS
         * API Reference</a></p>
         */
        virtual Model::PredictOutcome Predict(const Model::PredictRequest& request) const;

        /**
         * A Callable wrapper for Predict that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PredictRequestT = Model::PredictRequest>
        Model::PredictOutcomeCallable PredictCallable(const PredictRequestT& request) const
        {
            return SubmitCallable(&MachineLearningClient::Predict, request);
        }

        /**
         * An Async wrapper for Predict that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PredictRequestT = Model::PredictRequest>
        void PredictAsync(const PredictRequestT& request, const PredictResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MachineLearningClient::Predict, request, handler, context);
        }

        /**
         * <p>Updates the <code>BatchPredictionName</code> of a
         * <code>BatchPrediction</code>.</p> <p>You can use the
         * <code>GetBatchPrediction</code> operation to view the contents of the updated
         * data element.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/UpdateBatchPrediction">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBatchPredictionOutcome UpdateBatchPrediction(const Model::UpdateBatchPredictionRequest& request) const;

        /**
         * A Callable wrapper for UpdateBatchPrediction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateBatchPredictionRequestT = Model::UpdateBatchPredictionRequest>
        Model::UpdateBatchPredictionOutcomeCallable UpdateBatchPredictionCallable(const UpdateBatchPredictionRequestT& request) const
        {
            return SubmitCallable(&MachineLearningClient::UpdateBatchPrediction, request);
        }

        /**
         * An Async wrapper for UpdateBatchPrediction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateBatchPredictionRequestT = Model::UpdateBatchPredictionRequest>
        void UpdateBatchPredictionAsync(const UpdateBatchPredictionRequestT& request, const UpdateBatchPredictionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MachineLearningClient::UpdateBatchPrediction, request, handler, context);
        }

        /**
         * <p>Updates the <code>DataSourceName</code> of a <code>DataSource</code>.</p>
         * <p>You can use the <code>GetDataSource</code> operation to view the contents of
         * the updated data element.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/UpdateDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDataSourceOutcome UpdateDataSource(const Model::UpdateDataSourceRequest& request) const;

        /**
         * A Callable wrapper for UpdateDataSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDataSourceRequestT = Model::UpdateDataSourceRequest>
        Model::UpdateDataSourceOutcomeCallable UpdateDataSourceCallable(const UpdateDataSourceRequestT& request) const
        {
            return SubmitCallable(&MachineLearningClient::UpdateDataSource, request);
        }

        /**
         * An Async wrapper for UpdateDataSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDataSourceRequestT = Model::UpdateDataSourceRequest>
        void UpdateDataSourceAsync(const UpdateDataSourceRequestT& request, const UpdateDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MachineLearningClient::UpdateDataSource, request, handler, context);
        }

        /**
         * <p>Updates the <code>EvaluationName</code> of an <code>Evaluation</code>.</p>
         * <p>You can use the <code>GetEvaluation</code> operation to view the contents of
         * the updated data element.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/UpdateEvaluation">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEvaluationOutcome UpdateEvaluation(const Model::UpdateEvaluationRequest& request) const;

        /**
         * A Callable wrapper for UpdateEvaluation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateEvaluationRequestT = Model::UpdateEvaluationRequest>
        Model::UpdateEvaluationOutcomeCallable UpdateEvaluationCallable(const UpdateEvaluationRequestT& request) const
        {
            return SubmitCallable(&MachineLearningClient::UpdateEvaluation, request);
        }

        /**
         * An Async wrapper for UpdateEvaluation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateEvaluationRequestT = Model::UpdateEvaluationRequest>
        void UpdateEvaluationAsync(const UpdateEvaluationRequestT& request, const UpdateEvaluationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MachineLearningClient::UpdateEvaluation, request, handler, context);
        }

        /**
         * <p>Updates the <code>MLModelName</code> and the <code>ScoreThreshold</code> of
         * an <code>MLModel</code>.</p> <p>You can use the <code>GetMLModel</code>
         * operation to view the contents of the updated data element.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/UpdateMLModel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMLModelOutcome UpdateMLModel(const Model::UpdateMLModelRequest& request) const;

        /**
         * A Callable wrapper for UpdateMLModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateMLModelRequestT = Model::UpdateMLModelRequest>
        Model::UpdateMLModelOutcomeCallable UpdateMLModelCallable(const UpdateMLModelRequestT& request) const
        {
            return SubmitCallable(&MachineLearningClient::UpdateMLModel, request);
        }

        /**
         * An Async wrapper for UpdateMLModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateMLModelRequestT = Model::UpdateMLModelRequest>
        void UpdateMLModelAsync(const UpdateMLModelRequestT& request, const UpdateMLModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MachineLearningClient::UpdateMLModel, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<MachineLearningEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<MachineLearningClient>;
      void init(const MachineLearningClientConfiguration& clientConfiguration);

      MachineLearningClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<MachineLearningEndpointProviderBase> m_endpointProvider;
  };

} // namespace MachineLearning
} // namespace Aws
