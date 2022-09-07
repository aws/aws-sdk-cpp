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

#include <aws/auditmanager/AuditManagerClient.h>
#include <aws/auditmanager/AuditManagerEndpoint.h>
#include <aws/auditmanager/AuditManagerErrorMarshaller.h>
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

static const char* SERVICE_NAME = "auditmanager";
static const char* ALLOCATION_TAG = "AuditManagerClient";

AuditManagerClient::AuditManagerClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AuditManagerErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AuditManagerClient::AuditManagerClient(const AWSCredentials& credentials,
                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AuditManagerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AuditManagerClient::AuditManagerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AuditManagerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AuditManagerClient::~AuditManagerClient()
{
}

void AuditManagerClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("AuditManager");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + AuditManagerEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void AuditManagerClient::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0 || endpoint.compare(0, 8, "https://") == 0)
  {
      m_uri = endpoint;
  }
  else
  {
      m_uri = m_configScheme + "://" + endpoint;
  }
}

AssociateAssessmentReportEvidenceFolderOutcome AuditManagerClient::AssociateAssessmentReportEvidenceFolder(const AssociateAssessmentReportEvidenceFolderRequest& request) const
{
  if (!request.AssessmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateAssessmentReportEvidenceFolder", "Required field: AssessmentId, is not set");
    return AssociateAssessmentReportEvidenceFolderOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/assessments/");
  uri.AddPathSegment(request.GetAssessmentId());
  uri.AddPathSegments("/associateToAssessmentReport");
  return AssociateAssessmentReportEvidenceFolderOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

AssociateAssessmentReportEvidenceFolderOutcomeCallable AuditManagerClient::AssociateAssessmentReportEvidenceFolderCallable(const AssociateAssessmentReportEvidenceFolderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateAssessmentReportEvidenceFolderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateAssessmentReportEvidenceFolder(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClientAssociateAssessmentReportEvidenceFolderAsyncHelper(AuditManagerClient const * const clientThis, const AssociateAssessmentReportEvidenceFolderRequest& request, const AssociateAssessmentReportEvidenceFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateAssessmentReportEvidenceFolder(request), context);
}

void AuditManagerClient::AssociateAssessmentReportEvidenceFolderAsync(const AssociateAssessmentReportEvidenceFolderRequest& request, const AssociateAssessmentReportEvidenceFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AuditManagerClientAssociateAssessmentReportEvidenceFolderAsyncHelper( this, request, handler, context ); } );
}

BatchAssociateAssessmentReportEvidenceOutcome AuditManagerClient::BatchAssociateAssessmentReportEvidence(const BatchAssociateAssessmentReportEvidenceRequest& request) const
{
  if (!request.AssessmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchAssociateAssessmentReportEvidence", "Required field: AssessmentId, is not set");
    return BatchAssociateAssessmentReportEvidenceOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/assessments/");
  uri.AddPathSegment(request.GetAssessmentId());
  uri.AddPathSegments("/batchAssociateToAssessmentReport");
  return BatchAssociateAssessmentReportEvidenceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

BatchAssociateAssessmentReportEvidenceOutcomeCallable AuditManagerClient::BatchAssociateAssessmentReportEvidenceCallable(const BatchAssociateAssessmentReportEvidenceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchAssociateAssessmentReportEvidenceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchAssociateAssessmentReportEvidence(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClientBatchAssociateAssessmentReportEvidenceAsyncHelper(AuditManagerClient const * const clientThis, const BatchAssociateAssessmentReportEvidenceRequest& request, const BatchAssociateAssessmentReportEvidenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchAssociateAssessmentReportEvidence(request), context);
}

void AuditManagerClient::BatchAssociateAssessmentReportEvidenceAsync(const BatchAssociateAssessmentReportEvidenceRequest& request, const BatchAssociateAssessmentReportEvidenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AuditManagerClientBatchAssociateAssessmentReportEvidenceAsyncHelper( this, request, handler, context ); } );
}

BatchCreateDelegationByAssessmentOutcome AuditManagerClient::BatchCreateDelegationByAssessment(const BatchCreateDelegationByAssessmentRequest& request) const
{
  if (!request.AssessmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchCreateDelegationByAssessment", "Required field: AssessmentId, is not set");
    return BatchCreateDelegationByAssessmentOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/assessments/");
  uri.AddPathSegment(request.GetAssessmentId());
  uri.AddPathSegments("/delegations");
  return BatchCreateDelegationByAssessmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchCreateDelegationByAssessmentOutcomeCallable AuditManagerClient::BatchCreateDelegationByAssessmentCallable(const BatchCreateDelegationByAssessmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchCreateDelegationByAssessmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchCreateDelegationByAssessment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClientBatchCreateDelegationByAssessmentAsyncHelper(AuditManagerClient const * const clientThis, const BatchCreateDelegationByAssessmentRequest& request, const BatchCreateDelegationByAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchCreateDelegationByAssessment(request), context);
}

void AuditManagerClient::BatchCreateDelegationByAssessmentAsync(const BatchCreateDelegationByAssessmentRequest& request, const BatchCreateDelegationByAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AuditManagerClientBatchCreateDelegationByAssessmentAsyncHelper( this, request, handler, context ); } );
}

BatchDeleteDelegationByAssessmentOutcome AuditManagerClient::BatchDeleteDelegationByAssessment(const BatchDeleteDelegationByAssessmentRequest& request) const
{
  if (!request.AssessmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchDeleteDelegationByAssessment", "Required field: AssessmentId, is not set");
    return BatchDeleteDelegationByAssessmentOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/assessments/");
  uri.AddPathSegment(request.GetAssessmentId());
  uri.AddPathSegments("/delegations");
  return BatchDeleteDelegationByAssessmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

BatchDeleteDelegationByAssessmentOutcomeCallable AuditManagerClient::BatchDeleteDelegationByAssessmentCallable(const BatchDeleteDelegationByAssessmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchDeleteDelegationByAssessmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchDeleteDelegationByAssessment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClientBatchDeleteDelegationByAssessmentAsyncHelper(AuditManagerClient const * const clientThis, const BatchDeleteDelegationByAssessmentRequest& request, const BatchDeleteDelegationByAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchDeleteDelegationByAssessment(request), context);
}

void AuditManagerClient::BatchDeleteDelegationByAssessmentAsync(const BatchDeleteDelegationByAssessmentRequest& request, const BatchDeleteDelegationByAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AuditManagerClientBatchDeleteDelegationByAssessmentAsyncHelper( this, request, handler, context ); } );
}

BatchDisassociateAssessmentReportEvidenceOutcome AuditManagerClient::BatchDisassociateAssessmentReportEvidence(const BatchDisassociateAssessmentReportEvidenceRequest& request) const
{
  if (!request.AssessmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchDisassociateAssessmentReportEvidence", "Required field: AssessmentId, is not set");
    return BatchDisassociateAssessmentReportEvidenceOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/assessments/");
  uri.AddPathSegment(request.GetAssessmentId());
  uri.AddPathSegments("/batchDisassociateFromAssessmentReport");
  return BatchDisassociateAssessmentReportEvidenceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

BatchDisassociateAssessmentReportEvidenceOutcomeCallable AuditManagerClient::BatchDisassociateAssessmentReportEvidenceCallable(const BatchDisassociateAssessmentReportEvidenceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchDisassociateAssessmentReportEvidenceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchDisassociateAssessmentReportEvidence(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClientBatchDisassociateAssessmentReportEvidenceAsyncHelper(AuditManagerClient const * const clientThis, const BatchDisassociateAssessmentReportEvidenceRequest& request, const BatchDisassociateAssessmentReportEvidenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchDisassociateAssessmentReportEvidence(request), context);
}

void AuditManagerClient::BatchDisassociateAssessmentReportEvidenceAsync(const BatchDisassociateAssessmentReportEvidenceRequest& request, const BatchDisassociateAssessmentReportEvidenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AuditManagerClientBatchDisassociateAssessmentReportEvidenceAsyncHelper( this, request, handler, context ); } );
}

BatchImportEvidenceToAssessmentControlOutcome AuditManagerClient::BatchImportEvidenceToAssessmentControl(const BatchImportEvidenceToAssessmentControlRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/assessments/");
  uri.AddPathSegment(request.GetAssessmentId());
  uri.AddPathSegments("/controlSets/");
  uri.AddPathSegment(request.GetControlSetId());
  uri.AddPathSegments("/controls/");
  uri.AddPathSegment(request.GetControlId());
  uri.AddPathSegments("/evidence");
  return BatchImportEvidenceToAssessmentControlOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchImportEvidenceToAssessmentControlOutcomeCallable AuditManagerClient::BatchImportEvidenceToAssessmentControlCallable(const BatchImportEvidenceToAssessmentControlRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchImportEvidenceToAssessmentControlOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchImportEvidenceToAssessmentControl(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClientBatchImportEvidenceToAssessmentControlAsyncHelper(AuditManagerClient const * const clientThis, const BatchImportEvidenceToAssessmentControlRequest& request, const BatchImportEvidenceToAssessmentControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchImportEvidenceToAssessmentControl(request), context);
}

void AuditManagerClient::BatchImportEvidenceToAssessmentControlAsync(const BatchImportEvidenceToAssessmentControlRequest& request, const BatchImportEvidenceToAssessmentControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AuditManagerClientBatchImportEvidenceToAssessmentControlAsyncHelper( this, request, handler, context ); } );
}

CreateAssessmentOutcome AuditManagerClient::CreateAssessment(const CreateAssessmentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/assessments");
  return CreateAssessmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAssessmentOutcomeCallable AuditManagerClient::CreateAssessmentCallable(const CreateAssessmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAssessmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAssessment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClientCreateAssessmentAsyncHelper(AuditManagerClient const * const clientThis, const CreateAssessmentRequest& request, const CreateAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateAssessment(request), context);
}

void AuditManagerClient::CreateAssessmentAsync(const CreateAssessmentRequest& request, const CreateAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AuditManagerClientCreateAssessmentAsyncHelper( this, request, handler, context ); } );
}

CreateAssessmentFrameworkOutcome AuditManagerClient::CreateAssessmentFramework(const CreateAssessmentFrameworkRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/assessmentFrameworks");
  return CreateAssessmentFrameworkOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAssessmentFrameworkOutcomeCallable AuditManagerClient::CreateAssessmentFrameworkCallable(const CreateAssessmentFrameworkRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAssessmentFrameworkOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAssessmentFramework(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClientCreateAssessmentFrameworkAsyncHelper(AuditManagerClient const * const clientThis, const CreateAssessmentFrameworkRequest& request, const CreateAssessmentFrameworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateAssessmentFramework(request), context);
}

void AuditManagerClient::CreateAssessmentFrameworkAsync(const CreateAssessmentFrameworkRequest& request, const CreateAssessmentFrameworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AuditManagerClientCreateAssessmentFrameworkAsyncHelper( this, request, handler, context ); } );
}

CreateAssessmentReportOutcome AuditManagerClient::CreateAssessmentReport(const CreateAssessmentReportRequest& request) const
{
  if (!request.AssessmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateAssessmentReport", "Required field: AssessmentId, is not set");
    return CreateAssessmentReportOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/assessments/");
  uri.AddPathSegment(request.GetAssessmentId());
  uri.AddPathSegments("/reports");
  return CreateAssessmentReportOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAssessmentReportOutcomeCallable AuditManagerClient::CreateAssessmentReportCallable(const CreateAssessmentReportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAssessmentReportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAssessmentReport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClientCreateAssessmentReportAsyncHelper(AuditManagerClient const * const clientThis, const CreateAssessmentReportRequest& request, const CreateAssessmentReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateAssessmentReport(request), context);
}

void AuditManagerClient::CreateAssessmentReportAsync(const CreateAssessmentReportRequest& request, const CreateAssessmentReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AuditManagerClientCreateAssessmentReportAsyncHelper( this, request, handler, context ); } );
}

CreateControlOutcome AuditManagerClient::CreateControl(const CreateControlRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/controls");
  return CreateControlOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateControlOutcomeCallable AuditManagerClient::CreateControlCallable(const CreateControlRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateControlOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateControl(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClientCreateControlAsyncHelper(AuditManagerClient const * const clientThis, const CreateControlRequest& request, const CreateControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateControl(request), context);
}

void AuditManagerClient::CreateControlAsync(const CreateControlRequest& request, const CreateControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AuditManagerClientCreateControlAsyncHelper( this, request, handler, context ); } );
}

DeleteAssessmentOutcome AuditManagerClient::DeleteAssessment(const DeleteAssessmentRequest& request) const
{
  if (!request.AssessmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAssessment", "Required field: AssessmentId, is not set");
    return DeleteAssessmentOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/assessments/");
  uri.AddPathSegment(request.GetAssessmentId());
  return DeleteAssessmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteAssessmentOutcomeCallable AuditManagerClient::DeleteAssessmentCallable(const DeleteAssessmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAssessmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAssessment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClientDeleteAssessmentAsyncHelper(AuditManagerClient const * const clientThis, const DeleteAssessmentRequest& request, const DeleteAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteAssessment(request), context);
}

void AuditManagerClient::DeleteAssessmentAsync(const DeleteAssessmentRequest& request, const DeleteAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AuditManagerClientDeleteAssessmentAsyncHelper( this, request, handler, context ); } );
}

DeleteAssessmentFrameworkOutcome AuditManagerClient::DeleteAssessmentFramework(const DeleteAssessmentFrameworkRequest& request) const
{
  if (!request.FrameworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAssessmentFramework", "Required field: FrameworkId, is not set");
    return DeleteAssessmentFrameworkOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FrameworkId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/assessmentFrameworks/");
  uri.AddPathSegment(request.GetFrameworkId());
  return DeleteAssessmentFrameworkOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteAssessmentFrameworkOutcomeCallable AuditManagerClient::DeleteAssessmentFrameworkCallable(const DeleteAssessmentFrameworkRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAssessmentFrameworkOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAssessmentFramework(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClientDeleteAssessmentFrameworkAsyncHelper(AuditManagerClient const * const clientThis, const DeleteAssessmentFrameworkRequest& request, const DeleteAssessmentFrameworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteAssessmentFramework(request), context);
}

void AuditManagerClient::DeleteAssessmentFrameworkAsync(const DeleteAssessmentFrameworkRequest& request, const DeleteAssessmentFrameworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AuditManagerClientDeleteAssessmentFrameworkAsyncHelper( this, request, handler, context ); } );
}

DeleteAssessmentFrameworkShareOutcome AuditManagerClient::DeleteAssessmentFrameworkShare(const DeleteAssessmentFrameworkShareRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/assessmentFrameworkShareRequests/");
  uri.AddPathSegment(request.GetRequestId());
  return DeleteAssessmentFrameworkShareOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteAssessmentFrameworkShareOutcomeCallable AuditManagerClient::DeleteAssessmentFrameworkShareCallable(const DeleteAssessmentFrameworkShareRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAssessmentFrameworkShareOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAssessmentFrameworkShare(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClientDeleteAssessmentFrameworkShareAsyncHelper(AuditManagerClient const * const clientThis, const DeleteAssessmentFrameworkShareRequest& request, const DeleteAssessmentFrameworkShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteAssessmentFrameworkShare(request), context);
}

void AuditManagerClient::DeleteAssessmentFrameworkShareAsync(const DeleteAssessmentFrameworkShareRequest& request, const DeleteAssessmentFrameworkShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AuditManagerClientDeleteAssessmentFrameworkShareAsyncHelper( this, request, handler, context ); } );
}

DeleteAssessmentReportOutcome AuditManagerClient::DeleteAssessmentReport(const DeleteAssessmentReportRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/assessments/");
  uri.AddPathSegment(request.GetAssessmentId());
  uri.AddPathSegments("/reports/");
  uri.AddPathSegment(request.GetAssessmentReportId());
  return DeleteAssessmentReportOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteAssessmentReportOutcomeCallable AuditManagerClient::DeleteAssessmentReportCallable(const DeleteAssessmentReportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAssessmentReportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAssessmentReport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClientDeleteAssessmentReportAsyncHelper(AuditManagerClient const * const clientThis, const DeleteAssessmentReportRequest& request, const DeleteAssessmentReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteAssessmentReport(request), context);
}

void AuditManagerClient::DeleteAssessmentReportAsync(const DeleteAssessmentReportRequest& request, const DeleteAssessmentReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AuditManagerClientDeleteAssessmentReportAsyncHelper( this, request, handler, context ); } );
}

DeleteControlOutcome AuditManagerClient::DeleteControl(const DeleteControlRequest& request) const
{
  if (!request.ControlIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteControl", "Required field: ControlId, is not set");
    return DeleteControlOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ControlId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/controls/");
  uri.AddPathSegment(request.GetControlId());
  return DeleteControlOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteControlOutcomeCallable AuditManagerClient::DeleteControlCallable(const DeleteControlRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteControlOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteControl(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClientDeleteControlAsyncHelper(AuditManagerClient const * const clientThis, const DeleteControlRequest& request, const DeleteControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteControl(request), context);
}

void AuditManagerClient::DeleteControlAsync(const DeleteControlRequest& request, const DeleteControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AuditManagerClientDeleteControlAsyncHelper( this, request, handler, context ); } );
}

DeregisterAccountOutcome AuditManagerClient::DeregisterAccount(const DeregisterAccountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/account/deregisterAccount");
  return DeregisterAccountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeregisterAccountOutcomeCallable AuditManagerClient::DeregisterAccountCallable(const DeregisterAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClientDeregisterAccountAsyncHelper(AuditManagerClient const * const clientThis, const DeregisterAccountRequest& request, const DeregisterAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeregisterAccount(request), context);
}

void AuditManagerClient::DeregisterAccountAsync(const DeregisterAccountRequest& request, const DeregisterAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AuditManagerClientDeregisterAccountAsyncHelper( this, request, handler, context ); } );
}

DeregisterOrganizationAdminAccountOutcome AuditManagerClient::DeregisterOrganizationAdminAccount(const DeregisterOrganizationAdminAccountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/account/deregisterOrganizationAdminAccount");
  return DeregisterOrganizationAdminAccountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeregisterOrganizationAdminAccountOutcomeCallable AuditManagerClient::DeregisterOrganizationAdminAccountCallable(const DeregisterOrganizationAdminAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterOrganizationAdminAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterOrganizationAdminAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClientDeregisterOrganizationAdminAccountAsyncHelper(AuditManagerClient const * const clientThis, const DeregisterOrganizationAdminAccountRequest& request, const DeregisterOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeregisterOrganizationAdminAccount(request), context);
}

void AuditManagerClient::DeregisterOrganizationAdminAccountAsync(const DeregisterOrganizationAdminAccountRequest& request, const DeregisterOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AuditManagerClientDeregisterOrganizationAdminAccountAsyncHelper( this, request, handler, context ); } );
}

DisassociateAssessmentReportEvidenceFolderOutcome AuditManagerClient::DisassociateAssessmentReportEvidenceFolder(const DisassociateAssessmentReportEvidenceFolderRequest& request) const
{
  if (!request.AssessmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateAssessmentReportEvidenceFolder", "Required field: AssessmentId, is not set");
    return DisassociateAssessmentReportEvidenceFolderOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/assessments/");
  uri.AddPathSegment(request.GetAssessmentId());
  uri.AddPathSegments("/disassociateFromAssessmentReport");
  return DisassociateAssessmentReportEvidenceFolderOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

DisassociateAssessmentReportEvidenceFolderOutcomeCallable AuditManagerClient::DisassociateAssessmentReportEvidenceFolderCallable(const DisassociateAssessmentReportEvidenceFolderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateAssessmentReportEvidenceFolderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateAssessmentReportEvidenceFolder(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClientDisassociateAssessmentReportEvidenceFolderAsyncHelper(AuditManagerClient const * const clientThis, const DisassociateAssessmentReportEvidenceFolderRequest& request, const DisassociateAssessmentReportEvidenceFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateAssessmentReportEvidenceFolder(request), context);
}

void AuditManagerClient::DisassociateAssessmentReportEvidenceFolderAsync(const DisassociateAssessmentReportEvidenceFolderRequest& request, const DisassociateAssessmentReportEvidenceFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AuditManagerClientDisassociateAssessmentReportEvidenceFolderAsyncHelper( this, request, handler, context ); } );
}

GetAccountStatusOutcome AuditManagerClient::GetAccountStatus(const GetAccountStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/account/status");
  return GetAccountStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetAccountStatusOutcomeCallable AuditManagerClient::GetAccountStatusCallable(const GetAccountStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAccountStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAccountStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClientGetAccountStatusAsyncHelper(AuditManagerClient const * const clientThis, const GetAccountStatusRequest& request, const GetAccountStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetAccountStatus(request), context);
}

void AuditManagerClient::GetAccountStatusAsync(const GetAccountStatusRequest& request, const GetAccountStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AuditManagerClientGetAccountStatusAsyncHelper( this, request, handler, context ); } );
}

GetAssessmentOutcome AuditManagerClient::GetAssessment(const GetAssessmentRequest& request) const
{
  if (!request.AssessmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAssessment", "Required field: AssessmentId, is not set");
    return GetAssessmentOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/assessments/");
  uri.AddPathSegment(request.GetAssessmentId());
  return GetAssessmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetAssessmentOutcomeCallable AuditManagerClient::GetAssessmentCallable(const GetAssessmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAssessmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAssessment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClientGetAssessmentAsyncHelper(AuditManagerClient const * const clientThis, const GetAssessmentRequest& request, const GetAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetAssessment(request), context);
}

void AuditManagerClient::GetAssessmentAsync(const GetAssessmentRequest& request, const GetAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AuditManagerClientGetAssessmentAsyncHelper( this, request, handler, context ); } );
}

GetAssessmentFrameworkOutcome AuditManagerClient::GetAssessmentFramework(const GetAssessmentFrameworkRequest& request) const
{
  if (!request.FrameworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAssessmentFramework", "Required field: FrameworkId, is not set");
    return GetAssessmentFrameworkOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FrameworkId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/assessmentFrameworks/");
  uri.AddPathSegment(request.GetFrameworkId());
  return GetAssessmentFrameworkOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetAssessmentFrameworkOutcomeCallable AuditManagerClient::GetAssessmentFrameworkCallable(const GetAssessmentFrameworkRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAssessmentFrameworkOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAssessmentFramework(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClientGetAssessmentFrameworkAsyncHelper(AuditManagerClient const * const clientThis, const GetAssessmentFrameworkRequest& request, const GetAssessmentFrameworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetAssessmentFramework(request), context);
}

void AuditManagerClient::GetAssessmentFrameworkAsync(const GetAssessmentFrameworkRequest& request, const GetAssessmentFrameworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AuditManagerClientGetAssessmentFrameworkAsyncHelper( this, request, handler, context ); } );
}

GetAssessmentReportUrlOutcome AuditManagerClient::GetAssessmentReportUrl(const GetAssessmentReportUrlRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/assessments/");
  uri.AddPathSegment(request.GetAssessmentId());
  uri.AddPathSegments("/reports/");
  uri.AddPathSegment(request.GetAssessmentReportId());
  uri.AddPathSegments("/url");
  return GetAssessmentReportUrlOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetAssessmentReportUrlOutcomeCallable AuditManagerClient::GetAssessmentReportUrlCallable(const GetAssessmentReportUrlRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAssessmentReportUrlOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAssessmentReportUrl(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClientGetAssessmentReportUrlAsyncHelper(AuditManagerClient const * const clientThis, const GetAssessmentReportUrlRequest& request, const GetAssessmentReportUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetAssessmentReportUrl(request), context);
}

void AuditManagerClient::GetAssessmentReportUrlAsync(const GetAssessmentReportUrlRequest& request, const GetAssessmentReportUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AuditManagerClientGetAssessmentReportUrlAsyncHelper( this, request, handler, context ); } );
}

GetChangeLogsOutcome AuditManagerClient::GetChangeLogs(const GetChangeLogsRequest& request) const
{
  if (!request.AssessmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetChangeLogs", "Required field: AssessmentId, is not set");
    return GetChangeLogsOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/assessments/");
  uri.AddPathSegment(request.GetAssessmentId());
  uri.AddPathSegments("/changelogs");
  return GetChangeLogsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetChangeLogsOutcomeCallable AuditManagerClient::GetChangeLogsCallable(const GetChangeLogsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetChangeLogsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetChangeLogs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClientGetChangeLogsAsyncHelper(AuditManagerClient const * const clientThis, const GetChangeLogsRequest& request, const GetChangeLogsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetChangeLogs(request), context);
}

void AuditManagerClient::GetChangeLogsAsync(const GetChangeLogsRequest& request, const GetChangeLogsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AuditManagerClientGetChangeLogsAsyncHelper( this, request, handler, context ); } );
}

GetControlOutcome AuditManagerClient::GetControl(const GetControlRequest& request) const
{
  if (!request.ControlIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetControl", "Required field: ControlId, is not set");
    return GetControlOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ControlId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/controls/");
  uri.AddPathSegment(request.GetControlId());
  return GetControlOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetControlOutcomeCallable AuditManagerClient::GetControlCallable(const GetControlRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetControlOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetControl(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClientGetControlAsyncHelper(AuditManagerClient const * const clientThis, const GetControlRequest& request, const GetControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetControl(request), context);
}

void AuditManagerClient::GetControlAsync(const GetControlRequest& request, const GetControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AuditManagerClientGetControlAsyncHelper( this, request, handler, context ); } );
}

GetDelegationsOutcome AuditManagerClient::GetDelegations(const GetDelegationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/delegations");
  return GetDelegationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDelegationsOutcomeCallable AuditManagerClient::GetDelegationsCallable(const GetDelegationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDelegationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDelegations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClientGetDelegationsAsyncHelper(AuditManagerClient const * const clientThis, const GetDelegationsRequest& request, const GetDelegationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDelegations(request), context);
}

void AuditManagerClient::GetDelegationsAsync(const GetDelegationsRequest& request, const GetDelegationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AuditManagerClientGetDelegationsAsyncHelper( this, request, handler, context ); } );
}

GetEvidenceOutcome AuditManagerClient::GetEvidence(const GetEvidenceRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/assessments/");
  uri.AddPathSegment(request.GetAssessmentId());
  uri.AddPathSegments("/controlSets/");
  uri.AddPathSegment(request.GetControlSetId());
  uri.AddPathSegments("/evidenceFolders/");
  uri.AddPathSegment(request.GetEvidenceFolderId());
  uri.AddPathSegments("/evidence/");
  uri.AddPathSegment(request.GetEvidenceId());
  return GetEvidenceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetEvidenceOutcomeCallable AuditManagerClient::GetEvidenceCallable(const GetEvidenceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEvidenceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEvidence(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClientGetEvidenceAsyncHelper(AuditManagerClient const * const clientThis, const GetEvidenceRequest& request, const GetEvidenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetEvidence(request), context);
}

void AuditManagerClient::GetEvidenceAsync(const GetEvidenceRequest& request, const GetEvidenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AuditManagerClientGetEvidenceAsyncHelper( this, request, handler, context ); } );
}

GetEvidenceByEvidenceFolderOutcome AuditManagerClient::GetEvidenceByEvidenceFolder(const GetEvidenceByEvidenceFolderRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/assessments/");
  uri.AddPathSegment(request.GetAssessmentId());
  uri.AddPathSegments("/controlSets/");
  uri.AddPathSegment(request.GetControlSetId());
  uri.AddPathSegments("/evidenceFolders/");
  uri.AddPathSegment(request.GetEvidenceFolderId());
  uri.AddPathSegments("/evidence");
  return GetEvidenceByEvidenceFolderOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetEvidenceByEvidenceFolderOutcomeCallable AuditManagerClient::GetEvidenceByEvidenceFolderCallable(const GetEvidenceByEvidenceFolderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEvidenceByEvidenceFolderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEvidenceByEvidenceFolder(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClientGetEvidenceByEvidenceFolderAsyncHelper(AuditManagerClient const * const clientThis, const GetEvidenceByEvidenceFolderRequest& request, const GetEvidenceByEvidenceFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetEvidenceByEvidenceFolder(request), context);
}

void AuditManagerClient::GetEvidenceByEvidenceFolderAsync(const GetEvidenceByEvidenceFolderRequest& request, const GetEvidenceByEvidenceFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AuditManagerClientGetEvidenceByEvidenceFolderAsyncHelper( this, request, handler, context ); } );
}

GetEvidenceFolderOutcome AuditManagerClient::GetEvidenceFolder(const GetEvidenceFolderRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/assessments/");
  uri.AddPathSegment(request.GetAssessmentId());
  uri.AddPathSegments("/controlSets/");
  uri.AddPathSegment(request.GetControlSetId());
  uri.AddPathSegments("/evidenceFolders/");
  uri.AddPathSegment(request.GetEvidenceFolderId());
  return GetEvidenceFolderOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetEvidenceFolderOutcomeCallable AuditManagerClient::GetEvidenceFolderCallable(const GetEvidenceFolderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEvidenceFolderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEvidenceFolder(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClientGetEvidenceFolderAsyncHelper(AuditManagerClient const * const clientThis, const GetEvidenceFolderRequest& request, const GetEvidenceFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetEvidenceFolder(request), context);
}

void AuditManagerClient::GetEvidenceFolderAsync(const GetEvidenceFolderRequest& request, const GetEvidenceFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AuditManagerClientGetEvidenceFolderAsyncHelper( this, request, handler, context ); } );
}

GetEvidenceFoldersByAssessmentOutcome AuditManagerClient::GetEvidenceFoldersByAssessment(const GetEvidenceFoldersByAssessmentRequest& request) const
{
  if (!request.AssessmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetEvidenceFoldersByAssessment", "Required field: AssessmentId, is not set");
    return GetEvidenceFoldersByAssessmentOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/assessments/");
  uri.AddPathSegment(request.GetAssessmentId());
  uri.AddPathSegments("/evidenceFolders");
  return GetEvidenceFoldersByAssessmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetEvidenceFoldersByAssessmentOutcomeCallable AuditManagerClient::GetEvidenceFoldersByAssessmentCallable(const GetEvidenceFoldersByAssessmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEvidenceFoldersByAssessmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEvidenceFoldersByAssessment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClientGetEvidenceFoldersByAssessmentAsyncHelper(AuditManagerClient const * const clientThis, const GetEvidenceFoldersByAssessmentRequest& request, const GetEvidenceFoldersByAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetEvidenceFoldersByAssessment(request), context);
}

void AuditManagerClient::GetEvidenceFoldersByAssessmentAsync(const GetEvidenceFoldersByAssessmentRequest& request, const GetEvidenceFoldersByAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AuditManagerClientGetEvidenceFoldersByAssessmentAsyncHelper( this, request, handler, context ); } );
}

GetEvidenceFoldersByAssessmentControlOutcome AuditManagerClient::GetEvidenceFoldersByAssessmentControl(const GetEvidenceFoldersByAssessmentControlRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/assessments/");
  uri.AddPathSegment(request.GetAssessmentId());
  uri.AddPathSegments("/evidenceFolders-by-assessment-control/");
  uri.AddPathSegment(request.GetControlSetId());
  uri.AddPathSegment(request.GetControlId());
  return GetEvidenceFoldersByAssessmentControlOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetEvidenceFoldersByAssessmentControlOutcomeCallable AuditManagerClient::GetEvidenceFoldersByAssessmentControlCallable(const GetEvidenceFoldersByAssessmentControlRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEvidenceFoldersByAssessmentControlOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEvidenceFoldersByAssessmentControl(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClientGetEvidenceFoldersByAssessmentControlAsyncHelper(AuditManagerClient const * const clientThis, const GetEvidenceFoldersByAssessmentControlRequest& request, const GetEvidenceFoldersByAssessmentControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetEvidenceFoldersByAssessmentControl(request), context);
}

void AuditManagerClient::GetEvidenceFoldersByAssessmentControlAsync(const GetEvidenceFoldersByAssessmentControlRequest& request, const GetEvidenceFoldersByAssessmentControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AuditManagerClientGetEvidenceFoldersByAssessmentControlAsyncHelper( this, request, handler, context ); } );
}

GetInsightsOutcome AuditManagerClient::GetInsights(const GetInsightsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/insights");
  return GetInsightsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetInsightsOutcomeCallable AuditManagerClient::GetInsightsCallable(const GetInsightsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetInsightsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetInsights(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClientGetInsightsAsyncHelper(AuditManagerClient const * const clientThis, const GetInsightsRequest& request, const GetInsightsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetInsights(request), context);
}

void AuditManagerClient::GetInsightsAsync(const GetInsightsRequest& request, const GetInsightsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AuditManagerClientGetInsightsAsyncHelper( this, request, handler, context ); } );
}

GetInsightsByAssessmentOutcome AuditManagerClient::GetInsightsByAssessment(const GetInsightsByAssessmentRequest& request) const
{
  if (!request.AssessmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetInsightsByAssessment", "Required field: AssessmentId, is not set");
    return GetInsightsByAssessmentOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/insights/assessments/");
  uri.AddPathSegment(request.GetAssessmentId());
  return GetInsightsByAssessmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetInsightsByAssessmentOutcomeCallable AuditManagerClient::GetInsightsByAssessmentCallable(const GetInsightsByAssessmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetInsightsByAssessmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetInsightsByAssessment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClientGetInsightsByAssessmentAsyncHelper(AuditManagerClient const * const clientThis, const GetInsightsByAssessmentRequest& request, const GetInsightsByAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetInsightsByAssessment(request), context);
}

void AuditManagerClient::GetInsightsByAssessmentAsync(const GetInsightsByAssessmentRequest& request, const GetInsightsByAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AuditManagerClientGetInsightsByAssessmentAsyncHelper( this, request, handler, context ); } );
}

GetOrganizationAdminAccountOutcome AuditManagerClient::GetOrganizationAdminAccount(const GetOrganizationAdminAccountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/account/organizationAdminAccount");
  return GetOrganizationAdminAccountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetOrganizationAdminAccountOutcomeCallable AuditManagerClient::GetOrganizationAdminAccountCallable(const GetOrganizationAdminAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetOrganizationAdminAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetOrganizationAdminAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClientGetOrganizationAdminAccountAsyncHelper(AuditManagerClient const * const clientThis, const GetOrganizationAdminAccountRequest& request, const GetOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetOrganizationAdminAccount(request), context);
}

void AuditManagerClient::GetOrganizationAdminAccountAsync(const GetOrganizationAdminAccountRequest& request, const GetOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AuditManagerClientGetOrganizationAdminAccountAsyncHelper( this, request, handler, context ); } );
}

GetServicesInScopeOutcome AuditManagerClient::GetServicesInScope(const GetServicesInScopeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/services");
  return GetServicesInScopeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetServicesInScopeOutcomeCallable AuditManagerClient::GetServicesInScopeCallable(const GetServicesInScopeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetServicesInScopeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetServicesInScope(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClientGetServicesInScopeAsyncHelper(AuditManagerClient const * const clientThis, const GetServicesInScopeRequest& request, const GetServicesInScopeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetServicesInScope(request), context);
}

void AuditManagerClient::GetServicesInScopeAsync(const GetServicesInScopeRequest& request, const GetServicesInScopeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AuditManagerClientGetServicesInScopeAsyncHelper( this, request, handler, context ); } );
}

GetSettingsOutcome AuditManagerClient::GetSettings(const GetSettingsRequest& request) const
{
  if (!request.AttributeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSettings", "Required field: Attribute, is not set");
    return GetSettingsOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Attribute]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/settings/");
  uri.AddPathSegment(SettingAttributeMapper::GetNameForSettingAttribute(request.GetAttribute()));
  return GetSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSettingsOutcomeCallable AuditManagerClient::GetSettingsCallable(const GetSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClientGetSettingsAsyncHelper(AuditManagerClient const * const clientThis, const GetSettingsRequest& request, const GetSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetSettings(request), context);
}

void AuditManagerClient::GetSettingsAsync(const GetSettingsRequest& request, const GetSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AuditManagerClientGetSettingsAsyncHelper( this, request, handler, context ); } );
}

