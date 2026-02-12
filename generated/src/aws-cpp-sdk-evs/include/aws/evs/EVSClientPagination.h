/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/evs/EVSClient.h>
#include <aws/evs/model/ListEnvironmentHostsPaginationTraits.h>
#include <aws/evs/model/ListEnvironmentVlansPaginationTraits.h>
#include <aws/evs/model/ListEnvironmentsPaginationTraits.h>

namespace Aws {
namespace EVS {

using ListEnvironmentHostsPaginator = Aws::Utils::Pagination::Paginator<EVSClient, Model::ListEnvironmentHostsRequest,
                                                                        Pagination::ListEnvironmentHostsPaginationTraits<EVSClient>>;
using ListEnvironmentsPaginator =
    Aws::Utils::Pagination::Paginator<EVSClient, Model::ListEnvironmentsRequest, Pagination::ListEnvironmentsPaginationTraits<EVSClient>>;
using ListEnvironmentVlansPaginator = Aws::Utils::Pagination::Paginator<EVSClient, Model::ListEnvironmentVlansRequest,
                                                                        Pagination::ListEnvironmentVlansPaginationTraits<EVSClient>>;

}  // namespace EVS
}  // namespace Aws
