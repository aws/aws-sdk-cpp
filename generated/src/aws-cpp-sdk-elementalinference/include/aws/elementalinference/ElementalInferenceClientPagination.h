/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/elementalinference/ElementalInferenceClient.h>
#include <aws/elementalinference/model/ListFeedsPaginationTraits.h>

namespace Aws {
namespace ElementalInference {

using ListFeedsPaginator = Aws::Utils::Pagination::Paginator<ElementalInferenceClient, Model::ListFeedsRequest,
                                                             Pagination::ListFeedsPaginationTraits<ElementalInferenceClient>>;

}  // namespace ElementalInference
}  // namespace Aws
