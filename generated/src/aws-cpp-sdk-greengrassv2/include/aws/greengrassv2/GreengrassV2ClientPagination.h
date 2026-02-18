/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/greengrassv2/GreengrassV2Client.h>
#include <aws/greengrassv2/model/ListClientDevicesAssociatedWithCoreDevicePaginationTraits.h>
#include <aws/greengrassv2/model/ListComponentVersionsPaginationTraits.h>
#include <aws/greengrassv2/model/ListComponentsPaginationTraits.h>
#include <aws/greengrassv2/model/ListCoreDevicesPaginationTraits.h>
#include <aws/greengrassv2/model/ListDeploymentsPaginationTraits.h>
#include <aws/greengrassv2/model/ListEffectiveDeploymentsPaginationTraits.h>
#include <aws/greengrassv2/model/ListInstalledComponentsPaginationTraits.h>

namespace Aws {
namespace GreengrassV2 {

using ListClientDevicesAssociatedWithCoreDevicePaginator =
    Aws::Utils::Pagination::Paginator<GreengrassV2Client, Model::ListClientDevicesAssociatedWithCoreDeviceRequest,
                                      Pagination::ListClientDevicesAssociatedWithCoreDevicePaginationTraits<GreengrassV2Client>>;
using ListComponentsPaginator = Aws::Utils::Pagination::Paginator<GreengrassV2Client, Model::ListComponentsRequest,
                                                                  Pagination::ListComponentsPaginationTraits<GreengrassV2Client>>;
using ListComponentVersionsPaginator =
    Aws::Utils::Pagination::Paginator<GreengrassV2Client, Model::ListComponentVersionsRequest,
                                      Pagination::ListComponentVersionsPaginationTraits<GreengrassV2Client>>;
using ListCoreDevicesPaginator = Aws::Utils::Pagination::Paginator<GreengrassV2Client, Model::ListCoreDevicesRequest,
                                                                   Pagination::ListCoreDevicesPaginationTraits<GreengrassV2Client>>;
using ListDeploymentsPaginator = Aws::Utils::Pagination::Paginator<GreengrassV2Client, Model::ListDeploymentsRequest,
                                                                   Pagination::ListDeploymentsPaginationTraits<GreengrassV2Client>>;
using ListEffectiveDeploymentsPaginator =
    Aws::Utils::Pagination::Paginator<GreengrassV2Client, Model::ListEffectiveDeploymentsRequest,
                                      Pagination::ListEffectiveDeploymentsPaginationTraits<GreengrassV2Client>>;
using ListInstalledComponentsPaginator =
    Aws::Utils::Pagination::Paginator<GreengrassV2Client, Model::ListInstalledComponentsRequest,
                                      Pagination::ListInstalledComponentsPaginationTraits<GreengrassV2Client>>;

}  // namespace GreengrassV2
}  // namespace Aws
