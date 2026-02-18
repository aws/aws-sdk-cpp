/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/aiops/AIOpsClient.h>
#include <aws/aiops/model/ListInvestigationGroupsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace AIOps {

using ListInvestigationGroupsPaginator =
    Aws::Utils::Pagination::Paginator<AIOpsClient, Model::ListInvestigationGroupsRequest,
                                      Pagination::ListInvestigationGroupsPaginationTraits<AIOpsClient>>;

}  // namespace AIOps
}  // namespace Aws
