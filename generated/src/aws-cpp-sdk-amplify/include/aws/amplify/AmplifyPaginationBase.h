/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/amplify/model/ListAppsPaginationTraits.h>
#include <aws/amplify/model/ListBranchesPaginationTraits.h>
#include <aws/amplify/model/ListDomainAssociationsPaginationTraits.h>
#include <aws/amplify/model/ListJobsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace Amplify {

class AmplifyClient;

template <typename DerivedClient>
class AmplifyPaginationBase {
 public:
  /**
   * Create a paginator for ListApps operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAppsRequest, Pagination::ListAppsPaginationTraits<DerivedClient>>
  ListAppsPaginator(const Model::ListAppsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAppsRequest, Pagination::ListAppsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListBranches operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBranchesRequest, Pagination::ListBranchesPaginationTraits<DerivedClient>>
  ListBranchesPaginator(const Model::ListBranchesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBranchesRequest,
                                             Pagination::ListBranchesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListDomainAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDomainAssociationsRequest,
                                    Pagination::ListDomainAssociationsPaginationTraits<DerivedClient>>
  ListDomainAssociationsPaginator(const Model::ListDomainAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDomainAssociationsRequest,
                                             Pagination::ListDomainAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListJobsRequest, Pagination::ListJobsPaginationTraits<DerivedClient>>
  ListJobsPaginator(const Model::ListJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListJobsRequest, Pagination::ListJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace Amplify
}  // namespace Aws
