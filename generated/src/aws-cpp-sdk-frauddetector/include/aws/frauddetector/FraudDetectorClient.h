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
#include <aws/frauddetector/model/GetKMSEncryptionKeyRequest.h>

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
   * about the AWS SDKs, go to <a
   * href="https://aws.amazon.com/developer/tools/">Tools to build on AWS</a> page,
   * scroll down to the <b>SDK</b> section, and choose plus (+) sign to expand the
   * section. </p>
   */
  class AWS_FRAUDDETECTOR_API FraudDetectorClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<FraudDetectorClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef FraudDetectorClientConfiguration ClientConfigurationType;
      typedef FraudDetectorEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        FraudDetectorClient(const Aws::FraudDetector::FraudDetectorClientConfiguration& clientConfiguration = Aws::FraudDetector::FraudDetectorClientConfiguration(),
                            std::shared_ptr<FraudDetectorEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        FraudDetectorClient(const Aws::Auth::AWSCredentials& credentials,
                            std::shared_ptr<FraudDetectorEndpointProviderBase> endpointProvider = nullptr,
                            const Aws::FraudDetector::FraudDetectorClientConfiguration& clientConfiguration = Aws::FraudDetector::FraudDetectorClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        FraudDetectorClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            std::shared_ptr<FraudDetectorEndpointProviderBase> endpointProvider = nullptr,
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
        template<typename BatchCreateVariableRequestT = Model::BatchCreateVariableRequest>
        Model::BatchCreateVariableOutcomeCallable BatchCreateVariableCallable(const BatchCreateVariableRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::BatchCreateVariable, request);
        }

        /**
         * An Async wrapper for BatchCreateVariable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchCreateVariableRequestT = Model::BatchCreateVariableRequest>
        void BatchCreateVariableAsync(const BatchCreateVariableRequestT& request, const BatchCreateVariableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::BatchCreateVariable, request, handler, context);
        }

        /**
         * <p>Gets a batch of variables.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/BatchGetVariable">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetVariableOutcome BatchGetVariable(const Model::BatchGetVariableRequest& request) const;

        /**
         * A Callable wrapper for BatchGetVariable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchGetVariableRequestT = Model::BatchGetVariableRequest>
        Model::BatchGetVariableOutcomeCallable BatchGetVariableCallable(const BatchGetVariableRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::BatchGetVariable, request);
        }

        /**
         * An Async wrapper for BatchGetVariable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetVariableRequestT = Model::BatchGetVariableRequest>
        void BatchGetVariableAsync(const BatchGetVariableRequestT& request, const BatchGetVariableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::BatchGetVariable, request, handler, context);
        }

        /**
         * <p> Cancels an in-progress batch import job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/CancelBatchImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelBatchImportJobOutcome CancelBatchImportJob(const Model::CancelBatchImportJobRequest& request) const;

        /**
         * A Callable wrapper for CancelBatchImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelBatchImportJobRequestT = Model::CancelBatchImportJobRequest>
        Model::CancelBatchImportJobOutcomeCallable CancelBatchImportJobCallable(const CancelBatchImportJobRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::CancelBatchImportJob, request);
        }

        /**
         * An Async wrapper for CancelBatchImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelBatchImportJobRequestT = Model::CancelBatchImportJobRequest>
        void CancelBatchImportJobAsync(const CancelBatchImportJobRequestT& request, const CancelBatchImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::CancelBatchImportJob, request, handler, context);
        }

        /**
         * <p>Cancels the specified batch prediction job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/CancelBatchPredictionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelBatchPredictionJobOutcome CancelBatchPredictionJob(const Model::CancelBatchPredictionJobRequest& request) const;

        /**
         * A Callable wrapper for CancelBatchPredictionJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelBatchPredictionJobRequestT = Model::CancelBatchPredictionJobRequest>
        Model::CancelBatchPredictionJobOutcomeCallable CancelBatchPredictionJobCallable(const CancelBatchPredictionJobRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::CancelBatchPredictionJob, request);
        }

        /**
         * An Async wrapper for CancelBatchPredictionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelBatchPredictionJobRequestT = Model::CancelBatchPredictionJobRequest>
        void CancelBatchPredictionJobAsync(const CancelBatchPredictionJobRequestT& request, const CancelBatchPredictionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::CancelBatchPredictionJob, request, handler, context);
        }

        /**
         * <p>Creates a batch import job. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/CreateBatchImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBatchImportJobOutcome CreateBatchImportJob(const Model::CreateBatchImportJobRequest& request) const;

        /**
         * A Callable wrapper for CreateBatchImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateBatchImportJobRequestT = Model::CreateBatchImportJobRequest>
        Model::CreateBatchImportJobOutcomeCallable CreateBatchImportJobCallable(const CreateBatchImportJobRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::CreateBatchImportJob, request);
        }

        /**
         * An Async wrapper for CreateBatchImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateBatchImportJobRequestT = Model::CreateBatchImportJobRequest>
        void CreateBatchImportJobAsync(const CreateBatchImportJobRequestT& request, const CreateBatchImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::CreateBatchImportJob, request, handler, context);
        }

        /**
         * <p>Creates a batch prediction job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/CreateBatchPredictionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBatchPredictionJobOutcome CreateBatchPredictionJob(const Model::CreateBatchPredictionJobRequest& request) const;

        /**
         * A Callable wrapper for CreateBatchPredictionJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateBatchPredictionJobRequestT = Model::CreateBatchPredictionJobRequest>
        Model::CreateBatchPredictionJobOutcomeCallable CreateBatchPredictionJobCallable(const CreateBatchPredictionJobRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::CreateBatchPredictionJob, request);
        }

        /**
         * An Async wrapper for CreateBatchPredictionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateBatchPredictionJobRequestT = Model::CreateBatchPredictionJobRequest>
        void CreateBatchPredictionJobAsync(const CreateBatchPredictionJobRequestT& request, const CreateBatchPredictionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::CreateBatchPredictionJob, request, handler, context);
        }

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
        template<typename CreateDetectorVersionRequestT = Model::CreateDetectorVersionRequest>
        Model::CreateDetectorVersionOutcomeCallable CreateDetectorVersionCallable(const CreateDetectorVersionRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::CreateDetectorVersion, request);
        }

        /**
         * An Async wrapper for CreateDetectorVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDetectorVersionRequestT = Model::CreateDetectorVersionRequest>
        void CreateDetectorVersionAsync(const CreateDetectorVersionRequestT& request, const CreateDetectorVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::CreateDetectorVersion, request, handler, context);
        }

        /**
         * <p> Creates a list. </p> <p>List is a set of input data for a variable in your
         * event dataset. You use the input data in a rule that's associated with your
         * detector. For more information, see <a
         * href="https://docs.aws.amazon.com/frauddetector/latest/ug/lists.html">Lists</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/CreateList">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateListOutcome CreateList(const Model::CreateListRequest& request) const;

        /**
         * A Callable wrapper for CreateList that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateListRequestT = Model::CreateListRequest>
        Model::CreateListOutcomeCallable CreateListCallable(const CreateListRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::CreateList, request);
        }

        /**
         * An Async wrapper for CreateList that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateListRequestT = Model::CreateListRequest>
        void CreateListAsync(const CreateListRequestT& request, const CreateListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::CreateList, request, handler, context);
        }

        /**
         * <p>Creates a model using the specified model type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/CreateModel">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateModelOutcome CreateModel(const Model::CreateModelRequest& request) const;

        /**
         * A Callable wrapper for CreateModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateModelRequestT = Model::CreateModelRequest>
        Model::CreateModelOutcomeCallable CreateModelCallable(const CreateModelRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::CreateModel, request);
        }

        /**
         * An Async wrapper for CreateModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateModelRequestT = Model::CreateModelRequest>
        void CreateModelAsync(const CreateModelRequestT& request, const CreateModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::CreateModel, request, handler, context);
        }

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
        template<typename CreateModelVersionRequestT = Model::CreateModelVersionRequest>
        Model::CreateModelVersionOutcomeCallable CreateModelVersionCallable(const CreateModelVersionRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::CreateModelVersion, request);
        }

        /**
         * An Async wrapper for CreateModelVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateModelVersionRequestT = Model::CreateModelVersionRequest>
        void CreateModelVersionAsync(const CreateModelVersionRequestT& request, const CreateModelVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::CreateModelVersion, request, handler, context);
        }

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
        template<typename CreateRuleRequestT = Model::CreateRuleRequest>
        Model::CreateRuleOutcomeCallable CreateRuleCallable(const CreateRuleRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::CreateRule, request);
        }

        /**
         * An Async wrapper for CreateRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateRuleRequestT = Model::CreateRuleRequest>
        void CreateRuleAsync(const CreateRuleRequestT& request, const CreateRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::CreateRule, request, handler, context);
        }

        /**
         * <p>Creates a variable.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/CreateVariable">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVariableOutcome CreateVariable(const Model::CreateVariableRequest& request) const;

        /**
         * A Callable wrapper for CreateVariable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateVariableRequestT = Model::CreateVariableRequest>
        Model::CreateVariableOutcomeCallable CreateVariableCallable(const CreateVariableRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::CreateVariable, request);
        }

        /**
         * An Async wrapper for CreateVariable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateVariableRequestT = Model::CreateVariableRequest>
        void CreateVariableAsync(const CreateVariableRequestT& request, const CreateVariableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::CreateVariable, request, handler, context);
        }

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
        template<typename DeleteBatchImportJobRequestT = Model::DeleteBatchImportJobRequest>
        Model::DeleteBatchImportJobOutcomeCallable DeleteBatchImportJobCallable(const DeleteBatchImportJobRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::DeleteBatchImportJob, request);
        }

        /**
         * An Async wrapper for DeleteBatchImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteBatchImportJobRequestT = Model::DeleteBatchImportJobRequest>
        void DeleteBatchImportJobAsync(const DeleteBatchImportJobRequestT& request, const DeleteBatchImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::DeleteBatchImportJob, request, handler, context);
        }

        /**
         * <p>Deletes a batch prediction job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/DeleteBatchPredictionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBatchPredictionJobOutcome DeleteBatchPredictionJob(const Model::DeleteBatchPredictionJobRequest& request) const;

        /**
         * A Callable wrapper for DeleteBatchPredictionJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteBatchPredictionJobRequestT = Model::DeleteBatchPredictionJobRequest>
        Model::DeleteBatchPredictionJobOutcomeCallable DeleteBatchPredictionJobCallable(const DeleteBatchPredictionJobRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::DeleteBatchPredictionJob, request);
        }

        /**
         * An Async wrapper for DeleteBatchPredictionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteBatchPredictionJobRequestT = Model::DeleteBatchPredictionJobRequest>
        void DeleteBatchPredictionJobAsync(const DeleteBatchPredictionJobRequestT& request, const DeleteBatchPredictionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::DeleteBatchPredictionJob, request, handler, context);
        }

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
        template<typename DeleteDetectorRequestT = Model::DeleteDetectorRequest>
        Model::DeleteDetectorOutcomeCallable DeleteDetectorCallable(const DeleteDetectorRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::DeleteDetector, request);
        }

        /**
         * An Async wrapper for DeleteDetector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDetectorRequestT = Model::DeleteDetectorRequest>
        void DeleteDetectorAsync(const DeleteDetectorRequestT& request, const DeleteDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::DeleteDetector, request, handler, context);
        }

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
        template<typename DeleteDetectorVersionRequestT = Model::DeleteDetectorVersionRequest>
        Model::DeleteDetectorVersionOutcomeCallable DeleteDetectorVersionCallable(const DeleteDetectorVersionRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::DeleteDetectorVersion, request);
        }

        /**
         * An Async wrapper for DeleteDetectorVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDetectorVersionRequestT = Model::DeleteDetectorVersionRequest>
        void DeleteDetectorVersionAsync(const DeleteDetectorVersionRequestT& request, const DeleteDetectorVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::DeleteDetectorVersion, request, handler, context);
        }

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
        template<typename DeleteEntityTypeRequestT = Model::DeleteEntityTypeRequest>
        Model::DeleteEntityTypeOutcomeCallable DeleteEntityTypeCallable(const DeleteEntityTypeRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::DeleteEntityType, request);
        }

        /**
         * An Async wrapper for DeleteEntityType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteEntityTypeRequestT = Model::DeleteEntityTypeRequest>
        void DeleteEntityTypeAsync(const DeleteEntityTypeRequestT& request, const DeleteEntityTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::DeleteEntityType, request, handler, context);
        }

        /**
         * <p>Deletes the specified event.</p> <p>When you delete an event, Amazon Fraud
         * Detector permanently deletes that event and the event data is no longer stored
         * in Amazon Fraud Detector. If <code>deleteAuditHistory</code> is
         * <code>True</code>, event data is available through search for up to 30 seconds
         * after the delete operation is completed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/DeleteEvent">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEventOutcome DeleteEvent(const Model::DeleteEventRequest& request) const;

        /**
         * A Callable wrapper for DeleteEvent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteEventRequestT = Model::DeleteEventRequest>
        Model::DeleteEventOutcomeCallable DeleteEventCallable(const DeleteEventRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::DeleteEvent, request);
        }

        /**
         * An Async wrapper for DeleteEvent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteEventRequestT = Model::DeleteEventRequest>
        void DeleteEventAsync(const DeleteEventRequestT& request, const DeleteEventResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::DeleteEvent, request, handler, context);
        }

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
        template<typename DeleteEventTypeRequestT = Model::DeleteEventTypeRequest>
        Model::DeleteEventTypeOutcomeCallable DeleteEventTypeCallable(const DeleteEventTypeRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::DeleteEventType, request);
        }

        /**
         * An Async wrapper for DeleteEventType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteEventTypeRequestT = Model::DeleteEventTypeRequest>
        void DeleteEventTypeAsync(const DeleteEventTypeRequestT& request, const DeleteEventTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::DeleteEventType, request, handler, context);
        }

        /**
         * <p>Deletes all events of a particular event type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/DeleteEventsByEventType">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEventsByEventTypeOutcome DeleteEventsByEventType(const Model::DeleteEventsByEventTypeRequest& request) const;

        /**
         * A Callable wrapper for DeleteEventsByEventType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteEventsByEventTypeRequestT = Model::DeleteEventsByEventTypeRequest>
        Model::DeleteEventsByEventTypeOutcomeCallable DeleteEventsByEventTypeCallable(const DeleteEventsByEventTypeRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::DeleteEventsByEventType, request);
        }

        /**
         * An Async wrapper for DeleteEventsByEventType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteEventsByEventTypeRequestT = Model::DeleteEventsByEventTypeRequest>
        void DeleteEventsByEventTypeAsync(const DeleteEventsByEventTypeRequestT& request, const DeleteEventsByEventTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::DeleteEventsByEventType, request, handler, context);
        }

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
        template<typename DeleteExternalModelRequestT = Model::DeleteExternalModelRequest>
        Model::DeleteExternalModelOutcomeCallable DeleteExternalModelCallable(const DeleteExternalModelRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::DeleteExternalModel, request);
        }

        /**
         * An Async wrapper for DeleteExternalModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteExternalModelRequestT = Model::DeleteExternalModelRequest>
        void DeleteExternalModelAsync(const DeleteExternalModelRequestT& request, const DeleteExternalModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::DeleteExternalModel, request, handler, context);
        }

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
        template<typename DeleteLabelRequestT = Model::DeleteLabelRequest>
        Model::DeleteLabelOutcomeCallable DeleteLabelCallable(const DeleteLabelRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::DeleteLabel, request);
        }

        /**
         * An Async wrapper for DeleteLabel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteLabelRequestT = Model::DeleteLabelRequest>
        void DeleteLabelAsync(const DeleteLabelRequestT& request, const DeleteLabelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::DeleteLabel, request, handler, context);
        }

        /**
         * <p> Deletes the list, provided it is not used in a rule. </p> <p> When you
         * delete a list, Amazon Fraud Detector permanently deletes that list and the
         * elements in the list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/DeleteList">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteListOutcome DeleteList(const Model::DeleteListRequest& request) const;

        /**
         * A Callable wrapper for DeleteList that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteListRequestT = Model::DeleteListRequest>
        Model::DeleteListOutcomeCallable DeleteListCallable(const DeleteListRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::DeleteList, request);
        }

        /**
         * An Async wrapper for DeleteList that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteListRequestT = Model::DeleteListRequest>
        void DeleteListAsync(const DeleteListRequestT& request, const DeleteListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::DeleteList, request, handler, context);
        }

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
        template<typename DeleteModelRequestT = Model::DeleteModelRequest>
        Model::DeleteModelOutcomeCallable DeleteModelCallable(const DeleteModelRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::DeleteModel, request);
        }

        /**
         * An Async wrapper for DeleteModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteModelRequestT = Model::DeleteModelRequest>
        void DeleteModelAsync(const DeleteModelRequestT& request, const DeleteModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::DeleteModel, request, handler, context);
        }

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
        template<typename DeleteModelVersionRequestT = Model::DeleteModelVersionRequest>
        Model::DeleteModelVersionOutcomeCallable DeleteModelVersionCallable(const DeleteModelVersionRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::DeleteModelVersion, request);
        }

        /**
         * An Async wrapper for DeleteModelVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteModelVersionRequestT = Model::DeleteModelVersionRequest>
        void DeleteModelVersionAsync(const DeleteModelVersionRequestT& request, const DeleteModelVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::DeleteModelVersion, request, handler, context);
        }

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
        template<typename DeleteOutcomeRequestT = Model::DeleteOutcomeRequest>
        Model::DeleteOutcomeOutcomeCallable DeleteOutcomeCallable(const DeleteOutcomeRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::DeleteOutcome, request);
        }

        /**
         * An Async wrapper for DeleteOutcome that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteOutcomeRequestT = Model::DeleteOutcomeRequest>
        void DeleteOutcomeAsync(const DeleteOutcomeRequestT& request, const DeleteOutcomeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::DeleteOutcome, request, handler, context);
        }

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
        template<typename DeleteRuleRequestT = Model::DeleteRuleRequest>
        Model::DeleteRuleOutcomeCallable DeleteRuleCallable(const DeleteRuleRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::DeleteRule, request);
        }

        /**
         * An Async wrapper for DeleteRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRuleRequestT = Model::DeleteRuleRequest>
        void DeleteRuleAsync(const DeleteRuleRequestT& request, const DeleteRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::DeleteRule, request, handler, context);
        }

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
        template<typename DeleteVariableRequestT = Model::DeleteVariableRequest>
        Model::DeleteVariableOutcomeCallable DeleteVariableCallable(const DeleteVariableRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::DeleteVariable, request);
        }

        /**
         * An Async wrapper for DeleteVariable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteVariableRequestT = Model::DeleteVariableRequest>
        void DeleteVariableAsync(const DeleteVariableRequestT& request, const DeleteVariableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::DeleteVariable, request, handler, context);
        }

        /**
         * <p>Gets all versions for a specified detector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/DescribeDetector">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDetectorOutcome DescribeDetector(const Model::DescribeDetectorRequest& request) const;

        /**
         * A Callable wrapper for DescribeDetector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDetectorRequestT = Model::DescribeDetectorRequest>
        Model::DescribeDetectorOutcomeCallable DescribeDetectorCallable(const DescribeDetectorRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::DescribeDetector, request);
        }

        /**
         * An Async wrapper for DescribeDetector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDetectorRequestT = Model::DescribeDetectorRequest>
        void DescribeDetectorAsync(const DescribeDetectorRequestT& request, const DescribeDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::DescribeDetector, request, handler, context);
        }

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
        template<typename DescribeModelVersionsRequestT = Model::DescribeModelVersionsRequest>
        Model::DescribeModelVersionsOutcomeCallable DescribeModelVersionsCallable(const DescribeModelVersionsRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::DescribeModelVersions, request);
        }

        /**
         * An Async wrapper for DescribeModelVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeModelVersionsRequestT = Model::DescribeModelVersionsRequest>
        void DescribeModelVersionsAsync(const DescribeModelVersionsRequestT& request, const DescribeModelVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::DescribeModelVersions, request, handler, context);
        }

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
        template<typename GetBatchImportJobsRequestT = Model::GetBatchImportJobsRequest>
        Model::GetBatchImportJobsOutcomeCallable GetBatchImportJobsCallable(const GetBatchImportJobsRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::GetBatchImportJobs, request);
        }

        /**
         * An Async wrapper for GetBatchImportJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetBatchImportJobsRequestT = Model::GetBatchImportJobsRequest>
        void GetBatchImportJobsAsync(const GetBatchImportJobsRequestT& request, const GetBatchImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::GetBatchImportJobs, request, handler, context);
        }

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
        template<typename GetBatchPredictionJobsRequestT = Model::GetBatchPredictionJobsRequest>
        Model::GetBatchPredictionJobsOutcomeCallable GetBatchPredictionJobsCallable(const GetBatchPredictionJobsRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::GetBatchPredictionJobs, request);
        }

        /**
         * An Async wrapper for GetBatchPredictionJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetBatchPredictionJobsRequestT = Model::GetBatchPredictionJobsRequest>
        void GetBatchPredictionJobsAsync(const GetBatchPredictionJobsRequestT& request, const GetBatchPredictionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::GetBatchPredictionJobs, request, handler, context);
        }

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
        template<typename GetDeleteEventsByEventTypeStatusRequestT = Model::GetDeleteEventsByEventTypeStatusRequest>
        Model::GetDeleteEventsByEventTypeStatusOutcomeCallable GetDeleteEventsByEventTypeStatusCallable(const GetDeleteEventsByEventTypeStatusRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::GetDeleteEventsByEventTypeStatus, request);
        }

        /**
         * An Async wrapper for GetDeleteEventsByEventTypeStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDeleteEventsByEventTypeStatusRequestT = Model::GetDeleteEventsByEventTypeStatusRequest>
        void GetDeleteEventsByEventTypeStatusAsync(const GetDeleteEventsByEventTypeStatusRequestT& request, const GetDeleteEventsByEventTypeStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::GetDeleteEventsByEventTypeStatus, request, handler, context);
        }

        /**
         * <p>Gets a particular detector version. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/GetDetectorVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDetectorVersionOutcome GetDetectorVersion(const Model::GetDetectorVersionRequest& request) const;

        /**
         * A Callable wrapper for GetDetectorVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDetectorVersionRequestT = Model::GetDetectorVersionRequest>
        Model::GetDetectorVersionOutcomeCallable GetDetectorVersionCallable(const GetDetectorVersionRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::GetDetectorVersion, request);
        }

        /**
         * An Async wrapper for GetDetectorVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDetectorVersionRequestT = Model::GetDetectorVersionRequest>
        void GetDetectorVersionAsync(const GetDetectorVersionRequestT& request, const GetDetectorVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::GetDetectorVersion, request, handler, context);
        }

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
        template<typename GetDetectorsRequestT = Model::GetDetectorsRequest>
        Model::GetDetectorsOutcomeCallable GetDetectorsCallable(const GetDetectorsRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::GetDetectors, request);
        }

        /**
         * An Async wrapper for GetDetectors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDetectorsRequestT = Model::GetDetectorsRequest>
        void GetDetectorsAsync(const GetDetectorsRequestT& request, const GetDetectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::GetDetectors, request, handler, context);
        }

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
        template<typename GetEntityTypesRequestT = Model::GetEntityTypesRequest>
        Model::GetEntityTypesOutcomeCallable GetEntityTypesCallable(const GetEntityTypesRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::GetEntityTypes, request);
        }

        /**
         * An Async wrapper for GetEntityTypes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEntityTypesRequestT = Model::GetEntityTypesRequest>
        void GetEntityTypesAsync(const GetEntityTypesRequestT& request, const GetEntityTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::GetEntityTypes, request, handler, context);
        }

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
        template<typename GetEventRequestT = Model::GetEventRequest>
        Model::GetEventOutcomeCallable GetEventCallable(const GetEventRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::GetEvent, request);
        }

        /**
         * An Async wrapper for GetEvent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEventRequestT = Model::GetEventRequest>
        void GetEventAsync(const GetEventRequestT& request, const GetEventResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::GetEvent, request, handler, context);
        }

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
        template<typename GetEventPredictionRequestT = Model::GetEventPredictionRequest>
        Model::GetEventPredictionOutcomeCallable GetEventPredictionCallable(const GetEventPredictionRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::GetEventPrediction, request);
        }

        /**
         * An Async wrapper for GetEventPrediction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEventPredictionRequestT = Model::GetEventPredictionRequest>
        void GetEventPredictionAsync(const GetEventPredictionRequestT& request, const GetEventPredictionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::GetEventPrediction, request, handler, context);
        }

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
        template<typename GetEventPredictionMetadataRequestT = Model::GetEventPredictionMetadataRequest>
        Model::GetEventPredictionMetadataOutcomeCallable GetEventPredictionMetadataCallable(const GetEventPredictionMetadataRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::GetEventPredictionMetadata, request);
        }

        /**
         * An Async wrapper for GetEventPredictionMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEventPredictionMetadataRequestT = Model::GetEventPredictionMetadataRequest>
        void GetEventPredictionMetadataAsync(const GetEventPredictionMetadataRequestT& request, const GetEventPredictionMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::GetEventPredictionMetadata, request, handler, context);
        }

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
        template<typename GetEventTypesRequestT = Model::GetEventTypesRequest>
        Model::GetEventTypesOutcomeCallable GetEventTypesCallable(const GetEventTypesRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::GetEventTypes, request);
        }

        /**
         * An Async wrapper for GetEventTypes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEventTypesRequestT = Model::GetEventTypesRequest>
        void GetEventTypesAsync(const GetEventTypesRequestT& request, const GetEventTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::GetEventTypes, request, handler, context);
        }

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
        template<typename GetExternalModelsRequestT = Model::GetExternalModelsRequest>
        Model::GetExternalModelsOutcomeCallable GetExternalModelsCallable(const GetExternalModelsRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::GetExternalModels, request);
        }

        /**
         * An Async wrapper for GetExternalModels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetExternalModelsRequestT = Model::GetExternalModelsRequest>
        void GetExternalModelsAsync(const GetExternalModelsRequestT& request, const GetExternalModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::GetExternalModels, request, handler, context);
        }

        /**
         * <p>Gets the encryption key if a KMS key has been specified to be used to encrypt
         * content in Amazon Fraud Detector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/GetKMSEncryptionKey">AWS
         * API Reference</a></p>
         */
        virtual Model::GetKMSEncryptionKeyOutcome GetKMSEncryptionKey(const Model::GetKMSEncryptionKeyRequest& request = {}) const;

        /**
         * A Callable wrapper for GetKMSEncryptionKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetKMSEncryptionKeyRequestT = Model::GetKMSEncryptionKeyRequest>
        Model::GetKMSEncryptionKeyOutcomeCallable GetKMSEncryptionKeyCallable(const GetKMSEncryptionKeyRequestT& request = {}) const
        {
            return SubmitCallable(&FraudDetectorClient::GetKMSEncryptionKey, request);
        }

        /**
         * An Async wrapper for GetKMSEncryptionKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetKMSEncryptionKeyRequestT = Model::GetKMSEncryptionKeyRequest>
        void GetKMSEncryptionKeyAsync(const GetKMSEncryptionKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const GetKMSEncryptionKeyRequestT& request = {}) const
        {
            return SubmitAsync(&FraudDetectorClient::GetKMSEncryptionKey, request, handler, context);
        }

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
        template<typename GetLabelsRequestT = Model::GetLabelsRequest>
        Model::GetLabelsOutcomeCallable GetLabelsCallable(const GetLabelsRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::GetLabels, request);
        }

        /**
         * An Async wrapper for GetLabels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetLabelsRequestT = Model::GetLabelsRequest>
        void GetLabelsAsync(const GetLabelsRequestT& request, const GetLabelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::GetLabels, request, handler, context);
        }

        /**
         * <p> Gets all the elements in the specified list. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/GetListElements">AWS
         * API Reference</a></p>
         */
        virtual Model::GetListElementsOutcome GetListElements(const Model::GetListElementsRequest& request) const;

        /**
         * A Callable wrapper for GetListElements that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetListElementsRequestT = Model::GetListElementsRequest>
        Model::GetListElementsOutcomeCallable GetListElementsCallable(const GetListElementsRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::GetListElements, request);
        }

        /**
         * An Async wrapper for GetListElements that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetListElementsRequestT = Model::GetListElementsRequest>
        void GetListElementsAsync(const GetListElementsRequestT& request, const GetListElementsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::GetListElements, request, handler, context);
        }

        /**
         * <p> Gets the metadata of either all the lists under the account or the specified
         * list. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/GetListsMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::GetListsMetadataOutcome GetListsMetadata(const Model::GetListsMetadataRequest& request) const;

        /**
         * A Callable wrapper for GetListsMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetListsMetadataRequestT = Model::GetListsMetadataRequest>
        Model::GetListsMetadataOutcomeCallable GetListsMetadataCallable(const GetListsMetadataRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::GetListsMetadata, request);
        }

        /**
         * An Async wrapper for GetListsMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetListsMetadataRequestT = Model::GetListsMetadataRequest>
        void GetListsMetadataAsync(const GetListsMetadataRequestT& request, const GetListsMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::GetListsMetadata, request, handler, context);
        }

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
        template<typename GetModelVersionRequestT = Model::GetModelVersionRequest>
        Model::GetModelVersionOutcomeCallable GetModelVersionCallable(const GetModelVersionRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::GetModelVersion, request);
        }

        /**
         * An Async wrapper for GetModelVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetModelVersionRequestT = Model::GetModelVersionRequest>
        void GetModelVersionAsync(const GetModelVersionRequestT& request, const GetModelVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::GetModelVersion, request, handler, context);
        }

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
        template<typename GetModelsRequestT = Model::GetModelsRequest>
        Model::GetModelsOutcomeCallable GetModelsCallable(const GetModelsRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::GetModels, request);
        }

        /**
         * An Async wrapper for GetModels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetModelsRequestT = Model::GetModelsRequest>
        void GetModelsAsync(const GetModelsRequestT& request, const GetModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::GetModels, request, handler, context);
        }

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
        template<typename GetOutcomesRequestT = Model::GetOutcomesRequest>
        Model::GetOutcomesOutcomeCallable GetOutcomesCallable(const GetOutcomesRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::GetOutcomes, request);
        }

        /**
         * An Async wrapper for GetOutcomes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetOutcomesRequestT = Model::GetOutcomesRequest>
        void GetOutcomesAsync(const GetOutcomesRequestT& request, const GetOutcomesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::GetOutcomes, request, handler, context);
        }

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
        template<typename GetRulesRequestT = Model::GetRulesRequest>
        Model::GetRulesOutcomeCallable GetRulesCallable(const GetRulesRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::GetRules, request);
        }

        /**
         * An Async wrapper for GetRules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRulesRequestT = Model::GetRulesRequest>
        void GetRulesAsync(const GetRulesRequestT& request, const GetRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::GetRules, request, handler, context);
        }

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
        template<typename GetVariablesRequestT = Model::GetVariablesRequest>
        Model::GetVariablesOutcomeCallable GetVariablesCallable(const GetVariablesRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::GetVariables, request);
        }

        /**
         * An Async wrapper for GetVariables that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetVariablesRequestT = Model::GetVariablesRequest>
        void GetVariablesAsync(const GetVariablesRequestT& request, const GetVariablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::GetVariables, request, handler, context);
        }

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
        template<typename ListEventPredictionsRequestT = Model::ListEventPredictionsRequest>
        Model::ListEventPredictionsOutcomeCallable ListEventPredictionsCallable(const ListEventPredictionsRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::ListEventPredictions, request);
        }

        /**
         * An Async wrapper for ListEventPredictions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEventPredictionsRequestT = Model::ListEventPredictionsRequest>
        void ListEventPredictionsAsync(const ListEventPredictionsRequestT& request, const ListEventPredictionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::ListEventPredictions, request, handler, context);
        }

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
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Creates or updates a detector. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/PutDetector">AWS
         * API Reference</a></p>
         */
        virtual Model::PutDetectorOutcome PutDetector(const Model::PutDetectorRequest& request) const;

        /**
         * A Callable wrapper for PutDetector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutDetectorRequestT = Model::PutDetectorRequest>
        Model::PutDetectorOutcomeCallable PutDetectorCallable(const PutDetectorRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::PutDetector, request);
        }

        /**
         * An Async wrapper for PutDetector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutDetectorRequestT = Model::PutDetectorRequest>
        void PutDetectorAsync(const PutDetectorRequestT& request, const PutDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::PutDetector, request, handler, context);
        }

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
        template<typename PutEntityTypeRequestT = Model::PutEntityTypeRequest>
        Model::PutEntityTypeOutcomeCallable PutEntityTypeCallable(const PutEntityTypeRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::PutEntityType, request);
        }

        /**
         * An Async wrapper for PutEntityType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutEntityTypeRequestT = Model::PutEntityTypeRequest>
        void PutEntityTypeAsync(const PutEntityTypeRequestT& request, const PutEntityTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::PutEntityType, request, handler, context);
        }

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
        template<typename PutEventTypeRequestT = Model::PutEventTypeRequest>
        Model::PutEventTypeOutcomeCallable PutEventTypeCallable(const PutEventTypeRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::PutEventType, request);
        }

        /**
         * An Async wrapper for PutEventType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutEventTypeRequestT = Model::PutEventTypeRequest>
        void PutEventTypeAsync(const PutEventTypeRequestT& request, const PutEventTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::PutEventType, request, handler, context);
        }

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
        template<typename PutExternalModelRequestT = Model::PutExternalModelRequest>
        Model::PutExternalModelOutcomeCallable PutExternalModelCallable(const PutExternalModelRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::PutExternalModel, request);
        }

        /**
         * An Async wrapper for PutExternalModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutExternalModelRequestT = Model::PutExternalModelRequest>
        void PutExternalModelAsync(const PutExternalModelRequestT& request, const PutExternalModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::PutExternalModel, request, handler, context);
        }

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
        template<typename PutKMSEncryptionKeyRequestT = Model::PutKMSEncryptionKeyRequest>
        Model::PutKMSEncryptionKeyOutcomeCallable PutKMSEncryptionKeyCallable(const PutKMSEncryptionKeyRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::PutKMSEncryptionKey, request);
        }

        /**
         * An Async wrapper for PutKMSEncryptionKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutKMSEncryptionKeyRequestT = Model::PutKMSEncryptionKeyRequest>
        void PutKMSEncryptionKeyAsync(const PutKMSEncryptionKeyRequestT& request, const PutKMSEncryptionKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::PutKMSEncryptionKey, request, handler, context);
        }

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
        template<typename PutLabelRequestT = Model::PutLabelRequest>
        Model::PutLabelOutcomeCallable PutLabelCallable(const PutLabelRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::PutLabel, request);
        }

        /**
         * An Async wrapper for PutLabel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutLabelRequestT = Model::PutLabelRequest>
        void PutLabelAsync(const PutLabelRequestT& request, const PutLabelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::PutLabel, request, handler, context);
        }

        /**
         * <p>Creates or updates an outcome. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/PutOutcome">AWS
         * API Reference</a></p>
         */
        virtual Model::PutOutcomeOutcome PutOutcome(const Model::PutOutcomeRequest& request) const;

        /**
         * A Callable wrapper for PutOutcome that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutOutcomeRequestT = Model::PutOutcomeRequest>
        Model::PutOutcomeOutcomeCallable PutOutcomeCallable(const PutOutcomeRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::PutOutcome, request);
        }

        /**
         * An Async wrapper for PutOutcome that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutOutcomeRequestT = Model::PutOutcomeRequest>
        void PutOutcomeAsync(const PutOutcomeRequestT& request, const PutOutcomeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::PutOutcome, request, handler, context);
        }

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
        template<typename SendEventRequestT = Model::SendEventRequest>
        Model::SendEventOutcomeCallable SendEventCallable(const SendEventRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::SendEvent, request);
        }

        /**
         * An Async wrapper for SendEvent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SendEventRequestT = Model::SendEventRequest>
        void SendEventAsync(const SendEventRequestT& request, const SendEventResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::SendEvent, request, handler, context);
        }

        /**
         * <p>Assigns tags to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::UntagResource, request, handler, context);
        }

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
        template<typename UpdateDetectorVersionRequestT = Model::UpdateDetectorVersionRequest>
        Model::UpdateDetectorVersionOutcomeCallable UpdateDetectorVersionCallable(const UpdateDetectorVersionRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::UpdateDetectorVersion, request);
        }

        /**
         * An Async wrapper for UpdateDetectorVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDetectorVersionRequestT = Model::UpdateDetectorVersionRequest>
        void UpdateDetectorVersionAsync(const UpdateDetectorVersionRequestT& request, const UpdateDetectorVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::UpdateDetectorVersion, request, handler, context);
        }

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
        template<typename UpdateDetectorVersionMetadataRequestT = Model::UpdateDetectorVersionMetadataRequest>
        Model::UpdateDetectorVersionMetadataOutcomeCallable UpdateDetectorVersionMetadataCallable(const UpdateDetectorVersionMetadataRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::UpdateDetectorVersionMetadata, request);
        }

        /**
         * An Async wrapper for UpdateDetectorVersionMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDetectorVersionMetadataRequestT = Model::UpdateDetectorVersionMetadataRequest>
        void UpdateDetectorVersionMetadataAsync(const UpdateDetectorVersionMetadataRequestT& request, const UpdateDetectorVersionMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::UpdateDetectorVersionMetadata, request, handler, context);
        }

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
        template<typename UpdateDetectorVersionStatusRequestT = Model::UpdateDetectorVersionStatusRequest>
        Model::UpdateDetectorVersionStatusOutcomeCallable UpdateDetectorVersionStatusCallable(const UpdateDetectorVersionStatusRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::UpdateDetectorVersionStatus, request);
        }

        /**
         * An Async wrapper for UpdateDetectorVersionStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDetectorVersionStatusRequestT = Model::UpdateDetectorVersionStatusRequest>
        void UpdateDetectorVersionStatusAsync(const UpdateDetectorVersionStatusRequestT& request, const UpdateDetectorVersionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::UpdateDetectorVersionStatus, request, handler, context);
        }

        /**
         * <p>Updates the specified event with a new label.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/UpdateEventLabel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEventLabelOutcome UpdateEventLabel(const Model::UpdateEventLabelRequest& request) const;

        /**
         * A Callable wrapper for UpdateEventLabel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateEventLabelRequestT = Model::UpdateEventLabelRequest>
        Model::UpdateEventLabelOutcomeCallable UpdateEventLabelCallable(const UpdateEventLabelRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::UpdateEventLabel, request);
        }

        /**
         * An Async wrapper for UpdateEventLabel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateEventLabelRequestT = Model::UpdateEventLabelRequest>
        void UpdateEventLabelAsync(const UpdateEventLabelRequestT& request, const UpdateEventLabelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::UpdateEventLabel, request, handler, context);
        }

        /**
         * <p> Updates a list. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/UpdateList">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateListOutcome UpdateList(const Model::UpdateListRequest& request) const;

        /**
         * A Callable wrapper for UpdateList that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateListRequestT = Model::UpdateListRequest>
        Model::UpdateListOutcomeCallable UpdateListCallable(const UpdateListRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::UpdateList, request);
        }

        /**
         * An Async wrapper for UpdateList that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateListRequestT = Model::UpdateListRequest>
        void UpdateListAsync(const UpdateListRequestT& request, const UpdateListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::UpdateList, request, handler, context);
        }

        /**
         * <p>Updates model description.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/UpdateModel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateModelOutcome UpdateModel(const Model::UpdateModelRequest& request) const;

        /**
         * A Callable wrapper for UpdateModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateModelRequestT = Model::UpdateModelRequest>
        Model::UpdateModelOutcomeCallable UpdateModelCallable(const UpdateModelRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::UpdateModel, request);
        }

        /**
         * An Async wrapper for UpdateModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateModelRequestT = Model::UpdateModelRequest>
        void UpdateModelAsync(const UpdateModelRequestT& request, const UpdateModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::UpdateModel, request, handler, context);
        }

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
        template<typename UpdateModelVersionRequestT = Model::UpdateModelVersionRequest>
        Model::UpdateModelVersionOutcomeCallable UpdateModelVersionCallable(const UpdateModelVersionRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::UpdateModelVersion, request);
        }

        /**
         * An Async wrapper for UpdateModelVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateModelVersionRequestT = Model::UpdateModelVersionRequest>
        void UpdateModelVersionAsync(const UpdateModelVersionRequestT& request, const UpdateModelVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::UpdateModelVersion, request, handler, context);
        }

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
        template<typename UpdateModelVersionStatusRequestT = Model::UpdateModelVersionStatusRequest>
        Model::UpdateModelVersionStatusOutcomeCallable UpdateModelVersionStatusCallable(const UpdateModelVersionStatusRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::UpdateModelVersionStatus, request);
        }

        /**
         * An Async wrapper for UpdateModelVersionStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateModelVersionStatusRequestT = Model::UpdateModelVersionStatusRequest>
        void UpdateModelVersionStatusAsync(const UpdateModelVersionStatusRequestT& request, const UpdateModelVersionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::UpdateModelVersionStatus, request, handler, context);
        }

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
        template<typename UpdateRuleMetadataRequestT = Model::UpdateRuleMetadataRequest>
        Model::UpdateRuleMetadataOutcomeCallable UpdateRuleMetadataCallable(const UpdateRuleMetadataRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::UpdateRuleMetadata, request);
        }

        /**
         * An Async wrapper for UpdateRuleMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateRuleMetadataRequestT = Model::UpdateRuleMetadataRequest>
        void UpdateRuleMetadataAsync(const UpdateRuleMetadataRequestT& request, const UpdateRuleMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::UpdateRuleMetadata, request, handler, context);
        }

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
        template<typename UpdateRuleVersionRequestT = Model::UpdateRuleVersionRequest>
        Model::UpdateRuleVersionOutcomeCallable UpdateRuleVersionCallable(const UpdateRuleVersionRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::UpdateRuleVersion, request);
        }

        /**
         * An Async wrapper for UpdateRuleVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateRuleVersionRequestT = Model::UpdateRuleVersionRequest>
        void UpdateRuleVersionAsync(const UpdateRuleVersionRequestT& request, const UpdateRuleVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::UpdateRuleVersion, request, handler, context);
        }

        /**
         * <p>Updates a variable.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/UpdateVariable">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVariableOutcome UpdateVariable(const Model::UpdateVariableRequest& request) const;

        /**
         * A Callable wrapper for UpdateVariable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateVariableRequestT = Model::UpdateVariableRequest>
        Model::UpdateVariableOutcomeCallable UpdateVariableCallable(const UpdateVariableRequestT& request) const
        {
            return SubmitCallable(&FraudDetectorClient::UpdateVariable, request);
        }

        /**
         * An Async wrapper for UpdateVariable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateVariableRequestT = Model::UpdateVariableRequest>
        void UpdateVariableAsync(const UpdateVariableRequestT& request, const UpdateVariableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FraudDetectorClient::UpdateVariable, request, handler, context);
        }


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
