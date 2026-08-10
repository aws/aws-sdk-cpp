/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/elementalinference/ElementalInferenceClient.h>
#include <aws/elementalinference/model/ListDictionariesPaginationTraits.h>
#include <aws/elementalinference/model/ListFeedsPaginationTraits.h>
#include <aws/elementalinference/model/SearchFixturesPaginationTraits.h>

namespace Aws {
namespace ElementalInference {

using ListDictionariesPaginator = Aws::Utils::Pagination::Paginator<ElementalInferenceClient, Model::ListDictionariesRequest,
                                                                    Pagination::ListDictionariesPaginationTraits<ElementalInferenceClient>>;
using ListFeedsPaginator = Aws::Utils::Pagination::Paginator<ElementalInferenceClient, Model::ListFeedsRequest,
                                                             Pagination::ListFeedsPaginationTraits<ElementalInferenceClient>>;
using SearchFixturesPaginator = Aws::Utils::Pagination::Paginator<ElementalInferenceClient, Model::SearchFixturesRequest,
                                                                  Pagination::SearchFixturesPaginationTraits<ElementalInferenceClient>>;

}  // namespace ElementalInference
}  // namespace Aws
