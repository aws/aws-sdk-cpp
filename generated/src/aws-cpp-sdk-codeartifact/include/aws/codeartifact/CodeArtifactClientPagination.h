/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifactClient.h>
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

namespace Aws {
namespace CodeArtifact {

using ListAllowedRepositoriesForGroupPaginator =
    Aws::Utils::Pagination::Paginator<CodeArtifactClient, Model::ListAllowedRepositoriesForGroupRequest,
                                      Pagination::ListAllowedRepositoriesForGroupPaginationTraits<CodeArtifactClient>>;
using ListAssociatedPackagesPaginator =
    Aws::Utils::Pagination::Paginator<CodeArtifactClient, Model::ListAssociatedPackagesRequest,
                                      Pagination::ListAssociatedPackagesPaginationTraits<CodeArtifactClient>>;
using ListDomainsPaginator = Aws::Utils::Pagination::Paginator<CodeArtifactClient, Model::ListDomainsRequest,
                                                               Pagination::ListDomainsPaginationTraits<CodeArtifactClient>>;
using ListPackageGroupsPaginator = Aws::Utils::Pagination::Paginator<CodeArtifactClient, Model::ListPackageGroupsRequest,
                                                                     Pagination::ListPackageGroupsPaginationTraits<CodeArtifactClient>>;
using ListPackagesPaginator = Aws::Utils::Pagination::Paginator<CodeArtifactClient, Model::ListPackagesRequest,
                                                                Pagination::ListPackagesPaginationTraits<CodeArtifactClient>>;
using ListPackageVersionAssetsPaginator =
    Aws::Utils::Pagination::Paginator<CodeArtifactClient, Model::ListPackageVersionAssetsRequest,
                                      Pagination::ListPackageVersionAssetsPaginationTraits<CodeArtifactClient>>;
using ListPackageVersionsPaginator = Aws::Utils::Pagination::Paginator<CodeArtifactClient, Model::ListPackageVersionsRequest,
                                                                       Pagination::ListPackageVersionsPaginationTraits<CodeArtifactClient>>;
using ListRepositoriesPaginator = Aws::Utils::Pagination::Paginator<CodeArtifactClient, Model::ListRepositoriesRequest,
                                                                    Pagination::ListRepositoriesPaginationTraits<CodeArtifactClient>>;
using ListRepositoriesInDomainPaginator =
    Aws::Utils::Pagination::Paginator<CodeArtifactClient, Model::ListRepositoriesInDomainRequest,
                                      Pagination::ListRepositoriesInDomainPaginationTraits<CodeArtifactClient>>;
using ListSubPackageGroupsPaginator =
    Aws::Utils::Pagination::Paginator<CodeArtifactClient, Model::ListSubPackageGroupsRequest,
                                      Pagination::ListSubPackageGroupsPaginationTraits<CodeArtifactClient>>;

}  // namespace CodeArtifact
}  // namespace Aws
