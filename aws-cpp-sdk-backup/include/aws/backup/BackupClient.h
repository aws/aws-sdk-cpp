/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/BackupErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/backup/model/CreateBackupPlanResult.h>
#include <aws/backup/model/CreateBackupSelectionResult.h>
#include <aws/backup/model/CreateBackupVaultResult.h>
#include <aws/backup/model/CreateFrameworkResult.h>
#include <aws/backup/model/CreateReportPlanResult.h>
#include <aws/backup/model/DeleteBackupPlanResult.h>
#include <aws/backup/model/DescribeBackupJobResult.h>
#include <aws/backup/model/DescribeBackupVaultResult.h>
#include <aws/backup/model/DescribeCopyJobResult.h>
#include <aws/backup/model/DescribeFrameworkResult.h>
#include <aws/backup/model/DescribeGlobalSettingsResult.h>
#include <aws/backup/model/DescribeProtectedResourceResult.h>
#include <aws/backup/model/DescribeRecoveryPointResult.h>
#include <aws/backup/model/DescribeRegionSettingsResult.h>
#include <aws/backup/model/DescribeReportJobResult.h>
#include <aws/backup/model/DescribeReportPlanResult.h>
#include <aws/backup/model/DescribeRestoreJobResult.h>
#include <aws/backup/model/ExportBackupPlanTemplateResult.h>
#include <aws/backup/model/GetBackupPlanResult.h>
#include <aws/backup/model/GetBackupPlanFromJSONResult.h>
#include <aws/backup/model/GetBackupPlanFromTemplateResult.h>
#include <aws/backup/model/GetBackupSelectionResult.h>
#include <aws/backup/model/GetBackupVaultAccessPolicyResult.h>
#include <aws/backup/model/GetBackupVaultNotificationsResult.h>
#include <aws/backup/model/GetRecoveryPointRestoreMetadataResult.h>
#include <aws/backup/model/GetSupportedResourceTypesResult.h>
#include <aws/backup/model/ListBackupJobsResult.h>
#include <aws/backup/model/ListBackupPlanTemplatesResult.h>
#include <aws/backup/model/ListBackupPlanVersionsResult.h>
#include <aws/backup/model/ListBackupPlansResult.h>
#include <aws/backup/model/ListBackupSelectionsResult.h>
#include <aws/backup/model/ListBackupVaultsResult.h>
#include <aws/backup/model/ListCopyJobsResult.h>
#include <aws/backup/model/ListFrameworksResult.h>
#include <aws/backup/model/ListProtectedResourcesResult.h>
#include <aws/backup/model/ListRecoveryPointsByBackupVaultResult.h>
#include <aws/backup/model/ListRecoveryPointsByResourceResult.h>
#include <aws/backup/model/ListReportJobsResult.h>
#include <aws/backup/model/ListReportPlansResult.h>
#include <aws/backup/model/ListRestoreJobsResult.h>
#include <aws/backup/model/ListTagsResult.h>
#include <aws/backup/model/StartBackupJobResult.h>
#include <aws/backup/model/StartCopyJobResult.h>
#include <aws/backup/model/StartReportJobResult.h>
#include <aws/backup/model/StartRestoreJobResult.h>
#include <aws/backup/model/UpdateBackupPlanResult.h>
#include <aws/backup/model/UpdateFrameworkResult.h>
#include <aws/backup/model/UpdateRecoveryPointLifecycleResult.h>
#include <aws/backup/model/UpdateReportPlanResult.h>
#include <aws/core/NoResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;
namespace Threading
{
  class Executor;
} // namespace Threading
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace Backup
{

namespace Model
{
        class CreateBackupPlanRequest;
        class CreateBackupSelectionRequest;
        class CreateBackupVaultRequest;
        class CreateFrameworkRequest;
        class CreateReportPlanRequest;
        class DeleteBackupPlanRequest;
        class DeleteBackupSelectionRequest;
        class DeleteBackupVaultRequest;
        class DeleteBackupVaultAccessPolicyRequest;
        class DeleteBackupVaultLockConfigurationRequest;
        class DeleteBackupVaultNotificationsRequest;
        class DeleteFrameworkRequest;
        class DeleteRecoveryPointRequest;
        class DeleteReportPlanRequest;
        class DescribeBackupJobRequest;
        class DescribeBackupVaultRequest;
        class DescribeCopyJobRequest;
        class DescribeFrameworkRequest;
        class DescribeGlobalSettingsRequest;
        class DescribeProtectedResourceRequest;
        class DescribeRecoveryPointRequest;
        class DescribeRegionSettingsRequest;
        class DescribeReportJobRequest;
        class DescribeReportPlanRequest;
        class DescribeRestoreJobRequest;
        class DisassociateRecoveryPointRequest;
        class ExportBackupPlanTemplateRequest;
        class GetBackupPlanRequest;
        class GetBackupPlanFromJSONRequest;
        class GetBackupPlanFromTemplateRequest;
        class GetBackupSelectionRequest;
        class GetBackupVaultAccessPolicyRequest;
        class GetBackupVaultNotificationsRequest;
        class GetRecoveryPointRestoreMetadataRequest;
        class ListBackupJobsRequest;
        class ListBackupPlanTemplatesRequest;
        class ListBackupPlanVersionsRequest;
        class ListBackupPlansRequest;
        class ListBackupSelectionsRequest;
        class ListBackupVaultsRequest;
        class ListCopyJobsRequest;
        class ListFrameworksRequest;
        class ListProtectedResourcesRequest;
        class ListRecoveryPointsByBackupVaultRequest;
        class ListRecoveryPointsByResourceRequest;
        class ListReportJobsRequest;
        class ListReportPlansRequest;
        class ListRestoreJobsRequest;
        class ListTagsRequest;
        class PutBackupVaultAccessPolicyRequest;
        class PutBackupVaultLockConfigurationRequest;
        class PutBackupVaultNotificationsRequest;
        class StartBackupJobRequest;
        class StartCopyJobRequest;
        class StartReportJobRequest;
        class StartRestoreJobRequest;
        class StopBackupJobRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateBackupPlanRequest;
        class UpdateFrameworkRequest;
        class UpdateGlobalSettingsRequest;
        class UpdateRecoveryPointLifecycleRequest;
        class UpdateRegionSettingsRequest;
        class UpdateReportPlanRequest;

        typedef Aws::Utils::Outcome<CreateBackupPlanResult, BackupError> CreateBackupPlanOutcome;
        typedef Aws::Utils::Outcome<CreateBackupSelectionResult, BackupError> CreateBackupSelectionOutcome;
        typedef Aws::Utils::Outcome<CreateBackupVaultResult, BackupError> CreateBackupVaultOutcome;
        typedef Aws::Utils::Outcome<CreateFrameworkResult, BackupError> CreateFrameworkOutcome;
        typedef Aws::Utils::Outcome<CreateReportPlanResult, BackupError> CreateReportPlanOutcome;
        typedef Aws::Utils::Outcome<DeleteBackupPlanResult, BackupError> DeleteBackupPlanOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, BackupError> DeleteBackupSelectionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, BackupError> DeleteBackupVaultOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, BackupError> DeleteBackupVaultAccessPolicyOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, BackupError> DeleteBackupVaultLockConfigurationOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, BackupError> DeleteBackupVaultNotificationsOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, BackupError> DeleteFrameworkOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, BackupError> DeleteRecoveryPointOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, BackupError> DeleteReportPlanOutcome;
        typedef Aws::Utils::Outcome<DescribeBackupJobResult, BackupError> DescribeBackupJobOutcome;
        typedef Aws::Utils::Outcome<DescribeBackupVaultResult, BackupError> DescribeBackupVaultOutcome;
        typedef Aws::Utils::Outcome<DescribeCopyJobResult, BackupError> DescribeCopyJobOutcome;
        typedef Aws::Utils::Outcome<DescribeFrameworkResult, BackupError> DescribeFrameworkOutcome;
        typedef Aws::Utils::Outcome<DescribeGlobalSettingsResult, BackupError> DescribeGlobalSettingsOutcome;
        typedef Aws::Utils::Outcome<DescribeProtectedResourceResult, BackupError> DescribeProtectedResourceOutcome;
        typedef Aws::Utils::Outcome<DescribeRecoveryPointResult, BackupError> DescribeRecoveryPointOutcome;
        typedef Aws::Utils::Outcome<DescribeRegionSettingsResult, BackupError> DescribeRegionSettingsOutcome;
        typedef Aws::Utils::Outcome<DescribeReportJobResult, BackupError> DescribeReportJobOutcome;
        typedef Aws::Utils::Outcome<DescribeReportPlanResult, BackupError> DescribeReportPlanOutcome;
        typedef Aws::Utils::Outcome<DescribeRestoreJobResult, BackupError> DescribeRestoreJobOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, BackupError> DisassociateRecoveryPointOutcome;
        typedef Aws::Utils::Outcome<ExportBackupPlanTemplateResult, BackupError> ExportBackupPlanTemplateOutcome;
        typedef Aws::Utils::Outcome<GetBackupPlanResult, BackupError> GetBackupPlanOutcome;
        typedef Aws::Utils::Outcome<GetBackupPlanFromJSONResult, BackupError> GetBackupPlanFromJSONOutcome;
        typedef Aws::Utils::Outcome<GetBackupPlanFromTemplateResult, BackupError> GetBackupPlanFromTemplateOutcome;
        typedef Aws::Utils::Outcome<GetBackupSelectionResult, BackupError> GetBackupSelectionOutcome;
        typedef Aws::Utils::Outcome<GetBackupVaultAccessPolicyResult, BackupError> GetBackupVaultAccessPolicyOutcome;
        typedef Aws::Utils::Outcome<GetBackupVaultNotificationsResult, BackupError> GetBackupVaultNotificationsOutcome;
        typedef Aws::Utils::Outcome<GetRecoveryPointRestoreMetadataResult, BackupError> GetRecoveryPointRestoreMetadataOutcome;
        typedef Aws::Utils::Outcome<GetSupportedResourceTypesResult, BackupError> GetSupportedResourceTypesOutcome;
        typedef Aws::Utils::Outcome<ListBackupJobsResult, BackupError> ListBackupJobsOutcome;
        typedef Aws::Utils::Outcome<ListBackupPlanTemplatesResult, BackupError> ListBackupPlanTemplatesOutcome;
        typedef Aws::Utils::Outcome<ListBackupPlanVersionsResult, BackupError> ListBackupPlanVersionsOutcome;
        typedef Aws::Utils::Outcome<ListBackupPlansResult, BackupError> ListBackupPlansOutcome;
        typedef Aws::Utils::Outcome<ListBackupSelectionsResult, BackupError> ListBackupSelectionsOutcome;
        typedef Aws::Utils::Outcome<ListBackupVaultsResult, BackupError> ListBackupVaultsOutcome;
        typedef Aws::Utils::Outcome<ListCopyJobsResult, BackupError> ListCopyJobsOutcome;
        typedef Aws::Utils::Outcome<ListFrameworksResult, BackupError> ListFrameworksOutcome;
        typedef Aws::Utils::Outcome<ListProtectedResourcesResult, BackupError> ListProtectedResourcesOutcome;
        typedef Aws::Utils::Outcome<ListRecoveryPointsByBackupVaultResult, BackupError> ListRecoveryPointsByBackupVaultOutcome;
        typedef Aws::Utils::Outcome<ListRecoveryPointsByResourceResult, BackupError> ListRecoveryPointsByResourceOutcome;
        typedef Aws::Utils::Outcome<ListReportJobsResult, BackupError> ListReportJobsOutcome;
        typedef Aws::Utils::Outcome<ListReportPlansResult, BackupError> ListReportPlansOutcome;
        typedef Aws::Utils::Outcome<ListRestoreJobsResult, BackupError> ListRestoreJobsOutcome;
        typedef Aws::Utils::Outcome<ListTagsResult, BackupError> ListTagsOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, BackupError> PutBackupVaultAccessPolicyOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, BackupError> PutBackupVaultLockConfigurationOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, BackupError> PutBackupVaultNotificationsOutcome;
        typedef Aws::Utils::Outcome<StartBackupJobResult, BackupError> StartBackupJobOutcome;
        typedef Aws::Utils::Outcome<StartCopyJobResult, BackupError> StartCopyJobOutcome;
        typedef Aws::Utils::Outcome<StartReportJobResult, BackupError> StartReportJobOutcome;
        typedef Aws::Utils::Outcome<StartRestoreJobResult, BackupError> StartRestoreJobOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, BackupError> StopBackupJobOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, BackupError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, BackupError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateBackupPlanResult, BackupError> UpdateBackupPlanOutcome;
        typedef Aws::Utils::Outcome<UpdateFrameworkResult, BackupError> UpdateFrameworkOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, BackupError> UpdateGlobalSettingsOutcome;
        typedef Aws::Utils::Outcome<UpdateRecoveryPointLifecycleResult, BackupError> UpdateRecoveryPointLifecycleOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, BackupError> UpdateRegionSettingsOutcome;
        typedef Aws::Utils::Outcome<UpdateReportPlanResult, BackupError> UpdateReportPlanOutcome;

        typedef std::future<CreateBackupPlanOutcome> CreateBackupPlanOutcomeCallable;
        typedef std::future<CreateBackupSelectionOutcome> CreateBackupSelectionOutcomeCallable;
        typedef std::future<CreateBackupVaultOutcome> CreateBackupVaultOutcomeCallable;
        typedef std::future<CreateFrameworkOutcome> CreateFrameworkOutcomeCallable;
        typedef std::future<CreateReportPlanOutcome> CreateReportPlanOutcomeCallable;
        typedef std::future<DeleteBackupPlanOutcome> DeleteBackupPlanOutcomeCallable;
        typedef std::future<DeleteBackupSelectionOutcome> DeleteBackupSelectionOutcomeCallable;
        typedef std::future<DeleteBackupVaultOutcome> DeleteBackupVaultOutcomeCallable;
        typedef std::future<DeleteBackupVaultAccessPolicyOutcome> DeleteBackupVaultAccessPolicyOutcomeCallable;
        typedef std::future<DeleteBackupVaultLockConfigurationOutcome> DeleteBackupVaultLockConfigurationOutcomeCallable;
        typedef std::future<DeleteBackupVaultNotificationsOutcome> DeleteBackupVaultNotificationsOutcomeCallable;
        typedef std::future<DeleteFrameworkOutcome> DeleteFrameworkOutcomeCallable;
        typedef std::future<DeleteRecoveryPointOutcome> DeleteRecoveryPointOutcomeCallable;
        typedef std::future<DeleteReportPlanOutcome> DeleteReportPlanOutcomeCallable;
        typedef std::future<DescribeBackupJobOutcome> DescribeBackupJobOutcomeCallable;
        typedef std::future<DescribeBackupVaultOutcome> DescribeBackupVaultOutcomeCallable;
        typedef std::future<DescribeCopyJobOutcome> DescribeCopyJobOutcomeCallable;
        typedef std::future<DescribeFrameworkOutcome> DescribeFrameworkOutcomeCallable;
        typedef std::future<DescribeGlobalSettingsOutcome> DescribeGlobalSettingsOutcomeCallable;
        typedef std::future<DescribeProtectedResourceOutcome> DescribeProtectedResourceOutcomeCallable;
        typedef std::future<DescribeRecoveryPointOutcome> DescribeRecoveryPointOutcomeCallable;
        typedef std::future<DescribeRegionSettingsOutcome> DescribeRegionSettingsOutcomeCallable;
        typedef std::future<DescribeReportJobOutcome> DescribeReportJobOutcomeCallable;
        typedef std::future<DescribeReportPlanOutcome> DescribeReportPlanOutcomeCallable;
        typedef std::future<DescribeRestoreJobOutcome> DescribeRestoreJobOutcomeCallable;
        typedef std::future<DisassociateRecoveryPointOutcome> DisassociateRecoveryPointOutcomeCallable;
        typedef std::future<ExportBackupPlanTemplateOutcome> ExportBackupPlanTemplateOutcomeCallable;
        typedef std::future<GetBackupPlanOutcome> GetBackupPlanOutcomeCallable;
        typedef std::future<GetBackupPlanFromJSONOutcome> GetBackupPlanFromJSONOutcomeCallable;
        typedef std::future<GetBackupPlanFromTemplateOutcome> GetBackupPlanFromTemplateOutcomeCallable;
        typedef std::future<GetBackupSelectionOutcome> GetBackupSelectionOutcomeCallable;
        typedef std::future<GetBackupVaultAccessPolicyOutcome> GetBackupVaultAccessPolicyOutcomeCallable;
        typedef std::future<GetBackupVaultNotificationsOutcome> GetBackupVaultNotificationsOutcomeCallable;
        typedef std::future<GetRecoveryPointRestoreMetadataOutcome> GetRecoveryPointRestoreMetadataOutcomeCallable;
        typedef std::future<GetSupportedResourceTypesOutcome> GetSupportedResourceTypesOutcomeCallable;
        typedef std::future<ListBackupJobsOutcome> ListBackupJobsOutcomeCallable;
        typedef std::future<ListBackupPlanTemplatesOutcome> ListBackupPlanTemplatesOutcomeCallable;
        typedef std::future<ListBackupPlanVersionsOutcome> ListBackupPlanVersionsOutcomeCallable;
        typedef std::future<ListBackupPlansOutcome> ListBackupPlansOutcomeCallable;
        typedef std::future<ListBackupSelectionsOutcome> ListBackupSelectionsOutcomeCallable;
        typedef std::future<ListBackupVaultsOutcome> ListBackupVaultsOutcomeCallable;
        typedef std::future<ListCopyJobsOutcome> ListCopyJobsOutcomeCallable;
        typedef std::future<ListFrameworksOutcome> ListFrameworksOutcomeCallable;
        typedef std::future<ListProtectedResourcesOutcome> ListProtectedResourcesOutcomeCallable;
        typedef std::future<ListRecoveryPointsByBackupVaultOutcome> ListRecoveryPointsByBackupVaultOutcomeCallable;
        typedef std::future<ListRecoveryPointsByResourceOutcome> ListRecoveryPointsByResourceOutcomeCallable;
        typedef std::future<ListReportJobsOutcome> ListReportJobsOutcomeCallable;
        typedef std::future<ListReportPlansOutcome> ListReportPlansOutcomeCallable;
        typedef std::future<ListRestoreJobsOutcome> ListRestoreJobsOutcomeCallable;
        typedef std::future<ListTagsOutcome> ListTagsOutcomeCallable;
        typedef std::future<PutBackupVaultAccessPolicyOutcome> PutBackupVaultAccessPolicyOutcomeCallable;
        typedef std::future<PutBackupVaultLockConfigurationOutcome> PutBackupVaultLockConfigurationOutcomeCallable;
        typedef std::future<PutBackupVaultNotificationsOutcome> PutBackupVaultNotificationsOutcomeCallable;
        typedef std::future<StartBackupJobOutcome> StartBackupJobOutcomeCallable;
        typedef std::future<StartCopyJobOutcome> StartCopyJobOutcomeCallable;
        typedef std::future<StartReportJobOutcome> StartReportJobOutcomeCallable;
        typedef std::future<StartRestoreJobOutcome> StartRestoreJobOutcomeCallable;
        typedef std::future<StopBackupJobOutcome> StopBackupJobOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateBackupPlanOutcome> UpdateBackupPlanOutcomeCallable;
        typedef std::future<UpdateFrameworkOutcome> UpdateFrameworkOutcomeCallable;
        typedef std::future<UpdateGlobalSettingsOutcome> UpdateGlobalSettingsOutcomeCallable;
        typedef std::future<UpdateRecoveryPointLifecycleOutcome> UpdateRecoveryPointLifecycleOutcomeCallable;
        typedef std::future<UpdateRegionSettingsOutcome> UpdateRegionSettingsOutcomeCallable;
        typedef std::future<UpdateReportPlanOutcome> UpdateReportPlanOutcomeCallable;
} // namespace Model

  class BackupClient;

    typedef std::function<void(const BackupClient*, const Model::CreateBackupPlanRequest&, const Model::CreateBackupPlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBackupPlanResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::CreateBackupSelectionRequest&, const Model::CreateBackupSelectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBackupSelectionResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::CreateBackupVaultRequest&, const Model::CreateBackupVaultOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBackupVaultResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::CreateFrameworkRequest&, const Model::CreateFrameworkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFrameworkResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::CreateReportPlanRequest&, const Model::CreateReportPlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateReportPlanResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::DeleteBackupPlanRequest&, const Model::DeleteBackupPlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBackupPlanResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::DeleteBackupSelectionRequest&, const Model::DeleteBackupSelectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBackupSelectionResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::DeleteBackupVaultRequest&, const Model::DeleteBackupVaultOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBackupVaultResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::DeleteBackupVaultAccessPolicyRequest&, const Model::DeleteBackupVaultAccessPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBackupVaultAccessPolicyResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::DeleteBackupVaultLockConfigurationRequest&, const Model::DeleteBackupVaultLockConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBackupVaultLockConfigurationResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::DeleteBackupVaultNotificationsRequest&, const Model::DeleteBackupVaultNotificationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBackupVaultNotificationsResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::DeleteFrameworkRequest&, const Model::DeleteFrameworkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFrameworkResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::DeleteRecoveryPointRequest&, const Model::DeleteRecoveryPointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRecoveryPointResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::DeleteReportPlanRequest&, const Model::DeleteReportPlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteReportPlanResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::DescribeBackupJobRequest&, const Model::DescribeBackupJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeBackupJobResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::DescribeBackupVaultRequest&, const Model::DescribeBackupVaultOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeBackupVaultResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::DescribeCopyJobRequest&, const Model::DescribeCopyJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCopyJobResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::DescribeFrameworkRequest&, const Model::DescribeFrameworkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFrameworkResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::DescribeGlobalSettingsRequest&, const Model::DescribeGlobalSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeGlobalSettingsResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::DescribeProtectedResourceRequest&, const Model::DescribeProtectedResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeProtectedResourceResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::DescribeRecoveryPointRequest&, const Model::DescribeRecoveryPointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRecoveryPointResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::DescribeRegionSettingsRequest&, const Model::DescribeRegionSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRegionSettingsResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::DescribeReportJobRequest&, const Model::DescribeReportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReportJobResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::DescribeReportPlanRequest&, const Model::DescribeReportPlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReportPlanResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::DescribeRestoreJobRequest&, const Model::DescribeRestoreJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRestoreJobResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::DisassociateRecoveryPointRequest&, const Model::DisassociateRecoveryPointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateRecoveryPointResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::ExportBackupPlanTemplateRequest&, const Model::ExportBackupPlanTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExportBackupPlanTemplateResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::GetBackupPlanRequest&, const Model::GetBackupPlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBackupPlanResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::GetBackupPlanFromJSONRequest&, const Model::GetBackupPlanFromJSONOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBackupPlanFromJSONResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::GetBackupPlanFromTemplateRequest&, const Model::GetBackupPlanFromTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBackupPlanFromTemplateResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::GetBackupSelectionRequest&, const Model::GetBackupSelectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBackupSelectionResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::GetBackupVaultAccessPolicyRequest&, const Model::GetBackupVaultAccessPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBackupVaultAccessPolicyResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::GetBackupVaultNotificationsRequest&, const Model::GetBackupVaultNotificationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBackupVaultNotificationsResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::GetRecoveryPointRestoreMetadataRequest&, const Model::GetRecoveryPointRestoreMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRecoveryPointRestoreMetadataResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::GetSupportedResourceTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSupportedResourceTypesResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::ListBackupJobsRequest&, const Model::ListBackupJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBackupJobsResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::ListBackupPlanTemplatesRequest&, const Model::ListBackupPlanTemplatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBackupPlanTemplatesResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::ListBackupPlanVersionsRequest&, const Model::ListBackupPlanVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBackupPlanVersionsResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::ListBackupPlansRequest&, const Model::ListBackupPlansOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBackupPlansResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::ListBackupSelectionsRequest&, const Model::ListBackupSelectionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBackupSelectionsResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::ListBackupVaultsRequest&, const Model::ListBackupVaultsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBackupVaultsResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::ListCopyJobsRequest&, const Model::ListCopyJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCopyJobsResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::ListFrameworksRequest&, const Model::ListFrameworksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFrameworksResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::ListProtectedResourcesRequest&, const Model::ListProtectedResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProtectedResourcesResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::ListRecoveryPointsByBackupVaultRequest&, const Model::ListRecoveryPointsByBackupVaultOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRecoveryPointsByBackupVaultResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::ListRecoveryPointsByResourceRequest&, const Model::ListRecoveryPointsByResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRecoveryPointsByResourceResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::ListReportJobsRequest&, const Model::ListReportJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListReportJobsResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::ListReportPlansRequest&, const Model::ListReportPlansOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListReportPlansResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::ListRestoreJobsRequest&, const Model::ListRestoreJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRestoreJobsResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::ListTagsRequest&, const Model::ListTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::PutBackupVaultAccessPolicyRequest&, const Model::PutBackupVaultAccessPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutBackupVaultAccessPolicyResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::PutBackupVaultLockConfigurationRequest&, const Model::PutBackupVaultLockConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutBackupVaultLockConfigurationResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::PutBackupVaultNotificationsRequest&, const Model::PutBackupVaultNotificationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutBackupVaultNotificationsResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::StartBackupJobRequest&, const Model::StartBackupJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartBackupJobResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::StartCopyJobRequest&, const Model::StartCopyJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartCopyJobResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::StartReportJobRequest&, const Model::StartReportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartReportJobResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::StartRestoreJobRequest&, const Model::StartRestoreJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartRestoreJobResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::StopBackupJobRequest&, const Model::StopBackupJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopBackupJobResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::UpdateBackupPlanRequest&, const Model::UpdateBackupPlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateBackupPlanResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::UpdateFrameworkRequest&, const Model::UpdateFrameworkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFrameworkResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::UpdateGlobalSettingsRequest&, const Model::UpdateGlobalSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateGlobalSettingsResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::UpdateRecoveryPointLifecycleRequest&, const Model::UpdateRecoveryPointLifecycleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRecoveryPointLifecycleResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::UpdateRegionSettingsRequest&, const Model::UpdateRegionSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRegionSettingsResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::UpdateReportPlanRequest&, const Model::UpdateReportPlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateReportPlanResponseReceivedHandler;

  /**
   * <fullname>Backup</fullname> <p>Backup is a unified backup service designed to
   * protect Amazon Web Services services and their associated data. Backup
   * simplifies the creation, migration, restoration, and deletion of backups, while
   * also providing reporting and auditing.</p>
   */
  class AWS_BACKUP_API BackupClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BackupClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BackupClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        BackupClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~BackupClient();


        /**
         * <p>Creates a backup plan using a backup plan name and backup rules. A backup
         * plan is a document that contains information that Backup uses to schedule tasks
         * that create recovery points for resources.</p> <p>If you call
         * <code>CreateBackupPlan</code> with a plan that already exists, you receive an
         * <code>AlreadyExistsException</code> exception.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/CreateBackupPlan">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBackupPlanOutcome CreateBackupPlan(const Model::CreateBackupPlanRequest& request) const;

        /**
         * A Callable wrapper for CreateBackupPlan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateBackupPlanOutcomeCallable CreateBackupPlanCallable(const Model::CreateBackupPlanRequest& request) const;

        /**
         * An Async wrapper for CreateBackupPlan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateBackupPlanAsync(const Model::CreateBackupPlanRequest& request, const CreateBackupPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a JSON document that specifies a set of resources to assign to a
         * backup plan. For examples, see <a
         * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/assigning-resources.html#assigning-resources-json">Assigning
         * resources programmatically</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/CreateBackupSelection">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBackupSelectionOutcome CreateBackupSelection(const Model::CreateBackupSelectionRequest& request) const;

        /**
         * A Callable wrapper for CreateBackupSelection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateBackupSelectionOutcomeCallable CreateBackupSelectionCallable(const Model::CreateBackupSelectionRequest& request) const;

        /**
         * An Async wrapper for CreateBackupSelection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateBackupSelectionAsync(const Model::CreateBackupSelectionRequest& request, const CreateBackupSelectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a logical container where backups are stored. A
         * <code>CreateBackupVault</code> request includes a name, optionally one or more
         * resource tags, an encryption key, and a request ID.</p>  <p>Do not include
         * sensitive data, such as passport numbers, in the name of a backup vault.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/CreateBackupVault">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBackupVaultOutcome CreateBackupVault(const Model::CreateBackupVaultRequest& request) const;

        /**
         * A Callable wrapper for CreateBackupVault that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateBackupVaultOutcomeCallable CreateBackupVaultCallable(const Model::CreateBackupVaultRequest& request) const;

        /**
         * An Async wrapper for CreateBackupVault that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateBackupVaultAsync(const Model::CreateBackupVaultRequest& request, const CreateBackupVaultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a framework with one or more controls. A framework is a collection of
         * controls that you can use to evaluate your backup practices. By using pre-built
         * customizable controls to define your policies, you can evaluate whether your
         * backup practices comply with your policies and which resources are not yet in
         * compliance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/CreateFramework">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFrameworkOutcome CreateFramework(const Model::CreateFrameworkRequest& request) const;

        /**
         * A Callable wrapper for CreateFramework that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFrameworkOutcomeCallable CreateFrameworkCallable(const Model::CreateFrameworkRequest& request) const;

        /**
         * An Async wrapper for CreateFramework that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFrameworkAsync(const Model::CreateFrameworkRequest& request, const CreateFrameworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a report plan. A report plan is a document that contains information
         * about the contents of the report and where Backup will deliver it.</p> <p>If you
         * call <code>CreateReportPlan</code> with a plan that already exists, you receive
         * an <code>AlreadyExistsException</code> exception.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/CreateReportPlan">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateReportPlanOutcome CreateReportPlan(const Model::CreateReportPlanRequest& request) const;

        /**
         * A Callable wrapper for CreateReportPlan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateReportPlanOutcomeCallable CreateReportPlanCallable(const Model::CreateReportPlanRequest& request) const;

        /**
         * An Async wrapper for CreateReportPlan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateReportPlanAsync(const Model::CreateReportPlanRequest& request, const CreateReportPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a backup plan. A backup plan can only be deleted after all associated
         * selections of resources have been deleted. Deleting a backup plan deletes the
         * current version of a backup plan. Previous versions, if any, will still
         * exist.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/DeleteBackupPlan">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBackupPlanOutcome DeleteBackupPlan(const Model::DeleteBackupPlanRequest& request) const;

        /**
         * A Callable wrapper for DeleteBackupPlan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBackupPlanOutcomeCallable DeleteBackupPlanCallable(const Model::DeleteBackupPlanRequest& request) const;

        /**
         * An Async wrapper for DeleteBackupPlan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBackupPlanAsync(const Model::DeleteBackupPlanRequest& request, const DeleteBackupPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the resource selection associated with a backup plan that is
         * specified by the <code>SelectionId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/DeleteBackupSelection">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBackupSelectionOutcome DeleteBackupSelection(const Model::DeleteBackupSelectionRequest& request) const;

        /**
         * A Callable wrapper for DeleteBackupSelection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBackupSelectionOutcomeCallable DeleteBackupSelectionCallable(const Model::DeleteBackupSelectionRequest& request) const;

        /**
         * An Async wrapper for DeleteBackupSelection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBackupSelectionAsync(const Model::DeleteBackupSelectionRequest& request, const DeleteBackupSelectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the backup vault identified by its name. A vault can be deleted only
         * if it is empty.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/DeleteBackupVault">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBackupVaultOutcome DeleteBackupVault(const Model::DeleteBackupVaultRequest& request) const;

        /**
         * A Callable wrapper for DeleteBackupVault that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBackupVaultOutcomeCallable DeleteBackupVaultCallable(const Model::DeleteBackupVaultRequest& request) const;

        /**
         * An Async wrapper for DeleteBackupVault that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBackupVaultAsync(const Model::DeleteBackupVaultRequest& request, const DeleteBackupVaultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the policy document that manages permissions on a backup
         * vault.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/DeleteBackupVaultAccessPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBackupVaultAccessPolicyOutcome DeleteBackupVaultAccessPolicy(const Model::DeleteBackupVaultAccessPolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteBackupVaultAccessPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBackupVaultAccessPolicyOutcomeCallable DeleteBackupVaultAccessPolicyCallable(const Model::DeleteBackupVaultAccessPolicyRequest& request) const;

        /**
         * An Async wrapper for DeleteBackupVaultAccessPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBackupVaultAccessPolicyAsync(const Model::DeleteBackupVaultAccessPolicyRequest& request, const DeleteBackupVaultAccessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes Backup Vault Lock from a backup vault specified by a backup vault
         * name.</p> <p>If the Vault Lock configuration is immutable, then you cannot
         * delete Vault Lock using API operations, and you will receive an
         * <code>InvalidRequestException</code> if you attempt to do so. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/vault-lock.html">Vault
         * Lock</a> in the <i>Backup Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/DeleteBackupVaultLockConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBackupVaultLockConfigurationOutcome DeleteBackupVaultLockConfiguration(const Model::DeleteBackupVaultLockConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteBackupVaultLockConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBackupVaultLockConfigurationOutcomeCallable DeleteBackupVaultLockConfigurationCallable(const Model::DeleteBackupVaultLockConfigurationRequest& request) const;

        /**
         * An Async wrapper for DeleteBackupVaultLockConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBackupVaultLockConfigurationAsync(const Model::DeleteBackupVaultLockConfigurationRequest& request, const DeleteBackupVaultLockConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes event notifications for the specified backup vault.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/DeleteBackupVaultNotifications">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBackupVaultNotificationsOutcome DeleteBackupVaultNotifications(const Model::DeleteBackupVaultNotificationsRequest& request) const;

        /**
         * A Callable wrapper for DeleteBackupVaultNotifications that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBackupVaultNotificationsOutcomeCallable DeleteBackupVaultNotificationsCallable(const Model::DeleteBackupVaultNotificationsRequest& request) const;

        /**
         * An Async wrapper for DeleteBackupVaultNotifications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBackupVaultNotificationsAsync(const Model::DeleteBackupVaultNotificationsRequest& request, const DeleteBackupVaultNotificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the framework specified by a framework name.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/DeleteFramework">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFrameworkOutcome DeleteFramework(const Model::DeleteFrameworkRequest& request) const;

        /**
         * A Callable wrapper for DeleteFramework that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFrameworkOutcomeCallable DeleteFrameworkCallable(const Model::DeleteFrameworkRequest& request) const;

        /**
         * An Async wrapper for DeleteFramework that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFrameworkAsync(const Model::DeleteFrameworkRequest& request, const DeleteFrameworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the recovery point specified by a recovery point ID.</p> <p>If the
         * recovery point ID belongs to a continuous backup, calling this endpoint deletes
         * the existing continuous backup and stops future continuous backup.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/DeleteRecoveryPoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRecoveryPointOutcome DeleteRecoveryPoint(const Model::DeleteRecoveryPointRequest& request) const;

        /**
         * A Callable wrapper for DeleteRecoveryPoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRecoveryPointOutcomeCallable DeleteRecoveryPointCallable(const Model::DeleteRecoveryPointRequest& request) const;

        /**
         * An Async wrapper for DeleteRecoveryPoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRecoveryPointAsync(const Model::DeleteRecoveryPointRequest& request, const DeleteRecoveryPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the report plan specified by a report plan name.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/DeleteReportPlan">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteReportPlanOutcome DeleteReportPlan(const Model::DeleteReportPlanRequest& request) const;

        /**
         * A Callable wrapper for DeleteReportPlan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteReportPlanOutcomeCallable DeleteReportPlanCallable(const Model::DeleteReportPlanRequest& request) const;

        /**
         * An Async wrapper for DeleteReportPlan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteReportPlanAsync(const Model::DeleteReportPlanRequest& request, const DeleteReportPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns backup job details for the specified
         * <code>BackupJobId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/DescribeBackupJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBackupJobOutcome DescribeBackupJob(const Model::DescribeBackupJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeBackupJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeBackupJobOutcomeCallable DescribeBackupJobCallable(const Model::DescribeBackupJobRequest& request) const;

        /**
         * An Async wrapper for DescribeBackupJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeBackupJobAsync(const Model::DescribeBackupJobRequest& request, const DescribeBackupJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns metadata about a backup vault specified by its name.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/DescribeBackupVault">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBackupVaultOutcome DescribeBackupVault(const Model::DescribeBackupVaultRequest& request) const;

        /**
         * A Callable wrapper for DescribeBackupVault that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeBackupVaultOutcomeCallable DescribeBackupVaultCallable(const Model::DescribeBackupVaultRequest& request) const;

        /**
         * An Async wrapper for DescribeBackupVault that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeBackupVaultAsync(const Model::DescribeBackupVaultRequest& request, const DescribeBackupVaultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns metadata associated with creating a copy of a resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/DescribeCopyJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCopyJobOutcome DescribeCopyJob(const Model::DescribeCopyJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeCopyJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCopyJobOutcomeCallable DescribeCopyJobCallable(const Model::DescribeCopyJobRequest& request) const;

        /**
         * An Async wrapper for DescribeCopyJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCopyJobAsync(const Model::DescribeCopyJobRequest& request, const DescribeCopyJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the framework details for the specified
         * <code>FrameworkName</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/DescribeFramework">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFrameworkOutcome DescribeFramework(const Model::DescribeFrameworkRequest& request) const;

        /**
         * A Callable wrapper for DescribeFramework that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFrameworkOutcomeCallable DescribeFrameworkCallable(const Model::DescribeFrameworkRequest& request) const;

        /**
         * An Async wrapper for DescribeFramework that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFrameworkAsync(const Model::DescribeFrameworkRequest& request, const DescribeFrameworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes whether the Amazon Web Services account is opted in to
         * cross-account backup. Returns an error if the account is not a member of an
         * Organizations organization. Example: <code>describe-global-settings --region
         * us-west-2</code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/DescribeGlobalSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeGlobalSettingsOutcome DescribeGlobalSettings(const Model::DescribeGlobalSettingsRequest& request) const;

        /**
         * A Callable wrapper for DescribeGlobalSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeGlobalSettingsOutcomeCallable DescribeGlobalSettingsCallable(const Model::DescribeGlobalSettingsRequest& request) const;

        /**
         * An Async wrapper for DescribeGlobalSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeGlobalSettingsAsync(const Model::DescribeGlobalSettingsRequest& request, const DescribeGlobalSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a saved resource, including the last time it was
         * backed up, its Amazon Resource Name (ARN), and the Amazon Web Services service
         * type of the saved resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/DescribeProtectedResource">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProtectedResourceOutcome DescribeProtectedResource(const Model::DescribeProtectedResourceRequest& request) const;

        /**
         * A Callable wrapper for DescribeProtectedResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeProtectedResourceOutcomeCallable DescribeProtectedResourceCallable(const Model::DescribeProtectedResourceRequest& request) const;

        /**
         * An Async wrapper for DescribeProtectedResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeProtectedResourceAsync(const Model::DescribeProtectedResourceRequest& request, const DescribeProtectedResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns metadata associated with a recovery point, including ID, status,
         * encryption, and lifecycle.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/DescribeRecoveryPoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRecoveryPointOutcome DescribeRecoveryPoint(const Model::DescribeRecoveryPointRequest& request) const;

        /**
         * A Callable wrapper for DescribeRecoveryPoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRecoveryPointOutcomeCallable DescribeRecoveryPointCallable(const Model::DescribeRecoveryPointRequest& request) const;

        /**
         * An Async wrapper for DescribeRecoveryPoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRecoveryPointAsync(const Model::DescribeRecoveryPointRequest& request, const DescribeRecoveryPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the current service opt-in settings for the Region. If service opt-in
         * is enabled for a service, Backup tries to protect that service's resources in
         * this Region, when the resource is included in an on-demand backup or scheduled
         * backup plan. Otherwise, Backup does not try to protect that service's resources
         * in this Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/DescribeRegionSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRegionSettingsOutcome DescribeRegionSettings(const Model::DescribeRegionSettingsRequest& request) const;

        /**
         * A Callable wrapper for DescribeRegionSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRegionSettingsOutcomeCallable DescribeRegionSettingsCallable(const Model::DescribeRegionSettingsRequest& request) const;

        /**
         * An Async wrapper for DescribeRegionSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRegionSettingsAsync(const Model::DescribeRegionSettingsRequest& request, const DescribeRegionSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the details associated with creating a report as specified by its
         * <code>ReportJobId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/DescribeReportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReportJobOutcome DescribeReportJob(const Model::DescribeReportJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeReportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeReportJobOutcomeCallable DescribeReportJobCallable(const Model::DescribeReportJobRequest& request) const;

        /**
         * An Async wrapper for DescribeReportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeReportJobAsync(const Model::DescribeReportJobRequest& request, const DescribeReportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of all report plans for an Amazon Web Services account and
         * Amazon Web Services Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/DescribeReportPlan">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReportPlanOutcome DescribeReportPlan(const Model::DescribeReportPlanRequest& request) const;

        /**
         * A Callable wrapper for DescribeReportPlan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeReportPlanOutcomeCallable DescribeReportPlanCallable(const Model::DescribeReportPlanRequest& request) const;

        /**
         * An Async wrapper for DescribeReportPlan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeReportPlanAsync(const Model::DescribeReportPlanRequest& request, const DescribeReportPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns metadata associated with a restore job that is specified by a job
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/DescribeRestoreJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRestoreJobOutcome DescribeRestoreJob(const Model::DescribeRestoreJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeRestoreJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRestoreJobOutcomeCallable DescribeRestoreJobCallable(const Model::DescribeRestoreJobRequest& request) const;

        /**
         * An Async wrapper for DescribeRestoreJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRestoreJobAsync(const Model::DescribeRestoreJobRequest& request, const DescribeRestoreJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified continuous backup recovery point from Backup and
         * releases control of that continuous backup to the source service, such as Amazon
         * RDS. The source service will continue to create and retain continuous backups
         * using the lifecycle that you specified in your original backup plan.</p> <p>Does
         * not support snapshot backup recovery points.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/DisassociateRecoveryPoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateRecoveryPointOutcome DisassociateRecoveryPoint(const Model::DisassociateRecoveryPointRequest& request) const;

        /**
         * A Callable wrapper for DisassociateRecoveryPoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateRecoveryPointOutcomeCallable DisassociateRecoveryPointCallable(const Model::DisassociateRecoveryPointRequest& request) const;

        /**
         * An Async wrapper for DisassociateRecoveryPoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateRecoveryPointAsync(const Model::DisassociateRecoveryPointRequest& request, const DisassociateRecoveryPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the backup plan that is specified by the plan ID as a backup
         * template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ExportBackupPlanTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::ExportBackupPlanTemplateOutcome ExportBackupPlanTemplate(const Model::ExportBackupPlanTemplateRequest& request) const;

        /**
         * A Callable wrapper for ExportBackupPlanTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ExportBackupPlanTemplateOutcomeCallable ExportBackupPlanTemplateCallable(const Model::ExportBackupPlanTemplateRequest& request) const;

        /**
         * An Async wrapper for ExportBackupPlanTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ExportBackupPlanTemplateAsync(const Model::ExportBackupPlanTemplateRequest& request, const ExportBackupPlanTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns <code>BackupPlan</code> details for the specified
         * <code>BackupPlanId</code>. The details are the body of a backup plan in JSON
         * format, in addition to plan metadata.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/GetBackupPlan">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBackupPlanOutcome GetBackupPlan(const Model::GetBackupPlanRequest& request) const;

        /**
         * A Callable wrapper for GetBackupPlan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBackupPlanOutcomeCallable GetBackupPlanCallable(const Model::GetBackupPlanRequest& request) const;

        /**
         * An Async wrapper for GetBackupPlan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBackupPlanAsync(const Model::GetBackupPlanRequest& request, const GetBackupPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a valid JSON document specifying a backup plan or an
         * error.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/GetBackupPlanFromJSON">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBackupPlanFromJSONOutcome GetBackupPlanFromJSON(const Model::GetBackupPlanFromJSONRequest& request) const;

        /**
         * A Callable wrapper for GetBackupPlanFromJSON that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBackupPlanFromJSONOutcomeCallable GetBackupPlanFromJSONCallable(const Model::GetBackupPlanFromJSONRequest& request) const;

        /**
         * An Async wrapper for GetBackupPlanFromJSON that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBackupPlanFromJSONAsync(const Model::GetBackupPlanFromJSONRequest& request, const GetBackupPlanFromJSONResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the template specified by its <code>templateId</code> as a backup
         * plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/GetBackupPlanFromTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBackupPlanFromTemplateOutcome GetBackupPlanFromTemplate(const Model::GetBackupPlanFromTemplateRequest& request) const;

        /**
         * A Callable wrapper for GetBackupPlanFromTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBackupPlanFromTemplateOutcomeCallable GetBackupPlanFromTemplateCallable(const Model::GetBackupPlanFromTemplateRequest& request) const;

        /**
         * An Async wrapper for GetBackupPlanFromTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBackupPlanFromTemplateAsync(const Model::GetBackupPlanFromTemplateRequest& request, const GetBackupPlanFromTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns selection metadata and a document in JSON format that specifies a
         * list of resources that are associated with a backup plan.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/GetBackupSelection">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBackupSelectionOutcome GetBackupSelection(const Model::GetBackupSelectionRequest& request) const;

        /**
         * A Callable wrapper for GetBackupSelection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBackupSelectionOutcomeCallable GetBackupSelectionCallable(const Model::GetBackupSelectionRequest& request) const;

        /**
         * An Async wrapper for GetBackupSelection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBackupSelectionAsync(const Model::GetBackupSelectionRequest& request, const GetBackupSelectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the access policy document that is associated with the named backup
         * vault.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/GetBackupVaultAccessPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBackupVaultAccessPolicyOutcome GetBackupVaultAccessPolicy(const Model::GetBackupVaultAccessPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetBackupVaultAccessPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBackupVaultAccessPolicyOutcomeCallable GetBackupVaultAccessPolicyCallable(const Model::GetBackupVaultAccessPolicyRequest& request) const;

        /**
         * An Async wrapper for GetBackupVaultAccessPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBackupVaultAccessPolicyAsync(const Model::GetBackupVaultAccessPolicyRequest& request, const GetBackupVaultAccessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns event notifications for the specified backup vault.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/GetBackupVaultNotifications">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBackupVaultNotificationsOutcome GetBackupVaultNotifications(const Model::GetBackupVaultNotificationsRequest& request) const;

        /**
         * A Callable wrapper for GetBackupVaultNotifications that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBackupVaultNotificationsOutcomeCallable GetBackupVaultNotificationsCallable(const Model::GetBackupVaultNotificationsRequest& request) const;

        /**
         * An Async wrapper for GetBackupVaultNotifications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBackupVaultNotificationsAsync(const Model::GetBackupVaultNotificationsRequest& request, const GetBackupVaultNotificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a set of metadata key-value pairs that were used to create the
         * backup.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/GetRecoveryPointRestoreMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRecoveryPointRestoreMetadataOutcome GetRecoveryPointRestoreMetadata(const Model::GetRecoveryPointRestoreMetadataRequest& request) const;

        /**
         * A Callable wrapper for GetRecoveryPointRestoreMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRecoveryPointRestoreMetadataOutcomeCallable GetRecoveryPointRestoreMetadataCallable(const Model::GetRecoveryPointRestoreMetadataRequest& request) const;

        /**
         * An Async wrapper for GetRecoveryPointRestoreMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRecoveryPointRestoreMetadataAsync(const Model::GetRecoveryPointRestoreMetadataRequest& request, const GetRecoveryPointRestoreMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the Amazon Web Services resource types supported by
         * Backup.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/GetSupportedResourceTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSupportedResourceTypesOutcome GetSupportedResourceTypes() const;

        /**
         * A Callable wrapper for GetSupportedResourceTypes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSupportedResourceTypesOutcomeCallable GetSupportedResourceTypesCallable() const;

        /**
         * An Async wrapper for GetSupportedResourceTypes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSupportedResourceTypesAsync(const GetSupportedResourceTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;
        /**
         * <p>Returns a list of existing backup jobs for an authenticated account for the
         * last 30 days. For a longer period of time, consider using these <a
         * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/monitoring.html">monitoring
         * tools</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ListBackupJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBackupJobsOutcome ListBackupJobs(const Model::ListBackupJobsRequest& request) const;

        /**
         * A Callable wrapper for ListBackupJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBackupJobsOutcomeCallable ListBackupJobsCallable(const Model::ListBackupJobsRequest& request) const;

        /**
         * An Async wrapper for ListBackupJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBackupJobsAsync(const Model::ListBackupJobsRequest& request, const ListBackupJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns metadata of your saved backup plan templates, including the template
         * ID, name, and the creation and deletion dates.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ListBackupPlanTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBackupPlanTemplatesOutcome ListBackupPlanTemplates(const Model::ListBackupPlanTemplatesRequest& request) const;

        /**
         * A Callable wrapper for ListBackupPlanTemplates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBackupPlanTemplatesOutcomeCallable ListBackupPlanTemplatesCallable(const Model::ListBackupPlanTemplatesRequest& request) const;

        /**
         * An Async wrapper for ListBackupPlanTemplates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBackupPlanTemplatesAsync(const Model::ListBackupPlanTemplatesRequest& request, const ListBackupPlanTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns version metadata of your backup plans, including Amazon Resource
         * Names (ARNs), backup plan IDs, creation and deletion dates, plan names, and
         * version IDs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ListBackupPlanVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBackupPlanVersionsOutcome ListBackupPlanVersions(const Model::ListBackupPlanVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListBackupPlanVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBackupPlanVersionsOutcomeCallable ListBackupPlanVersionsCallable(const Model::ListBackupPlanVersionsRequest& request) const;

        /**
         * An Async wrapper for ListBackupPlanVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBackupPlanVersionsAsync(const Model::ListBackupPlanVersionsRequest& request, const ListBackupPlanVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of all active backup plans for an authenticated account. The
         * list contains information such as Amazon Resource Names (ARNs), plan IDs,
         * creation and deletion dates, version IDs, plan names, and creator request
         * IDs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ListBackupPlans">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBackupPlansOutcome ListBackupPlans(const Model::ListBackupPlansRequest& request) const;

        /**
         * A Callable wrapper for ListBackupPlans that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBackupPlansOutcomeCallable ListBackupPlansCallable(const Model::ListBackupPlansRequest& request) const;

        /**
         * An Async wrapper for ListBackupPlans that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBackupPlansAsync(const Model::ListBackupPlansRequest& request, const ListBackupPlansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an array containing metadata of the resources associated with the
         * target backup plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ListBackupSelections">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBackupSelectionsOutcome ListBackupSelections(const Model::ListBackupSelectionsRequest& request) const;

        /**
         * A Callable wrapper for ListBackupSelections that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBackupSelectionsOutcomeCallable ListBackupSelectionsCallable(const Model::ListBackupSelectionsRequest& request) const;

        /**
         * An Async wrapper for ListBackupSelections that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBackupSelectionsAsync(const Model::ListBackupSelectionsRequest& request, const ListBackupSelectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of recovery point storage containers along with information
         * about them.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ListBackupVaults">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBackupVaultsOutcome ListBackupVaults(const Model::ListBackupVaultsRequest& request) const;

        /**
         * A Callable wrapper for ListBackupVaults that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBackupVaultsOutcomeCallable ListBackupVaultsCallable(const Model::ListBackupVaultsRequest& request) const;

        /**
         * An Async wrapper for ListBackupVaults that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBackupVaultsAsync(const Model::ListBackupVaultsRequest& request, const ListBackupVaultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns metadata about your copy jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ListCopyJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCopyJobsOutcome ListCopyJobs(const Model::ListCopyJobsRequest& request) const;

        /**
         * A Callable wrapper for ListCopyJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCopyJobsOutcomeCallable ListCopyJobsCallable(const Model::ListCopyJobsRequest& request) const;

        /**
         * An Async wrapper for ListCopyJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCopyJobsAsync(const Model::ListCopyJobsRequest& request, const ListCopyJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of all frameworks for an Amazon Web Services account and
         * Amazon Web Services Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ListFrameworks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFrameworksOutcome ListFrameworks(const Model::ListFrameworksRequest& request) const;

        /**
         * A Callable wrapper for ListFrameworks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFrameworksOutcomeCallable ListFrameworksCallable(const Model::ListFrameworksRequest& request) const;

        /**
         * An Async wrapper for ListFrameworks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFrameworksAsync(const Model::ListFrameworksRequest& request, const ListFrameworksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an array of resources successfully backed up by Backup, including the
         * time the resource was saved, an Amazon Resource Name (ARN) of the resource, and
         * a resource type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ListProtectedResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProtectedResourcesOutcome ListProtectedResources(const Model::ListProtectedResourcesRequest& request) const;

        /**
         * A Callable wrapper for ListProtectedResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListProtectedResourcesOutcomeCallable ListProtectedResourcesCallable(const Model::ListProtectedResourcesRequest& request) const;

        /**
         * An Async wrapper for ListProtectedResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListProtectedResourcesAsync(const Model::ListProtectedResourcesRequest& request, const ListProtectedResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns detailed information about the recovery points stored in a backup
         * vault.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ListRecoveryPointsByBackupVault">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRecoveryPointsByBackupVaultOutcome ListRecoveryPointsByBackupVault(const Model::ListRecoveryPointsByBackupVaultRequest& request) const;

        /**
         * A Callable wrapper for ListRecoveryPointsByBackupVault that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRecoveryPointsByBackupVaultOutcomeCallable ListRecoveryPointsByBackupVaultCallable(const Model::ListRecoveryPointsByBackupVaultRequest& request) const;

        /**
         * An Async wrapper for ListRecoveryPointsByBackupVault that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRecoveryPointsByBackupVaultAsync(const Model::ListRecoveryPointsByBackupVaultRequest& request, const ListRecoveryPointsByBackupVaultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns detailed information about all the recovery points of the type
         * specified by a resource Amazon Resource Name (ARN).</p>  <p>For Amazon EFS
         * and Amazon EC2, this action only lists recovery points created by Backup.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ListRecoveryPointsByResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRecoveryPointsByResourceOutcome ListRecoveryPointsByResource(const Model::ListRecoveryPointsByResourceRequest& request) const;

        /**
         * A Callable wrapper for ListRecoveryPointsByResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRecoveryPointsByResourceOutcomeCallable ListRecoveryPointsByResourceCallable(const Model::ListRecoveryPointsByResourceRequest& request) const;

        /**
         * An Async wrapper for ListRecoveryPointsByResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRecoveryPointsByResourceAsync(const Model::ListRecoveryPointsByResourceRequest& request, const ListRecoveryPointsByResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns details about your report jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ListReportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReportJobsOutcome ListReportJobs(const Model::ListReportJobsRequest& request) const;

        /**
         * A Callable wrapper for ListReportJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListReportJobsOutcomeCallable ListReportJobsCallable(const Model::ListReportJobsRequest& request) const;

        /**
         * An Async wrapper for ListReportJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListReportJobsAsync(const Model::ListReportJobsRequest& request, const ListReportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of your report plans. For detailed information about a single
         * report plan, use <code>DescribeReportPlan</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ListReportPlans">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReportPlansOutcome ListReportPlans(const Model::ListReportPlansRequest& request) const;

        /**
         * A Callable wrapper for ListReportPlans that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListReportPlansOutcomeCallable ListReportPlansCallable(const Model::ListReportPlansRequest& request) const;

        /**
         * An Async wrapper for ListReportPlans that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListReportPlansAsync(const Model::ListReportPlansRequest& request, const ListReportPlansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of jobs that Backup initiated to restore a saved resource,
         * including details about the recovery process.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ListRestoreJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRestoreJobsOutcome ListRestoreJobs(const Model::ListRestoreJobsRequest& request) const;

        /**
         * A Callable wrapper for ListRestoreJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRestoreJobsOutcomeCallable ListRestoreJobsCallable(const Model::ListRestoreJobsRequest& request) const;

        /**
         * An Async wrapper for ListRestoreJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRestoreJobsAsync(const Model::ListRestoreJobsRequest& request, const ListRestoreJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of key-value pairs assigned to a target recovery point, backup
         * plan, or backup vault.</p> <p> <code>ListTags</code> only works for resource
         * types that support full Backup management of their backups. Those resource types
         * are listed in the "Full Backup management" section of the <a
         * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/whatisbackup.html#features-by-resource">
         * Feature availability by resource</a> table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ListTags">AWS API
         * Reference</a></p>
         */
        virtual Model::ListTagsOutcome ListTags(const Model::ListTagsRequest& request) const;

        /**
         * A Callable wrapper for ListTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsOutcomeCallable ListTagsCallable(const Model::ListTagsRequest& request) const;

        /**
         * An Async wrapper for ListTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsAsync(const Model::ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets a resource-based policy that is used to manage access permissions on the
         * target backup vault. Requires a backup vault name and an access policy document
         * in JSON format.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/PutBackupVaultAccessPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutBackupVaultAccessPolicyOutcome PutBackupVaultAccessPolicy(const Model::PutBackupVaultAccessPolicyRequest& request) const;

        /**
         * A Callable wrapper for PutBackupVaultAccessPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutBackupVaultAccessPolicyOutcomeCallable PutBackupVaultAccessPolicyCallable(const Model::PutBackupVaultAccessPolicyRequest& request) const;

        /**
         * An Async wrapper for PutBackupVaultAccessPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutBackupVaultAccessPolicyAsync(const Model::PutBackupVaultAccessPolicyRequest& request, const PutBackupVaultAccessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Applies Backup Vault Lock to a backup vault, preventing attempts to delete
         * any recovery point stored in or created in a backup vault. Vault Lock also
         * prevents attempts to update the lifecycle policy that controls the retention
         * period of any recovery point currently stored in a backup vault. If specified,
         * Vault Lock enforces a minimum and maximum retention period for future backup and
         * copy jobs that target a backup vault.</p>  <p>Backup Vault Lock has yet to
         * receive a third-party assessment for SEC 17a-4(f) and CFTC.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/PutBackupVaultLockConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutBackupVaultLockConfigurationOutcome PutBackupVaultLockConfiguration(const Model::PutBackupVaultLockConfigurationRequest& request) const;

        /**
         * A Callable wrapper for PutBackupVaultLockConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutBackupVaultLockConfigurationOutcomeCallable PutBackupVaultLockConfigurationCallable(const Model::PutBackupVaultLockConfigurationRequest& request) const;

        /**
         * An Async wrapper for PutBackupVaultLockConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutBackupVaultLockConfigurationAsync(const Model::PutBackupVaultLockConfigurationRequest& request, const PutBackupVaultLockConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Turns on notifications on a backup vault for the specified topic and
         * events.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/PutBackupVaultNotifications">AWS
         * API Reference</a></p>
         */
        virtual Model::PutBackupVaultNotificationsOutcome PutBackupVaultNotifications(const Model::PutBackupVaultNotificationsRequest& request) const;

        /**
         * A Callable wrapper for PutBackupVaultNotifications that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutBackupVaultNotificationsOutcomeCallable PutBackupVaultNotificationsCallable(const Model::PutBackupVaultNotificationsRequest& request) const;

        /**
         * An Async wrapper for PutBackupVaultNotifications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutBackupVaultNotificationsAsync(const Model::PutBackupVaultNotificationsRequest& request, const PutBackupVaultNotificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts an on-demand backup job for the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/StartBackupJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartBackupJobOutcome StartBackupJob(const Model::StartBackupJobRequest& request) const;

        /**
         * A Callable wrapper for StartBackupJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartBackupJobOutcomeCallable StartBackupJobCallable(const Model::StartBackupJobRequest& request) const;

        /**
         * An Async wrapper for StartBackupJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartBackupJobAsync(const Model::StartBackupJobRequest& request, const StartBackupJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a job to create a one-time copy of the specified resource.</p> <p>Does
         * not support continuous backups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/StartCopyJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartCopyJobOutcome StartCopyJob(const Model::StartCopyJobRequest& request) const;

        /**
         * A Callable wrapper for StartCopyJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartCopyJobOutcomeCallable StartCopyJobCallable(const Model::StartCopyJobRequest& request) const;

        /**
         * An Async wrapper for StartCopyJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartCopyJobAsync(const Model::StartCopyJobRequest& request, const StartCopyJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts an on-demand report job for the specified report plan.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/StartReportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartReportJobOutcome StartReportJob(const Model::StartReportJobRequest& request) const;

        /**
         * A Callable wrapper for StartReportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartReportJobOutcomeCallable StartReportJobCallable(const Model::StartReportJobRequest& request) const;

        /**
         * An Async wrapper for StartReportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartReportJobAsync(const Model::StartReportJobRequest& request, const StartReportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Recovers the saved resource identified by an Amazon Resource Name
         * (ARN).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/StartRestoreJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartRestoreJobOutcome StartRestoreJob(const Model::StartRestoreJobRequest& request) const;

        /**
         * A Callable wrapper for StartRestoreJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartRestoreJobOutcomeCallable StartRestoreJobCallable(const Model::StartRestoreJobRequest& request) const;

        /**
         * An Async wrapper for StartRestoreJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartRestoreJobAsync(const Model::StartRestoreJobRequest& request, const StartRestoreJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attempts to cancel a job to create a one-time backup of a
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/StopBackupJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopBackupJobOutcome StopBackupJob(const Model::StopBackupJobRequest& request) const;

        /**
         * A Callable wrapper for StopBackupJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopBackupJobOutcomeCallable StopBackupJobCallable(const Model::StopBackupJobRequest& request) const;

        /**
         * An Async wrapper for StopBackupJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopBackupJobAsync(const Model::StopBackupJobRequest& request, const StopBackupJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Assigns a set of key-value pairs to a recovery point, backup plan, or backup
         * vault identified by an Amazon Resource Name (ARN).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a set of key-value pairs from a recovery point, backup plan, or
         * backup vault identified by an Amazon Resource Name (ARN)</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing backup plan identified by its <code>backupPlanId</code>
         * with the input document in JSON format. The new version is uniquely identified
         * by a <code>VersionId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/UpdateBackupPlan">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBackupPlanOutcome UpdateBackupPlan(const Model::UpdateBackupPlanRequest& request) const;

        /**
         * A Callable wrapper for UpdateBackupPlan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateBackupPlanOutcomeCallable UpdateBackupPlanCallable(const Model::UpdateBackupPlanRequest& request) const;

        /**
         * An Async wrapper for UpdateBackupPlan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateBackupPlanAsync(const Model::UpdateBackupPlanRequest& request, const UpdateBackupPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing framework identified by its <code>FrameworkName</code>
         * with the input document in JSON format.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/UpdateFramework">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFrameworkOutcome UpdateFramework(const Model::UpdateFrameworkRequest& request) const;

        /**
         * A Callable wrapper for UpdateFramework that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFrameworkOutcomeCallable UpdateFrameworkCallable(const Model::UpdateFrameworkRequest& request) const;

        /**
         * An Async wrapper for UpdateFramework that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFrameworkAsync(const Model::UpdateFrameworkRequest& request, const UpdateFrameworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates whether the Amazon Web Services account is opted in to cross-account
         * backup. Returns an error if the account is not an Organizations management
         * account. Use the <code>DescribeGlobalSettings</code> API to determine the
         * current settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/UpdateGlobalSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGlobalSettingsOutcome UpdateGlobalSettings(const Model::UpdateGlobalSettingsRequest& request) const;

        /**
         * A Callable wrapper for UpdateGlobalSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateGlobalSettingsOutcomeCallable UpdateGlobalSettingsCallable(const Model::UpdateGlobalSettingsRequest& request) const;

        /**
         * An Async wrapper for UpdateGlobalSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateGlobalSettingsAsync(const Model::UpdateGlobalSettingsRequest& request, const UpdateGlobalSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the transition lifecycle of a recovery point.</p> <p>The lifecycle
         * defines when a protected resource is transitioned to cold storage and when it
         * expires. Backup transitions and expires backups automatically according to the
         * lifecycle that you define.</p> <p>Backups transitioned to cold storage must be
         * stored in cold storage for a minimum of 90 days. Therefore, the “retention”
         * setting must be 90 days greater than the “transition to cold after days”
         * setting. The “transition to cold after days” setting cannot be changed after a
         * backup has been transitioned to cold.</p> <p>Resource types that are able to be
         * transitioned to cold storage are listed in the "Lifecycle to cold storage"
         * section of the <a
         * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/whatisbackup.html#features-by-resource">
         * Feature availability by resource</a> table. Backup ignores this expression for
         * other resource types.</p> <p>This operation does not support continuous
         * backups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/UpdateRecoveryPointLifecycle">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRecoveryPointLifecycleOutcome UpdateRecoveryPointLifecycle(const Model::UpdateRecoveryPointLifecycleRequest& request) const;

        /**
         * A Callable wrapper for UpdateRecoveryPointLifecycle that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRecoveryPointLifecycleOutcomeCallable UpdateRecoveryPointLifecycleCallable(const Model::UpdateRecoveryPointLifecycleRequest& request) const;

        /**
         * An Async wrapper for UpdateRecoveryPointLifecycle that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRecoveryPointLifecycleAsync(const Model::UpdateRecoveryPointLifecycleRequest& request, const UpdateRecoveryPointLifecycleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the current service opt-in settings for the Region. If service-opt-in
         * is enabled for a service, Backup tries to protect that service's resources in
         * this Region, when the resource is included in an on-demand backup or scheduled
         * backup plan. Otherwise, Backup does not try to protect that service's resources
         * in this Region. Use the <code>DescribeRegionSettings</code> API to determine the
         * resource types that are supported.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/UpdateRegionSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRegionSettingsOutcome UpdateRegionSettings(const Model::UpdateRegionSettingsRequest& request) const;

        /**
         * A Callable wrapper for UpdateRegionSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRegionSettingsOutcomeCallable UpdateRegionSettingsCallable(const Model::UpdateRegionSettingsRequest& request) const;

        /**
         * An Async wrapper for UpdateRegionSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRegionSettingsAsync(const Model::UpdateRegionSettingsRequest& request, const UpdateRegionSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing report plan identified by its <code>ReportPlanName</code>
         * with the input document in JSON format.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/UpdateReportPlan">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateReportPlanOutcome UpdateReportPlan(const Model::UpdateReportPlanRequest& request) const;

        /**
         * A Callable wrapper for UpdateReportPlan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateReportPlanOutcomeCallable UpdateReportPlanCallable(const Model::UpdateReportPlanRequest& request) const;

        /**
         * An Async wrapper for UpdateReportPlan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateReportPlanAsync(const Model::UpdateReportPlanRequest& request, const UpdateReportPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateBackupPlanAsyncHelper(const Model::CreateBackupPlanRequest& request, const CreateBackupPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateBackupSelectionAsyncHelper(const Model::CreateBackupSelectionRequest& request, const CreateBackupSelectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateBackupVaultAsyncHelper(const Model::CreateBackupVaultRequest& request, const CreateBackupVaultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateFrameworkAsyncHelper(const Model::CreateFrameworkRequest& request, const CreateFrameworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateReportPlanAsyncHelper(const Model::CreateReportPlanRequest& request, const CreateReportPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBackupPlanAsyncHelper(const Model::DeleteBackupPlanRequest& request, const DeleteBackupPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBackupSelectionAsyncHelper(const Model::DeleteBackupSelectionRequest& request, const DeleteBackupSelectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBackupVaultAsyncHelper(const Model::DeleteBackupVaultRequest& request, const DeleteBackupVaultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBackupVaultAccessPolicyAsyncHelper(const Model::DeleteBackupVaultAccessPolicyRequest& request, const DeleteBackupVaultAccessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBackupVaultLockConfigurationAsyncHelper(const Model::DeleteBackupVaultLockConfigurationRequest& request, const DeleteBackupVaultLockConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBackupVaultNotificationsAsyncHelper(const Model::DeleteBackupVaultNotificationsRequest& request, const DeleteBackupVaultNotificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteFrameworkAsyncHelper(const Model::DeleteFrameworkRequest& request, const DeleteFrameworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRecoveryPointAsyncHelper(const Model::DeleteRecoveryPointRequest& request, const DeleteRecoveryPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteReportPlanAsyncHelper(const Model::DeleteReportPlanRequest& request, const DeleteReportPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeBackupJobAsyncHelper(const Model::DescribeBackupJobRequest& request, const DescribeBackupJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeBackupVaultAsyncHelper(const Model::DescribeBackupVaultRequest& request, const DescribeBackupVaultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeCopyJobAsyncHelper(const Model::DescribeCopyJobRequest& request, const DescribeCopyJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeFrameworkAsyncHelper(const Model::DescribeFrameworkRequest& request, const DescribeFrameworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeGlobalSettingsAsyncHelper(const Model::DescribeGlobalSettingsRequest& request, const DescribeGlobalSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeProtectedResourceAsyncHelper(const Model::DescribeProtectedResourceRequest& request, const DescribeProtectedResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeRecoveryPointAsyncHelper(const Model::DescribeRecoveryPointRequest& request, const DescribeRecoveryPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeRegionSettingsAsyncHelper(const Model::DescribeRegionSettingsRequest& request, const DescribeRegionSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeReportJobAsyncHelper(const Model::DescribeReportJobRequest& request, const DescribeReportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeReportPlanAsyncHelper(const Model::DescribeReportPlanRequest& request, const DescribeReportPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeRestoreJobAsyncHelper(const Model::DescribeRestoreJobRequest& request, const DescribeRestoreJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateRecoveryPointAsyncHelper(const Model::DisassociateRecoveryPointRequest& request, const DisassociateRecoveryPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ExportBackupPlanTemplateAsyncHelper(const Model::ExportBackupPlanTemplateRequest& request, const ExportBackupPlanTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBackupPlanAsyncHelper(const Model::GetBackupPlanRequest& request, const GetBackupPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBackupPlanFromJSONAsyncHelper(const Model::GetBackupPlanFromJSONRequest& request, const GetBackupPlanFromJSONResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBackupPlanFromTemplateAsyncHelper(const Model::GetBackupPlanFromTemplateRequest& request, const GetBackupPlanFromTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBackupSelectionAsyncHelper(const Model::GetBackupSelectionRequest& request, const GetBackupSelectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBackupVaultAccessPolicyAsyncHelper(const Model::GetBackupVaultAccessPolicyRequest& request, const GetBackupVaultAccessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBackupVaultNotificationsAsyncHelper(const Model::GetBackupVaultNotificationsRequest& request, const GetBackupVaultNotificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRecoveryPointRestoreMetadataAsyncHelper(const Model::GetRecoveryPointRestoreMetadataRequest& request, const GetRecoveryPointRestoreMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSupportedResourceTypesAsyncHelper(const GetSupportedResourceTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListBackupJobsAsyncHelper(const Model::ListBackupJobsRequest& request, const ListBackupJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListBackupPlanTemplatesAsyncHelper(const Model::ListBackupPlanTemplatesRequest& request, const ListBackupPlanTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListBackupPlanVersionsAsyncHelper(const Model::ListBackupPlanVersionsRequest& request, const ListBackupPlanVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListBackupPlansAsyncHelper(const Model::ListBackupPlansRequest& request, const ListBackupPlansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListBackupSelectionsAsyncHelper(const Model::ListBackupSelectionsRequest& request, const ListBackupSelectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListBackupVaultsAsyncHelper(const Model::ListBackupVaultsRequest& request, const ListBackupVaultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListCopyJobsAsyncHelper(const Model::ListCopyJobsRequest& request, const ListCopyJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListFrameworksAsyncHelper(const Model::ListFrameworksRequest& request, const ListFrameworksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListProtectedResourcesAsyncHelper(const Model::ListProtectedResourcesRequest& request, const ListProtectedResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRecoveryPointsByBackupVaultAsyncHelper(const Model::ListRecoveryPointsByBackupVaultRequest& request, const ListRecoveryPointsByBackupVaultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRecoveryPointsByResourceAsyncHelper(const Model::ListRecoveryPointsByResourceRequest& request, const ListRecoveryPointsByResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListReportJobsAsyncHelper(const Model::ListReportJobsRequest& request, const ListReportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListReportPlansAsyncHelper(const Model::ListReportPlansRequest& request, const ListReportPlansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRestoreJobsAsyncHelper(const Model::ListRestoreJobsRequest& request, const ListRestoreJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsAsyncHelper(const Model::ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutBackupVaultAccessPolicyAsyncHelper(const Model::PutBackupVaultAccessPolicyRequest& request, const PutBackupVaultAccessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutBackupVaultLockConfigurationAsyncHelper(const Model::PutBackupVaultLockConfigurationRequest& request, const PutBackupVaultLockConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutBackupVaultNotificationsAsyncHelper(const Model::PutBackupVaultNotificationsRequest& request, const PutBackupVaultNotificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartBackupJobAsyncHelper(const Model::StartBackupJobRequest& request, const StartBackupJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartCopyJobAsyncHelper(const Model::StartCopyJobRequest& request, const StartCopyJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartReportJobAsyncHelper(const Model::StartReportJobRequest& request, const StartReportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartRestoreJobAsyncHelper(const Model::StartRestoreJobRequest& request, const StartRestoreJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopBackupJobAsyncHelper(const Model::StopBackupJobRequest& request, const StopBackupJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateBackupPlanAsyncHelper(const Model::UpdateBackupPlanRequest& request, const UpdateBackupPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateFrameworkAsyncHelper(const Model::UpdateFrameworkRequest& request, const UpdateFrameworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateGlobalSettingsAsyncHelper(const Model::UpdateGlobalSettingsRequest& request, const UpdateGlobalSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateRecoveryPointLifecycleAsyncHelper(const Model::UpdateRecoveryPointLifecycleRequest& request, const UpdateRecoveryPointLifecycleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateRegionSettingsAsyncHelper(const Model::UpdateRegionSettingsRequest& request, const UpdateRegionSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateReportPlanAsyncHelper(const Model::UpdateReportPlanRequest& request, const UpdateReportPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace Backup
} // namespace Aws
