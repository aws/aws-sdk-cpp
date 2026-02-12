/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManagerClient.h>
#include <aws/auditmanager/model/GetChangeLogsPaginationTraits.h>
#include <aws/auditmanager/model/GetDelegationsPaginationTraits.h>
#include <aws/auditmanager/model/GetEvidenceByEvidenceFolderPaginationTraits.h>
#include <aws/auditmanager/model/GetEvidenceFoldersByAssessmentControlPaginationTraits.h>
#include <aws/auditmanager/model/GetEvidenceFoldersByAssessmentPaginationTraits.h>
#include <aws/auditmanager/model/ListAssessmentControlInsightsByControlDomainPaginationTraits.h>
#include <aws/auditmanager/model/ListAssessmentFrameworkShareRequestsPaginationTraits.h>
#include <aws/auditmanager/model/ListAssessmentFrameworksPaginationTraits.h>
#include <aws/auditmanager/model/ListAssessmentReportsPaginationTraits.h>
#include <aws/auditmanager/model/ListAssessmentsPaginationTraits.h>
#include <aws/auditmanager/model/ListControlDomainInsightsByAssessmentPaginationTraits.h>
#include <aws/auditmanager/model/ListControlDomainInsightsPaginationTraits.h>
#include <aws/auditmanager/model/ListControlInsightsByControlDomainPaginationTraits.h>
#include <aws/auditmanager/model/ListControlsPaginationTraits.h>
#include <aws/auditmanager/model/ListKeywordsForDataSourcePaginationTraits.h>
#include <aws/auditmanager/model/ListNotificationsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace AuditManager {

using GetChangeLogsPaginator = Aws::Utils::Pagination::Paginator<AuditManagerClient, Model::GetChangeLogsRequest,
                                                                 Pagination::GetChangeLogsPaginationTraits<AuditManagerClient>>;
using GetDelegationsPaginator = Aws::Utils::Pagination::Paginator<AuditManagerClient, Model::GetDelegationsRequest,
                                                                  Pagination::GetDelegationsPaginationTraits<AuditManagerClient>>;
using GetEvidenceByEvidenceFolderPaginator =
    Aws::Utils::Pagination::Paginator<AuditManagerClient, Model::GetEvidenceByEvidenceFolderRequest,
                                      Pagination::GetEvidenceByEvidenceFolderPaginationTraits<AuditManagerClient>>;
using GetEvidenceFoldersByAssessmentPaginator =
    Aws::Utils::Pagination::Paginator<AuditManagerClient, Model::GetEvidenceFoldersByAssessmentRequest,
                                      Pagination::GetEvidenceFoldersByAssessmentPaginationTraits<AuditManagerClient>>;
using GetEvidenceFoldersByAssessmentControlPaginator =
    Aws::Utils::Pagination::Paginator<AuditManagerClient, Model::GetEvidenceFoldersByAssessmentControlRequest,
                                      Pagination::GetEvidenceFoldersByAssessmentControlPaginationTraits<AuditManagerClient>>;
using ListAssessmentControlInsightsByControlDomainPaginator =
    Aws::Utils::Pagination::Paginator<AuditManagerClient, Model::ListAssessmentControlInsightsByControlDomainRequest,
                                      Pagination::ListAssessmentControlInsightsByControlDomainPaginationTraits<AuditManagerClient>>;
using ListAssessmentFrameworksPaginator =
    Aws::Utils::Pagination::Paginator<AuditManagerClient, Model::ListAssessmentFrameworksRequest,
                                      Pagination::ListAssessmentFrameworksPaginationTraits<AuditManagerClient>>;
using ListAssessmentFrameworkShareRequestsPaginator =
    Aws::Utils::Pagination::Paginator<AuditManagerClient, Model::ListAssessmentFrameworkShareRequestsRequest,
                                      Pagination::ListAssessmentFrameworkShareRequestsPaginationTraits<AuditManagerClient>>;
using ListAssessmentReportsPaginator =
    Aws::Utils::Pagination::Paginator<AuditManagerClient, Model::ListAssessmentReportsRequest,
                                      Pagination::ListAssessmentReportsPaginationTraits<AuditManagerClient>>;
using ListAssessmentsPaginator = Aws::Utils::Pagination::Paginator<AuditManagerClient, Model::ListAssessmentsRequest,
                                                                   Pagination::ListAssessmentsPaginationTraits<AuditManagerClient>>;
using ListControlDomainInsightsPaginator =
    Aws::Utils::Pagination::Paginator<AuditManagerClient, Model::ListControlDomainInsightsRequest,
                                      Pagination::ListControlDomainInsightsPaginationTraits<AuditManagerClient>>;
using ListControlDomainInsightsByAssessmentPaginator =
    Aws::Utils::Pagination::Paginator<AuditManagerClient, Model::ListControlDomainInsightsByAssessmentRequest,
                                      Pagination::ListControlDomainInsightsByAssessmentPaginationTraits<AuditManagerClient>>;
using ListControlInsightsByControlDomainPaginator =
    Aws::Utils::Pagination::Paginator<AuditManagerClient, Model::ListControlInsightsByControlDomainRequest,
                                      Pagination::ListControlInsightsByControlDomainPaginationTraits<AuditManagerClient>>;
using ListControlsPaginator = Aws::Utils::Pagination::Paginator<AuditManagerClient, Model::ListControlsRequest,
                                                                Pagination::ListControlsPaginationTraits<AuditManagerClient>>;
using ListKeywordsForDataSourcePaginator =
    Aws::Utils::Pagination::Paginator<AuditManagerClient, Model::ListKeywordsForDataSourceRequest,
                                      Pagination::ListKeywordsForDataSourcePaginationTraits<AuditManagerClient>>;
using ListNotificationsPaginator = Aws::Utils::Pagination::Paginator<AuditManagerClient, Model::ListNotificationsRequest,
                                                                     Pagination::ListNotificationsPaginationTraits<AuditManagerClient>>;

}  // namespace AuditManager
}  // namespace Aws
