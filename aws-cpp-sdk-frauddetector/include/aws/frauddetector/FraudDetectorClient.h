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
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/frauddetector/FraudDetectorErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/frauddetector/model/BatchCreateVariableResult.h>
#include <aws/frauddetector/model/BatchGetVariableResult.h>
#include <aws/frauddetector/model/CreateDetectorVersionResult.h>
#include <aws/frauddetector/model/CreateModelVersionResult.h>
#include <aws/frauddetector/model/CreateRuleResult.h>
#include <aws/frauddetector/model/CreateVariableResult.h>
#include <aws/frauddetector/model/DeleteDetectorVersionResult.h>
#include <aws/frauddetector/model/DeleteEventResult.h>
#include <aws/frauddetector/model/DescribeDetectorResult.h>
#include <aws/frauddetector/model/DescribeModelVersionsResult.h>
#include <aws/frauddetector/model/GetDetectorVersionResult.h>
#include <aws/frauddetector/model/GetDetectorsResult.h>
#include <aws/frauddetector/model/GetExternalModelsResult.h>
#include <aws/frauddetector/model/GetModelVersionResult.h>
#include <aws/frauddetector/model/GetModelsResult.h>
#include <aws/frauddetector/model/GetOutcomesResult.h>
#include <aws/frauddetector/model/GetPredictionResult.h>
#include <aws/frauddetector/model/GetRulesResult.h>
#include <aws/frauddetector/model/GetVariablesResult.h>
#include <aws/frauddetector/model/PutDetectorResult.h>
#include <aws/frauddetector/model/PutExternalModelResult.h>
#include <aws/frauddetector/model/PutModelResult.h>
#include <aws/frauddetector/model/PutOutcomeResult.h>
#include <aws/frauddetector/model/UpdateDetectorVersionResult.h>
#include <aws/frauddetector/model/UpdateDetectorVersionMetadataResult.h>
#include <aws/frauddetector/model/UpdateDetectorVersionStatusResult.h>
#include <aws/frauddetector/model/UpdateModelVersionResult.h>
#include <aws/frauddetector/model/UpdateRuleMetadataResult.h>
#include <aws/frauddetector/model/UpdateRuleVersionResult.h>
#include <aws/frauddetector/model/UpdateVariableResult.h>
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

namespace FraudDetector
{

namespace Model
{
        class BatchCreateVariableRequest;
        class BatchGetVariableRequest;
        class CreateDetectorVersionRequest;
        class CreateModelVersionRequest;
        class CreateRuleRequest;
        class CreateVariableRequest;
        class DeleteDetectorVersionRequest;
        class DeleteEventRequest;
        class DescribeDetectorRequest;
        class DescribeModelVersionsRequest;
        class GetDetectorVersionRequest;
        class GetDetectorsRequest;
        class GetExternalModelsRequest;
        class GetModelVersionRequest;
        class GetModelsRequest;
        class GetOutcomesRequest;
        class GetPredictionRequest;
        class GetRulesRequest;
        class GetVariablesRequest;
        class PutDetectorRequest;
        class PutExternalModelRequest;
        class PutModelRequest;
        class PutOutcomeRequest;
        class UpdateDetectorVersionRequest;
        class UpdateDetectorVersionMetadataRequest;
        class UpdateDetectorVersionStatusRequest;
        class UpdateModelVersionRequest;
        class UpdateRuleMetadataRequest;
        class UpdateRuleVersionRequest;
        class UpdateVariableRequest;

