/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/frauddetector/model/DescribeModelVersionsPaginationTraits.h>
#include <aws/frauddetector/model/GetBatchImportJobsPaginationTraits.h>
#include <aws/frauddetector/model/GetBatchPredictionJobsPaginationTraits.h>
#include <aws/frauddetector/model/GetDetectorsPaginationTraits.h>
#include <aws/frauddetector/model/GetEntityTypesPaginationTraits.h>
#include <aws/frauddetector/model/GetEventTypesPaginationTraits.h>
#include <aws/frauddetector/model/GetExternalModelsPaginationTraits.h>
#include <aws/frauddetector/model/GetLabelsPaginationTraits.h>
#include <aws/frauddetector/model/GetListElementsPaginationTraits.h>
#include <aws/frauddetector/model/GetListsMetadataPaginationTraits.h>
#include <aws/frauddetector/model/GetModelsPaginationTraits.h>
#include <aws/frauddetector/model/GetOutcomesPaginationTraits.h>
#include <aws/frauddetector/model/GetRulesPaginationTraits.h>
#include <aws/frauddetector/model/GetVariablesPaginationTraits.h>
#include <aws/frauddetector/model/ListEventPredictionsPaginationTraits.h>
#include <aws/frauddetector/model/ListTagsForResourcePaginationTraits.h>

#include <memory>

namespace Aws {
namespace FraudDetector {

class FraudDetectorClient;

template <typename DerivedClient>
class FraudDetectorPaginationBase {
 public:
  /**
   * Create a paginator for DescribeModelVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeModelVersionsRequest,
                                    Pagination::DescribeModelVersionsPaginationTraits<DerivedClient>>
  DescribeModelVersionsPaginator(const Model::DescribeModelVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeModelVersionsRequest,
                                             Pagination::DescribeModelVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetBatchImportJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetBatchImportJobsRequest,
                                    Pagination::GetBatchImportJobsPaginationTraits<DerivedClient>>
  GetBatchImportJobsPaginator(const Model::GetBatchImportJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetBatchImportJobsRequest,
                                             Pagination::GetBatchImportJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetBatchPredictionJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetBatchPredictionJobsRequest,
                                    Pagination::GetBatchPredictionJobsPaginationTraits<DerivedClient>>
  GetBatchPredictionJobsPaginator(const Model::GetBatchPredictionJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetBatchPredictionJobsRequest,
                                             Pagination::GetBatchPredictionJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetDetectors operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetDetectorsRequest, Pagination::GetDetectorsPaginationTraits<DerivedClient>>
  GetDetectorsPaginator(const Model::GetDetectorsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetDetectorsRequest,
                                             Pagination::GetDetectorsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for GetEntityTypes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetEntityTypesRequest, Pagination::GetEntityTypesPaginationTraits<DerivedClient>>
  GetEntityTypesPaginator(const Model::GetEntityTypesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetEntityTypesRequest,
                                             Pagination::GetEntityTypesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for GetEventTypes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetEventTypesRequest, Pagination::GetEventTypesPaginationTraits<DerivedClient>>
  GetEventTypesPaginator(const Model::GetEventTypesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetEventTypesRequest,
                                             Pagination::GetEventTypesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for GetExternalModels operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetExternalModelsRequest,
                                    Pagination::GetExternalModelsPaginationTraits<DerivedClient>>
  GetExternalModelsPaginator(const Model::GetExternalModelsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetExternalModelsRequest,
                                             Pagination::GetExternalModelsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetLabels operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetLabelsRequest, Pagination::GetLabelsPaginationTraits<DerivedClient>>
  GetLabelsPaginator(const Model::GetLabelsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetLabelsRequest, Pagination::GetLabelsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetListElements operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetListElementsRequest,
                                    Pagination::GetListElementsPaginationTraits<DerivedClient>>
  GetListElementsPaginator(const Model::GetListElementsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetListElementsRequest,
                                             Pagination::GetListElementsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for GetListsMetadata operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetListsMetadataRequest,
                                    Pagination::GetListsMetadataPaginationTraits<DerivedClient>>
  GetListsMetadataPaginator(const Model::GetListsMetadataRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetListsMetadataRequest,
                                             Pagination::GetListsMetadataPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for GetModels operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetModelsRequest, Pagination::GetModelsPaginationTraits<DerivedClient>>
  GetModelsPaginator(const Model::GetModelsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetModelsRequest, Pagination::GetModelsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetOutcomes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetOutcomesRequest, Pagination::GetOutcomesPaginationTraits<DerivedClient>>
  GetOutcomesPaginator(const Model::GetOutcomesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetOutcomesRequest,
                                             Pagination::GetOutcomesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for GetRules operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetRulesRequest, Pagination::GetRulesPaginationTraits<DerivedClient>>
  GetRulesPaginator(const Model::GetRulesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetRulesRequest, Pagination::GetRulesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetVariables operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetVariablesRequest, Pagination::GetVariablesPaginationTraits<DerivedClient>>
  GetVariablesPaginator(const Model::GetVariablesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetVariablesRequest,
                                             Pagination::GetVariablesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListEventPredictions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEventPredictionsRequest,
                                    Pagination::ListEventPredictionsPaginationTraits<DerivedClient>>
  ListEventPredictionsPaginator(const Model::ListEventPredictionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEventPredictionsRequest,
                                             Pagination::ListEventPredictionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTagsForResource operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTagsForResourceRequest,
                                    Pagination::ListTagsForResourcePaginationTraits<DerivedClient>>
  ListTagsForResourcePaginator(const Model::ListTagsForResourceRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTagsForResourceRequest,
                                             Pagination::ListTagsForResourcePaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace FraudDetector
}  // namespace Aws
