/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/elementalinference/ElementalInferenceClient.h>
#include <aws/elementalinference/model/ListDictionariesPaginationTraits.h>
#include <aws/elementalinference/model/ListFeedsPaginationTraits.h>
#include <aws/elementalinference/model/ListFunctionsPaginationTraits.h>
#include <aws/elementalinference/model/ListQuestionSetVersionsPaginationTraits.h>
#include <aws/elementalinference/model/ListQuestionSetsPaginationTraits.h>
#include <aws/elementalinference/model/ListScheduleActionsPaginationTraits.h>
#include <aws/elementalinference/model/SearchFixturesPaginationTraits.h>

namespace Aws {
namespace ElementalInference {

using ListDictionariesPaginator = Aws::Utils::Pagination::Paginator<ElementalInferenceClient, Model::ListDictionariesRequest,
                                                                    Pagination::ListDictionariesPaginationTraits<ElementalInferenceClient>>;
using ListFeedsPaginator = Aws::Utils::Pagination::Paginator<ElementalInferenceClient, Model::ListFeedsRequest,
                                                             Pagination::ListFeedsPaginationTraits<ElementalInferenceClient>>;
using ListFunctionsPaginator = Aws::Utils::Pagination::Paginator<ElementalInferenceClient, Model::ListFunctionsRequest,
                                                                 Pagination::ListFunctionsPaginationTraits<ElementalInferenceClient>>;
using ListQuestionSetsPaginator = Aws::Utils::Pagination::Paginator<ElementalInferenceClient, Model::ListQuestionSetsRequest,
                                                                    Pagination::ListQuestionSetsPaginationTraits<ElementalInferenceClient>>;
using ListQuestionSetVersionsPaginator =
    Aws::Utils::Pagination::Paginator<ElementalInferenceClient, Model::ListQuestionSetVersionsRequest,
                                      Pagination::ListQuestionSetVersionsPaginationTraits<ElementalInferenceClient>>;
using ListScheduleActionsPaginator =
    Aws::Utils::Pagination::Paginator<ElementalInferenceClient, Model::ListScheduleActionsRequest,
                                      Pagination::ListScheduleActionsPaginationTraits<ElementalInferenceClient>>;
using SearchFixturesPaginator = Aws::Utils::Pagination::Paginator<ElementalInferenceClient, Model::SearchFixturesRequest,
                                                                  Pagination::SearchFixturesPaginationTraits<ElementalInferenceClient>>;

}  // namespace ElementalInference
}  // namespace Aws
