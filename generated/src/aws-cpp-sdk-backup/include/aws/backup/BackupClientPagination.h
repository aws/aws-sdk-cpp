/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/BackupClient.h>
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

namespace Aws {
namespace Backup {

using ListBackupJobsPaginator =
    Aws::Utils::Pagination::Paginator<BackupClient, Model::ListBackupJobsRequest, Pagination::ListBackupJobsPaginationTraits<BackupClient>>;
using ListBackupJobSummariesPaginator = Aws::Utils::Pagination::Paginator<BackupClient, Model::ListBackupJobSummariesRequest,
                                                                          Pagination::ListBackupJobSummariesPaginationTraits<BackupClient>>;
using ListBackupPlansPaginator = Aws::Utils::Pagination::Paginator<BackupClient, Model::ListBackupPlansRequest,
                                                                   Pagination::ListBackupPlansPaginationTraits<BackupClient>>;
using ListBackupPlanTemplatesPaginator =
    Aws::Utils::Pagination::Paginator<BackupClient, Model::ListBackupPlanTemplatesRequest,
                                      Pagination::ListBackupPlanTemplatesPaginationTraits<BackupClient>>;
using ListBackupPlanVersionsPaginator = Aws::Utils::Pagination::Paginator<BackupClient, Model::ListBackupPlanVersionsRequest,
                                                                          Pagination::ListBackupPlanVersionsPaginationTraits<BackupClient>>;
using ListBackupSelectionsPaginator = Aws::Utils::Pagination::Paginator<BackupClient, Model::ListBackupSelectionsRequest,
                                                                        Pagination::ListBackupSelectionsPaginationTraits<BackupClient>>;
using ListBackupVaultsPaginator = Aws::Utils::Pagination::Paginator<BackupClient, Model::ListBackupVaultsRequest,
                                                                    Pagination::ListBackupVaultsPaginationTraits<BackupClient>>;
using ListCopyJobsPaginator =
    Aws::Utils::Pagination::Paginator<BackupClient, Model::ListCopyJobsRequest, Pagination::ListCopyJobsPaginationTraits<BackupClient>>;
using ListCopyJobSummariesPaginator = Aws::Utils::Pagination::Paginator<BackupClient, Model::ListCopyJobSummariesRequest,
                                                                        Pagination::ListCopyJobSummariesPaginationTraits<BackupClient>>;
using ListFrameworksPaginator =
    Aws::Utils::Pagination::Paginator<BackupClient, Model::ListFrameworksRequest, Pagination::ListFrameworksPaginationTraits<BackupClient>>;
using ListIndexedRecoveryPointsPaginator =
    Aws::Utils::Pagination::Paginator<BackupClient, Model::ListIndexedRecoveryPointsRequest,
                                      Pagination::ListIndexedRecoveryPointsPaginationTraits<BackupClient>>;
using ListLegalHoldsPaginator =
    Aws::Utils::Pagination::Paginator<BackupClient, Model::ListLegalHoldsRequest, Pagination::ListLegalHoldsPaginationTraits<BackupClient>>;
using ListProtectedResourcesPaginator = Aws::Utils::Pagination::Paginator<BackupClient, Model::ListProtectedResourcesRequest,
                                                                          Pagination::ListProtectedResourcesPaginationTraits<BackupClient>>;
using ListProtectedResourcesByBackupVaultPaginator =
    Aws::Utils::Pagination::Paginator<BackupClient, Model::ListProtectedResourcesByBackupVaultRequest,
                                      Pagination::ListProtectedResourcesByBackupVaultPaginationTraits<BackupClient>>;
using ListRecoveryPointsByBackupVaultPaginator =
    Aws::Utils::Pagination::Paginator<BackupClient, Model::ListRecoveryPointsByBackupVaultRequest,
                                      Pagination::ListRecoveryPointsByBackupVaultPaginationTraits<BackupClient>>;
using ListRecoveryPointsByLegalHoldPaginator =
    Aws::Utils::Pagination::Paginator<BackupClient, Model::ListRecoveryPointsByLegalHoldRequest,
                                      Pagination::ListRecoveryPointsByLegalHoldPaginationTraits<BackupClient>>;
using ListRecoveryPointsByResourcePaginator =
    Aws::Utils::Pagination::Paginator<BackupClient, Model::ListRecoveryPointsByResourceRequest,
                                      Pagination::ListRecoveryPointsByResourcePaginationTraits<BackupClient>>;
using ListReportJobsPaginator =
    Aws::Utils::Pagination::Paginator<BackupClient, Model::ListReportJobsRequest, Pagination::ListReportJobsPaginationTraits<BackupClient>>;
using ListReportPlansPaginator = Aws::Utils::Pagination::Paginator<BackupClient, Model::ListReportPlansRequest,
                                                                   Pagination::ListReportPlansPaginationTraits<BackupClient>>;
using ListRestoreAccessBackupVaultsPaginator =
    Aws::Utils::Pagination::Paginator<BackupClient, Model::ListRestoreAccessBackupVaultsRequest,
                                      Pagination::ListRestoreAccessBackupVaultsPaginationTraits<BackupClient>>;
using ListRestoreJobsPaginator = Aws::Utils::Pagination::Paginator<BackupClient, Model::ListRestoreJobsRequest,
                                                                   Pagination::ListRestoreJobsPaginationTraits<BackupClient>>;
using ListRestoreJobsByProtectedResourcePaginator =
    Aws::Utils::Pagination::Paginator<BackupClient, Model::ListRestoreJobsByProtectedResourceRequest,
                                      Pagination::ListRestoreJobsByProtectedResourcePaginationTraits<BackupClient>>;
using ListRestoreJobSummariesPaginator =
    Aws::Utils::Pagination::Paginator<BackupClient, Model::ListRestoreJobSummariesRequest,
                                      Pagination::ListRestoreJobSummariesPaginationTraits<BackupClient>>;
using ListRestoreTestingPlansPaginator =
    Aws::Utils::Pagination::Paginator<BackupClient, Model::ListRestoreTestingPlansRequest,
                                      Pagination::ListRestoreTestingPlansPaginationTraits<BackupClient>>;
using ListRestoreTestingSelectionsPaginator =
    Aws::Utils::Pagination::Paginator<BackupClient, Model::ListRestoreTestingSelectionsRequest,
                                      Pagination::ListRestoreTestingSelectionsPaginationTraits<BackupClient>>;
using ListScanJobsPaginator =
    Aws::Utils::Pagination::Paginator<BackupClient, Model::ListScanJobsRequest, Pagination::ListScanJobsPaginationTraits<BackupClient>>;
using ListScanJobSummariesPaginator = Aws::Utils::Pagination::Paginator<BackupClient, Model::ListScanJobSummariesRequest,
                                                                        Pagination::ListScanJobSummariesPaginationTraits<BackupClient>>;
using ListTagsPaginator =
    Aws::Utils::Pagination::Paginator<BackupClient, Model::ListTagsRequest, Pagination::ListTagsPaginationTraits<BackupClient>>;
using ListTieringConfigurationsPaginator =
    Aws::Utils::Pagination::Paginator<BackupClient, Model::ListTieringConfigurationsRequest,
                                      Pagination::ListTieringConfigurationsPaginationTraits<BackupClient>>;

}  // namespace Backup
}  // namespace Aws