ListAssessmentControlInsightsByControlDomainOutcome AuditManagerClient::ListAssessmentControlInsightsByControlDomain(const ListAssessmentControlInsightsByControlDomainRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/insights/controls-by-assessment");
  return ListAssessmentControlInsightsByControlDomainOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAssessmentControlInsightsByControlDomainOutcomeCallable AuditManagerClient::ListAssessmentControlInsightsByControlDomainCallable(const ListAssessmentControlInsightsByControlDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAssessmentControlInsightsByControlDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAssessmentControlInsightsByControlDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClientListAssessmentControlInsightsByControlDomainAsyncHelper(AuditManagerClient const * const clientThis, const ListAssessmentControlInsightsByControlDomainRequest& request, const ListAssessmentControlInsightsByControlDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAssessmentControlInsightsByControlDomain(request), context);
}

void AuditManagerClient::ListAssessmentControlInsightsByControlDomainAsync(const ListAssessmentControlInsightsByControlDomainRequest& request, const ListAssessmentControlInsightsByControlDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AuditManagerClientListAssessmentControlInsightsByControlDomainAsyncHelper( this, request, handler, context ); } );
}

ListAssessmentFrameworkShareRequestsOutcome AuditManagerClient::ListAssessmentFrameworkShareRequests(const ListAssessmentFrameworkShareRequestsRequest& request) const
{
  if (!request.RequestTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAssessmentFrameworkShareRequests", "Required field: RequestType, is not set");
    return ListAssessmentFrameworkShareRequestsOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RequestType]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/assessmentFrameworkShareRequests");
  return ListAssessmentFrameworkShareRequestsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAssessmentFrameworkShareRequestsOutcomeCallable AuditManagerClient::ListAssessmentFrameworkShareRequestsCallable(const ListAssessmentFrameworkShareRequestsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAssessmentFrameworkShareRequestsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAssessmentFrameworkShareRequests(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClientListAssessmentFrameworkShareRequestsAsyncHelper(AuditManagerClient const * const clientThis, const ListAssessmentFrameworkShareRequestsRequest& request, const ListAssessmentFrameworkShareRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAssessmentFrameworkShareRequests(request), context);
}

void AuditManagerClient::ListAssessmentFrameworkShareRequestsAsync(const ListAssessmentFrameworkShareRequestsRequest& request, const ListAssessmentFrameworkShareRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AuditManagerClientListAssessmentFrameworkShareRequestsAsyncHelper( this, request, handler, context ); } );
}

