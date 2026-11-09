/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/ContinuumClient.h>
#include <aws/continuum/model/ListAssociatedCollectorsPaginationTraits.h>
#include <aws/continuum/model/ListAssociatedEnvironmentsPaginationTraits.h>
#include <aws/continuum/model/ListCodeFindingsPaginationTraits.h>
#include <aws/continuum/model/ListCodeIssueArtifactsPaginationTraits.h>
#include <aws/continuum/model/ListCodeIssuesPaginationTraits.h>
#include <aws/continuum/model/ListCodeScansPaginationTraits.h>
#include <aws/continuum/model/ListEnvironmentsPaginationTraits.h>
#include <aws/continuum/model/ListIntegrationsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace Continuum {

using ListAssociatedCollectorsPaginator =
    Aws::Utils::Pagination::Paginator<ContinuumClient, Model::ListAssociatedCollectorsRequest,
                                      Pagination::ListAssociatedCollectorsPaginationTraits<ContinuumClient>>;
using ListAssociatedEnvironmentsPaginator =
    Aws::Utils::Pagination::Paginator<ContinuumClient, Model::ListAssociatedEnvironmentsRequest,
                                      Pagination::ListAssociatedEnvironmentsPaginationTraits<ContinuumClient>>;
using ListCodeFindingsPaginator = Aws::Utils::Pagination::Paginator<ContinuumClient, Model::ListCodeFindingsRequest,
                                                                    Pagination::ListCodeFindingsPaginationTraits<ContinuumClient>>;
using ListCodeIssueArtifactsPaginator =
    Aws::Utils::Pagination::Paginator<ContinuumClient, Model::ListCodeIssueArtifactsRequest,
                                      Pagination::ListCodeIssueArtifactsPaginationTraits<ContinuumClient>>;
using ListCodeIssuesPaginator = Aws::Utils::Pagination::Paginator<ContinuumClient, Model::ListCodeIssuesRequest,
                                                                  Pagination::ListCodeIssuesPaginationTraits<ContinuumClient>>;
using ListCodeScansPaginator = Aws::Utils::Pagination::Paginator<ContinuumClient, Model::ListCodeScansRequest,
                                                                 Pagination::ListCodeScansPaginationTraits<ContinuumClient>>;
using ListEnvironmentsPaginator = Aws::Utils::Pagination::Paginator<ContinuumClient, Model::ListEnvironmentsRequest,
                                                                    Pagination::ListEnvironmentsPaginationTraits<ContinuumClient>>;
using ListIntegrationsPaginator = Aws::Utils::Pagination::Paginator<ContinuumClient, Model::ListIntegrationsRequest,
                                                                    Pagination::ListIntegrationsPaginationTraits<ContinuumClient>>;

}  // namespace Continuum
}  // namespace Aws
