/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/ecs/model/ListAccountSettingsPaginationTraits.h>
#include <aws/ecs/model/ListAttributesPaginationTraits.h>
#include <aws/ecs/model/ListClustersPaginationTraits.h>
#include <aws/ecs/model/ListContainerInstancesPaginationTraits.h>
#include <aws/ecs/model/ListServicesByNamespacePaginationTraits.h>
#include <aws/ecs/model/ListServicesPaginationTraits.h>
#include <aws/ecs/model/ListTaskDefinitionFamiliesPaginationTraits.h>
#include <aws/ecs/model/ListTaskDefinitionsPaginationTraits.h>
#include <aws/ecs/model/ListTasksPaginationTraits.h>

#include <memory>

namespace Aws {
namespace ECS {

class ECSClient;

template <typename DerivedClient>
class ECSPaginationBase {
 public:
  /**
   * Create a paginator for ListAccountSettings operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccountSettingsRequest,
                                    Pagination::ListAccountSettingsPaginationTraits<DerivedClient>>
  ListAccountSettingsPaginator(const Model::ListAccountSettingsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccountSettingsRequest,
                                             Pagination::ListAccountSettingsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAttributes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAttributesRequest, Pagination::ListAttributesPaginationTraits<DerivedClient>>
  ListAttributesPaginator(const Model::ListAttributesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAttributesRequest,
                                             Pagination::ListAttributesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListClusters operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListClustersRequest, Pagination::ListClustersPaginationTraits<DerivedClient>>
  ListClustersPaginator(const Model::ListClustersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListClustersRequest,
                                             Pagination::ListClustersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListContainerInstances operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListContainerInstancesRequest,
                                    Pagination::ListContainerInstancesPaginationTraits<DerivedClient>>
  ListContainerInstancesPaginator(const Model::ListContainerInstancesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListContainerInstancesRequest,
                                             Pagination::ListContainerInstancesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListServices operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServicesRequest, Pagination::ListServicesPaginationTraits<DerivedClient>>
  ListServicesPaginator(const Model::ListServicesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServicesRequest,
                                             Pagination::ListServicesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListServicesByNamespace operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServicesByNamespaceRequest,
                                    Pagination::ListServicesByNamespacePaginationTraits<DerivedClient>>
  ListServicesByNamespacePaginator(const Model::ListServicesByNamespaceRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServicesByNamespaceRequest,
                                             Pagination::ListServicesByNamespacePaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTaskDefinitionFamilies operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTaskDefinitionFamiliesRequest,
                                    Pagination::ListTaskDefinitionFamiliesPaginationTraits<DerivedClient>>
  ListTaskDefinitionFamiliesPaginator(const Model::ListTaskDefinitionFamiliesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTaskDefinitionFamiliesRequest,
                                             Pagination::ListTaskDefinitionFamiliesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTaskDefinitions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTaskDefinitionsRequest,
                                    Pagination::ListTaskDefinitionsPaginationTraits<DerivedClient>>
  ListTaskDefinitionsPaginator(const Model::ListTaskDefinitionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTaskDefinitionsRequest,
                                             Pagination::ListTaskDefinitionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTasks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTasksRequest, Pagination::ListTasksPaginationTraits<DerivedClient>>
  ListTasksPaginator(const Model::ListTasksRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTasksRequest, Pagination::ListTasksPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace ECS
}  // namespace Aws