ListAssessmentFrameworksOutcome AuditManagerClient::ListAssessmentFrameworks(const ListAssessmentFrameworksRequest& request) const
{
  if (!request.FrameworkTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAssessmentFrameworks", "Required field: FrameworkType, is not set");
    return ListAssessmentFrameworksOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FrameworkType]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/assessmentFrameworks");
  return ListAssessmentFrameworksOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAssessmentFrameworksOutcomeCallable AuditManagerClient::ListAssessmentFrameworksCallable(const ListAssessmentFrameworksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAssessmentFrameworksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAssessmentFrameworks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClientListAssessmentFrameworksAsyncHelper(AuditManagerClient const * const clientThis, const ListAssessmentFrameworksRequest& request, const ListAssessmentFrameworksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAssessmentFrameworks(request), context);
}

void AuditManagerClient::ListAssessmentFrameworksAsync(const ListAssessmentFrameworksRequest& request, const ListAssessmentFrameworksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AuditManagerClientListAssessmentFrameworksAsyncHelper( this, request, handler, context ); } );
}

ListAssessmentReportsOutcome AuditManagerClient::ListAssessmentReports(const ListAssessmentReportsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/assessmentReports");
  return ListAssessmentReportsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAssessmentReportsOutcomeCallable AuditManagerClient::ListAssessmentReportsCallable(const ListAssessmentReportsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAssessmentReportsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAssessmentReports(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClientListAssessmentReportsAsyncHelper(AuditManagerClient const * const clientThis, const ListAssessmentReportsRequest& request, const ListAssessmentReportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAssessmentReports(request), context);
}

void AuditManagerClient::ListAssessmentReportsAsync(const ListAssessmentReportsRequest& request, const ListAssessmentReportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AuditManagerClientListAssessmentReportsAsyncHelper( this, request, handler, context ); } );
}

