/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/backup/BackupServiceClientModel.h>

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
  class AWS_BACKUP_API BackupClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<BackupClient>
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

        /**
         * <p>This action removes the specified legal hold on a recovery point. This action
         * can only be performed by a user with sufficient permissions.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/CancelLegalHold">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelLegalHoldOutcome CancelLegalHold(const Model::CancelLegalHoldRequest& request) const;

        /**
         * A Callable wrapper for CancelLegalHold that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelLegalHoldOutcomeCallable CancelLegalHoldCallable(const Model::CancelLegalHoldRequest& request) const;

        /**
         * An Async wrapper for CancelLegalHold that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelLegalHoldAsync(const Model::CancelLegalHoldRequest& request, const CancelLegalHoldResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>This action creates a legal hold on a recovery point (backup). A legal hold
         * is a restraint on altering or deleting a backup until an authorized user cancels
         * the legal hold. Any actions to delete or disassociate a recovery point will fail
         * with an error if one or more active legal holds are on the recovery
         * point.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/CreateLegalHold">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLegalHoldOutcome CreateLegalHold(const Model::CreateLegalHoldRequest& request) const;

        /**
         * A Callable wrapper for CreateLegalHold that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLegalHoldOutcomeCallable CreateLegalHoldCallable(const Model::CreateLegalHoldRequest& request) const;

        /**
         * An Async wrapper for CreateLegalHold that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLegalHoldAsync(const Model::CreateLegalHoldRequest& request, const CreateLegalHoldResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * the existing continuous backup and stops future continuous backup.</p> <p>When
         * an IAM role's permissions are insufficient to call this API, the service sends
         * back an HTTP 200 response with an empty HTTP body, but the recovery point is not
         * deleted. Instead, it enters an <code>EXPIRED</code> state.</p> <p>
         * <code>EXPIRED</code> recovery points can be deleted with this API once the IAM
         * role has the <code>iam:CreateServiceLinkedRole</code> action. To learn more
         * about adding this role, see <a
         * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/deleting-backups.html#deleting-backups-troubleshooting">
         * Troubleshooting manual deletions</a>.</p> <p>If the user or role is deleted or
         * the permission within the role is removed, the deletion will not be successful
         * and will enter an <code>EXPIRED</code> state.</p><p><h3>See Also:</h3>   <a
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
         * <p>This action to a specific child (nested) recovery point removes the
         * relationship between the specified recovery point and its parent (composite)
         * recovery point.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/DisassociateRecoveryPointFromParent">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateRecoveryPointFromParentOutcome DisassociateRecoveryPointFromParent(const Model::DisassociateRecoveryPointFromParentRequest& request) const;

        /**
         * A Callable wrapper for DisassociateRecoveryPointFromParent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateRecoveryPointFromParentOutcomeCallable DisassociateRecoveryPointFromParentCallable(const Model::DisassociateRecoveryPointFromParentRequest& request) const;

        /**
         * An Async wrapper for DisassociateRecoveryPointFromParent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateRecoveryPointFromParentAsync(const Model::DisassociateRecoveryPointFromParentRequest& request, const DisassociateRecoveryPointFromParentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>This action returns details for a specified legal hold. The details are the
         * body of a legal hold in JSON format, in addition to metadata.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/GetLegalHold">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLegalHoldOutcome GetLegalHold(const Model::GetLegalHoldRequest& request) const;

        /**
         * A Callable wrapper for GetLegalHold that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLegalHoldOutcomeCallable GetLegalHoldCallable(const Model::GetLegalHoldRequest& request) const;

        /**
         * An Async wrapper for GetLegalHold that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLegalHoldAsync(const Model::GetLegalHoldRequest& request, const GetLegalHoldResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>This action returns metadata about active and previous legal
         * holds.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ListLegalHolds">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLegalHoldsOutcome ListLegalHolds(const Model::ListLegalHoldsRequest& request) const;

        /**
         * A Callable wrapper for ListLegalHolds that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListLegalHoldsOutcomeCallable ListLegalHoldsCallable(const Model::ListLegalHoldsRequest& request) const;

        /**
         * An Async wrapper for ListLegalHolds that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListLegalHoldsAsync(const Model::ListLegalHoldsRequest& request, const ListLegalHoldsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>This action returns recovery point ARNs (Amazon Resource Names) of the
         * specified legal hold.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ListRecoveryPointsByLegalHold">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRecoveryPointsByLegalHoldOutcome ListRecoveryPointsByLegalHold(const Model::ListRecoveryPointsByLegalHoldRequest& request) const;

        /**
         * A Callable wrapper for ListRecoveryPointsByLegalHold that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRecoveryPointsByLegalHoldOutcomeCallable ListRecoveryPointsByLegalHoldCallable(const Model::ListRecoveryPointsByLegalHoldRequest& request) const;

        /**
         * An Async wrapper for ListRecoveryPointsByLegalHold that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRecoveryPointsByLegalHoldAsync(const Model::ListRecoveryPointsByLegalHoldRequest& request, const ListRecoveryPointsByLegalHoldResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Attempts to cancel a job to create a one-time backup of a resource.</p>
         * <p>This action is not supported for the following services: Amazon FSx for
         * Windows File Server, Amazon FSx for Lustre, FSx for ONTAP , Amazon FSx for
         * OpenZFS, Amazon DocumentDB (with MongoDB compatibility), Amazon RDS, Amazon
         * Aurora, and Amazon Neptune.</p><p><h3>See Also:</h3>   <a
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
      std::shared_ptr<BackupEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<BackupClient>;
      void init(const BackupClientConfiguration& clientConfiguration);

      BackupClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<BackupEndpointProviderBase> m_endpointProvider;
  };

} // namespace Backup
} // namespace Aws
