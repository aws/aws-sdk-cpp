/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/auditmanager/AuditManagerErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/auditmanager/AuditManagerEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in AuditManagerClient header */
#include <aws/auditmanager/model/AssociateAssessmentReportEvidenceFolderResult.h>
#include <aws/auditmanager/model/BatchAssociateAssessmentReportEvidenceResult.h>
#include <aws/auditmanager/model/BatchCreateDelegationByAssessmentResult.h>
#include <aws/auditmanager/model/BatchDeleteDelegationByAssessmentResult.h>
#include <aws/auditmanager/model/BatchDisassociateAssessmentReportEvidenceResult.h>
#include <aws/auditmanager/model/BatchImportEvidenceToAssessmentControlResult.h>
#include <aws/auditmanager/model/CreateAssessmentResult.h>
#include <aws/auditmanager/model/CreateAssessmentFrameworkResult.h>
#include <aws/auditmanager/model/CreateAssessmentReportResult.h>
#include <aws/auditmanager/model/CreateControlResult.h>
#include <aws/auditmanager/model/DeleteAssessmentResult.h>
#include <aws/auditmanager/model/DeleteAssessmentFrameworkResult.h>
#include <aws/auditmanager/model/DeleteAssessmentFrameworkShareResult.h>
#include <aws/auditmanager/model/DeleteAssessmentReportResult.h>
#include <aws/auditmanager/model/DeleteControlResult.h>
#include <aws/auditmanager/model/DeregisterAccountResult.h>
#include <aws/auditmanager/model/DeregisterOrganizationAdminAccountResult.h>
#include <aws/auditmanager/model/DisassociateAssessmentReportEvidenceFolderResult.h>
#include <aws/auditmanager/model/GetAccountStatusResult.h>
#include <aws/auditmanager/model/GetAssessmentResult.h>
#include <aws/auditmanager/model/GetAssessmentFrameworkResult.h>
#include <aws/auditmanager/model/GetAssessmentReportUrlResult.h>
#include <aws/auditmanager/model/GetChangeLogsResult.h>
#include <aws/auditmanager/model/GetControlResult.h>
#include <aws/auditmanager/model/GetDelegationsResult.h>
#include <aws/auditmanager/model/GetEvidenceResult.h>
#include <aws/auditmanager/model/GetEvidenceByEvidenceFolderResult.h>
#include <aws/auditmanager/model/GetEvidenceFolderResult.h>
#include <aws/auditmanager/model/GetEvidenceFoldersByAssessmentResult.h>
#include <aws/auditmanager/model/GetEvidenceFoldersByAssessmentControlResult.h>
#include <aws/auditmanager/model/GetInsightsResult.h>
#include <aws/auditmanager/model/GetInsightsByAssessmentResult.h>
#include <aws/auditmanager/model/GetOrganizationAdminAccountResult.h>
#include <aws/auditmanager/model/GetServicesInScopeResult.h>
#include <aws/auditmanager/model/GetSettingsResult.h>
#include <aws/auditmanager/model/ListAssessmentControlInsightsByControlDomainResult.h>
#include <aws/auditmanager/model/ListAssessmentFrameworkShareRequestsResult.h>
#include <aws/auditmanager/model/ListAssessmentFrameworksResult.h>
#include <aws/auditmanager/model/ListAssessmentReportsResult.h>
#include <aws/auditmanager/model/ListAssessmentsResult.h>
#include <aws/auditmanager/model/ListControlDomainInsightsResult.h>
#include <aws/auditmanager/model/ListControlDomainInsightsByAssessmentResult.h>
#include <aws/auditmanager/model/ListControlInsightsByControlDomainResult.h>
#include <aws/auditmanager/model/ListControlsResult.h>
#include <aws/auditmanager/model/ListKeywordsForDataSourceResult.h>
#include <aws/auditmanager/model/ListNotificationsResult.h>
#include <aws/auditmanager/model/ListTagsForResourceResult.h>
#include <aws/auditmanager/model/RegisterAccountResult.h>
#include <aws/auditmanager/model/RegisterOrganizationAdminAccountResult.h>
#include <aws/auditmanager/model/StartAssessmentFrameworkShareResult.h>
#include <aws/auditmanager/model/TagResourceResult.h>
#include <aws/auditmanager/model/UntagResourceResult.h>
#include <aws/auditmanager/model/UpdateAssessmentResult.h>
#include <aws/auditmanager/model/UpdateAssessmentControlResult.h>
#include <aws/auditmanager/model/UpdateAssessmentControlSetStatusResult.h>
#include <aws/auditmanager/model/UpdateAssessmentFrameworkResult.h>
#include <aws/auditmanager/model/UpdateAssessmentFrameworkShareResult.h>
#include <aws/auditmanager/model/UpdateAssessmentStatusResult.h>
#include <aws/auditmanager/model/UpdateControlResult.h>
#include <aws/auditmanager/model/UpdateSettingsResult.h>
#include <aws/auditmanager/model/ValidateAssessmentReportIntegrityResult.h>
/* End of service model headers required in AuditManagerClient header */

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

  namespace AuditManager
  {
    using AuditManagerClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using AuditManagerEndpointProviderBase = Aws::AuditManager::Endpoint::AuditManagerEndpointProviderBase;
    using AuditManagerEndpointProvider = Aws::AuditManager::Endpoint::AuditManagerEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in AuditManagerClient header */
      class AssociateAssessmentReportEvidenceFolderRequest;
      class BatchAssociateAssessmentReportEvidenceRequest;
      class BatchCreateDelegationByAssessmentRequest;
      class BatchDeleteDelegationByAssessmentRequest;
      class BatchDisassociateAssessmentReportEvidenceRequest;
      class BatchImportEvidenceToAssessmentControlRequest;
      class CreateAssessmentRequest;
      class CreateAssessmentFrameworkRequest;
      class CreateAssessmentReportRequest;
      class CreateControlRequest;
      class DeleteAssessmentRequest;
      class DeleteAssessmentFrameworkRequest;
      class DeleteAssessmentFrameworkShareRequest;
      class DeleteAssessmentReportRequest;
      class DeleteControlRequest;
      class DeregisterAccountRequest;
      class DeregisterOrganizationAdminAccountRequest;
      class DisassociateAssessmentReportEvidenceFolderRequest;
      class GetAccountStatusRequest;
      class GetAssessmentRequest;
      class GetAssessmentFrameworkRequest;
      class GetAssessmentReportUrlRequest;
      class GetChangeLogsRequest;
      class GetControlRequest;
      class GetDelegationsRequest;
      class GetEvidenceRequest;
      class GetEvidenceByEvidenceFolderRequest;
      class GetEvidenceFolderRequest;
      class GetEvidenceFoldersByAssessmentRequest;
      class GetEvidenceFoldersByAssessmentControlRequest;
      class GetInsightsRequest;
      class GetInsightsByAssessmentRequest;
      class GetOrganizationAdminAccountRequest;
      class GetServicesInScopeRequest;
      class GetSettingsRequest;
      class ListAssessmentControlInsightsByControlDomainRequest;
      class ListAssessmentFrameworkShareRequestsRequest;
      class ListAssessmentFrameworksRequest;
      class ListAssessmentReportsRequest;
      class ListAssessmentsRequest;
      class ListControlDomainInsightsRequest;
      class ListControlDomainInsightsByAssessmentRequest;
      class ListControlInsightsByControlDomainRequest;
      class ListControlsRequest;
      class ListKeywordsForDataSourceRequest;
      class ListNotificationsRequest;
      class ListTagsForResourceRequest;
      class RegisterAccountRequest;
      class RegisterOrganizationAdminAccountRequest;
      class StartAssessmentFrameworkShareRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateAssessmentRequest;
      class UpdateAssessmentControlRequest;
      class UpdateAssessmentControlSetStatusRequest;
      class UpdateAssessmentFrameworkRequest;
      class UpdateAssessmentFrameworkShareRequest;
      class UpdateAssessmentStatusRequest;
      class UpdateControlRequest;
      class UpdateSettingsRequest;
      class ValidateAssessmentReportIntegrityRequest;
      /* End of service model forward declarations required in AuditManagerClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AssociateAssessmentReportEvidenceFolderResult, AuditManagerError> AssociateAssessmentReportEvidenceFolderOutcome;
      typedef Aws::Utils::Outcome<BatchAssociateAssessmentReportEvidenceResult, AuditManagerError> BatchAssociateAssessmentReportEvidenceOutcome;
      typedef Aws::Utils::Outcome<BatchCreateDelegationByAssessmentResult, AuditManagerError> BatchCreateDelegationByAssessmentOutcome;
      typedef Aws::Utils::Outcome<BatchDeleteDelegationByAssessmentResult, AuditManagerError> BatchDeleteDelegationByAssessmentOutcome;
      typedef Aws::Utils::Outcome<BatchDisassociateAssessmentReportEvidenceResult, AuditManagerError> BatchDisassociateAssessmentReportEvidenceOutcome;
      typedef Aws::Utils::Outcome<BatchImportEvidenceToAssessmentControlResult, AuditManagerError> BatchImportEvidenceToAssessmentControlOutcome;
      typedef Aws::Utils::Outcome<CreateAssessmentResult, AuditManagerError> CreateAssessmentOutcome;
      typedef Aws::Utils::Outcome<CreateAssessmentFrameworkResult, AuditManagerError> CreateAssessmentFrameworkOutcome;
      typedef Aws::Utils::Outcome<CreateAssessmentReportResult, AuditManagerError> CreateAssessmentReportOutcome;
      typedef Aws::Utils::Outcome<CreateControlResult, AuditManagerError> CreateControlOutcome;
      typedef Aws::Utils::Outcome<DeleteAssessmentResult, AuditManagerError> DeleteAssessmentOutcome;
      typedef Aws::Utils::Outcome<DeleteAssessmentFrameworkResult, AuditManagerError> DeleteAssessmentFrameworkOutcome;
      typedef Aws::Utils::Outcome<DeleteAssessmentFrameworkShareResult, AuditManagerError> DeleteAssessmentFrameworkShareOutcome;
      typedef Aws::Utils::Outcome<DeleteAssessmentReportResult, AuditManagerError> DeleteAssessmentReportOutcome;
      typedef Aws::Utils::Outcome<DeleteControlResult, AuditManagerError> DeleteControlOutcome;
      typedef Aws::Utils::Outcome<DeregisterAccountResult, AuditManagerError> DeregisterAccountOutcome;
      typedef Aws::Utils::Outcome<DeregisterOrganizationAdminAccountResult, AuditManagerError> DeregisterOrganizationAdminAccountOutcome;
      typedef Aws::Utils::Outcome<DisassociateAssessmentReportEvidenceFolderResult, AuditManagerError> DisassociateAssessmentReportEvidenceFolderOutcome;
      typedef Aws::Utils::Outcome<GetAccountStatusResult, AuditManagerError> GetAccountStatusOutcome;
      typedef Aws::Utils::Outcome<GetAssessmentResult, AuditManagerError> GetAssessmentOutcome;
      typedef Aws::Utils::Outcome<GetAssessmentFrameworkResult, AuditManagerError> GetAssessmentFrameworkOutcome;
      typedef Aws::Utils::Outcome<GetAssessmentReportUrlResult, AuditManagerError> GetAssessmentReportUrlOutcome;
      typedef Aws::Utils::Outcome<GetChangeLogsResult, AuditManagerError> GetChangeLogsOutcome;
      typedef Aws::Utils::Outcome<GetControlResult, AuditManagerError> GetControlOutcome;
      typedef Aws::Utils::Outcome<GetDelegationsResult, AuditManagerError> GetDelegationsOutcome;
      typedef Aws::Utils::Outcome<GetEvidenceResult, AuditManagerError> GetEvidenceOutcome;
      typedef Aws::Utils::Outcome<GetEvidenceByEvidenceFolderResult, AuditManagerError> GetEvidenceByEvidenceFolderOutcome;
      typedef Aws::Utils::Outcome<GetEvidenceFolderResult, AuditManagerError> GetEvidenceFolderOutcome;
      typedef Aws::Utils::Outcome<GetEvidenceFoldersByAssessmentResult, AuditManagerError> GetEvidenceFoldersByAssessmentOutcome;
      typedef Aws::Utils::Outcome<GetEvidenceFoldersByAssessmentControlResult, AuditManagerError> GetEvidenceFoldersByAssessmentControlOutcome;
      typedef Aws::Utils::Outcome<GetInsightsResult, AuditManagerError> GetInsightsOutcome;
      typedef Aws::Utils::Outcome<GetInsightsByAssessmentResult, AuditManagerError> GetInsightsByAssessmentOutcome;
      typedef Aws::Utils::Outcome<GetOrganizationAdminAccountResult, AuditManagerError> GetOrganizationAdminAccountOutcome;
      typedef Aws::Utils::Outcome<GetServicesInScopeResult, AuditManagerError> GetServicesInScopeOutcome;
      typedef Aws::Utils::Outcome<GetSettingsResult, AuditManagerError> GetSettingsOutcome;
      typedef Aws::Utils::Outcome<ListAssessmentControlInsightsByControlDomainResult, AuditManagerError> ListAssessmentControlInsightsByControlDomainOutcome;
      typedef Aws::Utils::Outcome<ListAssessmentFrameworkShareRequestsResult, AuditManagerError> ListAssessmentFrameworkShareRequestsOutcome;
      typedef Aws::Utils::Outcome<ListAssessmentFrameworksResult, AuditManagerError> ListAssessmentFrameworksOutcome;
      typedef Aws::Utils::Outcome<ListAssessmentReportsResult, AuditManagerError> ListAssessmentReportsOutcome;
      typedef Aws::Utils::Outcome<ListAssessmentsResult, AuditManagerError> ListAssessmentsOutcome;
      typedef Aws::Utils::Outcome<ListControlDomainInsightsResult, AuditManagerError> ListControlDomainInsightsOutcome;
      typedef Aws::Utils::Outcome<ListControlDomainInsightsByAssessmentResult, AuditManagerError> ListControlDomainInsightsByAssessmentOutcome;
      typedef Aws::Utils::Outcome<ListControlInsightsByControlDomainResult, AuditManagerError> ListControlInsightsByControlDomainOutcome;
      typedef Aws::Utils::Outcome<ListControlsResult, AuditManagerError> ListControlsOutcome;
      typedef Aws::Utils::Outcome<ListKeywordsForDataSourceResult, AuditManagerError> ListKeywordsForDataSourceOutcome;
      typedef Aws::Utils::Outcome<ListNotificationsResult, AuditManagerError> ListNotificationsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, AuditManagerError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<RegisterAccountResult, AuditManagerError> RegisterAccountOutcome;
      typedef Aws::Utils::Outcome<RegisterOrganizationAdminAccountResult, AuditManagerError> RegisterOrganizationAdminAccountOutcome;
      typedef Aws::Utils::Outcome<StartAssessmentFrameworkShareResult, AuditManagerError> StartAssessmentFrameworkShareOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, AuditManagerError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, AuditManagerError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateAssessmentResult, AuditManagerError> UpdateAssessmentOutcome;
      typedef Aws::Utils::Outcome<UpdateAssessmentControlResult, AuditManagerError> UpdateAssessmentControlOutcome;
      typedef Aws::Utils::Outcome<UpdateAssessmentControlSetStatusResult, AuditManagerError> UpdateAssessmentControlSetStatusOutcome;
      typedef Aws::Utils::Outcome<UpdateAssessmentFrameworkResult, AuditManagerError> UpdateAssessmentFrameworkOutcome;
      typedef Aws::Utils::Outcome<UpdateAssessmentFrameworkShareResult, AuditManagerError> UpdateAssessmentFrameworkShareOutcome;
      typedef Aws::Utils::Outcome<UpdateAssessmentStatusResult, AuditManagerError> UpdateAssessmentStatusOutcome;
      typedef Aws::Utils::Outcome<UpdateControlResult, AuditManagerError> UpdateControlOutcome;
      typedef Aws::Utils::Outcome<UpdateSettingsResult, AuditManagerError> UpdateSettingsOutcome;
      typedef Aws::Utils::Outcome<ValidateAssessmentReportIntegrityResult, AuditManagerError> ValidateAssessmentReportIntegrityOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AssociateAssessmentReportEvidenceFolderOutcome> AssociateAssessmentReportEvidenceFolderOutcomeCallable;
      typedef std::future<BatchAssociateAssessmentReportEvidenceOutcome> BatchAssociateAssessmentReportEvidenceOutcomeCallable;
      typedef std::future<BatchCreateDelegationByAssessmentOutcome> BatchCreateDelegationByAssessmentOutcomeCallable;
      typedef std::future<BatchDeleteDelegationByAssessmentOutcome> BatchDeleteDelegationByAssessmentOutcomeCallable;
      typedef std::future<BatchDisassociateAssessmentReportEvidenceOutcome> BatchDisassociateAssessmentReportEvidenceOutcomeCallable;
      typedef std::future<BatchImportEvidenceToAssessmentControlOutcome> BatchImportEvidenceToAssessmentControlOutcomeCallable;
      typedef std::future<CreateAssessmentOutcome> CreateAssessmentOutcomeCallable;
      typedef std::future<CreateAssessmentFrameworkOutcome> CreateAssessmentFrameworkOutcomeCallable;
      typedef std::future<CreateAssessmentReportOutcome> CreateAssessmentReportOutcomeCallable;
      typedef std::future<CreateControlOutcome> CreateControlOutcomeCallable;
      typedef std::future<DeleteAssessmentOutcome> DeleteAssessmentOutcomeCallable;
      typedef std::future<DeleteAssessmentFrameworkOutcome> DeleteAssessmentFrameworkOutcomeCallable;
      typedef std::future<DeleteAssessmentFrameworkShareOutcome> DeleteAssessmentFrameworkShareOutcomeCallable;
      typedef std::future<DeleteAssessmentReportOutcome> DeleteAssessmentReportOutcomeCallable;
      typedef std::future<DeleteControlOutcome> DeleteControlOutcomeCallable;
      typedef std::future<DeregisterAccountOutcome> DeregisterAccountOutcomeCallable;
      typedef std::future<DeregisterOrganizationAdminAccountOutcome> DeregisterOrganizationAdminAccountOutcomeCallable;
      typedef std::future<DisassociateAssessmentReportEvidenceFolderOutcome> DisassociateAssessmentReportEvidenceFolderOutcomeCallable;
      typedef std::future<GetAccountStatusOutcome> GetAccountStatusOutcomeCallable;
      typedef std::future<GetAssessmentOutcome> GetAssessmentOutcomeCallable;
      typedef std::future<GetAssessmentFrameworkOutcome> GetAssessmentFrameworkOutcomeCallable;
      typedef std::future<GetAssessmentReportUrlOutcome> GetAssessmentReportUrlOutcomeCallable;
      typedef std::future<GetChangeLogsOutcome> GetChangeLogsOutcomeCallable;
      typedef std::future<GetControlOutcome> GetControlOutcomeCallable;
      typedef std::future<GetDelegationsOutcome> GetDelegationsOutcomeCallable;
      typedef std::future<GetEvidenceOutcome> GetEvidenceOutcomeCallable;
      typedef std::future<GetEvidenceByEvidenceFolderOutcome> GetEvidenceByEvidenceFolderOutcomeCallable;
      typedef std::future<GetEvidenceFolderOutcome> GetEvidenceFolderOutcomeCallable;
      typedef std::future<GetEvidenceFoldersByAssessmentOutcome> GetEvidenceFoldersByAssessmentOutcomeCallable;
      typedef std::future<GetEvidenceFoldersByAssessmentControlOutcome> GetEvidenceFoldersByAssessmentControlOutcomeCallable;
      typedef std::future<GetInsightsOutcome> GetInsightsOutcomeCallable;
      typedef std::future<GetInsightsByAssessmentOutcome> GetInsightsByAssessmentOutcomeCallable;
      typedef std::future<GetOrganizationAdminAccountOutcome> GetOrganizationAdminAccountOutcomeCallable;
      typedef std::future<GetServicesInScopeOutcome> GetServicesInScopeOutcomeCallable;
      typedef std::future<GetSettingsOutcome> GetSettingsOutcomeCallable;
      typedef std::future<ListAssessmentControlInsightsByControlDomainOutcome> ListAssessmentControlInsightsByControlDomainOutcomeCallable;
      typedef std::future<ListAssessmentFrameworkShareRequestsOutcome> ListAssessmentFrameworkShareRequestsOutcomeCallable;
      typedef std::future<ListAssessmentFrameworksOutcome> ListAssessmentFrameworksOutcomeCallable;
      typedef std::future<ListAssessmentReportsOutcome> ListAssessmentReportsOutcomeCallable;
      typedef std::future<ListAssessmentsOutcome> ListAssessmentsOutcomeCallable;
      typedef std::future<ListControlDomainInsightsOutcome> ListControlDomainInsightsOutcomeCallable;
      typedef std::future<ListControlDomainInsightsByAssessmentOutcome> ListControlDomainInsightsByAssessmentOutcomeCallable;
      typedef std::future<ListControlInsightsByControlDomainOutcome> ListControlInsightsByControlDomainOutcomeCallable;
      typedef std::future<ListControlsOutcome> ListControlsOutcomeCallable;
      typedef std::future<ListKeywordsForDataSourceOutcome> ListKeywordsForDataSourceOutcomeCallable;
      typedef std::future<ListNotificationsOutcome> ListNotificationsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<RegisterAccountOutcome> RegisterAccountOutcomeCallable;
      typedef std::future<RegisterOrganizationAdminAccountOutcome> RegisterOrganizationAdminAccountOutcomeCallable;
      typedef std::future<StartAssessmentFrameworkShareOutcome> StartAssessmentFrameworkShareOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateAssessmentOutcome> UpdateAssessmentOutcomeCallable;
      typedef std::future<UpdateAssessmentControlOutcome> UpdateAssessmentControlOutcomeCallable;
      typedef std::future<UpdateAssessmentControlSetStatusOutcome> UpdateAssessmentControlSetStatusOutcomeCallable;
      typedef std::future<UpdateAssessmentFrameworkOutcome> UpdateAssessmentFrameworkOutcomeCallable;
      typedef std::future<UpdateAssessmentFrameworkShareOutcome> UpdateAssessmentFrameworkShareOutcomeCallable;
      typedef std::future<UpdateAssessmentStatusOutcome> UpdateAssessmentStatusOutcomeCallable;
      typedef std::future<UpdateControlOutcome> UpdateControlOutcomeCallable;
      typedef std::future<UpdateSettingsOutcome> UpdateSettingsOutcomeCallable;
      typedef std::future<ValidateAssessmentReportIntegrityOutcome> ValidateAssessmentReportIntegrityOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class AuditManagerClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const AuditManagerClient*, const Model::AssociateAssessmentReportEvidenceFolderRequest&, const Model::AssociateAssessmentReportEvidenceFolderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateAssessmentReportEvidenceFolderResponseReceivedHandler;
    typedef std::function<void(const AuditManagerClient*, const Model::BatchAssociateAssessmentReportEvidenceRequest&, const Model::BatchAssociateAssessmentReportEvidenceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchAssociateAssessmentReportEvidenceResponseReceivedHandler;
    typedef std::function<void(const AuditManagerClient*, const Model::BatchCreateDelegationByAssessmentRequest&, const Model::BatchCreateDelegationByAssessmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchCreateDelegationByAssessmentResponseReceivedHandler;
    typedef std::function<void(const AuditManagerClient*, const Model::BatchDeleteDelegationByAssessmentRequest&, const Model::BatchDeleteDelegationByAssessmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDeleteDelegationByAssessmentResponseReceivedHandler;
    typedef std::function<void(const AuditManagerClient*, const Model::BatchDisassociateAssessmentReportEvidenceRequest&, const Model::BatchDisassociateAssessmentReportEvidenceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDisassociateAssessmentReportEvidenceResponseReceivedHandler;
    typedef std::function<void(const AuditManagerClient*, const Model::BatchImportEvidenceToAssessmentControlRequest&, const Model::BatchImportEvidenceToAssessmentControlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchImportEvidenceToAssessmentControlResponseReceivedHandler;
    typedef std::function<void(const AuditManagerClient*, const Model::CreateAssessmentRequest&, const Model::CreateAssessmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAssessmentResponseReceivedHandler;
    typedef std::function<void(const AuditManagerClient*, const Model::CreateAssessmentFrameworkRequest&, const Model::CreateAssessmentFrameworkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAssessmentFrameworkResponseReceivedHandler;
    typedef std::function<void(const AuditManagerClient*, const Model::CreateAssessmentReportRequest&, const Model::CreateAssessmentReportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAssessmentReportResponseReceivedHandler;
    typedef std::function<void(const AuditManagerClient*, const Model::CreateControlRequest&, const Model::CreateControlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateControlResponseReceivedHandler;
    typedef std::function<void(const AuditManagerClient*, const Model::DeleteAssessmentRequest&, const Model::DeleteAssessmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAssessmentResponseReceivedHandler;
    typedef std::function<void(const AuditManagerClient*, const Model::DeleteAssessmentFrameworkRequest&, const Model::DeleteAssessmentFrameworkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAssessmentFrameworkResponseReceivedHandler;
    typedef std::function<void(const AuditManagerClient*, const Model::DeleteAssessmentFrameworkShareRequest&, const Model::DeleteAssessmentFrameworkShareOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAssessmentFrameworkShareResponseReceivedHandler;
    typedef std::function<void(const AuditManagerClient*, const Model::DeleteAssessmentReportRequest&, const Model::DeleteAssessmentReportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAssessmentReportResponseReceivedHandler;
    typedef std::function<void(const AuditManagerClient*, const Model::DeleteControlRequest&, const Model::DeleteControlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteControlResponseReceivedHandler;
    typedef std::function<void(const AuditManagerClient*, const Model::DeregisterAccountRequest&, const Model::DeregisterAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterAccountResponseReceivedHandler;
    typedef std::function<void(const AuditManagerClient*, const Model::DeregisterOrganizationAdminAccountRequest&, const Model::DeregisterOrganizationAdminAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterOrganizationAdminAccountResponseReceivedHandler;
    typedef std::function<void(const AuditManagerClient*, const Model::DisassociateAssessmentReportEvidenceFolderRequest&, const Model::DisassociateAssessmentReportEvidenceFolderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateAssessmentReportEvidenceFolderResponseReceivedHandler;
    typedef std::function<void(const AuditManagerClient*, const Model::GetAccountStatusRequest&, const Model::GetAccountStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccountStatusResponseReceivedHandler;
    typedef std::function<void(const AuditManagerClient*, const Model::GetAssessmentRequest&, const Model::GetAssessmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAssessmentResponseReceivedHandler;
    typedef std::function<void(const AuditManagerClient*, const Model::GetAssessmentFrameworkRequest&, const Model::GetAssessmentFrameworkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAssessmentFrameworkResponseReceivedHandler;
    typedef std::function<void(const AuditManagerClient*, const Model::GetAssessmentReportUrlRequest&, const Model::GetAssessmentReportUrlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAssessmentReportUrlResponseReceivedHandler;
    typedef std::function<void(const AuditManagerClient*, const Model::GetChangeLogsRequest&, const Model::GetChangeLogsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetChangeLogsResponseReceivedHandler;
    typedef std::function<void(const AuditManagerClient*, const Model::GetControlRequest&, const Model::GetControlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetControlResponseReceivedHandler;
    typedef std::function<void(const AuditManagerClient*, const Model::GetDelegationsRequest&, const Model::GetDelegationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDelegationsResponseReceivedHandler;
    typedef std::function<void(const AuditManagerClient*, const Model::GetEvidenceRequest&, const Model::GetEvidenceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEvidenceResponseReceivedHandler;
    typedef std::function<void(const AuditManagerClient*, const Model::GetEvidenceByEvidenceFolderRequest&, const Model::GetEvidenceByEvidenceFolderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEvidenceByEvidenceFolderResponseReceivedHandler;
    typedef std::function<void(const AuditManagerClient*, const Model::GetEvidenceFolderRequest&, const Model::GetEvidenceFolderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEvidenceFolderResponseReceivedHandler;
    typedef std::function<void(const AuditManagerClient*, const Model::GetEvidenceFoldersByAssessmentRequest&, const Model::GetEvidenceFoldersByAssessmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEvidenceFoldersByAssessmentResponseReceivedHandler;
    typedef std::function<void(const AuditManagerClient*, const Model::GetEvidenceFoldersByAssessmentControlRequest&, const Model::GetEvidenceFoldersByAssessmentControlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEvidenceFoldersByAssessmentControlResponseReceivedHandler;
    typedef std::function<void(const AuditManagerClient*, const Model::GetInsightsRequest&, const Model::GetInsightsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInsightsResponseReceivedHandler;
    typedef std::function<void(const AuditManagerClient*, const Model::GetInsightsByAssessmentRequest&, const Model::GetInsightsByAssessmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInsightsByAssessmentResponseReceivedHandler;
    typedef std::function<void(const AuditManagerClient*, const Model::GetOrganizationAdminAccountRequest&, const Model::GetOrganizationAdminAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetOrganizationAdminAccountResponseReceivedHandler;
    typedef std::function<void(const AuditManagerClient*, const Model::GetServicesInScopeRequest&, const Model::GetServicesInScopeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetServicesInScopeResponseReceivedHandler;
    typedef std::function<void(const AuditManagerClient*, const Model::GetSettingsRequest&, const Model::GetSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSettingsResponseReceivedHandler;
    typedef std::function<void(const AuditManagerClient*, const Model::ListAssessmentControlInsightsByControlDomainRequest&, const Model::ListAssessmentControlInsightsByControlDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAssessmentControlInsightsByControlDomainResponseReceivedHandler;
    typedef std::function<void(const AuditManagerClient*, const Model::ListAssessmentFrameworkShareRequestsRequest&, const Model::ListAssessmentFrameworkShareRequestsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAssessmentFrameworkShareRequestsResponseReceivedHandler;
    typedef std::function<void(const AuditManagerClient*, const Model::ListAssessmentFrameworksRequest&, const Model::ListAssessmentFrameworksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAssessmentFrameworksResponseReceivedHandler;
    typedef std::function<void(const AuditManagerClient*, const Model::ListAssessmentReportsRequest&, const Model::ListAssessmentReportsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAssessmentReportsResponseReceivedHandler;
    typedef std::function<void(const AuditManagerClient*, const Model::ListAssessmentsRequest&, const Model::ListAssessmentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAssessmentsResponseReceivedHandler;
    typedef std::function<void(const AuditManagerClient*, const Model::ListControlDomainInsightsRequest&, const Model::ListControlDomainInsightsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListControlDomainInsightsResponseReceivedHandler;
    typedef std::function<void(const AuditManagerClient*, const Model::ListControlDomainInsightsByAssessmentRequest&, const Model::ListControlDomainInsightsByAssessmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListControlDomainInsightsByAssessmentResponseReceivedHandler;
    typedef std::function<void(const AuditManagerClient*, const Model::ListControlInsightsByControlDomainRequest&, const Model::ListControlInsightsByControlDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListControlInsightsByControlDomainResponseReceivedHandler;
    typedef std::function<void(const AuditManagerClient*, const Model::ListControlsRequest&, const Model::ListControlsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListControlsResponseReceivedHandler;
    typedef std::function<void(const AuditManagerClient*, const Model::ListKeywordsForDataSourceRequest&, const Model::ListKeywordsForDataSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListKeywordsForDataSourceResponseReceivedHandler;
    typedef std::function<void(const AuditManagerClient*, const Model::ListNotificationsRequest&, const Model::ListNotificationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListNotificationsResponseReceivedHandler;
    typedef std::function<void(const AuditManagerClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const AuditManagerClient*, const Model::RegisterAccountRequest&, const Model::RegisterAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterAccountResponseReceivedHandler;
    typedef std::function<void(const AuditManagerClient*, const Model::RegisterOrganizationAdminAccountRequest&, const Model::RegisterOrganizationAdminAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterOrganizationAdminAccountResponseReceivedHandler;
    typedef std::function<void(const AuditManagerClient*, const Model::StartAssessmentFrameworkShareRequest&, const Model::StartAssessmentFrameworkShareOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartAssessmentFrameworkShareResponseReceivedHandler;
    typedef std::function<void(const AuditManagerClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const AuditManagerClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const AuditManagerClient*, const Model::UpdateAssessmentRequest&, const Model::UpdateAssessmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAssessmentResponseReceivedHandler;
    typedef std::function<void(const AuditManagerClient*, const Model::UpdateAssessmentControlRequest&, const Model::UpdateAssessmentControlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAssessmentControlResponseReceivedHandler;
    typedef std::function<void(const AuditManagerClient*, const Model::UpdateAssessmentControlSetStatusRequest&, const Model::UpdateAssessmentControlSetStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAssessmentControlSetStatusResponseReceivedHandler;
    typedef std::function<void(const AuditManagerClient*, const Model::UpdateAssessmentFrameworkRequest&, const Model::UpdateAssessmentFrameworkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAssessmentFrameworkResponseReceivedHandler;
    typedef std::function<void(const AuditManagerClient*, const Model::UpdateAssessmentFrameworkShareRequest&, const Model::UpdateAssessmentFrameworkShareOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAssessmentFrameworkShareResponseReceivedHandler;
    typedef std::function<void(const AuditManagerClient*, const Model::UpdateAssessmentStatusRequest&, const Model::UpdateAssessmentStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAssessmentStatusResponseReceivedHandler;
    typedef std::function<void(const AuditManagerClient*, const Model::UpdateControlRequest&, const Model::UpdateControlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateControlResponseReceivedHandler;
    typedef std::function<void(const AuditManagerClient*, const Model::UpdateSettingsRequest&, const Model::UpdateSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSettingsResponseReceivedHandler;
    typedef std::function<void(const AuditManagerClient*, const Model::ValidateAssessmentReportIntegrityRequest&, const Model::ValidateAssessmentReportIntegrityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ValidateAssessmentReportIntegrityResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace AuditManager
} // namespace Aws
