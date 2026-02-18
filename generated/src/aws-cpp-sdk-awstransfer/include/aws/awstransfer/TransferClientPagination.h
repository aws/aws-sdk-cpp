/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/TransferClient.h>
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

namespace Aws {
namespace Transfer {

using ListAccessesPaginator =
    Aws::Utils::Pagination::Paginator<TransferClient, Model::ListAccessesRequest, Pagination::ListAccessesPaginationTraits<TransferClient>>;
using ListAgreementsPaginator = Aws::Utils::Pagination::Paginator<TransferClient, Model::ListAgreementsRequest,
                                                                  Pagination::ListAgreementsPaginationTraits<TransferClient>>;
using ListCertificatesPaginator = Aws::Utils::Pagination::Paginator<TransferClient, Model::ListCertificatesRequest,
                                                                    Pagination::ListCertificatesPaginationTraits<TransferClient>>;
using ListConnectorsPaginator = Aws::Utils::Pagination::Paginator<TransferClient, Model::ListConnectorsRequest,
                                                                  Pagination::ListConnectorsPaginationTraits<TransferClient>>;
using ListExecutionsPaginator = Aws::Utils::Pagination::Paginator<TransferClient, Model::ListExecutionsRequest,
                                                                  Pagination::ListExecutionsPaginationTraits<TransferClient>>;
using ListFileTransferResultsPaginator =
    Aws::Utils::Pagination::Paginator<TransferClient, Model::ListFileTransferResultsRequest,
                                      Pagination::ListFileTransferResultsPaginationTraits<TransferClient>>;
using ListProfilesPaginator =
    Aws::Utils::Pagination::Paginator<TransferClient, Model::ListProfilesRequest, Pagination::ListProfilesPaginationTraits<TransferClient>>;
using ListSecurityPoliciesPaginator = Aws::Utils::Pagination::Paginator<TransferClient, Model::ListSecurityPoliciesRequest,
                                                                        Pagination::ListSecurityPoliciesPaginationTraits<TransferClient>>;
using ListServersPaginator =
    Aws::Utils::Pagination::Paginator<TransferClient, Model::ListServersRequest, Pagination::ListServersPaginationTraits<TransferClient>>;
using ListTagsForResourcePaginator = Aws::Utils::Pagination::Paginator<TransferClient, Model::ListTagsForResourceRequest,
                                                                       Pagination::ListTagsForResourcePaginationTraits<TransferClient>>;
using ListUsersPaginator =
    Aws::Utils::Pagination::Paginator<TransferClient, Model::ListUsersRequest, Pagination::ListUsersPaginationTraits<TransferClient>>;
using ListWebAppsPaginator =
    Aws::Utils::Pagination::Paginator<TransferClient, Model::ListWebAppsRequest, Pagination::ListWebAppsPaginationTraits<TransferClient>>;
using ListWorkflowsPaginator = Aws::Utils::Pagination::Paginator<TransferClient, Model::ListWorkflowsRequest,
                                                                 Pagination::ListWorkflowsPaginationTraits<TransferClient>>;

}  // namespace Transfer
}  // namespace Aws
