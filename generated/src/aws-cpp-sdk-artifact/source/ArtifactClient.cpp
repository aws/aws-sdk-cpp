/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/artifact/ArtifactClient.h>
#include <aws/artifact/ArtifactEndpointProvider.h>
#include <aws/artifact/ArtifactErrorMarshaller.h>
#include <aws/artifact/model/GetAccountSettingsRequest.h>
#include <aws/artifact/model/GetReportMetadataRequest.h>
#include <aws/artifact/model/GetReportRequest.h>
#include <aws/artifact/model/GetTermForReportRequest.h>
#include <aws/artifact/model/ListCustomerAgreementsRequest.h>
#include <aws/artifact/model/ListReportVersionsRequest.h>
#include <aws/artifact/model/ListReportsRequest.h>
#include <aws/artifact/model/PutAccountSettingsRequest.h>
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
using namespace Aws::Artifact;
using namespace Aws::Artifact::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace Artifact {
const char SERVICE_NAME[] = "artifact";
const char ALLOCATION_TAG[] = "ArtifactClient";
}  // namespace Artifact
}  // namespace Aws
const char* ArtifactClient::GetServiceName() { return SERVICE_NAME; }
const char* ArtifactClient::GetAllocationTag() { return ALLOCATION_TAG; }

ArtifactClient::ArtifactClient(const Artifact::ArtifactClientConfiguration& clientConfiguration,
                               std::shared_ptr<ArtifactEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ArtifactErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ArtifactEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ArtifactClient::ArtifactClient(const AWSCredentials& credentials, std::shared_ptr<ArtifactEndpointProviderBase> endpointProvider,
                               const Artifact::ArtifactClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ArtifactErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ArtifactEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ArtifactClient::ArtifactClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<ArtifactEndpointProviderBase> endpointProvider,
                               const Artifact::ArtifactClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ArtifactErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ArtifactEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
ArtifactClient::ArtifactClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ArtifactErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ArtifactEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ArtifactClient::ArtifactClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ArtifactErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ArtifactEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ArtifactClient::ArtifactClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ArtifactErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ArtifactEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
ArtifactClient::~ArtifactClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<ArtifactEndpointProviderBase>& ArtifactClient::accessEndpointProvider() { return m_endpointProvider; }

void ArtifactClient::init(const Artifact::ArtifactClientConfiguration& config) {
  AWSClient::SetServiceClientName("Artifact");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "artifact");
}

void ArtifactClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
ArtifactClient::InvokeOperationOutcome ArtifactClient::InvokeServiceOperation(
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

GetAccountSettingsOutcome ArtifactClient::GetAccountSettings(const GetAccountSettingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/account-settings/get");
  };

  return GetAccountSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetReportOutcome ArtifactClient::GetReport(const GetReportRequest& request) const {
  if (!request.ReportIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetReport", "Required field: ReportId, is not set");
    return GetReportOutcome(Aws::Client::AWSError<ArtifactErrors>(ArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [ReportId]", false));
  }
  if (!request.TermTokenHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetReport", "Required field: TermToken, is not set");
    return GetReportOutcome(Aws::Client::AWSError<ArtifactErrors>(ArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [TermToken]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/report/get");
  };

  return GetReportOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetReportMetadataOutcome ArtifactClient::GetReportMetadata(const GetReportMetadataRequest& request) const {
  if (!request.ReportIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetReportMetadata", "Required field: ReportId, is not set");
    return GetReportMetadataOutcome(Aws::Client::AWSError<ArtifactErrors>(ArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ReportId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/report/getMetadata");
  };

  return GetReportMetadataOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetTermForReportOutcome ArtifactClient::GetTermForReport(const GetTermForReportRequest& request) const {
  if (!request.ReportIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTermForReport", "Required field: ReportId, is not set");
    return GetTermForReportOutcome(Aws::Client::AWSError<ArtifactErrors>(ArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ReportId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/report/getTermForReport");
  };

  return GetTermForReportOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListCustomerAgreementsOutcome ArtifactClient::ListCustomerAgreements(const ListCustomerAgreementsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/customer-agreement/list");
  };

  return ListCustomerAgreementsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListReportVersionsOutcome ArtifactClient::ListReportVersions(const ListReportVersionsRequest& request) const {
  if (!request.ReportIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListReportVersions", "Required field: ReportId, is not set");
    return ListReportVersionsOutcome(Aws::Client::AWSError<ArtifactErrors>(ArtifactErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ReportId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/report/listVersions");
  };

  return ListReportVersionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListReportsOutcome ArtifactClient::ListReports(const ListReportsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/report/list");
  };

  return ListReportsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

PutAccountSettingsOutcome ArtifactClient::PutAccountSettings(const PutAccountSettingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/account-settings/put");
  };

  return PutAccountSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}
