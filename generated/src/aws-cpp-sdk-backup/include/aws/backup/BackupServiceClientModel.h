/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/backup/BackupErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/backup/BackupEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in BackupClient header */
#include <aws/backup/model/CancelLegalHoldResult.h>
#include <aws/backup/model/CreateBackupPlanResult.h>
#include <aws/backup/model/CreateBackupSelectionResult.h>
#include <aws/backup/model/CreateBackupVaultResult.h>
#include <aws/backup/model/CreateFrameworkResult.h>
#include <aws/backup/model/CreateLegalHoldResult.h>
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
#include <aws/backup/model/GetLegalHoldResult.h>
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
#include <aws/backup/model/ListLegalHoldsResult.h>
#include <aws/backup/model/ListProtectedResourcesResult.h>
#include <aws/backup/model/ListRecoveryPointsByBackupVaultResult.h>
#include <aws/backup/model/ListRecoveryPointsByLegalHoldResult.h>
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
/* End of service model headers required in BackupClient header */

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
    using BackupClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using BackupEndpointProviderBase = Aws::Backup::Endpoint::BackupEndpointProviderBase;
    using BackupEndpointProvider = Aws::Backup::Endpoint::BackupEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in BackupClient header */
      class CancelLegalHoldRequest;
      class CreateBackupPlanRequest;
      class CreateBackupSelectionRequest;
      class CreateBackupVaultRequest;
      class CreateFrameworkRequest;
      class CreateLegalHoldRequest;
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
      class DisassociateRecoveryPointFromParentRequest;
      class ExportBackupPlanTemplateRequest;
      class GetBackupPlanRequest;
      class GetBackupPlanFromJSONRequest;
      class GetBackupPlanFromTemplateRequest;
      class GetBackupSelectionRequest;
      class GetBackupVaultAccessPolicyRequest;
      class GetBackupVaultNotificationsRequest;
      class GetLegalHoldRequest;
      class GetRecoveryPointRestoreMetadataRequest;
      class ListBackupJobsRequest;
      class ListBackupPlanTemplatesRequest;
      class ListBackupPlanVersionsRequest;
      class ListBackupPlansRequest;
      class ListBackupSelectionsRequest;
      class ListBackupVaultsRequest;
      class ListCopyJobsRequest;
      class ListFrameworksRequest;
      class ListLegalHoldsRequest;
      class ListProtectedResourcesRequest;
      class ListRecoveryPointsByBackupVaultRequest;
      class ListRecoveryPointsByLegalHoldRequest;
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
      /* End of service model forward declarations required in BackupClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CancelLegalHoldResult, BackupError> CancelLegalHoldOutcome;
      typedef Aws::Utils::Outcome<CreateBackupPlanResult, BackupError> CreateBackupPlanOutcome;
      typedef Aws::Utils::Outcome<CreateBackupSelectionResult, BackupError> CreateBackupSelectionOutcome;
      typedef Aws::Utils::Outcome<CreateBackupVaultResult, BackupError> CreateBackupVaultOutcome;
      typedef Aws::Utils::Outcome<CreateFrameworkResult, BackupError> CreateFrameworkOutcome;
      typedef Aws::Utils::Outcome<CreateLegalHoldResult, BackupError> CreateLegalHoldOutcome;
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
      typedef Aws::Utils::Outcome<Aws::NoResult, BackupError> DisassociateRecoveryPointFromParentOutcome;
      typedef Aws::Utils::Outcome<ExportBackupPlanTemplateResult, BackupError> ExportBackupPlanTemplateOutcome;
      typedef Aws::Utils::Outcome<GetBackupPlanResult, BackupError> GetBackupPlanOutcome;
      typedef Aws::Utils::Outcome<GetBackupPlanFromJSONResult, BackupError> GetBackupPlanFromJSONOutcome;
      typedef Aws::Utils::Outcome<GetBackupPlanFromTemplateResult, BackupError> GetBackupPlanFromTemplateOutcome;
      typedef Aws::Utils::Outcome<GetBackupSelectionResult, BackupError> GetBackupSelectionOutcome;
      typedef Aws::Utils::Outcome<GetBackupVaultAccessPolicyResult, BackupError> GetBackupVaultAccessPolicyOutcome;
      typedef Aws::Utils::Outcome<GetBackupVaultNotificationsResult, BackupError> GetBackupVaultNotificationsOutcome;
      typedef Aws::Utils::Outcome<GetLegalHoldResult, BackupError> GetLegalHoldOutcome;
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
      typedef Aws::Utils::Outcome<ListLegalHoldsResult, BackupError> ListLegalHoldsOutcome;
      typedef Aws::Utils::Outcome<ListProtectedResourcesResult, BackupError> ListProtectedResourcesOutcome;
      typedef Aws::Utils::Outcome<ListRecoveryPointsByBackupVaultResult, BackupError> ListRecoveryPointsByBackupVaultOutcome;
      typedef Aws::Utils::Outcome<ListRecoveryPointsByLegalHoldResult, BackupError> ListRecoveryPointsByLegalHoldOutcome;
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
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CancelLegalHoldOutcome> CancelLegalHoldOutcomeCallable;
      typedef std::future<CreateBackupPlanOutcome> CreateBackupPlanOutcomeCallable;
      typedef std::future<CreateBackupSelectionOutcome> CreateBackupSelectionOutcomeCallable;
      typedef std::future<CreateBackupVaultOutcome> CreateBackupVaultOutcomeCallable;
      typedef std::future<CreateFrameworkOutcome> CreateFrameworkOutcomeCallable;
      typedef std::future<CreateLegalHoldOutcome> CreateLegalHoldOutcomeCallable;
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
      typedef std::future<DisassociateRecoveryPointFromParentOutcome> DisassociateRecoveryPointFromParentOutcomeCallable;
      typedef std::future<ExportBackupPlanTemplateOutcome> ExportBackupPlanTemplateOutcomeCallable;
      typedef std::future<GetBackupPlanOutcome> GetBackupPlanOutcomeCallable;
      typedef std::future<GetBackupPlanFromJSONOutcome> GetBackupPlanFromJSONOutcomeCallable;
      typedef std::future<GetBackupPlanFromTemplateOutcome> GetBackupPlanFromTemplateOutcomeCallable;
      typedef std::future<GetBackupSelectionOutcome> GetBackupSelectionOutcomeCallable;
      typedef std::future<GetBackupVaultAccessPolicyOutcome> GetBackupVaultAccessPolicyOutcomeCallable;
      typedef std::future<GetBackupVaultNotificationsOutcome> GetBackupVaultNotificationsOutcomeCallable;
      typedef std::future<GetLegalHoldOutcome> GetLegalHoldOutcomeCallable;
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
      typedef std::future<ListLegalHoldsOutcome> ListLegalHoldsOutcomeCallable;
      typedef std::future<ListProtectedResourcesOutcome> ListProtectedResourcesOutcomeCallable;
      typedef std::future<ListRecoveryPointsByBackupVaultOutcome> ListRecoveryPointsByBackupVaultOutcomeCallable;
      typedef std::future<ListRecoveryPointsByLegalHoldOutcome> ListRecoveryPointsByLegalHoldOutcomeCallable;
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
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class BackupClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const BackupClient*, const Model::CancelLegalHoldRequest&, const Model::CancelLegalHoldOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelLegalHoldResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::CreateBackupPlanRequest&, const Model::CreateBackupPlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBackupPlanResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::CreateBackupSelectionRequest&, const Model::CreateBackupSelectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBackupSelectionResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::CreateBackupVaultRequest&, const Model::CreateBackupVaultOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBackupVaultResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::CreateFrameworkRequest&, const Model::CreateFrameworkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFrameworkResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::CreateLegalHoldRequest&, const Model::CreateLegalHoldOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLegalHoldResponseReceivedHandler;
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
    typedef std::function<void(const BackupClient*, const Model::DisassociateRecoveryPointFromParentRequest&, const Model::DisassociateRecoveryPointFromParentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateRecoveryPointFromParentResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::ExportBackupPlanTemplateRequest&, const Model::ExportBackupPlanTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExportBackupPlanTemplateResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::GetBackupPlanRequest&, const Model::GetBackupPlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBackupPlanResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::GetBackupPlanFromJSONRequest&, const Model::GetBackupPlanFromJSONOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBackupPlanFromJSONResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::GetBackupPlanFromTemplateRequest&, const Model::GetBackupPlanFromTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBackupPlanFromTemplateResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::GetBackupSelectionRequest&, const Model::GetBackupSelectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBackupSelectionResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::GetBackupVaultAccessPolicyRequest&, const Model::GetBackupVaultAccessPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBackupVaultAccessPolicyResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::GetBackupVaultNotificationsRequest&, const Model::GetBackupVaultNotificationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBackupVaultNotificationsResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::GetLegalHoldRequest&, const Model::GetLegalHoldOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLegalHoldResponseReceivedHandler;
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
    typedef std::function<void(const BackupClient*, const Model::ListLegalHoldsRequest&, const Model::ListLegalHoldsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLegalHoldsResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::ListProtectedResourcesRequest&, const Model::ListProtectedResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProtectedResourcesResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::ListRecoveryPointsByBackupVaultRequest&, const Model::ListRecoveryPointsByBackupVaultOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRecoveryPointsByBackupVaultResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::ListRecoveryPointsByLegalHoldRequest&, const Model::ListRecoveryPointsByLegalHoldOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRecoveryPointsByLegalHoldResponseReceivedHandler;
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
    /* End of service model async handlers definitions */
  } // namespace Backup
} // namespace Aws
