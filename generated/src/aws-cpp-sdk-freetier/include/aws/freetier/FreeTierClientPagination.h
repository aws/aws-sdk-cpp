/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/freetier/FreeTierClient.h>
#include <aws/freetier/model/GetFreeTierUsagePaginationTraits.h>
#include <aws/freetier/model/ListAccountActivitiesPaginationTraits.h>

namespace Aws {
namespace FreeTier {

using GetFreeTierUsagePaginator = Aws::Utils::Pagination::Paginator<FreeTierClient, Model::GetFreeTierUsageRequest,
                                                                    Pagination::GetFreeTierUsagePaginationTraits<FreeTierClient>>;
using ListAccountActivitiesPaginator = Aws::Utils::Pagination::Paginator<FreeTierClient, Model::ListAccountActivitiesRequest,
                                                                         Pagination::ListAccountActivitiesPaginationTraits<FreeTierClient>>;

}  // namespace FreeTier
}  // namespace Aws
