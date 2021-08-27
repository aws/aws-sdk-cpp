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
#include <aws/auditmanager/model/GetOrganizationAdminAccountRequest.h>
#include <aws/auditmanager/model/GetServicesInScopeRequest.h>
#include <aws/auditmanager/model/GetSettingsRequest.h>
#include <aws/auditmanager/model/ListAssessmentFrameworksRequest.h>
#include <aws/auditmanager/model/ListAssessmentReportsRequest.h>
#include <aws/auditmanager/model/ListAssessmentsRequest.h>
#include <aws/auditmanager/model/ListControlsRequest.h>
#include <aws/auditmanager/model/ListKeywordsForDataSourceRequest.h>
#include <aws/auditmanager/model/ListNotificationsRequest.h>
#include <aws/auditmanager/model/ListTagsForResourceRequest.h>
#include <aws/auditmanager/model/RegisterAccountRequest.h>
#include <aws/auditmanager/model/RegisterOrganizationAdminAccountRequest.h>
#include <aws/auditmanager/model/TagResourceRequest.h>
#include <aws/auditmanager/model/UntagResourceRequest.h>
#include <aws/auditmanager/model/UpdateAssessmentRequest.h>
#include <aws/auditmanager/model/UpdateAssessmentControlRequest.h>
#include <aws/auditmanager/model/UpdateAssessmentControlSetStatusRequest.h>
#include <aws/auditmanager/model/UpdateAssessmentFrameworkRequest.h>
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
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<AuditManagerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AuditManagerClient::AuditManagerClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<AuditManagerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AuditManagerClient::AuditManagerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<AuditManagerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AuditManagerClient::~AuditManagerClient()
{
}

void AuditManagerClient::init(const ClientConfiguration& config)
{
  SetServiceClientName("AuditManager");
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
  Aws::StringStream ss;
  ss << "/assessments/";
  ss << request.GetAssessmentId();
  ss << "/associateToAssessmentReport";
  uri.SetPath(uri.GetPath() + ss.str());
  return AssociateAssessmentReportEvidenceFolderOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->AssociateAssessmentReportEvidenceFolderAsyncHelper( request, handler, context ); } );
}

void AuditManagerClient::AssociateAssessmentReportEvidenceFolderAsyncHelper(const AssociateAssessmentReportEvidenceFolderRequest& request, const AssociateAssessmentReportEvidenceFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateAssessmentReportEvidenceFolder(request), context);
}

BatchAssociateAssessmentReportEvidenceOutcome AuditManagerClient::BatchAssociateAssessmentReportEvidence(const BatchAssociateAssessmentReportEvidenceRequest& request) const
{
  if (!request.AssessmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchAssociateAssessmentReportEvidence", "Required field: AssessmentId, is not set");
    return BatchAssociateAssessmentReportEvidenceOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/assessments/";
  ss << request.GetAssessmentId();
  ss << "/batchAssociateToAssessmentReport";
  uri.SetPath(uri.GetPath() + ss.str());
  return BatchAssociateAssessmentReportEvidenceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->BatchAssociateAssessmentReportEvidenceAsyncHelper( request, handler, context ); } );
}

void AuditManagerClient::BatchAssociateAssessmentReportEvidenceAsyncHelper(const BatchAssociateAssessmentReportEvidenceRequest& request, const BatchAssociateAssessmentReportEvidenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchAssociateAssessmentReportEvidence(request), context);
}

BatchCreateDelegationByAssessmentOutcome AuditManagerClient::BatchCreateDelegationByAssessment(const BatchCreateDelegationByAssessmentRequest& request) const
{
  if (!request.AssessmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchCreateDelegationByAssessment", "Required field: AssessmentId, is not set");
    return BatchCreateDelegationByAssessmentOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/assessments/";
  ss << request.GetAssessmentId();
  ss << "/delegations";
  uri.SetPath(uri.GetPath() + ss.str());
  return BatchCreateDelegationByAssessmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->BatchCreateDelegationByAssessmentAsyncHelper( request, handler, context ); } );
}

void AuditManagerClient::BatchCreateDelegationByAssessmentAsyncHelper(const BatchCreateDelegationByAssessmentRequest& request, const BatchCreateDelegationByAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchCreateDelegationByAssessment(request), context);
}

