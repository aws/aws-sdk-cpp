/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/lexv2-models/LexModelsV2Client.h>
#include <aws/lexv2-models/model/ListAggregatedUtterancesPaginationTraits.h>
#include <aws/lexv2-models/model/ListBotAliasReplicasPaginationTraits.h>
#include <aws/lexv2-models/model/ListBotAliasesPaginationTraits.h>
#include <aws/lexv2-models/model/ListBotLocalesPaginationTraits.h>
#include <aws/lexv2-models/model/ListBotRecommendationsPaginationTraits.h>
#include <aws/lexv2-models/model/ListBotResourceGenerationsPaginationTraits.h>
#include <aws/lexv2-models/model/ListBotVersionReplicasPaginationTraits.h>
#include <aws/lexv2-models/model/ListBotVersionsPaginationTraits.h>
#include <aws/lexv2-models/model/ListBotsPaginationTraits.h>
#include <aws/lexv2-models/model/ListBuiltInIntentsPaginationTraits.h>
#include <aws/lexv2-models/model/ListBuiltInSlotTypesPaginationTraits.h>
#include <aws/lexv2-models/model/ListCustomVocabularyItemsPaginationTraits.h>
#include <aws/lexv2-models/model/ListExportsPaginationTraits.h>
#include <aws/lexv2-models/model/ListImportsPaginationTraits.h>
#include <aws/lexv2-models/model/ListIntentMetricsPaginationTraits.h>
#include <aws/lexv2-models/model/ListIntentStageMetricsPaginationTraits.h>
#include <aws/lexv2-models/model/ListIntentsPaginationTraits.h>
#include <aws/lexv2-models/model/ListRecommendedIntentsPaginationTraits.h>
#include <aws/lexv2-models/model/ListSessionAnalyticsDataPaginationTraits.h>
#include <aws/lexv2-models/model/ListSessionMetricsPaginationTraits.h>
#include <aws/lexv2-models/model/ListSlotTypesPaginationTraits.h>
#include <aws/lexv2-models/model/ListSlotsPaginationTraits.h>
#include <aws/lexv2-models/model/ListTestExecutionResultItemsPaginationTraits.h>
#include <aws/lexv2-models/model/ListTestExecutionsPaginationTraits.h>
#include <aws/lexv2-models/model/ListTestSetRecordsPaginationTraits.h>
#include <aws/lexv2-models/model/ListTestSetsPaginationTraits.h>
#include <aws/lexv2-models/model/ListUtteranceAnalyticsDataPaginationTraits.h>
#include <aws/lexv2-models/model/ListUtteranceMetricsPaginationTraits.h>

