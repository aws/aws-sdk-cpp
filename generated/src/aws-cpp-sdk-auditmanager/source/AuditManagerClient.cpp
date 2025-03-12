/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
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
#include <aws/auditmanager/model/GetEvidenceFileUploadUrlRequest.h>
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

#include <smithy/tracing/TracingUtils.h>

#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::AuditManager;
using namespace Aws::AuditManager::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws
{
  namespace AuditManager
  {
    const char ALLOCATION_TAG[] = "AuditManagerClient";
    const char SERVICE_NAME[] = "auditmanager";
  }
}
const char* AuditManagerClient::GetServiceName() {return SERVICE_NAME;}
const char* AuditManagerClient::GetAllocationTag() {return ALLOCATION_TAG;}

AuditManagerClient::AuditManagerClient(const AuditManager::AuditManagerClientConfiguration& clientConfiguration,
                           std::shared_ptr<AuditManagerEndpointProviderBase> endpointProvider) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "AuditManager",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<AuditManagerErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<AuditManagerEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region}},
        })
{}

AuditManagerClient::AuditManagerClient(const AWSCredentials& credentials,
                           std::shared_ptr<AuditManagerEndpointProviderBase> endpointProvider,
                           const AuditManager::AuditManagerClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "AuditManager",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<AuditManagerErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<AuditManagerEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}},
        })
{}

AuditManagerClient::AuditManagerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<AuditManagerEndpointProviderBase> endpointProvider,
                           const AuditManager::AuditManagerClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "AuditManager",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<AuditManagerErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<AuditManagerEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{ Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}

/* Legacy constructors due deprecation */
AuditManagerClient::AuditManagerClient(const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
      GetServiceName(),
      "AuditManager",
      Aws::Http::CreateHttpClient(clientConfiguration),
      Aws::MakeShared<AuditManagerErrorMarshaller>(ALLOCATION_TAG),
      Aws::MakeShared<AuditManagerEndpointProvider>(ALLOCATION_TAG),
      Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
      {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::DefaultAwsCredentialIdentityResolver>(ALLOCATION_TAG), GetServiceName(), clientConfiguration.region}}
      })
{}

AuditManagerClient::AuditManagerClient(const AWSCredentials& credentials,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "AuditManager",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<AuditManagerErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<AuditManagerEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}}
        })
{}

AuditManagerClient::AuditManagerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "AuditManager",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<AuditManagerErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<AuditManagerEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}
/* End of legacy constructors due deprecation */

