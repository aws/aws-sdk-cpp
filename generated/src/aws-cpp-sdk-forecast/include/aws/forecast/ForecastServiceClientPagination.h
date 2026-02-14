/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/forecast/ForecastServiceClient.h>
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

namespace Aws {
namespace ForecastService {

using ListDatasetGroupsPaginator = Aws::Utils::Pagination::Paginator<ForecastServiceClient, Model::ListDatasetGroupsRequest,
                                                                     Pagination::ListDatasetGroupsPaginationTraits<ForecastServiceClient>>;
using ListDatasetImportJobsPaginator =
    Aws::Utils::Pagination::Paginator<ForecastServiceClient, Model::ListDatasetImportJobsRequest,
                                      Pagination::ListDatasetImportJobsPaginationTraits<ForecastServiceClient>>;
using ListDatasetsPaginator = Aws::Utils::Pagination::Paginator<ForecastServiceClient, Model::ListDatasetsRequest,
                                                                Pagination::ListDatasetsPaginationTraits<ForecastServiceClient>>;
using ListExplainabilitiesPaginator =
    Aws::Utils::Pagination::Paginator<ForecastServiceClient, Model::ListExplainabilitiesRequest,
                                      Pagination::ListExplainabilitiesPaginationTraits<ForecastServiceClient>>;
using ListExplainabilityExportsPaginator =
    Aws::Utils::Pagination::Paginator<ForecastServiceClient, Model::ListExplainabilityExportsRequest,
                                      Pagination::ListExplainabilityExportsPaginationTraits<ForecastServiceClient>>;
using ListForecastExportJobsPaginator =
    Aws::Utils::Pagination::Paginator<ForecastServiceClient, Model::ListForecastExportJobsRequest,
                                      Pagination::ListForecastExportJobsPaginationTraits<ForecastServiceClient>>;
using ListForecastsPaginator = Aws::Utils::Pagination::Paginator<ForecastServiceClient, Model::ListForecastsRequest,
                                                                 Pagination::ListForecastsPaginationTraits<ForecastServiceClient>>;
using ListMonitorEvaluationsPaginator =
    Aws::Utils::Pagination::Paginator<ForecastServiceClient, Model::ListMonitorEvaluationsRequest,
                                      Pagination::ListMonitorEvaluationsPaginationTraits<ForecastServiceClient>>;
using ListMonitorsPaginator = Aws::Utils::Pagination::Paginator<ForecastServiceClient, Model::ListMonitorsRequest,
                                                                Pagination::ListMonitorsPaginationTraits<ForecastServiceClient>>;
using ListPredictorBacktestExportJobsPaginator =
    Aws::Utils::Pagination::Paginator<ForecastServiceClient, Model::ListPredictorBacktestExportJobsRequest,
                                      Pagination::ListPredictorBacktestExportJobsPaginationTraits<ForecastServiceClient>>;
using ListPredictorsPaginator = Aws::Utils::Pagination::Paginator<ForecastServiceClient, Model::ListPredictorsRequest,
                                                                  Pagination::ListPredictorsPaginationTraits<ForecastServiceClient>>;
using ListWhatIfAnalysesPaginator =
    Aws::Utils::Pagination::Paginator<ForecastServiceClient, Model::ListWhatIfAnalysesRequest,
                                      Pagination::ListWhatIfAnalysesPaginationTraits<ForecastServiceClient>>;
using ListWhatIfForecastExportsPaginator =
    Aws::Utils::Pagination::Paginator<ForecastServiceClient, Model::ListWhatIfForecastExportsRequest,
                                      Pagination::ListWhatIfForecastExportsPaginationTraits<ForecastServiceClient>>;
using ListWhatIfForecastsPaginator =
    Aws::Utils::Pagination::Paginator<ForecastServiceClient, Model::ListWhatIfForecastsRequest,
                                      Pagination::ListWhatIfForecastsPaginationTraits<ForecastServiceClient>>;

}  // namespace ForecastService
}  // namespace Aws
