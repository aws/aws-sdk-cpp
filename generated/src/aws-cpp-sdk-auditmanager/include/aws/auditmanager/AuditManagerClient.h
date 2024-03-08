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
   * parameters</a>: Parameters that all operations can use.</p> </li> <li> <p> <a
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
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef AuditManagerClientConfiguration ClientConfigurationType;
      typedef AuditManagerEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AuditManagerClient(const Aws::AuditManager::AuditManagerClientConfiguration& clientConfiguration = Aws::AuditManager::AuditManagerClientConfiguration(),
                           std::shared_ptr<AuditManagerEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AuditManagerClient(const Aws::Auth::AWSCredentials& credentials,
                           std::shared_ptr<AuditManagerEndpointProviderBase> endpointProvider = nullptr,
                           const Aws::AuditManager::AuditManagerClientConfiguration& clientConfiguration = Aws::AuditManager::AuditManagerClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AuditManagerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<AuditManagerEndpointProviderBase> endpointProvider = nullptr,
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
         * <p> Associates an evidence folder to an assessment report in an Audit Manager
         * assessment. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/AssociateAssessmentReportEvidenceFolder">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateAssessmentReportEvidenceFolderOutcome AssociateAssessmentReportEvidenceFolder(const Model::AssociateAssessmentReportEvidenceFolderRequest& request) const;

        /**
         * A Callable wrapper for AssociateAssessmentReportEvidenceFolder that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateAssessmentReportEvidenceFolderRequestT = Model::AssociateAssessmentReportEvidenceFolderRequest>
        Model::AssociateAssessmentReportEvidenceFolderOutcomeCallable AssociateAssessmentReportEvidenceFolderCallable(const AssociateAssessmentReportEvidenceFolderRequestT& request) const
        {
            return SubmitCallable(&AuditManagerClient::AssociateAssessmentReportEvidenceFolder, request);
        }

        /**
         * An Async wrapper for AssociateAssessmentReportEvidenceFolder that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateAssessmentReportEvidenceFolderRequestT = Model::AssociateAssessmentReportEvidenceFolderRequest>
        void AssociateAssessmentReportEvidenceFolderAsync(const AssociateAssessmentReportEvidenceFolderRequestT& request, const AssociateAssessmentReportEvidenceFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AuditManagerClient::AssociateAssessmentReportEvidenceFolder, request, handler, context);
        }

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
        template<typename BatchAssociateAssessmentReportEvidenceRequestT = Model::BatchAssociateAssessmentReportEvidenceRequest>
        Model::BatchAssociateAssessmentReportEvidenceOutcomeCallable BatchAssociateAssessmentReportEvidenceCallable(const BatchAssociateAssessmentReportEvidenceRequestT& request) const
        {
            return SubmitCallable(&AuditManagerClient::BatchAssociateAssessmentReportEvidence, request);
        }

        /**
         * An Async wrapper for BatchAssociateAssessmentReportEvidence that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchAssociateAssessmentReportEvidenceRequestT = Model::BatchAssociateAssessmentReportEvidenceRequest>
        void BatchAssociateAssessmentReportEvidenceAsync(const BatchAssociateAssessmentReportEvidenceRequestT& request, const BatchAssociateAssessmentReportEvidenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AuditManagerClient::BatchAssociateAssessmentReportEvidence, request, handler, context);
        }

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
        template<typename BatchCreateDelegationByAssessmentRequestT = Model::BatchCreateDelegationByAssessmentRequest>
        Model::BatchCreateDelegationByAssessmentOutcomeCallable BatchCreateDelegationByAssessmentCallable(const BatchCreateDelegationByAssessmentRequestT& request) const
        {
            return SubmitCallable(&AuditManagerClient::BatchCreateDelegationByAssessment, request);
        }

        /**
         * An Async wrapper for BatchCreateDelegationByAssessment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchCreateDelegationByAssessmentRequestT = Model::BatchCreateDelegationByAssessmentRequest>
        void BatchCreateDelegationByAssessmentAsync(const BatchCreateDelegationByAssessmentRequestT& request, const BatchCreateDelegationByAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AuditManagerClient::BatchCreateDelegationByAssessment, request, handler, context);
        }

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
        template<typename BatchDeleteDelegationByAssessmentRequestT = Model::BatchDeleteDelegationByAssessmentRequest>
        Model::BatchDeleteDelegationByAssessmentOutcomeCallable BatchDeleteDelegationByAssessmentCallable(const BatchDeleteDelegationByAssessmentRequestT& request) const
        {
            return SubmitCallable(&AuditManagerClient::BatchDeleteDelegationByAssessment, request);
        }

        /**
         * An Async wrapper for BatchDeleteDelegationByAssessment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchDeleteDelegationByAssessmentRequestT = Model::BatchDeleteDelegationByAssessmentRequest>
        void BatchDeleteDelegationByAssessmentAsync(const BatchDeleteDelegationByAssessmentRequestT& request, const BatchDeleteDelegationByAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AuditManagerClient::BatchDeleteDelegationByAssessment, request, handler, context);
        }

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
        template<typename BatchDisassociateAssessmentReportEvidenceRequestT = Model::BatchDisassociateAssessmentReportEvidenceRequest>
        Model::BatchDisassociateAssessmentReportEvidenceOutcomeCallable BatchDisassociateAssessmentReportEvidenceCallable(const BatchDisassociateAssessmentReportEvidenceRequestT& request) const
        {
            return SubmitCallable(&AuditManagerClient::BatchDisassociateAssessmentReportEvidence, request);
        }

        /**
         * An Async wrapper for BatchDisassociateAssessmentReportEvidence that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchDisassociateAssessmentReportEvidenceRequestT = Model::BatchDisassociateAssessmentReportEvidenceRequest>
        void BatchDisassociateAssessmentReportEvidenceAsync(const BatchDisassociateAssessmentReportEvidenceRequestT& request, const BatchDisassociateAssessmentReportEvidenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AuditManagerClient::BatchDisassociateAssessmentReportEvidence, request, handler, context);
        }

        /**
         * <p>Adds one or more pieces of evidence to a control in an Audit Manager
         * assessment. </p> <p>You can import manual evidence from any S3 bucket by
         * specifying the S3 URI of the object. You can also upload a file from your
         * browser, or enter plain text in response to a risk assessment question. </p>
         * <p>The following restrictions apply to this action:</p> <ul> <li> <p>
         * <code>manualEvidence</code> can be only one of the following:
         * <code>evidenceFileName</code>, <code>s3ResourcePath</code>, or
         * <code>textResponse</code> </p> </li> <li> <p>Maximum size of an individual
         * evidence file: 100 MB</p> </li> <li> <p>Number of daily manual evidence uploads
         * per control: 100</p> </li> <li> <p>Supported file formats: See <a
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
        template<typename BatchImportEvidenceToAssessmentControlRequestT = Model::BatchImportEvidenceToAssessmentControlRequest>
        Model::BatchImportEvidenceToAssessmentControlOutcomeCallable BatchImportEvidenceToAssessmentControlCallable(const BatchImportEvidenceToAssessmentControlRequestT& request) const
        {
            return SubmitCallable(&AuditManagerClient::BatchImportEvidenceToAssessmentControl, request);
        }

        /**
         * An Async wrapper for BatchImportEvidenceToAssessmentControl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchImportEvidenceToAssessmentControlRequestT = Model::BatchImportEvidenceToAssessmentControlRequest>
        void BatchImportEvidenceToAssessmentControlAsync(const BatchImportEvidenceToAssessmentControlRequestT& request, const BatchImportEvidenceToAssessmentControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AuditManagerClient::BatchImportEvidenceToAssessmentControl, request, handler, context);
        }

        /**
         * <p> Creates an assessment in Audit Manager. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/CreateAssessment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAssessmentOutcome CreateAssessment(const Model::CreateAssessmentRequest& request) const;

        /**
         * A Callable wrapper for CreateAssessment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAssessmentRequestT = Model::CreateAssessmentRequest>
        Model::CreateAssessmentOutcomeCallable CreateAssessmentCallable(const CreateAssessmentRequestT& request) const
        {
            return SubmitCallable(&AuditManagerClient::CreateAssessment, request);
        }

        /**
         * An Async wrapper for CreateAssessment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAssessmentRequestT = Model::CreateAssessmentRequest>
        void CreateAssessmentAsync(const CreateAssessmentRequestT& request, const CreateAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AuditManagerClient::CreateAssessment, request, handler, context);
        }

        /**
         * <p> Creates a custom framework in Audit Manager. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/CreateAssessmentFramework">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAssessmentFrameworkOutcome CreateAssessmentFramework(const Model::CreateAssessmentFrameworkRequest& request) const;

        /**
         * A Callable wrapper for CreateAssessmentFramework that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAssessmentFrameworkRequestT = Model::CreateAssessmentFrameworkRequest>
        Model::CreateAssessmentFrameworkOutcomeCallable CreateAssessmentFrameworkCallable(const CreateAssessmentFrameworkRequestT& request) const
        {
            return SubmitCallable(&AuditManagerClient::CreateAssessmentFramework, request);
        }

        /**
         * An Async wrapper for CreateAssessmentFramework that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAssessmentFrameworkRequestT = Model::CreateAssessmentFrameworkRequest>
        void CreateAssessmentFrameworkAsync(const CreateAssessmentFrameworkRequestT& request, const CreateAssessmentFrameworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AuditManagerClient::CreateAssessmentFramework, request, handler, context);
        }

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
        template<typename CreateAssessmentReportRequestT = Model::CreateAssessmentReportRequest>
        Model::CreateAssessmentReportOutcomeCallable CreateAssessmentReportCallable(const CreateAssessmentReportRequestT& request) const
        {
            return SubmitCallable(&AuditManagerClient::CreateAssessmentReport, request);
        }

        /**
         * An Async wrapper for CreateAssessmentReport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAssessmentReportRequestT = Model::CreateAssessmentReportRequest>
        void CreateAssessmentReportAsync(const CreateAssessmentReportRequestT& request, const CreateAssessmentReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AuditManagerClient::CreateAssessmentReport, request, handler, context);
        }

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
        template<typename CreateControlRequestT = Model::CreateControlRequest>
        Model::CreateControlOutcomeCallable CreateControlCallable(const CreateControlRequestT& request) const
        {
            return SubmitCallable(&AuditManagerClient::CreateControl, request);
        }

        /**
         * An Async wrapper for CreateControl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateControlRequestT = Model::CreateControlRequest>
        void CreateControlAsync(const CreateControlRequestT& request, const CreateControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AuditManagerClient::CreateControl, request, handler, context);
        }

        /**
         * <p> Deletes an assessment in Audit Manager. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/DeleteAssessment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAssessmentOutcome DeleteAssessment(const Model::DeleteAssessmentRequest& request) const;

        /**
         * A Callable wrapper for DeleteAssessment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAssessmentRequestT = Model::DeleteAssessmentRequest>
        Model::DeleteAssessmentOutcomeCallable DeleteAssessmentCallable(const DeleteAssessmentRequestT& request) const
        {
            return SubmitCallable(&AuditManagerClient::DeleteAssessment, request);
        }

        /**
         * An Async wrapper for DeleteAssessment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAssessmentRequestT = Model::DeleteAssessmentRequest>
        void DeleteAssessmentAsync(const DeleteAssessmentRequestT& request, const DeleteAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AuditManagerClient::DeleteAssessment, request, handler, context);
        }

        /**
         * <p> Deletes a custom framework in Audit Manager. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/DeleteAssessmentFramework">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAssessmentFrameworkOutcome DeleteAssessmentFramework(const Model::DeleteAssessmentFrameworkRequest& request) const;

        /**
         * A Callable wrapper for DeleteAssessmentFramework that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAssessmentFrameworkRequestT = Model::DeleteAssessmentFrameworkRequest>
        Model::DeleteAssessmentFrameworkOutcomeCallable DeleteAssessmentFrameworkCallable(const DeleteAssessmentFrameworkRequestT& request) const
        {
            return SubmitCallable(&AuditManagerClient::DeleteAssessmentFramework, request);
        }

        /**
         * An Async wrapper for DeleteAssessmentFramework that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAssessmentFrameworkRequestT = Model::DeleteAssessmentFrameworkRequest>
        void DeleteAssessmentFrameworkAsync(const DeleteAssessmentFrameworkRequestT& request, const DeleteAssessmentFrameworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AuditManagerClient::DeleteAssessmentFramework, request, handler, context);
        }

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
        template<typename DeleteAssessmentFrameworkShareRequestT = Model::DeleteAssessmentFrameworkShareRequest>
        Model::DeleteAssessmentFrameworkShareOutcomeCallable DeleteAssessmentFrameworkShareCallable(const DeleteAssessmentFrameworkShareRequestT& request) const
        {
            return SubmitCallable(&AuditManagerClient::DeleteAssessmentFrameworkShare, request);
        }

        /**
         * An Async wrapper for DeleteAssessmentFrameworkShare that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAssessmentFrameworkShareRequestT = Model::DeleteAssessmentFrameworkShareRequest>
        void DeleteAssessmentFrameworkShareAsync(const DeleteAssessmentFrameworkShareRequestT& request, const DeleteAssessmentFrameworkShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AuditManagerClient::DeleteAssessmentFrameworkShare, request, handler, context);
        }

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
        template<typename DeleteAssessmentReportRequestT = Model::DeleteAssessmentReportRequest>
        Model::DeleteAssessmentReportOutcomeCallable DeleteAssessmentReportCallable(const DeleteAssessmentReportRequestT& request) const
        {
            return SubmitCallable(&AuditManagerClient::DeleteAssessmentReport, request);
        }

        /**
         * An Async wrapper for DeleteAssessmentReport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAssessmentReportRequestT = Model::DeleteAssessmentReportRequest>
        void DeleteAssessmentReportAsync(const DeleteAssessmentReportRequestT& request, const DeleteAssessmentReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AuditManagerClient::DeleteAssessmentReport, request, handler, context);
        }

        /**
         * <p> Deletes a custom control in Audit Manager. </p>  <p>When you
         * invoke this operation, the custom control is deleted from any frameworks or
         * assessments that it’s currently part of. As a result, Audit Manager will stop
         * collecting evidence for that custom control in all of your assessments. This
         * includes assessments that you previously created before you deleted the custom
         * control.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/DeleteControl">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteControlOutcome DeleteControl(const Model::DeleteControlRequest& request) const;

        /**
         * A Callable wrapper for DeleteControl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteControlRequestT = Model::DeleteControlRequest>
        Model::DeleteControlOutcomeCallable DeleteControlCallable(const DeleteControlRequestT& request) const
        {
            return SubmitCallable(&AuditManagerClient::DeleteControl, request);
        }

        /**
         * An Async wrapper for DeleteControl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteControlRequestT = Model::DeleteControlRequest>
        void DeleteControlAsync(const DeleteControlRequestT& request, const DeleteControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AuditManagerClient::DeleteControl, request, handler, context);
        }

        /**
         * <p> Deregisters an account in Audit Manager. </p>  <p>Before you
         * deregister, you can use the <a
         * href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/API_UpdateSettings.html">UpdateSettings</a>
         * API operation to set your preferred data retention policy. By default, Audit
         * Manager retains your data. If you want to delete your data, you can use the
         * <code>DeregistrationPolicy</code> attribute to request the deletion of your
         * data. </p> <p>For more information about data retention, see <a
         * href="https://docs.aws.amazon.com/audit-manager/latest/userguide/data-protection.html">Data
         * Protection</a> in the <i>Audit Manager User Guide</i>. </p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/DeregisterAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterAccountOutcome DeregisterAccount(const Model::DeregisterAccountRequest& request) const;

        /**
         * A Callable wrapper for DeregisterAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeregisterAccountRequestT = Model::DeregisterAccountRequest>
        Model::DeregisterAccountOutcomeCallable DeregisterAccountCallable(const DeregisterAccountRequestT& request) const
        {
            return SubmitCallable(&AuditManagerClient::DeregisterAccount, request);
        }

        /**
         * An Async wrapper for DeregisterAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeregisterAccountRequestT = Model::DeregisterAccountRequest>
        void DeregisterAccountAsync(const DeregisterAccountRequestT& request, const DeregisterAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AuditManagerClient::DeregisterAccount, request, handler, context);
        }

        /**
         * <p>Removes the specified Amazon Web Services account as a delegated
         * administrator for Audit Manager. </p> <p>When you remove a delegated
         * administrator from your Audit Manager settings, you continue to have access to
         * the evidence that you previously collected under that account. This is also the
         * case when you deregister a delegated administrator from Organizations. However,
         * Audit Manager stops collecting and attaching evidence to that delegated
         * administrator account moving forward.</p>  <p>Keep in mind the
         * following cleanup task if you use evidence finder:</p> <p>Before you use your
         * management account to remove a delegated administrator, make sure that the
         * current delegated administrator account signs in to Audit Manager and disables
         * evidence finder first. Disabling evidence finder automatically deletes the event
         * data store that was created in their account when they enabled evidence finder.
         * If this task isn’t completed, the event data store remains in their account. In
         * this case, we recommend that the original delegated administrator goes to
         * CloudTrail Lake and manually <a
         * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/query-eds-disable-termination.html">deletes
         * the event data store</a>.</p> <p>This cleanup task is necessary to ensure that
         * you don't end up with multiple event data stores. Audit Manager ignores an
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
         * <p>At this time, Audit Manager doesn't provide an option to delete evidence for
         * a specific delegated administrator. Instead, when your management account
         * deregisters Audit Manager, we perform a cleanup for the current delegated
         * administrator account at the time of deregistration.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/DeregisterOrganizationAdminAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterOrganizationAdminAccountOutcome DeregisterOrganizationAdminAccount(const Model::DeregisterOrganizationAdminAccountRequest& request) const;

        /**
         * A Callable wrapper for DeregisterOrganizationAdminAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeregisterOrganizationAdminAccountRequestT = Model::DeregisterOrganizationAdminAccountRequest>
        Model::DeregisterOrganizationAdminAccountOutcomeCallable DeregisterOrganizationAdminAccountCallable(const DeregisterOrganizationAdminAccountRequestT& request) const
        {
            return SubmitCallable(&AuditManagerClient::DeregisterOrganizationAdminAccount, request);
        }

        /**
         * An Async wrapper for DeregisterOrganizationAdminAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeregisterOrganizationAdminAccountRequestT = Model::DeregisterOrganizationAdminAccountRequest>
        void DeregisterOrganizationAdminAccountAsync(const DeregisterOrganizationAdminAccountRequestT& request, const DeregisterOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AuditManagerClient::DeregisterOrganizationAdminAccount, request, handler, context);
        }

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
        template<typename DisassociateAssessmentReportEvidenceFolderRequestT = Model::DisassociateAssessmentReportEvidenceFolderRequest>
        Model::DisassociateAssessmentReportEvidenceFolderOutcomeCallable DisassociateAssessmentReportEvidenceFolderCallable(const DisassociateAssessmentReportEvidenceFolderRequestT& request) const
        {
            return SubmitCallable(&AuditManagerClient::DisassociateAssessmentReportEvidenceFolder, request);
        }

        /**
         * An Async wrapper for DisassociateAssessmentReportEvidenceFolder that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateAssessmentReportEvidenceFolderRequestT = Model::DisassociateAssessmentReportEvidenceFolderRequest>
        void DisassociateAssessmentReportEvidenceFolderAsync(const DisassociateAssessmentReportEvidenceFolderRequestT& request, const DisassociateAssessmentReportEvidenceFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AuditManagerClient::DisassociateAssessmentReportEvidenceFolder, request, handler, context);
        }

        /**
         * <p> Gets the registration status of an account in Audit Manager. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/GetAccountStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccountStatusOutcome GetAccountStatus(const Model::GetAccountStatusRequest& request) const;

        /**
         * A Callable wrapper for GetAccountStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAccountStatusRequestT = Model::GetAccountStatusRequest>
        Model::GetAccountStatusOutcomeCallable GetAccountStatusCallable(const GetAccountStatusRequestT& request) const
        {
            return SubmitCallable(&AuditManagerClient::GetAccountStatus, request);
        }

        /**
         * An Async wrapper for GetAccountStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAccountStatusRequestT = Model::GetAccountStatusRequest>
        void GetAccountStatusAsync(const GetAccountStatusRequestT& request, const GetAccountStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AuditManagerClient::GetAccountStatus, request, handler, context);
        }

        /**
         * <p>Gets information about a specified assessment. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/GetAssessment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAssessmentOutcome GetAssessment(const Model::GetAssessmentRequest& request) const;

        /**
         * A Callable wrapper for GetAssessment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAssessmentRequestT = Model::GetAssessmentRequest>
        Model::GetAssessmentOutcomeCallable GetAssessmentCallable(const GetAssessmentRequestT& request) const
        {
            return SubmitCallable(&AuditManagerClient::GetAssessment, request);
        }

        /**
         * An Async wrapper for GetAssessment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAssessmentRequestT = Model::GetAssessmentRequest>
        void GetAssessmentAsync(const GetAssessmentRequestT& request, const GetAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AuditManagerClient::GetAssessment, request, handler, context);
        }

        /**
         * <p>Gets information about a specified framework.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/GetAssessmentFramework">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAssessmentFrameworkOutcome GetAssessmentFramework(const Model::GetAssessmentFrameworkRequest& request) const;

        /**
         * A Callable wrapper for GetAssessmentFramework that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAssessmentFrameworkRequestT = Model::GetAssessmentFrameworkRequest>
        Model::GetAssessmentFrameworkOutcomeCallable GetAssessmentFrameworkCallable(const GetAssessmentFrameworkRequestT& request) const
        {
            return SubmitCallable(&AuditManagerClient::GetAssessmentFramework, request);
        }

        /**
         * An Async wrapper for GetAssessmentFramework that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAssessmentFrameworkRequestT = Model::GetAssessmentFrameworkRequest>
        void GetAssessmentFrameworkAsync(const GetAssessmentFrameworkRequestT& request, const GetAssessmentFrameworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AuditManagerClient::GetAssessmentFramework, request, handler, context);
        }

        /**
         * <p> Gets the URL of an assessment report in Audit Manager. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/GetAssessmentReportUrl">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAssessmentReportUrlOutcome GetAssessmentReportUrl(const Model::GetAssessmentReportUrlRequest& request) const;

        /**
         * A Callable wrapper for GetAssessmentReportUrl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAssessmentReportUrlRequestT = Model::GetAssessmentReportUrlRequest>
        Model::GetAssessmentReportUrlOutcomeCallable GetAssessmentReportUrlCallable(const GetAssessmentReportUrlRequestT& request) const
        {
            return SubmitCallable(&AuditManagerClient::GetAssessmentReportUrl, request);
        }

        /**
         * An Async wrapper for GetAssessmentReportUrl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAssessmentReportUrlRequestT = Model::GetAssessmentReportUrlRequest>
        void GetAssessmentReportUrlAsync(const GetAssessmentReportUrlRequestT& request, const GetAssessmentReportUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AuditManagerClient::GetAssessmentReportUrl, request, handler, context);
        }

        /**
         * <p> Gets a list of changelogs from Audit Manager. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/GetChangeLogs">AWS
         * API Reference</a></p>
         */
        virtual Model::GetChangeLogsOutcome GetChangeLogs(const Model::GetChangeLogsRequest& request) const;

        /**
         * A Callable wrapper for GetChangeLogs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetChangeLogsRequestT = Model::GetChangeLogsRequest>
        Model::GetChangeLogsOutcomeCallable GetChangeLogsCallable(const GetChangeLogsRequestT& request) const
        {
            return SubmitCallable(&AuditManagerClient::GetChangeLogs, request);
        }

        /**
         * An Async wrapper for GetChangeLogs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetChangeLogsRequestT = Model::GetChangeLogsRequest>
        void GetChangeLogsAsync(const GetChangeLogsRequestT& request, const GetChangeLogsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AuditManagerClient::GetChangeLogs, request, handler, context);
        }

        /**
         * <p> Gets information about a specified control.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/GetControl">AWS
         * API Reference</a></p>
         */
        virtual Model::GetControlOutcome GetControl(const Model::GetControlRequest& request) const;

        /**
         * A Callable wrapper for GetControl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetControlRequestT = Model::GetControlRequest>
        Model::GetControlOutcomeCallable GetControlCallable(const GetControlRequestT& request) const
        {
            return SubmitCallable(&AuditManagerClient::GetControl, request);
        }

        /**
         * An Async wrapper for GetControl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetControlRequestT = Model::GetControlRequest>
        void GetControlAsync(const GetControlRequestT& request, const GetControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AuditManagerClient::GetControl, request, handler, context);
        }

        /**
         * <p> Gets a list of delegations from an audit owner to a delegate. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/GetDelegations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDelegationsOutcome GetDelegations(const Model::GetDelegationsRequest& request) const;

        /**
         * A Callable wrapper for GetDelegations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDelegationsRequestT = Model::GetDelegationsRequest>
        Model::GetDelegationsOutcomeCallable GetDelegationsCallable(const GetDelegationsRequestT& request) const
        {
            return SubmitCallable(&AuditManagerClient::GetDelegations, request);
        }

        /**
         * An Async wrapper for GetDelegations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDelegationsRequestT = Model::GetDelegationsRequest>
        void GetDelegationsAsync(const GetDelegationsRequestT& request, const GetDelegationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AuditManagerClient::GetDelegations, request, handler, context);
        }

        /**
         * <p> Gets information about a specified evidence item.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/GetEvidence">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEvidenceOutcome GetEvidence(const Model::GetEvidenceRequest& request) const;

        /**
         * A Callable wrapper for GetEvidence that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetEvidenceRequestT = Model::GetEvidenceRequest>
        Model::GetEvidenceOutcomeCallable GetEvidenceCallable(const GetEvidenceRequestT& request) const
        {
            return SubmitCallable(&AuditManagerClient::GetEvidence, request);
        }

        /**
         * An Async wrapper for GetEvidence that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEvidenceRequestT = Model::GetEvidenceRequest>
        void GetEvidenceAsync(const GetEvidenceRequestT& request, const GetEvidenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AuditManagerClient::GetEvidence, request, handler, context);
        }

        /**
         * <p> Gets all evidence from a specified evidence folder in Audit Manager.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/GetEvidenceByEvidenceFolder">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEvidenceByEvidenceFolderOutcome GetEvidenceByEvidenceFolder(const Model::GetEvidenceByEvidenceFolderRequest& request) const;

        /**
         * A Callable wrapper for GetEvidenceByEvidenceFolder that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetEvidenceByEvidenceFolderRequestT = Model::GetEvidenceByEvidenceFolderRequest>
        Model::GetEvidenceByEvidenceFolderOutcomeCallable GetEvidenceByEvidenceFolderCallable(const GetEvidenceByEvidenceFolderRequestT& request) const
        {
            return SubmitCallable(&AuditManagerClient::GetEvidenceByEvidenceFolder, request);
        }

        /**
         * An Async wrapper for GetEvidenceByEvidenceFolder that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEvidenceByEvidenceFolderRequestT = Model::GetEvidenceByEvidenceFolderRequest>
        void GetEvidenceByEvidenceFolderAsync(const GetEvidenceByEvidenceFolderRequestT& request, const GetEvidenceByEvidenceFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AuditManagerClient::GetEvidenceByEvidenceFolder, request, handler, context);
        }

        /**
         * <p>Creates a presigned Amazon S3 URL that can be used to upload a file as manual
         * evidence. For instructions on how to use this operation, see <a
         * href="https://docs.aws.amazon.com/audit-manager/latest/userguide/upload-evidence.html#how-to-upload-manual-evidence-files">Upload
         * a file from your browser </a> in the <i>Audit Manager User Guide</i>.</p> <p>The
         * following restrictions apply to this operation:</p> <ul> <li> <p>Maximum size of
         * an individual evidence file: 100 MB</p> </li> <li> <p>Number of daily manual
         * evidence uploads per control: 100</p> </li> <li> <p>Supported file formats: See
         * <a
         * href="https://docs.aws.amazon.com/audit-manager/latest/userguide/upload-evidence.html#supported-manual-evidence-files">Supported
         * file types for manual evidence</a> in the <i>Audit Manager User Guide</i> </p>
         * </li> </ul> <p>For more information about Audit Manager service restrictions,
         * see <a
         * href="https://docs.aws.amazon.com/audit-manager/latest/userguide/service-quotas.html">Quotas
         * and restrictions for Audit Manager</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/GetEvidenceFileUploadUrl">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEvidenceFileUploadUrlOutcome GetEvidenceFileUploadUrl(const Model::GetEvidenceFileUploadUrlRequest& request) const;

        /**
         * A Callable wrapper for GetEvidenceFileUploadUrl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetEvidenceFileUploadUrlRequestT = Model::GetEvidenceFileUploadUrlRequest>
        Model::GetEvidenceFileUploadUrlOutcomeCallable GetEvidenceFileUploadUrlCallable(const GetEvidenceFileUploadUrlRequestT& request) const
        {
            return SubmitCallable(&AuditManagerClient::GetEvidenceFileUploadUrl, request);
        }

        /**
         * An Async wrapper for GetEvidenceFileUploadUrl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEvidenceFileUploadUrlRequestT = Model::GetEvidenceFileUploadUrlRequest>
        void GetEvidenceFileUploadUrlAsync(const GetEvidenceFileUploadUrlRequestT& request, const GetEvidenceFileUploadUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AuditManagerClient::GetEvidenceFileUploadUrl, request, handler, context);
        }

        /**
         * <p> Gets an evidence folder from a specified assessment in Audit Manager.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/GetEvidenceFolder">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEvidenceFolderOutcome GetEvidenceFolder(const Model::GetEvidenceFolderRequest& request) const;

        /**
         * A Callable wrapper for GetEvidenceFolder that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetEvidenceFolderRequestT = Model::GetEvidenceFolderRequest>
        Model::GetEvidenceFolderOutcomeCallable GetEvidenceFolderCallable(const GetEvidenceFolderRequestT& request) const
        {
            return SubmitCallable(&AuditManagerClient::GetEvidenceFolder, request);
        }

        /**
         * An Async wrapper for GetEvidenceFolder that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEvidenceFolderRequestT = Model::GetEvidenceFolderRequest>
        void GetEvidenceFolderAsync(const GetEvidenceFolderRequestT& request, const GetEvidenceFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AuditManagerClient::GetEvidenceFolder, request, handler, context);
        }

        /**
         * <p> Gets the evidence folders from a specified assessment in Audit Manager.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/GetEvidenceFoldersByAssessment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEvidenceFoldersByAssessmentOutcome GetEvidenceFoldersByAssessment(const Model::GetEvidenceFoldersByAssessmentRequest& request) const;

        /**
         * A Callable wrapper for GetEvidenceFoldersByAssessment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetEvidenceFoldersByAssessmentRequestT = Model::GetEvidenceFoldersByAssessmentRequest>
        Model::GetEvidenceFoldersByAssessmentOutcomeCallable GetEvidenceFoldersByAssessmentCallable(const GetEvidenceFoldersByAssessmentRequestT& request) const
        {
            return SubmitCallable(&AuditManagerClient::GetEvidenceFoldersByAssessment, request);
        }

        /**
         * An Async wrapper for GetEvidenceFoldersByAssessment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEvidenceFoldersByAssessmentRequestT = Model::GetEvidenceFoldersByAssessmentRequest>
        void GetEvidenceFoldersByAssessmentAsync(const GetEvidenceFoldersByAssessmentRequestT& request, const GetEvidenceFoldersByAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AuditManagerClient::GetEvidenceFoldersByAssessment, request, handler, context);
        }

        /**
         * <p> Gets a list of evidence folders that are associated with a specified control
         * in an Audit Manager assessment. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/GetEvidenceFoldersByAssessmentControl">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEvidenceFoldersByAssessmentControlOutcome GetEvidenceFoldersByAssessmentControl(const Model::GetEvidenceFoldersByAssessmentControlRequest& request) const;

        /**
         * A Callable wrapper for GetEvidenceFoldersByAssessmentControl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetEvidenceFoldersByAssessmentControlRequestT = Model::GetEvidenceFoldersByAssessmentControlRequest>
        Model::GetEvidenceFoldersByAssessmentControlOutcomeCallable GetEvidenceFoldersByAssessmentControlCallable(const GetEvidenceFoldersByAssessmentControlRequestT& request) const
        {
            return SubmitCallable(&AuditManagerClient::GetEvidenceFoldersByAssessmentControl, request);
        }

        /**
         * An Async wrapper for GetEvidenceFoldersByAssessmentControl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEvidenceFoldersByAssessmentControlRequestT = Model::GetEvidenceFoldersByAssessmentControlRequest>
        void GetEvidenceFoldersByAssessmentControlAsync(const GetEvidenceFoldersByAssessmentControlRequestT& request, const GetEvidenceFoldersByAssessmentControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AuditManagerClient::GetEvidenceFoldersByAssessmentControl, request, handler, context);
        }

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
        template<typename GetInsightsRequestT = Model::GetInsightsRequest>
        Model::GetInsightsOutcomeCallable GetInsightsCallable(const GetInsightsRequestT& request) const
        {
            return SubmitCallable(&AuditManagerClient::GetInsights, request);
        }

        /**
         * An Async wrapper for GetInsights that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetInsightsRequestT = Model::GetInsightsRequest>
        void GetInsightsAsync(const GetInsightsRequestT& request, const GetInsightsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AuditManagerClient::GetInsights, request, handler, context);
        }

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
        template<typename GetInsightsByAssessmentRequestT = Model::GetInsightsByAssessmentRequest>
        Model::GetInsightsByAssessmentOutcomeCallable GetInsightsByAssessmentCallable(const GetInsightsByAssessmentRequestT& request) const
        {
            return SubmitCallable(&AuditManagerClient::GetInsightsByAssessment, request);
        }

        /**
         * An Async wrapper for GetInsightsByAssessment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetInsightsByAssessmentRequestT = Model::GetInsightsByAssessmentRequest>
        void GetInsightsByAssessmentAsync(const GetInsightsByAssessmentRequestT& request, const GetInsightsByAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AuditManagerClient::GetInsightsByAssessment, request, handler, context);
        }

        /**
         * <p> Gets the name of the delegated Amazon Web Services administrator account for
         * a specified organization. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/GetOrganizationAdminAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOrganizationAdminAccountOutcome GetOrganizationAdminAccount(const Model::GetOrganizationAdminAccountRequest& request) const;

        /**
         * A Callable wrapper for GetOrganizationAdminAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetOrganizationAdminAccountRequestT = Model::GetOrganizationAdminAccountRequest>
        Model::GetOrganizationAdminAccountOutcomeCallable GetOrganizationAdminAccountCallable(const GetOrganizationAdminAccountRequestT& request) const
        {
            return SubmitCallable(&AuditManagerClient::GetOrganizationAdminAccount, request);
        }

        /**
         * An Async wrapper for GetOrganizationAdminAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetOrganizationAdminAccountRequestT = Model::GetOrganizationAdminAccountRequest>
        void GetOrganizationAdminAccountAsync(const GetOrganizationAdminAccountRequestT& request, const GetOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AuditManagerClient::GetOrganizationAdminAccount, request, handler, context);
        }

        /**
         * <p>Gets a list of all of the Amazon Web Services that you can choose to include
         * in your assessment. When you <a
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
        template<typename GetServicesInScopeRequestT = Model::GetServicesInScopeRequest>
        Model::GetServicesInScopeOutcomeCallable GetServicesInScopeCallable(const GetServicesInScopeRequestT& request) const
        {
            return SubmitCallable(&AuditManagerClient::GetServicesInScope, request);
        }

        /**
         * An Async wrapper for GetServicesInScope that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetServicesInScopeRequestT = Model::GetServicesInScopeRequest>
        void GetServicesInScopeAsync(const GetServicesInScopeRequestT& request, const GetServicesInScopeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AuditManagerClient::GetServicesInScope, request, handler, context);
        }

        /**
         * <p> Gets the settings for a specified Amazon Web Services account.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/GetSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSettingsOutcome GetSettings(const Model::GetSettingsRequest& request) const;

        /**
         * A Callable wrapper for GetSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSettingsRequestT = Model::GetSettingsRequest>
        Model::GetSettingsOutcomeCallable GetSettingsCallable(const GetSettingsRequestT& request) const
        {
            return SubmitCallable(&AuditManagerClient::GetSettings, request);
        }

        /**
         * An Async wrapper for GetSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSettingsRequestT = Model::GetSettingsRequest>
        void GetSettingsAsync(const GetSettingsRequestT& request, const GetSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AuditManagerClient::GetSettings, request, handler, context);
        }

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
        template<typename ListAssessmentControlInsightsByControlDomainRequestT = Model::ListAssessmentControlInsightsByControlDomainRequest>
        Model::ListAssessmentControlInsightsByControlDomainOutcomeCallable ListAssessmentControlInsightsByControlDomainCallable(const ListAssessmentControlInsightsByControlDomainRequestT& request) const
        {
            return SubmitCallable(&AuditManagerClient::ListAssessmentControlInsightsByControlDomain, request);
        }

        /**
         * An Async wrapper for ListAssessmentControlInsightsByControlDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAssessmentControlInsightsByControlDomainRequestT = Model::ListAssessmentControlInsightsByControlDomainRequest>
        void ListAssessmentControlInsightsByControlDomainAsync(const ListAssessmentControlInsightsByControlDomainRequestT& request, const ListAssessmentControlInsightsByControlDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AuditManagerClient::ListAssessmentControlInsightsByControlDomain, request, handler, context);
        }

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
        template<typename ListAssessmentFrameworkShareRequestsRequestT = Model::ListAssessmentFrameworkShareRequestsRequest>
        Model::ListAssessmentFrameworkShareRequestsOutcomeCallable ListAssessmentFrameworkShareRequestsCallable(const ListAssessmentFrameworkShareRequestsRequestT& request) const
        {
            return SubmitCallable(&AuditManagerClient::ListAssessmentFrameworkShareRequests, request);
        }

        /**
         * An Async wrapper for ListAssessmentFrameworkShareRequests that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAssessmentFrameworkShareRequestsRequestT = Model::ListAssessmentFrameworkShareRequestsRequest>
        void ListAssessmentFrameworkShareRequestsAsync(const ListAssessmentFrameworkShareRequestsRequestT& request, const ListAssessmentFrameworkShareRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AuditManagerClient::ListAssessmentFrameworkShareRequests, request, handler, context);
        }

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
        template<typename ListAssessmentFrameworksRequestT = Model::ListAssessmentFrameworksRequest>
        Model::ListAssessmentFrameworksOutcomeCallable ListAssessmentFrameworksCallable(const ListAssessmentFrameworksRequestT& request) const
        {
            return SubmitCallable(&AuditManagerClient::ListAssessmentFrameworks, request);
        }

        /**
         * An Async wrapper for ListAssessmentFrameworks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAssessmentFrameworksRequestT = Model::ListAssessmentFrameworksRequest>
        void ListAssessmentFrameworksAsync(const ListAssessmentFrameworksRequestT& request, const ListAssessmentFrameworksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AuditManagerClient::ListAssessmentFrameworks, request, handler, context);
        }

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
        template<typename ListAssessmentReportsRequestT = Model::ListAssessmentReportsRequest>
        Model::ListAssessmentReportsOutcomeCallable ListAssessmentReportsCallable(const ListAssessmentReportsRequestT& request) const
        {
            return SubmitCallable(&AuditManagerClient::ListAssessmentReports, request);
        }

        /**
         * An Async wrapper for ListAssessmentReports that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAssessmentReportsRequestT = Model::ListAssessmentReportsRequest>
        void ListAssessmentReportsAsync(const ListAssessmentReportsRequestT& request, const ListAssessmentReportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AuditManagerClient::ListAssessmentReports, request, handler, context);
        }

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
        template<typename ListAssessmentsRequestT = Model::ListAssessmentsRequest>
        Model::ListAssessmentsOutcomeCallable ListAssessmentsCallable(const ListAssessmentsRequestT& request) const
        {
            return SubmitCallable(&AuditManagerClient::ListAssessments, request);
        }

        /**
         * An Async wrapper for ListAssessments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAssessmentsRequestT = Model::ListAssessmentsRequest>
        void ListAssessmentsAsync(const ListAssessmentsRequestT& request, const ListAssessmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AuditManagerClient::ListAssessments, request, handler, context);
        }

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
        template<typename ListControlDomainInsightsRequestT = Model::ListControlDomainInsightsRequest>
        Model::ListControlDomainInsightsOutcomeCallable ListControlDomainInsightsCallable(const ListControlDomainInsightsRequestT& request) const
        {
            return SubmitCallable(&AuditManagerClient::ListControlDomainInsights, request);
        }

        /**
         * An Async wrapper for ListControlDomainInsights that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListControlDomainInsightsRequestT = Model::ListControlDomainInsightsRequest>
        void ListControlDomainInsightsAsync(const ListControlDomainInsightsRequestT& request, const ListControlDomainInsightsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AuditManagerClient::ListControlDomainInsights, request, handler, context);
        }

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
        template<typename ListControlDomainInsightsByAssessmentRequestT = Model::ListControlDomainInsightsByAssessmentRequest>
        Model::ListControlDomainInsightsByAssessmentOutcomeCallable ListControlDomainInsightsByAssessmentCallable(const ListControlDomainInsightsByAssessmentRequestT& request) const
        {
            return SubmitCallable(&AuditManagerClient::ListControlDomainInsightsByAssessment, request);
        }

        /**
         * An Async wrapper for ListControlDomainInsightsByAssessment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListControlDomainInsightsByAssessmentRequestT = Model::ListControlDomainInsightsByAssessmentRequest>
        void ListControlDomainInsightsByAssessmentAsync(const ListControlDomainInsightsByAssessmentRequestT& request, const ListControlDomainInsightsByAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AuditManagerClient::ListControlDomainInsightsByAssessment, request, handler, context);
        }

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
        template<typename ListControlInsightsByControlDomainRequestT = Model::ListControlInsightsByControlDomainRequest>
        Model::ListControlInsightsByControlDomainOutcomeCallable ListControlInsightsByControlDomainCallable(const ListControlInsightsByControlDomainRequestT& request) const
        {
            return SubmitCallable(&AuditManagerClient::ListControlInsightsByControlDomain, request);
        }

        /**
         * An Async wrapper for ListControlInsightsByControlDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListControlInsightsByControlDomainRequestT = Model::ListControlInsightsByControlDomainRequest>
        void ListControlInsightsByControlDomainAsync(const ListControlInsightsByControlDomainRequestT& request, const ListControlInsightsByControlDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AuditManagerClient::ListControlInsightsByControlDomain, request, handler, context);
        }

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
        template<typename ListControlsRequestT = Model::ListControlsRequest>
        Model::ListControlsOutcomeCallable ListControlsCallable(const ListControlsRequestT& request) const
        {
            return SubmitCallable(&AuditManagerClient::ListControls, request);
        }

        /**
         * An Async wrapper for ListControls that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListControlsRequestT = Model::ListControlsRequest>
        void ListControlsAsync(const ListControlsRequestT& request, const ListControlsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AuditManagerClient::ListControls, request, handler, context);
        }

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
        template<typename ListKeywordsForDataSourceRequestT = Model::ListKeywordsForDataSourceRequest>
        Model::ListKeywordsForDataSourceOutcomeCallable ListKeywordsForDataSourceCallable(const ListKeywordsForDataSourceRequestT& request) const
        {
            return SubmitCallable(&AuditManagerClient::ListKeywordsForDataSource, request);
        }

        /**
         * An Async wrapper for ListKeywordsForDataSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListKeywordsForDataSourceRequestT = Model::ListKeywordsForDataSourceRequest>
        void ListKeywordsForDataSourceAsync(const ListKeywordsForDataSourceRequestT& request, const ListKeywordsForDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AuditManagerClient::ListKeywordsForDataSource, request, handler, context);
        }

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
        template<typename ListNotificationsRequestT = Model::ListNotificationsRequest>
        Model::ListNotificationsOutcomeCallable ListNotificationsCallable(const ListNotificationsRequestT& request) const
        {
            return SubmitCallable(&AuditManagerClient::ListNotifications, request);
        }

        /**
         * An Async wrapper for ListNotifications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListNotificationsRequestT = Model::ListNotificationsRequest>
        void ListNotificationsAsync(const ListNotificationsRequestT& request, const ListNotificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AuditManagerClient::ListNotifications, request, handler, context);
        }

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
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&AuditManagerClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AuditManagerClient::ListTagsForResource, request, handler, context);
        }

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
        template<typename RegisterAccountRequestT = Model::RegisterAccountRequest>
        Model::RegisterAccountOutcomeCallable RegisterAccountCallable(const RegisterAccountRequestT& request) const
        {
            return SubmitCallable(&AuditManagerClient::RegisterAccount, request);
        }

        /**
         * An Async wrapper for RegisterAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RegisterAccountRequestT = Model::RegisterAccountRequest>
        void RegisterAccountAsync(const RegisterAccountRequestT& request, const RegisterAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AuditManagerClient::RegisterAccount, request, handler, context);
        }

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
        template<typename RegisterOrganizationAdminAccountRequestT = Model::RegisterOrganizationAdminAccountRequest>
        Model::RegisterOrganizationAdminAccountOutcomeCallable RegisterOrganizationAdminAccountCallable(const RegisterOrganizationAdminAccountRequestT& request) const
        {
            return SubmitCallable(&AuditManagerClient::RegisterOrganizationAdminAccount, request);
        }

        /**
         * An Async wrapper for RegisterOrganizationAdminAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RegisterOrganizationAdminAccountRequestT = Model::RegisterOrganizationAdminAccountRequest>
        void RegisterOrganizationAdminAccountAsync(const RegisterOrganizationAdminAccountRequestT& request, const RegisterOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AuditManagerClient::RegisterOrganizationAdminAccount, request, handler, context);
        }

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
        template<typename StartAssessmentFrameworkShareRequestT = Model::StartAssessmentFrameworkShareRequest>
        Model::StartAssessmentFrameworkShareOutcomeCallable StartAssessmentFrameworkShareCallable(const StartAssessmentFrameworkShareRequestT& request) const
        {
            return SubmitCallable(&AuditManagerClient::StartAssessmentFrameworkShare, request);
        }

        /**
         * An Async wrapper for StartAssessmentFrameworkShare that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartAssessmentFrameworkShareRequestT = Model::StartAssessmentFrameworkShareRequest>
        void StartAssessmentFrameworkShareAsync(const StartAssessmentFrameworkShareRequestT& request, const StartAssessmentFrameworkShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AuditManagerClient::StartAssessmentFrameworkShare, request, handler, context);
        }

        /**
         * <p> Tags the specified resource in Audit Manager. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&AuditManagerClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AuditManagerClient::TagResource, request, handler, context);
        }

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
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&AuditManagerClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AuditManagerClient::UntagResource, request, handler, context);
        }

        /**
         * <p> Edits an Audit Manager assessment. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/UpdateAssessment">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAssessmentOutcome UpdateAssessment(const Model::UpdateAssessmentRequest& request) const;

        /**
         * A Callable wrapper for UpdateAssessment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAssessmentRequestT = Model::UpdateAssessmentRequest>
        Model::UpdateAssessmentOutcomeCallable UpdateAssessmentCallable(const UpdateAssessmentRequestT& request) const
        {
            return SubmitCallable(&AuditManagerClient::UpdateAssessment, request);
        }

        /**
         * An Async wrapper for UpdateAssessment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAssessmentRequestT = Model::UpdateAssessmentRequest>
        void UpdateAssessmentAsync(const UpdateAssessmentRequestT& request, const UpdateAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AuditManagerClient::UpdateAssessment, request, handler, context);
        }

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
        template<typename UpdateAssessmentControlRequestT = Model::UpdateAssessmentControlRequest>
        Model::UpdateAssessmentControlOutcomeCallable UpdateAssessmentControlCallable(const UpdateAssessmentControlRequestT& request) const
        {
            return SubmitCallable(&AuditManagerClient::UpdateAssessmentControl, request);
        }

        /**
         * An Async wrapper for UpdateAssessmentControl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAssessmentControlRequestT = Model::UpdateAssessmentControlRequest>
        void UpdateAssessmentControlAsync(const UpdateAssessmentControlRequestT& request, const UpdateAssessmentControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AuditManagerClient::UpdateAssessmentControl, request, handler, context);
        }

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
        template<typename UpdateAssessmentControlSetStatusRequestT = Model::UpdateAssessmentControlSetStatusRequest>
        Model::UpdateAssessmentControlSetStatusOutcomeCallable UpdateAssessmentControlSetStatusCallable(const UpdateAssessmentControlSetStatusRequestT& request) const
        {
            return SubmitCallable(&AuditManagerClient::UpdateAssessmentControlSetStatus, request);
        }

        /**
         * An Async wrapper for UpdateAssessmentControlSetStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAssessmentControlSetStatusRequestT = Model::UpdateAssessmentControlSetStatusRequest>
        void UpdateAssessmentControlSetStatusAsync(const UpdateAssessmentControlSetStatusRequestT& request, const UpdateAssessmentControlSetStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AuditManagerClient::UpdateAssessmentControlSetStatus, request, handler, context);
        }

        /**
         * <p> Updates a custom framework in Audit Manager. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/UpdateAssessmentFramework">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAssessmentFrameworkOutcome UpdateAssessmentFramework(const Model::UpdateAssessmentFrameworkRequest& request) const;

        /**
         * A Callable wrapper for UpdateAssessmentFramework that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAssessmentFrameworkRequestT = Model::UpdateAssessmentFrameworkRequest>
        Model::UpdateAssessmentFrameworkOutcomeCallable UpdateAssessmentFrameworkCallable(const UpdateAssessmentFrameworkRequestT& request) const
        {
            return SubmitCallable(&AuditManagerClient::UpdateAssessmentFramework, request);
        }

        /**
         * An Async wrapper for UpdateAssessmentFramework that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAssessmentFrameworkRequestT = Model::UpdateAssessmentFrameworkRequest>
        void UpdateAssessmentFrameworkAsync(const UpdateAssessmentFrameworkRequestT& request, const UpdateAssessmentFrameworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AuditManagerClient::UpdateAssessmentFramework, request, handler, context);
        }

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
        template<typename UpdateAssessmentFrameworkShareRequestT = Model::UpdateAssessmentFrameworkShareRequest>
        Model::UpdateAssessmentFrameworkShareOutcomeCallable UpdateAssessmentFrameworkShareCallable(const UpdateAssessmentFrameworkShareRequestT& request) const
        {
            return SubmitCallable(&AuditManagerClient::UpdateAssessmentFrameworkShare, request);
        }

        /**
         * An Async wrapper for UpdateAssessmentFrameworkShare that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAssessmentFrameworkShareRequestT = Model::UpdateAssessmentFrameworkShareRequest>
        void UpdateAssessmentFrameworkShareAsync(const UpdateAssessmentFrameworkShareRequestT& request, const UpdateAssessmentFrameworkShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AuditManagerClient::UpdateAssessmentFrameworkShare, request, handler, context);
        }

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
        template<typename UpdateAssessmentStatusRequestT = Model::UpdateAssessmentStatusRequest>
        Model::UpdateAssessmentStatusOutcomeCallable UpdateAssessmentStatusCallable(const UpdateAssessmentStatusRequestT& request) const
        {
            return SubmitCallable(&AuditManagerClient::UpdateAssessmentStatus, request);
        }

        /**
         * An Async wrapper for UpdateAssessmentStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAssessmentStatusRequestT = Model::UpdateAssessmentStatusRequest>
        void UpdateAssessmentStatusAsync(const UpdateAssessmentStatusRequestT& request, const UpdateAssessmentStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AuditManagerClient::UpdateAssessmentStatus, request, handler, context);
        }

        /**
         * <p> Updates a custom control in Audit Manager. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/UpdateControl">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateControlOutcome UpdateControl(const Model::UpdateControlRequest& request) const;

        /**
         * A Callable wrapper for UpdateControl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateControlRequestT = Model::UpdateControlRequest>
        Model::UpdateControlOutcomeCallable UpdateControlCallable(const UpdateControlRequestT& request) const
        {
            return SubmitCallable(&AuditManagerClient::UpdateControl, request);
        }

        /**
         * An Async wrapper for UpdateControl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateControlRequestT = Model::UpdateControlRequest>
        void UpdateControlAsync(const UpdateControlRequestT& request, const UpdateControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AuditManagerClient::UpdateControl, request, handler, context);
        }

        /**
         * <p> Updates Audit Manager settings for the current account. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/UpdateSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSettingsOutcome UpdateSettings(const Model::UpdateSettingsRequest& request) const;

        /**
         * A Callable wrapper for UpdateSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSettingsRequestT = Model::UpdateSettingsRequest>
        Model::UpdateSettingsOutcomeCallable UpdateSettingsCallable(const UpdateSettingsRequestT& request) const
        {
            return SubmitCallable(&AuditManagerClient::UpdateSettings, request);
        }

        /**
         * An Async wrapper for UpdateSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSettingsRequestT = Model::UpdateSettingsRequest>
        void UpdateSettingsAsync(const UpdateSettingsRequestT& request, const UpdateSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AuditManagerClient::UpdateSettings, request, handler, context);
        }

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
        template<typename ValidateAssessmentReportIntegrityRequestT = Model::ValidateAssessmentReportIntegrityRequest>
        Model::ValidateAssessmentReportIntegrityOutcomeCallable ValidateAssessmentReportIntegrityCallable(const ValidateAssessmentReportIntegrityRequestT& request) const
        {
            return SubmitCallable(&AuditManagerClient::ValidateAssessmentReportIntegrity, request);
        }

        /**
         * An Async wrapper for ValidateAssessmentReportIntegrity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ValidateAssessmentReportIntegrityRequestT = Model::ValidateAssessmentReportIntegrityRequest>
        void ValidateAssessmentReportIntegrityAsync(const ValidateAssessmentReportIntegrityRequestT& request, const ValidateAssessmentReportIntegrityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AuditManagerClient::ValidateAssessmentReportIntegrity, request, handler, context);
        }


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
