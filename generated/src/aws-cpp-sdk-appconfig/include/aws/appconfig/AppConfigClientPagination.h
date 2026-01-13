/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfigClient.h>
#include <aws/appconfig/model/ListApplicationsPaginationTraits.h>
#include <aws/appconfig/model/ListConfigurationProfilesPaginationTraits.h>
#include <aws/appconfig/model/ListDeploymentStrategiesPaginationTraits.h>
#include <aws/appconfig/model/ListDeploymentsPaginationTraits.h>
#include <aws/appconfig/model/ListEnvironmentsPaginationTraits.h>
#include <aws/appconfig/model/ListExtensionAssociationsPaginationTraits.h>
#include <aws/appconfig/model/ListExtensionsPaginationTraits.h>
#include <aws/appconfig/model/ListHostedConfigurationVersionsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace AppConfig {

using ListApplicationsPaginator = Aws::Utils::Pagination::Paginator<AppConfigClient, Model::ListApplicationsRequest,
                                                                    Pagination::ListApplicationsPaginationTraits<AppConfigClient>>;
using ListConfigurationProfilesPaginator =
    Aws::Utils::Pagination::Paginator<AppConfigClient, Model::ListConfigurationProfilesRequest,
                                      Pagination::ListConfigurationProfilesPaginationTraits<AppConfigClient>>;
using ListDeploymentsPaginator = Aws::Utils::Pagination::Paginator<AppConfigClient, Model::ListDeploymentsRequest,
                                                                   Pagination::ListDeploymentsPaginationTraits<AppConfigClient>>;
using ListDeploymentStrategiesPaginator =
    Aws::Utils::Pagination::Paginator<AppConfigClient, Model::ListDeploymentStrategiesRequest,
                                      Pagination::ListDeploymentStrategiesPaginationTraits<AppConfigClient>>;
using ListEnvironmentsPaginator = Aws::Utils::Pagination::Paginator<AppConfigClient, Model::ListEnvironmentsRequest,
                                                                    Pagination::ListEnvironmentsPaginationTraits<AppConfigClient>>;
using ListExtensionAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<AppConfigClient, Model::ListExtensionAssociationsRequest,
                                      Pagination::ListExtensionAssociationsPaginationTraits<AppConfigClient>>;
using ListExtensionsPaginator = Aws::Utils::Pagination::Paginator<AppConfigClient, Model::ListExtensionsRequest,
                                                                  Pagination::ListExtensionsPaginationTraits<AppConfigClient>>;
using ListHostedConfigurationVersionsPaginator =
    Aws::Utils::Pagination::Paginator<AppConfigClient, Model::ListHostedConfigurationVersionsRequest,
                                      Pagination::ListHostedConfigurationVersionsPaginationTraits<AppConfigClient>>;

}  // namespace AppConfig
}  // namespace Aws
