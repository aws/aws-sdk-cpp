/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/greengrassv2/model/ListClientDevicesAssociatedWithCoreDevicePaginationTraits.h>
#include <aws/greengrassv2/model/ListComponentVersionsPaginationTraits.h>
#include <aws/greengrassv2/model/ListComponentsPaginationTraits.h>
#include <aws/greengrassv2/model/ListCoreDevicesPaginationTraits.h>
#include <aws/greengrassv2/model/ListDeploymentsPaginationTraits.h>
#include <aws/greengrassv2/model/ListEffectiveDeploymentsPaginationTraits.h>
#include <aws/greengrassv2/model/ListInstalledComponentsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace GreengrassV2 {

class GreengrassV2Client;

template <typename DerivedClient>
class GreengrassV2PaginationBase {
 public:
  /**
   * Create a paginator for ListClientDevicesAssociatedWithCoreDevice operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListClientDevicesAssociatedWithCoreDeviceRequest,
                                    Pagination::ListClientDevicesAssociatedWithCoreDevicePaginationTraits<DerivedClient>>
  ListClientDevicesAssociatedWithCoreDevicePaginator(const Model::ListClientDevicesAssociatedWithCoreDeviceRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListClientDevicesAssociatedWithCoreDeviceRequest,
                                             Pagination::ListClientDevicesAssociatedWithCoreDevicePaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListComponents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListComponentsRequest, Pagination::ListComponentsPaginationTraits<DerivedClient>>
  ListComponentsPaginator(const Model::ListComponentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListComponentsRequest,
                                             Pagination::ListComponentsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListComponentVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListComponentVersionsRequest,
                                    Pagination::ListComponentVersionsPaginationTraits<DerivedClient>>
  ListComponentVersionsPaginator(const Model::ListComponentVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListComponentVersionsRequest,
                                             Pagination::ListComponentVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCoreDevices operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCoreDevicesRequest,
                                    Pagination::ListCoreDevicesPaginationTraits<DerivedClient>>
  ListCoreDevicesPaginator(const Model::ListCoreDevicesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCoreDevicesRequest,
                                             Pagination::ListCoreDevicesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListDeployments operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDeploymentsRequest,
                                    Pagination::ListDeploymentsPaginationTraits<DerivedClient>>
  ListDeploymentsPaginator(const Model::ListDeploymentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDeploymentsRequest,
                                             Pagination::ListDeploymentsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListEffectiveDeployments operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEffectiveDeploymentsRequest,
                                    Pagination::ListEffectiveDeploymentsPaginationTraits<DerivedClient>>
  ListEffectiveDeploymentsPaginator(const Model::ListEffectiveDeploymentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEffectiveDeploymentsRequest,
                                             Pagination::ListEffectiveDeploymentsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListInstalledComponents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInstalledComponentsRequest,
                                    Pagination::ListInstalledComponentsPaginationTraits<DerivedClient>>
  ListInstalledComponentsPaginator(const Model::ListInstalledComponentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInstalledComponentsRequest,
                                             Pagination::ListInstalledComponentsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace GreengrassV2
}  // namespace Aws
