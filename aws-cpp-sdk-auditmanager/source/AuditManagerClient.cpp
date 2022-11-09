/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/auditmanager/AuditManagerClient.h>
#include <aws/auditmanager/AuditManagerErrorMarshaller.h>
#include <aws/auditmanager/AuditManagerEndpointProvider.h>
#include <aws/auditmanager/model/AssociateAssessmentReportEvidenceFolderRequest.h>
#include <aws/auditmanager/model/BatchAssociateAssessmentReportEvidenceRequest.h>
#include <aws/auditmanager/model/BatchCreateDelegationByAssessmentRequest.h>
#include <aws/auditmanager/model/BatchDeleteDelegationByAssessmentRequest.h>
#include <aws/auditmanager/model/BatchDisassociateAssessmentReportEvidenceRequest.h>
#include <aws/auditmanager/model/BatchImportEvidenceToAssessmentControlRequest.h>
#include <aws/auditmanager/model/CreateAssessmentRequest.h>
#include <aws/auditmanager/model/CreateAssessmentFrameworkRequest.h>
#include <aws/auditmanager/model/CreateAssessmentReportRequest.h>
#include <aws/auditmanager/model/CreateControlRequest.h>
#include <aws/auditmanager/model/DeleteAssessmentRequest.h>
#include <aws/auditmanager/model/DeleteAssessmentFrameworkRequest.h>
#include <aws/auditmanager/model/DeleteAssessmentFrameworkShareRequest.h>
#include <aws/auditmanager/model/DeleteAssessmentReportRequest.h>
#include <aws/auditmanager/model/DeleteControlRequest.h>
#include <aws/auditmanager/model/DeregisterAccountRequest.h>
#include <aws/auditmanager/model/DeregisterOrganizationAdminAccountRequest.h>
#include <aws/auditmanager/model/DisassociateAssessmentReportEvidenceFolderRequest.h>
#include <aws/auditmanager/model/GetAccountStatusRequest.h>
#include <aws/auditmanager/model/GetAssessmentRequest.h>
#include <aws/auditmanager/model/GetAssessmentFrameworkRequest.h>
#include <aws/auditmanager/model/GetAssessmentReportUrlRequest.h>
#include <aws/auditmanager/model/GetChangeLogsRequest.h>
#include <aws/auditmanager/model/GetControlRequest.h>
#include <aws/auditmanager/model/GetDelegationsRequest.h>
#include <aws/auditmanager/model/GetEvidenceRequest.h>
#include <aws/auditmanager/model/GetEvidenceByEvidenceFolderRequest.h>
#include <aws/auditmanager/model/GetEvidenceFolderRequest.h>
#include <aws/auditmanager/model/GetEvidenceFoldersByAssessmentRequest.h>
#include <aws/auditmanager/model/GetEvidenceFoldersByAssessmentControlRequest.h>
#include <aws/auditmanager/model/GetInsightsRequest.h>
#include <aws/auditmanager/model/GetInsightsByAssessmentRequest.h>
#include <aws/auditmanager/model/GetOrganizationAdminAccountRequest.h>
#include <aws/auditmanager/model/GetServicesInScopeRequest.h>
#include <aws/auditmanager/model/GetSettingsRequest.h>
#include <aws/auditmanager/model/ListAssessmentControlInsightsByControlDomainRequest.h>
#include <aws/auditmanager/model/ListAssessmentFrameworkShareRequestsRequest.h>
#include <aws/auditmanager/model/ListAssessmentFrameworksRequest.h>
#include <aws/auditmanager/model/ListAssessmentReportsRequest.h>
#include <aws/auditmanager/model/ListAssessmentsRequest.h>
#include <aws/auditmanager/model/ListControlDomainInsightsRequest.h>
#include <aws/auditmanager/model/ListControlDomainInsightsByAssessmentRequest.h>
#include <aws/auditmanager/model/ListControlInsightsByControlDomainRequest.h>
#include <aws/auditmanager/model/ListControlsRequest.h>
#include <aws/auditmanager/model/ListKeywordsForDataSourceRequest.h>
#include <aws/auditmanager/model/ListNotificationsRequest.h>
#include <aws/auditmanager/model/ListTagsForResourceRequest.h>
#include <aws/auditmanager/model/RegisterAccountRequest.h>
#include <aws/auditmanager/model/RegisterOrganizationAdminAccountRequest.h>
#include <aws/auditmanager/model/StartAssessmentFrameworkShareRequest.h>
#include <aws/auditmanager/model/TagResourceRequest.h>
#include <aws/auditmanager/model/UntagResourceRequest.h>
#include <aws/auditmanager/model/UpdateAssessmentRequest.h>
#include <aws/auditmanager/model/UpdateAssessmentControlRequest.h>
#include <aws/auditmanager/model/UpdateAssessmentControlSetStatusRequest.h>
#include <aws/auditmanager/model/UpdateAssessmentFrameworkRequest.h>
#include <aws/auditmanager/model/UpdateAssessmentFrameworkShareRequest.h>
#include <aws/auditmanager/model/UpdateAssessmentStatusRequest.h>
#include <aws/auditmanager/model/UpdateControlRequest.h>
#include <aws/auditmanager/model/UpdateSettingsRequest.h>
#include <aws/auditmanager/model/ValidateAssessmentReportIntegrityRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::AuditManager;
using namespace Aws::AuditManager::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* AuditManagerClient::SERVICE_NAME = "auditmanager";
const char* AuditManagerClient::ALLOCATION_TAG = "AuditManagerClient";