BatchDeleteDelegationByAssessmentOutcome AuditManagerClient::BatchDeleteDelegationByAssessment(const BatchDeleteDelegationByAssessmentRequest& request) const
{
  if (!request.AssessmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchDeleteDelegationByAssessment", "Required field: AssessmentId, is not set");
    return BatchDeleteDelegationByAssessmentOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/assessments/";
  ss << request.GetAssessmentId();
  ss << "/delegations";
  uri.SetPath(uri.GetPath() + ss.str());
  return BatchDeleteDelegationByAssessmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->BatchDeleteDelegationByAssessmentAsyncHelper( request, handler, context ); } );
}

void AuditManagerClient::BatchDeleteDelegationByAssessmentAsyncHelper(const BatchDeleteDelegationByAssessmentRequest& request, const BatchDeleteDelegationByAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchDeleteDelegationByAssessment(request), context);
}

BatchDisassociateAssessmentReportEvidenceOutcome AuditManagerClient::BatchDisassociateAssessmentReportEvidence(const BatchDisassociateAssessmentReportEvidenceRequest& request) const
{
  if (!request.AssessmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchDisassociateAssessmentReportEvidence", "Required field: AssessmentId, is not set");
    return BatchDisassociateAssessmentReportEvidenceOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/assessments/";
  ss << request.GetAssessmentId();
  ss << "/batchDisassociateFromAssessmentReport";
  uri.SetPath(uri.GetPath() + ss.str());
  return BatchDisassociateAssessmentReportEvidenceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->BatchDisassociateAssessmentReportEvidenceAsyncHelper( request, handler, context ); } );
}

void AuditManagerClient::BatchDisassociateAssessmentReportEvidenceAsyncHelper(const BatchDisassociateAssessmentReportEvidenceRequest& request, const BatchDisassociateAssessmentReportEvidenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchDisassociateAssessmentReportEvidence(request), context);
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
  Aws::StringStream ss;
  ss << "/assessments/";
  ss << request.GetAssessmentId();
  ss << "/controlSets/";
  ss << request.GetControlSetId();
  ss << "/controls/";
  ss << request.GetControlId();
  ss << "/evidence";
  uri.SetPath(uri.GetPath() + ss.str());
  return BatchImportEvidenceToAssessmentControlOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->BatchImportEvidenceToAssessmentControlAsyncHelper( request, handler, context ); } );
}

void AuditManagerClient::BatchImportEvidenceToAssessmentControlAsyncHelper(const BatchImportEvidenceToAssessmentControlRequest& request, const BatchImportEvidenceToAssessmentControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchImportEvidenceToAssessmentControl(request), context);
}

CreateAssessmentOutcome AuditManagerClient::CreateAssessment(const CreateAssessmentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/assessments";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateAssessmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateAssessmentAsyncHelper( request, handler, context ); } );
}

void AuditManagerClient::CreateAssessmentAsyncHelper(const CreateAssessmentRequest& request, const CreateAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateAssessment(request), context);
}

CreateAssessmentFrameworkOutcome AuditManagerClient::CreateAssessmentFramework(const CreateAssessmentFrameworkRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/assessmentFrameworks";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateAssessmentFrameworkOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateAssessmentFrameworkAsyncHelper( request, handler, context ); } );
}

void AuditManagerClient::CreateAssessmentFrameworkAsyncHelper(const CreateAssessmentFrameworkRequest& request, const CreateAssessmentFrameworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateAssessmentFramework(request), context);
}

CreateAssessmentReportOutcome AuditManagerClient::CreateAssessmentReport(const CreateAssessmentReportRequest& request) const
{
  if (!request.AssessmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateAssessmentReport", "Required field: AssessmentId, is not set");
    return CreateAssessmentReportOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/assessments/";
  ss << request.GetAssessmentId();
  ss << "/reports";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateAssessmentReportOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateAssessmentReportAsyncHelper( request, handler, context ); } );
}

void AuditManagerClient::CreateAssessmentReportAsyncHelper(const CreateAssessmentReportRequest& request, const CreateAssessmentReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateAssessmentReport(request), context);
}

CreateControlOutcome AuditManagerClient::CreateControl(const CreateControlRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/controls";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateControlOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateControlAsyncHelper( request, handler, context ); } );
}

void AuditManagerClient::CreateControlAsyncHelper(const CreateControlRequest& request, const CreateControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateControl(request), context);
}