        typedef Aws::Utils::Outcome<BatchCreateVariableResult, Aws::Client::AWSError<FraudDetectorErrors>> BatchCreateVariableOutcome;
        typedef Aws::Utils::Outcome<BatchGetVariableResult, Aws::Client::AWSError<FraudDetectorErrors>> BatchGetVariableOutcome;
        typedef Aws::Utils::Outcome<CreateDetectorVersionResult, Aws::Client::AWSError<FraudDetectorErrors>> CreateDetectorVersionOutcome;
        typedef Aws::Utils::Outcome<CreateModelVersionResult, Aws::Client::AWSError<FraudDetectorErrors>> CreateModelVersionOutcome;
        typedef Aws::Utils::Outcome<CreateRuleResult, Aws::Client::AWSError<FraudDetectorErrors>> CreateRuleOutcome;
        typedef Aws::Utils::Outcome<CreateVariableResult, Aws::Client::AWSError<FraudDetectorErrors>> CreateVariableOutcome;
        typedef Aws::Utils::Outcome<DeleteDetectorVersionResult, Aws::Client::AWSError<FraudDetectorErrors>> DeleteDetectorVersionOutcome;
        typedef Aws::Utils::Outcome<DeleteEventResult, Aws::Client::AWSError<FraudDetectorErrors>> DeleteEventOutcome;
        typedef Aws::Utils::Outcome<DescribeDetectorResult, Aws::Client::AWSError<FraudDetectorErrors>> DescribeDetectorOutcome;
        typedef Aws::Utils::Outcome<DescribeModelVersionsResult, Aws::Client::AWSError<FraudDetectorErrors>> DescribeModelVersionsOutcome;
        typedef Aws::Utils::Outcome<GetDetectorVersionResult, Aws::Client::AWSError<FraudDetectorErrors>> GetDetectorVersionOutcome;
        typedef Aws::Utils::Outcome<GetDetectorsResult, Aws::Client::AWSError<FraudDetectorErrors>> GetDetectorsOutcome;
        typedef Aws::Utils::Outcome<GetExternalModelsResult, Aws::Client::AWSError<FraudDetectorErrors>> GetExternalModelsOutcome;
        typedef Aws::Utils::Outcome<GetModelVersionResult, Aws::Client::AWSError<FraudDetectorErrors>> GetModelVersionOutcome;
        typedef Aws::Utils::Outcome<GetModelsResult, Aws::Client::AWSError<FraudDetectorErrors>> GetModelsOutcome;
        typedef Aws::Utils::Outcome<GetOutcomesResult, Aws::Client::AWSError<FraudDetectorErrors>> GetOutcomesOutcome;
        typedef Aws::Utils::Outcome<GetPredictionResult, Aws::Client::AWSError<FraudDetectorErrors>> GetPredictionOutcome;
        typedef Aws::Utils::Outcome<GetRulesResult, Aws::Client::AWSError<FraudDetectorErrors>> GetRulesOutcome;
        typedef Aws::Utils::Outcome<GetVariablesResult, Aws::Client::AWSError<FraudDetectorErrors>> GetVariablesOutcome;
        typedef Aws::Utils::Outcome<PutDetectorResult, Aws::Client::AWSError<FraudDetectorErrors>> PutDetectorOutcome;
        typedef Aws::Utils::Outcome<PutExternalModelResult, Aws::Client::AWSError<FraudDetectorErrors>> PutExternalModelOutcome;
        typedef Aws::Utils::Outcome<PutModelResult, Aws::Client::AWSError<FraudDetectorErrors>> PutModelOutcome;
        typedef Aws::Utils::Outcome<PutOutcomeResult, Aws::Client::AWSError<FraudDetectorErrors>> PutOutcomeOutcome;
        typedef Aws::Utils::Outcome<UpdateDetectorVersionResult, Aws::Client::AWSError<FraudDetectorErrors>> UpdateDetectorVersionOutcome;
        typedef Aws::Utils::Outcome<UpdateDetectorVersionMetadataResult, Aws::Client::AWSError<FraudDetectorErrors>> UpdateDetectorVersionMetadataOutcome;
        typedef Aws::Utils::Outcome<UpdateDetectorVersionStatusResult, Aws::Client::AWSError<FraudDetectorErrors>> UpdateDetectorVersionStatusOutcome;
        typedef Aws::Utils::Outcome<UpdateModelVersionResult, Aws::Client::AWSError<FraudDetectorErrors>> UpdateModelVersionOutcome;
        typedef Aws::Utils::Outcome<UpdateRuleMetadataResult, Aws::Client::AWSError<FraudDetectorErrors>> UpdateRuleMetadataOutcome;
        typedef Aws::Utils::Outcome<UpdateRuleVersionResult, Aws::Client::AWSError<FraudDetectorErrors>> UpdateRuleVersionOutcome;
        typedef Aws::Utils::Outcome<UpdateVariableResult, Aws::Client::AWSError<FraudDetectorErrors>> UpdateVariableOutcome;

        typedef std::future<BatchCreateVariableOutcome> BatchCreateVariableOutcomeCallable;
        typedef std::future<BatchGetVariableOutcome> BatchGetVariableOutcomeCallable;
        typedef std::future<CreateDetectorVersionOutcome> CreateDetectorVersionOutcomeCallable;
        typedef std::future<CreateModelVersionOutcome> CreateModelVersionOutcomeCallable;
        typedef std::future<CreateRuleOutcome> CreateRuleOutcomeCallable;
        typedef std::future<CreateVariableOutcome> CreateVariableOutcomeCallable;
        typedef std::future<DeleteDetectorVersionOutcome> DeleteDetectorVersionOutcomeCallable;
        typedef std::future<DeleteEventOutcome> DeleteEventOutcomeCallable;
        typedef std::future<DescribeDetectorOutcome> DescribeDetectorOutcomeCallable;
        typedef std::future<DescribeModelVersionsOutcome> DescribeModelVersionsOutcomeCallable;
        typedef std::future<GetDetectorVersionOutcome> GetDetectorVersionOutcomeCallable;
        typedef std::future<GetDetectorsOutcome> GetDetectorsOutcomeCallable;
        typedef std::future<GetExternalModelsOutcome> GetExternalModelsOutcomeCallable;
        typedef std::future<GetModelVersionOutcome> GetModelVersionOutcomeCallable;
        typedef std::future<GetModelsOutcome> GetModelsOutcomeCallable;
        typedef std::future<GetOutcomesOutcome> GetOutcomesOutcomeCallable;
        typedef std::future<GetPredictionOutcome> GetPredictionOutcomeCallable;
        typedef std::future<GetRulesOutcome> GetRulesOutcomeCallable;
        typedef std::future<GetVariablesOutcome> GetVariablesOutcomeCallable;
        typedef std::future<PutDetectorOutcome> PutDetectorOutcomeCallable;
        typedef std::future<PutExternalModelOutcome> PutExternalModelOutcomeCallable;
        typedef std::future<PutModelOutcome> PutModelOutcomeCallable;
        typedef std::future<PutOutcomeOutcome> PutOutcomeOutcomeCallable;
        typedef std::future<UpdateDetectorVersionOutcome> UpdateDetectorVersionOutcomeCallable;
        typedef std::future<UpdateDetectorVersionMetadataOutcome> UpdateDetectorVersionMetadataOutcomeCallable;
        typedef std::future<UpdateDetectorVersionStatusOutcome> UpdateDetectorVersionStatusOutcomeCallable;
        typedef std::future<UpdateModelVersionOutcome> UpdateModelVersionOutcomeCallable;
        typedef std::future<UpdateRuleMetadataOutcome> UpdateRuleMetadataOutcomeCallable;
        typedef std::future<UpdateRuleVersionOutcome> UpdateRuleVersionOutcomeCallable;
        typedef std::future<UpdateVariableOutcome> UpdateVariableOutcomeCallable;
} // namespace Model