ListAssessmentsOutcome AuditManagerClient::ListAssessments(const ListAssessmentsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/assessments");
  return ListAssessmentsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAssessmentsOutcomeCallable AuditManagerClient::ListAssessmentsCallable(const ListAssessmentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAssessmentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAssessments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClientListAssessmentsAsyncHelper(AuditManagerClient const * const clientThis, const ListAssessmentsRequest& request, const ListAssessmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAssessments(request), context);
}

void AuditManagerClient::ListAssessmentsAsync(const ListAssessmentsRequest& request, const ListAssessmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AuditManagerClientListAssessmentsAsyncHelper( this, request, handler, context ); } );
}

ListControlDomainInsightsOutcome AuditManagerClient::ListControlDomainInsights(const ListControlDomainInsightsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/insights/control-domains");
  return ListControlDomainInsightsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListControlDomainInsightsOutcomeCallable AuditManagerClient::ListControlDomainInsightsCallable(const ListControlDomainInsightsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListControlDomainInsightsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListControlDomainInsights(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClientListControlDomainInsightsAsyncHelper(AuditManagerClient const * const clientThis, const ListControlDomainInsightsRequest& request, const ListControlDomainInsightsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListControlDomainInsights(request), context);
}

void AuditManagerClient::ListControlDomainInsightsAsync(const ListControlDomainInsightsRequest& request, const ListControlDomainInsightsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AuditManagerClientListControlDomainInsightsAsyncHelper( this, request, handler, context ); } );
}