DeleteAssessmentOutcome AuditManagerClient::DeleteAssessment(const DeleteAssessmentRequest& request) const
{
  if (!request.AssessmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAssessment", "Required field: AssessmentId, is not set");
    return DeleteAssessmentOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/assessments/";
  ss << request.GetAssessmentId();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteAssessmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteAssessmentAsyncHelper( request, handler, context ); } );
}

void AuditManagerClient::DeleteAssessmentAsyncHelper(const DeleteAssessmentRequest& request, const DeleteAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteAssessment(request), context);
}

DeleteAssessmentFrameworkOutcome AuditManagerClient::DeleteAssessmentFramework(const DeleteAssessmentFrameworkRequest& request) const
{
  if (!request.FrameworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAssessmentFramework", "Required field: FrameworkId, is not set");
    return DeleteAssessmentFrameworkOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FrameworkId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/assessmentFrameworks/";
  ss << request.GetFrameworkId();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteAssessmentFrameworkOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteAssessmentFrameworkAsyncHelper( request, handler, context ); } );
}

void AuditManagerClient::DeleteAssessmentFrameworkAsyncHelper(const DeleteAssessmentFrameworkRequest& request, const DeleteAssessmentFrameworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteAssessmentFramework(request), context);
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
  Aws::StringStream ss;
  ss << "/assessments/";
  ss << request.GetAssessmentId();
  ss << "/reports/";
  ss << request.GetAssessmentReportId();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteAssessmentReportOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteAssessmentReportAsyncHelper( request, handler, context ); } );
}

void AuditManagerClient::DeleteAssessmentReportAsyncHelper(const DeleteAssessmentReportRequest& request, const DeleteAssessmentReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteAssessmentReport(request), context);
}

DeleteControlOutcome AuditManagerClient::DeleteControl(const DeleteControlRequest& request) const
{
  if (!request.ControlIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteControl", "Required field: ControlId, is not set");
    return DeleteControlOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ControlId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/controls/";
  ss << request.GetControlId();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteControlOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteControlAsyncHelper( request, handler, context ); } );
}

void AuditManagerClient::DeleteControlAsyncHelper(const DeleteControlRequest& request, const DeleteControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteControl(request), context);
}

DeregisterAccountOutcome AuditManagerClient::DeregisterAccount(const DeregisterAccountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/account/deregisterAccount";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeregisterAccountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DeregisterAccountAsyncHelper( request, handler, context ); } );
}

void AuditManagerClient::DeregisterAccountAsyncHelper(const DeregisterAccountRequest& request, const DeregisterAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeregisterAccount(request), context);
}

DeregisterOrganizationAdminAccountOutcome AuditManagerClient::DeregisterOrganizationAdminAccount(const DeregisterOrganizationAdminAccountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/account/deregisterOrganizationAdminAccount";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeregisterOrganizationAdminAccountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DeregisterOrganizationAdminAccountAsyncHelper( request, handler, context ); } );
}

void AuditManagerClient::DeregisterOrganizationAdminAccountAsyncHelper(const DeregisterOrganizationAdminAccountRequest& request, const DeregisterOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeregisterOrganizationAdminAccount(request), context);
}

DisassociateAssessmentReportEvidenceFolderOutcome AuditManagerClient::DisassociateAssessmentReportEvidenceFolder(const DisassociateAssessmentReportEvidenceFolderRequest& request) const
{
  if (!request.AssessmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateAssessmentReportEvidenceFolder", "Required field: AssessmentId, is not set");
    return DisassociateAssessmentReportEvidenceFolderOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/assessments/";
  ss << request.GetAssessmentId();
  ss << "/disassociateFromAssessmentReport";
  uri.SetPath(uri.GetPath() + ss.str());
  return DisassociateAssessmentReportEvidenceFolderOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateAssessmentReportEvidenceFolderAsyncHelper( request, handler, context ); } );
}

void AuditManagerClient::DisassociateAssessmentReportEvidenceFolderAsyncHelper(const DisassociateAssessmentReportEvidenceFolderRequest& request, const DisassociateAssessmentReportEvidenceFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateAssessmentReportEvidenceFolder(request), context);
}

GetAccountStatusOutcome AuditManagerClient::GetAccountStatus(const GetAccountStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/account/status";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetAccountStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->GetAccountStatusAsyncHelper( request, handler, context ); } );
}

