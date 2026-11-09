/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/continuum/model/ListAssociatedCollectorsPaginationTraits.h>
#include <aws/continuum/model/ListAssociatedEnvironmentsPaginationTraits.h>
#include <aws/continuum/model/ListCodeFindingsPaginationTraits.h>
#include <aws/continuum/model/ListCodeIssueArtifactsPaginationTraits.h>
#include <aws/continuum/model/ListCodeIssuesPaginationTraits.h>
#include <aws/continuum/model/ListCodeScansPaginationTraits.h>
#include <aws/continuum/model/ListEnvironmentsPaginationTraits.h>
#include <aws/continuum/model/ListIntegrationsPaginationTraits.h>
#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace Continuum {

template <typename DerivedClient>
class ContinuumPaginationBase {
 public:
  /**
   * Create a paginator for ListAssociatedCollectors operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssociatedCollectorsRequest,
                                    Pagination::ListAssociatedCollectorsPaginationTraits<DerivedClient>>
  ListAssociatedCollectorsPaginator(const Model::ListAssociatedCollectorsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssociatedCollectorsRequest,
                                             Pagination::ListAssociatedCollectorsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAssociatedEnvironments operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssociatedEnvironmentsRequest,
                                    Pagination::ListAssociatedEnvironmentsPaginationTraits<DerivedClient>>
  ListAssociatedEnvironmentsPaginator(const Model::ListAssociatedEnvironmentsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssociatedEnvironmentsRequest,
                                             Pagination::ListAssociatedEnvironmentsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCodeFindings operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCodeFindingsRequest,
                                    Pagination::ListCodeFindingsPaginationTraits<DerivedClient>>
  ListCodeFindingsPaginator(const Model::ListCodeFindingsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCodeFindingsRequest,
                                             Pagination::ListCodeFindingsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListCodeIssueArtifacts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCodeIssueArtifactsRequest,
                                    Pagination::ListCodeIssueArtifactsPaginationTraits<DerivedClient>>
  ListCodeIssueArtifactsPaginator(const Model::ListCodeIssueArtifactsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCodeIssueArtifactsRequest,
                                             Pagination::ListCodeIssueArtifactsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCodeIssues operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCodeIssuesRequest, Pagination::ListCodeIssuesPaginationTraits<DerivedClient>>
  ListCodeIssuesPaginator(const Model::ListCodeIssuesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCodeIssuesRequest,
                                             Pagination::ListCodeIssuesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListCodeScans operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCodeScansRequest, Pagination::ListCodeScansPaginationTraits<DerivedClient>>
  ListCodeScansPaginator(const Model::ListCodeScansRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCodeScansRequest,
                                             Pagination::ListCodeScansPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListEnvironments operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEnvironmentsRequest,
                                    Pagination::ListEnvironmentsPaginationTraits<DerivedClient>>
  ListEnvironmentsPaginator(const Model::ListEnvironmentsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEnvironmentsRequest,
                                             Pagination::ListEnvironmentsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListIntegrations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIntegrationsRequest,
                                    Pagination::ListIntegrationsPaginationTraits<DerivedClient>>
  ListIntegrationsPaginator(const Model::ListIntegrationsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIntegrationsRequest,
                                             Pagination::ListIntegrationsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }
};
}  // namespace Continuum
}  // namespace Aws