AuditManagerClient::AuditManagerClient(const AuditManager::AuditManagerClientConfiguration& clientConfiguration,
                                       std::shared_ptr<AuditManagerEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AuditManagerErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

AuditManagerClient::AuditManagerClient(const AWSCredentials& credentials,
                                       std::shared_ptr<AuditManagerEndpointProviderBase> endpointProvider,
                                       const AuditManager::AuditManagerClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AuditManagerErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

AuditManagerClient::AuditManagerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       std::shared_ptr<AuditManagerEndpointProviderBase> endpointProvider,
                                       const AuditManager::AuditManagerClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AuditManagerErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  AuditManagerClient::AuditManagerClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AuditManagerErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<AuditManagerEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

AuditManagerClient::AuditManagerClient(const AWSCredentials& credentials,
                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AuditManagerErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<AuditManagerEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

AuditManagerClient::AuditManagerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AuditManagerErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<AuditManagerEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
AuditManagerClient::~AuditManagerClient()
{
}

std::shared_ptr<AuditManagerEndpointProviderBase>& AuditManagerClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void AuditManagerClient::init(const AuditManager::AuditManagerClientConfiguration& config)
{
  AWSClient::SetServiceClientName("AuditManager");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void AuditManagerClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

AssociateAssessmentReportEvidenceFolderOutcome AuditManagerClient::AssociateAssessmentReportEvidenceFolder(const AssociateAssessmentReportEvidenceFolderRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateAssessmentReportEvidenceFolder, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssessmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateAssessmentReportEvidenceFolder", "Required field: AssessmentId, is not set");
    return AssociateAssessmentReportEvidenceFolderOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateAssessmentReportEvidenceFolder, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/assessments/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssessmentId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/associateToAssessmentReport");
  return AssociateAssessmentReportEvidenceFolderOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

AssociateAssessmentReportEvidenceFolderOutcomeCallable AuditManagerClient::AssociateAssessmentReportEvidenceFolderCallable(const AssociateAssessmentReportEvidenceFolderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateAssessmentReportEvidenceFolderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateAssessmentReportEvidenceFolder(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClient::AssociateAssessmentReportEvidenceFolderAsync(const AssociateAssessmentReportEvidenceFolderRequest& request, const AssociateAssessmentReportEvidenceFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AssociateAssessmentReportEvidenceFolder(request), context);
    } );
}

BatchAssociateAssessmentReportEvidenceOutcome AuditManagerClient::BatchAssociateAssessmentReportEvidence(const BatchAssociateAssessmentReportEvidenceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchAssociateAssessmentReportEvidence, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssessmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchAssociateAssessmentReportEvidence", "Required field: AssessmentId, is not set");
    return BatchAssociateAssessmentReportEvidenceOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchAssociateAssessmentReportEvidence, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/assessments/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssessmentId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/batchAssociateToAssessmentReport");
  return BatchAssociateAssessmentReportEvidenceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

BatchAssociateAssessmentReportEvidenceOutcomeCallable AuditManagerClient::BatchAssociateAssessmentReportEvidenceCallable(const BatchAssociateAssessmentReportEvidenceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchAssociateAssessmentReportEvidenceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchAssociateAssessmentReportEvidence(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClient::BatchAssociateAssessmentReportEvidenceAsync(const BatchAssociateAssessmentReportEvidenceRequest& request, const BatchAssociateAssessmentReportEvidenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchAssociateAssessmentReportEvidence(request), context);
    } );
}

BatchCreateDelegationByAssessmentOutcome AuditManagerClient::BatchCreateDelegationByAssessment(const BatchCreateDelegationByAssessmentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchCreateDelegationByAssessment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssessmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchCreateDelegationByAssessment", "Required field: AssessmentId, is not set");
    return BatchCreateDelegationByAssessmentOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchCreateDelegationByAssessment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/assessments/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssessmentId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/delegations");
  return BatchCreateDelegationByAssessmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchCreateDelegationByAssessmentOutcomeCallable AuditManagerClient::BatchCreateDelegationByAssessmentCallable(const BatchCreateDelegationByAssessmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchCreateDelegationByAssessmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchCreateDelegationByAssessment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClient::BatchCreateDelegationByAssessmentAsync(const BatchCreateDelegationByAssessmentRequest& request, const BatchCreateDelegationByAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchCreateDelegationByAssessment(request), context);
    } );
}

BatchDeleteDelegationByAssessmentOutcome AuditManagerClient::BatchDeleteDelegationByAssessment(const BatchDeleteDelegationByAssessmentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchDeleteDelegationByAssessment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssessmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchDeleteDelegationByAssessment", "Required field: AssessmentId, is not set");
    return BatchDeleteDelegationByAssessmentOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchDeleteDelegationByAssessment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/assessments/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssessmentId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/delegations");
  return BatchDeleteDelegationByAssessmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

BatchDeleteDelegationByAssessmentOutcomeCallable AuditManagerClient::BatchDeleteDelegationByAssessmentCallable(const BatchDeleteDelegationByAssessmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchDeleteDelegationByAssessmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchDeleteDelegationByAssessment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClient::BatchDeleteDelegationByAssessmentAsync(const BatchDeleteDelegationByAssessmentRequest& request, const BatchDeleteDelegationByAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchDeleteDelegationByAssessment(request), context);
    } );
}

BatchDisassociateAssessmentReportEvidenceOutcome AuditManagerClient::BatchDisassociateAssessmentReportEvidence(const BatchDisassociateAssessmentReportEvidenceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchDisassociateAssessmentReportEvidence, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssessmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchDisassociateAssessmentReportEvidence", "Required field: AssessmentId, is not set");
    return BatchDisassociateAssessmentReportEvidenceOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchDisassociateAssessmentReportEvidence, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/assessments/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssessmentId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/batchDisassociateFromAssessmentReport");
  return BatchDisassociateAssessmentReportEvidenceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

BatchDisassociateAssessmentReportEvidenceOutcomeCallable AuditManagerClient::BatchDisassociateAssessmentReportEvidenceCallable(const BatchDisassociateAssessmentReportEvidenceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchDisassociateAssessmentReportEvidenceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchDisassociateAssessmentReportEvidence(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClient::BatchDisassociateAssessmentReportEvidenceAsync(const BatchDisassociateAssessmentReportEvidenceRequest& request, const BatchDisassociateAssessmentReportEvidenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchDisassociateAssessmentReportEvidence(request), context);
    } );
}

BatchImportEvidenceToAssessmentControlOutcome AuditManagerClient::BatchImportEvidenceToAssessmentControl(const BatchImportEvidenceToAssessmentControlRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchImportEvidenceToAssessmentControl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssessmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchImportEvidenceToAssessmentControl", "Required field: AssessmentId, is not set");
    return BatchImportEvidenceToAssessmentControlOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  if (!request.ControlSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchImportEvidenceToAssessmentControl", "Required field: ControlSetId, is not set");
    return BatchImportEvidenceToAssessmentControlOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ControlSetId]", false));
  }
  if (!request.ControlIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchImportEvidenceToAssessmentControl", "Required field: ControlId, is not set");
    return BatchImportEvidenceToAssessmentControlOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ControlId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchImportEvidenceToAssessmentControl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/assessments/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssessmentId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/controlSets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetControlSetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/controls/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetControlId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/evidence");
  return BatchImportEvidenceToAssessmentControlOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchImportEvidenceToAssessmentControlOutcomeCallable AuditManagerClient::BatchImportEvidenceToAssessmentControlCallable(const BatchImportEvidenceToAssessmentControlRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchImportEvidenceToAssessmentControlOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchImportEvidenceToAssessmentControl(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClient::BatchImportEvidenceToAssessmentControlAsync(const BatchImportEvidenceToAssessmentControlRequest& request, const BatchImportEvidenceToAssessmentControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchImportEvidenceToAssessmentControl(request), context);
    } );
}

CreateAssessmentOutcome AuditManagerClient::CreateAssessment(const CreateAssessmentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAssessment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAssessment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/assessments");
  return CreateAssessmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAssessmentOutcomeCallable AuditManagerClient::CreateAssessmentCallable(const CreateAssessmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAssessmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAssessment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClient::CreateAssessmentAsync(const CreateAssessmentRequest& request, const CreateAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateAssessment(request), context);
    } );
}

CreateAssessmentFrameworkOutcome AuditManagerClient::CreateAssessmentFramework(const CreateAssessmentFrameworkRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAssessmentFramework, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAssessmentFramework, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/assessmentFrameworks");
  return CreateAssessmentFrameworkOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAssessmentFrameworkOutcomeCallable AuditManagerClient::CreateAssessmentFrameworkCallable(const CreateAssessmentFrameworkRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAssessmentFrameworkOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAssessmentFramework(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClient::CreateAssessmentFrameworkAsync(const CreateAssessmentFrameworkRequest& request, const CreateAssessmentFrameworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateAssessmentFramework(request), context);
    } );
}

CreateAssessmentReportOutcome AuditManagerClient::CreateAssessmentReport(const CreateAssessmentReportRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAssessmentReport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssessmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateAssessmentReport", "Required field: AssessmentId, is not set");
    return CreateAssessmentReportOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAssessmentReport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/assessments/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssessmentId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/reports");
  return CreateAssessmentReportOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAssessmentReportOutcomeCallable AuditManagerClient::CreateAssessmentReportCallable(const CreateAssessmentReportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAssessmentReportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAssessmentReport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClient::CreateAssessmentReportAsync(const CreateAssessmentReportRequest& request, const CreateAssessmentReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateAssessmentReport(request), context);
    } );
}