void AuditManagerClient::GetAccountStatusAsyncHelper(const GetAccountStatusRequest& request, const GetAccountStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAccountStatus(request), context);
}

GetAssessmentOutcome AuditManagerClient::GetAssessment(const GetAssessmentRequest& request) const
{
  if (!request.AssessmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAssessment", "Required field: AssessmentId, is not set");
    return GetAssessmentOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/assessments/";
  ss << request.GetAssessmentId();
  uri.SetPath(uri.GetPath() + ss.str());
  return GetAssessmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->GetAssessmentAsyncHelper( request, handler, context ); } );
}

void AuditManagerClient::GetAssessmentAsyncHelper(const GetAssessmentRequest& request, const GetAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAssessment(request), context);
}

GetAssessmentFrameworkOutcome AuditManagerClient::GetAssessmentFramework(const GetAssessmentFrameworkRequest& request) const
{
  if (!request.FrameworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAssessmentFramework", "Required field: FrameworkId, is not set");
    return GetAssessmentFrameworkOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FrameworkId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/assessmentFrameworks/";
  ss << request.GetFrameworkId();
  uri.SetPath(uri.GetPath() + ss.str());
  return GetAssessmentFrameworkOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->GetAssessmentFrameworkAsyncHelper( request, handler, context ); } );
}

void AuditManagerClient::GetAssessmentFrameworkAsyncHelper(const GetAssessmentFrameworkRequest& request, const GetAssessmentFrameworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAssessmentFramework(request), context);
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
  Aws::StringStream ss;
  ss << "/assessments/";
  ss << request.GetAssessmentId();
  ss << "/reports/";
  ss << request.GetAssessmentReportId();
  ss << "/url";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetAssessmentReportUrlOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->GetAssessmentReportUrlAsyncHelper( request, handler, context ); } );
}

void AuditManagerClient::GetAssessmentReportUrlAsyncHelper(const GetAssessmentReportUrlRequest& request, const GetAssessmentReportUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAssessmentReportUrl(request), context);
}

GetChangeLogsOutcome AuditManagerClient::GetChangeLogs(const GetChangeLogsRequest& request) const
{
  if (!request.AssessmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetChangeLogs", "Required field: AssessmentId, is not set");
    return GetChangeLogsOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/assessments/";
  ss << request.GetAssessmentId();
  ss << "/changelogs";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetChangeLogsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->GetChangeLogsAsyncHelper( request, handler, context ); } );
}

void AuditManagerClient::GetChangeLogsAsyncHelper(const GetChangeLogsRequest& request, const GetChangeLogsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetChangeLogs(request), context);
}

GetControlOutcome AuditManagerClient::GetControl(const GetControlRequest& request) const
{
  if (!request.ControlIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetControl", "Required field: ControlId, is not set");
    return GetControlOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ControlId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/controls/";
  ss << request.GetControlId();
  uri.SetPath(uri.GetPath() + ss.str());
  return GetControlOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->GetControlAsyncHelper( request, handler, context ); } );
}

void AuditManagerClient::GetControlAsyncHelper(const GetControlRequest& request, const GetControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetControl(request), context);
}

GetDelegationsOutcome AuditManagerClient::GetDelegations(const GetDelegationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/delegations";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetDelegationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->GetDelegationsAsyncHelper( request, handler, context ); } );
}

void AuditManagerClient::GetDelegationsAsyncHelper(const GetDelegationsRequest& request, const GetDelegationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDelegations(request), context);
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
  Aws::StringStream ss;
  ss << "/assessments/";
  ss << request.GetAssessmentId();
  ss << "/controlSets/";
  ss << request.GetControlSetId();
  ss << "/evidenceFolders/";
  ss << request.GetEvidenceFolderId();
  ss << "/evidence/";
  ss << request.GetEvidenceId();
  uri.SetPath(uri.GetPath() + ss.str());
  return GetEvidenceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->GetEvidenceAsyncHelper( request, handler, context ); } );
}

