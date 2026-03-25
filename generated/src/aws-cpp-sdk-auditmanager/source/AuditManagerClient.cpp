/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/AuditManagerClient.h>
#include <aws/auditmanager/AuditManagerEndpointProvider.h>
#include <aws/auditmanager/AuditManagerErrorMarshaller.h>
#include <aws/auditmanager/model/AssociateAssessmentReportEvidenceFolderRequest.h>
#include <aws/auditmanager/model/BatchAssociateAssessmentReportEvidenceRequest.h>
#include <aws/auditmanager/model/BatchCreateDelegationByAssessmentRequest.h>
#include <aws/auditmanager/model/BatchDeleteDelegationByAssessmentRequest.h>
#include <aws/auditmanager/model/BatchDisassociateAssessmentReportEvidenceRequest.h>
#include <aws/auditmanager/model/BatchImportEvidenceToAssessmentControlRequest.h>
#include <aws/auditmanager/model/CreateAssessmentFrameworkRequest.h>
#include <aws/auditmanager/model/CreateAssessmentReportRequest.h>
#include <aws/auditmanager/model/CreateAssessmentRequest.h>
#include <aws/auditmanager/model/CreateControlRequest.h>
#include <aws/auditmanager/model/DeleteAssessmentFrameworkRequest.h>
#include <aws/auditmanager/model/DeleteAssessmentFrameworkShareRequest.h>
#include <aws/auditmanager/model/DeleteAssessmentReportRequest.h>
#include <aws/auditmanager/model/DeleteAssessmentRequest.h>
#include <aws/auditmanager/model/DeleteControlRequest.h>
#include <aws/auditmanager/model/DeregisterAccountRequest.h>
#include <aws/auditmanager/model/DeregisterOrganizationAdminAccountRequest.h>
#include <aws/auditmanager/model/DisassociateAssessmentReportEvidenceFolderRequest.h>
#include <aws/auditmanager/model/GetAccountStatusRequest.h>
#include <aws/auditmanager/model/GetAssessmentFrameworkRequest.h>
#include <aws/auditmanager/model/GetAssessmentReportUrlRequest.h>
#include <aws/auditmanager/model/GetAssessmentRequest.h>
#include <aws/auditmanager/model/GetChangeLogsRequest.h>
#include <aws/auditmanager/model/GetControlRequest.h>
#include <aws/auditmanager/model/GetDelegationsRequest.h>
#include <aws/auditmanager/model/GetEvidenceByEvidenceFolderRequest.h>
#include <aws/auditmanager/model/GetEvidenceFileUploadUrlRequest.h>
#include <aws/auditmanager/model/GetEvidenceFolderRequest.h>
#include <aws/auditmanager/model/GetEvidenceFoldersByAssessmentControlRequest.h>
#include <aws/auditmanager/model/GetEvidenceFoldersByAssessmentRequest.h>
#include <aws/auditmanager/model/GetEvidenceRequest.h>
#include <aws/auditmanager/model/GetInsightsByAssessmentRequest.h>
#include <aws/auditmanager/model/GetInsightsRequest.h>
#include <aws/auditmanager/model/GetOrganizationAdminAccountRequest.h>
#include <aws/auditmanager/model/GetServicesInScopeRequest.h>
#include <aws/auditmanager/model/GetSettingsRequest.h>
#include <aws/auditmanager/model/ListAssessmentControlInsightsByControlDomainRequest.h>
#include <aws/auditmanager/model/ListAssessmentFrameworkShareRequestsRequest.h>
#include <aws/auditmanager/model/ListAssessmentFrameworksRequest.h>
#include <aws/auditmanager/model/ListAssessmentReportsRequest.h>
#include <aws/auditmanager/model/ListAssessmentsRequest.h>
#include <aws/auditmanager/model/ListControlDomainInsightsByAssessmentRequest.h>
#include <aws/auditmanager/model/ListControlDomainInsightsRequest.h>
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
#include <aws/auditmanager/model/UpdateAssessmentControlRequest.h>
#include <aws/auditmanager/model/UpdateAssessmentControlSetStatusRequest.h>
#include <aws/auditmanager/model/UpdateAssessmentFrameworkRequest.h>
#include <aws/auditmanager/model/UpdateAssessmentFrameworkShareRequest.h>
#include <aws/auditmanager/model/UpdateAssessmentRequest.h>
#include <aws/auditmanager/model/UpdateAssessmentStatusRequest.h>
#include <aws/auditmanager/model/UpdateControlRequest.h>
#include <aws/auditmanager/model/UpdateSettingsRequest.h>
#include <aws/auditmanager/model/ValidateAssessmentReportIntegrityRequest.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::AuditManager;
using namespace Aws::AuditManager::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace AuditManager {
const char SERVICE_NAME[] = "auditmanager";
const char ALLOCATION_TAG[] = "AuditManagerClient";
}  // namespace AuditManager
}  // namespace Aws
const char* AuditManagerClient::GetServiceName() { return SERVICE_NAME; }
const char* AuditManagerClient::GetAllocationTag() { return ALLOCATION_TAG; }

