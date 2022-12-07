/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/auditmanager/AuditManagerServiceClientModel.h>

namespace Aws
{
namespace AuditManager
{
  /**
   * <p>Welcome to the Audit Manager API reference. This guide is for developers who
   * need detailed information about the Audit Manager API operations, data types,
   * and errors. </p> <p>Audit Manager is a service that provides automated evidence
   * collection so that you can continually audit your Amazon Web Services usage. You
   * can use it to assess the effectiveness of your controls, manage risk, and
   * simplify compliance.</p> <p>Audit Manager provides prebuilt frameworks that
   * structure and automate assessments for a given compliance standard. Frameworks
   * include a prebuilt collection of controls with descriptions and testing
   * procedures. These controls are grouped according to the requirements of the
   * specified compliance standard or regulation. You can also customize frameworks
   * and controls to support internal audits with specific requirements. </p> <p>Use
   * the following links to get started with the Audit Manager API:</p> <ul> <li> <p>
   * <a
   * href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/API_Operations.html">Actions</a>:
   * An alphabetical list of all Audit Manager API operations.</p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/API_Types.html">Data
   * types</a>: An alphabetical list of all Audit Manager data types.</p> </li> <li>
   * <p> <a
   * href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/CommonParameters.html">Common
   * parameters</a>: Parameters that all Query operations can use.</p> </li> <li> <p>
   * <a
   * href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/CommonErrors.html">Common
   * errors</a>: Client and server errors that all operations can return.</p> </li>
   * </ul> <p>If you're new to Audit Manager, we recommend that you review the <a
   * href="https://docs.aws.amazon.com/audit-manager/latest/userguide/what-is.html">
   * Audit Manager User Guide</a>.</p>
   */
  class AWS_AUDITMANAGER_API AuditManagerClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<AuditManagerClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AuditManagerClient(const Aws::AuditManager::AuditManagerClientConfiguration& clientConfiguration = Aws::AuditManager::AuditManagerClientConfiguration(),
                           std::shared_ptr<AuditManagerEndpointProviderBase> endpointProvider = Aws::MakeShared<AuditManagerEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AuditManagerClient(const Aws::Auth::AWSCredentials& credentials,
                           std::shared_ptr<AuditManagerEndpointProviderBase> endpointProvider = Aws::MakeShared<AuditManagerEndpointProvider>(ALLOCATION_TAG),
                           const Aws::AuditManager::AuditManagerClientConfiguration& clientConfiguration = Aws::AuditManager::AuditManagerClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AuditManagerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<AuditManagerEndpointProviderBase> endpointProvider = Aws::MakeShared<AuditManagerEndpointProvider>(ALLOCATION_TAG),
                           const Aws::AuditManager::AuditManagerClientConfiguration& clientConfiguration = Aws::AuditManager::AuditManagerClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AuditManagerClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AuditManagerClient(const Aws::Auth::AWSCredentials& credentials,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AuditManagerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~AuditManagerClient();

        /**
         * <p> Associates an evidence folder to an assessment report in a Audit Manager
         * assessment. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/AssociateAssessmentReportEvidenceFolder">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateAssessmentReportEvidenceFolderOutcome AssociateAssessmentReportEvidenceFolder(const Model::AssociateAssessmentReportEvidenceFolderRequest& request) const;

        /**
         * A Callable wrapper for AssociateAssessmentReportEvidenceFolder that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateAssessmentReportEvidenceFolderOutcomeCallable AssociateAssessmentReportEvidenceFolderCallable(const Model::AssociateAssessmentReportEvidenceFolderRequest& request) const;

        /**
         * An Async wrapper for AssociateAssessmentReportEvidenceFolder that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateAssessmentReportEvidenceFolderAsync(const Model::AssociateAssessmentReportEvidenceFolderRequest& request, const AssociateAssessmentReportEvidenceFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Associates a list of evidence to an assessment report in an Audit Manager
         * assessment. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/BatchAssociateAssessmentReportEvidence">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchAssociateAssessmentReportEvidenceOutcome BatchAssociateAssessmentReportEvidence(const Model::BatchAssociateAssessmentReportEvidenceRequest& request) const;

        /**
         * A Callable wrapper for BatchAssociateAssessmentReportEvidence that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchAssociateAssessmentReportEvidenceOutcomeCallable BatchAssociateAssessmentReportEvidenceCallable(const Model::BatchAssociateAssessmentReportEvidenceRequest& request) const;

        /**
         * An Async wrapper for BatchAssociateAssessmentReportEvidence that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchAssociateAssessmentReportEvidenceAsync(const Model::BatchAssociateAssessmentReportEvidenceRequest& request, const BatchAssociateAssessmentReportEvidenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Creates a batch of delegations for an assessment in Audit Manager.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/BatchCreateDelegationByAssessment">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchCreateDelegationByAssessmentOutcome BatchCreateDelegationByAssessment(const Model::BatchCreateDelegationByAssessmentRequest& request) const;

        /**
         * A Callable wrapper for BatchCreateDelegationByAssessment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchCreateDelegationByAssessmentOutcomeCallable BatchCreateDelegationByAssessmentCallable(const Model::BatchCreateDelegationByAssessmentRequest& request) const;

        /**
         * An Async wrapper for BatchCreateDelegationByAssessment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchCreateDelegationByAssessmentAsync(const Model::BatchCreateDelegationByAssessmentRequest& request, const BatchCreateDelegationByAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Deletes a batch of delegations for an assessment in Audit Manager.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/BatchDeleteDelegationByAssessment">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDeleteDelegationByAssessmentOutcome BatchDeleteDelegationByAssessment(const Model::BatchDeleteDelegationByAssessmentRequest& request) const;

        /**
         * A Callable wrapper for BatchDeleteDelegationByAssessment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchDeleteDelegationByAssessmentOutcomeCallable BatchDeleteDelegationByAssessmentCallable(const Model::BatchDeleteDelegationByAssessmentRequest& request) const;

        /**
         * An Async wrapper for BatchDeleteDelegationByAssessment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchDeleteDelegationByAssessmentAsync(const Model::BatchDeleteDelegationByAssessmentRequest& request, const BatchDeleteDelegationByAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Disassociates a list of evidence from an assessment report in Audit Manager.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/BatchDisassociateAssessmentReportEvidence">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDisassociateAssessmentReportEvidenceOutcome BatchDisassociateAssessmentReportEvidence(const Model::BatchDisassociateAssessmentReportEvidenceRequest& request) const;

        /**
         * A Callable wrapper for BatchDisassociateAssessmentReportEvidence that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchDisassociateAssessmentReportEvidenceOutcomeCallable BatchDisassociateAssessmentReportEvidenceCallable(const Model::BatchDisassociateAssessmentReportEvidenceRequest& request) const;

        /**
         * An Async wrapper for BatchDisassociateAssessmentReportEvidence that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchDisassociateAssessmentReportEvidenceAsync(const Model::BatchDisassociateAssessmentReportEvidenceRequest& request, const BatchDisassociateAssessmentReportEvidenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Uploads one or more pieces of evidence to a control in an Audit Manager
         * assessment. You can upload manual evidence from any Amazon Simple Storage
         * Service (Amazon S3) bucket by specifying the S3 URI of the evidence. </p> <p>You
         * must upload manual evidence to your S3 bucket before you can upload it to your
         * assessment. For instructions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateBucket.html">CreateBucket</a>
         * and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutObject.html">PutObject</a>
         * in the <i>Amazon Simple Storage Service API Reference.</i> </p> <p>The following
         * restrictions apply to this action:</p> <ul> <li> <p>Maximum size of an
         * individual evidence file: 100 MB</p> </li> <li> <p>Number of daily manual
         * evidence uploads per control: 100</p> </li> <li> <p>Supported file formats: See
         * <a
         * href="https://docs.aws.amazon.com/audit-manager/latest/userguide/upload-evidence.html#supported-manual-evidence-files">Supported
         * file types for manual evidence</a> in the <i>Audit Manager User Guide</i> </p>
         * </li> </ul> <p>For more information about Audit Manager service restrictions,
         * see <a
         * href="https://docs.aws.amazon.com/audit-manager/latest/userguide/service-quotas.html">Quotas
         * and restrictions for Audit Manager</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/BatchImportEvidenceToAssessmentControl">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchImportEvidenceToAssessmentControlOutcome BatchImportEvidenceToAssessmentControl(const Model::BatchImportEvidenceToAssessmentControlRequest& request) const;

        /**
         * A Callable wrapper for BatchImportEvidenceToAssessmentControl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchImportEvidenceToAssessmentControlOutcomeCallable BatchImportEvidenceToAssessmentControlCallable(const Model::BatchImportEvidenceToAssessmentControlRequest& request) const;

        /**
         * An Async wrapper for BatchImportEvidenceToAssessmentControl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchImportEvidenceToAssessmentControlAsync(const Model::BatchImportEvidenceToAssessmentControlRequest& request, const BatchImportEvidenceToAssessmentControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Creates an assessment in Audit Manager. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/CreateAssessment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAssessmentOutcome CreateAssessment(const Model::CreateAssessmentRequest& request) const;

        /**
         * A Callable wrapper for CreateAssessment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAssessmentOutcomeCallable CreateAssessmentCallable(const Model::CreateAssessmentRequest& request) const;

        /**
         * An Async wrapper for CreateAssessment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAssessmentAsync(const Model::CreateAssessmentRequest& request, const CreateAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Creates a custom framework in Audit Manager. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/CreateAssessmentFramework">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAssessmentFrameworkOutcome CreateAssessmentFramework(const Model::CreateAssessmentFrameworkRequest& request) const;

        /**
         * A Callable wrapper for CreateAssessmentFramework that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAssessmentFrameworkOutcomeCallable CreateAssessmentFrameworkCallable(const Model::CreateAssessmentFrameworkRequest& request) const;

        /**
         * An Async wrapper for CreateAssessmentFramework that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAssessmentFrameworkAsync(const Model::CreateAssessmentFrameworkRequest& request, const CreateAssessmentFrameworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Creates an assessment report for the specified assessment. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/CreateAssessmentReport">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAssessmentReportOutcome CreateAssessmentReport(const Model::CreateAssessmentReportRequest& request) const;

        /**
         * A Callable wrapper for CreateAssessmentReport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAssessmentReportOutcomeCallable CreateAssessmentReportCallable(const Model::CreateAssessmentReportRequest& request) const;

        /**
         * An Async wrapper for CreateAssessmentReport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAssessmentReportAsync(const Model::CreateAssessmentReportRequest& request, const CreateAssessmentReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Creates a new custom control in Audit Manager. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/CreateControl">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateControlOutcome CreateControl(const Model::CreateControlRequest& request) const;

        /**
         * A Callable wrapper for CreateControl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateControlOutcomeCallable CreateControlCallable(const Model::CreateControlRequest& request) const;

        /**
         * An Async wrapper for CreateControl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateControlAsync(const Model::CreateControlRequest& request, const CreateControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Deletes an assessment in Audit Manager. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/DeleteAssessment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAssessmentOutcome DeleteAssessment(const Model::DeleteAssessmentRequest& request) const;

        /**
         * A Callable wrapper for DeleteAssessment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAssessmentOutcomeCallable DeleteAssessmentCallable(const Model::DeleteAssessmentRequest& request) const;

        /**
         * An Async wrapper for DeleteAssessment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAssessmentAsync(const Model::DeleteAssessmentRequest& request, const DeleteAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Deletes a custom framework in Audit Manager. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/DeleteAssessmentFramework">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAssessmentFrameworkOutcome DeleteAssessmentFramework(const Model::DeleteAssessmentFrameworkRequest& request) const;

        /**
         * A Callable wrapper for DeleteAssessmentFramework that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAssessmentFrameworkOutcomeCallable DeleteAssessmentFrameworkCallable(const Model::DeleteAssessmentFrameworkRequest& request) const;

        /**
         * An Async wrapper for DeleteAssessmentFramework that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAssessmentFrameworkAsync(const Model::DeleteAssessmentFrameworkRequest& request, const DeleteAssessmentFrameworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Deletes a share request for a custom framework in Audit Manager.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/DeleteAssessmentFrameworkShare">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAssessmentFrameworkShareOutcome DeleteAssessmentFrameworkShare(const Model::DeleteAssessmentFrameworkShareRequest& request) const;

        /**
         * A Callable wrapper for DeleteAssessmentFrameworkShare that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAssessmentFrameworkShareOutcomeCallable DeleteAssessmentFrameworkShareCallable(const Model::DeleteAssessmentFrameworkShareRequest& request) const;

        /**
         * An Async wrapper for DeleteAssessmentFrameworkShare that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAssessmentFrameworkShareAsync(const Model::DeleteAssessmentFrameworkShareRequest& request, const DeleteAssessmentFrameworkShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an assessment report in Audit Manager. </p> <p>When you run the
         * <code>DeleteAssessmentReport</code> operation, Audit Manager attempts to delete
         * the following data:</p> <ol> <li> <p>The specified assessment report that’s
         * stored in your S3 bucket</p> </li> <li> <p>The associated metadata that’s stored
         * in Audit Manager</p> </li> </ol> <p>If Audit Manager can’t access the assessment
         * report in your S3 bucket, the report isn’t deleted. In this event, the
         * <code>DeleteAssessmentReport</code> operation doesn’t fail. Instead, it proceeds
         * to delete the associated metadata only. You must then delete the assessment
         * report from the S3 bucket yourself. </p> <p>This scenario happens when Audit
         * Manager receives a <code>403 (Forbidden)</code> or <code>404 (Not Found)</code>
         * error from Amazon S3. To avoid this, make sure that your S3 bucket is available,
         * and that you configured the correct permissions for Audit Manager to delete
         * resources in your S3 bucket. For an example permissions policy that you can use,
         * see <a
         * href="https://docs.aws.amazon.com/audit-manager/latest/userguide/security_iam_id-based-policy-examples.html#full-administrator-access-assessment-report-destination">Assessment
         * report destination permissions</a> in the <i>Audit Manager User Guide</i>. For
         * information about the issues that could cause a <code>403 (Forbidden)</code> or
         * <code>404 (Not Found</code>) error from Amazon S3, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/ErrorResponses.html#ErrorCodeList">List
         * of Error Codes</a> in the <i>Amazon Simple Storage Service API Reference</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/DeleteAssessmentReport">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAssessmentReportOutcome DeleteAssessmentReport(const Model::DeleteAssessmentReportRequest& request) const;

        /**
         * A Callable wrapper for DeleteAssessmentReport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAssessmentReportOutcomeCallable DeleteAssessmentReportCallable(const Model::DeleteAssessmentReportRequest& request) const;

        /**
         * An Async wrapper for DeleteAssessmentReport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAssessmentReportAsync(const Model::DeleteAssessmentReportRequest& request, const DeleteAssessmentReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Deletes a custom control in Audit Manager. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/DeleteControl">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteControlOutcome DeleteControl(const Model::DeleteControlRequest& request) const;

        /**
         * A Callable wrapper for DeleteControl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteControlOutcomeCallable DeleteControlCallable(const Model::DeleteControlRequest& request) const;

        /**
         * An Async wrapper for DeleteControl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteControlAsync(const Model::DeleteControlRequest& request, const DeleteControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Deregisters an account in Audit Manager. </p>  <p>When you deregister
         * your account from Audit Manager, your data isn’t deleted. If you want to delete
         * your resource data, you must perform that task separately before you deregister
         * your account. Either, you can do this in the Audit Manager console. Or, you can
         * use one of the delete API operations that are provided by Audit Manager. </p>
         * <p>To delete your Audit Manager resource data, see the following instructions:
         * </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/API_DeleteAssessment.html">DeleteAssessment</a>
         * (see also: <a
         * href="https://docs.aws.amazon.com/audit-manager/latest/userguide/delete-assessment.html">Deleting
         * an assessment</a> in the <i>Audit Manager User Guide</i>)</p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/API_DeleteAssessmentFramework.html">DeleteAssessmentFramework</a>
         * (see also: <a
         * href="https://docs.aws.amazon.com/audit-manager/latest/userguide/delete-custom-framework.html">Deleting
         * a custom framework</a> in the <i>Audit Manager User Guide</i>)</p> </li> <li>
         * <p> <a
         * href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/API_DeleteAssessmentFrameworkShare.html">DeleteAssessmentFrameworkShare</a>
         * (see also: <a
         * href="https://docs.aws.amazon.com/audit-manager/latest/userguide/deleting-shared-framework-requests.html">Deleting
         * a share request</a> in the <i>Audit Manager User Guide</i>)</p> </li> <li> <p>
         * <a
         * href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/API_DeleteAssessmentReport.html">DeleteAssessmentReport</a>
         * (see also: <a
         * href="https://docs.aws.amazon.com/audit-manager/latest/userguide/generate-assessment-report.html#delete-assessment-report-steps">Deleting
         * an assessment report</a> in the <i>Audit Manager User Guide</i>)</p> </li> <li>
         * <p> <a
         * href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/API_DeleteControl.html">DeleteControl</a>
         * (see also: <a
         * href="https://docs.aws.amazon.com/audit-manager/latest/userguide/delete-controls.html">Deleting
         * a custom control</a> in the <i>Audit Manager User Guide</i>)</p> </li> </ul>
         * <p>At this time, Audit Manager doesn't provide an option to delete evidence. All
         * available delete operations are listed above.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/DeregisterAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterAccountOutcome DeregisterAccount(const Model::DeregisterAccountRequest& request) const;

        /**
         * A Callable wrapper for DeregisterAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeregisterAccountOutcomeCallable DeregisterAccountCallable(const Model::DeregisterAccountRequest& request) const;

        /**
         * An Async wrapper for DeregisterAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeregisterAccountAsync(const Model::DeregisterAccountRequest& request, const DeregisterAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified Amazon Web Services account as a delegated
         * administrator for Audit Manager. </p> <p>When you remove a delegated
         * administrator from your Audit Manager settings, you continue to have access to
         * the evidence that you previously collected under that account. This is also the
         * case when you deregister a delegated administrator from Organizations. However,
         * Audit Manager will stop collecting and attaching evidence to that delegated
         * administrator account moving forward.</p>  <p>Keep in mind the
         * following cleanup task if you use evidence finder:</p> <p>Before you use your
         * management account to remove a delegated administrator, make sure that the
         * current delegated administrator account signs in to Audit Manager and disables
         * evidence finder first. Disabling evidence finder automatically deletes the event
         * data store that was created in their account when they enabled evidence finder.
         * If this task isn’t completed, the event data store remains in their account. In
         * this case, we recommend that the original delegated administrator goes to
         * CloudTrail Lake and manually <a
         * href="https://docs.aws.amazon.com/userguide/awscloudtrail/latest/userguide/query-eds-disable-termination.html">deletes
         * the event data store</a>.</p> <p>This cleanup task is necessary to ensure that
         * you don't end up with multiple event data stores. Audit Manager will ignore an
         * unused event data store after you remove or change a delegated administrator
         * account. However, the unused event data store continues to incur storage costs
         * from CloudTrail Lake if you don't delete it.</p>  <p>When you
         * deregister a delegated administrator account for Audit Manager, the data for
         * that account isn’t deleted. If you want to delete resource data for a delegated
         * administrator account, you must perform that task separately before you
         * deregister the account. Either, you can do this in the Audit Manager console.
         * Or, you can use one of the delete API operations that are provided by Audit
         * Manager. </p> <p>To delete your Audit Manager resource data, see the following
         * instructions: </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/API_DeleteAssessment.html">DeleteAssessment</a>
         * (see also: <a
         * href="https://docs.aws.amazon.com/audit-manager/latest/userguide/delete-assessment.html">Deleting
         * an assessment</a> in the <i>Audit Manager User Guide</i>)</p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/API_DeleteAssessmentFramework.html">DeleteAssessmentFramework</a>
         * (see also: <a
         * href="https://docs.aws.amazon.com/audit-manager/latest/userguide/delete-custom-framework.html">Deleting
         * a custom framework</a> in the <i>Audit Manager User Guide</i>)</p> </li> <li>
         * <p> <a
         * href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/API_DeleteAssessmentFrameworkShare.html">DeleteAssessmentFrameworkShare</a>
         * (see also: <a
         * href="https://docs.aws.amazon.com/audit-manager/latest/userguide/deleting-shared-framework-requests.html">Deleting
         * a share request</a> in the <i>Audit Manager User Guide</i>)</p> </li> <li> <p>
         * <a
         * href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/API_DeleteAssessmentReport.html">DeleteAssessmentReport</a>
         * (see also: <a
         * href="https://docs.aws.amazon.com/audit-manager/latest/userguide/generate-assessment-report.html#delete-assessment-report-steps">Deleting
         * an assessment report</a> in the <i>Audit Manager User Guide</i>)</p> </li> <li>
         * <p> <a
         * href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/API_DeleteControl.html">DeleteControl</a>
         * (see also: <a
         * href="https://docs.aws.amazon.com/audit-manager/latest/userguide/delete-controls.html">Deleting
         * a custom control</a> in the <i>Audit Manager User Guide</i>)</p> </li> </ul>
         * <p>At this time, Audit Manager doesn't provide an option to delete evidence. All
         * available delete operations are listed above.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/DeregisterOrganizationAdminAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterOrganizationAdminAccountOutcome DeregisterOrganizationAdminAccount(const Model::DeregisterOrganizationAdminAccountRequest& request) const;

        /**
         * A Callable wrapper for DeregisterOrganizationAdminAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeregisterOrganizationAdminAccountOutcomeCallable DeregisterOrganizationAdminAccountCallable(const Model::DeregisterOrganizationAdminAccountRequest& request) const;

        /**
         * An Async wrapper for DeregisterOrganizationAdminAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeregisterOrganizationAdminAccountAsync(const Model::DeregisterOrganizationAdminAccountRequest& request, const DeregisterOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Disassociates an evidence folder from the specified assessment report in
         * Audit Manager. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/DisassociateAssessmentReportEvidenceFolder">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateAssessmentReportEvidenceFolderOutcome DisassociateAssessmentReportEvidenceFolder(const Model::DisassociateAssessmentReportEvidenceFolderRequest& request) const;

        /**
         * A Callable wrapper for DisassociateAssessmentReportEvidenceFolder that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateAssessmentReportEvidenceFolderOutcomeCallable DisassociateAssessmentReportEvidenceFolderCallable(const Model::DisassociateAssessmentReportEvidenceFolderRequest& request) const;

        /**
         * An Async wrapper for DisassociateAssessmentReportEvidenceFolder that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateAssessmentReportEvidenceFolderAsync(const Model::DisassociateAssessmentReportEvidenceFolderRequest& request, const DisassociateAssessmentReportEvidenceFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns the registration status of an account in Audit Manager.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/GetAccountStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccountStatusOutcome GetAccountStatus(const Model::GetAccountStatusRequest& request) const;

        /**
         * A Callable wrapper for GetAccountStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAccountStatusOutcomeCallable GetAccountStatusCallable(const Model::GetAccountStatusRequest& request) const;

        /**
         * An Async wrapper for GetAccountStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAccountStatusAsync(const Model::GetAccountStatusRequest& request, const GetAccountStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an assessment from Audit Manager. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/GetAssessment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAssessmentOutcome GetAssessment(const Model::GetAssessmentRequest& request) const;

        /**
         * A Callable wrapper for GetAssessment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAssessmentOutcomeCallable GetAssessmentCallable(const Model::GetAssessmentRequest& request) const;

        /**
         * An Async wrapper for GetAssessment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAssessmentAsync(const Model::GetAssessmentRequest& request, const GetAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a framework from Audit Manager. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/GetAssessmentFramework">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAssessmentFrameworkOutcome GetAssessmentFramework(const Model::GetAssessmentFrameworkRequest& request) const;

        /**
         * A Callable wrapper for GetAssessmentFramework that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAssessmentFrameworkOutcomeCallable GetAssessmentFrameworkCallable(const Model::GetAssessmentFrameworkRequest& request) const;

        /**
         * An Async wrapper for GetAssessmentFramework that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAssessmentFrameworkAsync(const Model::GetAssessmentFrameworkRequest& request, const GetAssessmentFrameworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns the URL of an assessment report in Audit Manager. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/GetAssessmentReportUrl">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAssessmentReportUrlOutcome GetAssessmentReportUrl(const Model::GetAssessmentReportUrlRequest& request) const;

        /**
         * A Callable wrapper for GetAssessmentReportUrl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAssessmentReportUrlOutcomeCallable GetAssessmentReportUrlCallable(const Model::GetAssessmentReportUrlRequest& request) const;

        /**
         * An Async wrapper for GetAssessmentReportUrl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAssessmentReportUrlAsync(const Model::GetAssessmentReportUrlRequest& request, const GetAssessmentReportUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of changelogs from Audit Manager. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/GetChangeLogs">AWS
         * API Reference</a></p>
         */
        virtual Model::GetChangeLogsOutcome GetChangeLogs(const Model::GetChangeLogsRequest& request) const;

        /**
         * A Callable wrapper for GetChangeLogs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetChangeLogsOutcomeCallable GetChangeLogsCallable(const Model::GetChangeLogsRequest& request) const;

        /**
         * An Async wrapper for GetChangeLogs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetChangeLogsAsync(const Model::GetChangeLogsRequest& request, const GetChangeLogsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a control from Audit Manager. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/GetControl">AWS
         * API Reference</a></p>
         */
        virtual Model::GetControlOutcome GetControl(const Model::GetControlRequest& request) const;

        /**
         * A Callable wrapper for GetControl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetControlOutcomeCallable GetControlCallable(const Model::GetControlRequest& request) const;

        /**
         * An Async wrapper for GetControl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetControlAsync(const Model::GetControlRequest& request, const GetControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of delegations from an audit owner to a delegate.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/GetDelegations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDelegationsOutcome GetDelegations(const Model::GetDelegationsRequest& request) const;

        /**
         * A Callable wrapper for GetDelegations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDelegationsOutcomeCallable GetDelegationsCallable(const Model::GetDelegationsRequest& request) const;

        /**
         * An Async wrapper for GetDelegations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDelegationsAsync(const Model::GetDelegationsRequest& request, const GetDelegationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns evidence from Audit Manager. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/GetEvidence">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEvidenceOutcome GetEvidence(const Model::GetEvidenceRequest& request) const;

        /**
         * A Callable wrapper for GetEvidence that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEvidenceOutcomeCallable GetEvidenceCallable(const Model::GetEvidenceRequest& request) const;

        /**
         * An Async wrapper for GetEvidence that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEvidenceAsync(const Model::GetEvidenceRequest& request, const GetEvidenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns all evidence from a specified evidence folder in Audit Manager.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/GetEvidenceByEvidenceFolder">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEvidenceByEvidenceFolderOutcome GetEvidenceByEvidenceFolder(const Model::GetEvidenceByEvidenceFolderRequest& request) const;

        /**
         * A Callable wrapper for GetEvidenceByEvidenceFolder that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEvidenceByEvidenceFolderOutcomeCallable GetEvidenceByEvidenceFolderCallable(const Model::GetEvidenceByEvidenceFolderRequest& request) const;

        /**
         * An Async wrapper for GetEvidenceByEvidenceFolder that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEvidenceByEvidenceFolderAsync(const Model::GetEvidenceByEvidenceFolderRequest& request, const GetEvidenceByEvidenceFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns an evidence folder from the specified assessment in Audit Manager.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/GetEvidenceFolder">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEvidenceFolderOutcome GetEvidenceFolder(const Model::GetEvidenceFolderRequest& request) const;

        /**
         * A Callable wrapper for GetEvidenceFolder that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEvidenceFolderOutcomeCallable GetEvidenceFolderCallable(const Model::GetEvidenceFolderRequest& request) const;

        /**
         * An Async wrapper for GetEvidenceFolder that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEvidenceFolderAsync(const Model::GetEvidenceFolderRequest& request, const GetEvidenceFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns the evidence folders from a specified assessment in Audit Manager.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/GetEvidenceFoldersByAssessment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEvidenceFoldersByAssessmentOutcome GetEvidenceFoldersByAssessment(const Model::GetEvidenceFoldersByAssessmentRequest& request) const;

        /**
         * A Callable wrapper for GetEvidenceFoldersByAssessment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEvidenceFoldersByAssessmentOutcomeCallable GetEvidenceFoldersByAssessmentCallable(const Model::GetEvidenceFoldersByAssessmentRequest& request) const;

        /**
         * An Async wrapper for GetEvidenceFoldersByAssessment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEvidenceFoldersByAssessmentAsync(const Model::GetEvidenceFoldersByAssessmentRequest& request, const GetEvidenceFoldersByAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of evidence folders that are associated with a specified
         * control of an assessment in Audit Manager. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/GetEvidenceFoldersByAssessmentControl">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEvidenceFoldersByAssessmentControlOutcome GetEvidenceFoldersByAssessmentControl(const Model::GetEvidenceFoldersByAssessmentControlRequest& request) const;

        /**
         * A Callable wrapper for GetEvidenceFoldersByAssessmentControl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEvidenceFoldersByAssessmentControlOutcomeCallable GetEvidenceFoldersByAssessmentControlCallable(const Model::GetEvidenceFoldersByAssessmentControlRequest& request) const;

        /**
         * An Async wrapper for GetEvidenceFoldersByAssessmentControl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEvidenceFoldersByAssessmentControlAsync(const Model::GetEvidenceFoldersByAssessmentControlRequest& request, const GetEvidenceFoldersByAssessmentControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the latest analytics data for all your current active assessments.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/GetInsights">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInsightsOutcome GetInsights(const Model::GetInsightsRequest& request) const;

        /**
         * A Callable wrapper for GetInsights that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetInsightsOutcomeCallable GetInsightsCallable(const Model::GetInsightsRequest& request) const;

        /**
         * An Async wrapper for GetInsights that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetInsightsAsync(const Model::GetInsightsRequest& request, const GetInsightsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the latest analytics data for a specific active assessment.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/GetInsightsByAssessment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInsightsByAssessmentOutcome GetInsightsByAssessment(const Model::GetInsightsByAssessmentRequest& request) const;

        /**
         * A Callable wrapper for GetInsightsByAssessment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetInsightsByAssessmentOutcomeCallable GetInsightsByAssessmentCallable(const Model::GetInsightsByAssessmentRequest& request) const;

        /**
         * An Async wrapper for GetInsightsByAssessment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetInsightsByAssessmentAsync(const Model::GetInsightsByAssessmentRequest& request, const GetInsightsByAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns the name of the delegated Amazon Web Services administrator account
         * for the organization. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/GetOrganizationAdminAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOrganizationAdminAccountOutcome GetOrganizationAdminAccount(const Model::GetOrganizationAdminAccountRequest& request) const;

        /**
         * A Callable wrapper for GetOrganizationAdminAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetOrganizationAdminAccountOutcomeCallable GetOrganizationAdminAccountCallable(const Model::GetOrganizationAdminAccountRequest& request) const;

        /**
         * An Async wrapper for GetOrganizationAdminAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetOrganizationAdminAccountAsync(const Model::GetOrganizationAdminAccountRequest& request, const GetOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of all of the Amazon Web Services that you can choose to
         * include in your assessment. When you <a
         * href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/API_CreateAssessment.html">create
         * an assessment</a>, specify which of these services you want to include to narrow
         * the assessment's <a
         * href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/API_Scope.html">scope</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/GetServicesInScope">AWS
         * API Reference</a></p>
         */
        virtual Model::GetServicesInScopeOutcome GetServicesInScope(const Model::GetServicesInScopeRequest& request) const;

        /**
         * A Callable wrapper for GetServicesInScope that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetServicesInScopeOutcomeCallable GetServicesInScopeCallable(const Model::GetServicesInScopeRequest& request) const;

        /**
         * An Async wrapper for GetServicesInScope that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetServicesInScopeAsync(const Model::GetServicesInScopeRequest& request, const GetServicesInScopeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns the settings for the specified Amazon Web Services account.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/GetSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSettingsOutcome GetSettings(const Model::GetSettingsRequest& request) const;

        /**
         * A Callable wrapper for GetSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSettingsOutcomeCallable GetSettingsCallable(const Model::GetSettingsRequest& request) const;

        /**
         * An Async wrapper for GetSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSettingsAsync(const Model::GetSettingsRequest& request, const GetSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the latest analytics data for controls within a specific control domain
         * and a specific active assessment.</p>  <p>Control insights are listed only
         * if the control belongs to the control domain and assessment that was specified.
         * Moreover, the control must have collected evidence on the
         * <code>lastUpdated</code> date of <code>controlInsightsByAssessment</code>. If
         * neither of these conditions are met, no data is listed for that control. </p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/ListAssessmentControlInsightsByControlDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssessmentControlInsightsByControlDomainOutcome ListAssessmentControlInsightsByControlDomain(const Model::ListAssessmentControlInsightsByControlDomainRequest& request) const;

        /**
         * A Callable wrapper for ListAssessmentControlInsightsByControlDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAssessmentControlInsightsByControlDomainOutcomeCallable ListAssessmentControlInsightsByControlDomainCallable(const Model::ListAssessmentControlInsightsByControlDomainRequest& request) const;

        /**
         * An Async wrapper for ListAssessmentControlInsightsByControlDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAssessmentControlInsightsByControlDomainAsync(const Model::ListAssessmentControlInsightsByControlDomainRequest& request, const ListAssessmentControlInsightsByControlDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of sent or received share requests for custom frameworks in
         * Audit Manager. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/ListAssessmentFrameworkShareRequests">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssessmentFrameworkShareRequestsOutcome ListAssessmentFrameworkShareRequests(const Model::ListAssessmentFrameworkShareRequestsRequest& request) const;

        /**
         * A Callable wrapper for ListAssessmentFrameworkShareRequests that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAssessmentFrameworkShareRequestsOutcomeCallable ListAssessmentFrameworkShareRequestsCallable(const Model::ListAssessmentFrameworkShareRequestsRequest& request) const;

        /**
         * An Async wrapper for ListAssessmentFrameworkShareRequests that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAssessmentFrameworkShareRequestsAsync(const Model::ListAssessmentFrameworkShareRequestsRequest& request, const ListAssessmentFrameworkShareRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of the frameworks that are available in the Audit Manager
         * framework library. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/ListAssessmentFrameworks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssessmentFrameworksOutcome ListAssessmentFrameworks(const Model::ListAssessmentFrameworksRequest& request) const;

        /**
         * A Callable wrapper for ListAssessmentFrameworks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAssessmentFrameworksOutcomeCallable ListAssessmentFrameworksCallable(const Model::ListAssessmentFrameworksRequest& request) const;

        /**
         * An Async wrapper for ListAssessmentFrameworks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAssessmentFrameworksAsync(const Model::ListAssessmentFrameworksRequest& request, const ListAssessmentFrameworksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of assessment reports created in Audit Manager.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/ListAssessmentReports">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssessmentReportsOutcome ListAssessmentReports(const Model::ListAssessmentReportsRequest& request) const;

        /**
         * A Callable wrapper for ListAssessmentReports that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAssessmentReportsOutcomeCallable ListAssessmentReportsCallable(const Model::ListAssessmentReportsRequest& request) const;

        /**
         * An Async wrapper for ListAssessmentReports that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAssessmentReportsAsync(const Model::ListAssessmentReportsRequest& request, const ListAssessmentReportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of current and past assessments from Audit Manager.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/ListAssessments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssessmentsOutcome ListAssessments(const Model::ListAssessmentsRequest& request) const;

        /**
         * A Callable wrapper for ListAssessments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAssessmentsOutcomeCallable ListAssessmentsCallable(const Model::ListAssessmentsRequest& request) const;

        /**
         * An Async wrapper for ListAssessments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAssessmentsAsync(const Model::ListAssessmentsRequest& request, const ListAssessmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the latest analytics data for control domains across all of your active
         * assessments. </p>  <p>A control domain is listed only if at least one of
         * the controls within that domain collected evidence on the
         * <code>lastUpdated</code> date of <code>controlDomainInsights</code>. If this
         * condition isn’t met, no data is listed for that control domain.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/ListControlDomainInsights">AWS
         * API Reference</a></p>
         */
        virtual Model::ListControlDomainInsightsOutcome ListControlDomainInsights(const Model::ListControlDomainInsightsRequest& request) const;

        /**
         * A Callable wrapper for ListControlDomainInsights that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListControlDomainInsightsOutcomeCallable ListControlDomainInsightsCallable(const Model::ListControlDomainInsightsRequest& request) const;

        /**
         * An Async wrapper for ListControlDomainInsights that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListControlDomainInsightsAsync(const Model::ListControlDomainInsightsRequest& request, const ListControlDomainInsightsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists analytics data for control domains within a specified active
         * assessment.</p>  <p>A control domain is listed only if at least one of the
         * controls within that domain collected evidence on the <code>lastUpdated</code>
         * date of <code>controlDomainInsights</code>. If this condition isn’t met, no data
         * is listed for that domain.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/ListControlDomainInsightsByAssessment">AWS
         * API Reference</a></p>
         */
        virtual Model::ListControlDomainInsightsByAssessmentOutcome ListControlDomainInsightsByAssessment(const Model::ListControlDomainInsightsByAssessmentRequest& request) const;

        /**
         * A Callable wrapper for ListControlDomainInsightsByAssessment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListControlDomainInsightsByAssessmentOutcomeCallable ListControlDomainInsightsByAssessmentCallable(const Model::ListControlDomainInsightsByAssessmentRequest& request) const;

        /**
         * An Async wrapper for ListControlDomainInsightsByAssessment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListControlDomainInsightsByAssessmentAsync(const Model::ListControlDomainInsightsByAssessmentRequest& request, const ListControlDomainInsightsByAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the latest analytics data for controls within a specific control domain
         * across all active assessments.</p>  <p>Control insights are listed only if
         * the control belongs to the control domain that was specified and the control
         * collected evidence on the <code>lastUpdated</code> date of
         * <code>controlInsightsMetadata</code>. If neither of these conditions are met, no
         * data is listed for that control. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/ListControlInsightsByControlDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::ListControlInsightsByControlDomainOutcome ListControlInsightsByControlDomain(const Model::ListControlInsightsByControlDomainRequest& request) const;

        /**
         * A Callable wrapper for ListControlInsightsByControlDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListControlInsightsByControlDomainOutcomeCallable ListControlInsightsByControlDomainCallable(const Model::ListControlInsightsByControlDomainRequest& request) const;

        /**
         * An Async wrapper for ListControlInsightsByControlDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListControlInsightsByControlDomainAsync(const Model::ListControlInsightsByControlDomainRequest& request, const ListControlInsightsByControlDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of controls from Audit Manager. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/ListControls">AWS
         * API Reference</a></p>
         */
        virtual Model::ListControlsOutcome ListControls(const Model::ListControlsRequest& request) const;

        /**
         * A Callable wrapper for ListControls that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListControlsOutcomeCallable ListControlsCallable(const Model::ListControlsRequest& request) const;

        /**
         * An Async wrapper for ListControls that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListControlsAsync(const Model::ListControlsRequest& request, const ListControlsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of keywords that are pre-mapped to the specified control data
         * source. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/ListKeywordsForDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListKeywordsForDataSourceOutcome ListKeywordsForDataSource(const Model::ListKeywordsForDataSourceRequest& request) const;

        /**
         * A Callable wrapper for ListKeywordsForDataSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListKeywordsForDataSourceOutcomeCallable ListKeywordsForDataSourceCallable(const Model::ListKeywordsForDataSourceRequest& request) const;

        /**
         * An Async wrapper for ListKeywordsForDataSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListKeywordsForDataSourceAsync(const Model::ListKeywordsForDataSourceRequest& request, const ListKeywordsForDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of all Audit Manager notifications. </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/ListNotifications">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNotificationsOutcome ListNotifications(const Model::ListNotificationsRequest& request) const;

        /**
         * A Callable wrapper for ListNotifications that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListNotificationsOutcomeCallable ListNotificationsCallable(const Model::ListNotificationsRequest& request) const;

        /**
         * An Async wrapper for ListNotifications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListNotificationsAsync(const Model::ListNotificationsRequest& request, const ListNotificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of tags for the specified resource in Audit Manager.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Enables Audit Manager for the specified Amazon Web Services account.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/RegisterAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterAccountOutcome RegisterAccount(const Model::RegisterAccountRequest& request) const;

        /**
         * A Callable wrapper for RegisterAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterAccountOutcomeCallable RegisterAccountCallable(const Model::RegisterAccountRequest& request) const;

        /**
         * An Async wrapper for RegisterAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterAccountAsync(const Model::RegisterAccountRequest& request, const RegisterAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Enables an Amazon Web Services account within the organization as the
         * delegated administrator for Audit Manager. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/RegisterOrganizationAdminAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterOrganizationAdminAccountOutcome RegisterOrganizationAdminAccount(const Model::RegisterOrganizationAdminAccountRequest& request) const;

        /**
         * A Callable wrapper for RegisterOrganizationAdminAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterOrganizationAdminAccountOutcomeCallable RegisterOrganizationAdminAccountCallable(const Model::RegisterOrganizationAdminAccountRequest& request) const;

        /**
         * An Async wrapper for RegisterOrganizationAdminAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterOrganizationAdminAccountAsync(const Model::RegisterOrganizationAdminAccountRequest& request, const RegisterOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Creates a share request for a custom framework in Audit Manager. </p> <p>The
         * share request specifies a recipient and notifies them that a custom framework is
         * available. Recipients have 120 days to accept or decline the request. If no
         * action is taken, the share request expires.</p> <p>When you create a share
         * request, Audit Manager stores a snapshot of your custom framework in the US East
         * (N. Virginia) Amazon Web Services Region. Audit Manager also stores a backup of
         * the same snapshot in the US West (Oregon) Amazon Web Services Region.</p>
         * <p>Audit Manager deletes the snapshot and the backup snapshot when one of the
         * following events occurs:</p> <ul> <li> <p>The sender revokes the share
         * request.</p> </li> <li> <p>The recipient declines the share request.</p> </li>
         * <li> <p>The recipient encounters an error and doesn't successfully accept the
         * share request.</p> </li> <li> <p>The share request expires before the recipient
         * responds to the request.</p> </li> </ul> <p>When a sender <a
         * href="https://docs.aws.amazon.com/audit-manager/latest/userguide/framework-sharing.html#framework-sharing-resend">resends
         * a share request</a>, the snapshot is replaced with an updated version that
         * corresponds with the latest version of the custom framework. </p> <p>When a
         * recipient accepts a share request, the snapshot is replicated into their Amazon
         * Web Services account under the Amazon Web Services Region that was specified in
         * the share request. </p>  <p>When you invoke the
         * <code>StartAssessmentFrameworkShare</code> API, you are about to share a custom
         * framework with another Amazon Web Services account. You may not share a custom
         * framework that is derived from a standard framework if the standard framework is
         * designated as not eligible for sharing by Amazon Web Services, unless you have
         * obtained permission to do so from the owner of the standard framework. To learn
         * more about which standard frameworks are eligible for sharing, see <a
         * href="https://docs.aws.amazon.com/audit-manager/latest/userguide/share-custom-framework-concepts-and-terminology.html#eligibility">Framework
         * sharing eligibility</a> in the <i>Audit Manager User Guide</i>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/StartAssessmentFrameworkShare">AWS
         * API Reference</a></p>
         */
        virtual Model::StartAssessmentFrameworkShareOutcome StartAssessmentFrameworkShare(const Model::StartAssessmentFrameworkShareRequest& request) const;

        /**
         * A Callable wrapper for StartAssessmentFrameworkShare that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartAssessmentFrameworkShareOutcomeCallable StartAssessmentFrameworkShareCallable(const Model::StartAssessmentFrameworkShareRequest& request) const;

        /**
         * An Async wrapper for StartAssessmentFrameworkShare that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartAssessmentFrameworkShareAsync(const Model::StartAssessmentFrameworkShareRequest& request, const StartAssessmentFrameworkShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Tags the specified resource in Audit Manager. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/TagResource">AWS
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
         * <p> Removes a tag from a resource in Audit Manager. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/UntagResource">AWS
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
         * <p> Edits an Audit Manager assessment. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/UpdateAssessment">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAssessmentOutcome UpdateAssessment(const Model::UpdateAssessmentRequest& request) const;

        /**
         * A Callable wrapper for UpdateAssessment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAssessmentOutcomeCallable UpdateAssessmentCallable(const Model::UpdateAssessmentRequest& request) const;

        /**
         * An Async wrapper for UpdateAssessment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAssessmentAsync(const Model::UpdateAssessmentRequest& request, const UpdateAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Updates a control within an assessment in Audit Manager. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/UpdateAssessmentControl">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAssessmentControlOutcome UpdateAssessmentControl(const Model::UpdateAssessmentControlRequest& request) const;

        /**
         * A Callable wrapper for UpdateAssessmentControl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAssessmentControlOutcomeCallable UpdateAssessmentControlCallable(const Model::UpdateAssessmentControlRequest& request) const;

        /**
         * An Async wrapper for UpdateAssessmentControl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAssessmentControlAsync(const Model::UpdateAssessmentControlRequest& request, const UpdateAssessmentControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Updates the status of a control set in an Audit Manager assessment.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/UpdateAssessmentControlSetStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAssessmentControlSetStatusOutcome UpdateAssessmentControlSetStatus(const Model::UpdateAssessmentControlSetStatusRequest& request) const;

        /**
         * A Callable wrapper for UpdateAssessmentControlSetStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAssessmentControlSetStatusOutcomeCallable UpdateAssessmentControlSetStatusCallable(const Model::UpdateAssessmentControlSetStatusRequest& request) const;

        /**
         * An Async wrapper for UpdateAssessmentControlSetStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAssessmentControlSetStatusAsync(const Model::UpdateAssessmentControlSetStatusRequest& request, const UpdateAssessmentControlSetStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Updates a custom framework in Audit Manager. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/UpdateAssessmentFramework">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAssessmentFrameworkOutcome UpdateAssessmentFramework(const Model::UpdateAssessmentFrameworkRequest& request) const;

        /**
         * A Callable wrapper for UpdateAssessmentFramework that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAssessmentFrameworkOutcomeCallable UpdateAssessmentFrameworkCallable(const Model::UpdateAssessmentFrameworkRequest& request) const;

        /**
         * An Async wrapper for UpdateAssessmentFramework that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAssessmentFrameworkAsync(const Model::UpdateAssessmentFrameworkRequest& request, const UpdateAssessmentFrameworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Updates a share request for a custom framework in Audit Manager.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/UpdateAssessmentFrameworkShare">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAssessmentFrameworkShareOutcome UpdateAssessmentFrameworkShare(const Model::UpdateAssessmentFrameworkShareRequest& request) const;

        /**
         * A Callable wrapper for UpdateAssessmentFrameworkShare that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAssessmentFrameworkShareOutcomeCallable UpdateAssessmentFrameworkShareCallable(const Model::UpdateAssessmentFrameworkShareRequest& request) const;

        /**
         * An Async wrapper for UpdateAssessmentFrameworkShare that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAssessmentFrameworkShareAsync(const Model::UpdateAssessmentFrameworkShareRequest& request, const UpdateAssessmentFrameworkShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Updates the status of an assessment in Audit Manager. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/UpdateAssessmentStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAssessmentStatusOutcome UpdateAssessmentStatus(const Model::UpdateAssessmentStatusRequest& request) const;

        /**
         * A Callable wrapper for UpdateAssessmentStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAssessmentStatusOutcomeCallable UpdateAssessmentStatusCallable(const Model::UpdateAssessmentStatusRequest& request) const;

        /**
         * An Async wrapper for UpdateAssessmentStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAssessmentStatusAsync(const Model::UpdateAssessmentStatusRequest& request, const UpdateAssessmentStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Updates a custom control in Audit Manager. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/UpdateControl">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateControlOutcome UpdateControl(const Model::UpdateControlRequest& request) const;

        /**
         * A Callable wrapper for UpdateControl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateControlOutcomeCallable UpdateControlCallable(const Model::UpdateControlRequest& request) const;

        /**
         * An Async wrapper for UpdateControl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateControlAsync(const Model::UpdateControlRequest& request, const UpdateControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Updates Audit Manager settings for the current user account. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/UpdateSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSettingsOutcome UpdateSettings(const Model::UpdateSettingsRequest& request) const;

        /**
         * A Callable wrapper for UpdateSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSettingsOutcomeCallable UpdateSettingsCallable(const Model::UpdateSettingsRequest& request) const;

        /**
         * An Async wrapper for UpdateSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSettingsAsync(const Model::UpdateSettingsRequest& request, const UpdateSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Validates the integrity of an assessment report in Audit Manager.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/ValidateAssessmentReportIntegrity">AWS
         * API Reference</a></p>
         */
        virtual Model::ValidateAssessmentReportIntegrityOutcome ValidateAssessmentReportIntegrity(const Model::ValidateAssessmentReportIntegrityRequest& request) const;

        /**
         * A Callable wrapper for ValidateAssessmentReportIntegrity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ValidateAssessmentReportIntegrityOutcomeCallable ValidateAssessmentReportIntegrityCallable(const Model::ValidateAssessmentReportIntegrityRequest& request) const;

        /**
         * An Async wrapper for ValidateAssessmentReportIntegrity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ValidateAssessmentReportIntegrityAsync(const Model::ValidateAssessmentReportIntegrityRequest& request, const ValidateAssessmentReportIntegrityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<AuditManagerEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<AuditManagerClient>;
      void init(const AuditManagerClientConfiguration& clientConfiguration);

      AuditManagerClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<AuditManagerEndpointProviderBase> m_endpointProvider;
  };

} // namespace AuditManager
} // namespace Aws
