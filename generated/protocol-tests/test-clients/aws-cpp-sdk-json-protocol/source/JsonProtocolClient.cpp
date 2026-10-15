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
#include <aws/json-protocol/JsonProtocolClient.h>
#include <aws/json-protocol/JsonProtocolEndpointProvider.h>
#include <aws/json-protocol/JsonProtocolErrorMarshaller.h>
#include <aws/json-protocol/model/ContentTypeParametersRequest.h>
#include <aws/json-protocol/model/DatetimeOffsetsRequest.h>
#include <aws/json-protocol/model/EmptyOperationRequest.h>
#include <aws/json-protocol/model/EndpointOperationRequest.h>
#include <aws/json-protocol/model/EndpointWithHostLabelOperationRequest.h>
#include <aws/json-protocol/model/FractionalSecondsRequest.h>
#include <aws/json-protocol/model/GreetingWithErrorsRequest.h>
#include <aws/json-protocol/model/HostWithPathOperationRequest.h>
#include <aws/json-protocol/model/JsonEnumsRequest.h>
#include <aws/json-protocol/model/JsonIntEnumsRequest.h>
#include <aws/json-protocol/model/JsonUnionsRequest.h>
#include <aws/json-protocol/model/KitchenSinkOperationRequest.h>
#include <aws/json-protocol/model/NullOperationRequest.h>
#include <aws/json-protocol/model/OperationWithOptionalInputOutputRequest.h>
#include <aws/json-protocol/model/PutAndGetInlineDocumentsRequest.h>
#include <aws/json-protocol/model/PutWithContentEncodingRequest.h>
#include <aws/json-protocol/model/SimpleScalarPropertiesRequest.h>
#include <aws/json-protocol/model/SparseNullsOperationRequest.h>
#include <smithy/client/schema/ClientProtocol.h>
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::JsonProtocol;
using namespace Aws::JsonProtocol::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace JsonProtocol {
const char ALLOCATION_TAG[] = "JsonProtocolClient";
const char SERVICE_NAME[] = "jsonprotocol";
}  // namespace JsonProtocol
}  // namespace Aws
const char* JsonProtocolClient::GetServiceName() { return SERVICE_NAME; }
const char* JsonProtocolClient::GetAllocationTag() { return ALLOCATION_TAG; }

JsonProtocolClient::JsonProtocolClient(const JsonProtocol::JsonProtocolClientConfiguration& clientConfiguration,
                                       std::shared_ptr<JsonProtocolEndpointProviderBase> endpointProvider)
    : AwsSmithyClientT(clientConfiguration, GetServiceName(), "Json Protocol", Aws::Http::CreateHttpClient(clientConfiguration),
                       Aws::MakeShared<JsonProtocolErrorMarshaller>(ALLOCATION_TAG),
                       endpointProvider ? endpointProvider : Aws::MakeShared<JsonProtocolEndpointProvider>(ALLOCATION_TAG),
                       Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
                           ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
                       {
                           {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
                            smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region,
                                                    clientConfiguration.ResolveCredentialProviderConfig()}},
                       }) {
  SetClientProtocol(Aws::MakeShared<smithy::schema::AwsJson11Protocol>(ALLOCATION_TAG));
}

JsonProtocolClient::JsonProtocolClient(const AWSCredentials& credentials,
                                       std::shared_ptr<JsonProtocolEndpointProviderBase> endpointProvider,
                                       const JsonProtocol::JsonProtocolClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "Json Protocol", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<JsonProtocolErrorMarshaller>(ALLOCATION_TAG),
          endpointProvider ? endpointProvider : Aws::MakeShared<JsonProtocolEndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials),
                                       GetServiceName(), clientConfiguration.region}},
          }) {
  SetClientProtocol(Aws::MakeShared<smithy::schema::AwsJson11Protocol>(ALLOCATION_TAG));
}

JsonProtocolClient::JsonProtocolClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       std::shared_ptr<JsonProtocolEndpointProviderBase> endpointProvider,
                                       const JsonProtocol::JsonProtocolClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "Json Protocol", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<JsonProtocolErrorMarshaller>(ALLOCATION_TAG),
          endpointProvider ? endpointProvider : Aws::MakeShared<JsonProtocolEndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider),
                                       GetServiceName(), clientConfiguration.region}},
          }) {
  SetClientProtocol(Aws::MakeShared<smithy::schema::AwsJson11Protocol>(ALLOCATION_TAG));
}

/* Legacy constructors due deprecation */
JsonProtocolClient::JsonProtocolClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(clientConfiguration, GetServiceName(), "Json Protocol", Aws::Http::CreateHttpClient(clientConfiguration),
                       Aws::MakeShared<JsonProtocolErrorMarshaller>(ALLOCATION_TAG),
                       Aws::MakeShared<JsonProtocolEndpointProvider>(ALLOCATION_TAG),
                       Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
                           ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
                       {
                           {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
                            smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region,
                                                    clientConfiguration.ResolveCredentialProviderConfig()}},
                       }) {
  SetClientProtocol(Aws::MakeShared<smithy::schema::AwsJson11Protocol>(ALLOCATION_TAG));
}

JsonProtocolClient::JsonProtocolClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "Json Protocol", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<JsonProtocolErrorMarshaller>(ALLOCATION_TAG), Aws::MakeShared<JsonProtocolEndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials),
                                       GetServiceName(), clientConfiguration.region}},
          }) {
  SetClientProtocol(Aws::MakeShared<smithy::schema::AwsJson11Protocol>(ALLOCATION_TAG));
}

