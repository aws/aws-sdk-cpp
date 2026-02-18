/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloud9/Cloud9Client.h>
#include <aws/cloud9/model/DescribeEnvironmentMembershipsPaginationTraits.h>
#include <aws/cloud9/model/ListEnvironmentsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace Cloud9 {

using DescribeEnvironmentMembershipsPaginator =
    Aws::Utils::Pagination::Paginator<Cloud9Client, Model::DescribeEnvironmentMembershipsRequest,
                                      Pagination::DescribeEnvironmentMembershipsPaginationTraits<Cloud9Client>>;
using ListEnvironmentsPaginator = Aws::Utils::Pagination::Paginator<Cloud9Client, Model::ListEnvironmentsRequest,
                                                                    Pagination::ListEnvironmentsPaginationTraits<Cloud9Client>>;

}  // namespace Cloud9
}  // namespace Aws
