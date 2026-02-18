/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/iottwinmaker/model/ExecuteQueryPaginationTraits.h>
#include <aws/iottwinmaker/model/GetPropertyValueHistoryPaginationTraits.h>
#include <aws/iottwinmaker/model/GetPropertyValuePaginationTraits.h>
#include <aws/iottwinmaker/model/ListComponentTypesPaginationTraits.h>
#include <aws/iottwinmaker/model/ListComponentsPaginationTraits.h>
#include <aws/iottwinmaker/model/ListEntitiesPaginationTraits.h>
#include <aws/iottwinmaker/model/ListMetadataTransferJobsPaginationTraits.h>
#include <aws/iottwinmaker/model/ListPropertiesPaginationTraits.h>
#include <aws/iottwinmaker/model/ListScenesPaginationTraits.h>
#include <aws/iottwinmaker/model/ListSyncJobsPaginationTraits.h>
#include <aws/iottwinmaker/model/ListSyncResourcesPaginationTraits.h>
#include <aws/iottwinmaker/model/ListWorkspacesPaginationTraits.h>

#include <memory>

namespace Aws {
namespace IoTTwinMaker {

class IoTTwinMakerClient;

template <typename DerivedClient>
class IoTTwinMakerPaginationBase {
 public:
  /**
   * Create a paginator for ExecuteQuery operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ExecuteQueryRequest, Pagination::ExecuteQueryPaginationTraits<DerivedClient>>
  ExecuteQueryPaginator(const Model::ExecuteQueryRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ExecuteQueryRequest,
                                             Pagination::ExecuteQueryPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for GetPropertyValue operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetPropertyValueRequest,
                                    Pagination::GetPropertyValuePaginationTraits<DerivedClient>>
  GetPropertyValuePaginator(const Model::GetPropertyValueRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetPropertyValueRequest,
                                             Pagination::GetPropertyValuePaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for GetPropertyValueHistory operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetPropertyValueHistoryRequest,
                                    Pagination::GetPropertyValueHistoryPaginationTraits<DerivedClient>>
  GetPropertyValueHistoryPaginator(const Model::GetPropertyValueHistoryRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetPropertyValueHistoryRequest,
                                             Pagination::GetPropertyValueHistoryPaginationTraits<DerivedClient>>{
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
   * Create a paginator for ListComponentTypes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListComponentTypesRequest,
                                    Pagination::ListComponentTypesPaginationTraits<DerivedClient>>
  ListComponentTypesPaginator(const Model::ListComponentTypesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListComponentTypesRequest,
                                             Pagination::ListComponentTypesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListEntities operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEntitiesRequest, Pagination::ListEntitiesPaginationTraits<DerivedClient>>
  ListEntitiesPaginator(const Model::ListEntitiesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEntitiesRequest,
                                             Pagination::ListEntitiesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListMetadataTransferJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMetadataTransferJobsRequest,
                                    Pagination::ListMetadataTransferJobsPaginationTraits<DerivedClient>>
  ListMetadataTransferJobsPaginator(const Model::ListMetadataTransferJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMetadataTransferJobsRequest,
                                             Pagination::ListMetadataTransferJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListProperties operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPropertiesRequest, Pagination::ListPropertiesPaginationTraits<DerivedClient>>
  ListPropertiesPaginator(const Model::ListPropertiesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPropertiesRequest,
                                             Pagination::ListPropertiesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListScenes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListScenesRequest, Pagination::ListScenesPaginationTraits<DerivedClient>>
  ListScenesPaginator(const Model::ListScenesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListScenesRequest,
                                             Pagination::ListScenesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for ListSyncJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSyncJobsRequest, Pagination::ListSyncJobsPaginationTraits<DerivedClient>>
  ListSyncJobsPaginator(const Model::ListSyncJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSyncJobsRequest,
                                             Pagination::ListSyncJobsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListSyncResources operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSyncResourcesRequest,
                                    Pagination::ListSyncResourcesPaginationTraits<DerivedClient>>
  ListSyncResourcesPaginator(const Model::ListSyncResourcesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSyncResourcesRequest,
                                             Pagination::ListSyncResourcesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListWorkspaces operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkspacesRequest, Pagination::ListWorkspacesPaginationTraits<DerivedClient>>
  ListWorkspacesPaginator(const Model::ListWorkspacesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkspacesRequest,
                                             Pagination::ListWorkspacesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }
};
}  // namespace IoTTwinMaker
}  // namespace Aws