ListControlDomainInsightsByAssessmentOutcome AuditManagerClient::ListControlDomainInsightsByAssessment(const ListControlDomainInsightsByAssessmentRequest& request) const
{
  if (!request.AssessmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListControlDomainInsightsByAssessment", "Required field: AssessmentId, is not set");
    return ListControlDomainInsightsByAssessmentOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/insights/control-domains-by-assessment");
  return ListControlDomainInsightsByAssessmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListControlDomainInsightsByAssessmentOutcomeCallable AuditManagerClient::ListControlDomainInsightsByAssessmentCallable(const ListControlDomainInsightsByAssessmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListControlDomainInsightsByAssessmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListControlDomainInsightsByAssessment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClientListControlDomainInsightsByAssessmentAsyncHelper(AuditManagerClient const * const clientThis, const ListControlDomainInsightsByAssessmentRequest& request, const ListControlDomainInsightsByAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListControlDomainInsightsByAssessment(request), context);
}

void AuditManagerClient::ListControlDomainInsightsByAssessmentAsync(const ListControlDomainInsightsByAssessmentRequest& request, const ListControlDomainInsightsByAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AuditManagerClientListControlDomainInsightsByAssessmentAsyncHelper( this, request, handler, context ); } );
}

ListControlInsightsByControlDomainOutcome AuditManagerClient::ListControlInsightsByControlDomain(const ListControlInsightsByControlDomainRequest& request) const
{
  if (!request.ControlDomainIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListControlInsightsByControlDomain", "Required field: ControlDomainId, is not set");
    return ListControlInsightsByControlDomainOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ControlDomainId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/insights/controls");
  return ListControlInsightsByControlDomainOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListControlInsightsByControlDomainOutcomeCallable AuditManagerClient::ListControlInsightsByControlDomainCallable(const ListControlInsightsByControlDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListControlInsightsByControlDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListControlInsightsByControlDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClientListControlInsightsByControlDomainAsyncHelper(AuditManagerClient const * const clientThis, const ListControlInsightsByControlDomainRequest& request, const ListControlInsightsByControlDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListControlInsightsByControlDomain(request), context);
}

void AuditManagerClient::ListControlInsightsByControlDomainAsync(const ListControlInsightsByControlDomainRequest& request, const ListControlInsightsByControlDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AuditManagerClientListControlInsightsByControlDomainAsyncHelper( this, request, handler, context ); } );
}

