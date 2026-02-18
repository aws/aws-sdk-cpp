/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/awstransfer/model/ListAccessesPaginationTraits.h>
#include <aws/awstransfer/model/ListAgreementsPaginationTraits.h>
#include <aws/awstransfer/model/ListCertificatesPaginationTraits.h>
#include <aws/awstransfer/model/ListConnectorsPaginationTraits.h>
#include <aws/awstransfer/model/ListExecutionsPaginationTraits.h>
#include <aws/awstransfer/model/ListFileTransferResultsPaginationTraits.h>
#include <aws/awstransfer/model/ListProfilesPaginationTraits.h>
#include <aws/awstransfer/model/ListSecurityPoliciesPaginationTraits.h>
#include <aws/awstransfer/model/ListServersPaginationTraits.h>
#include <aws/awstransfer/model/ListTagsForResourcePaginationTraits.h>
#include <aws/awstransfer/model/ListUsersPaginationTraits.h>
#include <aws/awstransfer/model/ListWebAppsPaginationTraits.h>
#include <aws/awstransfer/model/ListWorkflowsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace Transfer {

class TransferClient;

template <typename DerivedClient>
class TransferPaginationBase {
 public:
  /**
   * Create a paginator for ListAccesses operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccessesRequest, Pagination::ListAccessesPaginationTraits<DerivedClient>>
  ListAccessesPaginator(const Model::ListAccessesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccessesRequest,
                                             Pagination::ListAccessesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListAgreements operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAgreementsRequest, Pagination::ListAgreementsPaginationTraits<DerivedClient>>
  ListAgreementsPaginator(const Model::ListAgreementsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAgreementsRequest,
                                             Pagination::ListAgreementsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListCertificates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCertificatesRequest,
                                    Pagination::ListCertificatesPaginationTraits<DerivedClient>>
  ListCertificatesPaginator(const Model::ListCertificatesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCertificatesRequest,
                                             Pagination::ListCertificatesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListConnectors operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConnectorsRequest, Pagination::ListConnectorsPaginationTraits<DerivedClient>>
  ListConnectorsPaginator(const Model::ListConnectorsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConnectorsRequest,
                                             Pagination::ListConnectorsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListExecutions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListExecutionsRequest, Pagination::ListExecutionsPaginationTraits<DerivedClient>>
  ListExecutionsPaginator(const Model::ListExecutionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListExecutionsRequest,
                                             Pagination::ListExecutionsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListFileTransferResults operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFileTransferResultsRequest,
                                    Pagination::ListFileTransferResultsPaginationTraits<DerivedClient>>
  ListFileTransferResultsPaginator(const Model::ListFileTransferResultsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFileTransferResultsRequest,
                                             Pagination::ListFileTransferResultsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListProfiles operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProfilesRequest, Pagination::ListProfilesPaginationTraits<DerivedClient>>
  ListProfilesPaginator(const Model::ListProfilesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProfilesRequest,
                                             Pagination::ListProfilesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListSecurityPolicies operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSecurityPoliciesRequest,
                                    Pagination::ListSecurityPoliciesPaginationTraits<DerivedClient>>
  ListSecurityPoliciesPaginator(const Model::ListSecurityPoliciesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSecurityPoliciesRequest,
                                             Pagination::ListSecurityPoliciesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListServers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServersRequest, Pagination::ListServersPaginationTraits<DerivedClient>>
  ListServersPaginator(const Model::ListServersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServersRequest,
                                             Pagination::ListServersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListTagsForResource operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTagsForResourceRequest,
                                    Pagination::ListTagsForResourcePaginationTraits<DerivedClient>>
  ListTagsForResourcePaginator(const Model::ListTagsForResourceRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTagsForResourceRequest,
                                             Pagination::ListTagsForResourcePaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListUsers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListUsersRequest, Pagination::ListUsersPaginationTraits<DerivedClient>>
  ListUsersPaginator(const Model::ListUsersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListUsersRequest, Pagination::ListUsersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListWebApps operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWebAppsRequest, Pagination::ListWebAppsPaginationTraits<DerivedClient>>
  ListWebAppsPaginator(const Model::ListWebAppsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWebAppsRequest,
                                             Pagination::ListWebAppsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListWorkflows operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkflowsRequest, Pagination::ListWorkflowsPaginationTraits<DerivedClient>>
  ListWorkflowsPaginator(const Model::ListWorkflowsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkflowsRequest,
                                             Pagination::ListWorkflowsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }
};
}  // namespace Transfer
}  // namespace Aws
