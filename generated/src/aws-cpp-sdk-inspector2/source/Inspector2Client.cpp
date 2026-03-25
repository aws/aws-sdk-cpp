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

  return AssociateMemberOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchAssociateCodeSecurityScanConfigurationOutcome Inspector2Client::BatchAssociateCodeSecurityScanConfiguration(
    const BatchAssociateCodeSecurityScanConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/codesecurity/scan-configuration/batch/associate");
  };

  return BatchAssociateCodeSecurityScanConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchDisassociateCodeSecurityScanConfigurationOutcome Inspector2Client::BatchDisassociateCodeSecurityScanConfiguration(
    const BatchDisassociateCodeSecurityScanConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/codesecurity/scan-configuration/batch/disassociate");
  };

  return BatchDisassociateCodeSecurityScanConfigurationOutcome{
      InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchGetAccountStatusOutcome Inspector2Client::BatchGetAccountStatus(const BatchGetAccountStatusRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/status/batch/get");
  };

  return BatchGetAccountStatusOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchGetCodeSnippetOutcome Inspector2Client::BatchGetCodeSnippet(const BatchGetCodeSnippetRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/codesnippet/batchget");
  };

  return BatchGetCodeSnippetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchGetFindingDetailsOutcome Inspector2Client::BatchGetFindingDetails(const BatchGetFindingDetailsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/findings/details/batch/get");
  };

  return BatchGetFindingDetailsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchGetFreeTrialInfoOutcome Inspector2Client::BatchGetFreeTrialInfo(const BatchGetFreeTrialInfoRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/freetrialinfo/batchget");
  };

  return BatchGetFreeTrialInfoOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchGetMemberEc2DeepInspectionStatusOutcome Inspector2Client::BatchGetMemberEc2DeepInspectionStatus(
    const BatchGetMemberEc2DeepInspectionStatusRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ec2deepinspectionstatus/member/batch/get");
  };

  return BatchGetMemberEc2DeepInspectionStatusOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchUpdateMemberEc2DeepInspectionStatusOutcome Inspector2Client::BatchUpdateMemberEc2DeepInspectionStatus(
    const BatchUpdateMemberEc2DeepInspectionStatusRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ec2deepinspectionstatus/member/batch/update");
  };

  return BatchUpdateMemberEc2DeepInspectionStatusOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CancelFindingsReportOutcome Inspector2Client::CancelFindingsReport(const CancelFindingsReportRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/reporting/cancel");
  };

  return CancelFindingsReportOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CancelSbomExportOutcome Inspector2Client::CancelSbomExport(const CancelSbomExportRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sbomexport/cancel");
  };

  return CancelSbomExportOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateCisScanConfigurationOutcome Inspector2Client::CreateCisScanConfiguration(const CreateCisScanConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cis/scan-configuration/create");
  };

  return CreateCisScanConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateCodeSecurityIntegrationOutcome Inspector2Client::CreateCodeSecurityIntegration(
    const CreateCodeSecurityIntegrationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/codesecurity/integration/create");
  };

  return CreateCodeSecurityIntegrationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateCodeSecurityScanConfigurationOutcome Inspector2Client::CreateCodeSecurityScanConfiguration(
    const CreateCodeSecurityScanConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/codesecurity/scan-configuration/create");
  };

  return CreateCodeSecurityScanConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateFilterOutcome Inspector2Client::CreateFilter(const CreateFilterRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/filters/create");
  };

  return CreateFilterOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateFindingsReportOutcome Inspector2Client::CreateFindingsReport(const CreateFindingsReportRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/reporting/create");
  };

  return CreateFindingsReportOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateSbomExportOutcome Inspector2Client::CreateSbomExport(const CreateSbomExportRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sbomexport/create");
  };

  return CreateSbomExportOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteCisScanConfigurationOutcome Inspector2Client::DeleteCisScanConfiguration(const DeleteCisScanConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cis/scan-configuration/delete");
  };

  return DeleteCisScanConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteCodeSecurityIntegrationOutcome Inspector2Client::DeleteCodeSecurityIntegration(
    const DeleteCodeSecurityIntegrationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/codesecurity/integration/delete");
  };

  return DeleteCodeSecurityIntegrationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteCodeSecurityScanConfigurationOutcome Inspector2Client::DeleteCodeSecurityScanConfiguration(
    const DeleteCodeSecurityScanConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/codesecurity/scan-configuration/delete");
  };

  return DeleteCodeSecurityScanConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteFilterOutcome Inspector2Client::DeleteFilter(const DeleteFilterRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/filters/delete");
  };

  return DeleteFilterOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeOrganizationConfigurationOutcome Inspector2Client::DescribeOrganizationConfiguration(
    const DescribeOrganizationConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/organizationconfiguration/describe");
  };

  return DescribeOrganizationConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DisableOutcome Inspector2Client::Disable(const DisableRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/disable");
  };

  return DisableOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DisableDelegatedAdminAccountOutcome Inspector2Client::DisableDelegatedAdminAccount(
    const DisableDelegatedAdminAccountRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/delegatedadminaccounts/disable");
  };

  return DisableDelegatedAdminAccountOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateMemberOutcome Inspector2Client::DisassociateMember(const DisassociateMemberRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/members/disassociate");
  };

  return DisassociateMemberOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

EnableOutcome Inspector2Client::Enable(const EnableRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/enable");
  };

  return EnableOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

EnableDelegatedAdminAccountOutcome Inspector2Client::EnableDelegatedAdminAccount(const EnableDelegatedAdminAccountRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/delegatedadminaccounts/enable");
  };

  return EnableDelegatedAdminAccountOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetCisScanReportOutcome Inspector2Client::GetCisScanReport(const GetCisScanReportRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cis/scan/report/get");
  };

  return GetCisScanReportOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetCisScanResultDetailsOutcome Inspector2Client::GetCisScanResultDetails(const GetCisScanResultDetailsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cis/scan-result/details/get");
  };

  return GetCisScanResultDetailsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetClustersForImageOutcome Inspector2Client::GetClustersForImage(const GetClustersForImageRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cluster/get");
  };

  return GetClustersForImageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetCodeSecurityIntegrationOutcome Inspector2Client::GetCodeSecurityIntegration(const GetCodeSecurityIntegrationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/codesecurity/integration/get");
  };

  return GetCodeSecurityIntegrationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetCodeSecurityScanOutcome Inspector2Client::GetCodeSecurityScan(const GetCodeSecurityScanRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/codesecurity/scan/get");
  };

  return GetCodeSecurityScanOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetCodeSecurityScanConfigurationOutcome Inspector2Client::GetCodeSecurityScanConfiguration(
    const GetCodeSecurityScanConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/codesecurity/scan-configuration/get");
  };

  return GetCodeSecurityScanConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetConfigurationOutcome Inspector2Client::GetConfiguration(const GetConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/configuration/get");
  };

  return GetConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDelegatedAdminAccountOutcome Inspector2Client::GetDelegatedAdminAccount(const GetDelegatedAdminAccountRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/delegatedadminaccounts/get");
  };

  return GetDelegatedAdminAccountOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetEc2DeepInspectionConfigurationOutcome Inspector2Client::GetEc2DeepInspectionConfiguration(
    const GetEc2DeepInspectionConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ec2deepinspectionconfiguration/get");
  };

  return GetEc2DeepInspectionConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return GetEncryptionKeyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetFindingsReportStatusOutcome Inspector2Client::GetFindingsReportStatus(const GetFindingsReportStatusRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/reporting/status/get");
  };

  return GetFindingsReportStatusOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetMemberOutcome Inspector2Client::GetMember(const GetMemberRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/members/get");
  };

  return GetMemberOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetSbomExportOutcome Inspector2Client::GetSbomExport(const GetSbomExportRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sbomexport/get");
  };

  return GetSbomExportOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAccountPermissionsOutcome Inspector2Client::ListAccountPermissions(const ListAccountPermissionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accountpermissions/list");
  };

  return ListAccountPermissionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListCisScanConfigurationsOutcome Inspector2Client::ListCisScanConfigurations(const ListCisScanConfigurationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cis/scan-configuration/list");
  };

  return ListCisScanConfigurationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListCisScanResultsAggregatedByChecksOutcome Inspector2Client::ListCisScanResultsAggregatedByChecks(
    const ListCisScanResultsAggregatedByChecksRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cis/scan-result/check/list");
  };

  return ListCisScanResultsAggregatedByChecksOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListCisScanResultsAggregatedByTargetResourceOutcome Inspector2Client::ListCisScanResultsAggregatedByTargetResource(
    const ListCisScanResultsAggregatedByTargetResourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cis/scan-result/resource/list");
  };

  return ListCisScanResultsAggregatedByTargetResourceOutcome{
      InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListCisScansOutcome Inspector2Client::ListCisScans(const ListCisScansRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cis/scan/list");
  };

  return ListCisScansOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListCodeSecurityIntegrationsOutcome Inspector2Client::ListCodeSecurityIntegrations(
    const ListCodeSecurityIntegrationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/codesecurity/integration/list");
  };

  return ListCodeSecurityIntegrationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListCodeSecurityScanConfigurationAssociationsOutcome Inspector2Client::ListCodeSecurityScanConfigurationAssociations(
    const ListCodeSecurityScanConfigurationAssociationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/codesecurity/scan-configuration/associations/list");
  };

  return ListCodeSecurityScanConfigurationAssociationsOutcome{
      InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListCodeSecurityScanConfigurationsOutcome Inspector2Client::ListCodeSecurityScanConfigurations(
    const ListCodeSecurityScanConfigurationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/codesecurity/scan-configuration/list");
  };

  return ListCodeSecurityScanConfigurationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListCoverageOutcome Inspector2Client::ListCoverage(const ListCoverageRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/coverage/list");
  };

  return ListCoverageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListCoverageStatisticsOutcome Inspector2Client::ListCoverageStatistics(const ListCoverageStatisticsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/coverage/statistics/list");
  };

  return ListCoverageStatisticsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDelegatedAdminAccountsOutcome Inspector2Client::ListDelegatedAdminAccounts(const ListDelegatedAdminAccountsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/delegatedadminaccounts/list");
  };

  return ListDelegatedAdminAccountsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListFiltersOutcome Inspector2Client::ListFilters(const ListFiltersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/filters/list");
  };

  return ListFiltersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListFindingAggregationsOutcome Inspector2Client::ListFindingAggregations(const ListFindingAggregationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/findings/aggregation/list");
  };

  return ListFindingAggregationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListFindingsOutcome Inspector2Client::ListFindings(const ListFindingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/findings/list");
  };

  return ListFindingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListMembersOutcome Inspector2Client::ListMembers(const ListMembersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/members/list");
  };

  return ListMembersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListUsageTotalsOutcome Inspector2Client::ListUsageTotals(const ListUsageTotalsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/usage/list");
  };

  return ListUsageTotalsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ResetEncryptionKeyOutcome Inspector2Client::ResetEncryptionKey(const ResetEncryptionKeyRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/encryptionkey/reset");
  };

  return ResetEncryptionKeyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

SearchVulnerabilitiesOutcome Inspector2Client::SearchVulnerabilities(const SearchVulnerabilitiesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/vulnerabilities/search");
  };

  return SearchVulnerabilitiesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SendCisSessionHealthOutcome Inspector2Client::SendCisSessionHealth(const SendCisSessionHealthRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cissession/health/send");
  };

  return SendCisSessionHealthOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

SendCisSessionTelemetryOutcome Inspector2Client::SendCisSessionTelemetry(const SendCisSessionTelemetryRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cissession/telemetry/send");
  };

  return SendCisSessionTelemetryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

StartCisSessionOutcome Inspector2Client::StartCisSession(const StartCisSessionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cissession/start");
  };

  return StartCisSessionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

StartCodeSecurityScanOutcome Inspector2Client::StartCodeSecurityScan(const StartCodeSecurityScanRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/codesecurity/scan/start");
  };

  return StartCodeSecurityScanOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StopCisSessionOutcome Inspector2Client::StopCisSession(const StopCisSessionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cissession/stop");
  };

  return StopCisSessionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

UpdateCisScanConfigurationOutcome Inspector2Client::UpdateCisScanConfiguration(const UpdateCisScanConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cis/scan-configuration/update");
  };

  return UpdateCisScanConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateCodeSecurityIntegrationOutcome Inspector2Client::UpdateCodeSecurityIntegration(
    const UpdateCodeSecurityIntegrationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/codesecurity/integration/update");
  };

  return UpdateCodeSecurityIntegrationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateCodeSecurityScanConfigurationOutcome Inspector2Client::UpdateCodeSecurityScanConfiguration(
    const UpdateCodeSecurityScanConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/codesecurity/scan-configuration/update");
  };

  return UpdateCodeSecurityScanConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateConfigurationOutcome Inspector2Client::UpdateConfiguration(const UpdateConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/configuration/update");
  };

  return UpdateConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateEc2DeepInspectionConfigurationOutcome Inspector2Client::UpdateEc2DeepInspectionConfiguration(
    const UpdateEc2DeepInspectionConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ec2deepinspectionconfiguration/update");
  };

  return UpdateEc2DeepInspectionConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateEncryptionKeyOutcome Inspector2Client::UpdateEncryptionKey(const UpdateEncryptionKeyRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/encryptionkey/update");
  };

  return UpdateEncryptionKeyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateFilterOutcome Inspector2Client::UpdateFilter(const UpdateFilterRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/filters/update");
  };

  return UpdateFilterOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateOrgEc2DeepInspectionConfigurationOutcome Inspector2Client::UpdateOrgEc2DeepInspectionConfiguration(
    const UpdateOrgEc2DeepInspectionConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ec2deepinspectionconfiguration/org/update");
  };

  return UpdateOrgEc2DeepInspectionConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateOrganizationConfigurationOutcome Inspector2Client::UpdateOrganizationConfiguration(
    const UpdateOrganizationConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/organizationconfiguration/update");
  };

  return UpdateOrganizationConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}
