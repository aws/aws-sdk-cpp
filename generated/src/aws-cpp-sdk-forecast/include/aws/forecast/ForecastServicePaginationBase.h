/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/forecast/model/ListDatasetGroupsPaginationTraits.h>
#include <aws/forecast/model/ListDatasetImportJobsPaginationTraits.h>
#include <aws/forecast/model/ListDatasetsPaginationTraits.h>
#include <aws/forecast/model/ListExplainabilitiesPaginationTraits.h>
#include <aws/forecast/model/ListExplainabilityExportsPaginationTraits.h>
#include <aws/forecast/model/ListForecastExportJobsPaginationTraits.h>
#include <aws/forecast/model/ListForecastsPaginationTraits.h>
#include <aws/forecast/model/ListMonitorEvaluationsPaginationTraits.h>
#include <aws/forecast/model/ListMonitorsPaginationTraits.h>
#include <aws/forecast/model/ListPredictorBacktestExportJobsPaginationTraits.h>
#include <aws/forecast/model/ListPredictorsPaginationTraits.h>
#include <aws/forecast/model/ListWhatIfAnalysesPaginationTraits.h>
#include <aws/forecast/model/ListWhatIfForecastExportsPaginationTraits.h>
#include <aws/forecast/model/ListWhatIfForecastsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace ForecastService {

class ForecastServiceClient;

template <typename DerivedClient>
class ForecastServicePaginationBase {
 public:
  /**
   * Create a paginator for ListDatasetGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDatasetGroupsRequest,
                                    Pagination::ListDatasetGroupsPaginationTraits<DerivedClient>>
  ListDatasetGroupsPaginator(const Model::ListDatasetGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDatasetGroupsRequest,
                                             Pagination::ListDatasetGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDatasetImportJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDatasetImportJobsRequest,
                                    Pagination::ListDatasetImportJobsPaginationTraits<DerivedClient>>
  ListDatasetImportJobsPaginator(const Model::ListDatasetImportJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDatasetImportJobsRequest,
                                             Pagination::ListDatasetImportJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDatasets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDatasetsRequest, Pagination::ListDatasetsPaginationTraits<DerivedClient>>
  ListDatasetsPaginator(const Model::ListDatasetsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDatasetsRequest,
                                             Pagination::ListDatasetsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListExplainabilities operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListExplainabilitiesRequest,
                                    Pagination::ListExplainabilitiesPaginationTraits<DerivedClient>>
  ListExplainabilitiesPaginator(const Model::ListExplainabilitiesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListExplainabilitiesRequest,
                                             Pagination::ListExplainabilitiesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListExplainabilityExports operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListExplainabilityExportsRequest,
                                    Pagination::ListExplainabilityExportsPaginationTraits<DerivedClient>>
  ListExplainabilityExportsPaginator(const Model::ListExplainabilityExportsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListExplainabilityExportsRequest,
                                             Pagination::ListExplainabilityExportsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListForecastExportJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListForecastExportJobsRequest,
                                    Pagination::ListForecastExportJobsPaginationTraits<DerivedClient>>
  ListForecastExportJobsPaginator(const Model::ListForecastExportJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListForecastExportJobsRequest,
                                             Pagination::ListForecastExportJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListForecasts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListForecastsRequest, Pagination::ListForecastsPaginationTraits<DerivedClient>>
  ListForecastsPaginator(const Model::ListForecastsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListForecastsRequest,
                                             Pagination::ListForecastsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListMonitorEvaluations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMonitorEvaluationsRequest,
                                    Pagination::ListMonitorEvaluationsPaginationTraits<DerivedClient>>
  ListMonitorEvaluationsPaginator(const Model::ListMonitorEvaluationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMonitorEvaluationsRequest,
                                             Pagination::ListMonitorEvaluationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListMonitors operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMonitorsRequest, Pagination::ListMonitorsPaginationTraits<DerivedClient>>
  ListMonitorsPaginator(const Model::ListMonitorsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMonitorsRequest,
                                             Pagination::ListMonitorsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListPredictorBacktestExportJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPredictorBacktestExportJobsRequest,
                                    Pagination::ListPredictorBacktestExportJobsPaginationTraits<DerivedClient>>
  ListPredictorBacktestExportJobsPaginator(const Model::ListPredictorBacktestExportJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPredictorBacktestExportJobsRequest,
                                             Pagination::ListPredictorBacktestExportJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPredictors operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPredictorsRequest, Pagination::ListPredictorsPaginationTraits<DerivedClient>>
  ListPredictorsPaginator(const Model::ListPredictorsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPredictorsRequest,
                                             Pagination::ListPredictorsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListWhatIfAnalyses operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWhatIfAnalysesRequest,
                                    Pagination::ListWhatIfAnalysesPaginationTraits<DerivedClient>>
  ListWhatIfAnalysesPaginator(const Model::ListWhatIfAnalysesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWhatIfAnalysesRequest,
                                             Pagination::ListWhatIfAnalysesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListWhatIfForecastExports operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWhatIfForecastExportsRequest,
                                    Pagination::ListWhatIfForecastExportsPaginationTraits<DerivedClient>>
  ListWhatIfForecastExportsPaginator(const Model::ListWhatIfForecastExportsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWhatIfForecastExportsRequest,
                                             Pagination::ListWhatIfForecastExportsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListWhatIfForecasts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWhatIfForecastsRequest,
                                    Pagination::ListWhatIfForecastsPaginationTraits<DerivedClient>>
  ListWhatIfForecastsPaginator(const Model::ListWhatIfForecastsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWhatIfForecastsRequest,
                                             Pagination::ListWhatIfForecastsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace ForecastService
}  // namespace Aws
