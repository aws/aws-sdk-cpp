/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/codeartifact/model/ListAllowedRepositoriesForGroupPaginationTraits.h>
#include <aws/codeartifact/model/ListAssociatedPackagesPaginationTraits.h>
#include <aws/codeartifact/model/ListDomainsPaginationTraits.h>
#include <aws/codeartifact/model/ListPackageGroupsPaginationTraits.h>
#include <aws/codeartifact/model/ListPackageVersionAssetsPaginationTraits.h>
#include <aws/codeartifact/model/ListPackageVersionsPaginationTraits.h>
#include <aws/codeartifact/model/ListPackagesPaginationTraits.h>
#include <aws/codeartifact/model/ListRepositoriesInDomainPaginationTraits.h>
#include <aws/codeartifact/model/ListRepositoriesPaginationTraits.h>
#include <aws/codeartifact/model/ListSubPackageGroupsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace CodeArtifact {

class CodeArtifactClient;

template <typename DerivedClient>
class CodeArtifactPaginationBase {
 public:
  /**
   * Create a paginator for ListAllowedRepositoriesForGroup operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAllowedRepositoriesForGroupRequest,
                                    Pagination::ListAllowedRepositoriesForGroupPaginationTraits<DerivedClient>>
  ListAllowedRepositoriesForGroupPaginator(const Model::ListAllowedRepositoriesForGroupRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAllowedRepositoriesForGroupRequest,
                                             Pagination::ListAllowedRepositoriesForGroupPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAssociatedPackages operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssociatedPackagesRequest,
                                    Pagination::ListAssociatedPackagesPaginationTraits<DerivedClient>>
  ListAssociatedPackagesPaginator(const Model::ListAssociatedPackagesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssociatedPackagesRequest,
                                             Pagination::ListAssociatedPackagesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
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
   * Create a paginator for ListPackageGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPackageGroupsRequest,
                                    Pagination::ListPackageGroupsPaginationTraits<DerivedClient>>
  ListPackageGroupsPaginator(const Model::ListPackageGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPackageGroupsRequest,
                                             Pagination::ListPackageGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPackages operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPackagesRequest, Pagination::ListPackagesPaginationTraits<DerivedClient>>
  ListPackagesPaginator(const Model::ListPackagesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPackagesRequest,
                                             Pagination::ListPackagesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListPackageVersionAssets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPackageVersionAssetsRequest,
                                    Pagination::ListPackageVersionAssetsPaginationTraits<DerivedClient>>
  ListPackageVersionAssetsPaginator(const Model::ListPackageVersionAssetsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPackageVersionAssetsRequest,
                                             Pagination::ListPackageVersionAssetsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPackageVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPackageVersionsRequest,
                                    Pagination::ListPackageVersionsPaginationTraits<DerivedClient>>
  ListPackageVersionsPaginator(const Model::ListPackageVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPackageVersionsRequest,
                                             Pagination::ListPackageVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRepositories operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRepositoriesRequest,
                                    Pagination::ListRepositoriesPaginationTraits<DerivedClient>>
  ListRepositoriesPaginator(const Model::ListRepositoriesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRepositoriesRequest,
                                             Pagination::ListRepositoriesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListRepositoriesInDomain operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRepositoriesInDomainRequest,
                                    Pagination::ListRepositoriesInDomainPaginationTraits<DerivedClient>>
  ListRepositoriesInDomainPaginator(const Model::ListRepositoriesInDomainRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRepositoriesInDomainRequest,
                                             Pagination::ListRepositoriesInDomainPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSubPackageGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSubPackageGroupsRequest,
                                    Pagination::ListSubPackageGroupsPaginationTraits<DerivedClient>>
  ListSubPackageGroupsPaginator(const Model::ListSubPackageGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSubPackageGroupsRequest,
                                             Pagination::ListSubPackageGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace CodeArtifact
}  // namespace Aws
