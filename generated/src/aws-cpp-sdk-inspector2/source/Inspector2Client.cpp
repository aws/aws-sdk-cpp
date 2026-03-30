/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

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
#include <aws/inspector2/Inspector2Client.h>
#include <aws/inspector2/Inspector2EndpointProvider.h>
#include <aws/inspector2/Inspector2ErrorMarshaller.h>
#include <aws/inspector2/model/AssociateMemberRequest.h>
#include <aws/inspector2/model/BatchAssociateCodeSecurityScanConfigurationRequest.h>
#include <aws/inspector2/model/BatchDisassociateCodeSecurityScanConfigurationRequest.h>
#include <aws/inspector2/model/BatchGetAccountStatusRequest.h>
#include <aws/inspector2/model/BatchGetCodeSnippetRequest.h>
#include <aws/inspector2/model/BatchGetFindingDetailsRequest.h>
#include <aws/inspector2/model/BatchGetFreeTrialInfoRequest.h>
#include <aws/inspector2/model/BatchGetMemberEc2DeepInspectionStatusRequest.h>
#include <aws/inspector2/model/BatchUpdateMemberEc2DeepInspectionStatusRequest.h>
#include <aws/inspector2/model/CancelFindingsReportRequest.h>
#include <aws/inspector2/model/CancelSbomExportRequest.h>
#include <aws/inspector2/model/CreateCisScanConfigurationRequest.h>
#include <aws/inspector2/model/CreateCodeSecurityIntegrationRequest.h>
#include <aws/inspector2/model/CreateCodeSecurityScanConfigurationRequest.h>
#include <aws/inspector2/model/CreateFilterRequest.h>
#include <aws/inspector2/model/CreateFindingsReportRequest.h>
#include <aws/inspector2/model/CreateSbomExportRequest.h>
#include <aws/inspector2/model/DeleteCisScanConfigurationRequest.h>
#include <aws/inspector2/model/DeleteCodeSecurityIntegrationRequest.h>
#include <aws/inspector2/model/DeleteCodeSecurityScanConfigurationRequest.h>
#include <aws/inspector2/model/DeleteFilterRequest.h>
#include <aws/inspector2/model/DescribeOrganizationConfigurationRequest.h>
#include <aws/inspector2/model/DisableDelegatedAdminAccountRequest.h>
#include <aws/inspector2/model/DisableRequest.h>
#include <aws/inspector2/model/DisassociateMemberRequest.h>
#include <aws/inspector2/model/EnableDelegatedAdminAccountRequest.h>
#include <aws/inspector2/model/EnableRequest.h>
#include <aws/inspector2/model/GetCisScanReportRequest.h>
#include <aws/inspector2/model/GetCisScanResultDetailsRequest.h>
#include <aws/inspector2/model/GetClustersForImageRequest.h>
#include <aws/inspector2/model/GetCodeSecurityIntegrationRequest.h>
#include <aws/inspector2/model/GetCodeSecurityScanConfigurationRequest.h>
#include <aws/inspector2/model/GetCodeSecurityScanRequest.h>
#include <aws/inspector2/model/GetConfigurationRequest.h>
#include <aws/inspector2/model/GetDelegatedAdminAccountRequest.h>
#include <aws/inspector2/model/GetEc2DeepInspectionConfigurationRequest.h>
#include <aws/inspector2/model/GetEncryptionKeyRequest.h>
#include <aws/inspector2/model/GetFindingsReportStatusRequest.h>
#include <aws/inspector2/model/GetMemberRequest.h>
#include <aws/inspector2/model/GetSbomExportRequest.h>
#include <aws/inspector2/model/ListAccountPermissionsRequest.h>
#include <aws/inspector2/model/ListCisScanConfigurationsRequest.h>
#include <aws/inspector2/model/ListCisScanResultsAggregatedByChecksRequest.h>
#include <aws/inspector2/model/ListCisScanResultsAggregatedByTargetResourceRequest.h>
#include <aws/inspector2/model/ListCisScansRequest.h>
#include <aws/inspector2/model/ListCodeSecurityIntegrationsRequest.h>
#include <aws/inspector2/model/ListCodeSecurityScanConfigurationAssociationsRequest.h>
#include <aws/inspector2/model/ListCodeSecurityScanConfigurationsRequest.h>
#include <aws/inspector2/model/ListCoverageRequest.h>
#include <aws/inspector2/model/ListCoverageStatisticsRequest.h>
#include <aws/inspector2/model/ListDelegatedAdminAccountsRequest.h>
#include <aws/inspector2/model/ListFiltersRequest.h>
#include <aws/inspector2/model/ListFindingAggregationsRequest.h>
#include <aws/inspector2/model/ListFindingsRequest.h>
#include <aws/inspector2/model/ListMembersRequest.h>
#include <aws/inspector2/model/ListTagsForResourceRequest.h>
#include <aws/inspector2/model/ListUsageTotalsRequest.h>
#include <aws/inspector2/model/ResetEncryptionKeyRequest.h>
#include <aws/inspector2/model/SearchVulnerabilitiesRequest.h>
#include <aws/inspector2/model/SendCisSessionHealthRequest.h>
#include <aws/inspector2/model/SendCisSessionTelemetryRequest.h>
#include <aws/inspector2/model/StartCisSessionRequest.h>
#include <aws/inspector2/model/StartCodeSecurityScanRequest.h>
#include <aws/inspector2/model/StopCisSessionRequest.h>
#include <aws/inspector2/model/TagResourceRequest.h>
#include <aws/inspector2/model/UntagResourceRequest.h>
#include <aws/inspector2/model/UpdateCisScanConfigurationRequest.h>
#include <aws/inspector2/model/UpdateCodeSecurityIntegrationRequest.h>
#include <aws/inspector2/model/UpdateCodeSecurityScanConfigurationRequest.h>
#include <aws/inspector2/model/UpdateConfigurationRequest.h>
#include <aws/inspector2/model/UpdateEc2DeepInspectionConfigurationRequest.h>
#include <aws/inspector2/model/UpdateEncryptionKeyRequest.h>
#include <aws/inspector2/model/UpdateFilterRequest.h>
#include <aws/inspector2/model/UpdateOrgEc2DeepInspectionConfigurationRequest.h>
#include <aws/inspector2/model/UpdateOrganizationConfigurationRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Inspector2;
using namespace Aws::Inspector2::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace Inspector2 {
const char SERVICE_NAME[] = "inspector2";
const char ALLOCATION_TAG[] = "Inspector2Client";
}  // namespace Inspector2
}  // namespace Aws
const char* Inspector2Client::GetServiceName() { return SERVICE_NAME; }
const char* Inspector2Client::GetAllocationTag() { return ALLOCATION_TAG; }

