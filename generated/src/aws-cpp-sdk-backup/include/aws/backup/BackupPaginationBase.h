/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/backup/model/ListBackupJobSummariesPaginationTraits.h>
#include <aws/backup/model/ListBackupJobsPaginationTraits.h>
#include <aws/backup/model/ListBackupPlanTemplatesPaginationTraits.h>
#include <aws/backup/model/ListBackupPlanVersionsPaginationTraits.h>
#include <aws/backup/model/ListBackupPlansPaginationTraits.h>
#include <aws/backup/model/ListBackupSelectionsPaginationTraits.h>
#include <aws/backup/model/ListBackupVaultsPaginationTraits.h>
#include <aws/backup/model/ListCopyJobSummariesPaginationTraits.h>
#include <aws/backup/model/ListCopyJobsPaginationTraits.h>
#include <aws/backup/model/ListFrameworksPaginationTraits.h>
#include <aws/backup/model/ListIndexedRecoveryPointsPaginationTraits.h>
#include <aws/backup/model/ListLegalHoldsPaginationTraits.h>
#include <aws/backup/model/ListProtectedResourcesByBackupVaultPaginationTraits.h>
#include <aws/backup/model/ListProtectedResourcesPaginationTraits.h>
#include <aws/backup/model/ListRecoveryPointsByBackupVaultPaginationTraits.h>
#include <aws/backup/model/ListRecoveryPointsByLegalHoldPaginationTraits.h>
#include <aws/backup/model/ListRecoveryPointsByResourcePaginationTraits.h>
#include <aws/backup/model/ListReportJobsPaginationTraits.h>
#include <aws/backup/model/ListReportPlansPaginationTraits.h>
#include <aws/backup/model/ListRestoreAccessBackupVaultsPaginationTraits.h>
#include <aws/backup/model/ListRestoreJobSummariesPaginationTraits.h>
#include <aws/backup/model/ListRestoreJobsByProtectedResourcePaginationTraits.h>
#include <aws/backup/model/ListRestoreJobsPaginationTraits.h>
#include <aws/backup/model/ListRestoreTestingPlansPaginationTraits.h>
#include <aws/backup/model/ListRestoreTestingSelectionsPaginationTraits.h>
#include <aws/backup/model/ListScanJobSummariesPaginationTraits.h>
#include <aws/backup/model/ListScanJobsPaginationTraits.h>
#include <aws/backup/model/ListTagsPaginationTraits.h>
#include <aws/backup/model/ListTieringConfigurationsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace Backup {

class BackupClient;

