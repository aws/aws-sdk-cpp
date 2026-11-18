/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/abuse-signal/AbuseSignalClient.h>
#include <aws/abuse-signal/model/ListAbuseReportStatusesPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace AbuseSignal {

using ListAbuseReportStatusesPaginator =
    Aws::Utils::Pagination::Paginator<AbuseSignalClient, Model::ListAbuseReportStatusesRequest,
                                      Pagination::ListAbuseReportStatusesPaginationTraits<AbuseSignalClient>>;

}  // namespace AbuseSignal
}  // namespace Aws
