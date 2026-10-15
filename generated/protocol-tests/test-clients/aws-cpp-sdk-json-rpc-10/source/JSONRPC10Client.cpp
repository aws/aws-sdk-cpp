/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/json-rpc-10/JSONRPC10Client.h>
#include <aws/json-rpc-10/JSONRPC10EndpointProvider.h>
#include <aws/json-rpc-10/JSONRPC10ErrorMarshaller.h>
#include <aws/json-rpc-10/model/ContentTypeParametersRequest.h>
#include <aws/json-rpc-10/model/EmptyInputAndEmptyOutputRequest.h>
#include <aws/json-rpc-10/model/EndpointOperationRequest.h>
#include <aws/json-rpc-10/model/EndpointWithHostLabelOperationRequest.h>
#include <aws/json-rpc-10/model/GreetingWithErrorsRequest.h>
#include <aws/json-rpc-10/model/HostWithPathOperationRequest.h>
#include <aws/json-rpc-10/model/JsonUnionsRequest.h>
#include <aws/json-rpc-10/model/NoInputAndNoOutputRequest.h>
#include <aws/json-rpc-10/model/NoInputAndOutputRequest.h>
#include <aws/json-rpc-10/model/PutWithContentEncodingRequest.h>
#include <aws/json-rpc-10/model/QueryIncompatibleOperationRequest.h>
#include <aws/json-rpc-10/model/SimpleScalarPropertiesRequest.h>
#include <smithy/client/schema/ClientProtocol.h>
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::JSONRPC10;
using namespace Aws::JSONRPC10::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace JSONRPC10 {
const char ALLOCATION_TAG[] = "JSONRPC10Client";
const char SERVICE_NAME[] = "jsonrpc10";
}  // namespace JSONRPC10
}  // namespace Aws
const char* JSONRPC10Client::GetServiceName() { return SERVICE_NAME; }
const char* JSONRPC10Client::GetAllocationTag() { return ALLOCATION_TAG; }

JSONRPC10Client::JSONRPC10Client(const JSONRPC10::JSONRPC10ClientConfiguration& clientConfiguration,
                                 std::shared_ptr<JSONRPC10EndpointProviderBase> endpointProvider)
    : AwsSmithyClientT(clientConfiguration, GetServiceName(), "JSON RPC 10", Aws::Http::CreateHttpClient(clientConfiguration),
                       Aws::MakeShared<JSONRPC10ErrorMarshaller>(ALLOCATION_TAG),
                       endpointProvider ? endpointProvider : Aws::MakeShared<JSONRPC10EndpointProvider>(ALLOCATION_TAG),
                       Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
                           ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
                       {
                           {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
                            smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region,
                                                    clientConfiguration.ResolveCredentialProviderConfig()}},
                       }) {
  SetClientProtocol(Aws::MakeShared<smithy::schema::AwsJson10Protocol>(ALLOCATION_TAG));
}

JSONRPC10Client::JSONRPC10Client(const AWSCredentials& credentials, std::shared_ptr<JSONRPC10EndpointProviderBase> endpointProvider,
                                 const JSONRPC10::JSONRPC10ClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "JSON RPC 10", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<JSONRPC10ErrorMarshaller>(ALLOCATION_TAG),
          endpointProvider ? endpointProvider : Aws::MakeShared<JSONRPC10EndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials),
                                       GetServiceName(), clientConfiguration.region}},
          }) {
  SetClientProtocol(Aws::MakeShared<smithy::schema::AwsJson10Protocol>(ALLOCATION_TAG));
}

JSONRPC10Client::JSONRPC10Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 std::shared_ptr<JSONRPC10EndpointProviderBase> endpointProvider,
                                 const JSONRPC10::JSONRPC10ClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "JSON RPC 10", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<JSONRPC10ErrorMarshaller>(ALLOCATION_TAG),
          endpointProvider ? endpointProvider : Aws::MakeShared<JSONRPC10EndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider),
                                       GetServiceName(), clientConfiguration.region}},
          }) {
  SetClientProtocol(Aws::MakeShared<smithy::schema::AwsJson10Protocol>(ALLOCATION_TAG));
}

/* Legacy constructors due deprecation */
JSONRPC10Client::JSONRPC10Client(const Aws::Client::ClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(clientConfiguration, GetServiceName(), "JSON RPC 10", Aws::Http::CreateHttpClient(clientConfiguration),
                       Aws::MakeShared<JSONRPC10ErrorMarshaller>(ALLOCATION_TAG),
                       Aws::MakeShared<JSONRPC10EndpointProvider>(ALLOCATION_TAG),
                       Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
                           ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
                       {
                           {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
                            smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region,
                                                    clientConfiguration.ResolveCredentialProviderConfig()}},
                       }) {
  SetClientProtocol(Aws::MakeShared<smithy::schema::AwsJson10Protocol>(ALLOCATION_TAG));
}

JSONRPC10Client::JSONRPC10Client(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "JSON RPC 10", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<JSONRPC10ErrorMarshaller>(ALLOCATION_TAG), Aws::MakeShared<JSONRPC10EndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials),
                                       GetServiceName(), clientConfiguration.region}},
          }) {
  SetClientProtocol(Aws::MakeShared<smithy::schema::AwsJson10Protocol>(ALLOCATION_TAG));
}