namespace Aws {
namespace LexModelsV2 {

using ListAggregatedUtterancesPaginator =
    Aws::Utils::Pagination::Paginator<LexModelsV2Client, Model::ListAggregatedUtterancesRequest,
                                      Pagination::ListAggregatedUtterancesPaginationTraits<LexModelsV2Client>>;
using ListBotAliasesPaginator = Aws::Utils::Pagination::Paginator<LexModelsV2Client, Model::ListBotAliasesRequest,
                                                                  Pagination::ListBotAliasesPaginationTraits<LexModelsV2Client>>;
using ListBotAliasReplicasPaginator =
    Aws::Utils::Pagination::Paginator<LexModelsV2Client, Model::ListBotAliasReplicasRequest,
                                      Pagination::ListBotAliasReplicasPaginationTraits<LexModelsV2Client>>;
using ListBotLocalesPaginator = Aws::Utils::Pagination::Paginator<LexModelsV2Client, Model::ListBotLocalesRequest,
                                                                  Pagination::ListBotLocalesPaginationTraits<LexModelsV2Client>>;
using ListBotRecommendationsPaginator =
    Aws::Utils::Pagination::Paginator<LexModelsV2Client, Model::ListBotRecommendationsRequest,
                                      Pagination::ListBotRecommendationsPaginationTraits<LexModelsV2Client>>;
using ListBotResourceGenerationsPaginator =
    Aws::Utils::Pagination::Paginator<LexModelsV2Client, Model::ListBotResourceGenerationsRequest,
                                      Pagination::ListBotResourceGenerationsPaginationTraits<LexModelsV2Client>>;
using ListBotsPaginator =
    Aws::Utils::Pagination::Paginator<LexModelsV2Client, Model::ListBotsRequest, Pagination::ListBotsPaginationTraits<LexModelsV2Client>>;
using ListBotVersionReplicasPaginator =
    Aws::Utils::Pagination::Paginator<LexModelsV2Client, Model::ListBotVersionReplicasRequest,
                                      Pagination::ListBotVersionReplicasPaginationTraits<LexModelsV2Client>>;
using ListBotVersionsPaginator = Aws::Utils::Pagination::Paginator<LexModelsV2Client, Model::ListBotVersionsRequest,
                                                                   Pagination::ListBotVersionsPaginationTraits<LexModelsV2Client>>;
using ListBuiltInIntentsPaginator = Aws::Utils::Pagination::Paginator<LexModelsV2Client, Model::ListBuiltInIntentsRequest,
                                                                      Pagination::ListBuiltInIntentsPaginationTraits<LexModelsV2Client>>;
using ListBuiltInSlotTypesPaginator =
    Aws::Utils::Pagination::Paginator<LexModelsV2Client, Model::ListBuiltInSlotTypesRequest,
                                      Pagination::ListBuiltInSlotTypesPaginationTraits<LexModelsV2Client>>;
using ListCustomVocabularyItemsPaginator =
    Aws::Utils::Pagination::Paginator<LexModelsV2Client, Model::ListCustomVocabularyItemsRequest,
                                      Pagination::ListCustomVocabularyItemsPaginationTraits<LexModelsV2Client>>;
using ListExportsPaginator = Aws::Utils::Pagination::Paginator<LexModelsV2Client, Model::ListExportsRequest,
                                                               Pagination::ListExportsPaginationTraits<LexModelsV2Client>>;
using ListImportsPaginator = Aws::Utils::Pagination::Paginator<LexModelsV2Client, Model::ListImportsRequest,
                                                               Pagination::ListImportsPaginationTraits<LexModelsV2Client>>;
using ListIntentMetricsPaginator = Aws::Utils::Pagination::Paginator<LexModelsV2Client, Model::ListIntentMetricsRequest,
                                                                     Pagination::ListIntentMetricsPaginationTraits<LexModelsV2Client>>;
using ListIntentsPaginator = Aws::Utils::Pagination::Paginator<LexModelsV2Client, Model::ListIntentsRequest,
                                                               Pagination::ListIntentsPaginationTraits<LexModelsV2Client>>;
using ListIntentStageMetricsPaginator =
    Aws::Utils::Pagination::Paginator<LexModelsV2Client, Model::ListIntentStageMetricsRequest,
                                      Pagination::ListIntentStageMetricsPaginationTraits<LexModelsV2Client>>;
using ListRecommendedIntentsPaginator =
    Aws::Utils::Pagination::Paginator<LexModelsV2Client, Model::ListRecommendedIntentsRequest,
                                      Pagination::ListRecommendedIntentsPaginationTraits<LexModelsV2Client>>;
using ListSessionAnalyticsDataPaginator =
    Aws::Utils::Pagination::Paginator<LexModelsV2Client, Model::ListSessionAnalyticsDataRequest,
                                      Pagination::ListSessionAnalyticsDataPaginationTraits<LexModelsV2Client>>;
using ListSessionMetricsPaginator = Aws::Utils::Pagination::Paginator<LexModelsV2Client, Model::ListSessionMetricsRequest,
                                                                      Pagination::ListSessionMetricsPaginationTraits<LexModelsV2Client>>;
using ListSlotsPaginator =
    Aws::Utils::Pagination::Paginator<LexModelsV2Client, Model::ListSlotsRequest, Pagination::ListSlotsPaginationTraits<LexModelsV2Client>>;
using ListSlotTypesPaginator = Aws::Utils::Pagination::Paginator<LexModelsV2Client, Model::ListSlotTypesRequest,
                                                                 Pagination::ListSlotTypesPaginationTraits<LexModelsV2Client>>;
using ListTestExecutionResultItemsPaginator =
    Aws::Utils::Pagination::Paginator<LexModelsV2Client, Model::ListTestExecutionResultItemsRequest,
                                      Pagination::ListTestExecutionResultItemsPaginationTraits<LexModelsV2Client>>;
using ListTestExecutionsPaginator = Aws::Utils::Pagination::Paginator<LexModelsV2Client, Model::ListTestExecutionsRequest,
                                                                      Pagination::ListTestExecutionsPaginationTraits<LexModelsV2Client>>;
using ListTestSetRecordsPaginator = Aws::Utils::Pagination::Paginator<LexModelsV2Client, Model::ListTestSetRecordsRequest,
                                                                      Pagination::ListTestSetRecordsPaginationTraits<LexModelsV2Client>>;
using ListTestSetsPaginator = Aws::Utils::Pagination::Paginator<LexModelsV2Client, Model::ListTestSetsRequest,
                                                                Pagination::ListTestSetsPaginationTraits<LexModelsV2Client>>;
using ListUtteranceAnalyticsDataPaginator =
    Aws::Utils::Pagination::Paginator<LexModelsV2Client, Model::ListUtteranceAnalyticsDataRequest,
                                      Pagination::ListUtteranceAnalyticsDataPaginationTraits<LexModelsV2Client>>;
using ListUtteranceMetricsPaginator =
    Aws::Utils::Pagination::Paginator<LexModelsV2Client, Model::ListUtteranceMetricsRequest,
                                      Pagination::ListUtteranceMetricsPaginationTraits<LexModelsV2Client>>;

}  // namespace LexModelsV2
}  // namespace Aws
