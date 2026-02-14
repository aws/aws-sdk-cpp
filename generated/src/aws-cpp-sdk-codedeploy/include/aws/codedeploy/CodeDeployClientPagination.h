/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeployClient.h>
#include <aws/codedeploy/model/ListApplicationRevisionsPaginationTraits.h>
#include <aws/codedeploy/model/ListApplicationsPaginationTraits.h>
#include <aws/codedeploy/model/ListDeploymentConfigsPaginationTraits.h>
#include <aws/codedeploy/model/ListDeploymentGroupsPaginationTraits.h>
#include <aws/codedeploy/model/ListDeploymentsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace CodeDeploy {

using ListApplicationRevisionsPaginator =
    Aws::Utils::Pagination::Paginator<CodeDeployClient, Model::ListApplicationRevisionsRequest,
                                      Pagination::ListApplicationRevisionsPaginationTraits<CodeDeployClient>>;
using ListApplicationsPaginator = Aws::Utils::Pagination::Paginator<CodeDeployClient, Model::ListApplicationsRequest,
                                                                    Pagination::ListApplicationsPaginationTraits<CodeDeployClient>>;
using ListDeploymentConfigsPaginator =
    Aws::Utils::Pagination::Paginator<CodeDeployClient, Model::ListDeploymentConfigsRequest,
                                      Pagination::ListDeploymentConfigsPaginationTraits<CodeDeployClient>>;
using ListDeploymentGroupsPaginator = Aws::Utils::Pagination::Paginator<CodeDeployClient, Model::ListDeploymentGroupsRequest,
                                                                        Pagination::ListDeploymentGroupsPaginationTraits<CodeDeployClient>>;
using ListDeploymentsPaginator = Aws::Utils::Pagination::Paginator<CodeDeployClient, Model::ListDeploymentsRequest,
                                                                   Pagination::ListDeploymentsPaginationTraits<CodeDeployClient>>;

}  // namespace CodeDeploy
}  // namespace Aws
