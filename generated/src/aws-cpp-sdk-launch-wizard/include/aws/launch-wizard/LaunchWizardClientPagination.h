/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/launch-wizard/LaunchWizardClient.h>
#include <aws/launch-wizard/model/ListDeploymentEventsPaginationTraits.h>
#include <aws/launch-wizard/model/ListDeploymentPatternVersionsPaginationTraits.h>
#include <aws/launch-wizard/model/ListDeploymentsPaginationTraits.h>
#include <aws/launch-wizard/model/ListWorkloadDeploymentPatternsPaginationTraits.h>
#include <aws/launch-wizard/model/ListWorkloadsPaginationTraits.h>

namespace Aws {
namespace LaunchWizard {

using ListDeploymentEventsPaginator =
    Aws::Utils::Pagination::Paginator<LaunchWizardClient, Model::ListDeploymentEventsRequest,
                                      Pagination::ListDeploymentEventsPaginationTraits<LaunchWizardClient>>;
using ListDeploymentPatternVersionsPaginator =
    Aws::Utils::Pagination::Paginator<LaunchWizardClient, Model::ListDeploymentPatternVersionsRequest,
                                      Pagination::ListDeploymentPatternVersionsPaginationTraits<LaunchWizardClient>>;
using ListDeploymentsPaginator = Aws::Utils::Pagination::Paginator<LaunchWizardClient, Model::ListDeploymentsRequest,
                                                                   Pagination::ListDeploymentsPaginationTraits<LaunchWizardClient>>;
using ListWorkloadDeploymentPatternsPaginator =
    Aws::Utils::Pagination::Paginator<LaunchWizardClient, Model::ListWorkloadDeploymentPatternsRequest,
                                      Pagination::ListWorkloadDeploymentPatternsPaginationTraits<LaunchWizardClient>>;
using ListWorkloadsPaginator = Aws::Utils::Pagination::Paginator<LaunchWizardClient, Model::ListWorkloadsRequest,
                                                                 Pagination::ListWorkloadsPaginationTraits<LaunchWizardClient>>;

}  // namespace LaunchWizard
}  // namespace Aws
