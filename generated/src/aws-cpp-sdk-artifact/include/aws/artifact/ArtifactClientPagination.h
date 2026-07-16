/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/artifact/ArtifactClient.h>
#include <aws/artifact/model/ListComplianceInquiriesPaginationTraits.h>
#include <aws/artifact/model/ListComplianceInquiryQueriesPaginationTraits.h>
#include <aws/artifact/model/ListCustomerAgreementsPaginationTraits.h>
#include <aws/artifact/model/ListReportVersionsPaginationTraits.h>
#include <aws/artifact/model/ListReportsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace Artifact {

using ListComplianceInquiriesPaginator =
    Aws::Utils::Pagination::Paginator<ArtifactClient, Model::ListComplianceInquiriesRequest,
                                      Pagination::ListComplianceInquiriesPaginationTraits<ArtifactClient>>;
using ListComplianceInquiryQueriesPaginator =
    Aws::Utils::Pagination::Paginator<ArtifactClient, Model::ListComplianceInquiryQueriesRequest,
                                      Pagination::ListComplianceInquiryQueriesPaginationTraits<ArtifactClient>>;
using ListCustomerAgreementsPaginator =
    Aws::Utils::Pagination::Paginator<ArtifactClient, Model::ListCustomerAgreementsRequest,
                                      Pagination::ListCustomerAgreementsPaginationTraits<ArtifactClient>>;
using ListReportsPaginator =
    Aws::Utils::Pagination::Paginator<ArtifactClient, Model::ListReportsRequest, Pagination::ListReportsPaginationTraits<ArtifactClient>>;
using ListReportVersionsPaginator = Aws::Utils::Pagination::Paginator<ArtifactClient, Model::ListReportVersionsRequest,
                                                                      Pagination::ListReportVersionsPaginationTraits<ArtifactClient>>;

}  // namespace Artifact
}  // namespace Aws