JSONRPC10Client::JSONRPC10Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 const Aws::Client::ClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "JSON RPC 10", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<JSONRPC10ErrorMarshaller>(ALLOCATION_TAG), Aws::MakeShared<JSONRPC10EndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider),
                                       GetServiceName(), clientConfiguration.region}},
          }) {
  SetClientProtocol(Aws::MakeShared<smithy::schema::AwsJson10Protocol>(ALLOCATION_TAG));
}
/* End of legacy constructors due deprecation */

JSONRPC10Client::~JSONRPC10Client() { ShutdownSdkClient(this, -1); }

std::shared_ptr<JSONRPC10EndpointProviderBase>& JSONRPC10Client::accessEndpointProvider() { return m_endpointProvider; }

void JSONRPC10Client::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
JSONRPC10Client::InvokeOperationOutcome JSONRPC10Client::InvokeServiceOperation(const AmazonWebServiceRequest& request,
                                                                                Aws::Http::HttpMethod httpMethod) const {
  auto operationName = request.GetServiceRequestName();
  auto serviceName = GetServiceClientName();

  AWS_OPERATION_GUARD_DYNAMIC(operationName);

  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_clientConfiguration.telemetryProvider, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(serviceName, {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(serviceName, {});
  AWS_OPERATION_CHECK_PTR_DYNAMIC(meter, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto span = tracer->CreateSpan(Aws::String(serviceName) + "." + operationName,
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);

  return TracingUtils::MakeCallWithTiming<InvokeOperationOutcome>(
      [&]() -> InvokeOperationOutcome {
        auto result =
            MakeRequestDeserialize(&request, operationName, httpMethod,
                                   [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { AWS_UNREFERENCED_PARAM(resolvedEndpoint); });
        return result.IsSuccess() ? InvokeOperationOutcome(result.GetResultWithOwnership())
                                  : InvokeOperationOutcome(std::move(result.GetError()));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}
ContentTypeParametersOutcome JSONRPC10Client::ContentTypeParameters(const ContentTypeParametersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return ContentTypeParametersOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return ContentTypeParametersOutcome(
      BuildOperationResult<ContentTypeParametersResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}
EmptyInputAndEmptyOutputOutcome JSONRPC10Client::EmptyInputAndEmptyOutput(const EmptyInputAndEmptyOutputRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return EmptyInputAndEmptyOutputOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return EmptyInputAndEmptyOutputOutcome(
      BuildOperationResult<EmptyInputAndEmptyOutputResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}
EndpointOperationOutcome JSONRPC10Client::EndpointOperation(const EndpointOperationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return EndpointOperationOutcome(std::move(result.GetError()));
  }
  return EndpointOperationOutcome(result.GetResultWithOwnership());
}
EndpointWithHostLabelOperationOutcome JSONRPC10Client::EndpointWithHostLabelOperation(
    const EndpointWithHostLabelOperationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return EndpointWithHostLabelOperationOutcome(std::move(result.GetError()));
  }
  return EndpointWithHostLabelOperationOutcome(result.GetResultWithOwnership());
}
GreetingWithErrorsOutcome JSONRPC10Client::GreetingWithErrors(const GreetingWithErrorsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return GreetingWithErrorsOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return GreetingWithErrorsOutcome(
      BuildOperationResult<GreetingWithErrorsResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}
HostWithPathOperationOutcome JSONRPC10Client::HostWithPathOperation(const HostWithPathOperationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return HostWithPathOperationOutcome(std::move(result.GetError()));
  }
  return HostWithPathOperationOutcome(result.GetResultWithOwnership());
}
JsonUnionsOutcome JSONRPC10Client::JsonUnions(const JsonUnionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return JsonUnionsOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return JsonUnionsOutcome(BuildOperationResult<JsonUnionsResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}
NoInputAndNoOutputOutcome JSONRPC10Client::NoInputAndNoOutput(const NoInputAndNoOutputRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return NoInputAndNoOutputOutcome(std::move(result.GetError()));
  }
  return NoInputAndNoOutputOutcome(result.GetResultWithOwnership());
}
NoInputAndOutputOutcome JSONRPC10Client::NoInputAndOutput(const NoInputAndOutputRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return NoInputAndOutputOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return NoInputAndOutputOutcome(
      BuildOperationResult<NoInputAndOutputResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}
PutWithContentEncodingOutcome JSONRPC10Client::PutWithContentEncoding(const PutWithContentEncodingRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return PutWithContentEncodingOutcome(std::move(result.GetError()));
  }
  return PutWithContentEncodingOutcome(result.GetResultWithOwnership());
}
QueryIncompatibleOperationOutcome JSONRPC10Client::QueryIncompatibleOperation(const QueryIncompatibleOperationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return QueryIncompatibleOperationOutcome(std::move(result.GetError()));
  }
  return QueryIncompatibleOperationOutcome(result.GetResultWithOwnership());
}
SimpleScalarPropertiesOutcome JSONRPC10Client::SimpleScalarProperties(const SimpleScalarPropertiesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return SimpleScalarPropertiesOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return SimpleScalarPropertiesOutcome(
      BuildOperationResult<SimpleScalarPropertiesResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}
