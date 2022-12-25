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
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MachineLearningClient(const Aws::MachineLearning::MachineLearningClientConfiguration& clientConfiguration = Aws::MachineLearning::MachineLearningClientConfiguration(),
                              std::shared_ptr<MachineLearningEndpointProviderBase> endpointProvider = Aws::MakeShared<MachineLearningEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MachineLearningClient(const Aws::Auth::AWSCredentials& credentials,
                              std::shared_ptr<MachineLearningEndpointProviderBase> endpointProvider = Aws::MakeShared<MachineLearningEndpointProvider>(ALLOCATION_TAG),
                              const Aws::MachineLearning::MachineLearningClientConfiguration& clientConfiguration = Aws::MachineLearning::MachineLearningClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MachineLearningClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                              std::shared_ptr<MachineLearningEndpointProviderBase> endpointProvider = Aws::MakeShared<MachineLearningEndpointProvider>(ALLOCATION_TAG),
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
        virtual Model::AddTagsOutcomeCallable AddTagsCallable(const Model::AddTagsRequest& request) const;

        /**
         * An Async wrapper for AddTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddTagsAsync(const Model::AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateBatchPredictionOutcomeCallable CreateBatchPredictionCallable(const Model::CreateBatchPredictionRequest& request) const;

        /**
         * An Async wrapper for CreateBatchPrediction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateBatchPredictionAsync(const Model::CreateBatchPredictionRequest& request, const CreateBatchPredictionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateDataSourceFromRDSOutcomeCallable CreateDataSourceFromRDSCallable(const Model::CreateDataSourceFromRDSRequest& request) const;

        /**
         * An Async wrapper for CreateDataSourceFromRDS that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDataSourceFromRDSAsync(const Model::CreateDataSourceFromRDSRequest& request, const CreateDataSourceFromRDSResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateDataSourceFromRedshiftOutcomeCallable CreateDataSourceFromRedshiftCallable(const Model::CreateDataSourceFromRedshiftRequest& request) const;

        /**
         * An Async wrapper for CreateDataSourceFromRedshift that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDataSourceFromRedshiftAsync(const Model::CreateDataSourceFromRedshiftRequest& request, const CreateDataSourceFromRedshiftResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateDataSourceFromS3OutcomeCallable CreateDataSourceFromS3Callable(const Model::CreateDataSourceFromS3Request& request) const;

        /**
         * An Async wrapper for CreateDataSourceFromS3 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDataSourceFromS3Async(const Model::CreateDataSourceFromS3Request& request, const CreateDataSourceFromS3ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateEvaluationOutcomeCallable CreateEvaluationCallable(const Model::CreateEvaluationRequest& request) const;

        /**
         * An Async wrapper for CreateEvaluation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateEvaluationAsync(const Model::CreateEvaluationRequest& request, const CreateEvaluationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateMLModelOutcomeCallable CreateMLModelCallable(const Model::CreateMLModelRequest& request) const;

        /**
         * An Async wrapper for CreateMLModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMLModelAsync(const Model::CreateMLModelRequest& request, const CreateMLModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateRealtimeEndpointOutcomeCallable CreateRealtimeEndpointCallable(const Model::CreateRealtimeEndpointRequest& request) const;

        /**
         * An Async wrapper for CreateRealtimeEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRealtimeEndpointAsync(const Model::CreateRealtimeEndpointRequest& request, const CreateRealtimeEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteBatchPredictionOutcomeCallable DeleteBatchPredictionCallable(const Model::DeleteBatchPredictionRequest& request) const;

        /**
         * An Async wrapper for DeleteBatchPrediction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBatchPredictionAsync(const Model::DeleteBatchPredictionRequest& request, const DeleteBatchPredictionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteDataSourceOutcomeCallable DeleteDataSourceCallable(const Model::DeleteDataSourceRequest& request) const;

        /**
         * An Async wrapper for DeleteDataSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDataSourceAsync(const Model::DeleteDataSourceRequest& request, const DeleteDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteEvaluationOutcomeCallable DeleteEvaluationCallable(const Model::DeleteEvaluationRequest& request) const;

        /**
         * An Async wrapper for DeleteEvaluation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEvaluationAsync(const Model::DeleteEvaluationRequest& request, const DeleteEvaluationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteMLModelOutcomeCallable DeleteMLModelCallable(const Model::DeleteMLModelRequest& request) const;

        /**
         * An Async wrapper for DeleteMLModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMLModelAsync(const Model::DeleteMLModelRequest& request, const DeleteMLModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteRealtimeEndpointOutcomeCallable DeleteRealtimeEndpointCallable(const Model::DeleteRealtimeEndpointRequest& request) const;

        /**
         * An Async wrapper for DeleteRealtimeEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRealtimeEndpointAsync(const Model::DeleteRealtimeEndpointRequest& request, const DeleteRealtimeEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteTagsOutcomeCallable DeleteTagsCallable(const Model::DeleteTagsRequest& request) const;

        /**
         * An Async wrapper for DeleteTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTagsAsync(const Model::DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeBatchPredictionsOutcomeCallable DescribeBatchPredictionsCallable(const Model::DescribeBatchPredictionsRequest& request) const;

        /**
         * An Async wrapper for DescribeBatchPredictions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeBatchPredictionsAsync(const Model::DescribeBatchPredictionsRequest& request, const DescribeBatchPredictionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeDataSourcesOutcomeCallable DescribeDataSourcesCallable(const Model::DescribeDataSourcesRequest& request) const;

        /**
         * An Async wrapper for DescribeDataSources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDataSourcesAsync(const Model::DescribeDataSourcesRequest& request, const DescribeDataSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeEvaluationsOutcomeCallable DescribeEvaluationsCallable(const Model::DescribeEvaluationsRequest& request) const;

        /**
         * An Async wrapper for DescribeEvaluations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEvaluationsAsync(const Model::DescribeEvaluationsRequest& request, const DescribeEvaluationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeMLModelsOutcomeCallable DescribeMLModelsCallable(const Model::DescribeMLModelsRequest& request) const;

        /**
         * An Async wrapper for DescribeMLModels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeMLModelsAsync(const Model::DescribeMLModelsRequest& request, const DescribeMLModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeTagsOutcomeCallable DescribeTagsCallable(const Model::DescribeTagsRequest& request) const;

        /**
         * An Async wrapper for DescribeTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTagsAsync(const Model::DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetBatchPredictionOutcomeCallable GetBatchPredictionCallable(const Model::GetBatchPredictionRequest& request) const;

        /**
         * An Async wrapper for GetBatchPrediction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBatchPredictionAsync(const Model::GetBatchPredictionRequest& request, const GetBatchPredictionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetDataSourceOutcomeCallable GetDataSourceCallable(const Model::GetDataSourceRequest& request) const;

        /**
         * An Async wrapper for GetDataSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDataSourceAsync(const Model::GetDataSourceRequest& request, const GetDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetEvaluationOutcomeCallable GetEvaluationCallable(const Model::GetEvaluationRequest& request) const;

        /**
         * An Async wrapper for GetEvaluation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEvaluationAsync(const Model::GetEvaluationRequest& request, const GetEvaluationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetMLModelOutcomeCallable GetMLModelCallable(const Model::GetMLModelRequest& request) const;

        /**
         * An Async wrapper for GetMLModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMLModelAsync(const Model::GetMLModelRequest& request, const GetMLModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::PredictOutcomeCallable PredictCallable(const Model::PredictRequest& request) const;

        /**
         * An Async wrapper for Predict that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PredictAsync(const Model::PredictRequest& request, const PredictResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateBatchPredictionOutcomeCallable UpdateBatchPredictionCallable(const Model::UpdateBatchPredictionRequest& request) const;

        /**
         * An Async wrapper for UpdateBatchPrediction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateBatchPredictionAsync(const Model::UpdateBatchPredictionRequest& request, const UpdateBatchPredictionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateDataSourceOutcomeCallable UpdateDataSourceCallable(const Model::UpdateDataSourceRequest& request) const;

        /**
         * An Async wrapper for UpdateDataSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDataSourceAsync(const Model::UpdateDataSourceRequest& request, const UpdateDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateEvaluationOutcomeCallable UpdateEvaluationCallable(const Model::UpdateEvaluationRequest& request) const;

        /**
         * An Async wrapper for UpdateEvaluation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateEvaluationAsync(const Model::UpdateEvaluationRequest& request, const UpdateEvaluationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateMLModelOutcomeCallable UpdateMLModelCallable(const Model::UpdateMLModelRequest& request) const;

        /**
         * An Async wrapper for UpdateMLModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateMLModelAsync(const Model::UpdateMLModelRequest& request, const UpdateMLModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


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