void AuditManagerClient::GetEvidenceAsyncHelper(const GetEvidenceRequest& request, const GetEvidenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetEvidence(request), context);
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
  Aws::StringStream ss;
  ss << "/assessments/";
  ss << request.GetAssessmentId();
  ss << "/controlSets/";
  ss << request.GetControlSetId();
  ss << "/evidenceFolders/";
  ss << request.GetEvidenceFolderId();
  ss << "/evidence";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetEvidenceByEvidenceFolderOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->GetEvidenceByEvidenceFolderAsyncHelper( request, handler, context ); } );
}

void AuditManagerClient::GetEvidenceByEvidenceFolderAsyncHelper(const GetEvidenceByEvidenceFolderRequest& request, const GetEvidenceByEvidenceFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetEvidenceByEvidenceFolder(request), context);
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
  Aws::StringStream ss;
  ss << "/assessments/";
  ss << request.GetAssessmentId();
  ss << "/controlSets/";
  ss << request.GetControlSetId();
  ss << "/evidenceFolders/";
  ss << request.GetEvidenceFolderId();
  uri.SetPath(uri.GetPath() + ss.str());
  return GetEvidenceFolderOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->GetEvidenceFolderAsyncHelper( request, handler, context ); } );
}

void AuditManagerClient::GetEvidenceFolderAsyncHelper(const GetEvidenceFolderRequest& request, const GetEvidenceFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetEvidenceFolder(request), context);
}

GetEvidenceFoldersByAssessmentOutcome AuditManagerClient::GetEvidenceFoldersByAssessment(const GetEvidenceFoldersByAssessmentRequest& request) const
{
  if (!request.AssessmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetEvidenceFoldersByAssessment", "Required field: AssessmentId, is not set");
    return GetEvidenceFoldersByAssessmentOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/assessments/";
  ss << request.GetAssessmentId();
  ss << "/evidenceFolders";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetEvidenceFoldersByAssessmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->GetEvidenceFoldersByAssessmentAsyncHelper( request, handler, context ); } );
}

void AuditManagerClient::GetEvidenceFoldersByAssessmentAsyncHelper(const GetEvidenceFoldersByAssessmentRequest& request, const GetEvidenceFoldersByAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetEvidenceFoldersByAssessment(request), context);
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
  Aws::StringStream ss;
  ss << "/assessments/";
  ss << request.GetAssessmentId();
  ss << "/evidenceFolders-by-assessment-control/";
  ss << request.GetControlSetId();
  ss << "/";
  ss << request.GetControlId();
  uri.SetPath(uri.GetPath() + ss.str());
  return GetEvidenceFoldersByAssessmentControlOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->GetEvidenceFoldersByAssessmentControlAsyncHelper( request, handler, context ); } );
}

void AuditManagerClient::GetEvidenceFoldersByAssessmentControlAsyncHelper(const GetEvidenceFoldersByAssessmentControlRequest& request, const GetEvidenceFoldersByAssessmentControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetEvidenceFoldersByAssessmentControl(request), context);
}

GetOrganizationAdminAccountOutcome AuditManagerClient::GetOrganizationAdminAccount(const GetOrganizationAdminAccountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/account/organizationAdminAccount";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetOrganizationAdminAccountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->GetOrganizationAdminAccountAsyncHelper( request, handler, context ); } );
}

void AuditManagerClient::GetOrganizationAdminAccountAsyncHelper(const GetOrganizationAdminAccountRequest& request, const GetOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetOrganizationAdminAccount(request), context);
}

GetServicesInScopeOutcome AuditManagerClient::GetServicesInScope(const GetServicesInScopeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/services";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetServicesInScopeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->GetServicesInScopeAsyncHelper( request, handler, context ); } );
}

void AuditManagerClient::GetServicesInScopeAsyncHelper(const GetServicesInScopeRequest& request, const GetServicesInScopeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetServicesInScope(request), context);
}

GetSettingsOutcome AuditManagerClient::GetSettings(const GetSettingsRequest& request) const
{
  if (!request.AttributeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSettings", "Required field: Attribute, is not set");
    return GetSettingsOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Attribute]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/settings/";
  ss << SettingAttributeMapper::GetNameForSettingAttribute(request.GetAttribute());
  uri.SetPath(uri.GetPath() + ss.str());
  return GetSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->GetSettingsAsyncHelper( request, handler, context ); } );
}

void AuditManagerClient::GetSettingsAsyncHelper(const GetSettingsRequest& request, const GetSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSettings(request), context);
}

