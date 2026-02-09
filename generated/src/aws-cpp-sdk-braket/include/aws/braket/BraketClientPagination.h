/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/BraketClient.h>
#include <aws/braket/model/SearchDevicesPaginationTraits.h>
#include <aws/braket/model/SearchJobsPaginationTraits.h>
#include <aws/braket/model/SearchQuantumTasksPaginationTraits.h>
#include <aws/braket/model/SearchSpendingLimitsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace Braket {

using SearchDevicesPaginator =
    Aws::Utils::Pagination::Paginator<BraketClient, Model::SearchDevicesRequest, Pagination::SearchDevicesPaginationTraits<BraketClient>>;
using SearchJobsPaginator =
    Aws::Utils::Pagination::Paginator<BraketClient, Model::SearchJobsRequest, Pagination::SearchJobsPaginationTraits<BraketClient>>;
using SearchQuantumTasksPaginator = Aws::Utils::Pagination::Paginator<BraketClient, Model::SearchQuantumTasksRequest,
                                                                      Pagination::SearchQuantumTasksPaginationTraits<BraketClient>>;
using SearchSpendingLimitsPaginator = Aws::Utils::Pagination::Paginator<BraketClient, Model::SearchSpendingLimitsRequest,
                                                                        Pagination::SearchSpendingLimitsPaginationTraits<BraketClient>>;

}  // namespace Braket
}  // namespace Aws