AuditManagerClient::AuditManagerClient(const AuditManager::AuditManagerClientConfiguration& clientConfiguration,
                                       std::shared_ptr<AuditManagerEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AuditManagerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<AuditManagerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AuditManagerClient::AuditManagerClient(const AWSCredentials& credentials,
                                       std::shared_ptr<AuditManagerEndpointProviderBase> endpointProvider,
                                       const AuditManager::AuditManagerClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AuditManagerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<AuditManagerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AuditManagerClient::AuditManagerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       std::shared_ptr<AuditManagerEndpointProviderBase> endpointProvider,
                                       const AuditManager::AuditManagerClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AuditManagerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<AuditManagerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
AuditManagerClient::AuditManagerClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AuditManagerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<AuditManagerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AuditManagerClient::AuditManagerClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AuditManagerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<AuditManagerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AuditManagerClient::AuditManagerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AuditManagerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<AuditManagerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
AuditManagerClient::~AuditManagerClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<AuditManagerEndpointProviderBase>& AuditManagerClient::accessEndpointProvider() { return m_endpointProvider; }

void AuditManagerClient::init(const AuditManager::AuditManagerClientConfiguration& config) {
  AWSClient::SetServiceClientName("AuditManager");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "auditmanager");
}

void AuditManagerClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
AuditManagerClient::InvokeOperationOutcome AuditManagerClient::InvokeServiceOperation(
    const AmazonWebServiceRequest& request, const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
    Aws::Http::HttpMethod httpMethod) const {
  auto operationName = request.GetServiceRequestName();
  auto serviceName = GetServiceClientName();

  AWS_OPERATION_GUARD_DYNAMIC(operationName);

  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_endpointProvider, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_telemetryProvider, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto tracer = m_telemetryProvider->getTracer(serviceName, {});
  auto meter = m_telemetryProvider->getMeter(serviceName, {});
  AWS_OPERATION_CHECK_PTR_DYNAMIC(meter, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto span = tracer->CreateSpan(Aws::String(serviceName) + "." + operationName,
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);

  return TracingUtils::MakeCallWithTiming<InvokeOperationOutcome>(
      [&]() -> InvokeOperationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});

        AWS_OPERATION_CHECK_SUCCESS_DYNAMIC(endpointResolutionOutcome, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                            endpointResolutionOutcome.GetError().GetMessage());

        resolveUri(endpointResolutionOutcome);

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

AssociateAssessmentReportEvidenceFolderOutcome AuditManagerClient::AssociateAssessmentReportEvidenceFolder(
    const AssociateAssessmentReportEvidenceFolderRequest& request) const {
  if (!request.AssessmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateAssessmentReportEvidenceFolder", "Required field: AssessmentId, is not set");
    return AssociateAssessmentReportEvidenceFolderOutcome(Aws::Client::AWSError<AuditManagerErrors>(
        AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assessments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssessmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/associateToAssessmentReport");
  };

  return AssociateAssessmentReportEvidenceFolderOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

BatchAssociateAssessmentReportEvidenceOutcome AuditManagerClient::BatchAssociateAssessmentReportEvidence(
    const BatchAssociateAssessmentReportEvidenceRequest& request) const {
  if (!request.AssessmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchAssociateAssessmentReportEvidence", "Required field: AssessmentId, is not set");
    return BatchAssociateAssessmentReportEvidenceOutcome(Aws::Client::AWSError<AuditManagerErrors>(
        AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assessments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssessmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/batchAssociateToAssessmentReport");
  };

  return BatchAssociateAssessmentReportEvidenceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

BatchCreateDelegationByAssessmentOutcome AuditManagerClient::BatchCreateDelegationByAssessment(
    const BatchCreateDelegationByAssessmentRequest& request) const {
  if (!request.AssessmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchCreateDelegationByAssessment", "Required field: AssessmentId, is not set");
    return BatchCreateDelegationByAssessmentOutcome(Aws::Client::AWSError<AuditManagerErrors>(
        AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assessments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssessmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/delegations");
  };

  return BatchCreateDelegationByAssessmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchDeleteDelegationByAssessmentOutcome AuditManagerClient::BatchDeleteDelegationByAssessment(
    const BatchDeleteDelegationByAssessmentRequest& request) const {
  if (!request.AssessmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchDeleteDelegationByAssessment", "Required field: AssessmentId, is not set");
    return BatchDeleteDelegationByAssessmentOutcome(Aws::Client::AWSError<AuditManagerErrors>(
        AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assessments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssessmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/delegations");
  };

  return BatchDeleteDelegationByAssessmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

BatchDisassociateAssessmentReportEvidenceOutcome AuditManagerClient::BatchDisassociateAssessmentReportEvidence(
    const BatchDisassociateAssessmentReportEvidenceRequest& request) const {
  if (!request.AssessmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchDisassociateAssessmentReportEvidence", "Required field: AssessmentId, is not set");
    return BatchDisassociateAssessmentReportEvidenceOutcome(Aws::Client::AWSError<AuditManagerErrors>(
        AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assessments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssessmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/batchDisassociateFromAssessmentReport");
  };

  return BatchDisassociateAssessmentReportEvidenceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

BatchImportEvidenceToAssessmentControlOutcome AuditManagerClient::BatchImportEvidenceToAssessmentControl(
    const BatchImportEvidenceToAssessmentControlRequest& request) const {
  if (!request.AssessmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchImportEvidenceToAssessmentControl", "Required field: AssessmentId, is not set");
    return BatchImportEvidenceToAssessmentControlOutcome(Aws::Client::AWSError<AuditManagerErrors>(
        AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  if (!request.ControlSetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchImportEvidenceToAssessmentControl", "Required field: ControlSetId, is not set");
    return BatchImportEvidenceToAssessmentControlOutcome(Aws::Client::AWSError<AuditManagerErrors>(
        AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ControlSetId]", false));
  }
  if (!request.ControlIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchImportEvidenceToAssessmentControl", "Required field: ControlId, is not set");
    return BatchImportEvidenceToAssessmentControlOutcome(Aws::Client::AWSError<AuditManagerErrors>(
        AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ControlId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assessments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssessmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/controlSets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetControlSetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/controls/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetControlId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/evidence");
  };

  return BatchImportEvidenceToAssessmentControlOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAssessmentOutcome AuditManagerClient::CreateAssessment(const CreateAssessmentRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assessments");
  };

  return CreateAssessmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAssessmentFrameworkOutcome AuditManagerClient::CreateAssessmentFramework(const CreateAssessmentFrameworkRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assessmentFrameworks");
  };

  return CreateAssessmentFrameworkOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAssessmentReportOutcome AuditManagerClient::CreateAssessmentReport(const CreateAssessmentReportRequest& request) const {
  if (!request.AssessmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateAssessmentReport", "Required field: AssessmentId, is not set");
    return CreateAssessmentReportOutcome(Aws::Client::AWSError<AuditManagerErrors>(
        AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assessments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssessmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/reports");
  };

  return CreateAssessmentReportOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateControlOutcome AuditManagerClient::CreateControl(const CreateControlRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/controls");
  };

  return CreateControlOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAssessmentOutcome AuditManagerClient::DeleteAssessment(const DeleteAssessmentRequest& request) const {
  if (!request.AssessmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAssessment", "Required field: AssessmentId, is not set");
    return DeleteAssessmentOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [AssessmentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assessments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssessmentId());
  };

  return DeleteAssessmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteAssessmentFrameworkOutcome AuditManagerClient::DeleteAssessmentFramework(const DeleteAssessmentFrameworkRequest& request) const {
  if (!request.FrameworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAssessmentFramework", "Required field: FrameworkId, is not set");
    return DeleteAssessmentFrameworkOutcome(Aws::Client::AWSError<AuditManagerErrors>(
        AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FrameworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assessmentFrameworks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFrameworkId());
  };

  return DeleteAssessmentFrameworkOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteAssessmentFrameworkShareOutcome AuditManagerClient::DeleteAssessmentFrameworkShare(
    const DeleteAssessmentFrameworkShareRequest& request) const {
  if (!request.RequestIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAssessmentFrameworkShare", "Required field: RequestId, is not set");
    return DeleteAssessmentFrameworkShareOutcome(Aws::Client::AWSError<AuditManagerErrors>(
        AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RequestId]", false));
  }
  if (!request.RequestTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAssessmentFrameworkShare", "Required field: RequestType, is not set");
    return DeleteAssessmentFrameworkShareOutcome(Aws::Client::AWSError<AuditManagerErrors>(
        AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RequestType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assessmentFrameworkShareRequests/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRequestId());
  };

  return DeleteAssessmentFrameworkShareOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteAssessmentReportOutcome AuditManagerClient::DeleteAssessmentReport(const DeleteAssessmentReportRequest& request) const {
  if (!request.AssessmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAssessmentReport", "Required field: AssessmentId, is not set");
    return DeleteAssessmentReportOutcome(Aws::Client::AWSError<AuditManagerErrors>(
        AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  if (!request.AssessmentReportIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAssessmentReport", "Required field: AssessmentReportId, is not set");
    return DeleteAssessmentReportOutcome(Aws::Client::AWSError<AuditManagerErrors>(
        AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentReportId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assessments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssessmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/reports/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssessmentReportId());
  };

  return DeleteAssessmentReportOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteControlOutcome AuditManagerClient::DeleteControl(const DeleteControlRequest& request) const {
  if (!request.ControlIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteControl", "Required field: ControlId, is not set");
    return DeleteControlOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ControlId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/controls/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetControlId());
  };

  return DeleteControlOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeregisterAccountOutcome AuditManagerClient::DeregisterAccount(const DeregisterAccountRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/account/deregisterAccount");
  };

  return DeregisterAccountOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeregisterOrganizationAdminAccountOutcome AuditManagerClient::DeregisterOrganizationAdminAccount(
    const DeregisterOrganizationAdminAccountRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/account/deregisterOrganizationAdminAccount");
  };

  return DeregisterOrganizationAdminAccountOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateAssessmentReportEvidenceFolderOutcome AuditManagerClient::DisassociateAssessmentReportEvidenceFolder(
    const DisassociateAssessmentReportEvidenceFolderRequest& request) const {
  if (!request.AssessmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateAssessmentReportEvidenceFolder", "Required field: AssessmentId, is not set");
    return DisassociateAssessmentReportEvidenceFolderOutcome(Aws::Client::AWSError<AuditManagerErrors>(
        AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assessments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssessmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/disassociateFromAssessmentReport");
  };

  return DisassociateAssessmentReportEvidenceFolderOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

GetAccountStatusOutcome AuditManagerClient::GetAccountStatus(const GetAccountStatusRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/account/status");
  };

  return GetAccountStatusOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetAssessmentOutcome AuditManagerClient::GetAssessment(const GetAssessmentRequest& request) const {
  if (!request.AssessmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAssessment", "Required field: AssessmentId, is not set");
    return GetAssessmentOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [AssessmentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assessments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssessmentId());
  };

  return GetAssessmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetAssessmentFrameworkOutcome AuditManagerClient::GetAssessmentFramework(const GetAssessmentFrameworkRequest& request) const {
  if (!request.FrameworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAssessmentFramework", "Required field: FrameworkId, is not set");
    return GetAssessmentFrameworkOutcome(Aws::Client::AWSError<AuditManagerErrors>(
        AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FrameworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assessmentFrameworks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFrameworkId());
  };

  return GetAssessmentFrameworkOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetAssessmentReportUrlOutcome AuditManagerClient::GetAssessmentReportUrl(const GetAssessmentReportUrlRequest& request) const {
  if (!request.AssessmentReportIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAssessmentReportUrl", "Required field: AssessmentReportId, is not set");
    return GetAssessmentReportUrlOutcome(Aws::Client::AWSError<AuditManagerErrors>(
        AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentReportId]", false));
  }
  if (!request.AssessmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAssessmentReportUrl", "Required field: AssessmentId, is not set");
    return GetAssessmentReportUrlOutcome(Aws::Client::AWSError<AuditManagerErrors>(
        AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assessments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssessmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/reports/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssessmentReportId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/url");
  };

  return GetAssessmentReportUrlOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetChangeLogsOutcome AuditManagerClient::GetChangeLogs(const GetChangeLogsRequest& request) const {
  if (!request.AssessmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetChangeLogs", "Required field: AssessmentId, is not set");
    return GetChangeLogsOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [AssessmentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assessments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssessmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/changelogs");
  };

  return GetChangeLogsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetControlOutcome AuditManagerClient::GetControl(const GetControlRequest& request) const {
  if (!request.ControlIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetControl", "Required field: ControlId, is not set");
    return GetControlOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [ControlId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/controls/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetControlId());
  };

  return GetControlOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDelegationsOutcome AuditManagerClient::GetDelegations(const GetDelegationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/delegations");
  };

  return GetDelegationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetEvidenceOutcome AuditManagerClient::GetEvidence(const GetEvidenceRequest& request) const {
  if (!request.AssessmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEvidence", "Required field: AssessmentId, is not set");
    return GetEvidenceOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [AssessmentId]", false));
  }
  if (!request.ControlSetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEvidence", "Required field: ControlSetId, is not set");
    return GetEvidenceOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ControlSetId]", false));
  }
  if (!request.EvidenceFolderIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEvidence", "Required field: EvidenceFolderId, is not set");
    return GetEvidenceOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [EvidenceFolderId]", false));
  }
  if (!request.EvidenceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEvidence", "Required field: EvidenceId, is not set");
    return GetEvidenceOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [EvidenceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assessments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssessmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/controlSets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetControlSetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/evidenceFolders/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEvidenceFolderId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/evidence/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEvidenceId());
  };

  return GetEvidenceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetEvidenceByEvidenceFolderOutcome AuditManagerClient::GetEvidenceByEvidenceFolder(
    const GetEvidenceByEvidenceFolderRequest& request) const {
  if (!request.AssessmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEvidenceByEvidenceFolder", "Required field: AssessmentId, is not set");
    return GetEvidenceByEvidenceFolderOutcome(Aws::Client::AWSError<AuditManagerErrors>(
        AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  if (!request.ControlSetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEvidenceByEvidenceFolder", "Required field: ControlSetId, is not set");
    return GetEvidenceByEvidenceFolderOutcome(Aws::Client::AWSError<AuditManagerErrors>(
        AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ControlSetId]", false));
  }
  if (!request.EvidenceFolderIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEvidenceByEvidenceFolder", "Required field: EvidenceFolderId, is not set");
    return GetEvidenceByEvidenceFolderOutcome(Aws::Client::AWSError<AuditManagerErrors>(
        AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EvidenceFolderId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assessments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssessmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/controlSets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetControlSetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/evidenceFolders/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEvidenceFolderId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/evidence");
  };

  return GetEvidenceByEvidenceFolderOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetEvidenceFileUploadUrlOutcome AuditManagerClient::GetEvidenceFileUploadUrl(const GetEvidenceFileUploadUrlRequest& request) const {
  if (!request.FileNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEvidenceFileUploadUrl", "Required field: FileName, is not set");
    return GetEvidenceFileUploadUrlOutcome(Aws::Client::AWSError<AuditManagerErrors>(
        AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FileName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/evidenceFileUploadUrl");
  };

  return GetEvidenceFileUploadUrlOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetEvidenceFolderOutcome AuditManagerClient::GetEvidenceFolder(const GetEvidenceFolderRequest& request) const {
  if (!request.AssessmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEvidenceFolder", "Required field: AssessmentId, is not set");
    return GetEvidenceFolderOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [AssessmentId]", false));
  }
  if (!request.ControlSetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEvidenceFolder", "Required field: ControlSetId, is not set");
    return GetEvidenceFolderOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [ControlSetId]", false));
  }
  if (!request.EvidenceFolderIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEvidenceFolder", "Required field: EvidenceFolderId, is not set");
    return GetEvidenceFolderOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [EvidenceFolderId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assessments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssessmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/controlSets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetControlSetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/evidenceFolders/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEvidenceFolderId());
  };

  return GetEvidenceFolderOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetEvidenceFoldersByAssessmentOutcome AuditManagerClient::GetEvidenceFoldersByAssessment(
    const GetEvidenceFoldersByAssessmentRequest& request) const {
  if (!request.AssessmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEvidenceFoldersByAssessment", "Required field: AssessmentId, is not set");
    return GetEvidenceFoldersByAssessmentOutcome(Aws::Client::AWSError<AuditManagerErrors>(
        AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assessments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssessmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/evidenceFolders");
  };

  return GetEvidenceFoldersByAssessmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetEvidenceFoldersByAssessmentControlOutcome AuditManagerClient::GetEvidenceFoldersByAssessmentControl(
    const GetEvidenceFoldersByAssessmentControlRequest& request) const {
  if (!request.AssessmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEvidenceFoldersByAssessmentControl", "Required field: AssessmentId, is not set");
    return GetEvidenceFoldersByAssessmentControlOutcome(Aws::Client::AWSError<AuditManagerErrors>(
        AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  if (!request.ControlSetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEvidenceFoldersByAssessmentControl", "Required field: ControlSetId, is not set");
    return GetEvidenceFoldersByAssessmentControlOutcome(Aws::Client::AWSError<AuditManagerErrors>(
        AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ControlSetId]", false));
  }
  if (!request.ControlIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEvidenceFoldersByAssessmentControl", "Required field: ControlId, is not set");
    return GetEvidenceFoldersByAssessmentControlOutcome(Aws::Client::AWSError<AuditManagerErrors>(
        AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ControlId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assessments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssessmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/evidenceFolders-by-assessment-control/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetControlSetId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetControlId());
  };

  return GetEvidenceFoldersByAssessmentControlOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetInsightsOutcome AuditManagerClient::GetInsights(const GetInsightsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/insights");
  };

  return GetInsightsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetInsightsByAssessmentOutcome AuditManagerClient::GetInsightsByAssessment(const GetInsightsByAssessmentRequest& request) const {
  if (!request.AssessmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetInsightsByAssessment", "Required field: AssessmentId, is not set");
    return GetInsightsByAssessmentOutcome(Aws::Client::AWSError<AuditManagerErrors>(
        AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/insights/assessments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssessmentId());
  };

  return GetInsightsByAssessmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetOrganizationAdminAccountOutcome AuditManagerClient::GetOrganizationAdminAccount(
    const GetOrganizationAdminAccountRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/account/organizationAdminAccount");
  };

  return GetOrganizationAdminAccountOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetServicesInScopeOutcome AuditManagerClient::GetServicesInScope(const GetServicesInScopeRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/services");
  };

  return GetServicesInScopeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetSettingsOutcome AuditManagerClient::GetSettings(const GetSettingsRequest& request) const {
  if (!request.AttributeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSettings", "Required field: Attribute, is not set");
    return GetSettingsOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [Attribute]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/settings/");
    endpointResolutionOutcome.GetResult().AddPathSegment(SettingAttributeMapper::GetNameForSettingAttribute(request.GetAttribute()));
  };

  return GetSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListAssessmentControlInsightsByControlDomainOutcome AuditManagerClient::ListAssessmentControlInsightsByControlDomain(
    const ListAssessmentControlInsightsByControlDomainRequest& request) const {
  if (!request.ControlDomainIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAssessmentControlInsightsByControlDomain", "Required field: ControlDomainId, is not set");
    return ListAssessmentControlInsightsByControlDomainOutcome(Aws::Client::AWSError<AuditManagerErrors>(
        AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ControlDomainId]", false));
  }
  if (!request.AssessmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAssessmentControlInsightsByControlDomain", "Required field: AssessmentId, is not set");
    return ListAssessmentControlInsightsByControlDomainOutcome(Aws::Client::AWSError<AuditManagerErrors>(
        AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/insights/controls-by-assessment");
  };

  return ListAssessmentControlInsightsByControlDomainOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListAssessmentFrameworkShareRequestsOutcome AuditManagerClient::ListAssessmentFrameworkShareRequests(
    const ListAssessmentFrameworkShareRequestsRequest& request) const {
  if (!request.RequestTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAssessmentFrameworkShareRequests", "Required field: RequestType, is not set");
    return ListAssessmentFrameworkShareRequestsOutcome(Aws::Client::AWSError<AuditManagerErrors>(
        AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RequestType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assessmentFrameworkShareRequests");
  };

  return ListAssessmentFrameworkShareRequestsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListAssessmentFrameworksOutcome AuditManagerClient::ListAssessmentFrameworks(const ListAssessmentFrameworksRequest& request) const {
  if (!request.FrameworkTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAssessmentFrameworks", "Required field: FrameworkType, is not set");
    return ListAssessmentFrameworksOutcome(Aws::Client::AWSError<AuditManagerErrors>(
        AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FrameworkType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assessmentFrameworks");
  };

  return ListAssessmentFrameworksOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListAssessmentReportsOutcome AuditManagerClient::ListAssessmentReports(const ListAssessmentReportsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assessmentReports");
  };

  return ListAssessmentReportsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListAssessmentsOutcome AuditManagerClient::ListAssessments(const ListAssessmentsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assessments");
  };

  return ListAssessmentsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListControlDomainInsightsOutcome AuditManagerClient::ListControlDomainInsights(const ListControlDomainInsightsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/insights/control-domains");
  };

  return ListControlDomainInsightsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListControlDomainInsightsByAssessmentOutcome AuditManagerClient::ListControlDomainInsightsByAssessment(
    const ListControlDomainInsightsByAssessmentRequest& request) const {
  if (!request.AssessmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListControlDomainInsightsByAssessment", "Required field: AssessmentId, is not set");
    return ListControlDomainInsightsByAssessmentOutcome(Aws::Client::AWSError<AuditManagerErrors>(
        AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/insights/control-domains-by-assessment");
  };

  return ListControlDomainInsightsByAssessmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListControlInsightsByControlDomainOutcome AuditManagerClient::ListControlInsightsByControlDomain(
    const ListControlInsightsByControlDomainRequest& request) const {
  if (!request.ControlDomainIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListControlInsightsByControlDomain", "Required field: ControlDomainId, is not set");
    return ListControlInsightsByControlDomainOutcome(Aws::Client::AWSError<AuditManagerErrors>(
        AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ControlDomainId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/insights/controls");
  };

  return ListControlInsightsByControlDomainOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListControlsOutcome AuditManagerClient::ListControls(const ListControlsRequest& request) const {
  if (!request.ControlTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListControls", "Required field: ControlType, is not set");
    return ListControlsOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ControlType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/controls");
  };

  return ListControlsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListKeywordsForDataSourceOutcome AuditManagerClient::ListKeywordsForDataSource(const ListKeywordsForDataSourceRequest& request) const {
  if (!request.SourceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListKeywordsForDataSource", "Required field: Source, is not set");
    return ListKeywordsForDataSourceOutcome(Aws::Client::AWSError<AuditManagerErrors>(
        AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Source]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/dataSourceKeywords");
  };

  return ListKeywordsForDataSourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListNotificationsOutcome AuditManagerClient::ListNotifications(const ListNotificationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/notifications");
  };

  return ListNotificationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForResourceOutcome AuditManagerClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

RegisterAccountOutcome AuditManagerClient::RegisterAccount(const RegisterAccountRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/account/registerAccount");
  };

  return RegisterAccountOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

RegisterOrganizationAdminAccountOutcome AuditManagerClient::RegisterOrganizationAdminAccount(
    const RegisterOrganizationAdminAccountRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/account/registerOrganizationAdminAccount");
  };

  return RegisterOrganizationAdminAccountOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartAssessmentFrameworkShareOutcome AuditManagerClient::StartAssessmentFrameworkShare(
    const StartAssessmentFrameworkShareRequest& request) const {
  if (!request.FrameworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartAssessmentFrameworkShare", "Required field: FrameworkId, is not set");
    return StartAssessmentFrameworkShareOutcome(Aws::Client::AWSError<AuditManagerErrors>(
        AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FrameworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assessmentFrameworks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFrameworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/shareRequests");
  };

  return StartAssessmentFrameworkShareOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome AuditManagerClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome AuditManagerClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

UpdateAssessmentOutcome AuditManagerClient::UpdateAssessment(const UpdateAssessmentRequest& request) const {
  if (!request.AssessmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAssessment", "Required field: AssessmentId, is not set");
    return UpdateAssessmentOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [AssessmentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assessments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssessmentId());
  };

  return UpdateAssessmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateAssessmentControlOutcome AuditManagerClient::UpdateAssessmentControl(const UpdateAssessmentControlRequest& request) const {
  if (!request.AssessmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAssessmentControl", "Required field: AssessmentId, is not set");
    return UpdateAssessmentControlOutcome(Aws::Client::AWSError<AuditManagerErrors>(
        AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  if (!request.ControlSetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAssessmentControl", "Required field: ControlSetId, is not set");
    return UpdateAssessmentControlOutcome(Aws::Client::AWSError<AuditManagerErrors>(
        AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ControlSetId]", false));
  }
  if (!request.ControlIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAssessmentControl", "Required field: ControlId, is not set");
    return UpdateAssessmentControlOutcome(Aws::Client::AWSError<AuditManagerErrors>(
        AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ControlId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assessments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssessmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/controlSets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetControlSetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/controls/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetControlId());
  };

  return UpdateAssessmentControlOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateAssessmentControlSetStatusOutcome AuditManagerClient::UpdateAssessmentControlSetStatus(
    const UpdateAssessmentControlSetStatusRequest& request) const {
  if (!request.AssessmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAssessmentControlSetStatus", "Required field: AssessmentId, is not set");
    return UpdateAssessmentControlSetStatusOutcome(Aws::Client::AWSError<AuditManagerErrors>(
        AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  if (!request.ControlSetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAssessmentControlSetStatus", "Required field: ControlSetId, is not set");
    return UpdateAssessmentControlSetStatusOutcome(Aws::Client::AWSError<AuditManagerErrors>(
        AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ControlSetId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assessments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssessmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/controlSets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetControlSetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/status");
  };

  return UpdateAssessmentControlSetStatusOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateAssessmentFrameworkOutcome AuditManagerClient::UpdateAssessmentFramework(const UpdateAssessmentFrameworkRequest& request) const {
  if (!request.FrameworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAssessmentFramework", "Required field: FrameworkId, is not set");
    return UpdateAssessmentFrameworkOutcome(Aws::Client::AWSError<AuditManagerErrors>(
        AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FrameworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assessmentFrameworks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFrameworkId());
  };

  return UpdateAssessmentFrameworkOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateAssessmentFrameworkShareOutcome AuditManagerClient::UpdateAssessmentFrameworkShare(
    const UpdateAssessmentFrameworkShareRequest& request) const {
  if (!request.RequestIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAssessmentFrameworkShare", "Required field: RequestId, is not set");
    return UpdateAssessmentFrameworkShareOutcome(Aws::Client::AWSError<AuditManagerErrors>(
        AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RequestId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assessmentFrameworkShareRequests/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRequestId());
  };

  return UpdateAssessmentFrameworkShareOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateAssessmentStatusOutcome AuditManagerClient::UpdateAssessmentStatus(const UpdateAssessmentStatusRequest& request) const {
  if (!request.AssessmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAssessmentStatus", "Required field: AssessmentId, is not set");
    return UpdateAssessmentStatusOutcome(Aws::Client::AWSError<AuditManagerErrors>(
        AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assessments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssessmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/status");
  };

  return UpdateAssessmentStatusOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateControlOutcome AuditManagerClient::UpdateControl(const UpdateControlRequest& request) const {
  if (!request.ControlIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateControl", "Required field: ControlId, is not set");
    return UpdateControlOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ControlId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/controls/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetControlId());
  };

  return UpdateControlOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateSettingsOutcome AuditManagerClient::UpdateSettings(const UpdateSettingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/settings");
  };

  return UpdateSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

ValidateAssessmentReportIntegrityOutcome AuditManagerClient::ValidateAssessmentReportIntegrity(
    const ValidateAssessmentReportIntegrityRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assessmentReports/integrity");
  };

  return ValidateAssessmentReportIntegrityOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}
