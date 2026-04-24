/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/evs/EVSClient.h>
#include <aws/evs/model/ListEnvironmentConnectorsPaginationTraits.h>
#include <aws/evs/model/ListEnvironmentHostsPaginationTraits.h>
#include <aws/evs/model/ListEnvironmentVlansPaginationTraits.h>
#include <aws/evs/model/ListEnvironmentsPaginationTraits.h>
#include <aws/evs/model/ListVmEntitlementsPaginationTraits.h>

namespace Aws {
namespace EVS {

using ListEnvironmentConnectorsPaginator =
    Aws::Utils::Pagination::Paginator<EVSClient, Model::ListEnvironmentConnectorsRequest,
                                      Pagination::ListEnvironmentConnectorsPaginationTraits<EVSClient>>;
using ListEnvironmentHostsPaginator = Aws::Utils::Pagination::Paginator<EVSClient, Model::ListEnvironmentHostsRequest,
                                                                        Pagination::ListEnvironmentHostsPaginationTraits<EVSClient>>;
using ListEnvironmentsPaginator =
    Aws::Utils::Pagination::Paginator<EVSClient, Model::ListEnvironmentsRequest, Pagination::ListEnvironmentsPaginationTraits<EVSClient>>;
using ListEnvironmentVlansPaginator = Aws::Utils::Pagination::Paginator<EVSClient, Model::ListEnvironmentVlansRequest,
                                                                        Pagination::ListEnvironmentVlansPaginationTraits<EVSClient>>;
using ListVmEntitlementsPaginator = Aws::Utils::Pagination::Paginator<EVSClient, Model::ListVmEntitlementsRequest,
                                                                      Pagination::ListVmEntitlementsPaginationTraits<EVSClient>>;

}  // namespace EVS
}  // namespace Aws
