/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectscheduling/ConnectSchedulingClient.h>
#include <aws/connectscheduling/ConnectSchedulingEndpointProvider.h>
#include <aws/connectscheduling/ConnectSchedulingErrorMarshaller.h>
#include <aws/connectscheduling/model/ApproveTimeOffRequest.h>
#include <aws/connectscheduling/model/CancelTimeOffRequest.h>
#include <aws/connectscheduling/model/CreateTimeOffRequest.h>
#include <aws/connectscheduling/model/GetTimeOffRequest.h>
#include <aws/connectscheduling/model/PutTimeOffBalanceRequest.h>
#include <aws/connectscheduling/model/RejectTimeOffRequest.h>
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
using namespace Aws::ConnectScheduling;
using namespace Aws::ConnectScheduling::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace ConnectScheduling {
const char SERVICE_NAME[] = "connect";
const char ALLOCATION_TAG[] = "ConnectSchedulingClient";
}  // namespace ConnectScheduling
}  // namespace Aws
const char* ConnectSchedulingClient::GetServiceName() { return SERVICE_NAME; }
const char* ConnectSchedulingClient::GetAllocationTag() { return ALLOCATION_TAG; }

ConnectSchedulingClient::ConnectSchedulingClient(const ConnectScheduling::ConnectSchedulingClientConfiguration& clientConfiguration,
                                                 std::shared_ptr<ConnectSchedulingEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                                 Aws::MakeShared<DefaultAWSCredentialsProviderChain>(
                                                     ALLOCATION_TAG, clientConfiguration.ResolveCredentialProviderConfig()),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ConnectSchedulingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ConnectSchedulingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ConnectSchedulingClient::ConnectSchedulingClient(const AWSCredentials& credentials,
                                                 std::shared_ptr<ConnectSchedulingEndpointProviderBase> endpointProvider,
                                                 const ConnectScheduling::ConnectSchedulingClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ConnectSchedulingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ConnectSchedulingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ConnectSchedulingClient::ConnectSchedulingClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                 std::shared_ptr<ConnectSchedulingEndpointProviderBase> endpointProvider,
                                                 const ConnectScheduling::ConnectSchedulingClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ConnectSchedulingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ConnectSchedulingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
ConnectSchedulingClient::ConnectSchedulingClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                                 Aws::MakeShared<DefaultAWSCredentialsProviderChain>(
                                                     ALLOCATION_TAG, clientConfiguration.ResolveCredentialProviderConfig()),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ConnectSchedulingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ConnectSchedulingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ConnectSchedulingClient::ConnectSchedulingClient(const AWSCredentials& credentials,
                                                 const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ConnectSchedulingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ConnectSchedulingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ConnectSchedulingClient::ConnectSchedulingClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                 const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ConnectSchedulingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ConnectSchedulingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
ConnectSchedulingClient::~ConnectSchedulingClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<ConnectSchedulingEndpointProviderBase>& ConnectSchedulingClient::accessEndpointProvider() { return m_endpointProvider; }

void ConnectSchedulingClient::init(const ConnectScheduling::ConnectSchedulingClientConfiguration& config) {
  AWSClient::SetServiceClientName("ConnectScheduling");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "connect");
}

void ConnectSchedulingClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
ConnectSchedulingClient::InvokeOperationOutcome ConnectSchedulingClient::InvokeServiceOperation(
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

ApproveTimeOffOutcome ConnectSchedulingClient::ApproveTimeOff(const ApproveTimeOffRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ApproveTimeOff", "Required field: InstanceId, is not set");
    return ApproveTimeOffOutcome(Aws::Client::AWSError<ConnectSchedulingErrors>(
        ConnectSchedulingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.UserIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ApproveTimeOff", "Required field: UserId, is not set");
    return ApproveTimeOffOutcome(Aws::Client::AWSError<ConnectSchedulingErrors>(
        ConnectSchedulingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserId]", false));
  }
  if (!request.TimeOffIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ApproveTimeOff", "Required field: TimeOffId, is not set");
    return ApproveTimeOffOutcome(Aws::Client::AWSError<ConnectSchedulingErrors>(
        ConnectSchedulingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TimeOffId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/scheduling/instances/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/timeoffs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTimeOffId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/approve");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ApproveTimeOffOutcome(result.GetResultWithOwnership()) : ApproveTimeOffOutcome(std::move(result.GetError()));
}

CancelTimeOffOutcome ConnectSchedulingClient::CancelTimeOff(const CancelTimeOffRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelTimeOff", "Required field: InstanceId, is not set");
    return CancelTimeOffOutcome(Aws::Client::AWSError<ConnectSchedulingErrors>(
        ConnectSchedulingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.UserIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelTimeOff", "Required field: UserId, is not set");
    return CancelTimeOffOutcome(Aws::Client::AWSError<ConnectSchedulingErrors>(
        ConnectSchedulingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserId]", false));
  }
  if (!request.TimeOffIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelTimeOff", "Required field: TimeOffId, is not set");
    return CancelTimeOffOutcome(Aws::Client::AWSError<ConnectSchedulingErrors>(
        ConnectSchedulingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TimeOffId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/scheduling/instances/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/timeoffs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTimeOffId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/cancel");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CancelTimeOffOutcome(result.GetResultWithOwnership()) : CancelTimeOffOutcome(std::move(result.GetError()));
}

CreateTimeOffOutcome ConnectSchedulingClient::CreateTimeOff(const CreateTimeOffRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateTimeOff", "Required field: InstanceId, is not set");
    return CreateTimeOffOutcome(Aws::Client::AWSError<ConnectSchedulingErrors>(
        ConnectSchedulingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.UserIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateTimeOff", "Required field: UserId, is not set");
    return CreateTimeOffOutcome(Aws::Client::AWSError<ConnectSchedulingErrors>(
        ConnectSchedulingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/scheduling/instances/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/timeoffs");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateTimeOffOutcome(result.GetResultWithOwnership()) : CreateTimeOffOutcome(std::move(result.GetError()));
}

GetTimeOffOutcome ConnectSchedulingClient::GetTimeOff(const GetTimeOffRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTimeOff", "Required field: InstanceId, is not set");
    return GetTimeOffOutcome(Aws::Client::AWSError<ConnectSchedulingErrors>(ConnectSchedulingErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [InstanceId]", false));
  }
  if (!request.UserIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTimeOff", "Required field: UserId, is not set");
    return GetTimeOffOutcome(Aws::Client::AWSError<ConnectSchedulingErrors>(ConnectSchedulingErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [UserId]", false));
  }
  if (!request.TimeOffIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTimeOff", "Required field: TimeOffId, is not set");
    return GetTimeOffOutcome(Aws::Client::AWSError<ConnectSchedulingErrors>(ConnectSchedulingErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [TimeOffId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/scheduling/instances/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/timeoffs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTimeOffId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetTimeOffOutcome(result.GetResultWithOwnership()) : GetTimeOffOutcome(std::move(result.GetError()));
}

PutTimeOffBalanceOutcome ConnectSchedulingClient::PutTimeOffBalance(const PutTimeOffBalanceRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutTimeOffBalance", "Required field: InstanceId, is not set");
    return PutTimeOffBalanceOutcome(Aws::Client::AWSError<ConnectSchedulingErrors>(
        ConnectSchedulingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.UserIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutTimeOffBalance", "Required field: UserId, is not set");
    return PutTimeOffBalanceOutcome(Aws::Client::AWSError<ConnectSchedulingErrors>(
        ConnectSchedulingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserId]", false));
  }
  if (!request.ShiftActivityIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutTimeOffBalance", "Required field: ShiftActivityId, is not set");
    return PutTimeOffBalanceOutcome(Aws::Client::AWSError<ConnectSchedulingErrors>(
        ConnectSchedulingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ShiftActivityId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/scheduling/instances/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/timeoff-balances/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetShiftActivityId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutTimeOffBalanceOutcome(result.GetResultWithOwnership())
                            : PutTimeOffBalanceOutcome(std::move(result.GetError()));
}

RejectTimeOffOutcome ConnectSchedulingClient::RejectTimeOff(const RejectTimeOffRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RejectTimeOff", "Required field: InstanceId, is not set");
    return RejectTimeOffOutcome(Aws::Client::AWSError<ConnectSchedulingErrors>(
        ConnectSchedulingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.UserIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RejectTimeOff", "Required field: UserId, is not set");
    return RejectTimeOffOutcome(Aws::Client::AWSError<ConnectSchedulingErrors>(
        ConnectSchedulingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserId]", false));
  }
  if (!request.TimeOffIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RejectTimeOff", "Required field: TimeOffId, is not set");
    return RejectTimeOffOutcome(Aws::Client::AWSError<ConnectSchedulingErrors>(
        ConnectSchedulingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TimeOffId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/scheduling/instances/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/timeoffs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTimeOffId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/reject");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RejectTimeOffOutcome(result.GetResultWithOwnership()) : RejectTimeOffOutcome(std::move(result.GetError()));
}
