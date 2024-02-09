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
#include <aws/backup/model/GetSupportedResourceTypesRequest.h>

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
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef BackupClientConfiguration ClientConfigurationType;
      typedef BackupEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BackupClient(const Aws::Backup::BackupClientConfiguration& clientConfiguration = Aws::Backup::BackupClientConfiguration(),
                     std::shared_ptr<BackupEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BackupClient(const Aws::Auth::AWSCredentials& credentials,
                     std::shared_ptr<BackupEndpointProviderBase> endpointProvider = nullptr,
                     const Aws::Backup::BackupClientConfiguration& clientConfiguration = Aws::Backup::BackupClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        BackupClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                     std::shared_ptr<BackupEndpointProviderBase> endpointProvider = nullptr,
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
        template<typename CancelLegalHoldRequestT = Model::CancelLegalHoldRequest>
        Model::CancelLegalHoldOutcomeCallable CancelLegalHoldCallable(const CancelLegalHoldRequestT& request) const
        {
            return SubmitCallable(&BackupClient::CancelLegalHold, request);
        }

        /**
         * An Async wrapper for CancelLegalHold that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelLegalHoldRequestT = Model::CancelLegalHoldRequest>
        void CancelLegalHoldAsync(const CancelLegalHoldRequestT& request, const CancelLegalHoldResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::CancelLegalHold, request, handler, context);
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
         * A Callable wrapper for CreateBackupPlan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateBackupPlanRequestT = Model::CreateBackupPlanRequest>
        Model::CreateBackupPlanOutcomeCallable CreateBackupPlanCallable(const CreateBackupPlanRequestT& request) const
        {
            return SubmitCallable(&BackupClient::CreateBackupPlan, request);
        }

        /**
         * An Async wrapper for CreateBackupPlan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateBackupPlanRequestT = Model::CreateBackupPlanRequest>
        void CreateBackupPlanAsync(const CreateBackupPlanRequestT& request, const CreateBackupPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::CreateBackupPlan, request, handler, context);
        }

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
        template<typename CreateBackupSelectionRequestT = Model::CreateBackupSelectionRequest>
        Model::CreateBackupSelectionOutcomeCallable CreateBackupSelectionCallable(const CreateBackupSelectionRequestT& request) const
        {
            return SubmitCallable(&BackupClient::CreateBackupSelection, request);
        }

        /**
         * An Async wrapper for CreateBackupSelection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateBackupSelectionRequestT = Model::CreateBackupSelectionRequest>
        void CreateBackupSelectionAsync(const CreateBackupSelectionRequestT& request, const CreateBackupSelectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::CreateBackupSelection, request, handler, context);
        }

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
        template<typename CreateBackupVaultRequestT = Model::CreateBackupVaultRequest>
        Model::CreateBackupVaultOutcomeCallable CreateBackupVaultCallable(const CreateBackupVaultRequestT& request) const
        {
            return SubmitCallable(&BackupClient::CreateBackupVault, request);
        }

        /**
         * An Async wrapper for CreateBackupVault that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateBackupVaultRequestT = Model::CreateBackupVaultRequest>
        void CreateBackupVaultAsync(const CreateBackupVaultRequestT& request, const CreateBackupVaultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::CreateBackupVault, request, handler, context);
        }

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
        template<typename CreateFrameworkRequestT = Model::CreateFrameworkRequest>
        Model::CreateFrameworkOutcomeCallable CreateFrameworkCallable(const CreateFrameworkRequestT& request) const
        {
            return SubmitCallable(&BackupClient::CreateFramework, request);
        }

        /**
         * An Async wrapper for CreateFramework that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateFrameworkRequestT = Model::CreateFrameworkRequest>
        void CreateFrameworkAsync(const CreateFrameworkRequestT& request, const CreateFrameworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::CreateFramework, request, handler, context);
        }

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
        template<typename CreateLegalHoldRequestT = Model::CreateLegalHoldRequest>
        Model::CreateLegalHoldOutcomeCallable CreateLegalHoldCallable(const CreateLegalHoldRequestT& request) const
        {
            return SubmitCallable(&BackupClient::CreateLegalHold, request);
        }

        /**
         * An Async wrapper for CreateLegalHold that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateLegalHoldRequestT = Model::CreateLegalHoldRequest>
        void CreateLegalHoldAsync(const CreateLegalHoldRequestT& request, const CreateLegalHoldResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::CreateLegalHold, request, handler, context);
        }

        /**
         * <p>This request creates a logical container to where backups may be copied.</p>
         * <p>This request includes a name, the Region, the maximum number of retention
         * days, the minimum number of retention days, and optionally can include tags and
         * a creator request ID.</p>  <p>Do not include sensitive data, such as
         * passport numbers, in the name of a backup vault.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/CreateLogicallyAirGappedBackupVault">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLogicallyAirGappedBackupVaultOutcome CreateLogicallyAirGappedBackupVault(const Model::CreateLogicallyAirGappedBackupVaultRequest& request) const;

        /**
         * A Callable wrapper for CreateLogicallyAirGappedBackupVault that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateLogicallyAirGappedBackupVaultRequestT = Model::CreateLogicallyAirGappedBackupVaultRequest>
        Model::CreateLogicallyAirGappedBackupVaultOutcomeCallable CreateLogicallyAirGappedBackupVaultCallable(const CreateLogicallyAirGappedBackupVaultRequestT& request) const
        {
            return SubmitCallable(&BackupClient::CreateLogicallyAirGappedBackupVault, request);
        }

        /**
         * An Async wrapper for CreateLogicallyAirGappedBackupVault that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateLogicallyAirGappedBackupVaultRequestT = Model::CreateLogicallyAirGappedBackupVaultRequest>
        void CreateLogicallyAirGappedBackupVaultAsync(const CreateLogicallyAirGappedBackupVaultRequestT& request, const CreateLogicallyAirGappedBackupVaultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::CreateLogicallyAirGappedBackupVault, request, handler, context);
        }

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
        template<typename CreateReportPlanRequestT = Model::CreateReportPlanRequest>
        Model::CreateReportPlanOutcomeCallable CreateReportPlanCallable(const CreateReportPlanRequestT& request) const
        {
            return SubmitCallable(&BackupClient::CreateReportPlan, request);
        }

        /**
         * An Async wrapper for CreateReportPlan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateReportPlanRequestT = Model::CreateReportPlanRequest>
        void CreateReportPlanAsync(const CreateReportPlanRequestT& request, const CreateReportPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::CreateReportPlan, request, handler, context);
        }

        /**
         * <p>This is the first of two steps to create a restore testing plan; once this
         * request is successful, finish the procedure with request
         * CreateRestoreTestingSelection.</p> <p>You must include the parameter
         * RestoreTestingPlan. You may optionally include CreatorRequestId and
         * Tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/CreateRestoreTestingPlan">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRestoreTestingPlanOutcome CreateRestoreTestingPlan(const Model::CreateRestoreTestingPlanRequest& request) const;

        /**
         * A Callable wrapper for CreateRestoreTestingPlan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateRestoreTestingPlanRequestT = Model::CreateRestoreTestingPlanRequest>
        Model::CreateRestoreTestingPlanOutcomeCallable CreateRestoreTestingPlanCallable(const CreateRestoreTestingPlanRequestT& request) const
        {
            return SubmitCallable(&BackupClient::CreateRestoreTestingPlan, request);
        }

        /**
         * An Async wrapper for CreateRestoreTestingPlan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateRestoreTestingPlanRequestT = Model::CreateRestoreTestingPlanRequest>
        void CreateRestoreTestingPlanAsync(const CreateRestoreTestingPlanRequestT& request, const CreateRestoreTestingPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::CreateRestoreTestingPlan, request, handler, context);
        }

        /**
         * <p>This request can be sent after CreateRestoreTestingPlan request returns
         * successfully. This is the second part of creating a resource testing plan, and
         * it must be completed sequentially.</p> <p>This consists of
         * <code>RestoreTestingSelectionName</code>, <code>ProtectedResourceType</code>,
         * and one of the following:</p> <ul> <li> <p> <code>ProtectedResourceArns</code>
         * </p> </li> <li> <p> <code>ProtectedResourceConditions</code> </p> </li> </ul>
         * <p>Each protected resource type can have one single value.</p> <p>A restore
         * testing selection can include a wildcard value ("*") for
         * <code>ProtectedResourceArns</code> along with
         * <code>ProtectedResourceConditions</code>. Alternatively, you can include up to
         * 30 specific protected resource ARNs in <code>ProtectedResourceArns</code>.</p>
         * <p>Cannot select by both protected resource types AND specific ARNs. Request
         * will fail if both are included.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/CreateRestoreTestingSelection">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRestoreTestingSelectionOutcome CreateRestoreTestingSelection(const Model::CreateRestoreTestingSelectionRequest& request) const;

        /**
         * A Callable wrapper for CreateRestoreTestingSelection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateRestoreTestingSelectionRequestT = Model::CreateRestoreTestingSelectionRequest>
        Model::CreateRestoreTestingSelectionOutcomeCallable CreateRestoreTestingSelectionCallable(const CreateRestoreTestingSelectionRequestT& request) const
        {
            return SubmitCallable(&BackupClient::CreateRestoreTestingSelection, request);
        }

        /**
         * An Async wrapper for CreateRestoreTestingSelection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateRestoreTestingSelectionRequestT = Model::CreateRestoreTestingSelectionRequest>
        void CreateRestoreTestingSelectionAsync(const CreateRestoreTestingSelectionRequestT& request, const CreateRestoreTestingSelectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::CreateRestoreTestingSelection, request, handler, context);
        }

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
        template<typename DeleteBackupPlanRequestT = Model::DeleteBackupPlanRequest>
        Model::DeleteBackupPlanOutcomeCallable DeleteBackupPlanCallable(const DeleteBackupPlanRequestT& request) const
        {
            return SubmitCallable(&BackupClient::DeleteBackupPlan, request);
        }

        /**
         * An Async wrapper for DeleteBackupPlan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteBackupPlanRequestT = Model::DeleteBackupPlanRequest>
        void DeleteBackupPlanAsync(const DeleteBackupPlanRequestT& request, const DeleteBackupPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::DeleteBackupPlan, request, handler, context);
        }

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
        template<typename DeleteBackupSelectionRequestT = Model::DeleteBackupSelectionRequest>
        Model::DeleteBackupSelectionOutcomeCallable DeleteBackupSelectionCallable(const DeleteBackupSelectionRequestT& request) const
        {
            return SubmitCallable(&BackupClient::DeleteBackupSelection, request);
        }

        /**
         * An Async wrapper for DeleteBackupSelection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteBackupSelectionRequestT = Model::DeleteBackupSelectionRequest>
        void DeleteBackupSelectionAsync(const DeleteBackupSelectionRequestT& request, const DeleteBackupSelectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::DeleteBackupSelection, request, handler, context);
        }

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
        template<typename DeleteBackupVaultRequestT = Model::DeleteBackupVaultRequest>
        Model::DeleteBackupVaultOutcomeCallable DeleteBackupVaultCallable(const DeleteBackupVaultRequestT& request) const
        {
            return SubmitCallable(&BackupClient::DeleteBackupVault, request);
        }

        /**
         * An Async wrapper for DeleteBackupVault that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteBackupVaultRequestT = Model::DeleteBackupVaultRequest>
        void DeleteBackupVaultAsync(const DeleteBackupVaultRequestT& request, const DeleteBackupVaultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::DeleteBackupVault, request, handler, context);
        }

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
        template<typename DeleteBackupVaultAccessPolicyRequestT = Model::DeleteBackupVaultAccessPolicyRequest>
        Model::DeleteBackupVaultAccessPolicyOutcomeCallable DeleteBackupVaultAccessPolicyCallable(const DeleteBackupVaultAccessPolicyRequestT& request) const
        {
            return SubmitCallable(&BackupClient::DeleteBackupVaultAccessPolicy, request);
        }

        /**
         * An Async wrapper for DeleteBackupVaultAccessPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteBackupVaultAccessPolicyRequestT = Model::DeleteBackupVaultAccessPolicyRequest>
        void DeleteBackupVaultAccessPolicyAsync(const DeleteBackupVaultAccessPolicyRequestT& request, const DeleteBackupVaultAccessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::DeleteBackupVaultAccessPolicy, request, handler, context);
        }

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
        template<typename DeleteBackupVaultLockConfigurationRequestT = Model::DeleteBackupVaultLockConfigurationRequest>
        Model::DeleteBackupVaultLockConfigurationOutcomeCallable DeleteBackupVaultLockConfigurationCallable(const DeleteBackupVaultLockConfigurationRequestT& request) const
        {
            return SubmitCallable(&BackupClient::DeleteBackupVaultLockConfiguration, request);
        }

        /**
         * An Async wrapper for DeleteBackupVaultLockConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteBackupVaultLockConfigurationRequestT = Model::DeleteBackupVaultLockConfigurationRequest>
        void DeleteBackupVaultLockConfigurationAsync(const DeleteBackupVaultLockConfigurationRequestT& request, const DeleteBackupVaultLockConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::DeleteBackupVaultLockConfiguration, request, handler, context);
        }

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
        template<typename DeleteBackupVaultNotificationsRequestT = Model::DeleteBackupVaultNotificationsRequest>
        Model::DeleteBackupVaultNotificationsOutcomeCallable DeleteBackupVaultNotificationsCallable(const DeleteBackupVaultNotificationsRequestT& request) const
        {
            return SubmitCallable(&BackupClient::DeleteBackupVaultNotifications, request);
        }

        /**
         * An Async wrapper for DeleteBackupVaultNotifications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteBackupVaultNotificationsRequestT = Model::DeleteBackupVaultNotificationsRequest>
        void DeleteBackupVaultNotificationsAsync(const DeleteBackupVaultNotificationsRequestT& request, const DeleteBackupVaultNotificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::DeleteBackupVaultNotifications, request, handler, context);
        }

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
        template<typename DeleteFrameworkRequestT = Model::DeleteFrameworkRequest>
        Model::DeleteFrameworkOutcomeCallable DeleteFrameworkCallable(const DeleteFrameworkRequestT& request) const
        {
            return SubmitCallable(&BackupClient::DeleteFramework, request);
        }

        /**
         * An Async wrapper for DeleteFramework that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteFrameworkRequestT = Model::DeleteFrameworkRequest>
        void DeleteFrameworkAsync(const DeleteFrameworkRequestT& request, const DeleteFrameworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::DeleteFramework, request, handler, context);
        }

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
        template<typename DeleteRecoveryPointRequestT = Model::DeleteRecoveryPointRequest>
        Model::DeleteRecoveryPointOutcomeCallable DeleteRecoveryPointCallable(const DeleteRecoveryPointRequestT& request) const
        {
            return SubmitCallable(&BackupClient::DeleteRecoveryPoint, request);
        }

        /**
         * An Async wrapper for DeleteRecoveryPoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRecoveryPointRequestT = Model::DeleteRecoveryPointRequest>
        void DeleteRecoveryPointAsync(const DeleteRecoveryPointRequestT& request, const DeleteRecoveryPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::DeleteRecoveryPoint, request, handler, context);
        }

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
        template<typename DeleteReportPlanRequestT = Model::DeleteReportPlanRequest>
        Model::DeleteReportPlanOutcomeCallable DeleteReportPlanCallable(const DeleteReportPlanRequestT& request) const
        {
            return SubmitCallable(&BackupClient::DeleteReportPlan, request);
        }

        /**
         * An Async wrapper for DeleteReportPlan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteReportPlanRequestT = Model::DeleteReportPlanRequest>
        void DeleteReportPlanAsync(const DeleteReportPlanRequestT& request, const DeleteReportPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::DeleteReportPlan, request, handler, context);
        }

        /**
         * <p>This request deletes the specified restore testing plan.</p> <p>Deletion can
         * only successfully occur if all associated restore testing selections are deleted
         * first.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/DeleteRestoreTestingPlan">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRestoreTestingPlanOutcome DeleteRestoreTestingPlan(const Model::DeleteRestoreTestingPlanRequest& request) const;

        /**
         * A Callable wrapper for DeleteRestoreTestingPlan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRestoreTestingPlanRequestT = Model::DeleteRestoreTestingPlanRequest>
        Model::DeleteRestoreTestingPlanOutcomeCallable DeleteRestoreTestingPlanCallable(const DeleteRestoreTestingPlanRequestT& request) const
        {
            return SubmitCallable(&BackupClient::DeleteRestoreTestingPlan, request);
        }

        /**
         * An Async wrapper for DeleteRestoreTestingPlan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRestoreTestingPlanRequestT = Model::DeleteRestoreTestingPlanRequest>
        void DeleteRestoreTestingPlanAsync(const DeleteRestoreTestingPlanRequestT& request, const DeleteRestoreTestingPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::DeleteRestoreTestingPlan, request, handler, context);
        }

        /**
         * <p>Input the Restore Testing Plan name and Restore Testing Selection name.</p>
         * <p>All testing selections associated with a restore testing plan must be deleted
         * before the restore testing plan can be deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/DeleteRestoreTestingSelection">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRestoreTestingSelectionOutcome DeleteRestoreTestingSelection(const Model::DeleteRestoreTestingSelectionRequest& request) const;

        /**
         * A Callable wrapper for DeleteRestoreTestingSelection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRestoreTestingSelectionRequestT = Model::DeleteRestoreTestingSelectionRequest>
        Model::DeleteRestoreTestingSelectionOutcomeCallable DeleteRestoreTestingSelectionCallable(const DeleteRestoreTestingSelectionRequestT& request) const
        {
            return SubmitCallable(&BackupClient::DeleteRestoreTestingSelection, request);
        }

        /**
         * An Async wrapper for DeleteRestoreTestingSelection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRestoreTestingSelectionRequestT = Model::DeleteRestoreTestingSelectionRequest>
        void DeleteRestoreTestingSelectionAsync(const DeleteRestoreTestingSelectionRequestT& request, const DeleteRestoreTestingSelectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::DeleteRestoreTestingSelection, request, handler, context);
        }

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
        template<typename DescribeBackupJobRequestT = Model::DescribeBackupJobRequest>
        Model::DescribeBackupJobOutcomeCallable DescribeBackupJobCallable(const DescribeBackupJobRequestT& request) const
        {
            return SubmitCallable(&BackupClient::DescribeBackupJob, request);
        }

        /**
         * An Async wrapper for DescribeBackupJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeBackupJobRequestT = Model::DescribeBackupJobRequest>
        void DescribeBackupJobAsync(const DescribeBackupJobRequestT& request, const DescribeBackupJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::DescribeBackupJob, request, handler, context);
        }

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
        template<typename DescribeBackupVaultRequestT = Model::DescribeBackupVaultRequest>
        Model::DescribeBackupVaultOutcomeCallable DescribeBackupVaultCallable(const DescribeBackupVaultRequestT& request) const
        {
            return SubmitCallable(&BackupClient::DescribeBackupVault, request);
        }

        /**
         * An Async wrapper for DescribeBackupVault that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeBackupVaultRequestT = Model::DescribeBackupVaultRequest>
        void DescribeBackupVaultAsync(const DescribeBackupVaultRequestT& request, const DescribeBackupVaultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::DescribeBackupVault, request, handler, context);
        }

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
        template<typename DescribeCopyJobRequestT = Model::DescribeCopyJobRequest>
        Model::DescribeCopyJobOutcomeCallable DescribeCopyJobCallable(const DescribeCopyJobRequestT& request) const
        {
            return SubmitCallable(&BackupClient::DescribeCopyJob, request);
        }

        /**
         * An Async wrapper for DescribeCopyJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeCopyJobRequestT = Model::DescribeCopyJobRequest>
        void DescribeCopyJobAsync(const DescribeCopyJobRequestT& request, const DescribeCopyJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::DescribeCopyJob, request, handler, context);
        }

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
        template<typename DescribeFrameworkRequestT = Model::DescribeFrameworkRequest>
        Model::DescribeFrameworkOutcomeCallable DescribeFrameworkCallable(const DescribeFrameworkRequestT& request) const
        {
            return SubmitCallable(&BackupClient::DescribeFramework, request);
        }

        /**
         * An Async wrapper for DescribeFramework that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeFrameworkRequestT = Model::DescribeFrameworkRequest>
        void DescribeFrameworkAsync(const DescribeFrameworkRequestT& request, const DescribeFrameworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::DescribeFramework, request, handler, context);
        }

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
        template<typename DescribeGlobalSettingsRequestT = Model::DescribeGlobalSettingsRequest>
        Model::DescribeGlobalSettingsOutcomeCallable DescribeGlobalSettingsCallable(const DescribeGlobalSettingsRequestT& request) const
        {
            return SubmitCallable(&BackupClient::DescribeGlobalSettings, request);
        }

        /**
         * An Async wrapper for DescribeGlobalSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeGlobalSettingsRequestT = Model::DescribeGlobalSettingsRequest>
        void DescribeGlobalSettingsAsync(const DescribeGlobalSettingsRequestT& request, const DescribeGlobalSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::DescribeGlobalSettings, request, handler, context);
        }

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
        template<typename DescribeProtectedResourceRequestT = Model::DescribeProtectedResourceRequest>
        Model::DescribeProtectedResourceOutcomeCallable DescribeProtectedResourceCallable(const DescribeProtectedResourceRequestT& request) const
        {
            return SubmitCallable(&BackupClient::DescribeProtectedResource, request);
        }

        /**
         * An Async wrapper for DescribeProtectedResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeProtectedResourceRequestT = Model::DescribeProtectedResourceRequest>
        void DescribeProtectedResourceAsync(const DescribeProtectedResourceRequestT& request, const DescribeProtectedResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::DescribeProtectedResource, request, handler, context);
        }

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
        template<typename DescribeRecoveryPointRequestT = Model::DescribeRecoveryPointRequest>
        Model::DescribeRecoveryPointOutcomeCallable DescribeRecoveryPointCallable(const DescribeRecoveryPointRequestT& request) const
        {
            return SubmitCallable(&BackupClient::DescribeRecoveryPoint, request);
        }

        /**
         * An Async wrapper for DescribeRecoveryPoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeRecoveryPointRequestT = Model::DescribeRecoveryPointRequest>
        void DescribeRecoveryPointAsync(const DescribeRecoveryPointRequestT& request, const DescribeRecoveryPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::DescribeRecoveryPoint, request, handler, context);
        }

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
        template<typename DescribeRegionSettingsRequestT = Model::DescribeRegionSettingsRequest>
        Model::DescribeRegionSettingsOutcomeCallable DescribeRegionSettingsCallable(const DescribeRegionSettingsRequestT& request) const
        {
            return SubmitCallable(&BackupClient::DescribeRegionSettings, request);
        }

        /**
         * An Async wrapper for DescribeRegionSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeRegionSettingsRequestT = Model::DescribeRegionSettingsRequest>
        void DescribeRegionSettingsAsync(const DescribeRegionSettingsRequestT& request, const DescribeRegionSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::DescribeRegionSettings, request, handler, context);
        }

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
        template<typename DescribeReportJobRequestT = Model::DescribeReportJobRequest>
        Model::DescribeReportJobOutcomeCallable DescribeReportJobCallable(const DescribeReportJobRequestT& request) const
        {
            return SubmitCallable(&BackupClient::DescribeReportJob, request);
        }

        /**
         * An Async wrapper for DescribeReportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeReportJobRequestT = Model::DescribeReportJobRequest>
        void DescribeReportJobAsync(const DescribeReportJobRequestT& request, const DescribeReportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::DescribeReportJob, request, handler, context);
        }

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
        template<typename DescribeReportPlanRequestT = Model::DescribeReportPlanRequest>
        Model::DescribeReportPlanOutcomeCallable DescribeReportPlanCallable(const DescribeReportPlanRequestT& request) const
        {
            return SubmitCallable(&BackupClient::DescribeReportPlan, request);
        }

        /**
         * An Async wrapper for DescribeReportPlan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeReportPlanRequestT = Model::DescribeReportPlanRequest>
        void DescribeReportPlanAsync(const DescribeReportPlanRequestT& request, const DescribeReportPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::DescribeReportPlan, request, handler, context);
        }

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
        template<typename DescribeRestoreJobRequestT = Model::DescribeRestoreJobRequest>
        Model::DescribeRestoreJobOutcomeCallable DescribeRestoreJobCallable(const DescribeRestoreJobRequestT& request) const
        {
            return SubmitCallable(&BackupClient::DescribeRestoreJob, request);
        }

        /**
         * An Async wrapper for DescribeRestoreJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeRestoreJobRequestT = Model::DescribeRestoreJobRequest>
        void DescribeRestoreJobAsync(const DescribeRestoreJobRequestT& request, const DescribeRestoreJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::DescribeRestoreJob, request, handler, context);
        }

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
        template<typename DisassociateRecoveryPointRequestT = Model::DisassociateRecoveryPointRequest>
        Model::DisassociateRecoveryPointOutcomeCallable DisassociateRecoveryPointCallable(const DisassociateRecoveryPointRequestT& request) const
        {
            return SubmitCallable(&BackupClient::DisassociateRecoveryPoint, request);
        }

        /**
         * An Async wrapper for DisassociateRecoveryPoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateRecoveryPointRequestT = Model::DisassociateRecoveryPointRequest>
        void DisassociateRecoveryPointAsync(const DisassociateRecoveryPointRequestT& request, const DisassociateRecoveryPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::DisassociateRecoveryPoint, request, handler, context);
        }

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
        template<typename DisassociateRecoveryPointFromParentRequestT = Model::DisassociateRecoveryPointFromParentRequest>
        Model::DisassociateRecoveryPointFromParentOutcomeCallable DisassociateRecoveryPointFromParentCallable(const DisassociateRecoveryPointFromParentRequestT& request) const
        {
            return SubmitCallable(&BackupClient::DisassociateRecoveryPointFromParent, request);
        }

        /**
         * An Async wrapper for DisassociateRecoveryPointFromParent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateRecoveryPointFromParentRequestT = Model::DisassociateRecoveryPointFromParentRequest>
        void DisassociateRecoveryPointFromParentAsync(const DisassociateRecoveryPointFromParentRequestT& request, const DisassociateRecoveryPointFromParentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::DisassociateRecoveryPointFromParent, request, handler, context);
        }

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
        template<typename ExportBackupPlanTemplateRequestT = Model::ExportBackupPlanTemplateRequest>
        Model::ExportBackupPlanTemplateOutcomeCallable ExportBackupPlanTemplateCallable(const ExportBackupPlanTemplateRequestT& request) const
        {
            return SubmitCallable(&BackupClient::ExportBackupPlanTemplate, request);
        }

        /**
         * An Async wrapper for ExportBackupPlanTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ExportBackupPlanTemplateRequestT = Model::ExportBackupPlanTemplateRequest>
        void ExportBackupPlanTemplateAsync(const ExportBackupPlanTemplateRequestT& request, const ExportBackupPlanTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::ExportBackupPlanTemplate, request, handler, context);
        }

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
        template<typename GetBackupPlanRequestT = Model::GetBackupPlanRequest>
        Model::GetBackupPlanOutcomeCallable GetBackupPlanCallable(const GetBackupPlanRequestT& request) const
        {
            return SubmitCallable(&BackupClient::GetBackupPlan, request);
        }

        /**
         * An Async wrapper for GetBackupPlan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetBackupPlanRequestT = Model::GetBackupPlanRequest>
        void GetBackupPlanAsync(const GetBackupPlanRequestT& request, const GetBackupPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::GetBackupPlan, request, handler, context);
        }

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
        template<typename GetBackupPlanFromJSONRequestT = Model::GetBackupPlanFromJSONRequest>
        Model::GetBackupPlanFromJSONOutcomeCallable GetBackupPlanFromJSONCallable(const GetBackupPlanFromJSONRequestT& request) const
        {
            return SubmitCallable(&BackupClient::GetBackupPlanFromJSON, request);
        }

        /**
         * An Async wrapper for GetBackupPlanFromJSON that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetBackupPlanFromJSONRequestT = Model::GetBackupPlanFromJSONRequest>
        void GetBackupPlanFromJSONAsync(const GetBackupPlanFromJSONRequestT& request, const GetBackupPlanFromJSONResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::GetBackupPlanFromJSON, request, handler, context);
        }

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
        template<typename GetBackupPlanFromTemplateRequestT = Model::GetBackupPlanFromTemplateRequest>
        Model::GetBackupPlanFromTemplateOutcomeCallable GetBackupPlanFromTemplateCallable(const GetBackupPlanFromTemplateRequestT& request) const
        {
            return SubmitCallable(&BackupClient::GetBackupPlanFromTemplate, request);
        }

        /**
         * An Async wrapper for GetBackupPlanFromTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetBackupPlanFromTemplateRequestT = Model::GetBackupPlanFromTemplateRequest>
        void GetBackupPlanFromTemplateAsync(const GetBackupPlanFromTemplateRequestT& request, const GetBackupPlanFromTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::GetBackupPlanFromTemplate, request, handler, context);
        }

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
        template<typename GetBackupSelectionRequestT = Model::GetBackupSelectionRequest>
        Model::GetBackupSelectionOutcomeCallable GetBackupSelectionCallable(const GetBackupSelectionRequestT& request) const
        {
            return SubmitCallable(&BackupClient::GetBackupSelection, request);
        }

        /**
         * An Async wrapper for GetBackupSelection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetBackupSelectionRequestT = Model::GetBackupSelectionRequest>
        void GetBackupSelectionAsync(const GetBackupSelectionRequestT& request, const GetBackupSelectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::GetBackupSelection, request, handler, context);
        }

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
        template<typename GetBackupVaultAccessPolicyRequestT = Model::GetBackupVaultAccessPolicyRequest>
        Model::GetBackupVaultAccessPolicyOutcomeCallable GetBackupVaultAccessPolicyCallable(const GetBackupVaultAccessPolicyRequestT& request) const
        {
            return SubmitCallable(&BackupClient::GetBackupVaultAccessPolicy, request);
        }

        /**
         * An Async wrapper for GetBackupVaultAccessPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetBackupVaultAccessPolicyRequestT = Model::GetBackupVaultAccessPolicyRequest>
        void GetBackupVaultAccessPolicyAsync(const GetBackupVaultAccessPolicyRequestT& request, const GetBackupVaultAccessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::GetBackupVaultAccessPolicy, request, handler, context);
        }

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
        template<typename GetBackupVaultNotificationsRequestT = Model::GetBackupVaultNotificationsRequest>
        Model::GetBackupVaultNotificationsOutcomeCallable GetBackupVaultNotificationsCallable(const GetBackupVaultNotificationsRequestT& request) const
        {
            return SubmitCallable(&BackupClient::GetBackupVaultNotifications, request);
        }

        /**
         * An Async wrapper for GetBackupVaultNotifications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetBackupVaultNotificationsRequestT = Model::GetBackupVaultNotificationsRequest>
        void GetBackupVaultNotificationsAsync(const GetBackupVaultNotificationsRequestT& request, const GetBackupVaultNotificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::GetBackupVaultNotifications, request, handler, context);
        }

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
        template<typename GetLegalHoldRequestT = Model::GetLegalHoldRequest>
        Model::GetLegalHoldOutcomeCallable GetLegalHoldCallable(const GetLegalHoldRequestT& request) const
        {
            return SubmitCallable(&BackupClient::GetLegalHold, request);
        }

        /**
         * An Async wrapper for GetLegalHold that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetLegalHoldRequestT = Model::GetLegalHoldRequest>
        void GetLegalHoldAsync(const GetLegalHoldRequestT& request, const GetLegalHoldResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::GetLegalHold, request, handler, context);
        }

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
        template<typename GetRecoveryPointRestoreMetadataRequestT = Model::GetRecoveryPointRestoreMetadataRequest>
        Model::GetRecoveryPointRestoreMetadataOutcomeCallable GetRecoveryPointRestoreMetadataCallable(const GetRecoveryPointRestoreMetadataRequestT& request) const
        {
            return SubmitCallable(&BackupClient::GetRecoveryPointRestoreMetadata, request);
        }

        /**
         * An Async wrapper for GetRecoveryPointRestoreMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRecoveryPointRestoreMetadataRequestT = Model::GetRecoveryPointRestoreMetadataRequest>
        void GetRecoveryPointRestoreMetadataAsync(const GetRecoveryPointRestoreMetadataRequestT& request, const GetRecoveryPointRestoreMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::GetRecoveryPointRestoreMetadata, request, handler, context);
        }

        /**
         * <p>This request returns the metadata for the specified restore
         * job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/GetRestoreJobMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRestoreJobMetadataOutcome GetRestoreJobMetadata(const Model::GetRestoreJobMetadataRequest& request) const;

        /**
         * A Callable wrapper for GetRestoreJobMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRestoreJobMetadataRequestT = Model::GetRestoreJobMetadataRequest>
        Model::GetRestoreJobMetadataOutcomeCallable GetRestoreJobMetadataCallable(const GetRestoreJobMetadataRequestT& request) const
        {
            return SubmitCallable(&BackupClient::GetRestoreJobMetadata, request);
        }

        /**
         * An Async wrapper for GetRestoreJobMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRestoreJobMetadataRequestT = Model::GetRestoreJobMetadataRequest>
        void GetRestoreJobMetadataAsync(const GetRestoreJobMetadataRequestT& request, const GetRestoreJobMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::GetRestoreJobMetadata, request, handler, context);
        }

        /**
         * <p>This request returns the minimal required set of metadata needed to start a
         * restore job with secure default settings. <code>BackupVaultName</code> and
         * <code>RecoveryPointArn</code> are required parameters.
         * <code>BackupVaultAccountId</code> is an optional parameter.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/GetRestoreTestingInferredMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRestoreTestingInferredMetadataOutcome GetRestoreTestingInferredMetadata(const Model::GetRestoreTestingInferredMetadataRequest& request) const;

        /**
         * A Callable wrapper for GetRestoreTestingInferredMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRestoreTestingInferredMetadataRequestT = Model::GetRestoreTestingInferredMetadataRequest>
        Model::GetRestoreTestingInferredMetadataOutcomeCallable GetRestoreTestingInferredMetadataCallable(const GetRestoreTestingInferredMetadataRequestT& request) const
        {
            return SubmitCallable(&BackupClient::GetRestoreTestingInferredMetadata, request);
        }

        /**
         * An Async wrapper for GetRestoreTestingInferredMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRestoreTestingInferredMetadataRequestT = Model::GetRestoreTestingInferredMetadataRequest>
        void GetRestoreTestingInferredMetadataAsync(const GetRestoreTestingInferredMetadataRequestT& request, const GetRestoreTestingInferredMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::GetRestoreTestingInferredMetadata, request, handler, context);
        }

        /**
         * <p>Returns <code>RestoreTestingPlan</code> details for the specified
         * <code>RestoreTestingPlanName</code>. The details are the body of a restore
         * testing plan in JSON format, in addition to plan metadata.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/GetRestoreTestingPlan">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRestoreTestingPlanOutcome GetRestoreTestingPlan(const Model::GetRestoreTestingPlanRequest& request) const;

        /**
         * A Callable wrapper for GetRestoreTestingPlan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRestoreTestingPlanRequestT = Model::GetRestoreTestingPlanRequest>
        Model::GetRestoreTestingPlanOutcomeCallable GetRestoreTestingPlanCallable(const GetRestoreTestingPlanRequestT& request) const
        {
            return SubmitCallable(&BackupClient::GetRestoreTestingPlan, request);
        }

        /**
         * An Async wrapper for GetRestoreTestingPlan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRestoreTestingPlanRequestT = Model::GetRestoreTestingPlanRequest>
        void GetRestoreTestingPlanAsync(const GetRestoreTestingPlanRequestT& request, const GetRestoreTestingPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::GetRestoreTestingPlan, request, handler, context);
        }

        /**
         * <p>Returns RestoreTestingSelection, which displays resources and elements of the
         * restore testing plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/GetRestoreTestingSelection">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRestoreTestingSelectionOutcome GetRestoreTestingSelection(const Model::GetRestoreTestingSelectionRequest& request) const;

        /**
         * A Callable wrapper for GetRestoreTestingSelection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRestoreTestingSelectionRequestT = Model::GetRestoreTestingSelectionRequest>
        Model::GetRestoreTestingSelectionOutcomeCallable GetRestoreTestingSelectionCallable(const GetRestoreTestingSelectionRequestT& request) const
        {
            return SubmitCallable(&BackupClient::GetRestoreTestingSelection, request);
        }

        /**
         * An Async wrapper for GetRestoreTestingSelection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRestoreTestingSelectionRequestT = Model::GetRestoreTestingSelectionRequest>
        void GetRestoreTestingSelectionAsync(const GetRestoreTestingSelectionRequestT& request, const GetRestoreTestingSelectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::GetRestoreTestingSelection, request, handler, context);
        }

        /**
         * <p>Returns the Amazon Web Services resource types supported by
         * Backup.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/GetSupportedResourceTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSupportedResourceTypesOutcome GetSupportedResourceTypes(const Model::GetSupportedResourceTypesRequest& request = {}) const;

        /**
         * A Callable wrapper for GetSupportedResourceTypes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSupportedResourceTypesRequestT = Model::GetSupportedResourceTypesRequest>
        Model::GetSupportedResourceTypesOutcomeCallable GetSupportedResourceTypesCallable(const GetSupportedResourceTypesRequestT& request = {}) const
        {
            return SubmitCallable(&BackupClient::GetSupportedResourceTypes, request);
        }

        /**
         * An Async wrapper for GetSupportedResourceTypes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSupportedResourceTypesRequestT = Model::GetSupportedResourceTypesRequest>
        void GetSupportedResourceTypesAsync(const GetSupportedResourceTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const GetSupportedResourceTypesRequestT& request = {}) const
        {
            return SubmitAsync(&BackupClient::GetSupportedResourceTypes, request, handler, context);
        }

        /**
         * <p>This is a request for a summary of backup jobs created or running within the
         * most recent 30 days. You can include parameters AccountID, State, ResourceType,
         * MessageCategory, AggregationPeriod, MaxResults, or NextToken to filter
         * results.</p> <p>This request returns a summary that contains Region, Account,
         * State, ResourceType, MessageCategory, StartTime, EndTime, and Count of included
         * jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ListBackupJobSummaries">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBackupJobSummariesOutcome ListBackupJobSummaries(const Model::ListBackupJobSummariesRequest& request) const;

        /**
         * A Callable wrapper for ListBackupJobSummaries that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListBackupJobSummariesRequestT = Model::ListBackupJobSummariesRequest>
        Model::ListBackupJobSummariesOutcomeCallable ListBackupJobSummariesCallable(const ListBackupJobSummariesRequestT& request) const
        {
            return SubmitCallable(&BackupClient::ListBackupJobSummaries, request);
        }

        /**
         * An Async wrapper for ListBackupJobSummaries that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListBackupJobSummariesRequestT = Model::ListBackupJobSummariesRequest>
        void ListBackupJobSummariesAsync(const ListBackupJobSummariesRequestT& request, const ListBackupJobSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::ListBackupJobSummaries, request, handler, context);
        }

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
        template<typename ListBackupJobsRequestT = Model::ListBackupJobsRequest>
        Model::ListBackupJobsOutcomeCallable ListBackupJobsCallable(const ListBackupJobsRequestT& request) const
        {
            return SubmitCallable(&BackupClient::ListBackupJobs, request);
        }

        /**
         * An Async wrapper for ListBackupJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListBackupJobsRequestT = Model::ListBackupJobsRequest>
        void ListBackupJobsAsync(const ListBackupJobsRequestT& request, const ListBackupJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::ListBackupJobs, request, handler, context);
        }

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
        template<typename ListBackupPlanTemplatesRequestT = Model::ListBackupPlanTemplatesRequest>
        Model::ListBackupPlanTemplatesOutcomeCallable ListBackupPlanTemplatesCallable(const ListBackupPlanTemplatesRequestT& request) const
        {
            return SubmitCallable(&BackupClient::ListBackupPlanTemplates, request);
        }

        /**
         * An Async wrapper for ListBackupPlanTemplates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListBackupPlanTemplatesRequestT = Model::ListBackupPlanTemplatesRequest>
        void ListBackupPlanTemplatesAsync(const ListBackupPlanTemplatesRequestT& request, const ListBackupPlanTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::ListBackupPlanTemplates, request, handler, context);
        }

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
        template<typename ListBackupPlanVersionsRequestT = Model::ListBackupPlanVersionsRequest>
        Model::ListBackupPlanVersionsOutcomeCallable ListBackupPlanVersionsCallable(const ListBackupPlanVersionsRequestT& request) const
        {
            return SubmitCallable(&BackupClient::ListBackupPlanVersions, request);
        }

        /**
         * An Async wrapper for ListBackupPlanVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListBackupPlanVersionsRequestT = Model::ListBackupPlanVersionsRequest>
        void ListBackupPlanVersionsAsync(const ListBackupPlanVersionsRequestT& request, const ListBackupPlanVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::ListBackupPlanVersions, request, handler, context);
        }

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
        template<typename ListBackupPlansRequestT = Model::ListBackupPlansRequest>
        Model::ListBackupPlansOutcomeCallable ListBackupPlansCallable(const ListBackupPlansRequestT& request) const
        {
            return SubmitCallable(&BackupClient::ListBackupPlans, request);
        }

        /**
         * An Async wrapper for ListBackupPlans that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListBackupPlansRequestT = Model::ListBackupPlansRequest>
        void ListBackupPlansAsync(const ListBackupPlansRequestT& request, const ListBackupPlansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::ListBackupPlans, request, handler, context);
        }

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
        template<typename ListBackupSelectionsRequestT = Model::ListBackupSelectionsRequest>
        Model::ListBackupSelectionsOutcomeCallable ListBackupSelectionsCallable(const ListBackupSelectionsRequestT& request) const
        {
            return SubmitCallable(&BackupClient::ListBackupSelections, request);
        }

        /**
         * An Async wrapper for ListBackupSelections that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListBackupSelectionsRequestT = Model::ListBackupSelectionsRequest>
        void ListBackupSelectionsAsync(const ListBackupSelectionsRequestT& request, const ListBackupSelectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::ListBackupSelections, request, handler, context);
        }

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
        template<typename ListBackupVaultsRequestT = Model::ListBackupVaultsRequest>
        Model::ListBackupVaultsOutcomeCallable ListBackupVaultsCallable(const ListBackupVaultsRequestT& request) const
        {
            return SubmitCallable(&BackupClient::ListBackupVaults, request);
        }

        /**
         * An Async wrapper for ListBackupVaults that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListBackupVaultsRequestT = Model::ListBackupVaultsRequest>
        void ListBackupVaultsAsync(const ListBackupVaultsRequestT& request, const ListBackupVaultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::ListBackupVaults, request, handler, context);
        }

        /**
         * <p>This request obtains a list of copy jobs created or running within the the
         * most recent 30 days. You can include parameters AccountID, State, ResourceType,
         * MessageCategory, AggregationPeriod, MaxResults, or NextToken to filter
         * results.</p> <p>This request returns a summary that contains Region, Account,
         * State, RestourceType, MessageCategory, StartTime, EndTime, and Count of included
         * jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ListCopyJobSummaries">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCopyJobSummariesOutcome ListCopyJobSummaries(const Model::ListCopyJobSummariesRequest& request) const;

        /**
         * A Callable wrapper for ListCopyJobSummaries that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCopyJobSummariesRequestT = Model::ListCopyJobSummariesRequest>
        Model::ListCopyJobSummariesOutcomeCallable ListCopyJobSummariesCallable(const ListCopyJobSummariesRequestT& request) const
        {
            return SubmitCallable(&BackupClient::ListCopyJobSummaries, request);
        }

        /**
         * An Async wrapper for ListCopyJobSummaries that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCopyJobSummariesRequestT = Model::ListCopyJobSummariesRequest>
        void ListCopyJobSummariesAsync(const ListCopyJobSummariesRequestT& request, const ListCopyJobSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::ListCopyJobSummaries, request, handler, context);
        }

        /**
         * <p>Returns metadata about your copy jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ListCopyJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCopyJobsOutcome ListCopyJobs(const Model::ListCopyJobsRequest& request) const;

        /**
         * A Callable wrapper for ListCopyJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCopyJobsRequestT = Model::ListCopyJobsRequest>
        Model::ListCopyJobsOutcomeCallable ListCopyJobsCallable(const ListCopyJobsRequestT& request) const
        {
            return SubmitCallable(&BackupClient::ListCopyJobs, request);
        }

        /**
         * An Async wrapper for ListCopyJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCopyJobsRequestT = Model::ListCopyJobsRequest>
        void ListCopyJobsAsync(const ListCopyJobsRequestT& request, const ListCopyJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::ListCopyJobs, request, handler, context);
        }

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
        template<typename ListFrameworksRequestT = Model::ListFrameworksRequest>
        Model::ListFrameworksOutcomeCallable ListFrameworksCallable(const ListFrameworksRequestT& request) const
        {
            return SubmitCallable(&BackupClient::ListFrameworks, request);
        }

        /**
         * An Async wrapper for ListFrameworks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFrameworksRequestT = Model::ListFrameworksRequest>
        void ListFrameworksAsync(const ListFrameworksRequestT& request, const ListFrameworksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::ListFrameworks, request, handler, context);
        }

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
        template<typename ListLegalHoldsRequestT = Model::ListLegalHoldsRequest>
        Model::ListLegalHoldsOutcomeCallable ListLegalHoldsCallable(const ListLegalHoldsRequestT& request) const
        {
            return SubmitCallable(&BackupClient::ListLegalHolds, request);
        }

        /**
         * An Async wrapper for ListLegalHolds that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListLegalHoldsRequestT = Model::ListLegalHoldsRequest>
        void ListLegalHoldsAsync(const ListLegalHoldsRequestT& request, const ListLegalHoldsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::ListLegalHolds, request, handler, context);
        }

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
        template<typename ListProtectedResourcesRequestT = Model::ListProtectedResourcesRequest>
        Model::ListProtectedResourcesOutcomeCallable ListProtectedResourcesCallable(const ListProtectedResourcesRequestT& request) const
        {
            return SubmitCallable(&BackupClient::ListProtectedResources, request);
        }

        /**
         * An Async wrapper for ListProtectedResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListProtectedResourcesRequestT = Model::ListProtectedResourcesRequest>
        void ListProtectedResourcesAsync(const ListProtectedResourcesRequestT& request, const ListProtectedResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::ListProtectedResources, request, handler, context);
        }

        /**
         * <p>This request lists the protected resources corresponding to each backup
         * vault.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ListProtectedResourcesByBackupVault">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProtectedResourcesByBackupVaultOutcome ListProtectedResourcesByBackupVault(const Model::ListProtectedResourcesByBackupVaultRequest& request) const;

        /**
         * A Callable wrapper for ListProtectedResourcesByBackupVault that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListProtectedResourcesByBackupVaultRequestT = Model::ListProtectedResourcesByBackupVaultRequest>
        Model::ListProtectedResourcesByBackupVaultOutcomeCallable ListProtectedResourcesByBackupVaultCallable(const ListProtectedResourcesByBackupVaultRequestT& request) const
        {
            return SubmitCallable(&BackupClient::ListProtectedResourcesByBackupVault, request);
        }

        /**
         * An Async wrapper for ListProtectedResourcesByBackupVault that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListProtectedResourcesByBackupVaultRequestT = Model::ListProtectedResourcesByBackupVaultRequest>
        void ListProtectedResourcesByBackupVaultAsync(const ListProtectedResourcesByBackupVaultRequestT& request, const ListProtectedResourcesByBackupVaultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::ListProtectedResourcesByBackupVault, request, handler, context);
        }

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
        template<typename ListRecoveryPointsByBackupVaultRequestT = Model::ListRecoveryPointsByBackupVaultRequest>
        Model::ListRecoveryPointsByBackupVaultOutcomeCallable ListRecoveryPointsByBackupVaultCallable(const ListRecoveryPointsByBackupVaultRequestT& request) const
        {
            return SubmitCallable(&BackupClient::ListRecoveryPointsByBackupVault, request);
        }

        /**
         * An Async wrapper for ListRecoveryPointsByBackupVault that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRecoveryPointsByBackupVaultRequestT = Model::ListRecoveryPointsByBackupVaultRequest>
        void ListRecoveryPointsByBackupVaultAsync(const ListRecoveryPointsByBackupVaultRequestT& request, const ListRecoveryPointsByBackupVaultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::ListRecoveryPointsByBackupVault, request, handler, context);
        }

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
        template<typename ListRecoveryPointsByLegalHoldRequestT = Model::ListRecoveryPointsByLegalHoldRequest>
        Model::ListRecoveryPointsByLegalHoldOutcomeCallable ListRecoveryPointsByLegalHoldCallable(const ListRecoveryPointsByLegalHoldRequestT& request) const
        {
            return SubmitCallable(&BackupClient::ListRecoveryPointsByLegalHold, request);
        }

        /**
         * An Async wrapper for ListRecoveryPointsByLegalHold that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRecoveryPointsByLegalHoldRequestT = Model::ListRecoveryPointsByLegalHoldRequest>
        void ListRecoveryPointsByLegalHoldAsync(const ListRecoveryPointsByLegalHoldRequestT& request, const ListRecoveryPointsByLegalHoldResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::ListRecoveryPointsByLegalHold, request, handler, context);
        }

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
        template<typename ListRecoveryPointsByResourceRequestT = Model::ListRecoveryPointsByResourceRequest>
        Model::ListRecoveryPointsByResourceOutcomeCallable ListRecoveryPointsByResourceCallable(const ListRecoveryPointsByResourceRequestT& request) const
        {
            return SubmitCallable(&BackupClient::ListRecoveryPointsByResource, request);
        }

        /**
         * An Async wrapper for ListRecoveryPointsByResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRecoveryPointsByResourceRequestT = Model::ListRecoveryPointsByResourceRequest>
        void ListRecoveryPointsByResourceAsync(const ListRecoveryPointsByResourceRequestT& request, const ListRecoveryPointsByResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::ListRecoveryPointsByResource, request, handler, context);
        }

        /**
         * <p>Returns details about your report jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ListReportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReportJobsOutcome ListReportJobs(const Model::ListReportJobsRequest& request) const;

        /**
         * A Callable wrapper for ListReportJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListReportJobsRequestT = Model::ListReportJobsRequest>
        Model::ListReportJobsOutcomeCallable ListReportJobsCallable(const ListReportJobsRequestT& request) const
        {
            return SubmitCallable(&BackupClient::ListReportJobs, request);
        }

        /**
         * An Async wrapper for ListReportJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListReportJobsRequestT = Model::ListReportJobsRequest>
        void ListReportJobsAsync(const ListReportJobsRequestT& request, const ListReportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::ListReportJobs, request, handler, context);
        }

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
        template<typename ListReportPlansRequestT = Model::ListReportPlansRequest>
        Model::ListReportPlansOutcomeCallable ListReportPlansCallable(const ListReportPlansRequestT& request) const
        {
            return SubmitCallable(&BackupClient::ListReportPlans, request);
        }

        /**
         * An Async wrapper for ListReportPlans that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListReportPlansRequestT = Model::ListReportPlansRequest>
        void ListReportPlansAsync(const ListReportPlansRequestT& request, const ListReportPlansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::ListReportPlans, request, handler, context);
        }

        /**
         * <p>This request obtains a summary of restore jobs created or running within the
         * the most recent 30 days. You can include parameters AccountID, State,
         * ResourceType, AggregationPeriod, MaxResults, or NextToken to filter results.</p>
         * <p>This request returns a summary that contains Region, Account, State,
         * RestourceType, MessageCategory, StartTime, EndTime, and Count of included
         * jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ListRestoreJobSummaries">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRestoreJobSummariesOutcome ListRestoreJobSummaries(const Model::ListRestoreJobSummariesRequest& request) const;

        /**
         * A Callable wrapper for ListRestoreJobSummaries that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRestoreJobSummariesRequestT = Model::ListRestoreJobSummariesRequest>
        Model::ListRestoreJobSummariesOutcomeCallable ListRestoreJobSummariesCallable(const ListRestoreJobSummariesRequestT& request) const
        {
            return SubmitCallable(&BackupClient::ListRestoreJobSummaries, request);
        }

        /**
         * An Async wrapper for ListRestoreJobSummaries that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRestoreJobSummariesRequestT = Model::ListRestoreJobSummariesRequest>
        void ListRestoreJobSummariesAsync(const ListRestoreJobSummariesRequestT& request, const ListRestoreJobSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::ListRestoreJobSummaries, request, handler, context);
        }

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
        template<typename ListRestoreJobsRequestT = Model::ListRestoreJobsRequest>
        Model::ListRestoreJobsOutcomeCallable ListRestoreJobsCallable(const ListRestoreJobsRequestT& request) const
        {
            return SubmitCallable(&BackupClient::ListRestoreJobs, request);
        }

        /**
         * An Async wrapper for ListRestoreJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRestoreJobsRequestT = Model::ListRestoreJobsRequest>
        void ListRestoreJobsAsync(const ListRestoreJobsRequestT& request, const ListRestoreJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::ListRestoreJobs, request, handler, context);
        }

        /**
         * <p>This returns restore jobs that contain the specified protected resource.</p>
         * <p>You must include <code>ResourceArn</code>. You can optionally include
         * <code>NextToken</code>, <code>ByStatus</code>, <code>MaxResults</code>,
         * <code>ByRecoveryPointCreationDateAfter</code> , and
         * <code>ByRecoveryPointCreationDateBefore</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ListRestoreJobsByProtectedResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRestoreJobsByProtectedResourceOutcome ListRestoreJobsByProtectedResource(const Model::ListRestoreJobsByProtectedResourceRequest& request) const;

        /**
         * A Callable wrapper for ListRestoreJobsByProtectedResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRestoreJobsByProtectedResourceRequestT = Model::ListRestoreJobsByProtectedResourceRequest>
        Model::ListRestoreJobsByProtectedResourceOutcomeCallable ListRestoreJobsByProtectedResourceCallable(const ListRestoreJobsByProtectedResourceRequestT& request) const
        {
            return SubmitCallable(&BackupClient::ListRestoreJobsByProtectedResource, request);
        }

        /**
         * An Async wrapper for ListRestoreJobsByProtectedResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRestoreJobsByProtectedResourceRequestT = Model::ListRestoreJobsByProtectedResourceRequest>
        void ListRestoreJobsByProtectedResourceAsync(const ListRestoreJobsByProtectedResourceRequestT& request, const ListRestoreJobsByProtectedResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::ListRestoreJobsByProtectedResource, request, handler, context);
        }

        /**
         * <p>Returns a list of restore testing plans.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ListRestoreTestingPlans">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRestoreTestingPlansOutcome ListRestoreTestingPlans(const Model::ListRestoreTestingPlansRequest& request) const;

        /**
         * A Callable wrapper for ListRestoreTestingPlans that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRestoreTestingPlansRequestT = Model::ListRestoreTestingPlansRequest>
        Model::ListRestoreTestingPlansOutcomeCallable ListRestoreTestingPlansCallable(const ListRestoreTestingPlansRequestT& request) const
        {
            return SubmitCallable(&BackupClient::ListRestoreTestingPlans, request);
        }

        /**
         * An Async wrapper for ListRestoreTestingPlans that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRestoreTestingPlansRequestT = Model::ListRestoreTestingPlansRequest>
        void ListRestoreTestingPlansAsync(const ListRestoreTestingPlansRequestT& request, const ListRestoreTestingPlansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::ListRestoreTestingPlans, request, handler, context);
        }

        /**
         * <p>Returns a list of restore testing selections. Can be filtered by
         * <code>MaxResults</code> and <code>RestoreTestingPlanName</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ListRestoreTestingSelections">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRestoreTestingSelectionsOutcome ListRestoreTestingSelections(const Model::ListRestoreTestingSelectionsRequest& request) const;

        /**
         * A Callable wrapper for ListRestoreTestingSelections that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRestoreTestingSelectionsRequestT = Model::ListRestoreTestingSelectionsRequest>
        Model::ListRestoreTestingSelectionsOutcomeCallable ListRestoreTestingSelectionsCallable(const ListRestoreTestingSelectionsRequestT& request) const
        {
            return SubmitCallable(&BackupClient::ListRestoreTestingSelections, request);
        }

        /**
         * An Async wrapper for ListRestoreTestingSelections that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRestoreTestingSelectionsRequestT = Model::ListRestoreTestingSelectionsRequest>
        void ListRestoreTestingSelectionsAsync(const ListRestoreTestingSelectionsRequestT& request, const ListRestoreTestingSelectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::ListRestoreTestingSelections, request, handler, context);
        }

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
        template<typename ListTagsRequestT = Model::ListTagsRequest>
        Model::ListTagsOutcomeCallable ListTagsCallable(const ListTagsRequestT& request) const
        {
            return SubmitCallable(&BackupClient::ListTags, request);
        }

        /**
         * An Async wrapper for ListTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsRequestT = Model::ListTagsRequest>
        void ListTagsAsync(const ListTagsRequestT& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::ListTags, request, handler, context);
        }

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
        template<typename PutBackupVaultAccessPolicyRequestT = Model::PutBackupVaultAccessPolicyRequest>
        Model::PutBackupVaultAccessPolicyOutcomeCallable PutBackupVaultAccessPolicyCallable(const PutBackupVaultAccessPolicyRequestT& request) const
        {
            return SubmitCallable(&BackupClient::PutBackupVaultAccessPolicy, request);
        }

        /**
         * An Async wrapper for PutBackupVaultAccessPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutBackupVaultAccessPolicyRequestT = Model::PutBackupVaultAccessPolicyRequest>
        void PutBackupVaultAccessPolicyAsync(const PutBackupVaultAccessPolicyRequestT& request, const PutBackupVaultAccessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::PutBackupVaultAccessPolicy, request, handler, context);
        }

        /**
         * <p>Applies Backup Vault Lock to a backup vault, preventing attempts to delete
         * any recovery point stored in or created in a backup vault. Vault Lock also
         * prevents attempts to update the lifecycle policy that controls the retention
         * period of any recovery point currently stored in a backup vault. If specified,
         * Vault Lock enforces a minimum and maximum retention period for future backup and
         * copy jobs that target a backup vault.</p>  <p>Backup Vault Lock has been
         * assessed by Cohasset Associates for use in environments that are subject to SEC
         * 17a-4, CFTC, and FINRA regulations. For more information about how Backup Vault
         * Lock relates to these regulations, see the <a
         * href="samples/cohassetreport.zip">Cohasset Associates Compliance Assessment.</a>
         * </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/PutBackupVaultLockConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutBackupVaultLockConfigurationOutcome PutBackupVaultLockConfiguration(const Model::PutBackupVaultLockConfigurationRequest& request) const;

        /**
         * A Callable wrapper for PutBackupVaultLockConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutBackupVaultLockConfigurationRequestT = Model::PutBackupVaultLockConfigurationRequest>
        Model::PutBackupVaultLockConfigurationOutcomeCallable PutBackupVaultLockConfigurationCallable(const PutBackupVaultLockConfigurationRequestT& request) const
        {
            return SubmitCallable(&BackupClient::PutBackupVaultLockConfiguration, request);
        }

        /**
         * An Async wrapper for PutBackupVaultLockConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutBackupVaultLockConfigurationRequestT = Model::PutBackupVaultLockConfigurationRequest>
        void PutBackupVaultLockConfigurationAsync(const PutBackupVaultLockConfigurationRequestT& request, const PutBackupVaultLockConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::PutBackupVaultLockConfiguration, request, handler, context);
        }

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
        template<typename PutBackupVaultNotificationsRequestT = Model::PutBackupVaultNotificationsRequest>
        Model::PutBackupVaultNotificationsOutcomeCallable PutBackupVaultNotificationsCallable(const PutBackupVaultNotificationsRequestT& request) const
        {
            return SubmitCallable(&BackupClient::PutBackupVaultNotifications, request);
        }

        /**
         * An Async wrapper for PutBackupVaultNotifications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutBackupVaultNotificationsRequestT = Model::PutBackupVaultNotificationsRequest>
        void PutBackupVaultNotificationsAsync(const PutBackupVaultNotificationsRequestT& request, const PutBackupVaultNotificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::PutBackupVaultNotifications, request, handler, context);
        }

        /**
         * <p>This request allows you to send your independent self-run restore test
         * validation results. <code>RestoreJobId</code> and <code>ValidationStatus</code>
         * are required. Optionally, you can input a
         * <code>ValidationStatusMessage</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/PutRestoreValidationResult">AWS
         * API Reference</a></p>
         */
        virtual Model::PutRestoreValidationResultOutcome PutRestoreValidationResult(const Model::PutRestoreValidationResultRequest& request) const;

        /**
         * A Callable wrapper for PutRestoreValidationResult that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutRestoreValidationResultRequestT = Model::PutRestoreValidationResultRequest>
        Model::PutRestoreValidationResultOutcomeCallable PutRestoreValidationResultCallable(const PutRestoreValidationResultRequestT& request) const
        {
            return SubmitCallable(&BackupClient::PutRestoreValidationResult, request);
        }

        /**
         * An Async wrapper for PutRestoreValidationResult that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutRestoreValidationResultRequestT = Model::PutRestoreValidationResultRequest>
        void PutRestoreValidationResultAsync(const PutRestoreValidationResultRequestT& request, const PutRestoreValidationResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::PutRestoreValidationResult, request, handler, context);
        }

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
        template<typename StartBackupJobRequestT = Model::StartBackupJobRequest>
        Model::StartBackupJobOutcomeCallable StartBackupJobCallable(const StartBackupJobRequestT& request) const
        {
            return SubmitCallable(&BackupClient::StartBackupJob, request);
        }

        /**
         * An Async wrapper for StartBackupJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartBackupJobRequestT = Model::StartBackupJobRequest>
        void StartBackupJobAsync(const StartBackupJobRequestT& request, const StartBackupJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::StartBackupJob, request, handler, context);
        }

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
        template<typename StartCopyJobRequestT = Model::StartCopyJobRequest>
        Model::StartCopyJobOutcomeCallable StartCopyJobCallable(const StartCopyJobRequestT& request) const
        {
            return SubmitCallable(&BackupClient::StartCopyJob, request);
        }

        /**
         * An Async wrapper for StartCopyJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartCopyJobRequestT = Model::StartCopyJobRequest>
        void StartCopyJobAsync(const StartCopyJobRequestT& request, const StartCopyJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::StartCopyJob, request, handler, context);
        }

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
        template<typename StartReportJobRequestT = Model::StartReportJobRequest>
        Model::StartReportJobOutcomeCallable StartReportJobCallable(const StartReportJobRequestT& request) const
        {
            return SubmitCallable(&BackupClient::StartReportJob, request);
        }

        /**
         * An Async wrapper for StartReportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartReportJobRequestT = Model::StartReportJobRequest>
        void StartReportJobAsync(const StartReportJobRequestT& request, const StartReportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::StartReportJob, request, handler, context);
        }

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
        template<typename StartRestoreJobRequestT = Model::StartRestoreJobRequest>
        Model::StartRestoreJobOutcomeCallable StartRestoreJobCallable(const StartRestoreJobRequestT& request) const
        {
            return SubmitCallable(&BackupClient::StartRestoreJob, request);
        }

        /**
         * An Async wrapper for StartRestoreJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartRestoreJobRequestT = Model::StartRestoreJobRequest>
        void StartRestoreJobAsync(const StartRestoreJobRequestT& request, const StartRestoreJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::StartRestoreJob, request, handler, context);
        }

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
        template<typename StopBackupJobRequestT = Model::StopBackupJobRequest>
        Model::StopBackupJobOutcomeCallable StopBackupJobCallable(const StopBackupJobRequestT& request) const
        {
            return SubmitCallable(&BackupClient::StopBackupJob, request);
        }

        /**
         * An Async wrapper for StopBackupJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopBackupJobRequestT = Model::StopBackupJobRequest>
        void StopBackupJobAsync(const StopBackupJobRequestT& request, const StopBackupJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::StopBackupJob, request, handler, context);
        }

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
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&BackupClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::TagResource, request, handler, context);
        }

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
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&BackupClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::UntagResource, request, handler, context);
        }

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
        template<typename UpdateBackupPlanRequestT = Model::UpdateBackupPlanRequest>
        Model::UpdateBackupPlanOutcomeCallable UpdateBackupPlanCallable(const UpdateBackupPlanRequestT& request) const
        {
            return SubmitCallable(&BackupClient::UpdateBackupPlan, request);
        }

        /**
         * An Async wrapper for UpdateBackupPlan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateBackupPlanRequestT = Model::UpdateBackupPlanRequest>
        void UpdateBackupPlanAsync(const UpdateBackupPlanRequestT& request, const UpdateBackupPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::UpdateBackupPlan, request, handler, context);
        }

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
        template<typename UpdateFrameworkRequestT = Model::UpdateFrameworkRequest>
        Model::UpdateFrameworkOutcomeCallable UpdateFrameworkCallable(const UpdateFrameworkRequestT& request) const
        {
            return SubmitCallable(&BackupClient::UpdateFramework, request);
        }

        /**
         * An Async wrapper for UpdateFramework that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateFrameworkRequestT = Model::UpdateFrameworkRequest>
        void UpdateFrameworkAsync(const UpdateFrameworkRequestT& request, const UpdateFrameworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::UpdateFramework, request, handler, context);
        }

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
        template<typename UpdateGlobalSettingsRequestT = Model::UpdateGlobalSettingsRequest>
        Model::UpdateGlobalSettingsOutcomeCallable UpdateGlobalSettingsCallable(const UpdateGlobalSettingsRequestT& request) const
        {
            return SubmitCallable(&BackupClient::UpdateGlobalSettings, request);
        }

        /**
         * An Async wrapper for UpdateGlobalSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateGlobalSettingsRequestT = Model::UpdateGlobalSettingsRequest>
        void UpdateGlobalSettingsAsync(const UpdateGlobalSettingsRequestT& request, const UpdateGlobalSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::UpdateGlobalSettings, request, handler, context);
        }

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
        template<typename UpdateRecoveryPointLifecycleRequestT = Model::UpdateRecoveryPointLifecycleRequest>
        Model::UpdateRecoveryPointLifecycleOutcomeCallable UpdateRecoveryPointLifecycleCallable(const UpdateRecoveryPointLifecycleRequestT& request) const
        {
            return SubmitCallable(&BackupClient::UpdateRecoveryPointLifecycle, request);
        }

        /**
         * An Async wrapper for UpdateRecoveryPointLifecycle that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateRecoveryPointLifecycleRequestT = Model::UpdateRecoveryPointLifecycleRequest>
        void UpdateRecoveryPointLifecycleAsync(const UpdateRecoveryPointLifecycleRequestT& request, const UpdateRecoveryPointLifecycleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::UpdateRecoveryPointLifecycle, request, handler, context);
        }

        /**
         * <p>Updates the current service opt-in settings for the Region.</p> <p>Use the
         * <code>DescribeRegionSettings</code> API to determine the resource types that are
         * supported.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/UpdateRegionSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRegionSettingsOutcome UpdateRegionSettings(const Model::UpdateRegionSettingsRequest& request) const;

        /**
         * A Callable wrapper for UpdateRegionSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateRegionSettingsRequestT = Model::UpdateRegionSettingsRequest>
        Model::UpdateRegionSettingsOutcomeCallable UpdateRegionSettingsCallable(const UpdateRegionSettingsRequestT& request) const
        {
            return SubmitCallable(&BackupClient::UpdateRegionSettings, request);
        }

        /**
         * An Async wrapper for UpdateRegionSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateRegionSettingsRequestT = Model::UpdateRegionSettingsRequest>
        void UpdateRegionSettingsAsync(const UpdateRegionSettingsRequestT& request, const UpdateRegionSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::UpdateRegionSettings, request, handler, context);
        }

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
        template<typename UpdateReportPlanRequestT = Model::UpdateReportPlanRequest>
        Model::UpdateReportPlanOutcomeCallable UpdateReportPlanCallable(const UpdateReportPlanRequestT& request) const
        {
            return SubmitCallable(&BackupClient::UpdateReportPlan, request);
        }

        /**
         * An Async wrapper for UpdateReportPlan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateReportPlanRequestT = Model::UpdateReportPlanRequest>
        void UpdateReportPlanAsync(const UpdateReportPlanRequestT& request, const UpdateReportPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::UpdateReportPlan, request, handler, context);
        }

        /**
         * <p>This request will send changes to your specified restore testing plan.
         * <code>RestoreTestingPlanName</code> cannot be updated after it is created.</p>
         * <p> <code>RecoveryPointSelection</code> can contain:</p> <ul> <li> <p>
         * <code>Algorithm</code> </p> </li> <li> <p> <code>ExcludeVaults</code> </p> </li>
         * <li> <p> <code>IncludeVaults</code> </p> </li> <li> <p>
         * <code>RecoveryPointTypes</code> </p> </li> <li> <p>
         * <code>SelectionWindowDays</code> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/UpdateRestoreTestingPlan">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRestoreTestingPlanOutcome UpdateRestoreTestingPlan(const Model::UpdateRestoreTestingPlanRequest& request) const;

        /**
         * A Callable wrapper for UpdateRestoreTestingPlan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateRestoreTestingPlanRequestT = Model::UpdateRestoreTestingPlanRequest>
        Model::UpdateRestoreTestingPlanOutcomeCallable UpdateRestoreTestingPlanCallable(const UpdateRestoreTestingPlanRequestT& request) const
        {
            return SubmitCallable(&BackupClient::UpdateRestoreTestingPlan, request);
        }

        /**
         * An Async wrapper for UpdateRestoreTestingPlan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateRestoreTestingPlanRequestT = Model::UpdateRestoreTestingPlanRequest>
        void UpdateRestoreTestingPlanAsync(const UpdateRestoreTestingPlanRequestT& request, const UpdateRestoreTestingPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::UpdateRestoreTestingPlan, request, handler, context);
        }

        /**
         * <p>Most elements except the <code>RestoreTestingSelectionName</code> can be
         * updated with this request.</p> <p> <code>RestoreTestingSelection</code> can use
         * either protected resource ARNs or conditions, but not both. That is, if your
         * selection has <code>ProtectedResourceArns</code>, requesting an update with the
         * parameter <code>ProtectedResourceConditions</code> will be
         * unsuccessful.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/UpdateRestoreTestingSelection">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRestoreTestingSelectionOutcome UpdateRestoreTestingSelection(const Model::UpdateRestoreTestingSelectionRequest& request) const;

        /**
         * A Callable wrapper for UpdateRestoreTestingSelection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateRestoreTestingSelectionRequestT = Model::UpdateRestoreTestingSelectionRequest>
        Model::UpdateRestoreTestingSelectionOutcomeCallable UpdateRestoreTestingSelectionCallable(const UpdateRestoreTestingSelectionRequestT& request) const
        {
            return SubmitCallable(&BackupClient::UpdateRestoreTestingSelection, request);
        }

        /**
         * An Async wrapper for UpdateRestoreTestingSelection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateRestoreTestingSelectionRequestT = Model::UpdateRestoreTestingSelectionRequest>
        void UpdateRestoreTestingSelectionAsync(const UpdateRestoreTestingSelectionRequestT& request, const UpdateRestoreTestingSelectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupClient::UpdateRestoreTestingSelection, request, handler, context);
        }


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
