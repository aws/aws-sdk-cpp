/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/appconfig/model/ListApplicationsPaginationTraits.h>
#include <aws/appconfig/model/ListConfigurationProfilesPaginationTraits.h>
#include <aws/appconfig/model/ListDeploymentStrategiesPaginationTraits.h>
#include <aws/appconfig/model/ListDeploymentsPaginationTraits.h>
#include <aws/appconfig/model/ListEnvironmentsPaginationTraits.h>
#include <aws/appconfig/model/ListExtensionAssociationsPaginationTraits.h>
#include <aws/appconfig/model/ListExtensionsPaginationTraits.h>
#include <aws/appconfig/model/ListHostedConfigurationVersionsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace AppConfig {

class AppConfigClient;

template <typename DerivedClient>
class AppConfigPaginationBase {
 public:
  /**
   * Create a paginator for ListApplications operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationsRequest,
                                    Pagination::ListApplicationsPaginationTraits<DerivedClient>>
  ListApplicationsPaginator(const Model::ListApplicationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationsRequest,
                                             Pagination::ListApplicationsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListConfigurationProfiles operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConfigurationProfilesRequest,
                                    Pagination::ListConfigurationProfilesPaginationTraits<DerivedClient>>
  ListConfigurationProfilesPaginator(const Model::ListConfigurationProfilesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConfigurationProfilesRequest,
                                             Pagination::ListConfigurationProfilesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
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
   * Create a paginator for ListDeploymentStrategies operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDeploymentStrategiesRequest,
                                    Pagination::ListDeploymentStrategiesPaginationTraits<DerivedClient>>
  ListDeploymentStrategiesPaginator(const Model::ListDeploymentStrategiesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDeploymentStrategiesRequest,
                                             Pagination::ListDeploymentStrategiesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListEnvironments operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEnvironmentsRequest,
                                    Pagination::ListEnvironmentsPaginationTraits<DerivedClient>>
  ListEnvironmentsPaginator(const Model::ListEnvironmentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEnvironmentsRequest,
                                             Pagination::ListEnvironmentsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListExtensionAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListExtensionAssociationsRequest,
                                    Pagination::ListExtensionAssociationsPaginationTraits<DerivedClient>>
  ListExtensionAssociationsPaginator(const Model::ListExtensionAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListExtensionAssociationsRequest,
                                             Pagination::ListExtensionAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListExtensions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListExtensionsRequest, Pagination::ListExtensionsPaginationTraits<DerivedClient>>
  ListExtensionsPaginator(const Model::ListExtensionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListExtensionsRequest,
                                             Pagination::ListExtensionsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListHostedConfigurationVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListHostedConfigurationVersionsRequest,
                                    Pagination::ListHostedConfigurationVersionsPaginationTraits<DerivedClient>>
  ListHostedConfigurationVersionsPaginator(const Model::ListHostedConfigurationVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListHostedConfigurationVersionsRequest,
                                             Pagination::ListHostedConfigurationVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace AppConfig
}  // namespace Aws
