/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controlcatalog/ControlCatalogClient.h>
#include <aws/controlcatalog/model/ListCommonControlsPaginationTraits.h>
#include <aws/controlcatalog/model/ListControlMappingsPaginationTraits.h>
#include <aws/controlcatalog/model/ListControlsPaginationTraits.h>
#include <aws/controlcatalog/model/ListDomainsPaginationTraits.h>
#include <aws/controlcatalog/model/ListObjectivesPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace ControlCatalog {

using ListCommonControlsPaginator = Aws::Utils::Pagination::Paginator<ControlCatalogClient, Model::ListCommonControlsRequest,
                                                                      Pagination::ListCommonControlsPaginationTraits<ControlCatalogClient>>;
using ListControlMappingsPaginator =
    Aws::Utils::Pagination::Paginator<ControlCatalogClient, Model::ListControlMappingsRequest,
                                      Pagination::ListControlMappingsPaginationTraits<ControlCatalogClient>>;
using ListControlsPaginator = Aws::Utils::Pagination::Paginator<ControlCatalogClient, Model::ListControlsRequest,
                                                                Pagination::ListControlsPaginationTraits<ControlCatalogClient>>;
using ListDomainsPaginator = Aws::Utils::Pagination::Paginator<ControlCatalogClient, Model::ListDomainsRequest,
                                                               Pagination::ListDomainsPaginationTraits<ControlCatalogClient>>;
using ListObjectivesPaginator = Aws::Utils::Pagination::Paginator<ControlCatalogClient, Model::ListObjectivesRequest,
                                                                  Pagination::ListObjectivesPaginationTraits<ControlCatalogClient>>;

}  // namespace ControlCatalog
}  // namespace Aws
