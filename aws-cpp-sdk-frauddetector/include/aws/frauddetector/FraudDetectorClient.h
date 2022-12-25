/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/frauddetector/FraudDetectorServiceClientModel.h>

namespace Aws
{
namespace FraudDetector
{
  /**
   * <p>This is the Amazon Fraud Detector API Reference. This guide is for developers
   * who need detailed information about Amazon Fraud Detector API actions, data
   * types, and errors. For more information about Amazon Fraud Detector features,
   * see the <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon
   * Fraud Detector User Guide</a>.</p> <p>We provide the Query API as well as AWS
   * software development kits (SDK) for Amazon Fraud Detector in Java and Python
   * programming languages.</p> <p>The Amazon Fraud Detector Query API provides HTTPS
   * requests that use the HTTP verb GET or POST and a Query parameter
   * <code>Action</code>. AWS SDK provides libraries, sample code, tutorials, and
   * other resources for software developers who prefer to build applications using
   * language-specific APIs instead of submitting a request over HTTP or HTTPS. These
   * libraries provide basic functions that automatically take care of tasks such as
   * cryptographically signing your requests, retrying requests, and handling error
   * responses, so that it is easier for you to get started. For more information
   * about the AWS SDKs, see <a
   * href="https://docs.aws.amazon.com/https:/aws.amazon.com/tools/">Tools to build
   * on AWS</a>. </p>
   */
  class AWS_FRAUDDETECTOR_API FraudDetectorClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<FraudDetectorClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        FraudDetectorClient(const Aws::FraudDetector::FraudDetectorClientConfiguration& clientConfiguration = Aws::FraudDetector::FraudDetectorClientConfiguration(),
                            std::shared_ptr<FraudDetectorEndpointProviderBase> endpointProvider = Aws::MakeShared<FraudDetectorEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        FraudDetectorClient(const Aws::Auth::AWSCredentials& credentials,
                            std::shared_ptr<FraudDetectorEndpointProviderBase> endpointProvider = Aws::MakeShared<FraudDetectorEndpointProvider>(ALLOCATION_TAG),
                            const Aws::FraudDetector::FraudDetectorClientConfiguration& clientConfiguration = Aws::FraudDetector::FraudDetectorClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        FraudDetectorClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            std::shared_ptr<FraudDetectorEndpointProviderBase> endpointProvider = Aws::MakeShared<FraudDetectorEndpointProvider>(ALLOCATION_TAG),
                            const Aws::FraudDetector::FraudDetectorClientConfiguration& clientConfiguration = Aws::FraudDetector::FraudDetectorClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        FraudDetectorClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        FraudDetectorClient(const Aws::Auth::AWSCredentials& credentials,
                            const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        FraudDetectorClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~FraudDetectorClient();

        /**
         * <p>Creates a batch of variables.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/BatchCreateVariable">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchCreateVariableOutcome BatchCreateVariable(const Model::BatchCreateVariableRequest& request) const;

        /**
         * A Callable wrapper for BatchCreateVariable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchCreateVariableOutcomeCallable BatchCreateVariableCallable(const Model::BatchCreateVariableRequest& request) const;

        /**
         * An Async wrapper for BatchCreateVariable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchCreateVariableAsync(const Model::BatchCreateVariableRequest& request, const BatchCreateVariableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a batch of variables.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/BatchGetVariable">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetVariableOutcome BatchGetVariable(const Model::BatchGetVariableRequest& request) const;

        /**
         * A Callable wrapper for BatchGetVariable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetVariableOutcomeCallable BatchGetVariableCallable(const Model::BatchGetVariableRequest& request) const;

        /**
         * An Async wrapper for BatchGetVariable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetVariableAsync(const Model::BatchGetVariableRequest& request, const BatchGetVariableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Cancels an in-progress batch import job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/CancelBatchImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelBatchImportJobOutcome CancelBatchImportJob(const Model::CancelBatchImportJobRequest& request) const;

        /**
         * A Callable wrapper for CancelBatchImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelBatchImportJobOutcomeCallable CancelBatchImportJobCallable(const Model::CancelBatchImportJobRequest& request) const;

        /**
         * An Async wrapper for CancelBatchImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelBatchImportJobAsync(const Model::CancelBatchImportJobRequest& request, const CancelBatchImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels the specified batch prediction job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/CancelBatchPredictionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelBatchPredictionJobOutcome CancelBatchPredictionJob(const Model::CancelBatchPredictionJobRequest& request) const;

        /**
         * A Callable wrapper for CancelBatchPredictionJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelBatchPredictionJobOutcomeCallable CancelBatchPredictionJobCallable(const Model::CancelBatchPredictionJobRequest& request) const;

        /**
         * An Async wrapper for CancelBatchPredictionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelBatchPredictionJobAsync(const Model::CancelBatchPredictionJobRequest& request, const CancelBatchPredictionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a batch import job. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/CreateBatchImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBatchImportJobOutcome CreateBatchImportJob(const Model::CreateBatchImportJobRequest& request) const;

        /**
         * A Callable wrapper for CreateBatchImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateBatchImportJobOutcomeCallable CreateBatchImportJobCallable(const Model::CreateBatchImportJobRequest& request) const;

        /**
         * An Async wrapper for CreateBatchImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateBatchImportJobAsync(const Model::CreateBatchImportJobRequest& request, const CreateBatchImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a batch prediction job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/CreateBatchPredictionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBatchPredictionJobOutcome CreateBatchPredictionJob(const Model::CreateBatchPredictionJobRequest& request) const;

        /**
         * A Callable wrapper for CreateBatchPredictionJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateBatchPredictionJobOutcomeCallable CreateBatchPredictionJobCallable(const Model::CreateBatchPredictionJobRequest& request) const;

        /**
         * An Async wrapper for CreateBatchPredictionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateBatchPredictionJobAsync(const Model::CreateBatchPredictionJobRequest& request, const CreateBatchPredictionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a detector version. The detector version starts in a
         * <code>DRAFT</code> status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/CreateDetectorVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDetectorVersionOutcome CreateDetectorVersion(const Model::CreateDetectorVersionRequest& request) const;

        /**
         * A Callable wrapper for CreateDetectorVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDetectorVersionOutcomeCallable CreateDetectorVersionCallable(const Model::CreateDetectorVersionRequest& request) const;

        /**
         * An Async wrapper for CreateDetectorVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDetectorVersionAsync(const Model::CreateDetectorVersionRequest& request, const CreateDetectorVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a model using the specified model type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/CreateModel">AWS
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
         * <p>Creates a version of the model using the specified model type and model id.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/CreateModelVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateModelVersionOutcome CreateModelVersion(const Model::CreateModelVersionRequest& request) const;

        /**
         * A Callable wrapper for CreateModelVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateModelVersionOutcomeCallable CreateModelVersionCallable(const Model::CreateModelVersionRequest& request) const;

        /**
         * An Async wrapper for CreateModelVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateModelVersionAsync(const Model::CreateModelVersionRequest& request, const CreateModelVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a rule for use with the specified detector. </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/CreateRule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRuleOutcome CreateRule(const Model::CreateRuleRequest& request) const;

        /**
         * A Callable wrapper for CreateRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRuleOutcomeCallable CreateRuleCallable(const Model::CreateRuleRequest& request) const;

        /**
         * An Async wrapper for CreateRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRuleAsync(const Model::CreateRuleRequest& request, const CreateRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a variable.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/CreateVariable">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVariableOutcome CreateVariable(const Model::CreateVariableRequest& request) const;

        /**
         * A Callable wrapper for CreateVariable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateVariableOutcomeCallable CreateVariableCallable(const Model::CreateVariableRequest& request) const;

        /**
         * An Async wrapper for CreateVariable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateVariableAsync(const Model::CreateVariableRequest& request, const CreateVariableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified batch import job ID record. This action does not delete
         * the data that was batch imported. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/DeleteBatchImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBatchImportJobOutcome DeleteBatchImportJob(const Model::DeleteBatchImportJobRequest& request) const;

        /**
         * A Callable wrapper for DeleteBatchImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBatchImportJobOutcomeCallable DeleteBatchImportJobCallable(const Model::DeleteBatchImportJobRequest& request) const;

        /**
         * An Async wrapper for DeleteBatchImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBatchImportJobAsync(const Model::DeleteBatchImportJobRequest& request, const DeleteBatchImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a batch prediction job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/DeleteBatchPredictionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBatchPredictionJobOutcome DeleteBatchPredictionJob(const Model::DeleteBatchPredictionJobRequest& request) const;

        /**
         * A Callable wrapper for DeleteBatchPredictionJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBatchPredictionJobOutcomeCallable DeleteBatchPredictionJobCallable(const Model::DeleteBatchPredictionJobRequest& request) const;

        /**
         * An Async wrapper for DeleteBatchPredictionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBatchPredictionJobAsync(const Model::DeleteBatchPredictionJobRequest& request, const DeleteBatchPredictionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the detector. Before deleting a detector, you must first delete all
         * detector versions and rule versions associated with the detector.</p> <p>When
         * you delete a detector, Amazon Fraud Detector permanently deletes the detector
         * and the data is no longer stored in Amazon Fraud Detector.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/DeleteDetector">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDetectorOutcome DeleteDetector(const Model::DeleteDetectorRequest& request) const;

        /**
         * A Callable wrapper for DeleteDetector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDetectorOutcomeCallable DeleteDetectorCallable(const Model::DeleteDetectorRequest& request) const;

        /**
         * An Async wrapper for DeleteDetector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDetectorAsync(const Model::DeleteDetectorRequest& request, const DeleteDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the detector version. You cannot delete detector versions that are in
         * <code>ACTIVE</code> status.</p> <p>When you delete a detector version, Amazon
         * Fraud Detector permanently deletes the detector and the data is no longer stored
         * in Amazon Fraud Detector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/DeleteDetectorVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDetectorVersionOutcome DeleteDetectorVersion(const Model::DeleteDetectorVersionRequest& request) const;

        /**
         * A Callable wrapper for DeleteDetectorVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDetectorVersionOutcomeCallable DeleteDetectorVersionCallable(const Model::DeleteDetectorVersionRequest& request) const;

        /**
         * An Async wrapper for DeleteDetectorVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDetectorVersionAsync(const Model::DeleteDetectorVersionRequest& request, const DeleteDetectorVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an entity type.</p> <p>You cannot delete an entity type that is
         * included in an event type.</p> <p>When you delete an entity type, Amazon Fraud
         * Detector permanently deletes that entity type and the data is no longer stored
         * in Amazon Fraud Detector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/DeleteEntityType">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEntityTypeOutcome DeleteEntityType(const Model::DeleteEntityTypeRequest& request) const;

        /**
         * A Callable wrapper for DeleteEntityType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEntityTypeOutcomeCallable DeleteEntityTypeCallable(const Model::DeleteEntityTypeRequest& request) const;

        /**
         * An Async wrapper for DeleteEntityType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEntityTypeAsync(const Model::DeleteEntityTypeRequest& request, const DeleteEntityTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified event.</p> <p>When you delete an event, Amazon Fraud
         * Detector permanently deletes that event and the event data is no longer stored
         * in Amazon Fraud Detector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/DeleteEvent">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEventOutcome DeleteEvent(const Model::DeleteEventRequest& request) const;

        /**
         * A Callable wrapper for DeleteEvent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEventOutcomeCallable DeleteEventCallable(const Model::DeleteEventRequest& request) const;

        /**
         * An Async wrapper for DeleteEvent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEventAsync(const Model::DeleteEventRequest& request, const DeleteEventResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an event type.</p> <p>You cannot delete an event type that is used in
         * a detector or a model.</p> <p>When you delete an event type, Amazon Fraud
         * Detector permanently deletes that event type and the data is no longer stored in
         * Amazon Fraud Detector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/DeleteEventType">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEventTypeOutcome DeleteEventType(const Model::DeleteEventTypeRequest& request) const;

        /**
         * A Callable wrapper for DeleteEventType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEventTypeOutcomeCallable DeleteEventTypeCallable(const Model::DeleteEventTypeRequest& request) const;

        /**
         * An Async wrapper for DeleteEventType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEventTypeAsync(const Model::DeleteEventTypeRequest& request, const DeleteEventTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes all events of a particular event type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/DeleteEventsByEventType">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEventsByEventTypeOutcome DeleteEventsByEventType(const Model::DeleteEventsByEventTypeRequest& request) const;

        /**
         * A Callable wrapper for DeleteEventsByEventType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEventsByEventTypeOutcomeCallable DeleteEventsByEventTypeCallable(const Model::DeleteEventsByEventTypeRequest& request) const;

        /**
         * An Async wrapper for DeleteEventsByEventType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEventsByEventTypeAsync(const Model::DeleteEventsByEventTypeRequest& request, const DeleteEventsByEventTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a SageMaker model from Amazon Fraud Detector.</p> <p>You can remove
         * an Amazon SageMaker model if it is not associated with a detector version.
         * Removing a SageMaker model disconnects it from Amazon Fraud Detector, but the
         * model remains available in SageMaker.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/DeleteExternalModel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteExternalModelOutcome DeleteExternalModel(const Model::DeleteExternalModelRequest& request) const;

        /**
         * A Callable wrapper for DeleteExternalModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteExternalModelOutcomeCallable DeleteExternalModelCallable(const Model::DeleteExternalModelRequest& request) const;

        /**
         * An Async wrapper for DeleteExternalModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteExternalModelAsync(const Model::DeleteExternalModelRequest& request, const DeleteExternalModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a label.</p> <p>You cannot delete labels that are included in an
         * event type in Amazon Fraud Detector.</p> <p>You cannot delete a label assigned
         * to an event ID. You must first delete the relevant event ID.</p> <p>When you
         * delete a label, Amazon Fraud Detector permanently deletes that label and the
         * data is no longer stored in Amazon Fraud Detector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/DeleteLabel">AWS
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
         * <p>Deletes a model.</p> <p>You can delete models and model versions in Amazon
         * Fraud Detector, provided that they are not associated with a detector
         * version.</p> <p> When you delete a model, Amazon Fraud Detector permanently
         * deletes that model and the data is no longer stored in Amazon Fraud
         * Detector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/DeleteModel">AWS
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
         * <p>Deletes a model version.</p> <p>You can delete models and model versions in
         * Amazon Fraud Detector, provided that they are not associated with a detector
         * version.</p> <p> When you delete a model version, Amazon Fraud Detector
         * permanently deletes that model version and the data is no longer stored in
         * Amazon Fraud Detector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/DeleteModelVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteModelVersionOutcome DeleteModelVersion(const Model::DeleteModelVersionRequest& request) const;

        /**
         * A Callable wrapper for DeleteModelVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteModelVersionOutcomeCallable DeleteModelVersionCallable(const Model::DeleteModelVersionRequest& request) const;

        /**
         * An Async wrapper for DeleteModelVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteModelVersionAsync(const Model::DeleteModelVersionRequest& request, const DeleteModelVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an outcome.</p> <p>You cannot delete an outcome that is used in a
         * rule version.</p> <p>When you delete an outcome, Amazon Fraud Detector
         * permanently deletes that outcome and the data is no longer stored in Amazon
         * Fraud Detector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/DeleteOutcome">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteOutcomeOutcome DeleteOutcome(const Model::DeleteOutcomeRequest& request) const;

        /**
         * A Callable wrapper for DeleteOutcome that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteOutcomeOutcomeCallable DeleteOutcomeCallable(const Model::DeleteOutcomeRequest& request) const;

        /**
         * An Async wrapper for DeleteOutcome that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteOutcomeAsync(const Model::DeleteOutcomeRequest& request, const DeleteOutcomeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the rule. You cannot delete a rule if it is used by an
         * <code>ACTIVE</code> or <code>INACTIVE</code> detector version.</p> <p>When you
         * delete a rule, Amazon Fraud Detector permanently deletes that rule and the data
         * is no longer stored in Amazon Fraud Detector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/DeleteRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRuleOutcome DeleteRule(const Model::DeleteRuleRequest& request) const;

        /**
         * A Callable wrapper for DeleteRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRuleOutcomeCallable DeleteRuleCallable(const Model::DeleteRuleRequest& request) const;

        /**
         * An Async wrapper for DeleteRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRuleAsync(const Model::DeleteRuleRequest& request, const DeleteRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a variable.</p> <p>You can't delete variables that are included in an
         * event type in Amazon Fraud Detector.</p> <p>Amazon Fraud Detector automatically
         * deletes model output variables and SageMaker model output variables when you
         * delete the model. You can't delete these variables manually.</p> <p>When you
         * delete a variable, Amazon Fraud Detector permanently deletes that variable and
         * the data is no longer stored in Amazon Fraud Detector.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/DeleteVariable">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVariableOutcome DeleteVariable(const Model::DeleteVariableRequest& request) const;

        /**
         * A Callable wrapper for DeleteVariable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVariableOutcomeCallable DeleteVariableCallable(const Model::DeleteVariableRequest& request) const;

        /**
         * An Async wrapper for DeleteVariable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVariableAsync(const Model::DeleteVariableRequest& request, const DeleteVariableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets all versions for a specified detector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/DescribeDetector">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDetectorOutcome DescribeDetector(const Model::DescribeDetectorRequest& request) const;

        /**
         * A Callable wrapper for DescribeDetector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDetectorOutcomeCallable DescribeDetectorCallable(const Model::DescribeDetectorRequest& request) const;

        /**
         * An Async wrapper for DescribeDetector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDetectorAsync(const Model::DescribeDetectorRequest& request, const DescribeDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets all of the model versions for the specified model type or for the
         * specified model type and model ID. You can also get details for a single,
         * specified model version. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/DescribeModelVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeModelVersionsOutcome DescribeModelVersions(const Model::DescribeModelVersionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeModelVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeModelVersionsOutcomeCallable DescribeModelVersionsCallable(const Model::DescribeModelVersionsRequest& request) const;

        /**
         * An Async wrapper for DescribeModelVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeModelVersionsAsync(const Model::DescribeModelVersionsRequest& request, const DescribeModelVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets all batch import jobs or a specific job of the specified ID. This is a
         * paginated API. If you provide a null <code>maxResults</code>, this action
         * retrieves a maximum of 50 records per page. If you provide a
         * <code>maxResults</code>, the value must be between 1 and 50. To get the next
         * page results, provide the pagination token from the
         * <code>GetBatchImportJobsResponse</code> as part of your request. A null
         * pagination token fetches the records from the beginning.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/GetBatchImportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBatchImportJobsOutcome GetBatchImportJobs(const Model::GetBatchImportJobsRequest& request) const;

        /**
         * A Callable wrapper for GetBatchImportJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBatchImportJobsOutcomeCallable GetBatchImportJobsCallable(const Model::GetBatchImportJobsRequest& request) const;

        /**
         * An Async wrapper for GetBatchImportJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBatchImportJobsAsync(const Model::GetBatchImportJobsRequest& request, const GetBatchImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets all batch prediction jobs or a specific job if you specify a job ID.
         * This is a paginated API. If you provide a null maxResults, this action retrieves
         * a maximum of 50 records per page. If you provide a maxResults, the value must be
         * between 1 and 50. To get the next page results, provide the pagination token
         * from the GetBatchPredictionJobsResponse as part of your request. A null
         * pagination token fetches the records from the beginning.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/GetBatchPredictionJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBatchPredictionJobsOutcome GetBatchPredictionJobs(const Model::GetBatchPredictionJobsRequest& request) const;

        /**
         * A Callable wrapper for GetBatchPredictionJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBatchPredictionJobsOutcomeCallable GetBatchPredictionJobsCallable(const Model::GetBatchPredictionJobsRequest& request) const;

        /**
         * An Async wrapper for GetBatchPredictionJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBatchPredictionJobsAsync(const Model::GetBatchPredictionJobsRequest& request, const GetBatchPredictionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the status of a <code>DeleteEventsByEventType</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/GetDeleteEventsByEventTypeStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeleteEventsByEventTypeStatusOutcome GetDeleteEventsByEventTypeStatus(const Model::GetDeleteEventsByEventTypeStatusRequest& request) const;

        /**
         * A Callable wrapper for GetDeleteEventsByEventTypeStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDeleteEventsByEventTypeStatusOutcomeCallable GetDeleteEventsByEventTypeStatusCallable(const Model::GetDeleteEventsByEventTypeStatusRequest& request) const;

        /**
         * An Async wrapper for GetDeleteEventsByEventTypeStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDeleteEventsByEventTypeStatusAsync(const Model::GetDeleteEventsByEventTypeStatusRequest& request, const GetDeleteEventsByEventTypeStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a particular detector version. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/GetDetectorVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDetectorVersionOutcome GetDetectorVersion(const Model::GetDetectorVersionRequest& request) const;

        /**
         * A Callable wrapper for GetDetectorVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDetectorVersionOutcomeCallable GetDetectorVersionCallable(const Model::GetDetectorVersionRequest& request) const;

        /**
         * An Async wrapper for GetDetectorVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDetectorVersionAsync(const Model::GetDetectorVersionRequest& request, const GetDetectorVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets all detectors or a single detector if a <code>detectorId</code> is
         * specified. This is a paginated API. If you provide a null
         * <code>maxResults</code>, this action retrieves a maximum of 10 records per page.
         * If you provide a <code>maxResults</code>, the value must be between 5 and 10. To
         * get the next page results, provide the pagination token from the
         * <code>GetDetectorsResponse</code> as part of your request. A null pagination
         * token fetches the records from the beginning. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/GetDetectors">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDetectorsOutcome GetDetectors(const Model::GetDetectorsRequest& request) const;

        /**
         * A Callable wrapper for GetDetectors that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDetectorsOutcomeCallable GetDetectorsCallable(const Model::GetDetectorsRequest& request) const;

        /**
         * An Async wrapper for GetDetectors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDetectorsAsync(const Model::GetDetectorsRequest& request, const GetDetectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets all entity types or a specific entity type if a name is specified. This
         * is a paginated API. If you provide a null <code>maxResults</code>, this action
         * retrieves a maximum of 10 records per page. If you provide a
         * <code>maxResults</code>, the value must be between 5 and 10. To get the next
         * page results, provide the pagination token from the
         * <code>GetEntityTypesResponse</code> as part of your request. A null pagination
         * token fetches the records from the beginning. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/GetEntityTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEntityTypesOutcome GetEntityTypes(const Model::GetEntityTypesRequest& request) const;

        /**
         * A Callable wrapper for GetEntityTypes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEntityTypesOutcomeCallable GetEntityTypesCallable(const Model::GetEntityTypesRequest& request) const;

        /**
         * An Async wrapper for GetEntityTypes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEntityTypesAsync(const Model::GetEntityTypesRequest& request, const GetEntityTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves details of events stored with Amazon Fraud Detector. This action
         * does not retrieve prediction results.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/GetEvent">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEventOutcome GetEvent(const Model::GetEventRequest& request) const;

        /**
         * A Callable wrapper for GetEvent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEventOutcomeCallable GetEventCallable(const Model::GetEventRequest& request) const;

        /**
         * An Async wrapper for GetEvent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEventAsync(const Model::GetEventRequest& request, const GetEventResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Evaluates an event against a detector version. If a version ID is not
         * provided, the detector’s (<code>ACTIVE</code>) version is used.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/GetEventPrediction">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEventPredictionOutcome GetEventPrediction(const Model::GetEventPredictionRequest& request) const;

        /**
         * A Callable wrapper for GetEventPrediction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEventPredictionOutcomeCallable GetEventPredictionCallable(const Model::GetEventPredictionRequest& request) const;

        /**
         * An Async wrapper for GetEventPrediction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEventPredictionAsync(const Model::GetEventPredictionRequest& request, const GetEventPredictionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Gets details of the past fraud predictions for the specified event ID, event
         * type, detector ID, and detector version ID that was generated in the specified
         * time period. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/GetEventPredictionMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEventPredictionMetadataOutcome GetEventPredictionMetadata(const Model::GetEventPredictionMetadataRequest& request) const;

        /**
         * A Callable wrapper for GetEventPredictionMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEventPredictionMetadataOutcomeCallable GetEventPredictionMetadataCallable(const Model::GetEventPredictionMetadataRequest& request) const;

        /**
         * An Async wrapper for GetEventPredictionMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEventPredictionMetadataAsync(const Model::GetEventPredictionMetadataRequest& request, const GetEventPredictionMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets all event types or a specific event type if name is provided. This is a
         * paginated API. If you provide a null <code>maxResults</code>, this action
         * retrieves a maximum of 10 records per page. If you provide a
         * <code>maxResults</code>, the value must be between 5 and 10. To get the next
         * page results, provide the pagination token from the
         * <code>GetEventTypesResponse</code> as part of your request. A null pagination
         * token fetches the records from the beginning. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/GetEventTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEventTypesOutcome GetEventTypes(const Model::GetEventTypesRequest& request) const;

        /**
         * A Callable wrapper for GetEventTypes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEventTypesOutcomeCallable GetEventTypesCallable(const Model::GetEventTypesRequest& request) const;

        /**
         * An Async wrapper for GetEventTypes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEventTypesAsync(const Model::GetEventTypesRequest& request, const GetEventTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the details for one or more Amazon SageMaker models that have been
         * imported into the service. This is a paginated API. If you provide a null
         * <code>maxResults</code>, this actions retrieves a maximum of 10 records per
         * page. If you provide a <code>maxResults</code>, the value must be between 5 and
         * 10. To get the next page results, provide the pagination token from the
         * <code>GetExternalModelsResult</code> as part of your request. A null pagination
         * token fetches the records from the beginning. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/GetExternalModels">AWS
         * API Reference</a></p>
         */
        virtual Model::GetExternalModelsOutcome GetExternalModels(const Model::GetExternalModelsRequest& request) const;

        /**
         * A Callable wrapper for GetExternalModels that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetExternalModelsOutcomeCallable GetExternalModelsCallable(const Model::GetExternalModelsRequest& request) const;

        /**
         * An Async wrapper for GetExternalModels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetExternalModelsAsync(const Model::GetExternalModelsRequest& request, const GetExternalModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the encryption key if a KMS key has been specified to be used to encrypt
         * content in Amazon Fraud Detector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/GetKMSEncryptionKey">AWS
         * API Reference</a></p>
         */
        virtual Model::GetKMSEncryptionKeyOutcome GetKMSEncryptionKey() const;

        /**
         * A Callable wrapper for GetKMSEncryptionKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetKMSEncryptionKeyOutcomeCallable GetKMSEncryptionKeyCallable() const;

        /**
         * An Async wrapper for GetKMSEncryptionKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetKMSEncryptionKeyAsync(const GetKMSEncryptionKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;
        /**
         * <p>Gets all labels or a specific label if name is provided. This is a paginated
         * API. If you provide a null <code>maxResults</code>, this action retrieves a
         * maximum of 50 records per page. If you provide a <code>maxResults</code>, the
         * value must be between 10 and 50. To get the next page results, provide the
         * pagination token from the <code>GetGetLabelsResponse</code> as part of your
         * request. A null pagination token fetches the records from the beginning.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/GetLabels">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLabelsOutcome GetLabels(const Model::GetLabelsRequest& request) const;

        /**
         * A Callable wrapper for GetLabels that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLabelsOutcomeCallable GetLabelsCallable(const Model::GetLabelsRequest& request) const;

        /**
         * An Async wrapper for GetLabels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLabelsAsync(const Model::GetLabelsRequest& request, const GetLabelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the details of the specified model version.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/GetModelVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetModelVersionOutcome GetModelVersion(const Model::GetModelVersionRequest& request) const;

        /**
         * A Callable wrapper for GetModelVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetModelVersionOutcomeCallable GetModelVersionCallable(const Model::GetModelVersionRequest& request) const;

        /**
         * An Async wrapper for GetModelVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetModelVersionAsync(const Model::GetModelVersionRequest& request, const GetModelVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets one or more models. Gets all models for the Amazon Web Services account
         * if no model type and no model id provided. Gets all models for the Amazon Web
         * Services account and model type, if the model type is specified but model id is
         * not provided. Gets a specific model if (model type, model id) tuple is
         * specified. </p> <p>This is a paginated API. If you provide a null
         * <code>maxResults</code>, this action retrieves a maximum of 10 records per page.
         * If you provide a <code>maxResults</code>, the value must be between 1 and 10. To
         * get the next page results, provide the pagination token from the response as
         * part of your request. A null pagination token fetches the records from the
         * beginning.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/GetModels">AWS
         * API Reference</a></p>
         */
        virtual Model::GetModelsOutcome GetModels(const Model::GetModelsRequest& request) const;

        /**
         * A Callable wrapper for GetModels that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetModelsOutcomeCallable GetModelsCallable(const Model::GetModelsRequest& request) const;

        /**
         * An Async wrapper for GetModels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetModelsAsync(const Model::GetModelsRequest& request, const GetModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets one or more outcomes. This is a paginated API. If you provide a null
         * <code>maxResults</code>, this actions retrieves a maximum of 100 records per
         * page. If you provide a <code>maxResults</code>, the value must be between 50 and
         * 100. To get the next page results, provide the pagination token from the
         * <code>GetOutcomesResult</code> as part of your request. A null pagination token
         * fetches the records from the beginning. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/GetOutcomes">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOutcomesOutcome GetOutcomes(const Model::GetOutcomesRequest& request) const;

        /**
         * A Callable wrapper for GetOutcomes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetOutcomesOutcomeCallable GetOutcomesCallable(const Model::GetOutcomesRequest& request) const;

        /**
         * An Async wrapper for GetOutcomes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetOutcomesAsync(const Model::GetOutcomesRequest& request, const GetOutcomesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get all rules for a detector (paginated) if <code>ruleId</code> and
         * <code>ruleVersion</code> are not specified. Gets all rules for the detector and
         * the <code>ruleId</code> if present (paginated). Gets a specific rule if both the
         * <code>ruleId</code> and the <code>ruleVersion</code> are specified.</p> <p>This
         * is a paginated API. Providing null maxResults results in retrieving maximum of
         * 100 records per page. If you provide maxResults the value must be between 50 and
         * 100. To get the next page result, a provide a pagination token from
         * GetRulesResult as part of your request. Null pagination token fetches the
         * records from the beginning.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/GetRules">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRulesOutcome GetRules(const Model::GetRulesRequest& request) const;

        /**
         * A Callable wrapper for GetRules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRulesOutcomeCallable GetRulesCallable(const Model::GetRulesRequest& request) const;

        /**
         * An Async wrapper for GetRules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRulesAsync(const Model::GetRulesRequest& request, const GetRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets all of the variables or the specific variable. This is a paginated API.
         * Providing null <code>maxSizePerPage</code> results in retrieving maximum of 100
         * records per page. If you provide <code>maxSizePerPage</code> the value must be
         * between 50 and 100. To get the next page result, a provide a pagination token
         * from <code>GetVariablesResult</code> as part of your request. Null pagination
         * token fetches the records from the beginning. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/GetVariables">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVariablesOutcome GetVariables(const Model::GetVariablesRequest& request) const;

        /**
         * A Callable wrapper for GetVariables that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetVariablesOutcomeCallable GetVariablesCallable(const Model::GetVariablesRequest& request) const;

        /**
         * An Async wrapper for GetVariables that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetVariablesAsync(const Model::GetVariablesRequest& request, const GetVariablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of past predictions. The list can be filtered by detector ID,
         * detector version ID, event ID, event type, or by specifying a time period. If
         * filter is not specified, the most recent prediction is returned.</p> <p>For
         * example, the following filter lists all past predictions for <code>xyz</code>
         * event type - <code>{ "eventType":{ "value": "xyz" }” } </code> </p> <p>This is a
         * paginated API. If you provide a null <code>maxResults</code>, this action will
         * retrieve a maximum of 10 records per page. If you provide a
         * <code>maxResults</code>, the value must be between 50 and 100. To get the next
         * page results, provide the <code>nextToken</code> from the response as part of
         * your request. A null <code>nextToken</code> fetches the records from the
         * beginning. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/ListEventPredictions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEventPredictionsOutcome ListEventPredictions(const Model::ListEventPredictionsRequest& request) const;

        /**
         * A Callable wrapper for ListEventPredictions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEventPredictionsOutcomeCallable ListEventPredictionsCallable(const Model::ListEventPredictionsRequest& request) const;

        /**
         * An Async wrapper for ListEventPredictions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEventPredictionsAsync(const Model::ListEventPredictionsRequest& request, const ListEventPredictionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all tags associated with the resource. This is a paginated API. To get
         * the next page results, provide the pagination token from the response as part of
         * your request. A null pagination token fetches the records from the beginning.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/ListTagsForResource">AWS
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
         * <p>Creates or updates a detector. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/PutDetector">AWS
         * API Reference</a></p>
         */
        virtual Model::PutDetectorOutcome PutDetector(const Model::PutDetectorRequest& request) const;

        /**
         * A Callable wrapper for PutDetector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutDetectorOutcomeCallable PutDetectorCallable(const Model::PutDetectorRequest& request) const;

        /**
         * An Async wrapper for PutDetector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutDetectorAsync(const Model::PutDetectorRequest& request, const PutDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or updates an entity type. An entity represents who is performing the
         * event. As part of a fraud prediction, you pass the entity ID to indicate the
         * specific entity who performed the event. An entity type classifies the entity.
         * Example classifications include customer, merchant, or account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/PutEntityType">AWS
         * API Reference</a></p>
         */
        virtual Model::PutEntityTypeOutcome PutEntityType(const Model::PutEntityTypeRequest& request) const;

        /**
         * A Callable wrapper for PutEntityType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutEntityTypeOutcomeCallable PutEntityTypeCallable(const Model::PutEntityTypeRequest& request) const;

        /**
         * An Async wrapper for PutEntityType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutEntityTypeAsync(const Model::PutEntityTypeRequest& request, const PutEntityTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or updates an event type. An event is a business activity that is
         * evaluated for fraud risk. With Amazon Fraud Detector, you generate fraud
         * predictions for events. An event type defines the structure for an event sent to
         * Amazon Fraud Detector. This includes the variables sent as part of the event,
         * the entity performing the event (such as a customer), and the labels that
         * classify the event. Example event types include online payment transactions,
         * account registrations, and authentications.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/PutEventType">AWS
         * API Reference</a></p>
         */
        virtual Model::PutEventTypeOutcome PutEventType(const Model::PutEventTypeRequest& request) const;

        /**
         * A Callable wrapper for PutEventType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutEventTypeOutcomeCallable PutEventTypeCallable(const Model::PutEventTypeRequest& request) const;

        /**
         * An Async wrapper for PutEventType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutEventTypeAsync(const Model::PutEventTypeRequest& request, const PutEventTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or updates an Amazon SageMaker model endpoint. You can also use this
         * action to update the configuration of the model endpoint, including the IAM role
         * and/or the mapped variables. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/PutExternalModel">AWS
         * API Reference</a></p>
         */
        virtual Model::PutExternalModelOutcome PutExternalModel(const Model::PutExternalModelRequest& request) const;

        /**
         * A Callable wrapper for PutExternalModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutExternalModelOutcomeCallable PutExternalModelCallable(const Model::PutExternalModelRequest& request) const;

        /**
         * An Async wrapper for PutExternalModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutExternalModelAsync(const Model::PutExternalModelRequest& request, const PutExternalModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Specifies the KMS key to be used to encrypt content in Amazon Fraud
         * Detector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/PutKMSEncryptionKey">AWS
         * API Reference</a></p>
         */
        virtual Model::PutKMSEncryptionKeyOutcome PutKMSEncryptionKey(const Model::PutKMSEncryptionKeyRequest& request) const;

        /**
         * A Callable wrapper for PutKMSEncryptionKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutKMSEncryptionKeyOutcomeCallable PutKMSEncryptionKeyCallable(const Model::PutKMSEncryptionKeyRequest& request) const;

        /**
         * An Async wrapper for PutKMSEncryptionKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutKMSEncryptionKeyAsync(const Model::PutKMSEncryptionKeyRequest& request, const PutKMSEncryptionKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or updates label. A label classifies an event as fraudulent or
         * legitimate. Labels are associated with event types and used to train supervised
         * machine learning models in Amazon Fraud Detector. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/PutLabel">AWS
         * API Reference</a></p>
         */
        virtual Model::PutLabelOutcome PutLabel(const Model::PutLabelRequest& request) const;

        /**
         * A Callable wrapper for PutLabel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutLabelOutcomeCallable PutLabelCallable(const Model::PutLabelRequest& request) const;

        /**
         * An Async wrapper for PutLabel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutLabelAsync(const Model::PutLabelRequest& request, const PutLabelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or updates an outcome. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/PutOutcome">AWS
         * API Reference</a></p>
         */
        virtual Model::PutOutcomeOutcome PutOutcome(const Model::PutOutcomeRequest& request) const;

        /**
         * A Callable wrapper for PutOutcome that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutOutcomeOutcomeCallable PutOutcomeCallable(const Model::PutOutcomeRequest& request) const;

        /**
         * An Async wrapper for PutOutcome that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutOutcomeAsync(const Model::PutOutcomeRequest& request, const PutOutcomeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stores events in Amazon Fraud Detector without generating fraud predictions
         * for those events. For example, you can use <code>SendEvent</code> to upload a
         * historical dataset, which you can then later use to train a model.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/SendEvent">AWS
         * API Reference</a></p>
         */
        virtual Model::SendEventOutcome SendEvent(const Model::SendEventRequest& request) const;

        /**
         * A Callable wrapper for SendEvent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendEventOutcomeCallable SendEventCallable(const Model::SendEventRequest& request) const;

        /**
         * An Async wrapper for SendEvent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendEventAsync(const Model::SendEventRequest& request, const SendEventResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Assigns tags to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/TagResource">AWS
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
         * <p>Removes tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/UntagResource">AWS
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
         * <p> Updates a detector version. The detector version attributes that you can
         * update include models, external model endpoints, rules, rule execution mode, and
         * description. You can only update a <code>DRAFT</code> detector
         * version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/UpdateDetectorVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDetectorVersionOutcome UpdateDetectorVersion(const Model::UpdateDetectorVersionRequest& request) const;

        /**
         * A Callable wrapper for UpdateDetectorVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDetectorVersionOutcomeCallable UpdateDetectorVersionCallable(const Model::UpdateDetectorVersionRequest& request) const;

        /**
         * An Async wrapper for UpdateDetectorVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDetectorVersionAsync(const Model::UpdateDetectorVersionRequest& request, const UpdateDetectorVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the detector version's description. You can update the metadata for
         * any detector version (<code>DRAFT, ACTIVE,</code> or <code>INACTIVE</code>).
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/UpdateDetectorVersionMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDetectorVersionMetadataOutcome UpdateDetectorVersionMetadata(const Model::UpdateDetectorVersionMetadataRequest& request) const;

        /**
         * A Callable wrapper for UpdateDetectorVersionMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDetectorVersionMetadataOutcomeCallable UpdateDetectorVersionMetadataCallable(const Model::UpdateDetectorVersionMetadataRequest& request) const;

        /**
         * An Async wrapper for UpdateDetectorVersionMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDetectorVersionMetadataAsync(const Model::UpdateDetectorVersionMetadataRequest& request, const UpdateDetectorVersionMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the detector version’s status. You can perform the following
         * promotions or demotions using <code>UpdateDetectorVersionStatus</code>:
         * <code>DRAFT</code> to <code>ACTIVE</code>, <code>ACTIVE</code> to
         * <code>INACTIVE</code>, and <code>INACTIVE</code> to
         * <code>ACTIVE</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/UpdateDetectorVersionStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDetectorVersionStatusOutcome UpdateDetectorVersionStatus(const Model::UpdateDetectorVersionStatusRequest& request) const;

        /**
         * A Callable wrapper for UpdateDetectorVersionStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDetectorVersionStatusOutcomeCallable UpdateDetectorVersionStatusCallable(const Model::UpdateDetectorVersionStatusRequest& request) const;

        /**
         * An Async wrapper for UpdateDetectorVersionStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDetectorVersionStatusAsync(const Model::UpdateDetectorVersionStatusRequest& request, const UpdateDetectorVersionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified event with a new label.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/UpdateEventLabel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEventLabelOutcome UpdateEventLabel(const Model::UpdateEventLabelRequest& request) const;

        /**
         * A Callable wrapper for UpdateEventLabel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateEventLabelOutcomeCallable UpdateEventLabelCallable(const Model::UpdateEventLabelRequest& request) const;

        /**
         * An Async wrapper for UpdateEventLabel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateEventLabelAsync(const Model::UpdateEventLabelRequest& request, const UpdateEventLabelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates model description.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/UpdateModel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateModelOutcome UpdateModel(const Model::UpdateModelRequest& request) const;

        /**
         * A Callable wrapper for UpdateModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateModelOutcomeCallable UpdateModelCallable(const Model::UpdateModelRequest& request) const;

        /**
         * An Async wrapper for UpdateModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateModelAsync(const Model::UpdateModelRequest& request, const UpdateModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a model version. Updating a model version retrains an existing model
         * version using updated training data and produces a new minor version of the
         * model. You can update the training data set location and data access role
         * attributes using this action. This action creates and trains a new minor version
         * of the model, for example version 1.01, 1.02, 1.03.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/UpdateModelVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateModelVersionOutcome UpdateModelVersion(const Model::UpdateModelVersionRequest& request) const;

        /**
         * A Callable wrapper for UpdateModelVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateModelVersionOutcomeCallable UpdateModelVersionCallable(const Model::UpdateModelVersionRequest& request) const;

        /**
         * An Async wrapper for UpdateModelVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateModelVersionAsync(const Model::UpdateModelVersionRequest& request, const UpdateModelVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the status of a model version.</p> <p>You can perform the following
         * status updates:</p> <ol> <li> <p>Change the <code>TRAINING_IN_PROGRESS</code>
         * status to <code>TRAINING_CANCELLED</code>.</p> </li> <li> <p>Change the
         * <code>TRAINING_COMPLETE</code> status to <code>ACTIVE</code>.</p> </li> <li>
         * <p>Change <code>ACTIVE</code> to <code>INACTIVE</code>.</p> </li>
         * </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/UpdateModelVersionStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateModelVersionStatusOutcome UpdateModelVersionStatus(const Model::UpdateModelVersionStatusRequest& request) const;

        /**
         * A Callable wrapper for UpdateModelVersionStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateModelVersionStatusOutcomeCallable UpdateModelVersionStatusCallable(const Model::UpdateModelVersionStatusRequest& request) const;

        /**
         * An Async wrapper for UpdateModelVersionStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateModelVersionStatusAsync(const Model::UpdateModelVersionStatusRequest& request, const UpdateModelVersionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a rule's metadata. The description attribute can be
         * updated.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/UpdateRuleMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRuleMetadataOutcome UpdateRuleMetadata(const Model::UpdateRuleMetadataRequest& request) const;

        /**
         * A Callable wrapper for UpdateRuleMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRuleMetadataOutcomeCallable UpdateRuleMetadataCallable(const Model::UpdateRuleMetadataRequest& request) const;

        /**
         * An Async wrapper for UpdateRuleMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRuleMetadataAsync(const Model::UpdateRuleMetadataRequest& request, const UpdateRuleMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a rule version resulting in a new rule version. Updates a rule
         * version resulting in a new rule version (version 1, 2, 3 ...). </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/UpdateRuleVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRuleVersionOutcome UpdateRuleVersion(const Model::UpdateRuleVersionRequest& request) const;

        /**
         * A Callable wrapper for UpdateRuleVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRuleVersionOutcomeCallable UpdateRuleVersionCallable(const Model::UpdateRuleVersionRequest& request) const;

        /**
         * An Async wrapper for UpdateRuleVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRuleVersionAsync(const Model::UpdateRuleVersionRequest& request, const UpdateRuleVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a variable.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/UpdateVariable">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVariableOutcome UpdateVariable(const Model::UpdateVariableRequest& request) const;

        /**
         * A Callable wrapper for UpdateVariable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateVariableOutcomeCallable UpdateVariableCallable(const Model::UpdateVariableRequest& request) const;

        /**
         * An Async wrapper for UpdateVariable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateVariableAsync(const Model::UpdateVariableRequest& request, const UpdateVariableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<FraudDetectorEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<FraudDetectorClient>;
      void init(const FraudDetectorClientConfiguration& clientConfiguration);

      FraudDetectorClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<FraudDetectorEndpointProviderBase> m_endpointProvider;
  };

} // namespace FraudDetector
} // namespace Aws
