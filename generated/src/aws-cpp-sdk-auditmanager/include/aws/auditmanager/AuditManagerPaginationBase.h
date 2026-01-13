/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

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

#include <memory>

namespace Aws {
namespace AuditManager {

class AuditManagerClient;

template <typename DerivedClient>
class AuditManagerPaginationBase {
 public:
  /**
   * Create a paginator for GetChangeLogs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetChangeLogsRequest, Pagination::GetChangeLogsPaginationTraits<DerivedClient>>
  GetChangeLogsPaginator(const Model::GetChangeLogsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetChangeLogsRequest,
                                             Pagination::GetChangeLogsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for GetDelegations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetDelegationsRequest, Pagination::GetDelegationsPaginationTraits<DerivedClient>>
  GetDelegationsPaginator(const Model::GetDelegationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetDelegationsRequest,
                                             Pagination::GetDelegationsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for GetEvidenceByEvidenceFolder operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetEvidenceByEvidenceFolderRequest,
                                    Pagination::GetEvidenceByEvidenceFolderPaginationTraits<DerivedClient>>
  GetEvidenceByEvidenceFolderPaginator(const Model::GetEvidenceByEvidenceFolderRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetEvidenceByEvidenceFolderRequest,
                                             Pagination::GetEvidenceByEvidenceFolderPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetEvidenceFoldersByAssessment operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetEvidenceFoldersByAssessmentRequest,
                                    Pagination::GetEvidenceFoldersByAssessmentPaginationTraits<DerivedClient>>
  GetEvidenceFoldersByAssessmentPaginator(const Model::GetEvidenceFoldersByAssessmentRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetEvidenceFoldersByAssessmentRequest,
                                             Pagination::GetEvidenceFoldersByAssessmentPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetEvidenceFoldersByAssessmentControl operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetEvidenceFoldersByAssessmentControlRequest,
                                    Pagination::GetEvidenceFoldersByAssessmentControlPaginationTraits<DerivedClient>>
  GetEvidenceFoldersByAssessmentControlPaginator(const Model::GetEvidenceFoldersByAssessmentControlRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetEvidenceFoldersByAssessmentControlRequest,
                                             Pagination::GetEvidenceFoldersByAssessmentControlPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAssessmentControlInsightsByControlDomain operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssessmentControlInsightsByControlDomainRequest,
                                    Pagination::ListAssessmentControlInsightsByControlDomainPaginationTraits<DerivedClient>>
  ListAssessmentControlInsightsByControlDomainPaginator(const Model::ListAssessmentControlInsightsByControlDomainRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssessmentControlInsightsByControlDomainRequest,
                                             Pagination::ListAssessmentControlInsightsByControlDomainPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAssessmentFrameworks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssessmentFrameworksRequest,
                                    Pagination::ListAssessmentFrameworksPaginationTraits<DerivedClient>>
  ListAssessmentFrameworksPaginator(const Model::ListAssessmentFrameworksRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssessmentFrameworksRequest,
                                             Pagination::ListAssessmentFrameworksPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAssessmentFrameworkShareRequests operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssessmentFrameworkShareRequestsRequest,
                                    Pagination::ListAssessmentFrameworkShareRequestsPaginationTraits<DerivedClient>>
  ListAssessmentFrameworkShareRequestsPaginator(const Model::ListAssessmentFrameworkShareRequestsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssessmentFrameworkShareRequestsRequest,
                                             Pagination::ListAssessmentFrameworkShareRequestsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAssessmentReports operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssessmentReportsRequest,
                                    Pagination::ListAssessmentReportsPaginationTraits<DerivedClient>>
  ListAssessmentReportsPaginator(const Model::ListAssessmentReportsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssessmentReportsRequest,
                                             Pagination::ListAssessmentReportsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAssessments operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssessmentsRequest,
                                    Pagination::ListAssessmentsPaginationTraits<DerivedClient>>
  ListAssessmentsPaginator(const Model::ListAssessmentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssessmentsRequest,
                                             Pagination::ListAssessmentsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListControlDomainInsights operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListControlDomainInsightsRequest,
                                    Pagination::ListControlDomainInsightsPaginationTraits<DerivedClient>>
  ListControlDomainInsightsPaginator(const Model::ListControlDomainInsightsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListControlDomainInsightsRequest,
                                             Pagination::ListControlDomainInsightsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListControlDomainInsightsByAssessment operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListControlDomainInsightsByAssessmentRequest,
                                    Pagination::ListControlDomainInsightsByAssessmentPaginationTraits<DerivedClient>>
  ListControlDomainInsightsByAssessmentPaginator(const Model::ListControlDomainInsightsByAssessmentRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListControlDomainInsightsByAssessmentRequest,
                                             Pagination::ListControlDomainInsightsByAssessmentPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListControlInsightsByControlDomain operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListControlInsightsByControlDomainRequest,
                                    Pagination::ListControlInsightsByControlDomainPaginationTraits<DerivedClient>>
  ListControlInsightsByControlDomainPaginator(const Model::ListControlInsightsByControlDomainRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListControlInsightsByControlDomainRequest,
                                             Pagination::ListControlInsightsByControlDomainPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListControls operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListControlsRequest, Pagination::ListControlsPaginationTraits<DerivedClient>>
  ListControlsPaginator(const Model::ListControlsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListControlsRequest,
                                             Pagination::ListControlsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListKeywordsForDataSource operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListKeywordsForDataSourceRequest,
                                    Pagination::ListKeywordsForDataSourcePaginationTraits<DerivedClient>>
  ListKeywordsForDataSourcePaginator(const Model::ListKeywordsForDataSourceRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListKeywordsForDataSourceRequest,
                                             Pagination::ListKeywordsForDataSourcePaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListNotifications operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNotificationsRequest,
                                    Pagination::ListNotificationsPaginationTraits<DerivedClient>>
  ListNotificationsPaginator(const Model::ListNotificationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNotificationsRequest,
                                             Pagination::ListNotificationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace AuditManager
}  // namespace Aws
