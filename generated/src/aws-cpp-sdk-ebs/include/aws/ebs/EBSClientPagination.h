/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/ebs/EBSClient.h>
#include <aws/ebs/model/ListChangedBlocksPaginationTraits.h>
#include <aws/ebs/model/ListSnapshotBlocksPaginationTraits.h>

namespace Aws {
namespace EBS {

using ListChangedBlocksPaginator =
    Aws::Utils::Pagination::Paginator<EBSClient, Model::ListChangedBlocksRequest, Pagination::ListChangedBlocksPaginationTraits<EBSClient>>;
using ListSnapshotBlocksPaginator = Aws::Utils::Pagination::Paginator<EBSClient, Model::ListSnapshotBlocksRequest,
                                                                      Pagination::ListSnapshotBlocksPaginationTraits<EBSClient>>;

}  // namespace EBS
}  // namespace Aws
