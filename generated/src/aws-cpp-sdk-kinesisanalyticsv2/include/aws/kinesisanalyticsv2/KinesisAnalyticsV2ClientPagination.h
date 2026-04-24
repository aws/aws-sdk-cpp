/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2Client.h>
#include <aws/kinesisanalyticsv2/model/ListApplicationOperationsPaginationTraits.h>
#include <aws/kinesisanalyticsv2/model/ListApplicationSnapshotsPaginationTraits.h>
#include <aws/kinesisanalyticsv2/model/ListApplicationVersionsPaginationTraits.h>
#include <aws/kinesisanalyticsv2/model/ListApplicationsPaginationTraits.h>

namespace Aws {
namespace KinesisAnalyticsV2 {

using ListApplicationOperationsPaginator =
    Aws::Utils::Pagination::Paginator<KinesisAnalyticsV2Client, Model::ListApplicationOperationsRequest,
                                      Pagination::ListApplicationOperationsPaginationTraits<KinesisAnalyticsV2Client>>;
using ListApplicationsPaginator = Aws::Utils::Pagination::Paginator<KinesisAnalyticsV2Client, Model::ListApplicationsRequest,
                                                                    Pagination::ListApplicationsPaginationTraits<KinesisAnalyticsV2Client>>;
using ListApplicationSnapshotsPaginator =
    Aws::Utils::Pagination::Paginator<KinesisAnalyticsV2Client, Model::ListApplicationSnapshotsRequest,
                                      Pagination::ListApplicationSnapshotsPaginationTraits<KinesisAnalyticsV2Client>>;
using ListApplicationVersionsPaginator =
    Aws::Utils::Pagination::Paginator<KinesisAnalyticsV2Client, Model::ListApplicationVersionsRequest,
                                      Pagination::ListApplicationVersionsPaginationTraits<KinesisAnalyticsV2Client>>;

}  // namespace KinesisAnalyticsV2
}  // namespace Aws