ListAssessmentFrameworksOutcome AuditManagerClient::ListAssessmentFrameworks(const ListAssessmentFrameworksRequest& request) const
{
  if (!request.FrameworkTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAssessmentFrameworks", "Required field: FrameworkType, is not set");
    return ListAssessmentFrameworksOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FrameworkType]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/assessmentFrameworks";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListAssessmentFrameworksOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->ListAssessmentFrameworksAsyncHelper( request, handler, context ); } );
}

void AuditManagerClient::ListAssessmentFrameworksAsyncHelper(const ListAssessmentFrameworksRequest& request, const ListAssessmentFrameworksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAssessmentFrameworks(request), context);
}

ListAssessmentReportsOutcome AuditManagerClient::ListAssessmentReports(const ListAssessmentReportsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/assessmentReports";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListAssessmentReportsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->ListAssessmentReportsAsyncHelper( request, handler, context ); } );
}

void AuditManagerClient::ListAssessmentReportsAsyncHelper(const ListAssessmentReportsRequest& request, const ListAssessmentReportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAssessmentReports(request), context);
}

ListAssessmentsOutcome AuditManagerClient::ListAssessments(const ListAssessmentsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/assessments";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListAssessmentsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->ListAssessmentsAsyncHelper( request, handler, context ); } );
}

void AuditManagerClient::ListAssessmentsAsyncHelper(const ListAssessmentsRequest& request, const ListAssessmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAssessments(request), context);
}

ListControlsOutcome AuditManagerClient::ListControls(const ListControlsRequest& request) const
{
  if (!request.ControlTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListControls", "Required field: ControlType, is not set");
    return ListControlsOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ControlType]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/controls";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListControlsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->ListControlsAsyncHelper( request, handler, context ); } );
}

void AuditManagerClient::ListControlsAsyncHelper(const ListControlsRequest& request, const ListControlsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListControls(request), context);
}

ListKeywordsForDataSourceOutcome AuditManagerClient::ListKeywordsForDataSource(const ListKeywordsForDataSourceRequest& request) const
{
  if (!request.SourceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListKeywordsForDataSource", "Required field: Source, is not set");
    return ListKeywordsForDataSourceOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Source]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/dataSourceKeywords";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListKeywordsForDataSourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->ListKeywordsForDataSourceAsyncHelper( request, handler, context ); } );
}

void AuditManagerClient::ListKeywordsForDataSourceAsyncHelper(const ListKeywordsForDataSourceRequest& request, const ListKeywordsForDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListKeywordsForDataSource(request), context);
}

ListNotificationsOutcome AuditManagerClient::ListNotifications(const ListNotificationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/notifications";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListNotificationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->ListNotificationsAsyncHelper( request, handler, context ); } );
}

void AuditManagerClient::ListNotificationsAsyncHelper(const ListNotificationsRequest& request, const ListNotificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListNotifications(request), context);
}

ListTagsForResourceOutcome AuditManagerClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void AuditManagerClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

RegisterAccountOutcome AuditManagerClient::RegisterAccount(const RegisterAccountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/account/registerAccount";
  uri.SetPath(uri.GetPath() + ss.str());
  return RegisterAccountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->RegisterAccountAsyncHelper( request, handler, context ); } );
}

void AuditManagerClient::RegisterAccountAsyncHelper(const RegisterAccountRequest& request, const RegisterAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RegisterAccount(request), context);
}

RegisterOrganizationAdminAccountOutcome AuditManagerClient::RegisterOrganizationAdminAccount(const RegisterOrganizationAdminAccountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/account/registerOrganizationAdminAccount";
  uri.SetPath(uri.GetPath() + ss.str());
  return RegisterOrganizationAdminAccountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->RegisterOrganizationAdminAccountAsyncHelper( request, handler, context ); } );
}

void AuditManagerClient::RegisterOrganizationAdminAccountAsyncHelper(const RegisterOrganizationAdminAccountRequest& request, const RegisterOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RegisterOrganizationAdminAccount(request), context);
}

TagResourceOutcome AuditManagerClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void AuditManagerClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
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
  Aws::StringStream ss;
  ss << "/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void AuditManagerClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateAssessmentOutcome AuditManagerClient::UpdateAssessment(const UpdateAssessmentRequest& request) const
{
  if (!request.AssessmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAssessment", "Required field: AssessmentId, is not set");
    return UpdateAssessmentOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/assessments/";
  ss << request.GetAssessmentId();
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateAssessmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->UpdateAssessmentAsyncHelper( request, handler, context ); } );
}

