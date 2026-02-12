/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/ecs/ECSClient.h>
#include <aws/ecs/model/ListAccountSettingsPaginationTraits.h>
#include <aws/ecs/model/ListAttributesPaginationTraits.h>
#include <aws/ecs/model/ListClustersPaginationTraits.h>
#include <aws/ecs/model/ListContainerInstancesPaginationTraits.h>
#include <aws/ecs/model/ListServicesByNamespacePaginationTraits.h>
#include <aws/ecs/model/ListServicesPaginationTraits.h>
#include <aws/ecs/model/ListTaskDefinitionFamiliesPaginationTraits.h>
#include <aws/ecs/model/ListTaskDefinitionsPaginationTraits.h>
#include <aws/ecs/model/ListTasksPaginationTraits.h>

namespace Aws {
namespace ECS {

using ListAccountSettingsPaginator = Aws::Utils::Pagination::Paginator<ECSClient, Model::ListAccountSettingsRequest,
                                                                       Pagination::ListAccountSettingsPaginationTraits<ECSClient>>;
using ListAttributesPaginator =
    Aws::Utils::Pagination::Paginator<ECSClient, Model::ListAttributesRequest, Pagination::ListAttributesPaginationTraits<ECSClient>>;
using ListClustersPaginator =
    Aws::Utils::Pagination::Paginator<ECSClient, Model::ListClustersRequest, Pagination::ListClustersPaginationTraits<ECSClient>>;
using ListContainerInstancesPaginator = Aws::Utils::Pagination::Paginator<ECSClient, Model::ListContainerInstancesRequest,
                                                                          Pagination::ListContainerInstancesPaginationTraits<ECSClient>>;
using ListServicesPaginator =
    Aws::Utils::Pagination::Paginator<ECSClient, Model::ListServicesRequest, Pagination::ListServicesPaginationTraits<ECSClient>>;
using ListServicesByNamespacePaginator = Aws::Utils::Pagination::Paginator<ECSClient, Model::ListServicesByNamespaceRequest,
                                                                           Pagination::ListServicesByNamespacePaginationTraits<ECSClient>>;
using ListTaskDefinitionFamiliesPaginator =
    Aws::Utils::Pagination::Paginator<ECSClient, Model::ListTaskDefinitionFamiliesRequest,
                                      Pagination::ListTaskDefinitionFamiliesPaginationTraits<ECSClient>>;
using ListTaskDefinitionsPaginator = Aws::Utils::Pagination::Paginator<ECSClient, Model::ListTaskDefinitionsRequest,
                                                                       Pagination::ListTaskDefinitionsPaginationTraits<ECSClient>>;
using ListTasksPaginator =
    Aws::Utils::Pagination::Paginator<ECSClient, Model::ListTasksRequest, Pagination::ListTasksPaginationTraits<ECSClient>>;

}  // namespace ECS
}  // namespace Aws
