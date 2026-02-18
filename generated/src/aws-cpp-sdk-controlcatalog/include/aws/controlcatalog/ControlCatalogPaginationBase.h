/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/controlcatalog/model/ListCommonControlsPaginationTraits.h>
#include <aws/controlcatalog/model/ListControlMappingsPaginationTraits.h>
#include <aws/controlcatalog/model/ListControlsPaginationTraits.h>
#include <aws/controlcatalog/model/ListDomainsPaginationTraits.h>
#include <aws/controlcatalog/model/ListObjectivesPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace ControlCatalog {

class ControlCatalogClient;

template <typename DerivedClient>
class ControlCatalogPaginationBase {
 public:
  /**
   * Create a paginator for ListCommonControls operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCommonControlsRequest,
                                    Pagination::ListCommonControlsPaginationTraits<DerivedClient>>
  ListCommonControlsPaginator(const Model::ListCommonControlsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCommonControlsRequest,
                                             Pagination::ListCommonControlsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListControlMappings operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListControlMappingsRequest,
                                    Pagination::ListControlMappingsPaginationTraits<DerivedClient>>
  ListControlMappingsPaginator(const Model::ListControlMappingsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListControlMappingsRequest,
                                             Pagination::ListControlMappingsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListControls operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListControlsRequest, Pagination::ListControlsPaginationTraits<DerivedClient>>
  ListControlsPaginator(const Model::ListControlsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListControlsRequest,
                                             Pagination::ListControlsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListDomains operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDomainsRequest, Pagination::ListDomainsPaginationTraits<DerivedClient>>
  ListDomainsPaginator(const Model::ListDomainsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDomainsRequest,
                                             Pagination::ListDomainsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListObjectives operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListObjectivesRequest, Pagination::ListObjectivesPaginationTraits<DerivedClient>>
  ListObjectivesPaginator(const Model::ListObjectivesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListObjectivesRequest,
                                             Pagination::ListObjectivesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }
};
}  // namespace ControlCatalog
}  // namespace Aws
