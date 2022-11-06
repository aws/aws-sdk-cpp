/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/forecast/ForecastServiceErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/forecast/ForecastServiceEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in ForecastServiceClient header */
#include <aws/forecast/model/CreateAutoPredictorResult.h>
#include <aws/forecast/model/CreateDatasetResult.h>
#include <aws/forecast/model/CreateDatasetGroupResult.h>
#include <aws/forecast/model/CreateDatasetImportJobResult.h>
#include <aws/forecast/model/CreateExplainabilityResult.h>
#include <aws/forecast/model/CreateExplainabilityExportResult.h>
#include <aws/forecast/model/CreateForecastResult.h>
#include <aws/forecast/model/CreateForecastExportJobResult.h>
#include <aws/forecast/model/CreateMonitorResult.h>
#include <aws/forecast/model/CreatePredictorResult.h>
#include <aws/forecast/model/CreatePredictorBacktestExportJobResult.h>
#include <aws/forecast/model/CreateWhatIfAnalysisResult.h>
#include <aws/forecast/model/CreateWhatIfForecastResult.h>
#include <aws/forecast/model/CreateWhatIfForecastExportResult.h>
#include <aws/forecast/model/DescribeAutoPredictorResult.h>
#include <aws/forecast/model/DescribeDatasetResult.h>
#include <aws/forecast/model/DescribeDatasetGroupResult.h>
#include <aws/forecast/model/DescribeDatasetImportJobResult.h>
#include <aws/forecast/model/DescribeExplainabilityResult.h>
#include <aws/forecast/model/DescribeExplainabilityExportResult.h>
#include <aws/forecast/model/DescribeForecastResult.h>
#include <aws/forecast/model/DescribeForecastExportJobResult.h>
#include <aws/forecast/model/DescribeMonitorResult.h>
#include <aws/forecast/model/DescribePredictorResult.h>
#include <aws/forecast/model/DescribePredictorBacktestExportJobResult.h>
#include <aws/forecast/model/DescribeWhatIfAnalysisResult.h>
#include <aws/forecast/model/DescribeWhatIfForecastResult.h>
#include <aws/forecast/model/DescribeWhatIfForecastExportResult.h>
#include <aws/forecast/model/GetAccuracyMetricsResult.h>
#include <aws/forecast/model/ListDatasetGroupsResult.h>
#include <aws/forecast/model/ListDatasetImportJobsResult.h>
#include <aws/forecast/model/ListDatasetsResult.h>
#include <aws/forecast/model/ListExplainabilitiesResult.h>
#include <aws/forecast/model/ListExplainabilityExportsResult.h>
#include <aws/forecast/model/ListForecastExportJobsResult.h>
#include <aws/forecast/model/ListForecastsResult.h>
#include <aws/forecast/model/ListMonitorEvaluationsResult.h>
#include <aws/forecast/model/ListMonitorsResult.h>
#include <aws/forecast/model/ListPredictorBacktestExportJobsResult.h>
#include <aws/forecast/model/ListPredictorsResult.h>
#include <aws/forecast/model/ListTagsForResourceResult.h>
#include <aws/forecast/model/ListWhatIfAnalysesResult.h>
#include <aws/forecast/model/ListWhatIfForecastExportsResult.h>
#include <aws/forecast/model/ListWhatIfForecastsResult.h>
#include <aws/forecast/model/TagResourceResult.h>
#include <aws/forecast/model/UntagResourceResult.h>
#include <aws/forecast/model/UpdateDatasetGroupResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in ForecastServiceClient header */

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
    using ForecastServiceClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using ForecastServiceEndpointProviderBase = Aws::ForecastService::Endpoint::ForecastServiceEndpointProviderBase;
    using ForecastServiceEndpointProvider = Aws::ForecastService::Endpoint::ForecastServiceEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in ForecastServiceClient header */
      class CreateAutoPredictorRequest;
      class CreateDatasetRequest;
      class CreateDatasetGroupRequest;
      class CreateDatasetImportJobRequest;
      class CreateExplainabilityRequest;
      class CreateExplainabilityExportRequest;
      class CreateForecastRequest;
      class CreateForecastExportJobRequest;
      class CreateMonitorRequest;
      class CreatePredictorRequest;
      class CreatePredictorBacktestExportJobRequest;
      class CreateWhatIfAnalysisRequest;
      class CreateWhatIfForecastRequest;
      class CreateWhatIfForecastExportRequest;
      class DeleteDatasetRequest;
      class DeleteDatasetGroupRequest;
      class DeleteDatasetImportJobRequest;
      class DeleteExplainabilityRequest;
      class DeleteExplainabilityExportRequest;
      class DeleteForecastRequest;
      class DeleteForecastExportJobRequest;
      class DeleteMonitorRequest;
      class DeletePredictorRequest;
      class DeletePredictorBacktestExportJobRequest;
      class DeleteResourceTreeRequest;
      class DeleteWhatIfAnalysisRequest;
      class DeleteWhatIfForecastRequest;
      class DeleteWhatIfForecastExportRequest;
      class DescribeAutoPredictorRequest;
      class DescribeDatasetRequest;
      class DescribeDatasetGroupRequest;
      class DescribeDatasetImportJobRequest;
      class DescribeExplainabilityRequest;
      class DescribeExplainabilityExportRequest;
      class DescribeForecastRequest;
      class DescribeForecastExportJobRequest;
      class DescribeMonitorRequest;
      class DescribePredictorRequest;
      class DescribePredictorBacktestExportJobRequest;
      class DescribeWhatIfAnalysisRequest;
      class DescribeWhatIfForecastRequest;
      class DescribeWhatIfForecastExportRequest;
      class GetAccuracyMetricsRequest;
      class ListDatasetGroupsRequest;
      class ListDatasetImportJobsRequest;
      class ListDatasetsRequest;
      class ListExplainabilitiesRequest;
      class ListExplainabilityExportsRequest;
      class ListForecastExportJobsRequest;
      class ListForecastsRequest;
      class ListMonitorEvaluationsRequest;
      class ListMonitorsRequest;
      class ListPredictorBacktestExportJobsRequest;
      class ListPredictorsRequest;
      class ListTagsForResourceRequest;
      class ListWhatIfAnalysesRequest;
      class ListWhatIfForecastExportsRequest;
      class ListWhatIfForecastsRequest;
      class ResumeResourceRequest;
      class StopResourceRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateDatasetGroupRequest;
      /* End of service model forward declarations required in ForecastServiceClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateAutoPredictorResult, ForecastServiceError> CreateAutoPredictorOutcome;
      typedef Aws::Utils::Outcome<CreateDatasetResult, ForecastServiceError> CreateDatasetOutcome;
      typedef Aws::Utils::Outcome<CreateDatasetGroupResult, ForecastServiceError> CreateDatasetGroupOutcome;
      typedef Aws::Utils::Outcome<CreateDatasetImportJobResult, ForecastServiceError> CreateDatasetImportJobOutcome;
      typedef Aws::Utils::Outcome<CreateExplainabilityResult, ForecastServiceError> CreateExplainabilityOutcome;
      typedef Aws::Utils::Outcome<CreateExplainabilityExportResult, ForecastServiceError> CreateExplainabilityExportOutcome;
      typedef Aws::Utils::Outcome<CreateForecastResult, ForecastServiceError> CreateForecastOutcome;
      typedef Aws::Utils::Outcome<CreateForecastExportJobResult, ForecastServiceError> CreateForecastExportJobOutcome;
      typedef Aws::Utils::Outcome<CreateMonitorResult, ForecastServiceError> CreateMonitorOutcome;
      typedef Aws::Utils::Outcome<CreatePredictorResult, ForecastServiceError> CreatePredictorOutcome;
      typedef Aws::Utils::Outcome<CreatePredictorBacktestExportJobResult, ForecastServiceError> CreatePredictorBacktestExportJobOutcome;
      typedef Aws::Utils::Outcome<CreateWhatIfAnalysisResult, ForecastServiceError> CreateWhatIfAnalysisOutcome;
      typedef Aws::Utils::Outcome<CreateWhatIfForecastResult, ForecastServiceError> CreateWhatIfForecastOutcome;
      typedef Aws::Utils::Outcome<CreateWhatIfForecastExportResult, ForecastServiceError> CreateWhatIfForecastExportOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ForecastServiceError> DeleteDatasetOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ForecastServiceError> DeleteDatasetGroupOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ForecastServiceError> DeleteDatasetImportJobOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ForecastServiceError> DeleteExplainabilityOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ForecastServiceError> DeleteExplainabilityExportOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ForecastServiceError> DeleteForecastOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ForecastServiceError> DeleteForecastExportJobOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ForecastServiceError> DeleteMonitorOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ForecastServiceError> DeletePredictorOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ForecastServiceError> DeletePredictorBacktestExportJobOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ForecastServiceError> DeleteResourceTreeOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ForecastServiceError> DeleteWhatIfAnalysisOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ForecastServiceError> DeleteWhatIfForecastOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ForecastServiceError> DeleteWhatIfForecastExportOutcome;
      typedef Aws::Utils::Outcome<DescribeAutoPredictorResult, ForecastServiceError> DescribeAutoPredictorOutcome;
      typedef Aws::Utils::Outcome<DescribeDatasetResult, ForecastServiceError> DescribeDatasetOutcome;
      typedef Aws::Utils::Outcome<DescribeDatasetGroupResult, ForecastServiceError> DescribeDatasetGroupOutcome;
      typedef Aws::Utils::Outcome<DescribeDatasetImportJobResult, ForecastServiceError> DescribeDatasetImportJobOutcome;
      typedef Aws::Utils::Outcome<DescribeExplainabilityResult, ForecastServiceError> DescribeExplainabilityOutcome;
      typedef Aws::Utils::Outcome<DescribeExplainabilityExportResult, ForecastServiceError> DescribeExplainabilityExportOutcome;
      typedef Aws::Utils::Outcome<DescribeForecastResult, ForecastServiceError> DescribeForecastOutcome;
      typedef Aws::Utils::Outcome<DescribeForecastExportJobResult, ForecastServiceError> DescribeForecastExportJobOutcome;
      typedef Aws::Utils::Outcome<DescribeMonitorResult, ForecastServiceError> DescribeMonitorOutcome;
      typedef Aws::Utils::Outcome<DescribePredictorResult, ForecastServiceError> DescribePredictorOutcome;
      typedef Aws::Utils::Outcome<DescribePredictorBacktestExportJobResult, ForecastServiceError> DescribePredictorBacktestExportJobOutcome;
      typedef Aws::Utils::Outcome<DescribeWhatIfAnalysisResult, ForecastServiceError> DescribeWhatIfAnalysisOutcome;
      typedef Aws::Utils::Outcome<DescribeWhatIfForecastResult, ForecastServiceError> DescribeWhatIfForecastOutcome;
      typedef Aws::Utils::Outcome<DescribeWhatIfForecastExportResult, ForecastServiceError> DescribeWhatIfForecastExportOutcome;
      typedef Aws::Utils::Outcome<GetAccuracyMetricsResult, ForecastServiceError> GetAccuracyMetricsOutcome;
      typedef Aws::Utils::Outcome<ListDatasetGroupsResult, ForecastServiceError> ListDatasetGroupsOutcome;
      typedef Aws::Utils::Outcome<ListDatasetImportJobsResult, ForecastServiceError> ListDatasetImportJobsOutcome;
      typedef Aws::Utils::Outcome<ListDatasetsResult, ForecastServiceError> ListDatasetsOutcome;
      typedef Aws::Utils::Outcome<ListExplainabilitiesResult, ForecastServiceError> ListExplainabilitiesOutcome;
      typedef Aws::Utils::Outcome<ListExplainabilityExportsResult, ForecastServiceError> ListExplainabilityExportsOutcome;
      typedef Aws::Utils::Outcome<ListForecastExportJobsResult, ForecastServiceError> ListForecastExportJobsOutcome;
      typedef Aws::Utils::Outcome<ListForecastsResult, ForecastServiceError> ListForecastsOutcome;
      typedef Aws::Utils::Outcome<ListMonitorEvaluationsResult, ForecastServiceError> ListMonitorEvaluationsOutcome;
      typedef Aws::Utils::Outcome<ListMonitorsResult, ForecastServiceError> ListMonitorsOutcome;
      typedef Aws::Utils::Outcome<ListPredictorBacktestExportJobsResult, ForecastServiceError> ListPredictorBacktestExportJobsOutcome;
      typedef Aws::Utils::Outcome<ListPredictorsResult, ForecastServiceError> ListPredictorsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, ForecastServiceError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListWhatIfAnalysesResult, ForecastServiceError> ListWhatIfAnalysesOutcome;
      typedef Aws::Utils::Outcome<ListWhatIfForecastExportsResult, ForecastServiceError> ListWhatIfForecastExportsOutcome;
      typedef Aws::Utils::Outcome<ListWhatIfForecastsResult, ForecastServiceError> ListWhatIfForecastsOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ForecastServiceError> ResumeResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ForecastServiceError> StopResourceOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, ForecastServiceError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, ForecastServiceError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateDatasetGroupResult, ForecastServiceError> UpdateDatasetGroupOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateAutoPredictorOutcome> CreateAutoPredictorOutcomeCallable;
      typedef std::future<CreateDatasetOutcome> CreateDatasetOutcomeCallable;
      typedef std::future<CreateDatasetGroupOutcome> CreateDatasetGroupOutcomeCallable;
      typedef std::future<CreateDatasetImportJobOutcome> CreateDatasetImportJobOutcomeCallable;
      typedef std::future<CreateExplainabilityOutcome> CreateExplainabilityOutcomeCallable;
      typedef std::future<CreateExplainabilityExportOutcome> CreateExplainabilityExportOutcomeCallable;
      typedef std::future<CreateForecastOutcome> CreateForecastOutcomeCallable;
      typedef std::future<CreateForecastExportJobOutcome> CreateForecastExportJobOutcomeCallable;
      typedef std::future<CreateMonitorOutcome> CreateMonitorOutcomeCallable;
      typedef std::future<CreatePredictorOutcome> CreatePredictorOutcomeCallable;
      typedef std::future<CreatePredictorBacktestExportJobOutcome> CreatePredictorBacktestExportJobOutcomeCallable;
      typedef std::future<CreateWhatIfAnalysisOutcome> CreateWhatIfAnalysisOutcomeCallable;
      typedef std::future<CreateWhatIfForecastOutcome> CreateWhatIfForecastOutcomeCallable;
      typedef std::future<CreateWhatIfForecastExportOutcome> CreateWhatIfForecastExportOutcomeCallable;
      typedef std::future<DeleteDatasetOutcome> DeleteDatasetOutcomeCallable;
      typedef std::future<DeleteDatasetGroupOutcome> DeleteDatasetGroupOutcomeCallable;
      typedef std::future<DeleteDatasetImportJobOutcome> DeleteDatasetImportJobOutcomeCallable;
      typedef std::future<DeleteExplainabilityOutcome> DeleteExplainabilityOutcomeCallable;
      typedef std::future<DeleteExplainabilityExportOutcome> DeleteExplainabilityExportOutcomeCallable;
      typedef std::future<DeleteForecastOutcome> DeleteForecastOutcomeCallable;
      typedef std::future<DeleteForecastExportJobOutcome> DeleteForecastExportJobOutcomeCallable;
      typedef std::future<DeleteMonitorOutcome> DeleteMonitorOutcomeCallable;
      typedef std::future<DeletePredictorOutcome> DeletePredictorOutcomeCallable;
      typedef std::future<DeletePredictorBacktestExportJobOutcome> DeletePredictorBacktestExportJobOutcomeCallable;
      typedef std::future<DeleteResourceTreeOutcome> DeleteResourceTreeOutcomeCallable;
      typedef std::future<DeleteWhatIfAnalysisOutcome> DeleteWhatIfAnalysisOutcomeCallable;
      typedef std::future<DeleteWhatIfForecastOutcome> DeleteWhatIfForecastOutcomeCallable;
      typedef std::future<DeleteWhatIfForecastExportOutcome> DeleteWhatIfForecastExportOutcomeCallable;
      typedef std::future<DescribeAutoPredictorOutcome> DescribeAutoPredictorOutcomeCallable;
      typedef std::future<DescribeDatasetOutcome> DescribeDatasetOutcomeCallable;
      typedef std::future<DescribeDatasetGroupOutcome> DescribeDatasetGroupOutcomeCallable;
      typedef std::future<DescribeDatasetImportJobOutcome> DescribeDatasetImportJobOutcomeCallable;
      typedef std::future<DescribeExplainabilityOutcome> DescribeExplainabilityOutcomeCallable;
      typedef std::future<DescribeExplainabilityExportOutcome> DescribeExplainabilityExportOutcomeCallable;
      typedef std::future<DescribeForecastOutcome> DescribeForecastOutcomeCallable;
      typedef std::future<DescribeForecastExportJobOutcome> DescribeForecastExportJobOutcomeCallable;
      typedef std::future<DescribeMonitorOutcome> DescribeMonitorOutcomeCallable;
      typedef std::future<DescribePredictorOutcome> DescribePredictorOutcomeCallable;
      typedef std::future<DescribePredictorBacktestExportJobOutcome> DescribePredictorBacktestExportJobOutcomeCallable;
      typedef std::future<DescribeWhatIfAnalysisOutcome> DescribeWhatIfAnalysisOutcomeCallable;
      typedef std::future<DescribeWhatIfForecastOutcome> DescribeWhatIfForecastOutcomeCallable;
      typedef std::future<DescribeWhatIfForecastExportOutcome> DescribeWhatIfForecastExportOutcomeCallable;
      typedef std::future<GetAccuracyMetricsOutcome> GetAccuracyMetricsOutcomeCallable;
      typedef std::future<ListDatasetGroupsOutcome> ListDatasetGroupsOutcomeCallable;
      typedef std::future<ListDatasetImportJobsOutcome> ListDatasetImportJobsOutcomeCallable;
      typedef std::future<ListDatasetsOutcome> ListDatasetsOutcomeCallable;
      typedef std::future<ListExplainabilitiesOutcome> ListExplainabilitiesOutcomeCallable;
      typedef std::future<ListExplainabilityExportsOutcome> ListExplainabilityExportsOutcomeCallable;
      typedef std::future<ListForecastExportJobsOutcome> ListForecastExportJobsOutcomeCallable;
      typedef std::future<ListForecastsOutcome> ListForecastsOutcomeCallable;
      typedef std::future<ListMonitorEvaluationsOutcome> ListMonitorEvaluationsOutcomeCallable;
      typedef std::future<ListMonitorsOutcome> ListMonitorsOutcomeCallable;
      typedef std::future<ListPredictorBacktestExportJobsOutcome> ListPredictorBacktestExportJobsOutcomeCallable;
      typedef std::future<ListPredictorsOutcome> ListPredictorsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListWhatIfAnalysesOutcome> ListWhatIfAnalysesOutcomeCallable;
      typedef std::future<ListWhatIfForecastExportsOutcome> ListWhatIfForecastExportsOutcomeCallable;
      typedef std::future<ListWhatIfForecastsOutcome> ListWhatIfForecastsOutcomeCallable;
      typedef std::future<ResumeResourceOutcome> ResumeResourceOutcomeCallable;
      typedef std::future<StopResourceOutcome> StopResourceOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateDatasetGroupOutcome> UpdateDatasetGroupOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class ForecastServiceClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const ForecastServiceClient*, const Model::CreateAutoPredictorRequest&, const Model::CreateAutoPredictorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAutoPredictorResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::CreateDatasetRequest&, const Model::CreateDatasetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDatasetResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::CreateDatasetGroupRequest&, const Model::CreateDatasetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDatasetGroupResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::CreateDatasetImportJobRequest&, const Model::CreateDatasetImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDatasetImportJobResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::CreateExplainabilityRequest&, const Model::CreateExplainabilityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateExplainabilityResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::CreateExplainabilityExportRequest&, const Model::CreateExplainabilityExportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateExplainabilityExportResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::CreateForecastRequest&, const Model::CreateForecastOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateForecastResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::CreateForecastExportJobRequest&, const Model::CreateForecastExportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateForecastExportJobResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::CreateMonitorRequest&, const Model::CreateMonitorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMonitorResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::CreatePredictorRequest&, const Model::CreatePredictorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePredictorResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::CreatePredictorBacktestExportJobRequest&, const Model::CreatePredictorBacktestExportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePredictorBacktestExportJobResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::CreateWhatIfAnalysisRequest&, const Model::CreateWhatIfAnalysisOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWhatIfAnalysisResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::CreateWhatIfForecastRequest&, const Model::CreateWhatIfForecastOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWhatIfForecastResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::CreateWhatIfForecastExportRequest&, const Model::CreateWhatIfForecastExportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWhatIfForecastExportResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::DeleteDatasetRequest&, const Model::DeleteDatasetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDatasetResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::DeleteDatasetGroupRequest&, const Model::DeleteDatasetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDatasetGroupResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::DeleteDatasetImportJobRequest&, const Model::DeleteDatasetImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDatasetImportJobResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::DeleteExplainabilityRequest&, const Model::DeleteExplainabilityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteExplainabilityResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::DeleteExplainabilityExportRequest&, const Model::DeleteExplainabilityExportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteExplainabilityExportResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::DeleteForecastRequest&, const Model::DeleteForecastOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteForecastResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::DeleteForecastExportJobRequest&, const Model::DeleteForecastExportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteForecastExportJobResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::DeleteMonitorRequest&, const Model::DeleteMonitorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMonitorResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::DeletePredictorRequest&, const Model::DeletePredictorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePredictorResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::DeletePredictorBacktestExportJobRequest&, const Model::DeletePredictorBacktestExportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePredictorBacktestExportJobResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::DeleteResourceTreeRequest&, const Model::DeleteResourceTreeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteResourceTreeResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::DeleteWhatIfAnalysisRequest&, const Model::DeleteWhatIfAnalysisOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWhatIfAnalysisResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::DeleteWhatIfForecastRequest&, const Model::DeleteWhatIfForecastOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWhatIfForecastResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::DeleteWhatIfForecastExportRequest&, const Model::DeleteWhatIfForecastExportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWhatIfForecastExportResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::DescribeAutoPredictorRequest&, const Model::DescribeAutoPredictorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAutoPredictorResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::DescribeDatasetRequest&, const Model::DescribeDatasetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDatasetResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::DescribeDatasetGroupRequest&, const Model::DescribeDatasetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDatasetGroupResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::DescribeDatasetImportJobRequest&, const Model::DescribeDatasetImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDatasetImportJobResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::DescribeExplainabilityRequest&, const Model::DescribeExplainabilityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeExplainabilityResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::DescribeExplainabilityExportRequest&, const Model::DescribeExplainabilityExportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeExplainabilityExportResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::DescribeForecastRequest&, const Model::DescribeForecastOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeForecastResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::DescribeForecastExportJobRequest&, const Model::DescribeForecastExportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeForecastExportJobResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::DescribeMonitorRequest&, const Model::DescribeMonitorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMonitorResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::DescribePredictorRequest&, const Model::DescribePredictorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePredictorResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::DescribePredictorBacktestExportJobRequest&, const Model::DescribePredictorBacktestExportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePredictorBacktestExportJobResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::DescribeWhatIfAnalysisRequest&, const Model::DescribeWhatIfAnalysisOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeWhatIfAnalysisResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::DescribeWhatIfForecastRequest&, const Model::DescribeWhatIfForecastOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeWhatIfForecastResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::DescribeWhatIfForecastExportRequest&, const Model::DescribeWhatIfForecastExportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeWhatIfForecastExportResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::GetAccuracyMetricsRequest&, const Model::GetAccuracyMetricsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccuracyMetricsResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::ListDatasetGroupsRequest&, const Model::ListDatasetGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDatasetGroupsResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::ListDatasetImportJobsRequest&, const Model::ListDatasetImportJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDatasetImportJobsResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::ListDatasetsRequest&, const Model::ListDatasetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDatasetsResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::ListExplainabilitiesRequest&, const Model::ListExplainabilitiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListExplainabilitiesResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::ListExplainabilityExportsRequest&, const Model::ListExplainabilityExportsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListExplainabilityExportsResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::ListForecastExportJobsRequest&, const Model::ListForecastExportJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListForecastExportJobsResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::ListForecastsRequest&, const Model::ListForecastsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListForecastsResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::ListMonitorEvaluationsRequest&, const Model::ListMonitorEvaluationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMonitorEvaluationsResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::ListMonitorsRequest&, const Model::ListMonitorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMonitorsResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::ListPredictorBacktestExportJobsRequest&, const Model::ListPredictorBacktestExportJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPredictorBacktestExportJobsResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::ListPredictorsRequest&, const Model::ListPredictorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPredictorsResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::ListWhatIfAnalysesRequest&, const Model::ListWhatIfAnalysesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListWhatIfAnalysesResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::ListWhatIfForecastExportsRequest&, const Model::ListWhatIfForecastExportsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListWhatIfForecastExportsResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::ListWhatIfForecastsRequest&, const Model::ListWhatIfForecastsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListWhatIfForecastsResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::ResumeResourceRequest&, const Model::ResumeResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResumeResourceResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::StopResourceRequest&, const Model::StopResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopResourceResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const ForecastServiceClient*, const Model::UpdateDatasetGroupRequest&, const Model::UpdateDatasetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDatasetGroupResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace ForecastService
} // namespace Aws
