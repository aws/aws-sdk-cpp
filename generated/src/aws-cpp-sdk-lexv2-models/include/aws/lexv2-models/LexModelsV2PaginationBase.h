/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
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

#include <memory>

namespace Aws {
namespace LexModelsV2 {

class LexModelsV2Client;

template <typename DerivedClient>
class LexModelsV2PaginationBase {
 public:
  /**
   * Create a paginator for ListAggregatedUtterances operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAggregatedUtterancesRequest,
                                    Pagination::ListAggregatedUtterancesPaginationTraits<DerivedClient>>
  ListAggregatedUtterancesPaginator(const Model::ListAggregatedUtterancesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAggregatedUtterancesRequest,
                                             Pagination::ListAggregatedUtterancesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListBotAliases operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBotAliasesRequest, Pagination::ListBotAliasesPaginationTraits<DerivedClient>>
  ListBotAliasesPaginator(const Model::ListBotAliasesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBotAliasesRequest,
                                             Pagination::ListBotAliasesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListBotAliasReplicas operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBotAliasReplicasRequest,
                                    Pagination::ListBotAliasReplicasPaginationTraits<DerivedClient>>
  ListBotAliasReplicasPaginator(const Model::ListBotAliasReplicasRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBotAliasReplicasRequest,
                                             Pagination::ListBotAliasReplicasPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListBotLocales operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBotLocalesRequest, Pagination::ListBotLocalesPaginationTraits<DerivedClient>>
  ListBotLocalesPaginator(const Model::ListBotLocalesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBotLocalesRequest,
                                             Pagination::ListBotLocalesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListBotRecommendations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBotRecommendationsRequest,
                                    Pagination::ListBotRecommendationsPaginationTraits<DerivedClient>>
  ListBotRecommendationsPaginator(const Model::ListBotRecommendationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBotRecommendationsRequest,
                                             Pagination::ListBotRecommendationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListBotResourceGenerations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBotResourceGenerationsRequest,
                                    Pagination::ListBotResourceGenerationsPaginationTraits<DerivedClient>>
  ListBotResourceGenerationsPaginator(const Model::ListBotResourceGenerationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBotResourceGenerationsRequest,
                                             Pagination::ListBotResourceGenerationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListBots operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBotsRequest, Pagination::ListBotsPaginationTraits<DerivedClient>>
  ListBotsPaginator(const Model::ListBotsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBotsRequest, Pagination::ListBotsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListBotVersionReplicas operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBotVersionReplicasRequest,
                                    Pagination::ListBotVersionReplicasPaginationTraits<DerivedClient>>
  ListBotVersionReplicasPaginator(const Model::ListBotVersionReplicasRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBotVersionReplicasRequest,
                                             Pagination::ListBotVersionReplicasPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListBotVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBotVersionsRequest,
                                    Pagination::ListBotVersionsPaginationTraits<DerivedClient>>
  ListBotVersionsPaginator(const Model::ListBotVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBotVersionsRequest,
                                             Pagination::ListBotVersionsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListBuiltInIntents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBuiltInIntentsRequest,
                                    Pagination::ListBuiltInIntentsPaginationTraits<DerivedClient>>
  ListBuiltInIntentsPaginator(const Model::ListBuiltInIntentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBuiltInIntentsRequest,
                                             Pagination::ListBuiltInIntentsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListBuiltInSlotTypes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBuiltInSlotTypesRequest,
                                    Pagination::ListBuiltInSlotTypesPaginationTraits<DerivedClient>>
  ListBuiltInSlotTypesPaginator(const Model::ListBuiltInSlotTypesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBuiltInSlotTypesRequest,
                                             Pagination::ListBuiltInSlotTypesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCustomVocabularyItems operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCustomVocabularyItemsRequest,
                                    Pagination::ListCustomVocabularyItemsPaginationTraits<DerivedClient>>
  ListCustomVocabularyItemsPaginator(const Model::ListCustomVocabularyItemsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCustomVocabularyItemsRequest,
                                             Pagination::ListCustomVocabularyItemsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListExports operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListExportsRequest, Pagination::ListExportsPaginationTraits<DerivedClient>>
  ListExportsPaginator(const Model::ListExportsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListExportsRequest,
                                             Pagination::ListExportsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListImports operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListImportsRequest, Pagination::ListImportsPaginationTraits<DerivedClient>>
  ListImportsPaginator(const Model::ListImportsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListImportsRequest,
                                             Pagination::ListImportsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListIntentMetrics operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIntentMetricsRequest,
                                    Pagination::ListIntentMetricsPaginationTraits<DerivedClient>>
  ListIntentMetricsPaginator(const Model::ListIntentMetricsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIntentMetricsRequest,
                                             Pagination::ListIntentMetricsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListIntents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIntentsRequest, Pagination::ListIntentsPaginationTraits<DerivedClient>>
  ListIntentsPaginator(const Model::ListIntentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIntentsRequest,
                                             Pagination::ListIntentsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListIntentStageMetrics operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIntentStageMetricsRequest,
                                    Pagination::ListIntentStageMetricsPaginationTraits<DerivedClient>>
  ListIntentStageMetricsPaginator(const Model::ListIntentStageMetricsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIntentStageMetricsRequest,
                                             Pagination::ListIntentStageMetricsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRecommendedIntents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRecommendedIntentsRequest,
                                    Pagination::ListRecommendedIntentsPaginationTraits<DerivedClient>>
  ListRecommendedIntentsPaginator(const Model::ListRecommendedIntentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRecommendedIntentsRequest,
                                             Pagination::ListRecommendedIntentsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSessionAnalyticsData operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSessionAnalyticsDataRequest,
                                    Pagination::ListSessionAnalyticsDataPaginationTraits<DerivedClient>>
  ListSessionAnalyticsDataPaginator(const Model::ListSessionAnalyticsDataRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSessionAnalyticsDataRequest,
                                             Pagination::ListSessionAnalyticsDataPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSessionMetrics operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSessionMetricsRequest,
                                    Pagination::ListSessionMetricsPaginationTraits<DerivedClient>>
  ListSessionMetricsPaginator(const Model::ListSessionMetricsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSessionMetricsRequest,
                                             Pagination::ListSessionMetricsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSlots operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSlotsRequest, Pagination::ListSlotsPaginationTraits<DerivedClient>>
  ListSlotsPaginator(const Model::ListSlotsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSlotsRequest, Pagination::ListSlotsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSlotTypes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSlotTypesRequest, Pagination::ListSlotTypesPaginationTraits<DerivedClient>>
  ListSlotTypesPaginator(const Model::ListSlotTypesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSlotTypesRequest,
                                             Pagination::ListSlotTypesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListTestExecutionResultItems operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTestExecutionResultItemsRequest,
                                    Pagination::ListTestExecutionResultItemsPaginationTraits<DerivedClient>>
  ListTestExecutionResultItemsPaginator(const Model::ListTestExecutionResultItemsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTestExecutionResultItemsRequest,
                                             Pagination::ListTestExecutionResultItemsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTestExecutions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTestExecutionsRequest,
                                    Pagination::ListTestExecutionsPaginationTraits<DerivedClient>>
  ListTestExecutionsPaginator(const Model::ListTestExecutionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTestExecutionsRequest,
                                             Pagination::ListTestExecutionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTestSetRecords operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTestSetRecordsRequest,
                                    Pagination::ListTestSetRecordsPaginationTraits<DerivedClient>>
  ListTestSetRecordsPaginator(const Model::ListTestSetRecordsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTestSetRecordsRequest,
                                             Pagination::ListTestSetRecordsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTestSets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTestSetsRequest, Pagination::ListTestSetsPaginationTraits<DerivedClient>>
  ListTestSetsPaginator(const Model::ListTestSetsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTestSetsRequest,
                                             Pagination::ListTestSetsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListUtteranceAnalyticsData operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListUtteranceAnalyticsDataRequest,
                                    Pagination::ListUtteranceAnalyticsDataPaginationTraits<DerivedClient>>
  ListUtteranceAnalyticsDataPaginator(const Model::ListUtteranceAnalyticsDataRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListUtteranceAnalyticsDataRequest,
                                             Pagination::ListUtteranceAnalyticsDataPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListUtteranceMetrics operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListUtteranceMetricsRequest,
                                    Pagination::ListUtteranceMetricsPaginationTraits<DerivedClient>>
  ListUtteranceMetricsPaginator(const Model::ListUtteranceMetricsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListUtteranceMetricsRequest,
                                             Pagination::ListUtteranceMetricsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace LexModelsV2
}  // namespace Aws