CreateControlOutcome AuditManagerClient::CreateControl(const CreateControlRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateControl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateControl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/controls");
  return CreateControlOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateControlOutcomeCallable AuditManagerClient::CreateControlCallable(const CreateControlRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateControlOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateControl(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClient::CreateControlAsync(const CreateControlRequest& request, const CreateControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateControl(request), context);
    } );
}

DeleteAssessmentOutcome AuditManagerClient::DeleteAssessment(const DeleteAssessmentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAssessment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssessmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAssessment", "Required field: AssessmentId, is not set");
    return DeleteAssessmentOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAssessment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/assessments/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssessmentId());
  return DeleteAssessmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteAssessmentOutcomeCallable AuditManagerClient::DeleteAssessmentCallable(const DeleteAssessmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAssessmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAssessment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClient::DeleteAssessmentAsync(const DeleteAssessmentRequest& request, const DeleteAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteAssessment(request), context);
    } );
}

DeleteAssessmentFrameworkOutcome AuditManagerClient::DeleteAssessmentFramework(const DeleteAssessmentFrameworkRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAssessmentFramework, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FrameworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAssessmentFramework", "Required field: FrameworkId, is not set");
    return DeleteAssessmentFrameworkOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FrameworkId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAssessmentFramework, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/assessmentFrameworks/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFrameworkId());
  return DeleteAssessmentFrameworkOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteAssessmentFrameworkOutcomeCallable AuditManagerClient::DeleteAssessmentFrameworkCallable(const DeleteAssessmentFrameworkRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAssessmentFrameworkOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAssessmentFramework(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClient::DeleteAssessmentFrameworkAsync(const DeleteAssessmentFrameworkRequest& request, const DeleteAssessmentFrameworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteAssessmentFramework(request), context);
    } );
}

DeleteAssessmentFrameworkShareOutcome AuditManagerClient::DeleteAssessmentFrameworkShare(const DeleteAssessmentFrameworkShareRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAssessmentFrameworkShare, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RequestIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAssessmentFrameworkShare", "Required field: RequestId, is not set");
    return DeleteAssessmentFrameworkShareOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RequestId]", false));
  }
  if (!request.RequestTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAssessmentFrameworkShare", "Required field: RequestType, is not set");
    return DeleteAssessmentFrameworkShareOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RequestType]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAssessmentFrameworkShare, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/assessmentFrameworkShareRequests/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRequestId());
  return DeleteAssessmentFrameworkShareOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteAssessmentFrameworkShareOutcomeCallable AuditManagerClient::DeleteAssessmentFrameworkShareCallable(const DeleteAssessmentFrameworkShareRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAssessmentFrameworkShareOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAssessmentFrameworkShare(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClient::DeleteAssessmentFrameworkShareAsync(const DeleteAssessmentFrameworkShareRequest& request, const DeleteAssessmentFrameworkShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteAssessmentFrameworkShare(request), context);
    } );
}

DeleteAssessmentReportOutcome AuditManagerClient::DeleteAssessmentReport(const DeleteAssessmentReportRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAssessmentReport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssessmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAssessmentReport", "Required field: AssessmentId, is not set");
    return DeleteAssessmentReportOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  if (!request.AssessmentReportIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAssessmentReport", "Required field: AssessmentReportId, is not set");
    return DeleteAssessmentReportOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentReportId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAssessmentReport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/assessments/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssessmentId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/reports/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssessmentReportId());
  return DeleteAssessmentReportOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteAssessmentReportOutcomeCallable AuditManagerClient::DeleteAssessmentReportCallable(const DeleteAssessmentReportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAssessmentReportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAssessmentReport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClient::DeleteAssessmentReportAsync(const DeleteAssessmentReportRequest& request, const DeleteAssessmentReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteAssessmentReport(request), context);
    } );
}

DeleteControlOutcome AuditManagerClient::DeleteControl(const DeleteControlRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteControl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ControlIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteControl", "Required field: ControlId, is not set");
    return DeleteControlOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ControlId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteControl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/controls/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetControlId());
  return DeleteControlOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteControlOutcomeCallable AuditManagerClient::DeleteControlCallable(const DeleteControlRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteControlOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteControl(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClient::DeleteControlAsync(const DeleteControlRequest& request, const DeleteControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteControl(request), context);
    } );
}

