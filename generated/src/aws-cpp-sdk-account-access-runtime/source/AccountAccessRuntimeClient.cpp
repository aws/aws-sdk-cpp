/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/account-access-runtime/AccountAccessRuntimeClient.h>
#include <aws/account-access-runtime/AccountAccessRuntimeEndpointProvider.h>
#include <aws/account-access-runtime/AccountAccessRuntimeErrorMarshaller.h>
#include <aws/account-access-runtime/model/GetRoleCredentialsRequest.h>
#include <aws/account-access-runtime/model/ListRolesRequest.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/auth/signer-provider/BearerTokenAuthSignerProvider.h>
#include <aws/core/auth/signer/AWSAuthBearerSigner.h>
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
using namespace Aws::AccountAccessRuntime;
using namespace Aws::AccountAccessRuntime::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace AccountAccessRuntime {
const char SERVICE_NAME[] = "account-access";
const char ALLOCATION_TAG[] = "AccountAccessRuntimeClient";
}  // namespace AccountAccessRuntime
}  // namespace Aws
const char* AccountAccessRuntimeClient::GetServiceName() { return SERVICE_NAME; }
const char* AccountAccessRuntimeClient::GetAllocationTag() { return ALLOCATION_TAG; }

AccountAccessRuntimeClient::AccountAccessRuntimeClient(
    const Aws::Auth::BearerTokenAuthSignerProvider& bearerTokenProvider,
    std::shared_ptr<AccountAccessRuntimeEndpointProviderBase> endpointProvider,
    const AccountAccessRuntime::AccountAccessRuntimeClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration, Aws::MakeShared<Aws::Auth::BearerTokenAuthSignerProvider>(ALLOCATION_TAG, bearerTokenProvider),
                Aws::MakeShared<AccountAccessRuntimeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),

      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<AccountAccessRuntimeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
AccountAccessRuntimeClient::AccountAccessRuntimeClient(const Aws::Auth::BearerTokenAuthSignerProvider& bearerTokenProvider,
                                                       const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration, Aws::MakeShared<Aws::Auth::BearerTokenAuthSignerProvider>(ALLOCATION_TAG, bearerTokenProvider),
                Aws::MakeShared<AccountAccessRuntimeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<AccountAccessRuntimeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
AccountAccessRuntimeClient::~AccountAccessRuntimeClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<AccountAccessRuntimeEndpointProviderBase>& AccountAccessRuntimeClient::accessEndpointProvider() {
  return m_endpointProvider;
}

void AccountAccessRuntimeClient::init(const AccountAccessRuntime::AccountAccessRuntimeClientConfiguration& config) {
  AWSClient::SetServiceClientName("Account Access Runtime");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "account-access");
}

void AccountAccessRuntimeClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
AccountAccessRuntimeClient::InvokeOperationOutcome AccountAccessRuntimeClient::InvokeServiceOperation(
    const AmazonWebServiceRequest& request, const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
    Aws::Http::HttpMethod httpMethod, const char* signerName) const {
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

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, signerName)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

GetRoleCredentialsOutcome AccountAccessRuntimeClient::GetRoleCredentials(const GetRoleCredentialsRequest& request) const {
  if (!request.TenantIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRoleCredentials", "Required field: TenantId, is not set");
    return GetRoleCredentialsOutcome(Aws::Client::AWSError<AccountAccessRuntimeErrors>(
        AccountAccessRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TenantId]", false));
  }
  if (!request.RoleArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRoleCredentials", "Required field: RoleArn, is not set");
    return GetRoleCredentialsOutcome(Aws::Client::AWSError<AccountAccessRuntimeErrors>(
        AccountAccessRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RoleArn]", false));
  }
  if (!request.AccessTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRoleCredentials", "Required field: AccessType, is not set");
    return GetRoleCredentialsOutcome(Aws::Client::AWSError<AccountAccessRuntimeErrors>(
        AccountAccessRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccessType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/access/credentials");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::BEARER_SIGNER);
  return result.IsSuccess() ? GetRoleCredentialsOutcome(result.GetResultWithOwnership())
                            : GetRoleCredentialsOutcome(std::move(result.GetError()));
}

ListRolesOutcome AccountAccessRuntimeClient::ListRoles(const ListRolesRequest& request) const {
  if (!request.TenantIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListRoles", "Required field: TenantId, is not set");
    return ListRolesOutcome(Aws::Client::AWSError<AccountAccessRuntimeErrors>(
        AccountAccessRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TenantId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/access");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::BEARER_SIGNER);
  return result.IsSuccess() ? ListRolesOutcome(result.GetResultWithOwnership()) : ListRolesOutcome(std::move(result.GetError()));
}
