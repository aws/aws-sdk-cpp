/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudhsmv2/CloudHSMV2Client.h>
#include <aws/cloudhsmv2/model/DescribeBackupsPaginationTraits.h>
#include <aws/cloudhsmv2/model/DescribeClustersPaginationTraits.h>
#include <aws/cloudhsmv2/model/ListTagsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace CloudHSMV2 {

using DescribeBackupsPaginator = Aws::Utils::Pagination::Paginator<CloudHSMV2Client, Model::DescribeBackupsRequest,
                                                                   Pagination::DescribeBackupsPaginationTraits<CloudHSMV2Client>>;
using DescribeClustersPaginator = Aws::Utils::Pagination::Paginator<CloudHSMV2Client, Model::DescribeClustersRequest,
                                                                    Pagination::DescribeClustersPaginationTraits<CloudHSMV2Client>>;
using ListTagsPaginator =
    Aws::Utils::Pagination::Paginator<CloudHSMV2Client, Model::ListTagsRequest, Pagination::ListTagsPaginationTraits<CloudHSMV2Client>>;

}  // namespace CloudHSMV2
}  // namespace Aws