template <typename DerivedClient>
class BackupPaginationBase {
 public:
  /**
   * Create a paginator for ListBackupJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBackupJobsRequest, Pagination::ListBackupJobsPaginationTraits<DerivedClient>>
  ListBackupJobsPaginator(const Model::ListBackupJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBackupJobsRequest,
                                             Pagination::ListBackupJobsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListBackupJobSummaries operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBackupJobSummariesRequest,
                                    Pagination::ListBackupJobSummariesPaginationTraits<DerivedClient>>
  ListBackupJobSummariesPaginator(const Model::ListBackupJobSummariesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBackupJobSummariesRequest,
                                             Pagination::ListBackupJobSummariesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListBackupPlans operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBackupPlansRequest,
                                    Pagination::ListBackupPlansPaginationTraits<DerivedClient>>
  ListBackupPlansPaginator(const Model::ListBackupPlansRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBackupPlansRequest,
                                             Pagination::ListBackupPlansPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListBackupPlanTemplates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBackupPlanTemplatesRequest,
                                    Pagination::ListBackupPlanTemplatesPaginationTraits<DerivedClient>>
  ListBackupPlanTemplatesPaginator(const Model::ListBackupPlanTemplatesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBackupPlanTemplatesRequest,
                                             Pagination::ListBackupPlanTemplatesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListBackupPlanVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBackupPlanVersionsRequest,
                                    Pagination::ListBackupPlanVersionsPaginationTraits<DerivedClient>>
  ListBackupPlanVersionsPaginator(const Model::ListBackupPlanVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBackupPlanVersionsRequest,
                                             Pagination::ListBackupPlanVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListBackupSelections operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBackupSelectionsRequest,
                                    Pagination::ListBackupSelectionsPaginationTraits<DerivedClient>>
  ListBackupSelectionsPaginator(const Model::ListBackupSelectionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBackupSelectionsRequest,
                                             Pagination::ListBackupSelectionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListBackupVaults operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBackupVaultsRequest,
                                    Pagination::ListBackupVaultsPaginationTraits<DerivedClient>>
  ListBackupVaultsPaginator(const Model::ListBackupVaultsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBackupVaultsRequest,
                                             Pagination::ListBackupVaultsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListCopyJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCopyJobsRequest, Pagination::ListCopyJobsPaginationTraits<DerivedClient>>
  ListCopyJobsPaginator(const Model::ListCopyJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCopyJobsRequest,
                                             Pagination::ListCopyJobsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListCopyJobSummaries operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCopyJobSummariesRequest,
                                    Pagination::ListCopyJobSummariesPaginationTraits<DerivedClient>>
  ListCopyJobSummariesPaginator(const Model::ListCopyJobSummariesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCopyJobSummariesRequest,
                                             Pagination::ListCopyJobSummariesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListFrameworks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFrameworksRequest, Pagination::ListFrameworksPaginationTraits<DerivedClient>>
  ListFrameworksPaginator(const Model::ListFrameworksRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFrameworksRequest,
                                             Pagination::ListFrameworksPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListIndexedRecoveryPoints operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIndexedRecoveryPointsRequest,
                                    Pagination::ListIndexedRecoveryPointsPaginationTraits<DerivedClient>>
  ListIndexedRecoveryPointsPaginator(const Model::ListIndexedRecoveryPointsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIndexedRecoveryPointsRequest,
                                             Pagination::ListIndexedRecoveryPointsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListLegalHolds operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLegalHoldsRequest, Pagination::ListLegalHoldsPaginationTraits<DerivedClient>>
  ListLegalHoldsPaginator(const Model::ListLegalHoldsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLegalHoldsRequest,
                                             Pagination::ListLegalHoldsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListProtectedResources operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProtectedResourcesRequest,
                                    Pagination::ListProtectedResourcesPaginationTraits<DerivedClient>>
  ListProtectedResourcesPaginator(const Model::ListProtectedResourcesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProtectedResourcesRequest,
                                             Pagination::ListProtectedResourcesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListProtectedResourcesByBackupVault operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProtectedResourcesByBackupVaultRequest,
                                    Pagination::ListProtectedResourcesByBackupVaultPaginationTraits<DerivedClient>>
  ListProtectedResourcesByBackupVaultPaginator(const Model::ListProtectedResourcesByBackupVaultRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProtectedResourcesByBackupVaultRequest,
                                             Pagination::ListProtectedResourcesByBackupVaultPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRecoveryPointsByBackupVault operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRecoveryPointsByBackupVaultRequest,
                                    Pagination::ListRecoveryPointsByBackupVaultPaginationTraits<DerivedClient>>
  ListRecoveryPointsByBackupVaultPaginator(const Model::ListRecoveryPointsByBackupVaultRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRecoveryPointsByBackupVaultRequest,
                                             Pagination::ListRecoveryPointsByBackupVaultPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRecoveryPointsByLegalHold operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRecoveryPointsByLegalHoldRequest,
                                    Pagination::ListRecoveryPointsByLegalHoldPaginationTraits<DerivedClient>>
  ListRecoveryPointsByLegalHoldPaginator(const Model::ListRecoveryPointsByLegalHoldRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRecoveryPointsByLegalHoldRequest,
                                             Pagination::ListRecoveryPointsByLegalHoldPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRecoveryPointsByResource operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRecoveryPointsByResourceRequest,
                                    Pagination::ListRecoveryPointsByResourcePaginationTraits<DerivedClient>>
  ListRecoveryPointsByResourcePaginator(const Model::ListRecoveryPointsByResourceRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRecoveryPointsByResourceRequest,
                                             Pagination::ListRecoveryPointsByResourcePaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListReportJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListReportJobsRequest, Pagination::ListReportJobsPaginationTraits<DerivedClient>>
  ListReportJobsPaginator(const Model::ListReportJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListReportJobsRequest,
                                             Pagination::ListReportJobsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListReportPlans operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListReportPlansRequest,
                                    Pagination::ListReportPlansPaginationTraits<DerivedClient>>
  ListReportPlansPaginator(const Model::ListReportPlansRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListReportPlansRequest,
                                             Pagination::ListReportPlansPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListRestoreAccessBackupVaults operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRestoreAccessBackupVaultsRequest,
                                    Pagination::ListRestoreAccessBackupVaultsPaginationTraits<DerivedClient>>
  ListRestoreAccessBackupVaultsPaginator(const Model::ListRestoreAccessBackupVaultsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRestoreAccessBackupVaultsRequest,
                                             Pagination::ListRestoreAccessBackupVaultsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRestoreJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRestoreJobsRequest,
                                    Pagination::ListRestoreJobsPaginationTraits<DerivedClient>>
  ListRestoreJobsPaginator(const Model::ListRestoreJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRestoreJobsRequest,
                                             Pagination::ListRestoreJobsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListRestoreJobsByProtectedResource operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRestoreJobsByProtectedResourceRequest,
                                    Pagination::ListRestoreJobsByProtectedResourcePaginationTraits<DerivedClient>>
  ListRestoreJobsByProtectedResourcePaginator(const Model::ListRestoreJobsByProtectedResourceRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRestoreJobsByProtectedResourceRequest,
                                             Pagination::ListRestoreJobsByProtectedResourcePaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRestoreJobSummaries operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRestoreJobSummariesRequest,
                                    Pagination::ListRestoreJobSummariesPaginationTraits<DerivedClient>>
  ListRestoreJobSummariesPaginator(const Model::ListRestoreJobSummariesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRestoreJobSummariesRequest,
                                             Pagination::ListRestoreJobSummariesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRestoreTestingPlans operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRestoreTestingPlansRequest,
                                    Pagination::ListRestoreTestingPlansPaginationTraits<DerivedClient>>
  ListRestoreTestingPlansPaginator(const Model::ListRestoreTestingPlansRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRestoreTestingPlansRequest,
                                             Pagination::ListRestoreTestingPlansPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRestoreTestingSelections operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRestoreTestingSelectionsRequest,
                                    Pagination::ListRestoreTestingSelectionsPaginationTraits<DerivedClient>>
  ListRestoreTestingSelectionsPaginator(const Model::ListRestoreTestingSelectionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRestoreTestingSelectionsRequest,
                                             Pagination::ListRestoreTestingSelectionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListScanJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListScanJobsRequest, Pagination::ListScanJobsPaginationTraits<DerivedClient>>
  ListScanJobsPaginator(const Model::ListScanJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListScanJobsRequest,
                                             Pagination::ListScanJobsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListScanJobSummaries operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListScanJobSummariesRequest,
                                    Pagination::ListScanJobSummariesPaginationTraits<DerivedClient>>
  ListScanJobSummariesPaginator(const Model::ListScanJobSummariesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListScanJobSummariesRequest,
                                             Pagination::ListScanJobSummariesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTags operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTagsRequest, Pagination::ListTagsPaginationTraits<DerivedClient>>
  ListTagsPaginator(const Model::ListTagsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTagsRequest, Pagination::ListTagsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTieringConfigurations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTieringConfigurationsRequest,
                                    Pagination::ListTieringConfigurationsPaginationTraits<DerivedClient>>
  ListTieringConfigurationsPaginator(const Model::ListTieringConfigurationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTieringConfigurationsRequest,
                                             Pagination::ListTieringConfigurationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace Backup
}  // namespace Aws