DeregisterAccountOutcome AuditManagerClient::DeregisterAccount(const DeregisterAccountRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeregisterAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeregisterAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/account/deregisterAccount");
  return DeregisterAccountOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeregisterAccountOutcomeCallable AuditManagerClient::DeregisterAccountCallable(const DeregisterAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClient::DeregisterAccountAsync(const DeregisterAccountRequest& request, const DeregisterAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeregisterAccount(request), context);
    } );
}

DeregisterOrganizationAdminAccountOutcome AuditManagerClient::DeregisterOrganizationAdminAccount(const DeregisterOrganizationAdminAccountRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeregisterOrganizationAdminAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeregisterOrganizationAdminAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/account/deregisterOrganizationAdminAccount");
  return DeregisterOrganizationAdminAccountOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeregisterOrganizationAdminAccountOutcomeCallable AuditManagerClient::DeregisterOrganizationAdminAccountCallable(const DeregisterOrganizationAdminAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterOrganizationAdminAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterOrganizationAdminAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClient::DeregisterOrganizationAdminAccountAsync(const DeregisterOrganizationAdminAccountRequest& request, const DeregisterOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeregisterOrganizationAdminAccount(request), context);
    } );
}

DisassociateAssessmentReportEvidenceFolderOutcome AuditManagerClient::DisassociateAssessmentReportEvidenceFolder(const DisassociateAssessmentReportEvidenceFolderRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateAssessmentReportEvidenceFolder, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssessmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateAssessmentReportEvidenceFolder", "Required field: AssessmentId, is not set");
    return DisassociateAssessmentReportEvidenceFolderOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateAssessmentReportEvidenceFolder, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/assessments/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssessmentId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/disassociateFromAssessmentReport");
  return DisassociateAssessmentReportEvidenceFolderOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

DisassociateAssessmentReportEvidenceFolderOutcomeCallable AuditManagerClient::DisassociateAssessmentReportEvidenceFolderCallable(const DisassociateAssessmentReportEvidenceFolderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateAssessmentReportEvidenceFolderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateAssessmentReportEvidenceFolder(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClient::DisassociateAssessmentReportEvidenceFolderAsync(const DisassociateAssessmentReportEvidenceFolderRequest& request, const DisassociateAssessmentReportEvidenceFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisassociateAssessmentReportEvidenceFolder(request), context);
    } );
}

GetAccountStatusOutcome AuditManagerClient::GetAccountStatus(const GetAccountStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAccountStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAccountStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/account/status");
  return GetAccountStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetAccountStatusOutcomeCallable AuditManagerClient::GetAccountStatusCallable(const GetAccountStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAccountStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAccountStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClient::GetAccountStatusAsync(const GetAccountStatusRequest& request, const GetAccountStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetAccountStatus(request), context);
    } );
}

GetAssessmentOutcome AuditManagerClient::GetAssessment(const GetAssessmentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAssessment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssessmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAssessment", "Required field: AssessmentId, is not set");
    return GetAssessmentOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAssessment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/assessments/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssessmentId());
  return GetAssessmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetAssessmentOutcomeCallable AuditManagerClient::GetAssessmentCallable(const GetAssessmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAssessmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAssessment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClient::GetAssessmentAsync(const GetAssessmentRequest& request, const GetAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetAssessment(request), context);
    } );
}

GetAssessmentFrameworkOutcome AuditManagerClient::GetAssessmentFramework(const GetAssessmentFrameworkRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAssessmentFramework, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FrameworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAssessmentFramework", "Required field: FrameworkId, is not set");
    return GetAssessmentFrameworkOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FrameworkId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAssessmentFramework, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/assessmentFrameworks/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFrameworkId());
  return GetAssessmentFrameworkOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetAssessmentFrameworkOutcomeCallable AuditManagerClient::GetAssessmentFrameworkCallable(const GetAssessmentFrameworkRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAssessmentFrameworkOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAssessmentFramework(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClient::GetAssessmentFrameworkAsync(const GetAssessmentFrameworkRequest& request, const GetAssessmentFrameworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetAssessmentFramework(request), context);
    } );
}

GetAssessmentReportUrlOutcome AuditManagerClient::GetAssessmentReportUrl(const GetAssessmentReportUrlRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAssessmentReportUrl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssessmentReportIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAssessmentReportUrl", "Required field: AssessmentReportId, is not set");
    return GetAssessmentReportUrlOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentReportId]", false));
  }
  if (!request.AssessmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAssessmentReportUrl", "Required field: AssessmentId, is not set");
    return GetAssessmentReportUrlOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAssessmentReportUrl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/assessments/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssessmentId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/reports/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssessmentReportId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/url");
  return GetAssessmentReportUrlOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetAssessmentReportUrlOutcomeCallable AuditManagerClient::GetAssessmentReportUrlCallable(const GetAssessmentReportUrlRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAssessmentReportUrlOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAssessmentReportUrl(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClient::GetAssessmentReportUrlAsync(const GetAssessmentReportUrlRequest& request, const GetAssessmentReportUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetAssessmentReportUrl(request), context);
    } );
}

GetChangeLogsOutcome AuditManagerClient::GetChangeLogs(const GetChangeLogsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetChangeLogs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssessmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetChangeLogs", "Required field: AssessmentId, is not set");
    return GetChangeLogsOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetChangeLogs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/assessments/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssessmentId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/changelogs");
  return GetChangeLogsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetChangeLogsOutcomeCallable AuditManagerClient::GetChangeLogsCallable(const GetChangeLogsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetChangeLogsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetChangeLogs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClient::GetChangeLogsAsync(const GetChangeLogsRequest& request, const GetChangeLogsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetChangeLogs(request), context);
    } );
}

GetControlOutcome AuditManagerClient::GetControl(const GetControlRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetControl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ControlIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetControl", "Required field: ControlId, is not set");
    return GetControlOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ControlId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetControl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/controls/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetControlId());
  return GetControlOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetControlOutcomeCallable AuditManagerClient::GetControlCallable(const GetControlRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetControlOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetControl(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClient::GetControlAsync(const GetControlRequest& request, const GetControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetControl(request), context);
    } );
}

GetDelegationsOutcome AuditManagerClient::GetDelegations(const GetDelegationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDelegations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDelegations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/delegations");
  return GetDelegationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDelegationsOutcomeCallable AuditManagerClient::GetDelegationsCallable(const GetDelegationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDelegationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDelegations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClient::GetDelegationsAsync(const GetDelegationsRequest& request, const GetDelegationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetDelegations(request), context);
    } );
}

