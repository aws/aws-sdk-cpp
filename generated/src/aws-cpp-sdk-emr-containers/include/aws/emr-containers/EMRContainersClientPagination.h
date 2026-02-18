/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/emr-containers/EMRContainersClient.h>
#include <aws/emr-containers/model/ListJobRunsPaginationTraits.h>
#include <aws/emr-containers/model/ListJobTemplatesPaginationTraits.h>
#include <aws/emr-containers/model/ListManagedEndpointsPaginationTraits.h>
#include <aws/emr-containers/model/ListSecurityConfigurationsPaginationTraits.h>
#include <aws/emr-containers/model/ListVirtualClustersPaginationTraits.h>

namespace Aws {
namespace EMRContainers {

using ListJobRunsPaginator = Aws::Utils::Pagination::Paginator<EMRContainersClient, Model::ListJobRunsRequest,
                                                               Pagination::ListJobRunsPaginationTraits<EMRContainersClient>>;
using ListJobTemplatesPaginator = Aws::Utils::Pagination::Paginator<EMRContainersClient, Model::ListJobTemplatesRequest,
                                                                    Pagination::ListJobTemplatesPaginationTraits<EMRContainersClient>>;
using ListManagedEndpointsPaginator =
    Aws::Utils::Pagination::Paginator<EMRContainersClient, Model::ListManagedEndpointsRequest,
                                      Pagination::ListManagedEndpointsPaginationTraits<EMRContainersClient>>;
using ListSecurityConfigurationsPaginator =
    Aws::Utils::Pagination::Paginator<EMRContainersClient, Model::ListSecurityConfigurationsRequest,
                                      Pagination::ListSecurityConfigurationsPaginationTraits<EMRContainersClient>>;
using ListVirtualClustersPaginator =
    Aws::Utils::Pagination::Paginator<EMRContainersClient, Model::ListVirtualClustersRequest,
                                      Pagination::ListVirtualClustersPaginationTraits<EMRContainersClient>>;

}  // namespace EMRContainers
}  // namespace Aws
