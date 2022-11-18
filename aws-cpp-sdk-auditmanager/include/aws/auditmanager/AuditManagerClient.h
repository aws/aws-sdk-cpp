/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/auditmanager/AuditManagerServiceClientModel.h>
#include <aws/auditmanager/AuditManagerLegacyAsyncMacros.h>

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
  class AWS_AUDITMANAGER_API AuditManagerClient : public Aws::Client::AWSJsonClient
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
         * <p> Associates an evidence folder to an assessment report in a Audit Manager
         * assessment. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/AssociateAssessmentReportEvidenceFolder">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateAssessmentReportEvidenceFolderOutcome AssociateAssessmentReportEvidenceFolder(const Model::AssociateAssessmentReportEvidenceFolderRequest& request) const;


        /**
         * <p> Associates a list of evidence to an assessment report in an Audit Manager
         * assessment. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/BatchAssociateAssessmentReportEvidence">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchAssociateAssessmentReportEvidenceOutcome BatchAssociateAssessmentReportEvidence(const Model::BatchAssociateAssessmentReportEvidenceRequest& request) const;


        /**
         * <p> Creates a batch of delegations for an assessment in Audit Manager.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/BatchCreateDelegationByAssessment">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchCreateDelegationByAssessmentOutcome BatchCreateDelegationByAssessment(const Model::BatchCreateDelegationByAssessmentRequest& request) const;


        /**
         * <p> Deletes a batch of delegations for an assessment in Audit Manager.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/BatchDeleteDelegationByAssessment">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDeleteDelegationByAssessmentOutcome BatchDeleteDelegationByAssessment(const Model::BatchDeleteDelegationByAssessmentRequest& request) const;


        /**
         * <p> Disassociates a list of evidence from an assessment report in Audit Manager.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/BatchDisassociateAssessmentReportEvidence">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDisassociateAssessmentReportEvidenceOutcome BatchDisassociateAssessmentReportEvidence(const Model::BatchDisassociateAssessmentReportEvidenceRequest& request) const;


        /**
         * <p> Uploads one or more pieces of evidence to a control in an Audit Manager
         * assessment. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/BatchImportEvidenceToAssessmentControl">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchImportEvidenceToAssessmentControlOutcome BatchImportEvidenceToAssessmentControl(const Model::BatchImportEvidenceToAssessmentControlRequest& request) const;


        /**
         * <p> Creates an assessment in Audit Manager. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/CreateAssessment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAssessmentOutcome CreateAssessment(const Model::CreateAssessmentRequest& request) const;


        /**
         * <p> Creates a custom framework in Audit Manager. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/CreateAssessmentFramework">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAssessmentFrameworkOutcome CreateAssessmentFramework(const Model::CreateAssessmentFrameworkRequest& request) const;


        /**
         * <p> Creates an assessment report for the specified assessment. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/CreateAssessmentReport">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAssessmentReportOutcome CreateAssessmentReport(const Model::CreateAssessmentReportRequest& request) const;


        /**
         * <p> Creates a new custom control in Audit Manager. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/CreateControl">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateControlOutcome CreateControl(const Model::CreateControlRequest& request) const;


        /**
         * <p> Deletes an assessment in Audit Manager. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/DeleteAssessment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAssessmentOutcome DeleteAssessment(const Model::DeleteAssessmentRequest& request) const;


        /**
         * <p> Deletes a custom framework in Audit Manager. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/DeleteAssessmentFramework">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAssessmentFrameworkOutcome DeleteAssessmentFramework(const Model::DeleteAssessmentFrameworkRequest& request) const;


        /**
         * <p> Deletes a share request for a custom framework in Audit Manager.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/DeleteAssessmentFrameworkShare">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAssessmentFrameworkShareOutcome DeleteAssessmentFrameworkShare(const Model::DeleteAssessmentFrameworkShareRequest& request) const;


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
         * <p> Deletes a custom control in Audit Manager. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/DeleteControl">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteControlOutcome DeleteControl(const Model::DeleteControlRequest& request) const;


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
         * <p>Removes the specified Amazon Web Services account as a delegated
         * administrator for Audit Manager. </p>  <p>When you remove a delegated
         * administrator from your Audit Manager settings, you continue to have access to
         * the evidence that you previously collected under that account. This is also the
         * case when you deregister a delegated administrator from Organizations. However,
         * Audit Manager will stop collecting and attaching evidence to that delegated
         * administrator account moving forward.</p>   <p>When you
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
         * available delete operations are listed above.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/DeregisterOrganizationAdminAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterOrganizationAdminAccountOutcome DeregisterOrganizationAdminAccount(const Model::DeregisterOrganizationAdminAccountRequest& request) const;


        /**
         * <p> Disassociates an evidence folder from the specified assessment report in
         * Audit Manager. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/DisassociateAssessmentReportEvidenceFolder">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateAssessmentReportEvidenceFolderOutcome DisassociateAssessmentReportEvidenceFolder(const Model::DisassociateAssessmentReportEvidenceFolderRequest& request) const;


        /**
         * <p> Returns the registration status of an account in Audit Manager.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/GetAccountStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccountStatusOutcome GetAccountStatus(const Model::GetAccountStatusRequest& request) const;


        /**
         * <p>Returns an assessment from Audit Manager. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/GetAssessment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAssessmentOutcome GetAssessment(const Model::GetAssessmentRequest& request) const;


        /**
         * <p>Returns a framework from Audit Manager. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/GetAssessmentFramework">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAssessmentFrameworkOutcome GetAssessmentFramework(const Model::GetAssessmentFrameworkRequest& request) const;


        /**
         * <p> Returns the URL of an assessment report in Audit Manager. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/GetAssessmentReportUrl">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAssessmentReportUrlOutcome GetAssessmentReportUrl(const Model::GetAssessmentReportUrlRequest& request) const;


        /**
         * <p> Returns a list of changelogs from Audit Manager. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/GetChangeLogs">AWS
         * API Reference</a></p>
         */
        virtual Model::GetChangeLogsOutcome GetChangeLogs(const Model::GetChangeLogsRequest& request) const;


        /**
         * <p> Returns a control from Audit Manager. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/GetControl">AWS
         * API Reference</a></p>
         */
        virtual Model::GetControlOutcome GetControl(const Model::GetControlRequest& request) const;


        /**
         * <p> Returns a list of delegations from an audit owner to a delegate.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/GetDelegations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDelegationsOutcome GetDelegations(const Model::GetDelegationsRequest& request) const;


        /**
         * <p> Returns evidence from Audit Manager. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/GetEvidence">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEvidenceOutcome GetEvidence(const Model::GetEvidenceRequest& request) const;


        /**
         * <p> Returns all evidence from a specified evidence folder in Audit Manager.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/GetEvidenceByEvidenceFolder">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEvidenceByEvidenceFolderOutcome GetEvidenceByEvidenceFolder(const Model::GetEvidenceByEvidenceFolderRequest& request) const;


        /**
         * <p> Returns an evidence folder from the specified assessment in Audit Manager.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/GetEvidenceFolder">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEvidenceFolderOutcome GetEvidenceFolder(const Model::GetEvidenceFolderRequest& request) const;


        /**
         * <p> Returns the evidence folders from a specified assessment in Audit Manager.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/GetEvidenceFoldersByAssessment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEvidenceFoldersByAssessmentOutcome GetEvidenceFoldersByAssessment(const Model::GetEvidenceFoldersByAssessmentRequest& request) const;


        /**
         * <p> Returns a list of evidence folders that are associated with a specified
         * control of an assessment in Audit Manager. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/GetEvidenceFoldersByAssessmentControl">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEvidenceFoldersByAssessmentControlOutcome GetEvidenceFoldersByAssessmentControl(const Model::GetEvidenceFoldersByAssessmentControlRequest& request) const;


        /**
         * <p>Gets the latest analytics data for all your current active assessments.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/GetInsights">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInsightsOutcome GetInsights(const Model::GetInsightsRequest& request) const;


        /**
         * <p>Gets the latest analytics data for a specific active assessment.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/GetInsightsByAssessment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInsightsByAssessmentOutcome GetInsightsByAssessment(const Model::GetInsightsByAssessmentRequest& request) const;


        /**
         * <p> Returns the name of the delegated Amazon Web Services administrator account
         * for the organization. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/GetOrganizationAdminAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOrganizationAdminAccountOutcome GetOrganizationAdminAccount(const Model::GetOrganizationAdminAccountRequest& request) const;


        /**
         * <p> Returns a list of the in-scope Amazon Web Services for the specified
         * assessment. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/GetServicesInScope">AWS
         * API Reference</a></p>
         */
        virtual Model::GetServicesInScopeOutcome GetServicesInScope(const Model::GetServicesInScopeRequest& request) const;


        /**
         * <p> Returns the settings for the specified Amazon Web Services account.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/GetSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSettingsOutcome GetSettings(const Model::GetSettingsRequest& request) const;


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
         * <p> Returns a list of sent or received share requests for custom frameworks in
         * Audit Manager. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/ListAssessmentFrameworkShareRequests">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssessmentFrameworkShareRequestsOutcome ListAssessmentFrameworkShareRequests(const Model::ListAssessmentFrameworkShareRequestsRequest& request) const;


        /**
         * <p> Returns a list of the frameworks that are available in the Audit Manager
         * framework library. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/ListAssessmentFrameworks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssessmentFrameworksOutcome ListAssessmentFrameworks(const Model::ListAssessmentFrameworksRequest& request) const;


        /**
         * <p> Returns a list of assessment reports created in Audit Manager.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/ListAssessmentReports">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssessmentReportsOutcome ListAssessmentReports(const Model::ListAssessmentReportsRequest& request) const;


        /**
         * <p> Returns a list of current and past assessments from Audit Manager.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/ListAssessments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssessmentsOutcome ListAssessments(const Model::ListAssessmentsRequest& request) const;


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
         * <p> Returns a list of controls from Audit Manager. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/ListControls">AWS
         * API Reference</a></p>
         */
        virtual Model::ListControlsOutcome ListControls(const Model::ListControlsRequest& request) const;


        /**
         * <p> Returns a list of keywords that are pre-mapped to the specified control data
         * source. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/ListKeywordsForDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListKeywordsForDataSourceOutcome ListKeywordsForDataSource(const Model::ListKeywordsForDataSourceRequest& request) const;


        /**
         * <p> Returns a list of all Audit Manager notifications. </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/ListNotifications">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNotificationsOutcome ListNotifications(const Model::ListNotificationsRequest& request) const;


        /**
         * <p> Returns a list of tags for the specified resource in Audit Manager.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p> Enables Audit Manager for the specified Amazon Web Services account.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/RegisterAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterAccountOutcome RegisterAccount(const Model::RegisterAccountRequest& request) const;


        /**
         * <p> Enables an Amazon Web Services account within the organization as the
         * delegated administrator for Audit Manager. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/RegisterOrganizationAdminAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterOrganizationAdminAccountOutcome RegisterOrganizationAdminAccount(const Model::RegisterOrganizationAdminAccountRequest& request) const;


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
         * <p> Tags the specified resource in Audit Manager. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p> Removes a tag from a resource in Audit Manager. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p> Edits an Audit Manager assessment. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/UpdateAssessment">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAssessmentOutcome UpdateAssessment(const Model::UpdateAssessmentRequest& request) const;


        /**
         * <p> Updates a control within an assessment in Audit Manager. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/UpdateAssessmentControl">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAssessmentControlOutcome UpdateAssessmentControl(const Model::UpdateAssessmentControlRequest& request) const;


        /**
         * <p> Updates the status of a control set in an Audit Manager assessment.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/UpdateAssessmentControlSetStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAssessmentControlSetStatusOutcome UpdateAssessmentControlSetStatus(const Model::UpdateAssessmentControlSetStatusRequest& request) const;


        /**
         * <p> Updates a custom framework in Audit Manager. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/UpdateAssessmentFramework">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAssessmentFrameworkOutcome UpdateAssessmentFramework(const Model::UpdateAssessmentFrameworkRequest& request) const;


        /**
         * <p> Updates a share request for a custom framework in Audit Manager.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/UpdateAssessmentFrameworkShare">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAssessmentFrameworkShareOutcome UpdateAssessmentFrameworkShare(const Model::UpdateAssessmentFrameworkShareRequest& request) const;


        /**
         * <p> Updates the status of an assessment in Audit Manager. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/UpdateAssessmentStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAssessmentStatusOutcome UpdateAssessmentStatus(const Model::UpdateAssessmentStatusRequest& request) const;


        /**
         * <p> Updates a custom control in Audit Manager. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/UpdateControl">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateControlOutcome UpdateControl(const Model::UpdateControlRequest& request) const;


        /**
         * <p> Updates Audit Manager settings for the current user account. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/UpdateSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSettingsOutcome UpdateSettings(const Model::UpdateSettingsRequest& request) const;


        /**
         * <p> Validates the integrity of an assessment report in Audit Manager.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/ValidateAssessmentReportIntegrity">AWS
         * API Reference</a></p>
         */
        virtual Model::ValidateAssessmentReportIntegrityOutcome ValidateAssessmentReportIntegrity(const Model::ValidateAssessmentReportIntegrityRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<AuditManagerEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const AuditManagerClientConfiguration& clientConfiguration);

      AuditManagerClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<AuditManagerEndpointProviderBase> m_endpointProvider;
  };

} // namespace AuditManager
} // namespace Aws