JsonProtocolClient::JsonProtocolClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       const Aws::Client::ClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "Json Protocol", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<JsonProtocolErrorMarshaller>(ALLOCATION_TAG), Aws::MakeShared<JsonProtocolEndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider),
                                       GetServiceName(), clientConfiguration.region}},
          }) {
  SetClientProtocol(Aws::MakeShared<smithy::schema::AwsJson11Protocol>(ALLOCATION_TAG));
}
/* End of legacy constructors due deprecation */

JsonProtocolClient::~JsonProtocolClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<JsonProtocolEndpointProviderBase>& JsonProtocolClient::accessEndpointProvider() { return m_endpointProvider; }

void JsonProtocolClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
JsonProtocolClient::InvokeOperationOutcome JsonProtocolClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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
ContentTypeParametersOutcome JsonProtocolClient::ContentTypeParameters(const ContentTypeParametersRequest& request) const {
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
DatetimeOffsetsOutcome JsonProtocolClient::DatetimeOffsets(const DatetimeOffsetsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return DatetimeOffsetsOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return DatetimeOffsetsOutcome(
      BuildOperationResult<DatetimeOffsetsResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}
EmptyOperationOutcome JsonProtocolClient::EmptyOperation(const EmptyOperationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return EmptyOperationOutcome(std::move(result.GetError()));
  }
  return EmptyOperationOutcome(result.GetResultWithOwnership());
}
EndpointOperationOutcome JsonProtocolClient::EndpointOperation(const EndpointOperationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return EndpointOperationOutcome(std::move(result.GetError()));
  }
  return EndpointOperationOutcome(result.GetResultWithOwnership());
}
EndpointWithHostLabelOperationOutcome JsonProtocolClient::EndpointWithHostLabelOperation(
    const EndpointWithHostLabelOperationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return EndpointWithHostLabelOperationOutcome(std::move(result.GetError()));
  }
  return EndpointWithHostLabelOperationOutcome(result.GetResultWithOwnership());
}
FractionalSecondsOutcome JsonProtocolClient::FractionalSeconds(const FractionalSecondsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return FractionalSecondsOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return FractionalSecondsOutcome(
      BuildOperationResult<FractionalSecondsResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}
GreetingWithErrorsOutcome JsonProtocolClient::GreetingWithErrors(const GreetingWithErrorsRequest& request) const {
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
HostWithPathOperationOutcome JsonProtocolClient::HostWithPathOperation(const HostWithPathOperationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return HostWithPathOperationOutcome(std::move(result.GetError()));
  }
  return HostWithPathOperationOutcome(result.GetResultWithOwnership());
}
JsonEnumsOutcome JsonProtocolClient::JsonEnums(const JsonEnumsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return JsonEnumsOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return JsonEnumsOutcome(BuildOperationResult<JsonEnumsResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}
JsonIntEnumsOutcome JsonProtocolClient::JsonIntEnums(const JsonIntEnumsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return JsonIntEnumsOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return JsonIntEnumsOutcome(BuildOperationResult<JsonIntEnumsResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}
JsonUnionsOutcome JsonProtocolClient::JsonUnions(const JsonUnionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return JsonUnionsOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return JsonUnionsOutcome(BuildOperationResult<JsonUnionsResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}
KitchenSinkOperationOutcome JsonProtocolClient::KitchenSinkOperation(const KitchenSinkOperationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return KitchenSinkOperationOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return KitchenSinkOperationOutcome(
      BuildOperationResult<KitchenSinkOperationResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}
NullOperationOutcome JsonProtocolClient::NullOperation(const NullOperationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return NullOperationOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return NullOperationOutcome(BuildOperationResult<NullOperationResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}
OperationWithOptionalInputOutputOutcome JsonProtocolClient::OperationWithOptionalInputOutput(
    const OperationWithOptionalInputOutputRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return OperationWithOptionalInputOutputOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return OperationWithOptionalInputOutputOutcome(
      BuildOperationResult<OperationWithOptionalInputOutputResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}
PutAndGetInlineDocumentsOutcome JsonProtocolClient::PutAndGetInlineDocuments(const PutAndGetInlineDocumentsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return PutAndGetInlineDocumentsOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return PutAndGetInlineDocumentsOutcome(
      BuildOperationResult<PutAndGetInlineDocumentsResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}
PutWithContentEncodingOutcome JsonProtocolClient::PutWithContentEncoding(const PutWithContentEncodingRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return PutWithContentEncodingOutcome(std::move(result.GetError()));
  }
  return PutWithContentEncodingOutcome(result.GetResultWithOwnership());
}
SimpleScalarPropertiesOutcome JsonProtocolClient::SimpleScalarProperties(const SimpleScalarPropertiesRequest& request) const {
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
SparseNullsOperationOutcome JsonProtocolClient::SparseNullsOperation(const SparseNullsOperationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return SparseNullsOperationOutcome(std::move(result.GetError()));
  }
  // Client-driven, protocol-agnostic response deserialization when the result is a schema-serde shape
  // and this client owns a ClientProtocol; otherwise the legacy result construction. Selected at
  // compile time (see AwsSmithyClientT::BuildOperationResult / detail::HasSchemaSerdeOutput).
  return SparseNullsOperationOutcome(
      BuildOperationResult<SparseNullsOperationResult>(result.GetResultWithOwnership(), request.GetSchemaSerdeContext()));
}