GetEvidenceOutcome AuditManagerClient::GetEvidence(const GetEvidenceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetEvidence, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssessmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetEvidence", "Required field: AssessmentId, is not set");
    return GetEvidenceOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  if (!request.ControlSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetEvidence", "Required field: ControlSetId, is not set");
    return GetEvidenceOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ControlSetId]", false));
  }
  if (!request.EvidenceFolderIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetEvidence", "Required field: EvidenceFolderId, is not set");
    return GetEvidenceOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EvidenceFolderId]", false));
  }
  if (!request.EvidenceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetEvidence", "Required field: EvidenceId, is not set");
    return GetEvidenceOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EvidenceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetEvidence, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/assessments/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssessmentId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/controlSets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetControlSetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/evidenceFolders/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEvidenceFolderId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/evidence/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEvidenceId());
  return GetEvidenceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetEvidenceOutcomeCallable AuditManagerClient::GetEvidenceCallable(const GetEvidenceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEvidenceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEvidence(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClient::GetEvidenceAsync(const GetEvidenceRequest& request, const GetEvidenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetEvidence(request), context);
    } );
}

GetEvidenceByEvidenceFolderOutcome AuditManagerClient::GetEvidenceByEvidenceFolder(const GetEvidenceByEvidenceFolderRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetEvidenceByEvidenceFolder, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssessmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetEvidenceByEvidenceFolder", "Required field: AssessmentId, is not set");
    return GetEvidenceByEvidenceFolderOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  if (!request.ControlSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetEvidenceByEvidenceFolder", "Required field: ControlSetId, is not set");
    return GetEvidenceByEvidenceFolderOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ControlSetId]", false));
  }
  if (!request.EvidenceFolderIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetEvidenceByEvidenceFolder", "Required field: EvidenceFolderId, is not set");
    return GetEvidenceByEvidenceFolderOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EvidenceFolderId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetEvidenceByEvidenceFolder, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/assessments/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssessmentId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/controlSets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetControlSetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/evidenceFolders/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEvidenceFolderId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/evidence");
  return GetEvidenceByEvidenceFolderOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetEvidenceByEvidenceFolderOutcomeCallable AuditManagerClient::GetEvidenceByEvidenceFolderCallable(const GetEvidenceByEvidenceFolderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEvidenceByEvidenceFolderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEvidenceByEvidenceFolder(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClient::GetEvidenceByEvidenceFolderAsync(const GetEvidenceByEvidenceFolderRequest& request, const GetEvidenceByEvidenceFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetEvidenceByEvidenceFolder(request), context);
    } );
}

GetEvidenceFolderOutcome AuditManagerClient::GetEvidenceFolder(const GetEvidenceFolderRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetEvidenceFolder, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssessmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetEvidenceFolder", "Required field: AssessmentId, is not set");
    return GetEvidenceFolderOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  if (!request.ControlSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetEvidenceFolder", "Required field: ControlSetId, is not set");
    return GetEvidenceFolderOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ControlSetId]", false));
  }
  if (!request.EvidenceFolderIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetEvidenceFolder", "Required field: EvidenceFolderId, is not set");
    return GetEvidenceFolderOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EvidenceFolderId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetEvidenceFolder, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/assessments/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssessmentId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/controlSets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetControlSetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/evidenceFolders/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEvidenceFolderId());
  return GetEvidenceFolderOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetEvidenceFolderOutcomeCallable AuditManagerClient::GetEvidenceFolderCallable(const GetEvidenceFolderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEvidenceFolderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEvidenceFolder(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClient::GetEvidenceFolderAsync(const GetEvidenceFolderRequest& request, const GetEvidenceFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetEvidenceFolder(request), context);
    } );
}

GetEvidenceFoldersByAssessmentOutcome AuditManagerClient::GetEvidenceFoldersByAssessment(const GetEvidenceFoldersByAssessmentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetEvidenceFoldersByAssessment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssessmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetEvidenceFoldersByAssessment", "Required field: AssessmentId, is not set");
    return GetEvidenceFoldersByAssessmentOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetEvidenceFoldersByAssessment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/assessments/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssessmentId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/evidenceFolders");
  return GetEvidenceFoldersByAssessmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetEvidenceFoldersByAssessmentOutcomeCallable AuditManagerClient::GetEvidenceFoldersByAssessmentCallable(const GetEvidenceFoldersByAssessmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEvidenceFoldersByAssessmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEvidenceFoldersByAssessment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClient::GetEvidenceFoldersByAssessmentAsync(const GetEvidenceFoldersByAssessmentRequest& request, const GetEvidenceFoldersByAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetEvidenceFoldersByAssessment(request), context);
    } );
}

GetEvidenceFoldersByAssessmentControlOutcome AuditManagerClient::GetEvidenceFoldersByAssessmentControl(const GetEvidenceFoldersByAssessmentControlRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetEvidenceFoldersByAssessmentControl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssessmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetEvidenceFoldersByAssessmentControl", "Required field: AssessmentId, is not set");
    return GetEvidenceFoldersByAssessmentControlOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  if (!request.ControlSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetEvidenceFoldersByAssessmentControl", "Required field: ControlSetId, is not set");
    return GetEvidenceFoldersByAssessmentControlOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ControlSetId]", false));
  }
  if (!request.ControlIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetEvidenceFoldersByAssessmentControl", "Required field: ControlId, is not set");
    return GetEvidenceFoldersByAssessmentControlOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ControlId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetEvidenceFoldersByAssessmentControl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/assessments/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssessmentId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/evidenceFolders-by-assessment-control/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetControlSetId());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetControlId());
  return GetEvidenceFoldersByAssessmentControlOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetEvidenceFoldersByAssessmentControlOutcomeCallable AuditManagerClient::GetEvidenceFoldersByAssessmentControlCallable(const GetEvidenceFoldersByAssessmentControlRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEvidenceFoldersByAssessmentControlOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEvidenceFoldersByAssessmentControl(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClient::GetEvidenceFoldersByAssessmentControlAsync(const GetEvidenceFoldersByAssessmentControlRequest& request, const GetEvidenceFoldersByAssessmentControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetEvidenceFoldersByAssessmentControl(request), context);
    } );
}

GetInsightsOutcome AuditManagerClient::GetInsights(const GetInsightsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetInsights, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetInsights, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/insights");
  return GetInsightsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetInsightsOutcomeCallable AuditManagerClient::GetInsightsCallable(const GetInsightsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetInsightsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetInsights(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClient::GetInsightsAsync(const GetInsightsRequest& request, const GetInsightsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetInsights(request), context);
    } );
}

