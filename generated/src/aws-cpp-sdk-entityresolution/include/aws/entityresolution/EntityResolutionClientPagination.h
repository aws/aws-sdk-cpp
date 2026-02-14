/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/entityresolution/EntityResolutionClient.h>
#include <aws/entityresolution/model/ListIdMappingJobsPaginationTraits.h>
#include <aws/entityresolution/model/ListIdMappingWorkflowsPaginationTraits.h>
#include <aws/entityresolution/model/ListIdNamespacesPaginationTraits.h>
#include <aws/entityresolution/model/ListMatchingJobsPaginationTraits.h>
#include <aws/entityresolution/model/ListMatchingWorkflowsPaginationTraits.h>
#include <aws/entityresolution/model/ListProviderServicesPaginationTraits.h>
#include <aws/entityresolution/model/ListSchemaMappingsPaginationTraits.h>

namespace Aws {
namespace EntityResolution {

using ListIdMappingJobsPaginator = Aws::Utils::Pagination::Paginator<EntityResolutionClient, Model::ListIdMappingJobsRequest,
                                                                     Pagination::ListIdMappingJobsPaginationTraits<EntityResolutionClient>>;
using ListIdMappingWorkflowsPaginator =
    Aws::Utils::Pagination::Paginator<EntityResolutionClient, Model::ListIdMappingWorkflowsRequest,
                                      Pagination::ListIdMappingWorkflowsPaginationTraits<EntityResolutionClient>>;
using ListIdNamespacesPaginator = Aws::Utils::Pagination::Paginator<EntityResolutionClient, Model::ListIdNamespacesRequest,
                                                                    Pagination::ListIdNamespacesPaginationTraits<EntityResolutionClient>>;
using ListMatchingJobsPaginator = Aws::Utils::Pagination::Paginator<EntityResolutionClient, Model::ListMatchingJobsRequest,
                                                                    Pagination::ListMatchingJobsPaginationTraits<EntityResolutionClient>>;
using ListMatchingWorkflowsPaginator =
    Aws::Utils::Pagination::Paginator<EntityResolutionClient, Model::ListMatchingWorkflowsRequest,
                                      Pagination::ListMatchingWorkflowsPaginationTraits<EntityResolutionClient>>;
using ListProviderServicesPaginator =
    Aws::Utils::Pagination::Paginator<EntityResolutionClient, Model::ListProviderServicesRequest,
                                      Pagination::ListProviderServicesPaginationTraits<EntityResolutionClient>>;
using ListSchemaMappingsPaginator =
    Aws::Utils::Pagination::Paginator<EntityResolutionClient, Model::ListSchemaMappingsRequest,
                                      Pagination::ListSchemaMappingsPaginationTraits<EntityResolutionClient>>;

}  // namespace EntityResolution
}  // namespace Aws
