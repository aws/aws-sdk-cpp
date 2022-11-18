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
  std::shared_ptr<AssociateAssessmentReportEvidenceFolderRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< AssociateAssessmentReportEvidenceFolderOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->AssociateAssessmentReportEvidenceFolder(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void AuditManagerClient::AssociateAssessmentReportEvidenceFolderAsync(const AssociateAssessmentReportEvidenceFolderRequest& request, const AssociateAssessmentReportEvidenceFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<AssociateAssessmentReportEvidenceFolderRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, AssociateAssessmentReportEvidenceFolder(*pRequest), context);
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
  std::shared_ptr<BatchAssociateAssessmentReportEvidenceRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< BatchAssociateAssessmentReportEvidenceOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->BatchAssociateAssessmentReportEvidence(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void AuditManagerClient::BatchAssociateAssessmentReportEvidenceAsync(const BatchAssociateAssessmentReportEvidenceRequest& request, const BatchAssociateAssessmentReportEvidenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<BatchAssociateAssessmentReportEvidenceRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, BatchAssociateAssessmentReportEvidence(*pRequest), context);
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
  std::shared_ptr<BatchCreateDelegationByAssessmentRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< BatchCreateDelegationByAssessmentOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->BatchCreateDelegationByAssessment(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void AuditManagerClient::BatchCreateDelegationByAssessmentAsync(const BatchCreateDelegationByAssessmentRequest& request, const BatchCreateDelegationByAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<BatchCreateDelegationByAssessmentRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, BatchCreateDelegationByAssessment(*pRequest), context);
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
  std::shared_ptr<BatchDeleteDelegationByAssessmentRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< BatchDeleteDelegationByAssessmentOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->BatchDeleteDelegationByAssessment(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void AuditManagerClient::BatchDeleteDelegationByAssessmentAsync(const BatchDeleteDelegationByAssessmentRequest& request, const BatchDeleteDelegationByAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<BatchDeleteDelegationByAssessmentRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, BatchDeleteDelegationByAssessment(*pRequest), context);
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
  std::shared_ptr<BatchDisassociateAssessmentReportEvidenceRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< BatchDisassociateAssessmentReportEvidenceOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->BatchDisassociateAssessmentReportEvidence(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void AuditManagerClient::BatchDisassociateAssessmentReportEvidenceAsync(const BatchDisassociateAssessmentReportEvidenceRequest& request, const BatchDisassociateAssessmentReportEvidenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<BatchDisassociateAssessmentReportEvidenceRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, BatchDisassociateAssessmentReportEvidence(*pRequest), context);
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
  std::shared_ptr<BatchImportEvidenceToAssessmentControlRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< BatchImportEvidenceToAssessmentControlOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->BatchImportEvidenceToAssessmentControl(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void AuditManagerClient::BatchImportEvidenceToAssessmentControlAsync(const BatchImportEvidenceToAssessmentControlRequest& request, const BatchImportEvidenceToAssessmentControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<BatchImportEvidenceToAssessmentControlRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, BatchImportEvidenceToAssessmentControl(*pRequest), context);
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
  std::shared_ptr<CreateAssessmentRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateAssessmentOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateAssessment(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void AuditManagerClient::CreateAssessmentAsync(const CreateAssessmentRequest& request, const CreateAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateAssessmentRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateAssessment(*pRequest), context);
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
  std::shared_ptr<CreateAssessmentFrameworkRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateAssessmentFrameworkOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateAssessmentFramework(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void AuditManagerClient::CreateAssessmentFrameworkAsync(const CreateAssessmentFrameworkRequest& request, const CreateAssessmentFrameworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateAssessmentFrameworkRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateAssessmentFramework(*pRequest), context);
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
  std::shared_ptr<CreateAssessmentReportRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateAssessmentReportOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateAssessmentReport(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void AuditManagerClient::CreateAssessmentReportAsync(const CreateAssessmentReportRequest& request, const CreateAssessmentReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateAssessmentReportRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateAssessmentReport(*pRequest), context);
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
  std::shared_ptr<CreateControlRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateControlOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateControl(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void AuditManagerClient::CreateControlAsync(const CreateControlRequest& request, const CreateControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateControlRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateControl(*pRequest), context);
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
  std::shared_ptr<DeleteAssessmentRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteAssessmentOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteAssessment(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void AuditManagerClient::DeleteAssessmentAsync(const DeleteAssessmentRequest& request, const DeleteAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteAssessmentRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteAssessment(*pRequest), context);
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
  std::shared_ptr<DeleteAssessmentFrameworkRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteAssessmentFrameworkOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteAssessmentFramework(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void AuditManagerClient::DeleteAssessmentFrameworkAsync(const DeleteAssessmentFrameworkRequest& request, const DeleteAssessmentFrameworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteAssessmentFrameworkRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteAssessmentFramework(*pRequest), context);
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
  std::shared_ptr<DeleteAssessmentFrameworkShareRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteAssessmentFrameworkShareOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteAssessmentFrameworkShare(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void AuditManagerClient::DeleteAssessmentFrameworkShareAsync(const DeleteAssessmentFrameworkShareRequest& request, const DeleteAssessmentFrameworkShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteAssessmentFrameworkShareRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteAssessmentFrameworkShare(*pRequest), context);
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
  std::shared_ptr<DeleteAssessmentReportRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteAssessmentReportOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteAssessmentReport(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void AuditManagerClient::DeleteAssessmentReportAsync(const DeleteAssessmentReportRequest& request, const DeleteAssessmentReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteAssessmentReportRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteAssessmentReport(*pRequest), context);
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
  std::shared_ptr<DeleteControlRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteControlOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteControl(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void AuditManagerClient::DeleteControlAsync(const DeleteControlRequest& request, const DeleteControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteControlRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteControl(*pRequest), context);
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
  std::shared_ptr<DeregisterAccountRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeregisterAccountOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeregisterAccount(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void AuditManagerClient::DeregisterAccountAsync(const DeregisterAccountRequest& request, const DeregisterAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeregisterAccountRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeregisterAccount(*pRequest), context);
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
  std::shared_ptr<DeregisterOrganizationAdminAccountRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeregisterOrganizationAdminAccountOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeregisterOrganizationAdminAccount(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void AuditManagerClient::DeregisterOrganizationAdminAccountAsync(const DeregisterOrganizationAdminAccountRequest& request, const DeregisterOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeregisterOrganizationAdminAccountRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeregisterOrganizationAdminAccount(*pRequest), context);
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
  std::shared_ptr<DisassociateAssessmentReportEvidenceFolderRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DisassociateAssessmentReportEvidenceFolderOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DisassociateAssessmentReportEvidenceFolder(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void AuditManagerClient::DisassociateAssessmentReportEvidenceFolderAsync(const DisassociateAssessmentReportEvidenceFolderRequest& request, const DisassociateAssessmentReportEvidenceFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DisassociateAssessmentReportEvidenceFolderRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DisassociateAssessmentReportEvidenceFolder(*pRequest), context);
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
  std::shared_ptr<GetAccountStatusRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetAccountStatusOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetAccountStatus(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void AuditManagerClient::GetAccountStatusAsync(const GetAccountStatusRequest& request, const GetAccountStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetAccountStatusRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetAccountStatus(*pRequest), context);
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
  std::shared_ptr<GetAssessmentRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetAssessmentOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetAssessment(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void AuditManagerClient::GetAssessmentAsync(const GetAssessmentRequest& request, const GetAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetAssessmentRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetAssessment(*pRequest), context);
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
  std::shared_ptr<GetAssessmentFrameworkRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetAssessmentFrameworkOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetAssessmentFramework(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void AuditManagerClient::GetAssessmentFrameworkAsync(const GetAssessmentFrameworkRequest& request, const GetAssessmentFrameworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetAssessmentFrameworkRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetAssessmentFramework(*pRequest), context);
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
  std::shared_ptr<GetAssessmentReportUrlRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetAssessmentReportUrlOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetAssessmentReportUrl(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void AuditManagerClient::GetAssessmentReportUrlAsync(const GetAssessmentReportUrlRequest& request, const GetAssessmentReportUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetAssessmentReportUrlRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetAssessmentReportUrl(*pRequest), context);
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
  std::shared_ptr<GetChangeLogsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetChangeLogsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetChangeLogs(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void AuditManagerClient::GetChangeLogsAsync(const GetChangeLogsRequest& request, const GetChangeLogsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetChangeLogsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetChangeLogs(*pRequest), context);
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
  std::shared_ptr<GetControlRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetControlOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetControl(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void AuditManagerClient::GetControlAsync(const GetControlRequest& request, const GetControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetControlRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetControl(*pRequest), context);
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
  std::shared_ptr<GetDelegationsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetDelegationsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetDelegations(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void AuditManagerClient::GetDelegationsAsync(const GetDelegationsRequest& request, const GetDelegationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetDelegationsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetDelegations(*pRequest), context);
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
  std::shared_ptr<GetEvidenceRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetEvidenceOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetEvidence(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void AuditManagerClient::GetEvidenceAsync(const GetEvidenceRequest& request, const GetEvidenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetEvidenceRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetEvidence(*pRequest), context);
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
  std::shared_ptr<GetEvidenceByEvidenceFolderRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetEvidenceByEvidenceFolderOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetEvidenceByEvidenceFolder(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void AuditManagerClient::GetEvidenceByEvidenceFolderAsync(const GetEvidenceByEvidenceFolderRequest& request, const GetEvidenceByEvidenceFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetEvidenceByEvidenceFolderRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetEvidenceByEvidenceFolder(*pRequest), context);
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
  std::shared_ptr<GetEvidenceFolderRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetEvidenceFolderOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetEvidenceFolder(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void AuditManagerClient::GetEvidenceFolderAsync(const GetEvidenceFolderRequest& request, const GetEvidenceFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetEvidenceFolderRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetEvidenceFolder(*pRequest), context);
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
  std::shared_ptr<GetEvidenceFoldersByAssessmentRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetEvidenceFoldersByAssessmentOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetEvidenceFoldersByAssessment(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void AuditManagerClient::GetEvidenceFoldersByAssessmentAsync(const GetEvidenceFoldersByAssessmentRequest& request, const GetEvidenceFoldersByAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetEvidenceFoldersByAssessmentRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetEvidenceFoldersByAssessment(*pRequest), context);
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
  std::shared_ptr<GetEvidenceFoldersByAssessmentControlRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetEvidenceFoldersByAssessmentControlOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetEvidenceFoldersByAssessmentControl(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void AuditManagerClient::GetEvidenceFoldersByAssessmentControlAsync(const GetEvidenceFoldersByAssessmentControlRequest& request, const GetEvidenceFoldersByAssessmentControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetEvidenceFoldersByAssessmentControlRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetEvidenceFoldersByAssessmentControl(*pRequest), context);
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
  std::shared_ptr<GetInsightsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetInsightsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetInsights(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void AuditManagerClient::GetInsightsAsync(const GetInsightsRequest& request, const GetInsightsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetInsightsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetInsights(*pRequest), context);
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
  std::shared_ptr<GetInsightsByAssessmentRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetInsightsByAssessmentOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetInsightsByAssessment(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void AuditManagerClient::GetInsightsByAssessmentAsync(const GetInsightsByAssessmentRequest& request, const GetInsightsByAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetInsightsByAssessmentRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetInsightsByAssessment(*pRequest), context);
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
  std::shared_ptr<GetOrganizationAdminAccountRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetOrganizationAdminAccountOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetOrganizationAdminAccount(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void AuditManagerClient::GetOrganizationAdminAccountAsync(const GetOrganizationAdminAccountRequest& request, const GetOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetOrganizationAdminAccountRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetOrganizationAdminAccount(*pRequest), context);
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
  std::shared_ptr<GetServicesInScopeRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetServicesInScopeOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetServicesInScope(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void AuditManagerClient::GetServicesInScopeAsync(const GetServicesInScopeRequest& request, const GetServicesInScopeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetServicesInScopeRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetServicesInScope(*pRequest), context);
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
  std::shared_ptr<GetSettingsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetSettingsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetSettings(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void AuditManagerClient::GetSettingsAsync(const GetSettingsRequest& request, const GetSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetSettingsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetSettings(*pRequest), context);
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
  std::shared_ptr<ListAssessmentControlInsightsByControlDomainRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ListAssessmentControlInsightsByControlDomainOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ListAssessmentControlInsightsByControlDomain(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void AuditManagerClient::ListAssessmentControlInsightsByControlDomainAsync(const ListAssessmentControlInsightsByControlDomainRequest& request, const ListAssessmentControlInsightsByControlDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ListAssessmentControlInsightsByControlDomainRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ListAssessmentControlInsightsByControlDomain(*pRequest), context);
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
  std::shared_ptr<ListAssessmentFrameworkShareRequestsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ListAssessmentFrameworkShareRequestsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ListAssessmentFrameworkShareRequests(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void AuditManagerClient::ListAssessmentFrameworkShareRequestsAsync(const ListAssessmentFrameworkShareRequestsRequest& request, const ListAssessmentFrameworkShareRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ListAssessmentFrameworkShareRequestsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ListAssessmentFrameworkShareRequests(*pRequest), context);
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
  std::shared_ptr<ListAssessmentFrameworksRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ListAssessmentFrameworksOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ListAssessmentFrameworks(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void AuditManagerClient::ListAssessmentFrameworksAsync(const ListAssessmentFrameworksRequest& request, const ListAssessmentFrameworksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ListAssessmentFrameworksRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ListAssessmentFrameworks(*pRequest), context);
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
  std::shared_ptr<ListAssessmentReportsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ListAssessmentReportsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ListAssessmentReports(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void AuditManagerClient::ListAssessmentReportsAsync(const ListAssessmentReportsRequest& request, const ListAssessmentReportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ListAssessmentReportsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ListAssessmentReports(*pRequest), context);
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
  std::shared_ptr<ListAssessmentsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ListAssessmentsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ListAssessments(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void AuditManagerClient::ListAssessmentsAsync(const ListAssessmentsRequest& request, const ListAssessmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ListAssessmentsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ListAssessments(*pRequest), context);
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
  std::shared_ptr<ListControlDomainInsightsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ListControlDomainInsightsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ListControlDomainInsights(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void AuditManagerClient::ListControlDomainInsightsAsync(const ListControlDomainInsightsRequest& request, const ListControlDomainInsightsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ListControlDomainInsightsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ListControlDomainInsights(*pRequest), context);
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
  std::shared_ptr<ListControlDomainInsightsByAssessmentRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ListControlDomainInsightsByAssessmentOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ListControlDomainInsightsByAssessment(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void AuditManagerClient::ListControlDomainInsightsByAssessmentAsync(const ListControlDomainInsightsByAssessmentRequest& request, const ListControlDomainInsightsByAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ListControlDomainInsightsByAssessmentRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ListControlDomainInsightsByAssessment(*pRequest), context);
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
  std::shared_ptr<ListControlInsightsByControlDomainRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ListControlInsightsByControlDomainOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ListControlInsightsByControlDomain(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void AuditManagerClient::ListControlInsightsByControlDomainAsync(const ListControlInsightsByControlDomainRequest& request, const ListControlInsightsByControlDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ListControlInsightsByControlDomainRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ListControlInsightsByControlDomain(*pRequest), context);
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
  std::shared_ptr<ListControlsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ListControlsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ListControls(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void AuditManagerClient::ListControlsAsync(const ListControlsRequest& request, const ListControlsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ListControlsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ListControls(*pRequest), context);
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
  std::shared_ptr<ListKeywordsForDataSourceRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ListKeywordsForDataSourceOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ListKeywordsForDataSource(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void AuditManagerClient::ListKeywordsForDataSourceAsync(const ListKeywordsForDataSourceRequest& request, const ListKeywordsForDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ListKeywordsForDataSourceRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ListKeywordsForDataSource(*pRequest), context);
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
  std::shared_ptr<ListNotificationsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ListNotificationsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ListNotifications(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void AuditManagerClient::ListNotificationsAsync(const ListNotificationsRequest& request, const ListNotificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ListNotificationsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ListNotifications(*pRequest), context);
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
  std::shared_ptr<ListTagsForResourceRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ListTagsForResource(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void AuditManagerClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ListTagsForResourceRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ListTagsForResource(*pRequest), context);
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
  std::shared_ptr<RegisterAccountRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< RegisterAccountOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->RegisterAccount(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void AuditManagerClient::RegisterAccountAsync(const RegisterAccountRequest& request, const RegisterAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<RegisterAccountRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, RegisterAccount(*pRequest), context);
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
  std::shared_ptr<RegisterOrganizationAdminAccountRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< RegisterOrganizationAdminAccountOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->RegisterOrganizationAdminAccount(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void AuditManagerClient::RegisterOrganizationAdminAccountAsync(const RegisterOrganizationAdminAccountRequest& request, const RegisterOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<RegisterOrganizationAdminAccountRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, RegisterOrganizationAdminAccount(*pRequest), context);
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
  std::shared_ptr<StartAssessmentFrameworkShareRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< StartAssessmentFrameworkShareOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->StartAssessmentFrameworkShare(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void AuditManagerClient::StartAssessmentFrameworkShareAsync(const StartAssessmentFrameworkShareRequest& request, const StartAssessmentFrameworkShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<StartAssessmentFrameworkShareRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, StartAssessmentFrameworkShare(*pRequest), context);
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
  std::shared_ptr<TagResourceRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->TagResource(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void AuditManagerClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<TagResourceRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, TagResource(*pRequest), context);
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
  std::shared_ptr<UntagResourceRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->UntagResource(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void AuditManagerClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<UntagResourceRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, UntagResource(*pRequest), context);
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
  std::shared_ptr<UpdateAssessmentRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< UpdateAssessmentOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->UpdateAssessment(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void AuditManagerClient::UpdateAssessmentAsync(const UpdateAssessmentRequest& request, const UpdateAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<UpdateAssessmentRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, UpdateAssessment(*pRequest), context);
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
  std::shared_ptr<UpdateAssessmentControlRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< UpdateAssessmentControlOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->UpdateAssessmentControl(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void AuditManagerClient::UpdateAssessmentControlAsync(const UpdateAssessmentControlRequest& request, const UpdateAssessmentControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<UpdateAssessmentControlRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, UpdateAssessmentControl(*pRequest), context);
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
  std::shared_ptr<UpdateAssessmentControlSetStatusRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< UpdateAssessmentControlSetStatusOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->UpdateAssessmentControlSetStatus(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void AuditManagerClient::UpdateAssessmentControlSetStatusAsync(const UpdateAssessmentControlSetStatusRequest& request, const UpdateAssessmentControlSetStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<UpdateAssessmentControlSetStatusRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, UpdateAssessmentControlSetStatus(*pRequest), context);
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
  std::shared_ptr<UpdateAssessmentFrameworkRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< UpdateAssessmentFrameworkOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->UpdateAssessmentFramework(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void AuditManagerClient::UpdateAssessmentFrameworkAsync(const UpdateAssessmentFrameworkRequest& request, const UpdateAssessmentFrameworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<UpdateAssessmentFrameworkRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, UpdateAssessmentFramework(*pRequest), context);
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
  std::shared_ptr<UpdateAssessmentFrameworkShareRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< UpdateAssessmentFrameworkShareOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->UpdateAssessmentFrameworkShare(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void AuditManagerClient::UpdateAssessmentFrameworkShareAsync(const UpdateAssessmentFrameworkShareRequest& request, const UpdateAssessmentFrameworkShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<UpdateAssessmentFrameworkShareRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, UpdateAssessmentFrameworkShare(*pRequest), context);
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
  std::shared_ptr<UpdateAssessmentStatusRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< UpdateAssessmentStatusOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->UpdateAssessmentStatus(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void AuditManagerClient::UpdateAssessmentStatusAsync(const UpdateAssessmentStatusRequest& request, const UpdateAssessmentStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<UpdateAssessmentStatusRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, UpdateAssessmentStatus(*pRequest), context);
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
  std::shared_ptr<UpdateControlRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< UpdateControlOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->UpdateControl(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void AuditManagerClient::UpdateControlAsync(const UpdateControlRequest& request, const UpdateControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<UpdateControlRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, UpdateControl(*pRequest), context);
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
  std::shared_ptr<UpdateSettingsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< UpdateSettingsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->UpdateSettings(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void AuditManagerClient::UpdateSettingsAsync(const UpdateSettingsRequest& request, const UpdateSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<UpdateSettingsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, UpdateSettings(*pRequest), context);
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
  std::shared_ptr<ValidateAssessmentReportIntegrityRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ValidateAssessmentReportIntegrityOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ValidateAssessmentReportIntegrity(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void AuditManagerClient::ValidateAssessmentReportIntegrityAsync(const ValidateAssessmentReportIntegrityRequest& request, const ValidateAssessmentReportIntegrityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ValidateAssessmentReportIntegrityRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ValidateAssessmentReportIntegrity(*pRequest), context);
    } );
}