GetInsightsByAssessmentOutcome AuditManagerClient::GetInsightsByAssessment(const GetInsightsByAssessmentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetInsightsByAssessment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssessmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetInsightsByAssessment", "Required field: AssessmentId, is not set");
    return GetInsightsByAssessmentOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetInsightsByAssessment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/insights/assessments/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssessmentId());
  return GetInsightsByAssessmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetInsightsByAssessmentOutcomeCallable AuditManagerClient::GetInsightsByAssessmentCallable(const GetInsightsByAssessmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetInsightsByAssessmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetInsightsByAssessment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClient::GetInsightsByAssessmentAsync(const GetInsightsByAssessmentRequest& request, const GetInsightsByAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetInsightsByAssessment(request), context);
    } );
}

GetOrganizationAdminAccountOutcome AuditManagerClient::GetOrganizationAdminAccount(const GetOrganizationAdminAccountRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetOrganizationAdminAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetOrganizationAdminAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/account/organizationAdminAccount");
  return GetOrganizationAdminAccountOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetOrganizationAdminAccountOutcomeCallable AuditManagerClient::GetOrganizationAdminAccountCallable(const GetOrganizationAdminAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetOrganizationAdminAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetOrganizationAdminAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClient::GetOrganizationAdminAccountAsync(const GetOrganizationAdminAccountRequest& request, const GetOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetOrganizationAdminAccount(request), context);
    } );
}

GetServicesInScopeOutcome AuditManagerClient::GetServicesInScope(const GetServicesInScopeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetServicesInScope, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetServicesInScope, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/services");
  return GetServicesInScopeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetServicesInScopeOutcomeCallable AuditManagerClient::GetServicesInScopeCallable(const GetServicesInScopeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetServicesInScopeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetServicesInScope(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClient::GetServicesInScopeAsync(const GetServicesInScopeRequest& request, const GetServicesInScopeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetServicesInScope(request), context);
    } );
}

GetSettingsOutcome AuditManagerClient::GetSettings(const GetSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AttributeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSettings", "Required field: Attribute, is not set");
    return GetSettingsOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Attribute]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/settings/");
  endpointResolutionOutcome.GetResult().AddPathSegment(SettingAttributeMapper::GetNameForSettingAttribute(request.GetAttribute()));
  return GetSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSettingsOutcomeCallable AuditManagerClient::GetSettingsCallable(const GetSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClient::GetSettingsAsync(const GetSettingsRequest& request, const GetSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetSettings(request), context);
    } );
}

ListAssessmentControlInsightsByControlDomainOutcome AuditManagerClient::ListAssessmentControlInsightsByControlDomain(const ListAssessmentControlInsightsByControlDomainRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAssessmentControlInsightsByControlDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ControlDomainIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAssessmentControlInsightsByControlDomain", "Required field: ControlDomainId, is not set");
    return ListAssessmentControlInsightsByControlDomainOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ControlDomainId]", false));
  }
  if (!request.AssessmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAssessmentControlInsightsByControlDomain", "Required field: AssessmentId, is not set");
    return ListAssessmentControlInsightsByControlDomainOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAssessmentControlInsightsByControlDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/insights/controls-by-assessment");
  return ListAssessmentControlInsightsByControlDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAssessmentControlInsightsByControlDomainOutcomeCallable AuditManagerClient::ListAssessmentControlInsightsByControlDomainCallable(const ListAssessmentControlInsightsByControlDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAssessmentControlInsightsByControlDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAssessmentControlInsightsByControlDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClient::ListAssessmentControlInsightsByControlDomainAsync(const ListAssessmentControlInsightsByControlDomainRequest& request, const ListAssessmentControlInsightsByControlDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAssessmentControlInsightsByControlDomain(request), context);
    } );
}

ListAssessmentFrameworkShareRequestsOutcome AuditManagerClient::ListAssessmentFrameworkShareRequests(const ListAssessmentFrameworkShareRequestsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAssessmentFrameworkShareRequests, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RequestTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAssessmentFrameworkShareRequests", "Required field: RequestType, is not set");
    return ListAssessmentFrameworkShareRequestsOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RequestType]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAssessmentFrameworkShareRequests, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/assessmentFrameworkShareRequests");
  return ListAssessmentFrameworkShareRequestsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAssessmentFrameworkShareRequestsOutcomeCallable AuditManagerClient::ListAssessmentFrameworkShareRequestsCallable(const ListAssessmentFrameworkShareRequestsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAssessmentFrameworkShareRequestsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAssessmentFrameworkShareRequests(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClient::ListAssessmentFrameworkShareRequestsAsync(const ListAssessmentFrameworkShareRequestsRequest& request, const ListAssessmentFrameworkShareRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAssessmentFrameworkShareRequests(request), context);
    } );
}

ListAssessmentFrameworksOutcome AuditManagerClient::ListAssessmentFrameworks(const ListAssessmentFrameworksRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAssessmentFrameworks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FrameworkTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAssessmentFrameworks", "Required field: FrameworkType, is not set");
    return ListAssessmentFrameworksOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FrameworkType]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAssessmentFrameworks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/assessmentFrameworks");
  return ListAssessmentFrameworksOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAssessmentFrameworksOutcomeCallable AuditManagerClient::ListAssessmentFrameworksCallable(const ListAssessmentFrameworksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAssessmentFrameworksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAssessmentFrameworks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClient::ListAssessmentFrameworksAsync(const ListAssessmentFrameworksRequest& request, const ListAssessmentFrameworksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAssessmentFrameworks(request), context);
    } );
}

ListAssessmentReportsOutcome AuditManagerClient::ListAssessmentReports(const ListAssessmentReportsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAssessmentReports, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAssessmentReports, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/assessmentReports");
  return ListAssessmentReportsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAssessmentReportsOutcomeCallable AuditManagerClient::ListAssessmentReportsCallable(const ListAssessmentReportsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAssessmentReportsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAssessmentReports(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClient::ListAssessmentReportsAsync(const ListAssessmentReportsRequest& request, const ListAssessmentReportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAssessmentReports(request), context);
    } );
}

ListAssessmentsOutcome AuditManagerClient::ListAssessments(const ListAssessmentsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAssessments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAssessments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/assessments");
  return ListAssessmentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAssessmentsOutcomeCallable AuditManagerClient::ListAssessmentsCallable(const ListAssessmentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAssessmentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAssessments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClient::ListAssessmentsAsync(const ListAssessmentsRequest& request, const ListAssessmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAssessments(request), context);
    } );
}