ListControlsOutcome AuditManagerClient::ListControls(const ListControlsRequest& request) const
{
  if (!request.ControlTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListControls", "Required field: ControlType, is not set");
    return ListControlsOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ControlType]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/controls");
  return ListControlsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListControlsOutcomeCallable AuditManagerClient::ListControlsCallable(const ListControlsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListControlsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListControls(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClientListControlsAsyncHelper(AuditManagerClient const * const clientThis, const ListControlsRequest& request, const ListControlsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListControls(request), context);
}

void AuditManagerClient::ListControlsAsync(const ListControlsRequest& request, const ListControlsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AuditManagerClientListControlsAsyncHelper( this, request, handler, context ); } );
}

ListKeywordsForDataSourceOutcome AuditManagerClient::ListKeywordsForDataSource(const ListKeywordsForDataSourceRequest& request) const
{
  if (!request.SourceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListKeywordsForDataSource", "Required field: Source, is not set");
    return ListKeywordsForDataSourceOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Source]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/dataSourceKeywords");
  return ListKeywordsForDataSourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListKeywordsForDataSourceOutcomeCallable AuditManagerClient::ListKeywordsForDataSourceCallable(const ListKeywordsForDataSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListKeywordsForDataSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListKeywordsForDataSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClientListKeywordsForDataSourceAsyncHelper(AuditManagerClient const * const clientThis, const ListKeywordsForDataSourceRequest& request, const ListKeywordsForDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListKeywordsForDataSource(request), context);
}

void AuditManagerClient::ListKeywordsForDataSourceAsync(const ListKeywordsForDataSourceRequest& request, const ListKeywordsForDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AuditManagerClientListKeywordsForDataSourceAsyncHelper( this, request, handler, context ); } );
}

