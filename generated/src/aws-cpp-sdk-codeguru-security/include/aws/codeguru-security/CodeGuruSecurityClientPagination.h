/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-security/CodeGuruSecurityClient.h>
#include <aws/codeguru-security/model/GetFindingsPaginationTraits.h>
#include <aws/codeguru-security/model/ListFindingsMetricsPaginationTraits.h>
#include <aws/codeguru-security/model/ListScansPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace CodeGuruSecurity {

using GetFindingsPaginator = Aws::Utils::Pagination::Paginator<CodeGuruSecurityClient, Model::GetFindingsRequest,
                                                               Pagination::GetFindingsPaginationTraits<CodeGuruSecurityClient>>;
using ListFindingsMetricsPaginator =
    Aws::Utils::Pagination::Paginator<CodeGuruSecurityClient, Model::ListFindingsMetricsRequest,
                                      Pagination::ListFindingsMetricsPaginationTraits<CodeGuruSecurityClient>>;
using ListScansPaginator = Aws::Utils::Pagination::Paginator<CodeGuruSecurityClient, Model::ListScansRequest,
                                                             Pagination::ListScansPaginationTraits<CodeGuruSecurityClient>>;

}  // namespace CodeGuruSecurity
}  // namespace Aws
