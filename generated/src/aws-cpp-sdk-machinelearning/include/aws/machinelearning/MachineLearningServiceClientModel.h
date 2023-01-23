/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/machinelearning/MachineLearningErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/machinelearning/MachineLearningEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in MachineLearningClient header */
#include <aws/machinelearning/model/AddTagsResult.h>
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
#include <aws/machinelearning/model/DeleteTagsResult.h>
#include <aws/machinelearning/model/DescribeBatchPredictionsResult.h>
#include <aws/machinelearning/model/DescribeDataSourcesResult.h>
#include <aws/machinelearning/model/DescribeEvaluationsResult.h>
#include <aws/machinelearning/model/DescribeMLModelsResult.h>
#include <aws/machinelearning/model/DescribeTagsResult.h>
#include <aws/machinelearning/model/GetBatchPredictionResult.h>
#include <aws/machinelearning/model/GetDataSourceResult.h>
#include <aws/machinelearning/model/GetEvaluationResult.h>
#include <aws/machinelearning/model/GetMLModelResult.h>
#include <aws/machinelearning/model/PredictResult.h>
#include <aws/machinelearning/model/UpdateBatchPredictionResult.h>
#include <aws/machinelearning/model/UpdateDataSourceResult.h>
#include <aws/machinelearning/model/UpdateEvaluationResult.h>
#include <aws/machinelearning/model/UpdateMLModelResult.h>
/* End of service model headers required in MachineLearningClient header */

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

  namespace MachineLearning
  {
    using MachineLearningClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using MachineLearningEndpointProviderBase = Aws::MachineLearning::Endpoint::MachineLearningEndpointProviderBase;
    using MachineLearningEndpointProvider = Aws::MachineLearning::Endpoint::MachineLearningEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in MachineLearningClient header */
      class AddTagsRequest;
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
      class DeleteTagsRequest;
      class DescribeBatchPredictionsRequest;
      class DescribeDataSourcesRequest;
      class DescribeEvaluationsRequest;
      class DescribeMLModelsRequest;
      class DescribeTagsRequest;
      class GetBatchPredictionRequest;
      class GetDataSourceRequest;
      class GetEvaluationRequest;
      class GetMLModelRequest;
      class PredictRequest;
      class UpdateBatchPredictionRequest;
      class UpdateDataSourceRequest;
      class UpdateEvaluationRequest;
      class UpdateMLModelRequest;
      /* End of service model forward declarations required in MachineLearningClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AddTagsResult, MachineLearningError> AddTagsOutcome;
      typedef Aws::Utils::Outcome<CreateBatchPredictionResult, MachineLearningError> CreateBatchPredictionOutcome;
      typedef Aws::Utils::Outcome<CreateDataSourceFromRDSResult, MachineLearningError> CreateDataSourceFromRDSOutcome;
      typedef Aws::Utils::Outcome<CreateDataSourceFromRedshiftResult, MachineLearningError> CreateDataSourceFromRedshiftOutcome;
      typedef Aws::Utils::Outcome<CreateDataSourceFromS3Result, MachineLearningError> CreateDataSourceFromS3Outcome;
      typedef Aws::Utils::Outcome<CreateEvaluationResult, MachineLearningError> CreateEvaluationOutcome;
      typedef Aws::Utils::Outcome<CreateMLModelResult, MachineLearningError> CreateMLModelOutcome;
      typedef Aws::Utils::Outcome<CreateRealtimeEndpointResult, MachineLearningError> CreateRealtimeEndpointOutcome;
      typedef Aws::Utils::Outcome<DeleteBatchPredictionResult, MachineLearningError> DeleteBatchPredictionOutcome;
      typedef Aws::Utils::Outcome<DeleteDataSourceResult, MachineLearningError> DeleteDataSourceOutcome;
      typedef Aws::Utils::Outcome<DeleteEvaluationResult, MachineLearningError> DeleteEvaluationOutcome;
      typedef Aws::Utils::Outcome<DeleteMLModelResult, MachineLearningError> DeleteMLModelOutcome;
      typedef Aws::Utils::Outcome<DeleteRealtimeEndpointResult, MachineLearningError> DeleteRealtimeEndpointOutcome;
      typedef Aws::Utils::Outcome<DeleteTagsResult, MachineLearningError> DeleteTagsOutcome;
      typedef Aws::Utils::Outcome<DescribeBatchPredictionsResult, MachineLearningError> DescribeBatchPredictionsOutcome;
      typedef Aws::Utils::Outcome<DescribeDataSourcesResult, MachineLearningError> DescribeDataSourcesOutcome;
      typedef Aws::Utils::Outcome<DescribeEvaluationsResult, MachineLearningError> DescribeEvaluationsOutcome;
      typedef Aws::Utils::Outcome<DescribeMLModelsResult, MachineLearningError> DescribeMLModelsOutcome;
      typedef Aws::Utils::Outcome<DescribeTagsResult, MachineLearningError> DescribeTagsOutcome;
      typedef Aws::Utils::Outcome<GetBatchPredictionResult, MachineLearningError> GetBatchPredictionOutcome;
      typedef Aws::Utils::Outcome<GetDataSourceResult, MachineLearningError> GetDataSourceOutcome;
      typedef Aws::Utils::Outcome<GetEvaluationResult, MachineLearningError> GetEvaluationOutcome;
      typedef Aws::Utils::Outcome<GetMLModelResult, MachineLearningError> GetMLModelOutcome;
      typedef Aws::Utils::Outcome<PredictResult, MachineLearningError> PredictOutcome;
      typedef Aws::Utils::Outcome<UpdateBatchPredictionResult, MachineLearningError> UpdateBatchPredictionOutcome;
      typedef Aws::Utils::Outcome<UpdateDataSourceResult, MachineLearningError> UpdateDataSourceOutcome;
      typedef Aws::Utils::Outcome<UpdateEvaluationResult, MachineLearningError> UpdateEvaluationOutcome;
      typedef Aws::Utils::Outcome<UpdateMLModelResult, MachineLearningError> UpdateMLModelOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AddTagsOutcome> AddTagsOutcomeCallable;
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
      typedef std::future<DeleteTagsOutcome> DeleteTagsOutcomeCallable;
      typedef std::future<DescribeBatchPredictionsOutcome> DescribeBatchPredictionsOutcomeCallable;
      typedef std::future<DescribeDataSourcesOutcome> DescribeDataSourcesOutcomeCallable;
      typedef std::future<DescribeEvaluationsOutcome> DescribeEvaluationsOutcomeCallable;
      typedef std::future<DescribeMLModelsOutcome> DescribeMLModelsOutcomeCallable;
      typedef std::future<DescribeTagsOutcome> DescribeTagsOutcomeCallable;
      typedef std::future<GetBatchPredictionOutcome> GetBatchPredictionOutcomeCallable;
      typedef std::future<GetDataSourceOutcome> GetDataSourceOutcomeCallable;
      typedef std::future<GetEvaluationOutcome> GetEvaluationOutcomeCallable;
      typedef std::future<GetMLModelOutcome> GetMLModelOutcomeCallable;
      typedef std::future<PredictOutcome> PredictOutcomeCallable;
      typedef std::future<UpdateBatchPredictionOutcome> UpdateBatchPredictionOutcomeCallable;
      typedef std::future<UpdateDataSourceOutcome> UpdateDataSourceOutcomeCallable;
      typedef std::future<UpdateEvaluationOutcome> UpdateEvaluationOutcomeCallable;
      typedef std::future<UpdateMLModelOutcome> UpdateMLModelOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class MachineLearningClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const MachineLearningClient*, const Model::AddTagsRequest&, const Model::AddTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddTagsResponseReceivedHandler;
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
    typedef std::function<void(const MachineLearningClient*, const Model::DeleteTagsRequest&, const Model::DeleteTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTagsResponseReceivedHandler;
    typedef std::function<void(const MachineLearningClient*, const Model::DescribeBatchPredictionsRequest&, const Model::DescribeBatchPredictionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeBatchPredictionsResponseReceivedHandler;
    typedef std::function<void(const MachineLearningClient*, const Model::DescribeDataSourcesRequest&, const Model::DescribeDataSourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDataSourcesResponseReceivedHandler;
    typedef std::function<void(const MachineLearningClient*, const Model::DescribeEvaluationsRequest&, const Model::DescribeEvaluationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEvaluationsResponseReceivedHandler;
    typedef std::function<void(const MachineLearningClient*, const Model::DescribeMLModelsRequest&, const Model::DescribeMLModelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMLModelsResponseReceivedHandler;
    typedef std::function<void(const MachineLearningClient*, const Model::DescribeTagsRequest&, const Model::DescribeTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTagsResponseReceivedHandler;
    typedef std::function<void(const MachineLearningClient*, const Model::GetBatchPredictionRequest&, const Model::GetBatchPredictionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBatchPredictionResponseReceivedHandler;
    typedef std::function<void(const MachineLearningClient*, const Model::GetDataSourceRequest&, const Model::GetDataSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDataSourceResponseReceivedHandler;
    typedef std::function<void(const MachineLearningClient*, const Model::GetEvaluationRequest&, const Model::GetEvaluationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEvaluationResponseReceivedHandler;
    typedef std::function<void(const MachineLearningClient*, const Model::GetMLModelRequest&, const Model::GetMLModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMLModelResponseReceivedHandler;
    typedef std::function<void(const MachineLearningClient*, const Model::PredictRequest&, const Model::PredictOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PredictResponseReceivedHandler;
    typedef std::function<void(const MachineLearningClient*, const Model::UpdateBatchPredictionRequest&, const Model::UpdateBatchPredictionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateBatchPredictionResponseReceivedHandler;
    typedef std::function<void(const MachineLearningClient*, const Model::UpdateDataSourceRequest&, const Model::UpdateDataSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDataSourceResponseReceivedHandler;
    typedef std::function<void(const MachineLearningClient*, const Model::UpdateEvaluationRequest&, const Model::UpdateEvaluationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEvaluationResponseReceivedHandler;
    typedef std::function<void(const MachineLearningClient*, const Model::UpdateMLModelRequest&, const Model::UpdateMLModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMLModelResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace MachineLearning
} // namespace Aws