  class FraudDetectorClient;

    typedef std::function<void(const FraudDetectorClient*, const Model::BatchCreateVariableRequest&, const Model::BatchCreateVariableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchCreateVariableResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::BatchGetVariableRequest&, const Model::BatchGetVariableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetVariableResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::CreateDetectorVersionRequest&, const Model::CreateDetectorVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDetectorVersionResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::CreateModelVersionRequest&, const Model::CreateModelVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateModelVersionResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::CreateRuleRequest&, const Model::CreateRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRuleResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::CreateVariableRequest&, const Model::CreateVariableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVariableResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::DeleteDetectorVersionRequest&, const Model::DeleteDetectorVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDetectorVersionResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::DeleteEventRequest&, const Model::DeleteEventOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEventResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::DescribeDetectorRequest&, const Model::DescribeDetectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDetectorResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::DescribeModelVersionsRequest&, const Model::DescribeModelVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeModelVersionsResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::GetDetectorVersionRequest&, const Model::GetDetectorVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDetectorVersionResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::GetDetectorsRequest&, const Model::GetDetectorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDetectorsResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::GetExternalModelsRequest&, const Model::GetExternalModelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetExternalModelsResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::GetModelVersionRequest&, const Model::GetModelVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetModelVersionResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::GetModelsRequest&, const Model::GetModelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetModelsResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::GetOutcomesRequest&, const Model::GetOutcomesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetOutcomesResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::GetPredictionRequest&, const Model::GetPredictionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPredictionResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::GetRulesRequest&, const Model::GetRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRulesResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::GetVariablesRequest&, const Model::GetVariablesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetVariablesResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::PutDetectorRequest&, const Model::PutDetectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutDetectorResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::PutExternalModelRequest&, const Model::PutExternalModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutExternalModelResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::PutModelRequest&, const Model::PutModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutModelResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::PutOutcomeRequest&, const Model::PutOutcomeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutOutcomeResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::UpdateDetectorVersionRequest&, const Model::UpdateDetectorVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDetectorVersionResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::UpdateDetectorVersionMetadataRequest&, const Model::UpdateDetectorVersionMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDetectorVersionMetadataResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::UpdateDetectorVersionStatusRequest&, const Model::UpdateDetectorVersionStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDetectorVersionStatusResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::UpdateModelVersionRequest&, const Model::UpdateModelVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateModelVersionResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::UpdateRuleMetadataRequest&, const Model::UpdateRuleMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRuleMetadataResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::UpdateRuleVersionRequest&, const Model::UpdateRuleVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRuleVersionResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::UpdateVariableRequest&, const Model::UpdateVariableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateVariableResponseReceivedHandler;

  /**
   * <p>This is the Amazon Fraud Detector API Reference. This guide is for developers
   * who need detailed information about Amazon Fraud Detector API actions, data
   * types, and errors. For more information about Amazon Fraud Detector features,
   * see the <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon
   * Fraud Detector User Guide</a>.</p>
   */
  class AWS_FRAUDDETECTOR_API FraudDetectorClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        FraudDetectorClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        FraudDetectorClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        FraudDetectorClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~FraudDetectorClient();

        inline virtual const char* GetServiceClientName() const override { return "FraudDetector"; }


        /**
         * <p>Creates a batch of variables.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/BatchCreateVariable">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchCreateVariableOutcome BatchCreateVariable(const Model::BatchCreateVariableRequest& request) const;

        /**
         * <p>Creates a batch of variables.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/BatchCreateVariable">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchCreateVariableOutcomeCallable BatchCreateVariableCallable(const Model::BatchCreateVariableRequest& request) const;

        /**
         * <p>Creates a batch of variables.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/BatchCreateVariable">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchCreateVariableAsync(const Model::BatchCreateVariableRequest& request, const BatchCreateVariableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a batch of variables.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/BatchGetVariable">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetVariableOutcome BatchGetVariable(const Model::BatchGetVariableRequest& request) const;

        /**
         * <p>Gets a batch of variables.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/BatchGetVariable">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetVariableOutcomeCallable BatchGetVariableCallable(const Model::BatchGetVariableRequest& request) const;

        /**
         * <p>Gets a batch of variables.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/BatchGetVariable">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetVariableAsync(const Model::BatchGetVariableRequest& request, const BatchGetVariableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a detector version. The detector version starts in a
         * <code>DRAFT</code> status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/CreateDetectorVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDetectorVersionOutcome CreateDetectorVersion(const Model::CreateDetectorVersionRequest& request) const;

        /**
         * <p>Creates a detector version. The detector version starts in a
         * <code>DRAFT</code> status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/CreateDetectorVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDetectorVersionOutcomeCallable CreateDetectorVersionCallable(const Model::CreateDetectorVersionRequest& request) const;

        /**
         * <p>Creates a detector version. The detector version starts in a
         * <code>DRAFT</code> status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/CreateDetectorVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDetectorVersionAsync(const Model::CreateDetectorVersionRequest& request, const CreateDetectorVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a version of the model using the specified model type. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/CreateModelVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateModelVersionOutcome CreateModelVersion(const Model::CreateModelVersionRequest& request) const;

        /**
         * <p>Creates a version of the model using the specified model type. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/CreateModelVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateModelVersionOutcomeCallable CreateModelVersionCallable(const Model::CreateModelVersionRequest& request) const;

        /**
         * <p>Creates a version of the model using the specified model type. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/CreateModelVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Creates a rule for use with the specified detector. </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/CreateRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRuleOutcomeCallable CreateRuleCallable(const Model::CreateRuleRequest& request) const;

        /**
         * <p>Creates a rule for use with the specified detector. </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/CreateRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRuleAsync(const Model::CreateRuleRequest& request, const CreateRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a variable.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/CreateVariable">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVariableOutcome CreateVariable(const Model::CreateVariableRequest& request) const;

        /**
         * <p>Creates a variable.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/CreateVariable">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateVariableOutcomeCallable CreateVariableCallable(const Model::CreateVariableRequest& request) const;

        /**
         * <p>Creates a variable.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/CreateVariable">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateVariableAsync(const Model::CreateVariableRequest& request, const CreateVariableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the detector version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/DeleteDetectorVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDetectorVersionOutcome DeleteDetectorVersion(const Model::DeleteDetectorVersionRequest& request) const;

        /**
         * <p>Deletes the detector version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/DeleteDetectorVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDetectorVersionOutcomeCallable DeleteDetectorVersionCallable(const Model::DeleteDetectorVersionRequest& request) const;

        /**
         * <p>Deletes the detector version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/DeleteDetectorVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDetectorVersionAsync(const Model::DeleteDetectorVersionRequest& request, const DeleteDetectorVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified event.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/DeleteEvent">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEventOutcome DeleteEvent(const Model::DeleteEventRequest& request) const;

        /**
         * <p>Deletes the specified event.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/DeleteEvent">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEventOutcomeCallable DeleteEventCallable(const Model::DeleteEventRequest& request) const;

        /**
         * <p>Deletes the specified event.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/DeleteEvent">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEventAsync(const Model::DeleteEventRequest& request, const DeleteEventResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets all versions for a specified detector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/DescribeDetector">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDetectorOutcome DescribeDetector(const Model::DescribeDetectorRequest& request) const;

        /**
         * <p>Gets all versions for a specified detector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/DescribeDetector">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDetectorOutcomeCallable DescribeDetectorCallable(const Model::DescribeDetectorRequest& request) const;

        /**
         * <p>Gets all versions for a specified detector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/DescribeDetector">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Gets all of the model versions for the specified model type or for the
         * specified model type and model ID. You can also get details for a single,
         * specified model version. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/DescribeModelVersions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeModelVersionsOutcomeCallable DescribeModelVersionsCallable(const Model::DescribeModelVersionsRequest& request) const;

        /**
         * <p>Gets all of the model versions for the specified model type or for the
         * specified model type and model ID. You can also get details for a single,
         * specified model version. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/DescribeModelVersions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeModelVersionsAsync(const Model::DescribeModelVersionsRequest& request, const DescribeModelVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a particular detector version. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/GetDetectorVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDetectorVersionOutcome GetDetectorVersion(const Model::GetDetectorVersionRequest& request) const;

        /**
         * <p>Gets a particular detector version. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/GetDetectorVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDetectorVersionOutcomeCallable GetDetectorVersionCallable(const Model::GetDetectorVersionRequest& request) const;

        /**
         * <p>Gets a particular detector version. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/GetDetectorVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDetectorVersionAsync(const Model::GetDetectorVersionRequest& request, const GetDetectorVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets all of detectors. This is a paginated API. If you provide a null
         * <code>maxSizePerPage</code>, this actions retrieves a maximum of 10 records per
         * page. If you provide a <code>maxSizePerPage</code>, the value must be between 5
         * and 10. To get the next page results, provide the pagination token from the
         * <code>GetEventTypesResponse</code> as part of your request. A null pagination
         * token fetches the records from the beginning. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/GetDetectors">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDetectorsOutcome GetDetectors(const Model::GetDetectorsRequest& request) const;

        /**
         * <p>Gets all of detectors. This is a paginated API. If you provide a null
         * <code>maxSizePerPage</code>, this actions retrieves a maximum of 10 records per
         * page. If you provide a <code>maxSizePerPage</code>, the value must be between 5
         * and 10. To get the next page results, provide the pagination token from the
         * <code>GetEventTypesResponse</code> as part of your request. A null pagination
         * token fetches the records from the beginning. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/GetDetectors">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDetectorsOutcomeCallable GetDetectorsCallable(const Model::GetDetectorsRequest& request) const;

        /**
         * <p>Gets all of detectors. This is a paginated API. If you provide a null
         * <code>maxSizePerPage</code>, this actions retrieves a maximum of 10 records per
         * page. If you provide a <code>maxSizePerPage</code>, the value must be between 5
         * and 10. To get the next page results, provide the pagination token from the
         * <code>GetEventTypesResponse</code> as part of your request. A null pagination
         * token fetches the records from the beginning. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/GetDetectors">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDetectorsAsync(const Model::GetDetectorsRequest& request, const GetDetectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the details for one or more Amazon SageMaker models that have been
         * imported into the service. This is a paginated API. If you provide a null
         * <code>maxSizePerPage</code>, this actions retrieves a maximum of 10 records per
         * page. If you provide a <code>maxSizePerPage</code>, the value must be between 5
         * and 10. To get the next page results, provide the pagination token from the
         * <code>GetExternalModelsResult</code> as part of your request. A null pagination
         * token fetches the records from the beginning. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/GetExternalModels">AWS
         * API Reference</a></p>
         */
        virtual Model::GetExternalModelsOutcome GetExternalModels(const Model::GetExternalModelsRequest& request) const;

        /**
         * <p>Gets the details for one or more Amazon SageMaker models that have been
         * imported into the service. This is a paginated API. If you provide a null
         * <code>maxSizePerPage</code>, this actions retrieves a maximum of 10 records per
         * page. If you provide a <code>maxSizePerPage</code>, the value must be between 5
         * and 10. To get the next page results, provide the pagination token from the
         * <code>GetExternalModelsResult</code> as part of your request. A null pagination
         * token fetches the records from the beginning. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/GetExternalModels">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetExternalModelsOutcomeCallable GetExternalModelsCallable(const Model::GetExternalModelsRequest& request) const;

        /**
         * <p>Gets the details for one or more Amazon SageMaker models that have been
         * imported into the service. This is a paginated API. If you provide a null
         * <code>maxSizePerPage</code>, this actions retrieves a maximum of 10 records per
         * page. If you provide a <code>maxSizePerPage</code>, the value must be between 5
         * and 10. To get the next page results, provide the pagination token from the
         * <code>GetExternalModelsResult</code> as part of your request. A null pagination
         * token fetches the records from the beginning. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/GetExternalModels">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetExternalModelsAsync(const Model::GetExternalModelsRequest& request, const GetExternalModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a model version. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/GetModelVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetModelVersionOutcome GetModelVersion(const Model::GetModelVersionRequest& request) const;

        /**
         * <p>Gets a model version. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/GetModelVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetModelVersionOutcomeCallable GetModelVersionCallable(const Model::GetModelVersionRequest& request) const;

        /**
         * <p>Gets a model version. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/GetModelVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetModelVersionAsync(const Model::GetModelVersionRequest& request, const GetModelVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets all of the models for the AWS account, or the specified model type, or
         * gets a single model for the specified model type, model ID combination.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/GetModels">AWS
         * API Reference</a></p>
         */
        virtual Model::GetModelsOutcome GetModels(const Model::GetModelsRequest& request) const;

        /**
         * <p>Gets all of the models for the AWS account, or the specified model type, or
         * gets a single model for the specified model type, model ID combination.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/GetModels">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetModelsOutcomeCallable GetModelsCallable(const Model::GetModelsRequest& request) const;

        /**
         * <p>Gets all of the models for the AWS account, or the specified model type, or
         * gets a single model for the specified model type, model ID combination.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/GetModels">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetModelsAsync(const Model::GetModelsRequest& request, const GetModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets one or more outcomes. This is a paginated API. If you provide a null
         * <code>maxSizePerPage</code>, this actions retrieves a maximum of 10 records per
         * page. If you provide a <code>maxSizePerPage</code>, the value must be between 50
         * and 100. To get the next page results, provide the pagination token from the
         * <code>GetOutcomesResult</code> as part of your request. A null pagination token
         * fetches the records from the beginning. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/GetOutcomes">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOutcomesOutcome GetOutcomes(const Model::GetOutcomesRequest& request) const;

        /**
         * <p>Gets one or more outcomes. This is a paginated API. If you provide a null
         * <code>maxSizePerPage</code>, this actions retrieves a maximum of 10 records per
         * page. If you provide a <code>maxSizePerPage</code>, the value must be between 50
         * and 100. To get the next page results, provide the pagination token from the
         * <code>GetOutcomesResult</code> as part of your request. A null pagination token
         * fetches the records from the beginning. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/GetOutcomes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetOutcomesOutcomeCallable GetOutcomesCallable(const Model::GetOutcomesRequest& request) const;

        /**
         * <p>Gets one or more outcomes. This is a paginated API. If you provide a null
         * <code>maxSizePerPage</code>, this actions retrieves a maximum of 10 records per
         * page. If you provide a <code>maxSizePerPage</code>, the value must be between 50
         * and 100. To get the next page results, provide the pagination token from the
         * <code>GetOutcomesResult</code> as part of your request. A null pagination token
         * fetches the records from the beginning. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/GetOutcomes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetOutcomesAsync(const Model::GetOutcomesRequest& request, const GetOutcomesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Evaluates an event against a detector version. If a version ID is not
         * provided, the detector’s (<code>ACTIVE</code>) version is used. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/GetPrediction">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPredictionOutcome GetPrediction(const Model::GetPredictionRequest& request) const;

        /**
         * <p>Evaluates an event against a detector version. If a version ID is not
         * provided, the detector’s (<code>ACTIVE</code>) version is used. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/GetPrediction">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPredictionOutcomeCallable GetPredictionCallable(const Model::GetPredictionRequest& request) const;

        /**
         * <p>Evaluates an event against a detector version. If a version ID is not
         * provided, the detector’s (<code>ACTIVE</code>) version is used. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/GetPrediction">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPredictionAsync(const Model::GetPredictionRequest& request, const GetPredictionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets all rules available for the specified detector.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/GetRules">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRulesOutcome GetRules(const Model::GetRulesRequest& request) const;

        /**
         * <p>Gets all rules available for the specified detector.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/GetRules">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRulesOutcomeCallable GetRulesCallable(const Model::GetRulesRequest& request) const;

        /**
         * <p>Gets all rules available for the specified detector.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/GetRules">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Gets all of the variables or the specific variable. This is a paginated API.
         * Providing null <code>maxSizePerPage</code> results in retrieving maximum of 100
         * records per page. If you provide <code>maxSizePerPage</code> the value must be
         * between 50 and 100. To get the next page result, a provide a pagination token
         * from <code>GetVariablesResult</code> as part of your request. Null pagination
         * token fetches the records from the beginning. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/GetVariables">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetVariablesOutcomeCallable GetVariablesCallable(const Model::GetVariablesRequest& request) const;

        /**
         * <p>Gets all of the variables or the specific variable. This is a paginated API.
         * Providing null <code>maxSizePerPage</code> results in retrieving maximum of 100
         * records per page. If you provide <code>maxSizePerPage</code> the value must be
         * between 50 and 100. To get the next page result, a provide a pagination token
         * from <code>GetVariablesResult</code> as part of your request. Null pagination
         * token fetches the records from the beginning. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/GetVariables">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetVariablesAsync(const Model::GetVariablesRequest& request, const GetVariablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or updates a detector. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/PutDetector">AWS
         * API Reference</a></p>
         */
        virtual Model::PutDetectorOutcome PutDetector(const Model::PutDetectorRequest& request) const;

        /**
         * <p>Creates or updates a detector. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/PutDetector">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutDetectorOutcomeCallable PutDetectorCallable(const Model::PutDetectorRequest& request) const;

        /**
         * <p>Creates or updates a detector. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/PutDetector">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutDetectorAsync(const Model::PutDetectorRequest& request, const PutDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or updates an Amazon SageMaker model endpoint. You can also use this
         * action to update the configuration of the model endpoint, including the IAM role
         * and/or the mapped variables. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/PutExternalModel">AWS
         * API Reference</a></p>
         */
        virtual Model::PutExternalModelOutcome PutExternalModel(const Model::PutExternalModelRequest& request) const;

        /**
         * <p>Creates or updates an Amazon SageMaker model endpoint. You can also use this
         * action to update the configuration of the model endpoint, including the IAM role
         * and/or the mapped variables. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/PutExternalModel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutExternalModelOutcomeCallable PutExternalModelCallable(const Model::PutExternalModelRequest& request) const;

        /**
         * <p>Creates or updates an Amazon SageMaker model endpoint. You can also use this
         * action to update the configuration of the model endpoint, including the IAM role
         * and/or the mapped variables. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/PutExternalModel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutExternalModelAsync(const Model::PutExternalModelRequest& request, const PutExternalModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or updates a model. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/PutModel">AWS
         * API Reference</a></p>
         */
        virtual Model::PutModelOutcome PutModel(const Model::PutModelRequest& request) const;

        /**
         * <p>Creates or updates a model. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/PutModel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutModelOutcomeCallable PutModelCallable(const Model::PutModelRequest& request) const;

        /**
         * <p>Creates or updates a model. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/PutModel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutModelAsync(const Model::PutModelRequest& request, const PutModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or updates an outcome. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/PutOutcome">AWS
         * API Reference</a></p>
         */
        virtual Model::PutOutcomeOutcome PutOutcome(const Model::PutOutcomeRequest& request) const;

        /**
         * <p>Creates or updates an outcome. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/PutOutcome">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutOutcomeOutcomeCallable PutOutcomeCallable(const Model::PutOutcomeRequest& request) const;

        /**
         * <p>Creates or updates an outcome. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/PutOutcome">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutOutcomeAsync(const Model::PutOutcomeRequest& request, const PutOutcomeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Updates a detector version. The detector version attributes that you can
         * update include models, external model endpoints, rules, and description. You can
         * only update a <code>DRAFT</code> detector version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/UpdateDetectorVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDetectorVersionOutcome UpdateDetectorVersion(const Model::UpdateDetectorVersionRequest& request) const;

        /**
         * <p> Updates a detector version. The detector version attributes that you can
         * update include models, external model endpoints, rules, and description. You can
         * only update a <code>DRAFT</code> detector version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/UpdateDetectorVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDetectorVersionOutcomeCallable UpdateDetectorVersionCallable(const Model::UpdateDetectorVersionRequest& request) const;

        /**
         * <p> Updates a detector version. The detector version attributes that you can
         * update include models, external model endpoints, rules, and description. You can
         * only update a <code>DRAFT</code> detector version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/UpdateDetectorVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Updates the detector version's description. You can update the metadata for
         * any detector version (<code>DRAFT, ACTIVE,</code> or <code>INACTIVE</code>).
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/UpdateDetectorVersionMetadata">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDetectorVersionMetadataOutcomeCallable UpdateDetectorVersionMetadataCallable(const Model::UpdateDetectorVersionMetadataRequest& request) const;

        /**
         * <p>Updates the detector version's description. You can update the metadata for
         * any detector version (<code>DRAFT, ACTIVE,</code> or <code>INACTIVE</code>).
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/UpdateDetectorVersionMetadata">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Updates the detector version’s status. You can perform the following
         * promotions or demotions using <code>UpdateDetectorVersionStatus</code>:
         * <code>DRAFT</code> to <code>ACTIVE</code>, <code>ACTIVE</code> to
         * <code>INACTIVE</code>, and <code>INACTIVE</code> to
         * <code>ACTIVE</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/UpdateDetectorVersionStatus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDetectorVersionStatusOutcomeCallable UpdateDetectorVersionStatusCallable(const Model::UpdateDetectorVersionStatusRequest& request) const;

        /**
         * <p>Updates the detector version’s status. You can perform the following
         * promotions or demotions using <code>UpdateDetectorVersionStatus</code>:
         * <code>DRAFT</code> to <code>ACTIVE</code>, <code>ACTIVE</code> to
         * <code>INACTIVE</code>, and <code>INACTIVE</code> to
         * <code>ACTIVE</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/UpdateDetectorVersionStatus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDetectorVersionStatusAsync(const Model::UpdateDetectorVersionStatusRequest& request, const UpdateDetectorVersionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a model version. You can update the description and status attributes
         * using this action. You can perform the following status updates: </p> <ol> <li>
         * <p>Change the <code>TRAINING_COMPLETE</code> status to <code>ACTIVE</code> </p>
         * </li> <li> <p>Change <code>ACTIVE</code> back to <code>TRAINING_COMPLETE</code>
         * </p> </li> </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/UpdateModelVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateModelVersionOutcome UpdateModelVersion(const Model::UpdateModelVersionRequest& request) const;

        /**
         * <p>Updates a model version. You can update the description and status attributes
         * using this action. You can perform the following status updates: </p> <ol> <li>
         * <p>Change the <code>TRAINING_COMPLETE</code> status to <code>ACTIVE</code> </p>
         * </li> <li> <p>Change <code>ACTIVE</code> back to <code>TRAINING_COMPLETE</code>
         * </p> </li> </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/UpdateModelVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateModelVersionOutcomeCallable UpdateModelVersionCallable(const Model::UpdateModelVersionRequest& request) const;

        /**
         * <p>Updates a model version. You can update the description and status attributes
         * using this action. You can perform the following status updates: </p> <ol> <li>
         * <p>Change the <code>TRAINING_COMPLETE</code> status to <code>ACTIVE</code> </p>
         * </li> <li> <p>Change <code>ACTIVE</code> back to <code>TRAINING_COMPLETE</code>
         * </p> </li> </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/UpdateModelVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateModelVersionAsync(const Model::UpdateModelVersionRequest& request, const UpdateModelVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a rule's metadata. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/UpdateRuleMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRuleMetadataOutcome UpdateRuleMetadata(const Model::UpdateRuleMetadataRequest& request) const;

        /**
         * <p>Updates a rule's metadata. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/UpdateRuleMetadata">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRuleMetadataOutcomeCallable UpdateRuleMetadataCallable(const Model::UpdateRuleMetadataRequest& request) const;

        /**
         * <p>Updates a rule's metadata. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/UpdateRuleMetadata">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRuleMetadataAsync(const Model::UpdateRuleMetadataRequest& request, const UpdateRuleMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a rule version resulting in a new rule version. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/UpdateRuleVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRuleVersionOutcome UpdateRuleVersion(const Model::UpdateRuleVersionRequest& request) const;

        /**
         * <p>Updates a rule version resulting in a new rule version. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/UpdateRuleVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRuleVersionOutcomeCallable UpdateRuleVersionCallable(const Model::UpdateRuleVersionRequest& request) const;

        /**
         * <p>Updates a rule version resulting in a new rule version. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/UpdateRuleVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRuleVersionAsync(const Model::UpdateRuleVersionRequest& request, const UpdateRuleVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a variable.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/UpdateVariable">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVariableOutcome UpdateVariable(const Model::UpdateVariableRequest& request) const;

        /**
         * <p>Updates a variable.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/UpdateVariable">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateVariableOutcomeCallable UpdateVariableCallable(const Model::UpdateVariableRequest& request) const;

        /**
         * <p>Updates a variable.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/UpdateVariable">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateVariableAsync(const Model::UpdateVariableRequest& request, const UpdateVariableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void BatchCreateVariableAsyncHelper(const Model::BatchCreateVariableRequest& request, const BatchCreateVariableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchGetVariableAsyncHelper(const Model::BatchGetVariableRequest& request, const BatchGetVariableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDetectorVersionAsyncHelper(const Model::CreateDetectorVersionRequest& request, const CreateDetectorVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateModelVersionAsyncHelper(const Model::CreateModelVersionRequest& request, const CreateModelVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateRuleAsyncHelper(const Model::CreateRuleRequest& request, const CreateRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateVariableAsyncHelper(const Model::CreateVariableRequest& request, const CreateVariableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDetectorVersionAsyncHelper(const Model::DeleteDetectorVersionRequest& request, const DeleteDetectorVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteEventAsyncHelper(const Model::DeleteEventRequest& request, const DeleteEventResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDetectorAsyncHelper(const Model::DescribeDetectorRequest& request, const DescribeDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeModelVersionsAsyncHelper(const Model::DescribeModelVersionsRequest& request, const DescribeModelVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDetectorVersionAsyncHelper(const Model::GetDetectorVersionRequest& request, const GetDetectorVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDetectorsAsyncHelper(const Model::GetDetectorsRequest& request, const GetDetectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetExternalModelsAsyncHelper(const Model::GetExternalModelsRequest& request, const GetExternalModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetModelVersionAsyncHelper(const Model::GetModelVersionRequest& request, const GetModelVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetModelsAsyncHelper(const Model::GetModelsRequest& request, const GetModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetOutcomesAsyncHelper(const Model::GetOutcomesRequest& request, const GetOutcomesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPredictionAsyncHelper(const Model::GetPredictionRequest& request, const GetPredictionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRulesAsyncHelper(const Model::GetRulesRequest& request, const GetRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetVariablesAsyncHelper(const Model::GetVariablesRequest& request, const GetVariablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutDetectorAsyncHelper(const Model::PutDetectorRequest& request, const PutDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutExternalModelAsyncHelper(const Model::PutExternalModelRequest& request, const PutExternalModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutModelAsyncHelper(const Model::PutModelRequest& request, const PutModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutOutcomeAsyncHelper(const Model::PutOutcomeRequest& request, const PutOutcomeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDetectorVersionAsyncHelper(const Model::UpdateDetectorVersionRequest& request, const UpdateDetectorVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDetectorVersionMetadataAsyncHelper(const Model::UpdateDetectorVersionMetadataRequest& request, const UpdateDetectorVersionMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDetectorVersionStatusAsyncHelper(const Model::UpdateDetectorVersionStatusRequest& request, const UpdateDetectorVersionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateModelVersionAsyncHelper(const Model::UpdateModelVersionRequest& request, const UpdateModelVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateRuleMetadataAsyncHelper(const Model::UpdateRuleMetadataRequest& request, const UpdateRuleMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateRuleVersionAsyncHelper(const Model::UpdateRuleVersionRequest& request, const UpdateRuleVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateVariableAsyncHelper(const Model::UpdateVariableRequest& request, const UpdateVariableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace FraudDetector
} // namespace Aws