void AuditManagerClient::UpdateAssessmentAsyncHelper(const UpdateAssessmentRequest& request, const UpdateAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateAssessment(request), context);
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
  Aws::StringStream ss;
  ss << "/assessments/";
  ss << request.GetAssessmentId();
  ss << "/controlSets/";
  ss << request.GetControlSetId();
  ss << "/controls/";
  ss << request.GetControlId();
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateAssessmentControlOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->UpdateAssessmentControlAsyncHelper( request, handler, context ); } );
}

void AuditManagerClient::UpdateAssessmentControlAsyncHelper(const UpdateAssessmentControlRequest& request, const UpdateAssessmentControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateAssessmentControl(request), context);
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
  Aws::StringStream ss;
  ss << "/assessments/";
  ss << request.GetAssessmentId();
  ss << "/controlSets/";
  ss << request.GetControlSetId();
  ss << "/status";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateAssessmentControlSetStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->UpdateAssessmentControlSetStatusAsyncHelper( request, handler, context ); } );
}

void AuditManagerClient::UpdateAssessmentControlSetStatusAsyncHelper(const UpdateAssessmentControlSetStatusRequest& request, const UpdateAssessmentControlSetStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateAssessmentControlSetStatus(request), context);
}

UpdateAssessmentFrameworkOutcome AuditManagerClient::UpdateAssessmentFramework(const UpdateAssessmentFrameworkRequest& request) const
{
  if (!request.FrameworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAssessmentFramework", "Required field: FrameworkId, is not set");
    return UpdateAssessmentFrameworkOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FrameworkId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/assessmentFrameworks/";
  ss << request.GetFrameworkId();
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateAssessmentFrameworkOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->UpdateAssessmentFrameworkAsyncHelper( request, handler, context ); } );
}

void AuditManagerClient::UpdateAssessmentFrameworkAsyncHelper(const UpdateAssessmentFrameworkRequest& request, const UpdateAssessmentFrameworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateAssessmentFramework(request), context);
}

UpdateAssessmentStatusOutcome AuditManagerClient::UpdateAssessmentStatus(const UpdateAssessmentStatusRequest& request) const
{
  if (!request.AssessmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAssessmentStatus", "Required field: AssessmentId, is not set");
    return UpdateAssessmentStatusOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/assessments/";
  ss << request.GetAssessmentId();
  ss << "/status";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateAssessmentStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->UpdateAssessmentStatusAsyncHelper( request, handler, context ); } );
}

void AuditManagerClient::UpdateAssessmentStatusAsyncHelper(const UpdateAssessmentStatusRequest& request, const UpdateAssessmentStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateAssessmentStatus(request), context);
}

UpdateControlOutcome AuditManagerClient::UpdateControl(const UpdateControlRequest& request) const
{
  if (!request.ControlIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateControl", "Required field: ControlId, is not set");
    return UpdateControlOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ControlId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/controls/";
  ss << request.GetControlId();
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateControlOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->UpdateControlAsyncHelper( request, handler, context ); } );
}

void AuditManagerClient::UpdateControlAsyncHelper(const UpdateControlRequest& request, const UpdateControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateControl(request), context);
}

UpdateSettingsOutcome AuditManagerClient::UpdateSettings(const UpdateSettingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/settings";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->UpdateSettingsAsyncHelper( request, handler, context ); } );
}

void AuditManagerClient::UpdateSettingsAsyncHelper(const UpdateSettingsRequest& request, const UpdateSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateSettings(request), context);
}

ValidateAssessmentReportIntegrityOutcome AuditManagerClient::ValidateAssessmentReportIntegrity(const ValidateAssessmentReportIntegrityRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/assessmentReports/integrity";
  uri.SetPath(uri.GetPath() + ss.str());
  return ValidateAssessmentReportIntegrityOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->ValidateAssessmentReportIntegrityAsyncHelper( request, handler, context ); } );
}

void AuditManagerClient::ValidateAssessmentReportIntegrityAsyncHelper(const ValidateAssessmentReportIntegrityRequest& request, const ValidateAssessmentReportIntegrityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ValidateAssessmentReportIntegrity(request), context);
}