ListControlDomainInsightsOutcome AuditManagerClient::ListControlDomainInsights(const ListControlDomainInsightsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListControlDomainInsights, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListControlDomainInsights, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/insights/control-domains");
  return ListControlDomainInsightsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListControlDomainInsightsOutcomeCallable AuditManagerClient::ListControlDomainInsightsCallable(const ListControlDomainInsightsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListControlDomainInsightsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListControlDomainInsights(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClient::ListControlDomainInsightsAsync(const ListControlDomainInsightsRequest& request, const ListControlDomainInsightsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListControlDomainInsights(request), context);
    } );
}

ListControlDomainInsightsByAssessmentOutcome AuditManagerClient::ListControlDomainInsightsByAssessment(const ListControlDomainInsightsByAssessmentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListControlDomainInsightsByAssessment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssessmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListControlDomainInsightsByAssessment", "Required field: AssessmentId, is not set");
    return ListControlDomainInsightsByAssessmentOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListControlDomainInsightsByAssessment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/insights/control-domains-by-assessment");
  return ListControlDomainInsightsByAssessmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListControlDomainInsightsByAssessmentOutcomeCallable AuditManagerClient::ListControlDomainInsightsByAssessmentCallable(const ListControlDomainInsightsByAssessmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListControlDomainInsightsByAssessmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListControlDomainInsightsByAssessment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClient::ListControlDomainInsightsByAssessmentAsync(const ListControlDomainInsightsByAssessmentRequest& request, const ListControlDomainInsightsByAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListControlDomainInsightsByAssessment(request), context);
    } );
}

ListControlInsightsByControlDomainOutcome AuditManagerClient::ListControlInsightsByControlDomain(const ListControlInsightsByControlDomainRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListControlInsightsByControlDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ControlDomainIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListControlInsightsByControlDomain", "Required field: ControlDomainId, is not set");
    return ListControlInsightsByControlDomainOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ControlDomainId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListControlInsightsByControlDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/insights/controls");
  return ListControlInsightsByControlDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListControlInsightsByControlDomainOutcomeCallable AuditManagerClient::ListControlInsightsByControlDomainCallable(const ListControlInsightsByControlDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListControlInsightsByControlDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListControlInsightsByControlDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClient::ListControlInsightsByControlDomainAsync(const ListControlInsightsByControlDomainRequest& request, const ListControlInsightsByControlDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListControlInsightsByControlDomain(request), context);
    } );
}

ListControlsOutcome AuditManagerClient::ListControls(const ListControlsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListControls, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ControlTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListControls", "Required field: ControlType, is not set");
    return ListControlsOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ControlType]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListControls, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/controls");
  return ListControlsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListControlsOutcomeCallable AuditManagerClient::ListControlsCallable(const ListControlsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListControlsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListControls(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClient::ListControlsAsync(const ListControlsRequest& request, const ListControlsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListControls(request), context);
    } );
}

ListKeywordsForDataSourceOutcome AuditManagerClient::ListKeywordsForDataSource(const ListKeywordsForDataSourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListKeywordsForDataSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SourceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListKeywordsForDataSource", "Required field: Source, is not set");
    return ListKeywordsForDataSourceOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Source]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListKeywordsForDataSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/dataSourceKeywords");
  return ListKeywordsForDataSourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListKeywordsForDataSourceOutcomeCallable AuditManagerClient::ListKeywordsForDataSourceCallable(const ListKeywordsForDataSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListKeywordsForDataSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListKeywordsForDataSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClient::ListKeywordsForDataSourceAsync(const ListKeywordsForDataSourceRequest& request, const ListKeywordsForDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListKeywordsForDataSource(request), context);
    } );
}

ListNotificationsOutcome AuditManagerClient::ListNotifications(const ListNotificationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListNotifications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListNotifications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/notifications");
  return ListNotificationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListNotificationsOutcomeCallable AuditManagerClient::ListNotificationsCallable(const ListNotificationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListNotificationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListNotifications(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClient::ListNotificationsAsync(const ListNotificationsRequest& request, const ListNotificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListNotifications(request), context);
    } );
}

ListTagsForResourceOutcome AuditManagerClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable AuditManagerClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

RegisterAccountOutcome AuditManagerClient::RegisterAccount(const RegisterAccountRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RegisterAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RegisterAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/account/registerAccount");
  return RegisterAccountOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterAccountOutcomeCallable AuditManagerClient::RegisterAccountCallable(const RegisterAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClient::RegisterAccountAsync(const RegisterAccountRequest& request, const RegisterAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RegisterAccount(request), context);
    } );
}

RegisterOrganizationAdminAccountOutcome AuditManagerClient::RegisterOrganizationAdminAccount(const RegisterOrganizationAdminAccountRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RegisterOrganizationAdminAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RegisterOrganizationAdminAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/account/registerOrganizationAdminAccount");
  return RegisterOrganizationAdminAccountOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterOrganizationAdminAccountOutcomeCallable AuditManagerClient::RegisterOrganizationAdminAccountCallable(const RegisterOrganizationAdminAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterOrganizationAdminAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterOrganizationAdminAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClient::RegisterOrganizationAdminAccountAsync(const RegisterOrganizationAdminAccountRequest& request, const RegisterOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RegisterOrganizationAdminAccount(request), context);
    } );
}

StartAssessmentFrameworkShareOutcome AuditManagerClient::StartAssessmentFrameworkShare(const StartAssessmentFrameworkShareRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartAssessmentFrameworkShare, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FrameworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartAssessmentFrameworkShare", "Required field: FrameworkId, is not set");
    return StartAssessmentFrameworkShareOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FrameworkId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartAssessmentFrameworkShare, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/assessmentFrameworks/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFrameworkId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/shareRequests");
  return StartAssessmentFrameworkShareOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartAssessmentFrameworkShareOutcomeCallable AuditManagerClient::StartAssessmentFrameworkShareCallable(const StartAssessmentFrameworkShareRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartAssessmentFrameworkShareOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartAssessmentFrameworkShare(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClient::StartAssessmentFrameworkShareAsync(const StartAssessmentFrameworkShareRequest& request, const StartAssessmentFrameworkShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartAssessmentFrameworkShare(request), context);
    } );
}

TagResourceOutcome AuditManagerClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable AuditManagerClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UntagResourceOutcome AuditManagerClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable AuditManagerClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateAssessmentOutcome AuditManagerClient::UpdateAssessment(const UpdateAssessmentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAssessment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssessmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAssessment", "Required field: AssessmentId, is not set");
    return UpdateAssessmentOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateAssessment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/assessments/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssessmentId());
  return UpdateAssessmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateAssessmentOutcomeCallable AuditManagerClient::UpdateAssessmentCallable(const UpdateAssessmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAssessmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAssessment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClient::UpdateAssessmentAsync(const UpdateAssessmentRequest& request, const UpdateAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateAssessment(request), context);
    } );
}

