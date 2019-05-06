/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
#include <aws/backup/model/DeleteBackupPlanResult.h>
#include <aws/backup/model/DescribeBackupJobResult.h>
#include <aws/backup/model/DescribeBackupVaultResult.h>
#include <aws/backup/model/DescribeProtectedResourceResult.h>
#include <aws/backup/model/DescribeRecoveryPointResult.h>
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
#include <aws/backup/model/ListProtectedResourcesResult.h>
#include <aws/backup/model/ListRecoveryPointsByBackupVaultResult.h>
#include <aws/backup/model/ListRecoveryPointsByResourceResult.h>
#include <aws/backup/model/ListRestoreJobsResult.h>
#include <aws/backup/model/ListTagsResult.h>
#include <aws/backup/model/StartBackupJobResult.h>
#include <aws/backup/model/StartRestoreJobResult.h>
#include <aws/backup/model/UpdateBackupPlanResult.h>
#include <aws/backup/model/UpdateRecoveryPointLifecycleResult.h>
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
        class DeleteBackupPlanRequest;
        class DeleteBackupSelectionRequest;
        class DeleteBackupVaultRequest;
        class DeleteBackupVaultAccessPolicyRequest;
        class DeleteBackupVaultNotificationsRequest;
        class DeleteRecoveryPointRequest;
        class DescribeBackupJobRequest;
        class DescribeBackupVaultRequest;
        class DescribeProtectedResourceRequest;
        class DescribeRecoveryPointRequest;
        class DescribeRestoreJobRequest;
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
        class ListProtectedResourcesRequest;
        class ListRecoveryPointsByBackupVaultRequest;
        class ListRecoveryPointsByResourceRequest;
        class ListRestoreJobsRequest;
        class ListTagsRequest;
        class PutBackupVaultAccessPolicyRequest;
        class PutBackupVaultNotificationsRequest;
        class StartBackupJobRequest;
        class StartRestoreJobRequest;
        class StopBackupJobRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateBackupPlanRequest;
        class UpdateRecoveryPointLifecycleRequest;

        typedef Aws::Utils::Outcome<CreateBackupPlanResult, Aws::Client::AWSError<BackupErrors>> CreateBackupPlanOutcome;
        typedef Aws::Utils::Outcome<CreateBackupSelectionResult, Aws::Client::AWSError<BackupErrors>> CreateBackupSelectionOutcome;
        typedef Aws::Utils::Outcome<CreateBackupVaultResult, Aws::Client::AWSError<BackupErrors>> CreateBackupVaultOutcome;
        typedef Aws::Utils::Outcome<DeleteBackupPlanResult, Aws::Client::AWSError<BackupErrors>> DeleteBackupPlanOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<BackupErrors>> DeleteBackupSelectionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<BackupErrors>> DeleteBackupVaultOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<BackupErrors>> DeleteBackupVaultAccessPolicyOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<BackupErrors>> DeleteBackupVaultNotificationsOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<BackupErrors>> DeleteRecoveryPointOutcome;
        typedef Aws::Utils::Outcome<DescribeBackupJobResult, Aws::Client::AWSError<BackupErrors>> DescribeBackupJobOutcome;
        typedef Aws::Utils::Outcome<DescribeBackupVaultResult, Aws::Client::AWSError<BackupErrors>> DescribeBackupVaultOutcome;
        typedef Aws::Utils::Outcome<DescribeProtectedResourceResult, Aws::Client::AWSError<BackupErrors>> DescribeProtectedResourceOutcome;
        typedef Aws::Utils::Outcome<DescribeRecoveryPointResult, Aws::Client::AWSError<BackupErrors>> DescribeRecoveryPointOutcome;
        typedef Aws::Utils::Outcome<DescribeRestoreJobResult, Aws::Client::AWSError<BackupErrors>> DescribeRestoreJobOutcome;
        typedef Aws::Utils::Outcome<ExportBackupPlanTemplateResult, Aws::Client::AWSError<BackupErrors>> ExportBackupPlanTemplateOutcome;
        typedef Aws::Utils::Outcome<GetBackupPlanResult, Aws::Client::AWSError<BackupErrors>> GetBackupPlanOutcome;
        typedef Aws::Utils::Outcome<GetBackupPlanFromJSONResult, Aws::Client::AWSError<BackupErrors>> GetBackupPlanFromJSONOutcome;
        typedef Aws::Utils::Outcome<GetBackupPlanFromTemplateResult, Aws::Client::AWSError<BackupErrors>> GetBackupPlanFromTemplateOutcome;
        typedef Aws::Utils::Outcome<GetBackupSelectionResult, Aws::Client::AWSError<BackupErrors>> GetBackupSelectionOutcome;
        typedef Aws::Utils::Outcome<GetBackupVaultAccessPolicyResult, Aws::Client::AWSError<BackupErrors>> GetBackupVaultAccessPolicyOutcome;
        typedef Aws::Utils::Outcome<GetBackupVaultNotificationsResult, Aws::Client::AWSError<BackupErrors>> GetBackupVaultNotificationsOutcome;
        typedef Aws::Utils::Outcome<GetRecoveryPointRestoreMetadataResult, Aws::Client::AWSError<BackupErrors>> GetRecoveryPointRestoreMetadataOutcome;
        typedef Aws::Utils::Outcome<GetSupportedResourceTypesResult, Aws::Client::AWSError<BackupErrors>> GetSupportedResourceTypesOutcome;
        typedef Aws::Utils::Outcome<ListBackupJobsResult, Aws::Client::AWSError<BackupErrors>> ListBackupJobsOutcome;
        typedef Aws::Utils::Outcome<ListBackupPlanTemplatesResult, Aws::Client::AWSError<BackupErrors>> ListBackupPlanTemplatesOutcome;
        typedef Aws::Utils::Outcome<ListBackupPlanVersionsResult, Aws::Client::AWSError<BackupErrors>> ListBackupPlanVersionsOutcome;
        typedef Aws::Utils::Outcome<ListBackupPlansResult, Aws::Client::AWSError<BackupErrors>> ListBackupPlansOutcome;
        typedef Aws::Utils::Outcome<ListBackupSelectionsResult, Aws::Client::AWSError<BackupErrors>> ListBackupSelectionsOutcome;
        typedef Aws::Utils::Outcome<ListBackupVaultsResult, Aws::Client::AWSError<BackupErrors>> ListBackupVaultsOutcome;
        typedef Aws::Utils::Outcome<ListProtectedResourcesResult, Aws::Client::AWSError<BackupErrors>> ListProtectedResourcesOutcome;
        typedef Aws::Utils::Outcome<ListRecoveryPointsByBackupVaultResult, Aws::Client::AWSError<BackupErrors>> ListRecoveryPointsByBackupVaultOutcome;
        typedef Aws::Utils::Outcome<ListRecoveryPointsByResourceResult, Aws::Client::AWSError<BackupErrors>> ListRecoveryPointsByResourceOutcome;
        typedef Aws::Utils::Outcome<ListRestoreJobsResult, Aws::Client::AWSError<BackupErrors>> ListRestoreJobsOutcome;
        typedef Aws::Utils::Outcome<ListTagsResult, Aws::Client::AWSError<BackupErrors>> ListTagsOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<BackupErrors>> PutBackupVaultAccessPolicyOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<BackupErrors>> PutBackupVaultNotificationsOutcome;
        typedef Aws::Utils::Outcome<StartBackupJobResult, Aws::Client::AWSError<BackupErrors>> StartBackupJobOutcome;
        typedef Aws::Utils::Outcome<StartRestoreJobResult, Aws::Client::AWSError<BackupErrors>> StartRestoreJobOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<BackupErrors>> StopBackupJobOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<BackupErrors>> TagResourceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<BackupErrors>> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateBackupPlanResult, Aws::Client::AWSError<BackupErrors>> UpdateBackupPlanOutcome;
        typedef Aws::Utils::Outcome<UpdateRecoveryPointLifecycleResult, Aws::Client::AWSError<BackupErrors>> UpdateRecoveryPointLifecycleOutcome;

        typedef std::future<CreateBackupPlanOutcome> CreateBackupPlanOutcomeCallable;
        typedef std::future<CreateBackupSelectionOutcome> CreateBackupSelectionOutcomeCallable;
        typedef std::future<CreateBackupVaultOutcome> CreateBackupVaultOutcomeCallable;
        typedef std::future<DeleteBackupPlanOutcome> DeleteBackupPlanOutcomeCallable;
        typedef std::future<DeleteBackupSelectionOutcome> DeleteBackupSelectionOutcomeCallable;
        typedef std::future<DeleteBackupVaultOutcome> DeleteBackupVaultOutcomeCallable;
        typedef std::future<DeleteBackupVaultAccessPolicyOutcome> DeleteBackupVaultAccessPolicyOutcomeCallable;
        typedef std::future<DeleteBackupVaultNotificationsOutcome> DeleteBackupVaultNotificationsOutcomeCallable;
        typedef std::future<DeleteRecoveryPointOutcome> DeleteRecoveryPointOutcomeCallable;
        typedef std::future<DescribeBackupJobOutcome> DescribeBackupJobOutcomeCallable;
        typedef std::future<DescribeBackupVaultOutcome> DescribeBackupVaultOutcomeCallable;
        typedef std::future<DescribeProtectedResourceOutcome> DescribeProtectedResourceOutcomeCallable;
        typedef std::future<DescribeRecoveryPointOutcome> DescribeRecoveryPointOutcomeCallable;
        typedef std::future<DescribeRestoreJobOutcome> DescribeRestoreJobOutcomeCallable;
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
        typedef std::future<ListProtectedResourcesOutcome> ListProtectedResourcesOutcomeCallable;
        typedef std::future<ListRecoveryPointsByBackupVaultOutcome> ListRecoveryPointsByBackupVaultOutcomeCallable;
        typedef std::future<ListRecoveryPointsByResourceOutcome> ListRecoveryPointsByResourceOutcomeCallable;
        typedef std::future<ListRestoreJobsOutcome> ListRestoreJobsOutcomeCallable;
        typedef std::future<ListTagsOutcome> ListTagsOutcomeCallable;
        typedef std::future<PutBackupVaultAccessPolicyOutcome> PutBackupVaultAccessPolicyOutcomeCallable;
        typedef std::future<PutBackupVaultNotificationsOutcome> PutBackupVaultNotificationsOutcomeCallable;
        typedef std::future<StartBackupJobOutcome> StartBackupJobOutcomeCallable;
        typedef std::future<StartRestoreJobOutcome> StartRestoreJobOutcomeCallable;
        typedef std::future<StopBackupJobOutcome> StopBackupJobOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateBackupPlanOutcome> UpdateBackupPlanOutcomeCallable;
        typedef std::future<UpdateRecoveryPointLifecycleOutcome> UpdateRecoveryPointLifecycleOutcomeCallable;
} // namespace Model

  class BackupClient;

    typedef std::function<void(const BackupClient*, const Model::CreateBackupPlanRequest&, const Model::CreateBackupPlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBackupPlanResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::CreateBackupSelectionRequest&, const Model::CreateBackupSelectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBackupSelectionResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::CreateBackupVaultRequest&, const Model::CreateBackupVaultOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBackupVaultResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::DeleteBackupPlanRequest&, const Model::DeleteBackupPlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBackupPlanResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::DeleteBackupSelectionRequest&, const Model::DeleteBackupSelectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBackupSelectionResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::DeleteBackupVaultRequest&, const Model::DeleteBackupVaultOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBackupVaultResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::DeleteBackupVaultAccessPolicyRequest&, const Model::DeleteBackupVaultAccessPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBackupVaultAccessPolicyResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::DeleteBackupVaultNotificationsRequest&, const Model::DeleteBackupVaultNotificationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBackupVaultNotificationsResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::DeleteRecoveryPointRequest&, const Model::DeleteRecoveryPointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRecoveryPointResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::DescribeBackupJobRequest&, const Model::DescribeBackupJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeBackupJobResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::DescribeBackupVaultRequest&, const Model::DescribeBackupVaultOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeBackupVaultResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::DescribeProtectedResourceRequest&, const Model::DescribeProtectedResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeProtectedResourceResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::DescribeRecoveryPointRequest&, const Model::DescribeRecoveryPointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRecoveryPointResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::DescribeRestoreJobRequest&, const Model::DescribeRestoreJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRestoreJobResponseReceivedHandler;
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
    typedef std::function<void(const BackupClient*, const Model::ListProtectedResourcesRequest&, const Model::ListProtectedResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProtectedResourcesResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::ListRecoveryPointsByBackupVaultRequest&, const Model::ListRecoveryPointsByBackupVaultOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRecoveryPointsByBackupVaultResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::ListRecoveryPointsByResourceRequest&, const Model::ListRecoveryPointsByResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRecoveryPointsByResourceResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::ListRestoreJobsRequest&, const Model::ListRestoreJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRestoreJobsResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::ListTagsRequest&, const Model::ListTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::PutBackupVaultAccessPolicyRequest&, const Model::PutBackupVaultAccessPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutBackupVaultAccessPolicyResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::PutBackupVaultNotificationsRequest&, const Model::PutBackupVaultNotificationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutBackupVaultNotificationsResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::StartBackupJobRequest&, const Model::StartBackupJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartBackupJobResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::StartRestoreJobRequest&, const Model::StartRestoreJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartRestoreJobResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::StopBackupJobRequest&, const Model::StopBackupJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopBackupJobResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::UpdateBackupPlanRequest&, const Model::UpdateBackupPlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateBackupPlanResponseReceivedHandler;
    typedef std::function<void(const BackupClient*, const Model::UpdateRecoveryPointLifecycleRequest&, const Model::UpdateRecoveryPointLifecycleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRecoveryPointLifecycleResponseReceivedHandler;

  /**
   * <fullname>AWS Backup</fullname> <p>AWS Backup is a unified backup service
   * designed to protect AWS services and their associated data. AWS Backup
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

        inline virtual const char* GetServiceClientName() const override { return "Backup"; }


        /**
         * <p>Backup plans are documents that contain information that AWS Backup uses to
         * schedule tasks that create recovery points of resources.</p> <p>If you call
         * <code>CreateBackupPlan</code> with a plan that already exists, the existing
         * <code>backupPlanId</code> is returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/CreateBackupPlan">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBackupPlanOutcome CreateBackupPlan(const Model::CreateBackupPlanRequest& request) const;

        /**
         * <p>Backup plans are documents that contain information that AWS Backup uses to
         * schedule tasks that create recovery points of resources.</p> <p>If you call
         * <code>CreateBackupPlan</code> with a plan that already exists, the existing
         * <code>backupPlanId</code> is returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/CreateBackupPlan">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateBackupPlanOutcomeCallable CreateBackupPlanCallable(const Model::CreateBackupPlanRequest& request) const;

        /**
         * <p>Backup plans are documents that contain information that AWS Backup uses to
         * schedule tasks that create recovery points of resources.</p> <p>If you call
         * <code>CreateBackupPlan</code> with a plan that already exists, the existing
         * <code>backupPlanId</code> is returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/CreateBackupPlan">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateBackupPlanAsync(const Model::CreateBackupPlanRequest& request, const CreateBackupPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a JSON document that specifies a set of resources to assign to a
         * backup plan. Resources can be included by specifying patterns for a
         * <code>ListOfTags</code> and selected <code>Resources</code>. </p> <p>For
         * example, consider the following patterns:</p> <ul> <li> <p> <code>Resources:
         * "arn:aws:ec2:region:account-id:volume/volume-id"</code> </p> </li> <li> <p>
         * <code>ConditionKey:"department"</code> </p> <p>
         * <code>ConditionValue:"finance"</code> </p> <p>
         * <code>ConditionType:"StringEquals"</code> </p> </li> <li> <p>
         * <code>ConditionKey:"importance"</code> </p> <p>
         * <code>ConditionValue:"critical"</code> </p> <p>
         * <code>ConditionType:"StringEquals"</code> </p> </li> </ul> <p>Using these
         * patterns would back up all Amazon Elastic Block Store (Amazon EBS) volumes that
         * are tagged as <code>"department=finance"</code>,
         * <code>"importance=critical"</code>, in addition to an EBS volume with the
         * specified volume Id.</p> <p>Resources and conditions are additive in that all
         * resources that match the pattern are selected. This shouldn't be confused with a
         * logical AND, where all conditions must match. The matching patterns are
         * logically 'put together using the OR operator. In other words, all patterns that
         * match are selected for backup.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/CreateBackupSelection">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBackupSelectionOutcome CreateBackupSelection(const Model::CreateBackupSelectionRequest& request) const;

        /**
         * <p>Creates a JSON document that specifies a set of resources to assign to a
         * backup plan. Resources can be included by specifying patterns for a
         * <code>ListOfTags</code> and selected <code>Resources</code>. </p> <p>For
         * example, consider the following patterns:</p> <ul> <li> <p> <code>Resources:
         * "arn:aws:ec2:region:account-id:volume/volume-id"</code> </p> </li> <li> <p>
         * <code>ConditionKey:"department"</code> </p> <p>
         * <code>ConditionValue:"finance"</code> </p> <p>
         * <code>ConditionType:"StringEquals"</code> </p> </li> <li> <p>
         * <code>ConditionKey:"importance"</code> </p> <p>
         * <code>ConditionValue:"critical"</code> </p> <p>
         * <code>ConditionType:"StringEquals"</code> </p> </li> </ul> <p>Using these
         * patterns would back up all Amazon Elastic Block Store (Amazon EBS) volumes that
         * are tagged as <code>"department=finance"</code>,
         * <code>"importance=critical"</code>, in addition to an EBS volume with the
         * specified volume Id.</p> <p>Resources and conditions are additive in that all
         * resources that match the pattern are selected. This shouldn't be confused with a
         * logical AND, where all conditions must match. The matching patterns are
         * logically 'put together using the OR operator. In other words, all patterns that
         * match are selected for backup.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/CreateBackupSelection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateBackupSelectionOutcomeCallable CreateBackupSelectionCallable(const Model::CreateBackupSelectionRequest& request) const;

        /**
         * <p>Creates a JSON document that specifies a set of resources to assign to a
         * backup plan. Resources can be included by specifying patterns for a
         * <code>ListOfTags</code> and selected <code>Resources</code>. </p> <p>For
         * example, consider the following patterns:</p> <ul> <li> <p> <code>Resources:
         * "arn:aws:ec2:region:account-id:volume/volume-id"</code> </p> </li> <li> <p>
         * <code>ConditionKey:"department"</code> </p> <p>
         * <code>ConditionValue:"finance"</code> </p> <p>
         * <code>ConditionType:"StringEquals"</code> </p> </li> <li> <p>
         * <code>ConditionKey:"importance"</code> </p> <p>
         * <code>ConditionValue:"critical"</code> </p> <p>
         * <code>ConditionType:"StringEquals"</code> </p> </li> </ul> <p>Using these
         * patterns would back up all Amazon Elastic Block Store (Amazon EBS) volumes that
         * are tagged as <code>"department=finance"</code>,
         * <code>"importance=critical"</code>, in addition to an EBS volume with the
         * specified volume Id.</p> <p>Resources and conditions are additive in that all
         * resources that match the pattern are selected. This shouldn't be confused with a
         * logical AND, where all conditions must match. The matching patterns are
         * logically 'put together using the OR operator. In other words, all patterns that
         * match are selected for backup.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/CreateBackupSelection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateBackupSelectionAsync(const Model::CreateBackupSelectionRequest& request, const CreateBackupSelectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a logical container where backups are stored. A
         * <code>CreateBackupVault</code> request includes a name, optionally one or more
         * resource tags, an encryption key, and a request ID.</p> <note> <p>Sensitive
         * data, such as passport numbers, should not be included the name of a backup
         * vault.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/CreateBackupVault">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBackupVaultOutcome CreateBackupVault(const Model::CreateBackupVaultRequest& request) const;

        /**
         * <p>Creates a logical container where backups are stored. A
         * <code>CreateBackupVault</code> request includes a name, optionally one or more
         * resource tags, an encryption key, and a request ID.</p> <note> <p>Sensitive
         * data, such as passport numbers, should not be included the name of a backup
         * vault.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/CreateBackupVault">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateBackupVaultOutcomeCallable CreateBackupVaultCallable(const Model::CreateBackupVaultRequest& request) const;

        /**
         * <p>Creates a logical container where backups are stored. A
         * <code>CreateBackupVault</code> request includes a name, optionally one or more
         * resource tags, an encryption key, and a request ID.</p> <note> <p>Sensitive
         * data, such as passport numbers, should not be included the name of a backup
         * vault.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/CreateBackupVault">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateBackupVaultAsync(const Model::CreateBackupVaultRequest& request, const CreateBackupVaultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Deletes a backup plan. A backup plan can only be deleted after all associated
         * selections of resources have been deleted. Deleting a backup plan deletes the
         * current version of a backup plan. Previous versions, if any, will still
         * exist.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/DeleteBackupPlan">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBackupPlanOutcomeCallable DeleteBackupPlanCallable(const Model::DeleteBackupPlanRequest& request) const;

        /**
         * <p>Deletes a backup plan. A backup plan can only be deleted after all associated
         * selections of resources have been deleted. Deleting a backup plan deletes the
         * current version of a backup plan. Previous versions, if any, will still
         * exist.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/DeleteBackupPlan">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Deletes the resource selection associated with a backup plan that is
         * specified by the <code>SelectionId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/DeleteBackupSelection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBackupSelectionOutcomeCallable DeleteBackupSelectionCallable(const Model::DeleteBackupSelectionRequest& request) const;

        /**
         * <p>Deletes the resource selection associated with a backup plan that is
         * specified by the <code>SelectionId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/DeleteBackupSelection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Deletes the backup vault identified by its name. A vault can be deleted only
         * if it is empty.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/DeleteBackupVault">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBackupVaultOutcomeCallable DeleteBackupVaultCallable(const Model::DeleteBackupVaultRequest& request) const;

        /**
         * <p>Deletes the backup vault identified by its name. A vault can be deleted only
         * if it is empty.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/DeleteBackupVault">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Deletes the policy document that manages permissions on a backup
         * vault.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/DeleteBackupVaultAccessPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBackupVaultAccessPolicyOutcomeCallable DeleteBackupVaultAccessPolicyCallable(const Model::DeleteBackupVaultAccessPolicyRequest& request) const;

        /**
         * <p>Deletes the policy document that manages permissions on a backup
         * vault.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/DeleteBackupVaultAccessPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBackupVaultAccessPolicyAsync(const Model::DeleteBackupVaultAccessPolicyRequest& request, const DeleteBackupVaultAccessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes event notifications for the specified backup vault.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/DeleteBackupVaultNotifications">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBackupVaultNotificationsOutcome DeleteBackupVaultNotifications(const Model::DeleteBackupVaultNotificationsRequest& request) const;

        /**
         * <p>Deletes event notifications for the specified backup vault.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/DeleteBackupVaultNotifications">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBackupVaultNotificationsOutcomeCallable DeleteBackupVaultNotificationsCallable(const Model::DeleteBackupVaultNotificationsRequest& request) const;

        /**
         * <p>Deletes event notifications for the specified backup vault.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/DeleteBackupVaultNotifications">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBackupVaultNotificationsAsync(const Model::DeleteBackupVaultNotificationsRequest& request, const DeleteBackupVaultNotificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the recovery point specified by a recovery point ID.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/DeleteRecoveryPoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRecoveryPointOutcome DeleteRecoveryPoint(const Model::DeleteRecoveryPointRequest& request) const;

        /**
         * <p>Deletes the recovery point specified by a recovery point ID.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/DeleteRecoveryPoint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRecoveryPointOutcomeCallable DeleteRecoveryPointCallable(const Model::DeleteRecoveryPointRequest& request) const;

        /**
         * <p>Deletes the recovery point specified by a recovery point ID.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/DeleteRecoveryPoint">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRecoveryPointAsync(const Model::DeleteRecoveryPointRequest& request, const DeleteRecoveryPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns metadata associated with creating a backup of a
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/DescribeBackupJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBackupJobOutcome DescribeBackupJob(const Model::DescribeBackupJobRequest& request) const;

        /**
         * <p>Returns metadata associated with creating a backup of a
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/DescribeBackupJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeBackupJobOutcomeCallable DescribeBackupJobCallable(const Model::DescribeBackupJobRequest& request) const;

        /**
         * <p>Returns metadata associated with creating a backup of a
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/DescribeBackupJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns metadata about a backup vault specified by its name.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/DescribeBackupVault">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeBackupVaultOutcomeCallable DescribeBackupVaultCallable(const Model::DescribeBackupVaultRequest& request) const;

        /**
         * <p>Returns metadata about a backup vault specified by its name.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/DescribeBackupVault">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeBackupVaultAsync(const Model::DescribeBackupVaultRequest& request, const DescribeBackupVaultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a saved resource, including the last time it was
         * backed-up, its Amazon Resource Name (ARN), and the AWS service type of the saved
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/DescribeProtectedResource">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProtectedResourceOutcome DescribeProtectedResource(const Model::DescribeProtectedResourceRequest& request) const;

        /**
         * <p>Returns information about a saved resource, including the last time it was
         * backed-up, its Amazon Resource Name (ARN), and the AWS service type of the saved
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/DescribeProtectedResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeProtectedResourceOutcomeCallable DescribeProtectedResourceCallable(const Model::DescribeProtectedResourceRequest& request) const;

        /**
         * <p>Returns information about a saved resource, including the last time it was
         * backed-up, its Amazon Resource Name (ARN), and the AWS service type of the saved
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/DescribeProtectedResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns metadata associated with a recovery point, including ID, status,
         * encryption, and lifecycle.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/DescribeRecoveryPoint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRecoveryPointOutcomeCallable DescribeRecoveryPointCallable(const Model::DescribeRecoveryPointRequest& request) const;

        /**
         * <p>Returns metadata associated with a recovery point, including ID, status,
         * encryption, and lifecycle.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/DescribeRecoveryPoint">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRecoveryPointAsync(const Model::DescribeRecoveryPointRequest& request, const DescribeRecoveryPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns metadata associated with a restore job that is specified by a job
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/DescribeRestoreJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRestoreJobOutcome DescribeRestoreJob(const Model::DescribeRestoreJobRequest& request) const;

        /**
         * <p>Returns metadata associated with a restore job that is specified by a job
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/DescribeRestoreJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRestoreJobOutcomeCallable DescribeRestoreJobCallable(const Model::DescribeRestoreJobRequest& request) const;

        /**
         * <p>Returns metadata associated with a restore job that is specified by a job
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/DescribeRestoreJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRestoreJobAsync(const Model::DescribeRestoreJobRequest& request, const DescribeRestoreJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the backup plan that is specified by the plan ID as a backup
         * template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ExportBackupPlanTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::ExportBackupPlanTemplateOutcome ExportBackupPlanTemplate(const Model::ExportBackupPlanTemplateRequest& request) const;

        /**
         * <p>Returns the backup plan that is specified by the plan ID as a backup
         * template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ExportBackupPlanTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ExportBackupPlanTemplateOutcomeCallable ExportBackupPlanTemplateCallable(const Model::ExportBackupPlanTemplateRequest& request) const;

        /**
         * <p>Returns the backup plan that is specified by the plan ID as a backup
         * template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ExportBackupPlanTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ExportBackupPlanTemplateAsync(const Model::ExportBackupPlanTemplateRequest& request, const ExportBackupPlanTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the body of a backup plan in JSON format, in addition to plan
         * metadata.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/GetBackupPlan">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBackupPlanOutcome GetBackupPlan(const Model::GetBackupPlanRequest& request) const;

        /**
         * <p>Returns the body of a backup plan in JSON format, in addition to plan
         * metadata.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/GetBackupPlan">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBackupPlanOutcomeCallable GetBackupPlanCallable(const Model::GetBackupPlanRequest& request) const;

        /**
         * <p>Returns the body of a backup plan in JSON format, in addition to plan
         * metadata.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/GetBackupPlan">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns a valid JSON document specifying a backup plan or an
         * error.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/GetBackupPlanFromJSON">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBackupPlanFromJSONOutcomeCallable GetBackupPlanFromJSONCallable(const Model::GetBackupPlanFromJSONRequest& request) const;

        /**
         * <p>Returns a valid JSON document specifying a backup plan or an
         * error.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/GetBackupPlanFromJSON">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns the template specified by its <code>templateId</code> as a backup
         * plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/GetBackupPlanFromTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBackupPlanFromTemplateOutcomeCallable GetBackupPlanFromTemplateCallable(const Model::GetBackupPlanFromTemplateRequest& request) const;

        /**
         * <p>Returns the template specified by its <code>templateId</code> as a backup
         * plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/GetBackupPlanFromTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns selection metadata and a document in JSON format that specifies a
         * list of resources that are associated with a backup plan.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/GetBackupSelection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBackupSelectionOutcomeCallable GetBackupSelectionCallable(const Model::GetBackupSelectionRequest& request) const;

        /**
         * <p>Returns selection metadata and a document in JSON format that specifies a
         * list of resources that are associated with a backup plan.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/GetBackupSelection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns the access policy document that is associated with the named backup
         * vault.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/GetBackupVaultAccessPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBackupVaultAccessPolicyOutcomeCallable GetBackupVaultAccessPolicyCallable(const Model::GetBackupVaultAccessPolicyRequest& request) const;

        /**
         * <p>Returns the access policy document that is associated with the named backup
         * vault.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/GetBackupVaultAccessPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns event notifications for the specified backup vault.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/GetBackupVaultNotifications">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBackupVaultNotificationsOutcomeCallable GetBackupVaultNotificationsCallable(const Model::GetBackupVaultNotificationsRequest& request) const;

        /**
         * <p>Returns event notifications for the specified backup vault.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/GetBackupVaultNotifications">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBackupVaultNotificationsAsync(const Model::GetBackupVaultNotificationsRequest& request, const GetBackupVaultNotificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns two sets of metadata key-value pairs. The first set lists the
         * metadata that the recovery point was created with. The second set lists the
         * metadata key-value pairs that are required to restore the recovery point.</p>
         * <p>These sets can be the same, or the restore metadata set can contain different
         * values if the target service to be restored has changed since the recovery point
         * was created and now requires additional or different information in order to be
         * restored.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/GetRecoveryPointRestoreMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRecoveryPointRestoreMetadataOutcome GetRecoveryPointRestoreMetadata(const Model::GetRecoveryPointRestoreMetadataRequest& request) const;

        /**
         * <p>Returns two sets of metadata key-value pairs. The first set lists the
         * metadata that the recovery point was created with. The second set lists the
         * metadata key-value pairs that are required to restore the recovery point.</p>
         * <p>These sets can be the same, or the restore metadata set can contain different
         * values if the target service to be restored has changed since the recovery point
         * was created and now requires additional or different information in order to be
         * restored.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/GetRecoveryPointRestoreMetadata">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRecoveryPointRestoreMetadataOutcomeCallable GetRecoveryPointRestoreMetadataCallable(const Model::GetRecoveryPointRestoreMetadataRequest& request) const;

        /**
         * <p>Returns two sets of metadata key-value pairs. The first set lists the
         * metadata that the recovery point was created with. The second set lists the
         * metadata key-value pairs that are required to restore the recovery point.</p>
         * <p>These sets can be the same, or the restore metadata set can contain different
         * values if the target service to be restored has changed since the recovery point
         * was created and now requires additional or different information in order to be
         * restored.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/GetRecoveryPointRestoreMetadata">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRecoveryPointRestoreMetadataAsync(const Model::GetRecoveryPointRestoreMetadataRequest& request, const GetRecoveryPointRestoreMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the AWS resource types supported by AWS Backup.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/GetSupportedResourceTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSupportedResourceTypesOutcome GetSupportedResourceTypes() const;

        /**
         * <p>Returns the AWS resource types supported by AWS Backup.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/GetSupportedResourceTypes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSupportedResourceTypesOutcomeCallable GetSupportedResourceTypesCallable() const;

        /**
         * <p>Returns the AWS resource types supported by AWS Backup.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/GetSupportedResourceTypes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSupportedResourceTypesAsync(const GetSupportedResourceTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;
        /**
         * <p>Returns metadata about your backup jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ListBackupJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBackupJobsOutcome ListBackupJobs(const Model::ListBackupJobsRequest& request) const;

        /**
         * <p>Returns metadata about your backup jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ListBackupJobs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBackupJobsOutcomeCallable ListBackupJobsCallable(const Model::ListBackupJobsRequest& request) const;

        /**
         * <p>Returns metadata about your backup jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ListBackupJobs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns metadata of your saved backup plan templates, including the template
         * ID, name, and the creation and deletion dates.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ListBackupPlanTemplates">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBackupPlanTemplatesOutcomeCallable ListBackupPlanTemplatesCallable(const Model::ListBackupPlanTemplatesRequest& request) const;

        /**
         * <p>Returns metadata of your saved backup plan templates, including the template
         * ID, name, and the creation and deletion dates.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ListBackupPlanTemplates">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns version metadata of your backup plans, including Amazon Resource
         * Names (ARNs), backup plan IDs, creation and deletion dates, plan names, and
         * version IDs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ListBackupPlanVersions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBackupPlanVersionsOutcomeCallable ListBackupPlanVersionsCallable(const Model::ListBackupPlanVersionsRequest& request) const;

        /**
         * <p>Returns version metadata of your backup plans, including Amazon Resource
         * Names (ARNs), backup plan IDs, creation and deletion dates, plan names, and
         * version IDs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ListBackupPlanVersions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBackupPlanVersionsAsync(const Model::ListBackupPlanVersionsRequest& request, const ListBackupPlanVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns metadata of your saved backup plans, including Amazon Resource Names
         * (ARNs), plan IDs, creation and deletion dates, version IDs, plan names, and
         * creator request IDs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ListBackupPlans">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBackupPlansOutcome ListBackupPlans(const Model::ListBackupPlansRequest& request) const;

        /**
         * <p>Returns metadata of your saved backup plans, including Amazon Resource Names
         * (ARNs), plan IDs, creation and deletion dates, version IDs, plan names, and
         * creator request IDs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ListBackupPlans">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBackupPlansOutcomeCallable ListBackupPlansCallable(const Model::ListBackupPlansRequest& request) const;

        /**
         * <p>Returns metadata of your saved backup plans, including Amazon Resource Names
         * (ARNs), plan IDs, creation and deletion dates, version IDs, plan names, and
         * creator request IDs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ListBackupPlans">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns an array containing metadata of the resources associated with the
         * target backup plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ListBackupSelections">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBackupSelectionsOutcomeCallable ListBackupSelectionsCallable(const Model::ListBackupSelectionsRequest& request) const;

        /**
         * <p>Returns an array containing metadata of the resources associated with the
         * target backup plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ListBackupSelections">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns a list of recovery point storage containers along with information
         * about them.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ListBackupVaults">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBackupVaultsOutcomeCallable ListBackupVaultsCallable(const Model::ListBackupVaultsRequest& request) const;

        /**
         * <p>Returns a list of recovery point storage containers along with information
         * about them.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ListBackupVaults">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBackupVaultsAsync(const Model::ListBackupVaultsRequest& request, const ListBackupVaultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an array of resources successfully backed up by AWS Backup, including
         * the time the resource was saved, an Amazon Resource Name (ARN) of the resource,
         * and a resource type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ListProtectedResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProtectedResourcesOutcome ListProtectedResources(const Model::ListProtectedResourcesRequest& request) const;

        /**
         * <p>Returns an array of resources successfully backed up by AWS Backup, including
         * the time the resource was saved, an Amazon Resource Name (ARN) of the resource,
         * and a resource type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ListProtectedResources">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListProtectedResourcesOutcomeCallable ListProtectedResourcesCallable(const Model::ListProtectedResourcesRequest& request) const;

        /**
         * <p>Returns an array of resources successfully backed up by AWS Backup, including
         * the time the resource was saved, an Amazon Resource Name (ARN) of the resource,
         * and a resource type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ListProtectedResources">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns detailed information about the recovery points stored in a backup
         * vault.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ListRecoveryPointsByBackupVault">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRecoveryPointsByBackupVaultOutcomeCallable ListRecoveryPointsByBackupVaultCallable(const Model::ListRecoveryPointsByBackupVaultRequest& request) const;

        /**
         * <p>Returns detailed information about the recovery points stored in a backup
         * vault.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ListRecoveryPointsByBackupVault">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRecoveryPointsByBackupVaultAsync(const Model::ListRecoveryPointsByBackupVaultRequest& request, const ListRecoveryPointsByBackupVaultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns detailed information about recovery points of the type specified by a
         * resource Amazon Resource Name (ARN).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ListRecoveryPointsByResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRecoveryPointsByResourceOutcome ListRecoveryPointsByResource(const Model::ListRecoveryPointsByResourceRequest& request) const;

        /**
         * <p>Returns detailed information about recovery points of the type specified by a
         * resource Amazon Resource Name (ARN).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ListRecoveryPointsByResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRecoveryPointsByResourceOutcomeCallable ListRecoveryPointsByResourceCallable(const Model::ListRecoveryPointsByResourceRequest& request) const;

        /**
         * <p>Returns detailed information about recovery points of the type specified by a
         * resource Amazon Resource Name (ARN).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ListRecoveryPointsByResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRecoveryPointsByResourceAsync(const Model::ListRecoveryPointsByResourceRequest& request, const ListRecoveryPointsByResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of jobs that AWS Backup initiated to restore a saved resource,
         * including metadata about the recovery process.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ListRestoreJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRestoreJobsOutcome ListRestoreJobs(const Model::ListRestoreJobsRequest& request) const;

        /**
         * <p>Returns a list of jobs that AWS Backup initiated to restore a saved resource,
         * including metadata about the recovery process.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ListRestoreJobs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRestoreJobsOutcomeCallable ListRestoreJobsCallable(const Model::ListRestoreJobsRequest& request) const;

        /**
         * <p>Returns a list of jobs that AWS Backup initiated to restore a saved resource,
         * including metadata about the recovery process.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ListRestoreJobs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRestoreJobsAsync(const Model::ListRestoreJobsRequest& request, const ListRestoreJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of key-value pairs assigned to a target recovery point, backup
         * plan, or backup vault.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ListTags">AWS API
         * Reference</a></p>
         */
        virtual Model::ListTagsOutcome ListTags(const Model::ListTagsRequest& request) const;

        /**
         * <p>Returns a list of key-value pairs assigned to a target recovery point, backup
         * plan, or backup vault.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ListTags">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsOutcomeCallable ListTagsCallable(const Model::ListTagsRequest& request) const;

        /**
         * <p>Returns a list of key-value pairs assigned to a target recovery point, backup
         * plan, or backup vault.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ListTags">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Sets a resource-based policy that is used to manage access permissions on the
         * target backup vault. Requires a backup vault name and an access policy document
         * in JSON format.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/PutBackupVaultAccessPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutBackupVaultAccessPolicyOutcomeCallable PutBackupVaultAccessPolicyCallable(const Model::PutBackupVaultAccessPolicyRequest& request) const;

        /**
         * <p>Sets a resource-based policy that is used to manage access permissions on the
         * target backup vault. Requires a backup vault name and an access policy document
         * in JSON format.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/PutBackupVaultAccessPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutBackupVaultAccessPolicyAsync(const Model::PutBackupVaultAccessPolicyRequest& request, const PutBackupVaultAccessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Turns on notifications on a backup vault for the specified topic and
         * events.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/PutBackupVaultNotifications">AWS
         * API Reference</a></p>
         */
        virtual Model::PutBackupVaultNotificationsOutcome PutBackupVaultNotifications(const Model::PutBackupVaultNotificationsRequest& request) const;

        /**
         * <p>Turns on notifications on a backup vault for the specified topic and
         * events.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/PutBackupVaultNotifications">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutBackupVaultNotificationsOutcomeCallable PutBackupVaultNotificationsCallable(const Model::PutBackupVaultNotificationsRequest& request) const;

        /**
         * <p>Turns on notifications on a backup vault for the specified topic and
         * events.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/PutBackupVaultNotifications">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutBackupVaultNotificationsAsync(const Model::PutBackupVaultNotificationsRequest& request, const PutBackupVaultNotificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a job to create a one-time backup of the specified
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/StartBackupJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartBackupJobOutcome StartBackupJob(const Model::StartBackupJobRequest& request) const;

        /**
         * <p>Starts a job to create a one-time backup of the specified
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/StartBackupJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartBackupJobOutcomeCallable StartBackupJobCallable(const Model::StartBackupJobRequest& request) const;

        /**
         * <p>Starts a job to create a one-time backup of the specified
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/StartBackupJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartBackupJobAsync(const Model::StartBackupJobRequest& request, const StartBackupJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Recovers the saved resource identified by an Amazon Resource Name (ARN). </p>
         * <p>If the resource ARN is included in the request, then the last complete backup
         * of that resource is recovered. If the ARN of a recovery point is supplied, then
         * that recovery point is restored.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/StartRestoreJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartRestoreJobOutcome StartRestoreJob(const Model::StartRestoreJobRequest& request) const;

        /**
         * <p>Recovers the saved resource identified by an Amazon Resource Name (ARN). </p>
         * <p>If the resource ARN is included in the request, then the last complete backup
         * of that resource is recovered. If the ARN of a recovery point is supplied, then
         * that recovery point is restored.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/StartRestoreJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartRestoreJobOutcomeCallable StartRestoreJobCallable(const Model::StartRestoreJobRequest& request) const;

        /**
         * <p>Recovers the saved resource identified by an Amazon Resource Name (ARN). </p>
         * <p>If the resource ARN is included in the request, then the last complete backup
         * of that resource is recovered. If the ARN of a recovery point is supplied, then
         * that recovery point is restored.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/StartRestoreJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Attempts to cancel a job to create a one-time backup of a
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/StopBackupJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopBackupJobOutcomeCallable StopBackupJobCallable(const Model::StopBackupJobRequest& request) const;

        /**
         * <p>Attempts to cancel a job to create a one-time backup of a
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/StopBackupJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Assigns a set of key-value pairs to a recovery point, backup plan, or backup
         * vault identified by an Amazon Resource Name (ARN).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Assigns a set of key-value pairs to a recovery point, backup plan, or backup
         * vault identified by an Amazon Resource Name (ARN).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Removes a set of key-value pairs from a recovery point, backup plan, or
         * backup vault identified by an Amazon Resource Name (ARN)</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes a set of key-value pairs from a recovery point, backup plan, or
         * backup vault identified by an Amazon Resource Name (ARN)</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Replaces the body of a saved backup plan identified by its
         * <code>backupPlanId</code> with the input document in JSON format. The new
         * version is uniquely identified by a <code>VersionId</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/UpdateBackupPlan">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBackupPlanOutcome UpdateBackupPlan(const Model::UpdateBackupPlanRequest& request) const;

        /**
         * <p>Replaces the body of a saved backup plan identified by its
         * <code>backupPlanId</code> with the input document in JSON format. The new
         * version is uniquely identified by a <code>VersionId</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/UpdateBackupPlan">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateBackupPlanOutcomeCallable UpdateBackupPlanCallable(const Model::UpdateBackupPlanRequest& request) const;

        /**
         * <p>Replaces the body of a saved backup plan identified by its
         * <code>backupPlanId</code> with the input document in JSON format. The new
         * version is uniquely identified by a <code>VersionId</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/UpdateBackupPlan">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateBackupPlanAsync(const Model::UpdateBackupPlanRequest& request, const UpdateBackupPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the transition lifecycle of a recovery point.</p> <p>The lifecycle
         * defines when a protected resource is transitioned to cold storage and when it
         * expires. AWS Backup transitions and expires backups automatically according to
         * the lifecycle that you define. </p> <p>Backups transitioned to cold storage must
         * be stored in cold storage for a minimum of 90 days. Therefore, the “expire after
         * days” setting must be 90 days greater than the “transition to cold after days”
         * setting. The “transition to cold after days” setting cannot be changed after a
         * backup has been transitioned to cold. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/UpdateRecoveryPointLifecycle">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRecoveryPointLifecycleOutcome UpdateRecoveryPointLifecycle(const Model::UpdateRecoveryPointLifecycleRequest& request) const;

        /**
         * <p>Sets the transition lifecycle of a recovery point.</p> <p>The lifecycle
         * defines when a protected resource is transitioned to cold storage and when it
         * expires. AWS Backup transitions and expires backups automatically according to
         * the lifecycle that you define. </p> <p>Backups transitioned to cold storage must
         * be stored in cold storage for a minimum of 90 days. Therefore, the “expire after
         * days” setting must be 90 days greater than the “transition to cold after days”
         * setting. The “transition to cold after days” setting cannot be changed after a
         * backup has been transitioned to cold. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/UpdateRecoveryPointLifecycle">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRecoveryPointLifecycleOutcomeCallable UpdateRecoveryPointLifecycleCallable(const Model::UpdateRecoveryPointLifecycleRequest& request) const;

        /**
         * <p>Sets the transition lifecycle of a recovery point.</p> <p>The lifecycle
         * defines when a protected resource is transitioned to cold storage and when it
         * expires. AWS Backup transitions and expires backups automatically according to
         * the lifecycle that you define. </p> <p>Backups transitioned to cold storage must
         * be stored in cold storage for a minimum of 90 days. Therefore, the “expire after
         * days” setting must be 90 days greater than the “transition to cold after days”
         * setting. The “transition to cold after days” setting cannot be changed after a
         * backup has been transitioned to cold. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/UpdateRecoveryPointLifecycle">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRecoveryPointLifecycleAsync(const Model::UpdateRecoveryPointLifecycleRequest& request, const UpdateRecoveryPointLifecycleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateBackupPlanAsyncHelper(const Model::CreateBackupPlanRequest& request, const CreateBackupPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateBackupSelectionAsyncHelper(const Model::CreateBackupSelectionRequest& request, const CreateBackupSelectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateBackupVaultAsyncHelper(const Model::CreateBackupVaultRequest& request, const CreateBackupVaultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBackupPlanAsyncHelper(const Model::DeleteBackupPlanRequest& request, const DeleteBackupPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBackupSelectionAsyncHelper(const Model::DeleteBackupSelectionRequest& request, const DeleteBackupSelectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBackupVaultAsyncHelper(const Model::DeleteBackupVaultRequest& request, const DeleteBackupVaultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBackupVaultAccessPolicyAsyncHelper(const Model::DeleteBackupVaultAccessPolicyRequest& request, const DeleteBackupVaultAccessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBackupVaultNotificationsAsyncHelper(const Model::DeleteBackupVaultNotificationsRequest& request, const DeleteBackupVaultNotificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRecoveryPointAsyncHelper(const Model::DeleteRecoveryPointRequest& request, const DeleteRecoveryPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeBackupJobAsyncHelper(const Model::DescribeBackupJobRequest& request, const DescribeBackupJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeBackupVaultAsyncHelper(const Model::DescribeBackupVaultRequest& request, const DescribeBackupVaultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeProtectedResourceAsyncHelper(const Model::DescribeProtectedResourceRequest& request, const DescribeProtectedResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeRecoveryPointAsyncHelper(const Model::DescribeRecoveryPointRequest& request, const DescribeRecoveryPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeRestoreJobAsyncHelper(const Model::DescribeRestoreJobRequest& request, const DescribeRestoreJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
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
        void ListProtectedResourcesAsyncHelper(const Model::ListProtectedResourcesRequest& request, const ListProtectedResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRecoveryPointsByBackupVaultAsyncHelper(const Model::ListRecoveryPointsByBackupVaultRequest& request, const ListRecoveryPointsByBackupVaultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRecoveryPointsByResourceAsyncHelper(const Model::ListRecoveryPointsByResourceRequest& request, const ListRecoveryPointsByResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRestoreJobsAsyncHelper(const Model::ListRestoreJobsRequest& request, const ListRestoreJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsAsyncHelper(const Model::ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutBackupVaultAccessPolicyAsyncHelper(const Model::PutBackupVaultAccessPolicyRequest& request, const PutBackupVaultAccessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutBackupVaultNotificationsAsyncHelper(const Model::PutBackupVaultNotificationsRequest& request, const PutBackupVaultNotificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartBackupJobAsyncHelper(const Model::StartBackupJobRequest& request, const StartBackupJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartRestoreJobAsyncHelper(const Model::StartRestoreJobRequest& request, const StartRestoreJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopBackupJobAsyncHelper(const Model::StopBackupJobRequest& request, const StopBackupJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateBackupPlanAsyncHelper(const Model::UpdateBackupPlanRequest& request, const UpdateBackupPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateRecoveryPointLifecycleAsyncHelper(const Model::UpdateRecoveryPointLifecycleRequest& request, const UpdateRecoveryPointLifecycleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace Backup
} // namespace Aws
