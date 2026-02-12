/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/AmplifyClient.h>
#include <aws/amplify/model/ListAppsPaginationTraits.h>
#include <aws/amplify/model/ListBranchesPaginationTraits.h>
#include <aws/amplify/model/ListDomainAssociationsPaginationTraits.h>
#include <aws/amplify/model/ListJobsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace Amplify {

using ListAppsPaginator =
    Aws::Utils::Pagination::Paginator<AmplifyClient, Model::ListAppsRequest, Pagination::ListAppsPaginationTraits<AmplifyClient>>;
using ListBranchesPaginator =
    Aws::Utils::Pagination::Paginator<AmplifyClient, Model::ListBranchesRequest, Pagination::ListBranchesPaginationTraits<AmplifyClient>>;
using ListDomainAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<AmplifyClient, Model::ListDomainAssociationsRequest,
                                      Pagination::ListDomainAssociationsPaginationTraits<AmplifyClient>>;
using ListJobsPaginator =
    Aws::Utils::Pagination::Paginator<AmplifyClient, Model::ListJobsRequest, Pagination::ListJobsPaginationTraits<AmplifyClient>>;

}  // namespace Amplify
}  // namespace Aws