UpdateAssessmentControlOutcome AuditManagerClient::UpdateAssessmentControl(const UpdateAssessmentControlRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAssessmentControl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssessmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAssessmentControl", "Required field: AssessmentId, is not set");
    return UpdateAssessmentControlOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  if (!request.ControlSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAssessmentControl", "Required field: ControlSetId, is not set");
    return UpdateAssessmentControlOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ControlSetId]", false));
  }
  if (!request.ControlIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAssessmentControl", "Required field: ControlId, is not set");
    return UpdateAssessmentControlOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ControlId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateAssessmentControl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/assessments/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssessmentId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/controlSets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetControlSetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/controls/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetControlId());
  return UpdateAssessmentControlOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateAssessmentControlOutcomeCallable AuditManagerClient::UpdateAssessmentControlCallable(const UpdateAssessmentControlRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAssessmentControlOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAssessmentControl(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClient::UpdateAssessmentControlAsync(const UpdateAssessmentControlRequest& request, const UpdateAssessmentControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateAssessmentControl(request), context);
    } );
}

UpdateAssessmentControlSetStatusOutcome AuditManagerClient::UpdateAssessmentControlSetStatus(const UpdateAssessmentControlSetStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAssessmentControlSetStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssessmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAssessmentControlSetStatus", "Required field: AssessmentId, is not set");
    return UpdateAssessmentControlSetStatusOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  if (!request.ControlSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAssessmentControlSetStatus", "Required field: ControlSetId, is not set");
    return UpdateAssessmentControlSetStatusOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ControlSetId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateAssessmentControlSetStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/assessments/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssessmentId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/controlSets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetControlSetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/status");
  return UpdateAssessmentControlSetStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateAssessmentControlSetStatusOutcomeCallable AuditManagerClient::UpdateAssessmentControlSetStatusCallable(const UpdateAssessmentControlSetStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAssessmentControlSetStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAssessmentControlSetStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClient::UpdateAssessmentControlSetStatusAsync(const UpdateAssessmentControlSetStatusRequest& request, const UpdateAssessmentControlSetStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateAssessmentControlSetStatus(request), context);
    } );
}

UpdateAssessmentFrameworkOutcome AuditManagerClient::UpdateAssessmentFramework(const UpdateAssessmentFrameworkRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAssessmentFramework, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FrameworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAssessmentFramework", "Required field: FrameworkId, is not set");
    return UpdateAssessmentFrameworkOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FrameworkId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateAssessmentFramework, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/assessmentFrameworks/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFrameworkId());
  return UpdateAssessmentFrameworkOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateAssessmentFrameworkOutcomeCallable AuditManagerClient::UpdateAssessmentFrameworkCallable(const UpdateAssessmentFrameworkRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAssessmentFrameworkOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAssessmentFramework(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClient::UpdateAssessmentFrameworkAsync(const UpdateAssessmentFrameworkRequest& request, const UpdateAssessmentFrameworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateAssessmentFramework(request), context);
    } );
}

UpdateAssessmentFrameworkShareOutcome AuditManagerClient::UpdateAssessmentFrameworkShare(const UpdateAssessmentFrameworkShareRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAssessmentFrameworkShare, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RequestIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAssessmentFrameworkShare", "Required field: RequestId, is not set");
    return UpdateAssessmentFrameworkShareOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RequestId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateAssessmentFrameworkShare, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/assessmentFrameworkShareRequests/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRequestId());
  return UpdateAssessmentFrameworkShareOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateAssessmentFrameworkShareOutcomeCallable AuditManagerClient::UpdateAssessmentFrameworkShareCallable(const UpdateAssessmentFrameworkShareRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAssessmentFrameworkShareOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAssessmentFrameworkShare(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClient::UpdateAssessmentFrameworkShareAsync(const UpdateAssessmentFrameworkShareRequest& request, const UpdateAssessmentFrameworkShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateAssessmentFrameworkShare(request), context);
    } );
}

UpdateAssessmentStatusOutcome AuditManagerClient::UpdateAssessmentStatus(const UpdateAssessmentStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAssessmentStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssessmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAssessmentStatus", "Required field: AssessmentId, is not set");
    return UpdateAssessmentStatusOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateAssessmentStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/assessments/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssessmentId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/status");
  return UpdateAssessmentStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateAssessmentStatusOutcomeCallable AuditManagerClient::UpdateAssessmentStatusCallable(const UpdateAssessmentStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAssessmentStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAssessmentStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClient::UpdateAssessmentStatusAsync(const UpdateAssessmentStatusRequest& request, const UpdateAssessmentStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateAssessmentStatus(request), context);
    } );
}

UpdateControlOutcome AuditManagerClient::UpdateControl(const UpdateControlRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateControl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ControlIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateControl", "Required field: ControlId, is not set");
    return UpdateControlOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ControlId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateControl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/controls/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetControlId());
  return UpdateControlOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateControlOutcomeCallable AuditManagerClient::UpdateControlCallable(const UpdateControlRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateControlOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateControl(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClient::UpdateControlAsync(const UpdateControlRequest& request, const UpdateControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateControl(request), context);
    } );
}

UpdateSettingsOutcome AuditManagerClient::UpdateSettings(const UpdateSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/settings");
  return UpdateSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateSettingsOutcomeCallable AuditManagerClient::UpdateSettingsCallable(const UpdateSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClient::UpdateSettingsAsync(const UpdateSettingsRequest& request, const UpdateSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateSettings(request), context);
    } );
}

ValidateAssessmentReportIntegrityOutcome AuditManagerClient::ValidateAssessmentReportIntegrity(const ValidateAssessmentReportIntegrityRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ValidateAssessmentReportIntegrity, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ValidateAssessmentReportIntegrity, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/assessmentReports/integrity");
  return ValidateAssessmentReportIntegrityOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ValidateAssessmentReportIntegrityOutcomeCallable AuditManagerClient::ValidateAssessmentReportIntegrityCallable(const ValidateAssessmentReportIntegrityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ValidateAssessmentReportIntegrityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ValidateAssessmentReportIntegrity(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClient::ValidateAssessmentReportIntegrityAsync(const ValidateAssessmentReportIntegrityRequest& request, const ValidateAssessmentReportIntegrityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ValidateAssessmentReportIntegrity(request), context);
    } );
}

