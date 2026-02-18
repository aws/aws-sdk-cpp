/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/frauddetector/FraudDetectorClient.h>
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

namespace Aws {
namespace FraudDetector {

using DescribeModelVersionsPaginator =
    Aws::Utils::Pagination::Paginator<FraudDetectorClient, Model::DescribeModelVersionsRequest,
                                      Pagination::DescribeModelVersionsPaginationTraits<FraudDetectorClient>>;
using GetBatchImportJobsPaginator = Aws::Utils::Pagination::Paginator<FraudDetectorClient, Model::GetBatchImportJobsRequest,
                                                                      Pagination::GetBatchImportJobsPaginationTraits<FraudDetectorClient>>;
using GetBatchPredictionJobsPaginator =
    Aws::Utils::Pagination::Paginator<FraudDetectorClient, Model::GetBatchPredictionJobsRequest,
                                      Pagination::GetBatchPredictionJobsPaginationTraits<FraudDetectorClient>>;
using GetDetectorsPaginator = Aws::Utils::Pagination::Paginator<FraudDetectorClient, Model::GetDetectorsRequest,
                                                                Pagination::GetDetectorsPaginationTraits<FraudDetectorClient>>;
using GetEntityTypesPaginator = Aws::Utils::Pagination::Paginator<FraudDetectorClient, Model::GetEntityTypesRequest,
                                                                  Pagination::GetEntityTypesPaginationTraits<FraudDetectorClient>>;
using GetEventTypesPaginator = Aws::Utils::Pagination::Paginator<FraudDetectorClient, Model::GetEventTypesRequest,
                                                                 Pagination::GetEventTypesPaginationTraits<FraudDetectorClient>>;
using GetExternalModelsPaginator = Aws::Utils::Pagination::Paginator<FraudDetectorClient, Model::GetExternalModelsRequest,
                                                                     Pagination::GetExternalModelsPaginationTraits<FraudDetectorClient>>;
using GetLabelsPaginator = Aws::Utils::Pagination::Paginator<FraudDetectorClient, Model::GetLabelsRequest,
                                                             Pagination::GetLabelsPaginationTraits<FraudDetectorClient>>;
using GetListElementsPaginator = Aws::Utils::Pagination::Paginator<FraudDetectorClient, Model::GetListElementsRequest,
                                                                   Pagination::GetListElementsPaginationTraits<FraudDetectorClient>>;
using GetListsMetadataPaginator = Aws::Utils::Pagination::Paginator<FraudDetectorClient, Model::GetListsMetadataRequest,
                                                                    Pagination::GetListsMetadataPaginationTraits<FraudDetectorClient>>;
using GetModelsPaginator = Aws::Utils::Pagination::Paginator<FraudDetectorClient, Model::GetModelsRequest,
                                                             Pagination::GetModelsPaginationTraits<FraudDetectorClient>>;
using GetOutcomesPaginator = Aws::Utils::Pagination::Paginator<FraudDetectorClient, Model::GetOutcomesRequest,
                                                               Pagination::GetOutcomesPaginationTraits<FraudDetectorClient>>;
using GetRulesPaginator = Aws::Utils::Pagination::Paginator<FraudDetectorClient, Model::GetRulesRequest,
                                                            Pagination::GetRulesPaginationTraits<FraudDetectorClient>>;
using GetVariablesPaginator = Aws::Utils::Pagination::Paginator<FraudDetectorClient, Model::GetVariablesRequest,
                                                                Pagination::GetVariablesPaginationTraits<FraudDetectorClient>>;
using ListEventPredictionsPaginator =
    Aws::Utils::Pagination::Paginator<FraudDetectorClient, Model::ListEventPredictionsRequest,
                                      Pagination::ListEventPredictionsPaginationTraits<FraudDetectorClient>>;
using ListTagsForResourcePaginator =
    Aws::Utils::Pagination::Paginator<FraudDetectorClient, Model::ListTagsForResourceRequest,
                                      Pagination::ListTagsForResourcePaginationTraits<FraudDetectorClient>>;

}  // namespace FraudDetector
}  // namespace Aws
