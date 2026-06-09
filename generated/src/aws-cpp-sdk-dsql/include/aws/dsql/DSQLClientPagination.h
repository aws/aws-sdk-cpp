/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/dsql/DSQLClient.h>
#include <aws/dsql/model/ListClustersPaginationTraits.h>
#include <aws/dsql/model/ListStreamsPaginationTraits.h>

namespace Aws {
namespace DSQL {

using ListClustersPaginator =
    Aws::Utils::Pagination::Paginator<DSQLClient, Model::ListClustersRequest, Pagination::ListClustersPaginationTraits<DSQLClient>>;
using ListStreamsPaginator =
    Aws::Utils::Pagination::Paginator<DSQLClient, Model::ListStreamsRequest, Pagination::ListStreamsPaginationTraits<DSQLClient>>;

}  // namespace DSQL
}  // namespace Aws