AuditManagerClient::~AuditManagerClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<AuditManagerEndpointProviderBase>& AuditManagerClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void AuditManagerClient::OverrideEndpoint(const Aws::String& endpoint)
{
    AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
    m_endpointProvider->OverrideEndpoint(endpoint);
}
AssociateAssessmentReportEvidenceFolderOutcome AuditManagerClient::AssociateAssessmentReportEvidenceFolder(const AssociateAssessmentReportEvidenceFolderRequest& request) const
{
  AWS_OPERATION_GUARD(AssociateAssessmentReportEvidenceFolder);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateAssessmentReportEvidenceFolder, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssessmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateAssessmentReportEvidenceFolder", "Required field: AssessmentId, is not set");
    return AssociateAssessmentReportEvidenceFolderOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, AssociateAssessmentReportEvidenceFolder, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AssociateAssessmentReportEvidenceFolder, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AssociateAssessmentReportEvidenceFolder",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AssociateAssessmentReportEvidenceFolderOutcome>(
    [&]()-> AssociateAssessmentReportEvidenceFolderOutcome {
      return AssociateAssessmentReportEvidenceFolderOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/assessments/");
      resolvedEndpoint.AddPathSegment(request.GetAssessmentId());
      resolvedEndpoint.AddPathSegments("/associateToAssessmentReport");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

BatchAssociateAssessmentReportEvidenceOutcome AuditManagerClient::BatchAssociateAssessmentReportEvidence(const BatchAssociateAssessmentReportEvidenceRequest& request) const
{
  AWS_OPERATION_GUARD(BatchAssociateAssessmentReportEvidence);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchAssociateAssessmentReportEvidence, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssessmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchAssociateAssessmentReportEvidence", "Required field: AssessmentId, is not set");
    return BatchAssociateAssessmentReportEvidenceOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, BatchAssociateAssessmentReportEvidence, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, BatchAssociateAssessmentReportEvidence, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".BatchAssociateAssessmentReportEvidence",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<BatchAssociateAssessmentReportEvidenceOutcome>(
    [&]()-> BatchAssociateAssessmentReportEvidenceOutcome {
      return BatchAssociateAssessmentReportEvidenceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/assessments/");
      resolvedEndpoint.AddPathSegment(request.GetAssessmentId());
      resolvedEndpoint.AddPathSegments("/batchAssociateToAssessmentReport");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

BatchCreateDelegationByAssessmentOutcome AuditManagerClient::BatchCreateDelegationByAssessment(const BatchCreateDelegationByAssessmentRequest& request) const
{
  AWS_OPERATION_GUARD(BatchCreateDelegationByAssessment);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchCreateDelegationByAssessment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssessmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchCreateDelegationByAssessment", "Required field: AssessmentId, is not set");
    return BatchCreateDelegationByAssessmentOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, BatchCreateDelegationByAssessment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, BatchCreateDelegationByAssessment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".BatchCreateDelegationByAssessment",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<BatchCreateDelegationByAssessmentOutcome>(
    [&]()-> BatchCreateDelegationByAssessmentOutcome {
      return BatchCreateDelegationByAssessmentOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/assessments/");
      resolvedEndpoint.AddPathSegment(request.GetAssessmentId());
      resolvedEndpoint.AddPathSegments("/delegations");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

BatchDeleteDelegationByAssessmentOutcome AuditManagerClient::BatchDeleteDelegationByAssessment(const BatchDeleteDelegationByAssessmentRequest& request) const
{
  AWS_OPERATION_GUARD(BatchDeleteDelegationByAssessment);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchDeleteDelegationByAssessment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssessmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchDeleteDelegationByAssessment", "Required field: AssessmentId, is not set");
    return BatchDeleteDelegationByAssessmentOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, BatchDeleteDelegationByAssessment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, BatchDeleteDelegationByAssessment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".BatchDeleteDelegationByAssessment",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<BatchDeleteDelegationByAssessmentOutcome>(
    [&]()-> BatchDeleteDelegationByAssessmentOutcome {
      return BatchDeleteDelegationByAssessmentOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/assessments/");
      resolvedEndpoint.AddPathSegment(request.GetAssessmentId());
      resolvedEndpoint.AddPathSegments("/delegations");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

BatchDisassociateAssessmentReportEvidenceOutcome AuditManagerClient::BatchDisassociateAssessmentReportEvidence(const BatchDisassociateAssessmentReportEvidenceRequest& request) const
{
  AWS_OPERATION_GUARD(BatchDisassociateAssessmentReportEvidence);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchDisassociateAssessmentReportEvidence, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssessmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchDisassociateAssessmentReportEvidence", "Required field: AssessmentId, is not set");
    return BatchDisassociateAssessmentReportEvidenceOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, BatchDisassociateAssessmentReportEvidence, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, BatchDisassociateAssessmentReportEvidence, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".BatchDisassociateAssessmentReportEvidence",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<BatchDisassociateAssessmentReportEvidenceOutcome>(
    [&]()-> BatchDisassociateAssessmentReportEvidenceOutcome {
      return BatchDisassociateAssessmentReportEvidenceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/assessments/");
      resolvedEndpoint.AddPathSegment(request.GetAssessmentId());
      resolvedEndpoint.AddPathSegments("/batchDisassociateFromAssessmentReport");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

BatchImportEvidenceToAssessmentControlOutcome AuditManagerClient::BatchImportEvidenceToAssessmentControl(const BatchImportEvidenceToAssessmentControlRequest& request) const
{
  AWS_OPERATION_GUARD(BatchImportEvidenceToAssessmentControl);
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, BatchImportEvidenceToAssessmentControl, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, BatchImportEvidenceToAssessmentControl, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".BatchImportEvidenceToAssessmentControl",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<BatchImportEvidenceToAssessmentControlOutcome>(
    [&]()-> BatchImportEvidenceToAssessmentControlOutcome {
      return BatchImportEvidenceToAssessmentControlOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/assessments/");
      resolvedEndpoint.AddPathSegment(request.GetAssessmentId());
      resolvedEndpoint.AddPathSegments("/controlSets/");
      resolvedEndpoint.AddPathSegment(request.GetControlSetId());
      resolvedEndpoint.AddPathSegments("/controls/");
      resolvedEndpoint.AddPathSegment(request.GetControlId());
      resolvedEndpoint.AddPathSegments("/evidence");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateAssessmentOutcome AuditManagerClient::CreateAssessment(const CreateAssessmentRequest& request) const
{
  AWS_OPERATION_GUARD(CreateAssessment);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAssessment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateAssessment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateAssessment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateAssessment",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateAssessmentOutcome>(
    [&]()-> CreateAssessmentOutcome {
      return CreateAssessmentOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/assessments");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateAssessmentFrameworkOutcome AuditManagerClient::CreateAssessmentFramework(const CreateAssessmentFrameworkRequest& request) const
{
  AWS_OPERATION_GUARD(CreateAssessmentFramework);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAssessmentFramework, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateAssessmentFramework, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateAssessmentFramework, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateAssessmentFramework",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateAssessmentFrameworkOutcome>(
    [&]()-> CreateAssessmentFrameworkOutcome {
      return CreateAssessmentFrameworkOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/assessmentFrameworks");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateAssessmentReportOutcome AuditManagerClient::CreateAssessmentReport(const CreateAssessmentReportRequest& request) const
{
  AWS_OPERATION_GUARD(CreateAssessmentReport);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAssessmentReport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssessmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateAssessmentReport", "Required field: AssessmentId, is not set");
    return CreateAssessmentReportOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateAssessmentReport, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateAssessmentReport, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateAssessmentReport",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateAssessmentReportOutcome>(
    [&]()-> CreateAssessmentReportOutcome {
      return CreateAssessmentReportOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/assessments/");
      resolvedEndpoint.AddPathSegment(request.GetAssessmentId());
      resolvedEndpoint.AddPathSegments("/reports");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateControlOutcome AuditManagerClient::CreateControl(const CreateControlRequest& request) const
{
  AWS_OPERATION_GUARD(CreateControl);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateControl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateControl, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateControl, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateControl",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateControlOutcome>(
    [&]()-> CreateControlOutcome {
      return CreateControlOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/controls");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteAssessmentOutcome AuditManagerClient::DeleteAssessment(const DeleteAssessmentRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteAssessment);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAssessment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssessmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAssessment", "Required field: AssessmentId, is not set");
    return DeleteAssessmentOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteAssessment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteAssessment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteAssessment",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteAssessmentOutcome>(
    [&]()-> DeleteAssessmentOutcome {
      return DeleteAssessmentOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/assessments/");
      resolvedEndpoint.AddPathSegment(request.GetAssessmentId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteAssessmentFrameworkOutcome AuditManagerClient::DeleteAssessmentFramework(const DeleteAssessmentFrameworkRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteAssessmentFramework);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAssessmentFramework, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FrameworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAssessmentFramework", "Required field: FrameworkId, is not set");
    return DeleteAssessmentFrameworkOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FrameworkId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteAssessmentFramework, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteAssessmentFramework, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteAssessmentFramework",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteAssessmentFrameworkOutcome>(
    [&]()-> DeleteAssessmentFrameworkOutcome {
      return DeleteAssessmentFrameworkOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/assessmentFrameworks/");
      resolvedEndpoint.AddPathSegment(request.GetFrameworkId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteAssessmentFrameworkShareOutcome AuditManagerClient::DeleteAssessmentFrameworkShare(const DeleteAssessmentFrameworkShareRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteAssessmentFrameworkShare);
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteAssessmentFrameworkShare, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteAssessmentFrameworkShare, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteAssessmentFrameworkShare",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteAssessmentFrameworkShareOutcome>(
    [&]()-> DeleteAssessmentFrameworkShareOutcome {
      return DeleteAssessmentFrameworkShareOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/assessmentFrameworkShareRequests/");
      resolvedEndpoint.AddPathSegment(request.GetRequestId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteAssessmentReportOutcome AuditManagerClient::DeleteAssessmentReport(const DeleteAssessmentReportRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteAssessmentReport);
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteAssessmentReport, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteAssessmentReport, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteAssessmentReport",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteAssessmentReportOutcome>(
    [&]()-> DeleteAssessmentReportOutcome {
      return DeleteAssessmentReportOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/assessments/");
      resolvedEndpoint.AddPathSegment(request.GetAssessmentId());
      resolvedEndpoint.AddPathSegments("/reports/");
      resolvedEndpoint.AddPathSegment(request.GetAssessmentReportId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteControlOutcome AuditManagerClient::DeleteControl(const DeleteControlRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteControl);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteControl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ControlIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteControl", "Required field: ControlId, is not set");
    return DeleteControlOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ControlId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteControl, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteControl, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteControl",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteControlOutcome>(
    [&]()-> DeleteControlOutcome {
      return DeleteControlOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/controls/");
      resolvedEndpoint.AddPathSegment(request.GetControlId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeregisterAccountOutcome AuditManagerClient::DeregisterAccount(const DeregisterAccountRequest& request) const
{
  AWS_OPERATION_GUARD(DeregisterAccount);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeregisterAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeregisterAccount, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeregisterAccount, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeregisterAccount",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeregisterAccountOutcome>(
    [&]()-> DeregisterAccountOutcome {
      return DeregisterAccountOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/account/deregisterAccount");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeregisterOrganizationAdminAccountOutcome AuditManagerClient::DeregisterOrganizationAdminAccount(const DeregisterOrganizationAdminAccountRequest& request) const
{
  AWS_OPERATION_GUARD(DeregisterOrganizationAdminAccount);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeregisterOrganizationAdminAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeregisterOrganizationAdminAccount, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeregisterOrganizationAdminAccount, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeregisterOrganizationAdminAccount",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeregisterOrganizationAdminAccountOutcome>(
    [&]()-> DeregisterOrganizationAdminAccountOutcome {
      return DeregisterOrganizationAdminAccountOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/account/deregisterOrganizationAdminAccount");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DisassociateAssessmentReportEvidenceFolderOutcome AuditManagerClient::DisassociateAssessmentReportEvidenceFolder(const DisassociateAssessmentReportEvidenceFolderRequest& request) const
{
  AWS_OPERATION_GUARD(DisassociateAssessmentReportEvidenceFolder);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateAssessmentReportEvidenceFolder, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssessmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateAssessmentReportEvidenceFolder", "Required field: AssessmentId, is not set");
    return DisassociateAssessmentReportEvidenceFolderOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DisassociateAssessmentReportEvidenceFolder, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DisassociateAssessmentReportEvidenceFolder, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DisassociateAssessmentReportEvidenceFolder",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DisassociateAssessmentReportEvidenceFolderOutcome>(
    [&]()-> DisassociateAssessmentReportEvidenceFolderOutcome {
      return DisassociateAssessmentReportEvidenceFolderOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/assessments/");
      resolvedEndpoint.AddPathSegment(request.GetAssessmentId());
      resolvedEndpoint.AddPathSegments("/disassociateFromAssessmentReport");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetAccountStatusOutcome AuditManagerClient::GetAccountStatus(const GetAccountStatusRequest& request) const
{
  AWS_OPERATION_GUARD(GetAccountStatus);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAccountStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetAccountStatus, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetAccountStatus, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetAccountStatus",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetAccountStatusOutcome>(
    [&]()-> GetAccountStatusOutcome {
      return GetAccountStatusOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/account/status");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetAssessmentOutcome AuditManagerClient::GetAssessment(const GetAssessmentRequest& request) const
{
  AWS_OPERATION_GUARD(GetAssessment);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAssessment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssessmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAssessment", "Required field: AssessmentId, is not set");
    return GetAssessmentOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetAssessment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetAssessment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetAssessment",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetAssessmentOutcome>(
    [&]()-> GetAssessmentOutcome {
      return GetAssessmentOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/assessments/");
      resolvedEndpoint.AddPathSegment(request.GetAssessmentId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetAssessmentFrameworkOutcome AuditManagerClient::GetAssessmentFramework(const GetAssessmentFrameworkRequest& request) const
{
  AWS_OPERATION_GUARD(GetAssessmentFramework);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAssessmentFramework, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FrameworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAssessmentFramework", "Required field: FrameworkId, is not set");
    return GetAssessmentFrameworkOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FrameworkId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetAssessmentFramework, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetAssessmentFramework, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetAssessmentFramework",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetAssessmentFrameworkOutcome>(
    [&]()-> GetAssessmentFrameworkOutcome {
      return GetAssessmentFrameworkOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/assessmentFrameworks/");
      resolvedEndpoint.AddPathSegment(request.GetFrameworkId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetAssessmentReportUrlOutcome AuditManagerClient::GetAssessmentReportUrl(const GetAssessmentReportUrlRequest& request) const
{
  AWS_OPERATION_GUARD(GetAssessmentReportUrl);
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetAssessmentReportUrl, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetAssessmentReportUrl, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetAssessmentReportUrl",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetAssessmentReportUrlOutcome>(
    [&]()-> GetAssessmentReportUrlOutcome {
      return GetAssessmentReportUrlOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/assessments/");
      resolvedEndpoint.AddPathSegment(request.GetAssessmentId());
      resolvedEndpoint.AddPathSegments("/reports/");
      resolvedEndpoint.AddPathSegment(request.GetAssessmentReportId());
      resolvedEndpoint.AddPathSegments("/url");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetChangeLogsOutcome AuditManagerClient::GetChangeLogs(const GetChangeLogsRequest& request) const
{
  AWS_OPERATION_GUARD(GetChangeLogs);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetChangeLogs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssessmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetChangeLogs", "Required field: AssessmentId, is not set");
    return GetChangeLogsOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetChangeLogs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetChangeLogs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetChangeLogs",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetChangeLogsOutcome>(
    [&]()-> GetChangeLogsOutcome {
      return GetChangeLogsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/assessments/");
      resolvedEndpoint.AddPathSegment(request.GetAssessmentId());
      resolvedEndpoint.AddPathSegments("/changelogs");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetControlOutcome AuditManagerClient::GetControl(const GetControlRequest& request) const
{
  AWS_OPERATION_GUARD(GetControl);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetControl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ControlIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetControl", "Required field: ControlId, is not set");
    return GetControlOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ControlId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetControl, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetControl, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetControl",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetControlOutcome>(
    [&]()-> GetControlOutcome {
      return GetControlOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/controls/");
      resolvedEndpoint.AddPathSegment(request.GetControlId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetDelegationsOutcome AuditManagerClient::GetDelegations(const GetDelegationsRequest& request) const
{
  AWS_OPERATION_GUARD(GetDelegations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDelegations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetDelegations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetDelegations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetDelegations",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetDelegationsOutcome>(
    [&]()-> GetDelegationsOutcome {
      return GetDelegationsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/delegations");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetEvidenceOutcome AuditManagerClient::GetEvidence(const GetEvidenceRequest& request) const
{
  AWS_OPERATION_GUARD(GetEvidence);
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetEvidence, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetEvidence, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetEvidence",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetEvidenceOutcome>(
    [&]()-> GetEvidenceOutcome {
      return GetEvidenceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/assessments/");
      resolvedEndpoint.AddPathSegment(request.GetAssessmentId());
      resolvedEndpoint.AddPathSegments("/controlSets/");
      resolvedEndpoint.AddPathSegment(request.GetControlSetId());
      resolvedEndpoint.AddPathSegments("/evidenceFolders/");
      resolvedEndpoint.AddPathSegment(request.GetEvidenceFolderId());
      resolvedEndpoint.AddPathSegments("/evidence/");
      resolvedEndpoint.AddPathSegment(request.GetEvidenceId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetEvidenceByEvidenceFolderOutcome AuditManagerClient::GetEvidenceByEvidenceFolder(const GetEvidenceByEvidenceFolderRequest& request) const
{
  AWS_OPERATION_GUARD(GetEvidenceByEvidenceFolder);
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetEvidenceByEvidenceFolder, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetEvidenceByEvidenceFolder, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetEvidenceByEvidenceFolder",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetEvidenceByEvidenceFolderOutcome>(
    [&]()-> GetEvidenceByEvidenceFolderOutcome {
      return GetEvidenceByEvidenceFolderOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/assessments/");
      resolvedEndpoint.AddPathSegment(request.GetAssessmentId());
      resolvedEndpoint.AddPathSegments("/controlSets/");
      resolvedEndpoint.AddPathSegment(request.GetControlSetId());
      resolvedEndpoint.AddPathSegments("/evidenceFolders/");
      resolvedEndpoint.AddPathSegment(request.GetEvidenceFolderId());
      resolvedEndpoint.AddPathSegments("/evidence");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetEvidenceFileUploadUrlOutcome AuditManagerClient::GetEvidenceFileUploadUrl(const GetEvidenceFileUploadUrlRequest& request) const
{
  AWS_OPERATION_GUARD(GetEvidenceFileUploadUrl);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetEvidenceFileUploadUrl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FileNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetEvidenceFileUploadUrl", "Required field: FileName, is not set");
    return GetEvidenceFileUploadUrlOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FileName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetEvidenceFileUploadUrl, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetEvidenceFileUploadUrl, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetEvidenceFileUploadUrl",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetEvidenceFileUploadUrlOutcome>(
    [&]()-> GetEvidenceFileUploadUrlOutcome {
      return GetEvidenceFileUploadUrlOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/evidenceFileUploadUrl");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetEvidenceFolderOutcome AuditManagerClient::GetEvidenceFolder(const GetEvidenceFolderRequest& request) const
{
  AWS_OPERATION_GUARD(GetEvidenceFolder);
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetEvidenceFolder, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetEvidenceFolder, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetEvidenceFolder",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetEvidenceFolderOutcome>(
    [&]()-> GetEvidenceFolderOutcome {
      return GetEvidenceFolderOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/assessments/");
      resolvedEndpoint.AddPathSegment(request.GetAssessmentId());
      resolvedEndpoint.AddPathSegments("/controlSets/");
      resolvedEndpoint.AddPathSegment(request.GetControlSetId());
      resolvedEndpoint.AddPathSegments("/evidenceFolders/");
      resolvedEndpoint.AddPathSegment(request.GetEvidenceFolderId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetEvidenceFoldersByAssessmentOutcome AuditManagerClient::GetEvidenceFoldersByAssessment(const GetEvidenceFoldersByAssessmentRequest& request) const
{
  AWS_OPERATION_GUARD(GetEvidenceFoldersByAssessment);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetEvidenceFoldersByAssessment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssessmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetEvidenceFoldersByAssessment", "Required field: AssessmentId, is not set");
    return GetEvidenceFoldersByAssessmentOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetEvidenceFoldersByAssessment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetEvidenceFoldersByAssessment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetEvidenceFoldersByAssessment",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetEvidenceFoldersByAssessmentOutcome>(
    [&]()-> GetEvidenceFoldersByAssessmentOutcome {
      return GetEvidenceFoldersByAssessmentOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/assessments/");
      resolvedEndpoint.AddPathSegment(request.GetAssessmentId());
      resolvedEndpoint.AddPathSegments("/evidenceFolders");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetEvidenceFoldersByAssessmentControlOutcome AuditManagerClient::GetEvidenceFoldersByAssessmentControl(const GetEvidenceFoldersByAssessmentControlRequest& request) const
{
  AWS_OPERATION_GUARD(GetEvidenceFoldersByAssessmentControl);
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetEvidenceFoldersByAssessmentControl, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetEvidenceFoldersByAssessmentControl, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetEvidenceFoldersByAssessmentControl",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetEvidenceFoldersByAssessmentControlOutcome>(
    [&]()-> GetEvidenceFoldersByAssessmentControlOutcome {
      return GetEvidenceFoldersByAssessmentControlOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/assessments/");
      resolvedEndpoint.AddPathSegment(request.GetAssessmentId());
      resolvedEndpoint.AddPathSegments("/evidenceFolders-by-assessment-control/");
      resolvedEndpoint.AddPathSegment(request.GetControlSetId());
      resolvedEndpoint.AddPathSegment(request.GetControlId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetInsightsOutcome AuditManagerClient::GetInsights(const GetInsightsRequest& request) const
{
  AWS_OPERATION_GUARD(GetInsights);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetInsights, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetInsights, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetInsights, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetInsights",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetInsightsOutcome>(
    [&]()-> GetInsightsOutcome {
      return GetInsightsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/insights");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetInsightsByAssessmentOutcome AuditManagerClient::GetInsightsByAssessment(const GetInsightsByAssessmentRequest& request) const
{
  AWS_OPERATION_GUARD(GetInsightsByAssessment);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetInsightsByAssessment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssessmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetInsightsByAssessment", "Required field: AssessmentId, is not set");
    return GetInsightsByAssessmentOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetInsightsByAssessment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetInsightsByAssessment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetInsightsByAssessment",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetInsightsByAssessmentOutcome>(
    [&]()-> GetInsightsByAssessmentOutcome {
      return GetInsightsByAssessmentOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/insights/assessments/");
      resolvedEndpoint.AddPathSegment(request.GetAssessmentId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetOrganizationAdminAccountOutcome AuditManagerClient::GetOrganizationAdminAccount(const GetOrganizationAdminAccountRequest& request) const
{
  AWS_OPERATION_GUARD(GetOrganizationAdminAccount);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetOrganizationAdminAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetOrganizationAdminAccount, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetOrganizationAdminAccount, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetOrganizationAdminAccount",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetOrganizationAdminAccountOutcome>(
    [&]()-> GetOrganizationAdminAccountOutcome {
      return GetOrganizationAdminAccountOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/account/organizationAdminAccount");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetServicesInScopeOutcome AuditManagerClient::GetServicesInScope(const GetServicesInScopeRequest& request) const
{
  AWS_OPERATION_GUARD(GetServicesInScope);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetServicesInScope, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetServicesInScope, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetServicesInScope, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetServicesInScope",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetServicesInScopeOutcome>(
    [&]()-> GetServicesInScopeOutcome {
      return GetServicesInScopeOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/services");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetSettingsOutcome AuditManagerClient::GetSettings(const GetSettingsRequest& request) const
{
  AWS_OPERATION_GUARD(GetSettings);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AttributeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSettings", "Required field: Attribute, is not set");
    return GetSettingsOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Attribute]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetSettings, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetSettings, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetSettings",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetSettingsOutcome>(
    [&]()-> GetSettingsOutcome {
      return GetSettingsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/settings/");
      resolvedEndpoint.AddPathSegment(SettingAttributeMapper::GetNameForSettingAttribute(request.GetAttribute()));
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListAssessmentControlInsightsByControlDomainOutcome AuditManagerClient::ListAssessmentControlInsightsByControlDomain(const ListAssessmentControlInsightsByControlDomainRequest& request) const
{
  AWS_OPERATION_GUARD(ListAssessmentControlInsightsByControlDomain);
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListAssessmentControlInsightsByControlDomain, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListAssessmentControlInsightsByControlDomain, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListAssessmentControlInsightsByControlDomain",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListAssessmentControlInsightsByControlDomainOutcome>(
    [&]()-> ListAssessmentControlInsightsByControlDomainOutcome {
      return ListAssessmentControlInsightsByControlDomainOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/insights/controls-by-assessment");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListAssessmentFrameworkShareRequestsOutcome AuditManagerClient::ListAssessmentFrameworkShareRequests(const ListAssessmentFrameworkShareRequestsRequest& request) const
{
  AWS_OPERATION_GUARD(ListAssessmentFrameworkShareRequests);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAssessmentFrameworkShareRequests, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RequestTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAssessmentFrameworkShareRequests", "Required field: RequestType, is not set");
    return ListAssessmentFrameworkShareRequestsOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RequestType]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListAssessmentFrameworkShareRequests, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListAssessmentFrameworkShareRequests, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListAssessmentFrameworkShareRequests",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListAssessmentFrameworkShareRequestsOutcome>(
    [&]()-> ListAssessmentFrameworkShareRequestsOutcome {
      return ListAssessmentFrameworkShareRequestsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/assessmentFrameworkShareRequests");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListAssessmentFrameworksOutcome AuditManagerClient::ListAssessmentFrameworks(const ListAssessmentFrameworksRequest& request) const
{
  AWS_OPERATION_GUARD(ListAssessmentFrameworks);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAssessmentFrameworks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FrameworkTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAssessmentFrameworks", "Required field: FrameworkType, is not set");
    return ListAssessmentFrameworksOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FrameworkType]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListAssessmentFrameworks, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListAssessmentFrameworks, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListAssessmentFrameworks",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListAssessmentFrameworksOutcome>(
    [&]()-> ListAssessmentFrameworksOutcome {
      return ListAssessmentFrameworksOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/assessmentFrameworks");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListAssessmentReportsOutcome AuditManagerClient::ListAssessmentReports(const ListAssessmentReportsRequest& request) const
{
  AWS_OPERATION_GUARD(ListAssessmentReports);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAssessmentReports, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListAssessmentReports, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListAssessmentReports, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListAssessmentReports",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListAssessmentReportsOutcome>(
    [&]()-> ListAssessmentReportsOutcome {
      return ListAssessmentReportsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/assessmentReports");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListAssessmentsOutcome AuditManagerClient::ListAssessments(const ListAssessmentsRequest& request) const
{
  AWS_OPERATION_GUARD(ListAssessments);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAssessments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListAssessments, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListAssessments, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListAssessments",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListAssessmentsOutcome>(
    [&]()-> ListAssessmentsOutcome {
      return ListAssessmentsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/assessments");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListControlDomainInsightsOutcome AuditManagerClient::ListControlDomainInsights(const ListControlDomainInsightsRequest& request) const
{
  AWS_OPERATION_GUARD(ListControlDomainInsights);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListControlDomainInsights, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListControlDomainInsights, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListControlDomainInsights, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListControlDomainInsights",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListControlDomainInsightsOutcome>(
    [&]()-> ListControlDomainInsightsOutcome {
      return ListControlDomainInsightsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/insights/control-domains");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListControlDomainInsightsByAssessmentOutcome AuditManagerClient::ListControlDomainInsightsByAssessment(const ListControlDomainInsightsByAssessmentRequest& request) const
{
  AWS_OPERATION_GUARD(ListControlDomainInsightsByAssessment);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListControlDomainInsightsByAssessment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssessmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListControlDomainInsightsByAssessment", "Required field: AssessmentId, is not set");
    return ListControlDomainInsightsByAssessmentOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListControlDomainInsightsByAssessment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListControlDomainInsightsByAssessment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListControlDomainInsightsByAssessment",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListControlDomainInsightsByAssessmentOutcome>(
    [&]()-> ListControlDomainInsightsByAssessmentOutcome {
      return ListControlDomainInsightsByAssessmentOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/insights/control-domains-by-assessment");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListControlInsightsByControlDomainOutcome AuditManagerClient::ListControlInsightsByControlDomain(const ListControlInsightsByControlDomainRequest& request) const
{
  AWS_OPERATION_GUARD(ListControlInsightsByControlDomain);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListControlInsightsByControlDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ControlDomainIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListControlInsightsByControlDomain", "Required field: ControlDomainId, is not set");
    return ListControlInsightsByControlDomainOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ControlDomainId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListControlInsightsByControlDomain, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListControlInsightsByControlDomain, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListControlInsightsByControlDomain",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListControlInsightsByControlDomainOutcome>(
    [&]()-> ListControlInsightsByControlDomainOutcome {
      return ListControlInsightsByControlDomainOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/insights/controls");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListControlsOutcome AuditManagerClient::ListControls(const ListControlsRequest& request) const
{
  AWS_OPERATION_GUARD(ListControls);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListControls, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ControlTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListControls", "Required field: ControlType, is not set");
    return ListControlsOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ControlType]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListControls, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListControls, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListControls",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListControlsOutcome>(
    [&]()-> ListControlsOutcome {
      return ListControlsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/controls");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListKeywordsForDataSourceOutcome AuditManagerClient::ListKeywordsForDataSource(const ListKeywordsForDataSourceRequest& request) const
{
  AWS_OPERATION_GUARD(ListKeywordsForDataSource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListKeywordsForDataSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SourceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListKeywordsForDataSource", "Required field: Source, is not set");
    return ListKeywordsForDataSourceOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Source]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListKeywordsForDataSource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListKeywordsForDataSource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListKeywordsForDataSource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListKeywordsForDataSourceOutcome>(
    [&]()-> ListKeywordsForDataSourceOutcome {
      return ListKeywordsForDataSourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/dataSourceKeywords");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListNotificationsOutcome AuditManagerClient::ListNotifications(const ListNotificationsRequest& request) const
{
  AWS_OPERATION_GUARD(ListNotifications);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListNotifications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListNotifications, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListNotifications, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListNotifications",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListNotificationsOutcome>(
    [&]()-> ListNotificationsOutcome {
      return ListNotificationsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/notifications");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTagsForResourceOutcome AuditManagerClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_GUARD(ListTagsForResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTagsForResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTagsForResourceOutcome>(
    [&]()-> ListTagsForResourceOutcome {
      return ListTagsForResourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/tags/");
      resolvedEndpoint.AddPathSegment(request.GetResourceArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

RegisterAccountOutcome AuditManagerClient::RegisterAccount(const RegisterAccountRequest& request) const
{
  AWS_OPERATION_GUARD(RegisterAccount);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RegisterAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, RegisterAccount, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, RegisterAccount, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".RegisterAccount",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<RegisterAccountOutcome>(
    [&]()-> RegisterAccountOutcome {
      return RegisterAccountOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/account/registerAccount");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

RegisterOrganizationAdminAccountOutcome AuditManagerClient::RegisterOrganizationAdminAccount(const RegisterOrganizationAdminAccountRequest& request) const
{
  AWS_OPERATION_GUARD(RegisterOrganizationAdminAccount);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RegisterOrganizationAdminAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, RegisterOrganizationAdminAccount, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, RegisterOrganizationAdminAccount, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".RegisterOrganizationAdminAccount",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<RegisterOrganizationAdminAccountOutcome>(
    [&]()-> RegisterOrganizationAdminAccountOutcome {
      return RegisterOrganizationAdminAccountOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/account/registerOrganizationAdminAccount");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartAssessmentFrameworkShareOutcome AuditManagerClient::StartAssessmentFrameworkShare(const StartAssessmentFrameworkShareRequest& request) const
{
  AWS_OPERATION_GUARD(StartAssessmentFrameworkShare);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartAssessmentFrameworkShare, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FrameworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartAssessmentFrameworkShare", "Required field: FrameworkId, is not set");
    return StartAssessmentFrameworkShareOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FrameworkId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, StartAssessmentFrameworkShare, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartAssessmentFrameworkShare, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartAssessmentFrameworkShare",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartAssessmentFrameworkShareOutcome>(
    [&]()-> StartAssessmentFrameworkShareOutcome {
      return StartAssessmentFrameworkShareOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/assessmentFrameworks/");
      resolvedEndpoint.AddPathSegment(request.GetFrameworkId());
      resolvedEndpoint.AddPathSegments("/shareRequests");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TagResourceOutcome AuditManagerClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(TagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".TagResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<TagResourceOutcome>(
    [&]()-> TagResourceOutcome {
      return TagResourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/tags/");
      resolvedEndpoint.AddPathSegment(request.GetResourceArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UntagResourceOutcome AuditManagerClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(UntagResource);
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UntagResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UntagResourceOutcome>(
    [&]()-> UntagResourceOutcome {
      return UntagResourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/tags/");
      resolvedEndpoint.AddPathSegment(request.GetResourceArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateAssessmentOutcome AuditManagerClient::UpdateAssessment(const UpdateAssessmentRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateAssessment);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAssessment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssessmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAssessment", "Required field: AssessmentId, is not set");
    return UpdateAssessmentOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateAssessment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateAssessment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateAssessment",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateAssessmentOutcome>(
    [&]()-> UpdateAssessmentOutcome {
      return UpdateAssessmentOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/assessments/");
      resolvedEndpoint.AddPathSegment(request.GetAssessmentId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateAssessmentControlOutcome AuditManagerClient::UpdateAssessmentControl(const UpdateAssessmentControlRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateAssessmentControl);
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateAssessmentControl, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateAssessmentControl, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateAssessmentControl",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateAssessmentControlOutcome>(
    [&]()-> UpdateAssessmentControlOutcome {
      return UpdateAssessmentControlOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/assessments/");
      resolvedEndpoint.AddPathSegment(request.GetAssessmentId());
      resolvedEndpoint.AddPathSegments("/controlSets/");
      resolvedEndpoint.AddPathSegment(request.GetControlSetId());
      resolvedEndpoint.AddPathSegments("/controls/");
      resolvedEndpoint.AddPathSegment(request.GetControlId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateAssessmentControlSetStatusOutcome AuditManagerClient::UpdateAssessmentControlSetStatus(const UpdateAssessmentControlSetStatusRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateAssessmentControlSetStatus);
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateAssessmentControlSetStatus, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateAssessmentControlSetStatus, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateAssessmentControlSetStatus",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateAssessmentControlSetStatusOutcome>(
    [&]()-> UpdateAssessmentControlSetStatusOutcome {
      return UpdateAssessmentControlSetStatusOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/assessments/");
      resolvedEndpoint.AddPathSegment(request.GetAssessmentId());
      resolvedEndpoint.AddPathSegments("/controlSets/");
      resolvedEndpoint.AddPathSegment(request.GetControlSetId());
      resolvedEndpoint.AddPathSegments("/status");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateAssessmentFrameworkOutcome AuditManagerClient::UpdateAssessmentFramework(const UpdateAssessmentFrameworkRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateAssessmentFramework);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAssessmentFramework, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FrameworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAssessmentFramework", "Required field: FrameworkId, is not set");
    return UpdateAssessmentFrameworkOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FrameworkId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateAssessmentFramework, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateAssessmentFramework, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateAssessmentFramework",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateAssessmentFrameworkOutcome>(
    [&]()-> UpdateAssessmentFrameworkOutcome {
      return UpdateAssessmentFrameworkOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/assessmentFrameworks/");
      resolvedEndpoint.AddPathSegment(request.GetFrameworkId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateAssessmentFrameworkShareOutcome AuditManagerClient::UpdateAssessmentFrameworkShare(const UpdateAssessmentFrameworkShareRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateAssessmentFrameworkShare);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAssessmentFrameworkShare, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RequestIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAssessmentFrameworkShare", "Required field: RequestId, is not set");
    return UpdateAssessmentFrameworkShareOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RequestId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateAssessmentFrameworkShare, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateAssessmentFrameworkShare, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateAssessmentFrameworkShare",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateAssessmentFrameworkShareOutcome>(
    [&]()-> UpdateAssessmentFrameworkShareOutcome {
      return UpdateAssessmentFrameworkShareOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/assessmentFrameworkShareRequests/");
      resolvedEndpoint.AddPathSegment(request.GetRequestId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateAssessmentStatusOutcome AuditManagerClient::UpdateAssessmentStatus(const UpdateAssessmentStatusRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateAssessmentStatus);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAssessmentStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssessmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAssessmentStatus", "Required field: AssessmentId, is not set");
    return UpdateAssessmentStatusOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateAssessmentStatus, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateAssessmentStatus, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateAssessmentStatus",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateAssessmentStatusOutcome>(
    [&]()-> UpdateAssessmentStatusOutcome {
      return UpdateAssessmentStatusOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/assessments/");
      resolvedEndpoint.AddPathSegment(request.GetAssessmentId());
      resolvedEndpoint.AddPathSegments("/status");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateControlOutcome AuditManagerClient::UpdateControl(const UpdateControlRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateControl);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateControl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ControlIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateControl", "Required field: ControlId, is not set");
    return UpdateControlOutcome(Aws::Client::AWSError<AuditManagerErrors>(AuditManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ControlId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateControl, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateControl, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateControl",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateControlOutcome>(
    [&]()-> UpdateControlOutcome {
      return UpdateControlOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/controls/");
      resolvedEndpoint.AddPathSegment(request.GetControlId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateSettingsOutcome AuditManagerClient::UpdateSettings(const UpdateSettingsRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateSettings);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateSettings, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateSettings, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateSettings",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateSettingsOutcome>(
    [&]()-> UpdateSettingsOutcome {
      return UpdateSettingsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/settings");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ValidateAssessmentReportIntegrityOutcome AuditManagerClient::ValidateAssessmentReportIntegrity(const ValidateAssessmentReportIntegrityRequest& request) const
{
  AWS_OPERATION_GUARD(ValidateAssessmentReportIntegrity);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ValidateAssessmentReportIntegrity, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ValidateAssessmentReportIntegrity, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ValidateAssessmentReportIntegrity, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ValidateAssessmentReportIntegrity",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ValidateAssessmentReportIntegrityOutcome>(
    [&]()-> ValidateAssessmentReportIntegrityOutcome {
      return ValidateAssessmentReportIntegrityOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/assessmentReports/integrity");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}