Inspector2Client::Inspector2Client(const Inspector2::Inspector2ClientConfiguration& clientConfiguration,
                                   std::shared_ptr<Inspector2EndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Inspector2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<Inspector2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

Inspector2Client::Inspector2Client(const AWSCredentials& credentials, std::shared_ptr<Inspector2EndpointProviderBase> endpointProvider,
                                   const Inspector2::Inspector2ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Inspector2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<Inspector2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

Inspector2Client::Inspector2Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   std::shared_ptr<Inspector2EndpointProviderBase> endpointProvider,
                                   const Inspector2::Inspector2ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Inspector2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<Inspector2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
Inspector2Client::Inspector2Client(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Inspector2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<Inspector2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

Inspector2Client::Inspector2Client(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Inspector2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<Inspector2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

Inspector2Client::Inspector2Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Inspector2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<Inspector2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
Inspector2Client::~Inspector2Client() { ShutdownSdkClient(this, -1); }

std::shared_ptr<Inspector2EndpointProviderBase>& Inspector2Client::accessEndpointProvider() { return m_endpointProvider; }

void Inspector2Client::init(const Inspector2::Inspector2ClientConfiguration& config) {
  AWSClient::SetServiceClientName("Inspector2");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "inspector2");
}

void Inspector2Client::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
Inspector2Client::InvokeOperationOutcome Inspector2Client::InvokeServiceOperation(
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

AssociateMemberOutcome Inspector2Client::AssociateMember(const AssociateMemberRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/members/associate");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateMemberOutcome(result.GetResultWithOwnership())
                            : AssociateMemberOutcome(std::move(result.GetError()));
}

BatchAssociateCodeSecurityScanConfigurationOutcome Inspector2Client::BatchAssociateCodeSecurityScanConfiguration(
    const BatchAssociateCodeSecurityScanConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/codesecurity/scan-configuration/batch/associate");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchAssociateCodeSecurityScanConfigurationOutcome(result.GetResultWithOwnership())
                            : BatchAssociateCodeSecurityScanConfigurationOutcome(std::move(result.GetError()));
}

BatchDisassociateCodeSecurityScanConfigurationOutcome Inspector2Client::BatchDisassociateCodeSecurityScanConfiguration(
    const BatchDisassociateCodeSecurityScanConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/codesecurity/scan-configuration/batch/disassociate");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchDisassociateCodeSecurityScanConfigurationOutcome(result.GetResultWithOwnership())
                            : BatchDisassociateCodeSecurityScanConfigurationOutcome(std::move(result.GetError()));
}

BatchGetAccountStatusOutcome Inspector2Client::BatchGetAccountStatus(const BatchGetAccountStatusRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/status/batch/get");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchGetAccountStatusOutcome(result.GetResultWithOwnership())
                            : BatchGetAccountStatusOutcome(std::move(result.GetError()));
}

BatchGetCodeSnippetOutcome Inspector2Client::BatchGetCodeSnippet(const BatchGetCodeSnippetRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/codesnippet/batchget");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchGetCodeSnippetOutcome(result.GetResultWithOwnership())
                            : BatchGetCodeSnippetOutcome(std::move(result.GetError()));
}

BatchGetFindingDetailsOutcome Inspector2Client::BatchGetFindingDetails(const BatchGetFindingDetailsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/findings/details/batch/get");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchGetFindingDetailsOutcome(result.GetResultWithOwnership())
                            : BatchGetFindingDetailsOutcome(std::move(result.GetError()));
}

BatchGetFreeTrialInfoOutcome Inspector2Client::BatchGetFreeTrialInfo(const BatchGetFreeTrialInfoRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/freetrialinfo/batchget");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchGetFreeTrialInfoOutcome(result.GetResultWithOwnership())
                            : BatchGetFreeTrialInfoOutcome(std::move(result.GetError()));
}

BatchGetMemberEc2DeepInspectionStatusOutcome Inspector2Client::BatchGetMemberEc2DeepInspectionStatus(
    const BatchGetMemberEc2DeepInspectionStatusRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ec2deepinspectionstatus/member/batch/get");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchGetMemberEc2DeepInspectionStatusOutcome(result.GetResultWithOwnership())
                            : BatchGetMemberEc2DeepInspectionStatusOutcome(std::move(result.GetError()));
}

BatchUpdateMemberEc2DeepInspectionStatusOutcome Inspector2Client::BatchUpdateMemberEc2DeepInspectionStatus(
    const BatchUpdateMemberEc2DeepInspectionStatusRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ec2deepinspectionstatus/member/batch/update");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchUpdateMemberEc2DeepInspectionStatusOutcome(result.GetResultWithOwnership())
                            : BatchUpdateMemberEc2DeepInspectionStatusOutcome(std::move(result.GetError()));
}

CancelFindingsReportOutcome Inspector2Client::CancelFindingsReport(const CancelFindingsReportRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/reporting/cancel");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CancelFindingsReportOutcome(result.GetResultWithOwnership())
                            : CancelFindingsReportOutcome(std::move(result.GetError()));
}

CancelSbomExportOutcome Inspector2Client::CancelSbomExport(const CancelSbomExportRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sbomexport/cancel");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CancelSbomExportOutcome(result.GetResultWithOwnership())
                            : CancelSbomExportOutcome(std::move(result.GetError()));
}

CreateCisScanConfigurationOutcome Inspector2Client::CreateCisScanConfiguration(const CreateCisScanConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cis/scan-configuration/create");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateCisScanConfigurationOutcome(result.GetResultWithOwnership())
                            : CreateCisScanConfigurationOutcome(std::move(result.GetError()));
}

CreateCodeSecurityIntegrationOutcome Inspector2Client::CreateCodeSecurityIntegration(
    const CreateCodeSecurityIntegrationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/codesecurity/integration/create");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateCodeSecurityIntegrationOutcome(result.GetResultWithOwnership())
                            : CreateCodeSecurityIntegrationOutcome(std::move(result.GetError()));
}

CreateCodeSecurityScanConfigurationOutcome Inspector2Client::CreateCodeSecurityScanConfiguration(
    const CreateCodeSecurityScanConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/codesecurity/scan-configuration/create");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateCodeSecurityScanConfigurationOutcome(result.GetResultWithOwnership())
                            : CreateCodeSecurityScanConfigurationOutcome(std::move(result.GetError()));
}

CreateFilterOutcome Inspector2Client::CreateFilter(const CreateFilterRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/filters/create");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateFilterOutcome(result.GetResultWithOwnership()) : CreateFilterOutcome(std::move(result.GetError()));
}

CreateFindingsReportOutcome Inspector2Client::CreateFindingsReport(const CreateFindingsReportRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/reporting/create");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateFindingsReportOutcome(result.GetResultWithOwnership())
                            : CreateFindingsReportOutcome(std::move(result.GetError()));
}

CreateSbomExportOutcome Inspector2Client::CreateSbomExport(const CreateSbomExportRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sbomexport/create");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateSbomExportOutcome(result.GetResultWithOwnership())
                            : CreateSbomExportOutcome(std::move(result.GetError()));
}

DeleteCisScanConfigurationOutcome Inspector2Client::DeleteCisScanConfiguration(const DeleteCisScanConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cis/scan-configuration/delete");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteCisScanConfigurationOutcome(result.GetResultWithOwnership())
                            : DeleteCisScanConfigurationOutcome(std::move(result.GetError()));
}

DeleteCodeSecurityIntegrationOutcome Inspector2Client::DeleteCodeSecurityIntegration(
    const DeleteCodeSecurityIntegrationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/codesecurity/integration/delete");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteCodeSecurityIntegrationOutcome(result.GetResultWithOwnership())
                            : DeleteCodeSecurityIntegrationOutcome(std::move(result.GetError()));
}

DeleteCodeSecurityScanConfigurationOutcome Inspector2Client::DeleteCodeSecurityScanConfiguration(
    const DeleteCodeSecurityScanConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/codesecurity/scan-configuration/delete");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteCodeSecurityScanConfigurationOutcome(result.GetResultWithOwnership())
                            : DeleteCodeSecurityScanConfigurationOutcome(std::move(result.GetError()));
}

DeleteFilterOutcome Inspector2Client::DeleteFilter(const DeleteFilterRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/filters/delete");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteFilterOutcome(result.GetResultWithOwnership()) : DeleteFilterOutcome(std::move(result.GetError()));
}

DescribeOrganizationConfigurationOutcome Inspector2Client::DescribeOrganizationConfiguration(
    const DescribeOrganizationConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/organizationconfiguration/describe");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeOrganizationConfigurationOutcome(result.GetResultWithOwnership())
                            : DescribeOrganizationConfigurationOutcome(std::move(result.GetError()));
}

DisableOutcome Inspector2Client::Disable(const DisableRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/disable");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisableOutcome(result.GetResultWithOwnership()) : DisableOutcome(std::move(result.GetError()));
}

DisableDelegatedAdminAccountOutcome Inspector2Client::DisableDelegatedAdminAccount(
    const DisableDelegatedAdminAccountRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/delegatedadminaccounts/disable");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisableDelegatedAdminAccountOutcome(result.GetResultWithOwnership())
                            : DisableDelegatedAdminAccountOutcome(std::move(result.GetError()));
}

DisassociateMemberOutcome Inspector2Client::DisassociateMember(const DisassociateMemberRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/members/disassociate");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisassociateMemberOutcome(result.GetResultWithOwnership())
                            : DisassociateMemberOutcome(std::move(result.GetError()));
}

EnableOutcome Inspector2Client::Enable(const EnableRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/enable");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EnableOutcome(result.GetResultWithOwnership()) : EnableOutcome(std::move(result.GetError()));
}

EnableDelegatedAdminAccountOutcome Inspector2Client::EnableDelegatedAdminAccount(const EnableDelegatedAdminAccountRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/delegatedadminaccounts/enable");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EnableDelegatedAdminAccountOutcome(result.GetResultWithOwnership())
                            : EnableDelegatedAdminAccountOutcome(std::move(result.GetError()));
}

GetCisScanReportOutcome Inspector2Client::GetCisScanReport(const GetCisScanReportRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cis/scan/report/get");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetCisScanReportOutcome(result.GetResultWithOwnership())
                            : GetCisScanReportOutcome(std::move(result.GetError()));
}

GetCisScanResultDetailsOutcome Inspector2Client::GetCisScanResultDetails(const GetCisScanResultDetailsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cis/scan-result/details/get");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetCisScanResultDetailsOutcome(result.GetResultWithOwnership())
                            : GetCisScanResultDetailsOutcome(std::move(result.GetError()));
}

GetClustersForImageOutcome Inspector2Client::GetClustersForImage(const GetClustersForImageRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cluster/get");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetClustersForImageOutcome(result.GetResultWithOwnership())
                            : GetClustersForImageOutcome(std::move(result.GetError()));
}

GetCodeSecurityIntegrationOutcome Inspector2Client::GetCodeSecurityIntegration(const GetCodeSecurityIntegrationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/codesecurity/integration/get");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetCodeSecurityIntegrationOutcome(result.GetResultWithOwnership())
                            : GetCodeSecurityIntegrationOutcome(std::move(result.GetError()));
}

GetCodeSecurityScanOutcome Inspector2Client::GetCodeSecurityScan(const GetCodeSecurityScanRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/codesecurity/scan/get");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetCodeSecurityScanOutcome(result.GetResultWithOwnership())
                            : GetCodeSecurityScanOutcome(std::move(result.GetError()));
}

GetCodeSecurityScanConfigurationOutcome Inspector2Client::GetCodeSecurityScanConfiguration(
    const GetCodeSecurityScanConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/codesecurity/scan-configuration/get");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetCodeSecurityScanConfigurationOutcome(result.GetResultWithOwnership())
                            : GetCodeSecurityScanConfigurationOutcome(std::move(result.GetError()));
}

GetConfigurationOutcome Inspector2Client::GetConfiguration(const GetConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/configuration/get");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetConfigurationOutcome(result.GetResultWithOwnership())
                            : GetConfigurationOutcome(std::move(result.GetError()));
}

GetDelegatedAdminAccountOutcome Inspector2Client::GetDelegatedAdminAccount(const GetDelegatedAdminAccountRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/delegatedadminaccounts/get");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetDelegatedAdminAccountOutcome(result.GetResultWithOwnership())
                            : GetDelegatedAdminAccountOutcome(std::move(result.GetError()));
}

GetEc2DeepInspectionConfigurationOutcome Inspector2Client::GetEc2DeepInspectionConfiguration(
    const GetEc2DeepInspectionConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ec2deepinspectionconfiguration/get");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetEc2DeepInspectionConfigurationOutcome(result.GetResultWithOwnership())
                            : GetEc2DeepInspectionConfigurationOutcome(std::move(result.GetError()));
}

GetEncryptionKeyOutcome Inspector2Client::GetEncryptionKey(const GetEncryptionKeyRequest& request) const {
  if (!request.ScanTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEncryptionKey", "Required field: ScanType, is not set");
    return GetEncryptionKeyOutcome(Aws::Client::AWSError<Inspector2Errors>(Inspector2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ScanType]", false));
  }
  if (!request.ResourceTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEncryptionKey", "Required field: ResourceType, is not set");
    return GetEncryptionKeyOutcome(Aws::Client::AWSError<Inspector2Errors>(Inspector2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ResourceType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/encryptionkey/get");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetEncryptionKeyOutcome(result.GetResultWithOwnership())
                            : GetEncryptionKeyOutcome(std::move(result.GetError()));
}

GetFindingsReportStatusOutcome Inspector2Client::GetFindingsReportStatus(const GetFindingsReportStatusRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/reporting/status/get");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetFindingsReportStatusOutcome(result.GetResultWithOwnership())
                            : GetFindingsReportStatusOutcome(std::move(result.GetError()));
}

GetMemberOutcome Inspector2Client::GetMember(const GetMemberRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/members/get");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetMemberOutcome(result.GetResultWithOwnership()) : GetMemberOutcome(std::move(result.GetError()));
}

GetSbomExportOutcome Inspector2Client::GetSbomExport(const GetSbomExportRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sbomexport/get");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetSbomExportOutcome(result.GetResultWithOwnership()) : GetSbomExportOutcome(std::move(result.GetError()));
}

ListAccountPermissionsOutcome Inspector2Client::ListAccountPermissions(const ListAccountPermissionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accountpermissions/list");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAccountPermissionsOutcome(result.GetResultWithOwnership())
                            : ListAccountPermissionsOutcome(std::move(result.GetError()));
}

ListCisScanConfigurationsOutcome Inspector2Client::ListCisScanConfigurations(const ListCisScanConfigurationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cis/scan-configuration/list");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListCisScanConfigurationsOutcome(result.GetResultWithOwnership())
                            : ListCisScanConfigurationsOutcome(std::move(result.GetError()));
}

ListCisScanResultsAggregatedByChecksOutcome Inspector2Client::ListCisScanResultsAggregatedByChecks(
    const ListCisScanResultsAggregatedByChecksRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cis/scan-result/check/list");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListCisScanResultsAggregatedByChecksOutcome(result.GetResultWithOwnership())
                            : ListCisScanResultsAggregatedByChecksOutcome(std::move(result.GetError()));
}

ListCisScanResultsAggregatedByTargetResourceOutcome Inspector2Client::ListCisScanResultsAggregatedByTargetResource(
    const ListCisScanResultsAggregatedByTargetResourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cis/scan-result/resource/list");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListCisScanResultsAggregatedByTargetResourceOutcome(result.GetResultWithOwnership())
                            : ListCisScanResultsAggregatedByTargetResourceOutcome(std::move(result.GetError()));
}

ListCisScansOutcome Inspector2Client::ListCisScans(const ListCisScansRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cis/scan/list");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListCisScansOutcome(result.GetResultWithOwnership()) : ListCisScansOutcome(std::move(result.GetError()));
}

ListCodeSecurityIntegrationsOutcome Inspector2Client::ListCodeSecurityIntegrations(
    const ListCodeSecurityIntegrationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/codesecurity/integration/list");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListCodeSecurityIntegrationsOutcome(result.GetResultWithOwnership())
                            : ListCodeSecurityIntegrationsOutcome(std::move(result.GetError()));
}

ListCodeSecurityScanConfigurationAssociationsOutcome Inspector2Client::ListCodeSecurityScanConfigurationAssociations(
    const ListCodeSecurityScanConfigurationAssociationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/codesecurity/scan-configuration/associations/list");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListCodeSecurityScanConfigurationAssociationsOutcome(result.GetResultWithOwnership())
                            : ListCodeSecurityScanConfigurationAssociationsOutcome(std::move(result.GetError()));
}

ListCodeSecurityScanConfigurationsOutcome Inspector2Client::ListCodeSecurityScanConfigurations(
    const ListCodeSecurityScanConfigurationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/codesecurity/scan-configuration/list");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListCodeSecurityScanConfigurationsOutcome(result.GetResultWithOwnership())
                            : ListCodeSecurityScanConfigurationsOutcome(std::move(result.GetError()));
}

ListCoverageOutcome Inspector2Client::ListCoverage(const ListCoverageRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/coverage/list");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListCoverageOutcome(result.GetResultWithOwnership()) : ListCoverageOutcome(std::move(result.GetError()));
}

ListCoverageStatisticsOutcome Inspector2Client::ListCoverageStatistics(const ListCoverageStatisticsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/coverage/statistics/list");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListCoverageStatisticsOutcome(result.GetResultWithOwnership())
                            : ListCoverageStatisticsOutcome(std::move(result.GetError()));
}

ListDelegatedAdminAccountsOutcome Inspector2Client::ListDelegatedAdminAccounts(const ListDelegatedAdminAccountsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/delegatedadminaccounts/list");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListDelegatedAdminAccountsOutcome(result.GetResultWithOwnership())
                            : ListDelegatedAdminAccountsOutcome(std::move(result.GetError()));
}

ListFiltersOutcome Inspector2Client::ListFilters(const ListFiltersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/filters/list");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListFiltersOutcome(result.GetResultWithOwnership()) : ListFiltersOutcome(std::move(result.GetError()));
}

ListFindingAggregationsOutcome Inspector2Client::ListFindingAggregations(const ListFindingAggregationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/findings/aggregation/list");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListFindingAggregationsOutcome(result.GetResultWithOwnership())
                            : ListFindingAggregationsOutcome(std::move(result.GetError()));
}

ListFindingsOutcome Inspector2Client::ListFindings(const ListFindingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/findings/list");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListFindingsOutcome(result.GetResultWithOwnership()) : ListFindingsOutcome(std::move(result.GetError()));
}

ListMembersOutcome Inspector2Client::ListMembers(const ListMembersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/members/list");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListMembersOutcome(result.GetResultWithOwnership()) : ListMembersOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome Inspector2Client::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<Inspector2Errors>(Inspector2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

ListUsageTotalsOutcome Inspector2Client::ListUsageTotals(const ListUsageTotalsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/usage/list");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListUsageTotalsOutcome(result.GetResultWithOwnership())
                            : ListUsageTotalsOutcome(std::move(result.GetError()));
}

ResetEncryptionKeyOutcome Inspector2Client::ResetEncryptionKey(const ResetEncryptionKeyRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/encryptionkey/reset");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? ResetEncryptionKeyOutcome(result.GetResultWithOwnership())
                            : ResetEncryptionKeyOutcome(std::move(result.GetError()));
}

SearchVulnerabilitiesOutcome Inspector2Client::SearchVulnerabilities(const SearchVulnerabilitiesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/vulnerabilities/search");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SearchVulnerabilitiesOutcome(result.GetResultWithOwnership())
                            : SearchVulnerabilitiesOutcome(std::move(result.GetError()));
}

SendCisSessionHealthOutcome Inspector2Client::SendCisSessionHealth(const SendCisSessionHealthRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cissession/health/send");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? SendCisSessionHealthOutcome(result.GetResultWithOwnership())
                            : SendCisSessionHealthOutcome(std::move(result.GetError()));
}

SendCisSessionTelemetryOutcome Inspector2Client::SendCisSessionTelemetry(const SendCisSessionTelemetryRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cissession/telemetry/send");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? SendCisSessionTelemetryOutcome(result.GetResultWithOwnership())
                            : SendCisSessionTelemetryOutcome(std::move(result.GetError()));
}

StartCisSessionOutcome Inspector2Client::StartCisSession(const StartCisSessionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cissession/start");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? StartCisSessionOutcome(result.GetResultWithOwnership())
                            : StartCisSessionOutcome(std::move(result.GetError()));
}

StartCodeSecurityScanOutcome Inspector2Client::StartCodeSecurityScan(const StartCodeSecurityScanRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/codesecurity/scan/start");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartCodeSecurityScanOutcome(result.GetResultWithOwnership())
                            : StartCodeSecurityScanOutcome(std::move(result.GetError()));
}

StopCisSessionOutcome Inspector2Client::StopCisSession(const StopCisSessionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cissession/stop");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? StopCisSessionOutcome(result.GetResultWithOwnership()) : StopCisSessionOutcome(std::move(result.GetError()));
}

TagResourceOutcome Inspector2Client::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<Inspector2Errors>(Inspector2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome Inspector2Client::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<Inspector2Errors>(Inspector2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<Inspector2Errors>(Inspector2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateCisScanConfigurationOutcome Inspector2Client::UpdateCisScanConfiguration(const UpdateCisScanConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cis/scan-configuration/update");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateCisScanConfigurationOutcome(result.GetResultWithOwnership())
                            : UpdateCisScanConfigurationOutcome(std::move(result.GetError()));
}

UpdateCodeSecurityIntegrationOutcome Inspector2Client::UpdateCodeSecurityIntegration(
    const UpdateCodeSecurityIntegrationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/codesecurity/integration/update");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateCodeSecurityIntegrationOutcome(result.GetResultWithOwnership())
                            : UpdateCodeSecurityIntegrationOutcome(std::move(result.GetError()));
}

UpdateCodeSecurityScanConfigurationOutcome Inspector2Client::UpdateCodeSecurityScanConfiguration(
    const UpdateCodeSecurityScanConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/codesecurity/scan-configuration/update");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateCodeSecurityScanConfigurationOutcome(result.GetResultWithOwnership())
                            : UpdateCodeSecurityScanConfigurationOutcome(std::move(result.GetError()));
}

UpdateConfigurationOutcome Inspector2Client::UpdateConfiguration(const UpdateConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/configuration/update");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateConfigurationOutcome(result.GetResultWithOwnership())
                            : UpdateConfigurationOutcome(std::move(result.GetError()));
}

UpdateEc2DeepInspectionConfigurationOutcome Inspector2Client::UpdateEc2DeepInspectionConfiguration(
    const UpdateEc2DeepInspectionConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ec2deepinspectionconfiguration/update");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateEc2DeepInspectionConfigurationOutcome(result.GetResultWithOwnership())
                            : UpdateEc2DeepInspectionConfigurationOutcome(std::move(result.GetError()));
}

UpdateEncryptionKeyOutcome Inspector2Client::UpdateEncryptionKey(const UpdateEncryptionKeyRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/encryptionkey/update");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateEncryptionKeyOutcome(result.GetResultWithOwnership())
                            : UpdateEncryptionKeyOutcome(std::move(result.GetError()));
}

UpdateFilterOutcome Inspector2Client::UpdateFilter(const UpdateFilterRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/filters/update");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateFilterOutcome(result.GetResultWithOwnership()) : UpdateFilterOutcome(std::move(result.GetError()));
}

UpdateOrgEc2DeepInspectionConfigurationOutcome Inspector2Client::UpdateOrgEc2DeepInspectionConfiguration(
    const UpdateOrgEc2DeepInspectionConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ec2deepinspectionconfiguration/org/update");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateOrgEc2DeepInspectionConfigurationOutcome(result.GetResultWithOwnership())
                            : UpdateOrgEc2DeepInspectionConfigurationOutcome(std::move(result.GetError()));
}

UpdateOrganizationConfigurationOutcome Inspector2Client::UpdateOrganizationConfiguration(
    const UpdateOrganizationConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/organizationconfiguration/update");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateOrganizationConfigurationOutcome(result.GetResultWithOwnership())
                            : UpdateOrganizationConfigurationOutcome(std::move(result.GetError()));
}
