/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/elasticmapreduce/EMRClient.h>
#include <aws/elasticmapreduce/model/ListBootstrapActionsPaginationTraits.h>
#include <aws/elasticmapreduce/model/ListClustersPaginationTraits.h>
#include <aws/elasticmapreduce/model/ListInstanceFleetsPaginationTraits.h>
#include <aws/elasticmapreduce/model/ListInstanceGroupsPaginationTraits.h>
#include <aws/elasticmapreduce/model/ListInstancesPaginationTraits.h>
#include <aws/elasticmapreduce/model/ListNotebookExecutionsPaginationTraits.h>
#include <aws/elasticmapreduce/model/ListReleaseLabelsPaginationTraits.h>
#include <aws/elasticmapreduce/model/ListSecurityConfigurationsPaginationTraits.h>
#include <aws/elasticmapreduce/model/ListStepsPaginationTraits.h>
#include <aws/elasticmapreduce/model/ListStudioSessionMappingsPaginationTraits.h>
#include <aws/elasticmapreduce/model/ListStudiosPaginationTraits.h>
#include <aws/elasticmapreduce/model/ListSupportedInstanceTypesPaginationTraits.h>

namespace Aws {
namespace EMR {

using ListBootstrapActionsPaginator = Aws::Utils::Pagination::Paginator<EMRClient, Model::ListBootstrapActionsRequest,
                                                                        Pagination::ListBootstrapActionsPaginationTraits<EMRClient>>;
using ListClustersPaginator =
    Aws::Utils::Pagination::Paginator<EMRClient, Model::ListClustersRequest, Pagination::ListClustersPaginationTraits<EMRClient>>;
using ListInstanceFleetsPaginator = Aws::Utils::Pagination::Paginator<EMRClient, Model::ListInstanceFleetsRequest,
                                                                      Pagination::ListInstanceFleetsPaginationTraits<EMRClient>>;
using ListInstanceGroupsPaginator = Aws::Utils::Pagination::Paginator<EMRClient, Model::ListInstanceGroupsRequest,
                                                                      Pagination::ListInstanceGroupsPaginationTraits<EMRClient>>;
using ListInstancesPaginator =
    Aws::Utils::Pagination::Paginator<EMRClient, Model::ListInstancesRequest, Pagination::ListInstancesPaginationTraits<EMRClient>>;
using ListNotebookExecutionsPaginator = Aws::Utils::Pagination::Paginator<EMRClient, Model::ListNotebookExecutionsRequest,
                                                                          Pagination::ListNotebookExecutionsPaginationTraits<EMRClient>>;
using ListReleaseLabelsPaginator =
    Aws::Utils::Pagination::Paginator<EMRClient, Model::ListReleaseLabelsRequest, Pagination::ListReleaseLabelsPaginationTraits<EMRClient>>;
using ListSecurityConfigurationsPaginator =
    Aws::Utils::Pagination::Paginator<EMRClient, Model::ListSecurityConfigurationsRequest,
                                      Pagination::ListSecurityConfigurationsPaginationTraits<EMRClient>>;
using ListStepsPaginator =
    Aws::Utils::Pagination::Paginator<EMRClient, Model::ListStepsRequest, Pagination::ListStepsPaginationTraits<EMRClient>>;
using ListStudiosPaginator =
    Aws::Utils::Pagination::Paginator<EMRClient, Model::ListStudiosRequest, Pagination::ListStudiosPaginationTraits<EMRClient>>;
using ListStudioSessionMappingsPaginator =
    Aws::Utils::Pagination::Paginator<EMRClient, Model::ListStudioSessionMappingsRequest,
                                      Pagination::ListStudioSessionMappingsPaginationTraits<EMRClient>>;
using ListSupportedInstanceTypesPaginator =
    Aws::Utils::Pagination::Paginator<EMRClient, Model::ListSupportedInstanceTypesRequest,
                                      Pagination::ListSupportedInstanceTypesPaginationTraits<EMRClient>>;

}  // namespace EMR
}  // namespace Aws
