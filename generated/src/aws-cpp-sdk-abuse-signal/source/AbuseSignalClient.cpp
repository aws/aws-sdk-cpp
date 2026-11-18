/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/abuse-signal/AbuseSignalClient.h>
#include <aws/abuse-signal/AbuseSignalEndpointProvider.h>
#include <aws/abuse-signal/AbuseSignalErrorMarshaller.h>
#include <aws/abuse-signal/model/CreateAbuseReportRequest.h>
#include <aws/abuse-signal/model/GetAbuseReportStatusRequest.h>
#include <aws/abuse-signal/model/ListAbuseReportStatusesRequest.h>
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
using namespace Aws::AbuseSignal;
using namespace Aws::AbuseSignal::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace AbuseSignal {
const char SERVICE_NAME[] = "abuse";
const char ALLOCATION_TAG[] = "AbuseSignalClient";
}  // namespace AbuseSignal
}  // namespace Aws
const char* AbuseSignalClient::GetServiceName() { return SERVICE_NAME; }
const char* AbuseSignalClient::GetAllocationTag() { return ALLOCATION_TAG; }

AbuseSignalClient::AbuseSignalClient(const AbuseSignal::AbuseSignalClientConfiguration& clientConfiguration,
                                     std::shared_ptr<AbuseSignalEndpointProviderBase> endpointProvider)
    : BASECLASS(
          clientConfiguration,
          Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
              ALLOCATION_TAG,
              Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.ResolveCredentialProviderConfig()),
              SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
          Aws::MakeShared<AbuseSignalErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<AbuseSignalEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AbuseSignalClient::AbuseSignalClient(const AWSCredentials& credentials, std::shared_ptr<AbuseSignalEndpointProviderBase> endpointProvider,
                                     const AbuseSignal::AbuseSignalClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME,
                    Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AbuseSignalErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<AbuseSignalEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AbuseSignalClient::AbuseSignalClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     std::shared_ptr<AbuseSignalEndpointProviderBase> endpointProvider,
                                     const AbuseSignal::AbuseSignalClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                                      Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AbuseSignalErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<AbuseSignalEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
AbuseSignalClient::AbuseSignalClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(
          clientConfiguration,
          Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
              ALLOCATION_TAG,
              Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.ResolveCredentialProviderConfig()),
              SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
          Aws::MakeShared<AbuseSignalErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<AbuseSignalEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AbuseSignalClient::AbuseSignalClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME,
                    Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AbuseSignalErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<AbuseSignalEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AbuseSignalClient::AbuseSignalClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                                      Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AbuseSignalErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<AbuseSignalEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
AbuseSignalClient::~AbuseSignalClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<AbuseSignalEndpointProviderBase>& AbuseSignalClient::accessEndpointProvider() { return m_endpointProvider; }

void AbuseSignalClient::init(const AbuseSignal::AbuseSignalClientConfiguration& config) {
  AWSClient::SetServiceClientName("Abuse Signal");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "abuse");
}

void AbuseSignalClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
AbuseSignalClient::InvokeOperationOutcome AbuseSignalClient::InvokeServiceOperation(
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

  return Aws::Client::AsyncOperationState::MakeCallWithTiming<InvokeOperationOutcome>(
      request, std::move(span),
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
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

CreateAbuseReportOutcome AbuseSignalClient::CreateAbuseReport(const CreateAbuseReportRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/abuse");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAbuseReportOutcome(result.GetResultWithOwnership())
                            : CreateAbuseReportOutcome(std::move(result.GetError()));
}

GetAbuseReportStatusOutcome AbuseSignalClient::GetAbuseReportStatus(const GetAbuseReportStatusRequest& request) const {
  if (!request.ReportIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAbuseReportStatus", "Required field: ReportId, is not set");
    return GetAbuseReportStatusOutcome(Aws::Client::AWSError<AbuseSignalErrors>(AbuseSignalErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ReportId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/abuse/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetReportId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetAbuseReportStatusOutcome(result.GetResultWithOwnership())
                            : GetAbuseReportStatusOutcome(std::move(result.GetError()));
}

ListAbuseReportStatusesOutcome AbuseSignalClient::ListAbuseReportStatuses(const ListAbuseReportStatusesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/abusestatuses");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListAbuseReportStatusesOutcome(result.GetResultWithOwnership())
                            : ListAbuseReportStatusesOutcome(std::move(result.GetError()));
}