ListNotificationsOutcome AuditManagerClient::ListNotifications(const ListNotificationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/notifications");
  return ListNotificationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListNotificationsOutcomeCallable AuditManagerClient::ListNotificationsCallable(const ListNotificationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListNotificationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListNotifications(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClientListNotificationsAsyncHelper(AuditManagerClient const * const clientThis, const ListNotificationsRequest& request, const ListNotificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListNotifications(request), context);
}

void AuditManagerClient::ListNotificationsAsync(const ListNotificationsRequest& request, const ListNotificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AuditManagerClientListNotificationsAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome AuditManagerClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable AuditManagerClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClientListTagsForResourceAsyncHelper(AuditManagerClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void AuditManagerClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AuditManagerClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

RegisterAccountOutcome AuditManagerClient::RegisterAccount(const RegisterAccountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/account/registerAccount");
  return RegisterAccountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterAccountOutcomeCallable AuditManagerClient::RegisterAccountCallable(const RegisterAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClientRegisterAccountAsyncHelper(AuditManagerClient const * const clientThis, const RegisterAccountRequest& request, const RegisterAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RegisterAccount(request), context);
}

void AuditManagerClient::RegisterAccountAsync(const RegisterAccountRequest& request, const RegisterAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AuditManagerClientRegisterAccountAsyncHelper( this, request, handler, context ); } );
}

RegisterOrganizationAdminAccountOutcome AuditManagerClient::RegisterOrganizationAdminAccount(const RegisterOrganizationAdminAccountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/account/registerOrganizationAdminAccount");
  return RegisterOrganizationAdminAccountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterOrganizationAdminAccountOutcomeCallable AuditManagerClient::RegisterOrganizationAdminAccountCallable(const RegisterOrganizationAdminAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterOrganizationAdminAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterOrganizationAdminAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClientRegisterOrganizationAdminAccountAsyncHelper(AuditManagerClient const * const clientThis, const RegisterOrganizationAdminAccountRequest& request, const RegisterOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RegisterOrganizationAdminAccount(request), context);
}

void AuditManagerClient::RegisterOrganizationAdminAccountAsync(const RegisterOrganizationAdminAccountRequest& request, const RegisterOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AuditManagerClientRegisterOrganizationAdminAccountAsyncHelper( this, request, handler, context ); } );
}

StartAssessmentFrameworkShareOutcome AuditManagerClient::StartAssessmentFrameworkShare(const StartAssessmentFrameworkShareRequest& request) const
{
  if (!request.FrameworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartAssessmentFrameworkShare", "Required field: FrameworkId, is not set");
    return StartAssessmentFrameworkShareOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FrameworkId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/assessmentFrameworks/");
  uri.AddPathSegment(request.GetFrameworkId());
  uri.AddPathSegments("/shareRequests");
  return StartAssessmentFrameworkShareOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartAssessmentFrameworkShareOutcomeCallable AuditManagerClient::StartAssessmentFrameworkShareCallable(const StartAssessmentFrameworkShareRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartAssessmentFrameworkShareOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartAssessmentFrameworkShare(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClientStartAssessmentFrameworkShareAsyncHelper(AuditManagerClient const * const clientThis, const StartAssessmentFrameworkShareRequest& request, const StartAssessmentFrameworkShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartAssessmentFrameworkShare(request), context);
}

void AuditManagerClient::StartAssessmentFrameworkShareAsync(const StartAssessmentFrameworkShareRequest& request, const StartAssessmentFrameworkShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AuditManagerClientStartAssessmentFrameworkShareAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome AuditManagerClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable AuditManagerClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClientTagResourceAsyncHelper(AuditManagerClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void AuditManagerClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AuditManagerClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome AuditManagerClient::UntagResource(const UntagResourceRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable AuditManagerClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClientUntagResourceAsyncHelper(AuditManagerClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void AuditManagerClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AuditManagerClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateAssessmentOutcome AuditManagerClient::UpdateAssessment(const UpdateAssessmentRequest& request) const
{
  if (!request.AssessmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAssessment", "Required field: AssessmentId, is not set");
    return UpdateAssessmentOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/assessments/");
  uri.AddPathSegment(request.GetAssessmentId());
  return UpdateAssessmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateAssessmentOutcomeCallable AuditManagerClient::UpdateAssessmentCallable(const UpdateAssessmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAssessmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAssessment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClientUpdateAssessmentAsyncHelper(AuditManagerClient const * const clientThis, const UpdateAssessmentRequest& request, const UpdateAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateAssessment(request), context);
}

void AuditManagerClient::UpdateAssessmentAsync(const UpdateAssessmentRequest& request, const UpdateAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AuditManagerClientUpdateAssessmentAsyncHelper( this, request, handler, context ); } );
}

UpdateAssessmentControlOutcome AuditManagerClient::UpdateAssessmentControl(const UpdateAssessmentControlRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/assessments/");
  uri.AddPathSegment(request.GetAssessmentId());
  uri.AddPathSegments("/controlSets/");
  uri.AddPathSegment(request.GetControlSetId());
  uri.AddPathSegments("/controls/");
  uri.AddPathSegment(request.GetControlId());
  return UpdateAssessmentControlOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateAssessmentControlOutcomeCallable AuditManagerClient::UpdateAssessmentControlCallable(const UpdateAssessmentControlRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAssessmentControlOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAssessmentControl(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClientUpdateAssessmentControlAsyncHelper(AuditManagerClient const * const clientThis, const UpdateAssessmentControlRequest& request, const UpdateAssessmentControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateAssessmentControl(request), context);
}

void AuditManagerClient::UpdateAssessmentControlAsync(const UpdateAssessmentControlRequest& request, const UpdateAssessmentControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AuditManagerClientUpdateAssessmentControlAsyncHelper( this, request, handler, context ); } );
}

UpdateAssessmentControlSetStatusOutcome AuditManagerClient::UpdateAssessmentControlSetStatus(const UpdateAssessmentControlSetStatusRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/assessments/");
  uri.AddPathSegment(request.GetAssessmentId());
  uri.AddPathSegments("/controlSets/");
  uri.AddPathSegment(request.GetControlSetId());
  uri.AddPathSegments("/status");
  return UpdateAssessmentControlSetStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateAssessmentControlSetStatusOutcomeCallable AuditManagerClient::UpdateAssessmentControlSetStatusCallable(const UpdateAssessmentControlSetStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAssessmentControlSetStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAssessmentControlSetStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClientUpdateAssessmentControlSetStatusAsyncHelper(AuditManagerClient const * const clientThis, const UpdateAssessmentControlSetStatusRequest& request, const UpdateAssessmentControlSetStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateAssessmentControlSetStatus(request), context);
}

void AuditManagerClient::UpdateAssessmentControlSetStatusAsync(const UpdateAssessmentControlSetStatusRequest& request, const UpdateAssessmentControlSetStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AuditManagerClientUpdateAssessmentControlSetStatusAsyncHelper( this, request, handler, context ); } );
}

UpdateAssessmentFrameworkOutcome AuditManagerClient::UpdateAssessmentFramework(const UpdateAssessmentFrameworkRequest& request) const
{
  if (!request.FrameworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAssessmentFramework", "Required field: FrameworkId, is not set");
    return UpdateAssessmentFrameworkOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FrameworkId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/assessmentFrameworks/");
  uri.AddPathSegment(request.GetFrameworkId());
  return UpdateAssessmentFrameworkOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateAssessmentFrameworkOutcomeCallable AuditManagerClient::UpdateAssessmentFrameworkCallable(const UpdateAssessmentFrameworkRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAssessmentFrameworkOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAssessmentFramework(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClientUpdateAssessmentFrameworkAsyncHelper(AuditManagerClient const * const clientThis, const UpdateAssessmentFrameworkRequest& request, const UpdateAssessmentFrameworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateAssessmentFramework(request), context);
}

void AuditManagerClient::UpdateAssessmentFrameworkAsync(const UpdateAssessmentFrameworkRequest& request, const UpdateAssessmentFrameworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AuditManagerClientUpdateAssessmentFrameworkAsyncHelper( this, request, handler, context ); } );
}

UpdateAssessmentFrameworkShareOutcome AuditManagerClient::UpdateAssessmentFrameworkShare(const UpdateAssessmentFrameworkShareRequest& request) const
{
  if (!request.RequestIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAssessmentFrameworkShare", "Required field: RequestId, is not set");
    return UpdateAssessmentFrameworkShareOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RequestId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/assessmentFrameworkShareRequests/");
  uri.AddPathSegment(request.GetRequestId());
  return UpdateAssessmentFrameworkShareOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateAssessmentFrameworkShareOutcomeCallable AuditManagerClient::UpdateAssessmentFrameworkShareCallable(const UpdateAssessmentFrameworkShareRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAssessmentFrameworkShareOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAssessmentFrameworkShare(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClientUpdateAssessmentFrameworkShareAsyncHelper(AuditManagerClient const * const clientThis, const UpdateAssessmentFrameworkShareRequest& request, const UpdateAssessmentFrameworkShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateAssessmentFrameworkShare(request), context);
}

void AuditManagerClient::UpdateAssessmentFrameworkShareAsync(const UpdateAssessmentFrameworkShareRequest& request, const UpdateAssessmentFrameworkShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AuditManagerClientUpdateAssessmentFrameworkShareAsyncHelper( this, request, handler, context ); } );
}

UpdateAssessmentStatusOutcome AuditManagerClient::UpdateAssessmentStatus(const UpdateAssessmentStatusRequest& request) const
{
  if (!request.AssessmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAssessmentStatus", "Required field: AssessmentId, is not set");
    return UpdateAssessmentStatusOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/assessments/");
  uri.AddPathSegment(request.GetAssessmentId());
  uri.AddPathSegments("/status");
  return UpdateAssessmentStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateAssessmentStatusOutcomeCallable AuditManagerClient::UpdateAssessmentStatusCallable(const UpdateAssessmentStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAssessmentStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAssessmentStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClientUpdateAssessmentStatusAsyncHelper(AuditManagerClient const * const clientThis, const UpdateAssessmentStatusRequest& request, const UpdateAssessmentStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateAssessmentStatus(request), context);
}

void AuditManagerClient::UpdateAssessmentStatusAsync(const UpdateAssessmentStatusRequest& request, const UpdateAssessmentStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AuditManagerClientUpdateAssessmentStatusAsyncHelper( this, request, handler, context ); } );
}

UpdateControlOutcome AuditManagerClient::UpdateControl(const UpdateControlRequest& request) const
{
  if (!request.ControlIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateControl", "Required field: ControlId, is not set");
    return UpdateControlOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ControlId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/controls/");
  uri.AddPathSegment(request.GetControlId());
  return UpdateControlOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateControlOutcomeCallable AuditManagerClient::UpdateControlCallable(const UpdateControlRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateControlOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateControl(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClientUpdateControlAsyncHelper(AuditManagerClient const * const clientThis, const UpdateControlRequest& request, const UpdateControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateControl(request), context);
}

void AuditManagerClient::UpdateControlAsync(const UpdateControlRequest& request, const UpdateControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AuditManagerClientUpdateControlAsyncHelper( this, request, handler, context ); } );
}

UpdateSettingsOutcome AuditManagerClient::UpdateSettings(const UpdateSettingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/settings");
  return UpdateSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateSettingsOutcomeCallable AuditManagerClient::UpdateSettingsCallable(const UpdateSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClientUpdateSettingsAsyncHelper(AuditManagerClient const * const clientThis, const UpdateSettingsRequest& request, const UpdateSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateSettings(request), context);
}

void AuditManagerClient::UpdateSettingsAsync(const UpdateSettingsRequest& request, const UpdateSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AuditManagerClientUpdateSettingsAsyncHelper( this, request, handler, context ); } );
}

ValidateAssessmentReportIntegrityOutcome AuditManagerClient::ValidateAssessmentReportIntegrity(const ValidateAssessmentReportIntegrityRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/assessmentReports/integrity");
  return ValidateAssessmentReportIntegrityOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ValidateAssessmentReportIntegrityOutcomeCallable AuditManagerClient::ValidateAssessmentReportIntegrityCallable(const ValidateAssessmentReportIntegrityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ValidateAssessmentReportIntegrityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ValidateAssessmentReportIntegrity(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AuditManagerClientValidateAssessmentReportIntegrityAsyncHelper(AuditManagerClient const * const clientThis, const ValidateAssessmentReportIntegrityRequest& request, const ValidateAssessmentReportIntegrityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ValidateAssessmentReportIntegrity(request), context);
}

void AuditManagerClient::ValidateAssessmentReportIntegrityAsync(const ValidateAssessmentReportIntegrityRequest& request, const ValidateAssessmentReportIntegrityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AuditManagerClientValidateAssessmentReportIntegrityAsyncHelper( this, request, handler, context ); } );
}

