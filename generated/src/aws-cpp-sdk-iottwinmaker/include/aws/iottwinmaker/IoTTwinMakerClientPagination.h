/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/iottwinmaker/IoTTwinMakerClient.h>
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

namespace Aws {
namespace IoTTwinMaker {

using ExecuteQueryPaginator = Aws::Utils::Pagination::Paginator<IoTTwinMakerClient, Model::ExecuteQueryRequest,
                                                                Pagination::ExecuteQueryPaginationTraits<IoTTwinMakerClient>>;
using GetPropertyValuePaginator = Aws::Utils::Pagination::Paginator<IoTTwinMakerClient, Model::GetPropertyValueRequest,
                                                                    Pagination::GetPropertyValuePaginationTraits<IoTTwinMakerClient>>;
using GetPropertyValueHistoryPaginator =
    Aws::Utils::Pagination::Paginator<IoTTwinMakerClient, Model::GetPropertyValueHistoryRequest,
                                      Pagination::GetPropertyValueHistoryPaginationTraits<IoTTwinMakerClient>>;
using ListComponentsPaginator = Aws::Utils::Pagination::Paginator<IoTTwinMakerClient, Model::ListComponentsRequest,
                                                                  Pagination::ListComponentsPaginationTraits<IoTTwinMakerClient>>;
using ListComponentTypesPaginator = Aws::Utils::Pagination::Paginator<IoTTwinMakerClient, Model::ListComponentTypesRequest,
                                                                      Pagination::ListComponentTypesPaginationTraits<IoTTwinMakerClient>>;
using ListEntitiesPaginator = Aws::Utils::Pagination::Paginator<IoTTwinMakerClient, Model::ListEntitiesRequest,
                                                                Pagination::ListEntitiesPaginationTraits<IoTTwinMakerClient>>;
using ListMetadataTransferJobsPaginator =
    Aws::Utils::Pagination::Paginator<IoTTwinMakerClient, Model::ListMetadataTransferJobsRequest,
                                      Pagination::ListMetadataTransferJobsPaginationTraits<IoTTwinMakerClient>>;
using ListPropertiesPaginator = Aws::Utils::Pagination::Paginator<IoTTwinMakerClient, Model::ListPropertiesRequest,
                                                                  Pagination::ListPropertiesPaginationTraits<IoTTwinMakerClient>>;
using ListScenesPaginator = Aws::Utils::Pagination::Paginator<IoTTwinMakerClient, Model::ListScenesRequest,
                                                              Pagination::ListScenesPaginationTraits<IoTTwinMakerClient>>;
using ListSyncJobsPaginator = Aws::Utils::Pagination::Paginator<IoTTwinMakerClient, Model::ListSyncJobsRequest,
                                                                Pagination::ListSyncJobsPaginationTraits<IoTTwinMakerClient>>;
using ListSyncResourcesPaginator = Aws::Utils::Pagination::Paginator<IoTTwinMakerClient, Model::ListSyncResourcesRequest,
                                                                     Pagination::ListSyncResourcesPaginationTraits<IoTTwinMakerClient>>;
using ListWorkspacesPaginator = Aws::Utils::Pagination::Paginator<IoTTwinMakerClient, Model::ListWorkspacesRequest,
                                                                  Pagination::ListWorkspacesPaginationTraits<IoTTwinMakerClient>>;

}  // namespace IoTTwinMaker
}  // namespace Aws
