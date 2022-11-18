/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/backup/BackupServiceClientModel.h>
#include <aws/backup/BackupLegacyAsyncMacros.h>

namespace Aws
{
namespace Backup
{
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
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BackupClient(const Aws::Backup::BackupClientConfiguration& clientConfiguration = Aws::Backup::BackupClientConfiguration(),
                     std::shared_ptr<BackupEndpointProviderBase> endpointProvider = Aws::MakeShared<BackupEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BackupClient(const Aws::Auth::AWSCredentials& credentials,
                     std::shared_ptr<BackupEndpointProviderBase> endpointProvider = Aws::MakeShared<BackupEndpointProvider>(ALLOCATION_TAG),
                     const Aws::Backup::BackupClientConfiguration& clientConfiguration = Aws::Backup::BackupClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        BackupClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                     std::shared_ptr<BackupEndpointProviderBase> endpointProvider = Aws::MakeShared<BackupEndpointProvider>(ALLOCATION_TAG),
                     const Aws::Backup::BackupClientConfiguration& clientConfiguration = Aws::Backup::BackupClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BackupClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BackupClient(const Aws::Auth::AWSCredentials& credentials,
                     const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        BackupClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                     const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~BackupClient();


        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         const RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncStreamingOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            const RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableStreamingOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }


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
         * <p>Creates a JSON document that specifies a set of resources to assign to a
         * backup plan. For examples, see <a
         * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/assigning-resources.html#assigning-resources-json">Assigning
         * resources programmatically</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/CreateBackupSelection">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBackupSelectionOutcome CreateBackupSelection(const Model::CreateBackupSelectionRequest& request) const;


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
         * <p>Creates a report plan. A report plan is a document that contains information
         * about the contents of the report and where Backup will deliver it.</p> <p>If you
         * call <code>CreateReportPlan</code> with a plan that already exists, you receive
         * an <code>AlreadyExistsException</code> exception.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/CreateReportPlan">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateReportPlanOutcome CreateReportPlan(const Model::CreateReportPlanRequest& request) const;


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
         * <p>Deletes the resource selection associated with a backup plan that is
         * specified by the <code>SelectionId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/DeleteBackupSelection">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBackupSelectionOutcome DeleteBackupSelection(const Model::DeleteBackupSelectionRequest& request) const;


        /**
         * <p>Deletes the backup vault identified by its name. A vault can be deleted only
         * if it is empty.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/DeleteBackupVault">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBackupVaultOutcome DeleteBackupVault(const Model::DeleteBackupVaultRequest& request) const;


        /**
         * <p>Deletes the policy document that manages permissions on a backup
         * vault.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/DeleteBackupVaultAccessPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBackupVaultAccessPolicyOutcome DeleteBackupVaultAccessPolicy(const Model::DeleteBackupVaultAccessPolicyRequest& request) const;


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
         * <p>Deletes event notifications for the specified backup vault.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/DeleteBackupVaultNotifications">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBackupVaultNotificationsOutcome DeleteBackupVaultNotifications(const Model::DeleteBackupVaultNotificationsRequest& request) const;


        /**
         * <p>Deletes the framework specified by a framework name.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/DeleteFramework">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFrameworkOutcome DeleteFramework(const Model::DeleteFrameworkRequest& request) const;


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
         * <p>Deletes the report plan specified by a report plan name.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/DeleteReportPlan">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteReportPlanOutcome DeleteReportPlan(const Model::DeleteReportPlanRequest& request) const;


        /**
         * <p>Returns backup job details for the specified
         * <code>BackupJobId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/DescribeBackupJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBackupJobOutcome DescribeBackupJob(const Model::DescribeBackupJobRequest& request) const;


        /**
         * <p>Returns metadata about a backup vault specified by its name.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/DescribeBackupVault">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBackupVaultOutcome DescribeBackupVault(const Model::DescribeBackupVaultRequest& request) const;


        /**
         * <p>Returns metadata associated with creating a copy of a resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/DescribeCopyJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCopyJobOutcome DescribeCopyJob(const Model::DescribeCopyJobRequest& request) const;


        /**
         * <p>Returns the framework details for the specified
         * <code>FrameworkName</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/DescribeFramework">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFrameworkOutcome DescribeFramework(const Model::DescribeFrameworkRequest& request) const;


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
         * <p>Returns information about a saved resource, including the last time it was
         * backed up, its Amazon Resource Name (ARN), and the Amazon Web Services service
         * type of the saved resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/DescribeProtectedResource">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProtectedResourceOutcome DescribeProtectedResource(const Model::DescribeProtectedResourceRequest& request) const;


        /**
         * <p>Returns metadata associated with a recovery point, including ID, status,
         * encryption, and lifecycle.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/DescribeRecoveryPoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRecoveryPointOutcome DescribeRecoveryPoint(const Model::DescribeRecoveryPointRequest& request) const;


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
         * <p>Returns the details associated with creating a report as specified by its
         * <code>ReportJobId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/DescribeReportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReportJobOutcome DescribeReportJob(const Model::DescribeReportJobRequest& request) const;


        /**
         * <p>Returns a list of all report plans for an Amazon Web Services account and
         * Amazon Web Services Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/DescribeReportPlan">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReportPlanOutcome DescribeReportPlan(const Model::DescribeReportPlanRequest& request) const;


        /**
         * <p>Returns metadata associated with a restore job that is specified by a job
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/DescribeRestoreJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRestoreJobOutcome DescribeRestoreJob(const Model::DescribeRestoreJobRequest& request) const;


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
         * <p>Returns the backup plan that is specified by the plan ID as a backup
         * template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ExportBackupPlanTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::ExportBackupPlanTemplateOutcome ExportBackupPlanTemplate(const Model::ExportBackupPlanTemplateRequest& request) const;


        /**
         * <p>Returns <code>BackupPlan</code> details for the specified
         * <code>BackupPlanId</code>. The details are the body of a backup plan in JSON
         * format, in addition to plan metadata.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/GetBackupPlan">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBackupPlanOutcome GetBackupPlan(const Model::GetBackupPlanRequest& request) const;


        /**
         * <p>Returns a valid JSON document specifying a backup plan or an
         * error.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/GetBackupPlanFromJSON">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBackupPlanFromJSONOutcome GetBackupPlanFromJSON(const Model::GetBackupPlanFromJSONRequest& request) const;


        /**
         * <p>Returns the template specified by its <code>templateId</code> as a backup
         * plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/GetBackupPlanFromTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBackupPlanFromTemplateOutcome GetBackupPlanFromTemplate(const Model::GetBackupPlanFromTemplateRequest& request) const;


        /**
         * <p>Returns selection metadata and a document in JSON format that specifies a
         * list of resources that are associated with a backup plan.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/GetBackupSelection">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBackupSelectionOutcome GetBackupSelection(const Model::GetBackupSelectionRequest& request) const;


        /**
         * <p>Returns the access policy document that is associated with the named backup
         * vault.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/GetBackupVaultAccessPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBackupVaultAccessPolicyOutcome GetBackupVaultAccessPolicy(const Model::GetBackupVaultAccessPolicyRequest& request) const;


        /**
         * <p>Returns event notifications for the specified backup vault.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/GetBackupVaultNotifications">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBackupVaultNotificationsOutcome GetBackupVaultNotifications(const Model::GetBackupVaultNotificationsRequest& request) const;


        /**
         * <p>Returns a set of metadata key-value pairs that were used to create the
         * backup.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/GetRecoveryPointRestoreMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRecoveryPointRestoreMetadataOutcome GetRecoveryPointRestoreMetadata(const Model::GetRecoveryPointRestoreMetadataRequest& request) const;


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
         * <p>Returns metadata of your saved backup plan templates, including the template
         * ID, name, and the creation and deletion dates.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ListBackupPlanTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBackupPlanTemplatesOutcome ListBackupPlanTemplates(const Model::ListBackupPlanTemplatesRequest& request) const;


        /**
         * <p>Returns version metadata of your backup plans, including Amazon Resource
         * Names (ARNs), backup plan IDs, creation and deletion dates, plan names, and
         * version IDs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ListBackupPlanVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBackupPlanVersionsOutcome ListBackupPlanVersions(const Model::ListBackupPlanVersionsRequest& request) const;


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
         * <p>Returns an array containing metadata of the resources associated with the
         * target backup plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ListBackupSelections">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBackupSelectionsOutcome ListBackupSelections(const Model::ListBackupSelectionsRequest& request) const;


        /**
         * <p>Returns a list of recovery point storage containers along with information
         * about them.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ListBackupVaults">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBackupVaultsOutcome ListBackupVaults(const Model::ListBackupVaultsRequest& request) const;


        /**
         * <p>Returns metadata about your copy jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ListCopyJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCopyJobsOutcome ListCopyJobs(const Model::ListCopyJobsRequest& request) const;


        /**
         * <p>Returns a list of all frameworks for an Amazon Web Services account and
         * Amazon Web Services Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ListFrameworks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFrameworksOutcome ListFrameworks(const Model::ListFrameworksRequest& request) const;


        /**
         * <p>Returns an array of resources successfully backed up by Backup, including the
         * time the resource was saved, an Amazon Resource Name (ARN) of the resource, and
         * a resource type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ListProtectedResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProtectedResourcesOutcome ListProtectedResources(const Model::ListProtectedResourcesRequest& request) const;


        /**
         * <p>Returns detailed information about the recovery points stored in a backup
         * vault.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ListRecoveryPointsByBackupVault">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRecoveryPointsByBackupVaultOutcome ListRecoveryPointsByBackupVault(const Model::ListRecoveryPointsByBackupVaultRequest& request) const;


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
         * <p>Returns details about your report jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ListReportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReportJobsOutcome ListReportJobs(const Model::ListReportJobsRequest& request) const;


        /**
         * <p>Returns a list of your report plans. For detailed information about a single
         * report plan, use <code>DescribeReportPlan</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ListReportPlans">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReportPlansOutcome ListReportPlans(const Model::ListReportPlansRequest& request) const;


        /**
         * <p>Returns a list of jobs that Backup initiated to restore a saved resource,
         * including details about the recovery process.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ListRestoreJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRestoreJobsOutcome ListRestoreJobs(const Model::ListRestoreJobsRequest& request) const;


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
         * <p>Sets a resource-based policy that is used to manage access permissions on the
         * target backup vault. Requires a backup vault name and an access policy document
         * in JSON format.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/PutBackupVaultAccessPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutBackupVaultAccessPolicyOutcome PutBackupVaultAccessPolicy(const Model::PutBackupVaultAccessPolicyRequest& request) const;


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
         * <p>Turns on notifications on a backup vault for the specified topic and
         * events.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/PutBackupVaultNotifications">AWS
         * API Reference</a></p>
         */
        virtual Model::PutBackupVaultNotificationsOutcome PutBackupVaultNotifications(const Model::PutBackupVaultNotificationsRequest& request) const;


        /**
         * <p>Starts an on-demand backup job for the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/StartBackupJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartBackupJobOutcome StartBackupJob(const Model::StartBackupJobRequest& request) const;


        /**
         * <p>Starts a job to create a one-time copy of the specified resource.</p> <p>Does
         * not support continuous backups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/StartCopyJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartCopyJobOutcome StartCopyJob(const Model::StartCopyJobRequest& request) const;


        /**
         * <p>Starts an on-demand report job for the specified report plan.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/StartReportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartReportJobOutcome StartReportJob(const Model::StartReportJobRequest& request) const;


        /**
         * <p>Recovers the saved resource identified by an Amazon Resource Name
         * (ARN).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/StartRestoreJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartRestoreJobOutcome StartRestoreJob(const Model::StartRestoreJobRequest& request) const;


        /**
         * <p>Attempts to cancel a job to create a one-time backup of a
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/StopBackupJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopBackupJobOutcome StopBackupJob(const Model::StopBackupJobRequest& request) const;


        /**
         * <p>Assigns a set of key-value pairs to a recovery point, backup plan, or backup
         * vault identified by an Amazon Resource Name (ARN).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Removes a set of key-value pairs from a recovery point, backup plan, or
         * backup vault identified by an Amazon Resource Name (ARN)</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Updates an existing backup plan identified by its <code>backupPlanId</code>
         * with the input document in JSON format. The new version is uniquely identified
         * by a <code>VersionId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/UpdateBackupPlan">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBackupPlanOutcome UpdateBackupPlan(const Model::UpdateBackupPlanRequest& request) const;


        /**
         * <p>Updates an existing framework identified by its <code>FrameworkName</code>
         * with the input document in JSON format.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/UpdateFramework">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFrameworkOutcome UpdateFramework(const Model::UpdateFrameworkRequest& request) const;


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
         * <p>Updates an existing report plan identified by its <code>ReportPlanName</code>
         * with the input document in JSON format.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/UpdateReportPlan">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateReportPlanOutcome UpdateReportPlan(const Model::UpdateReportPlanRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<BackupEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const BackupClientConfiguration& clientConfiguration);

      BackupClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<BackupEndpointProviderBase> m_endpointProvider;
  };

} // namespace Backup
} // namespace Aws
