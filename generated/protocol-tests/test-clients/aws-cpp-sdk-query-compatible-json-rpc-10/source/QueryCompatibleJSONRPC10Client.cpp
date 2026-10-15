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
#include <aws/query-compatible-json-rpc-10/QueryCompatibleJSONRPC10Client.h>
#include <aws/query-compatible-json-rpc-10/QueryCompatibleJSONRPC10EndpointProvider.h>
#include <aws/query-compatible-json-rpc-10/QueryCompatibleJSONRPC10ErrorMarshaller.h>
#include <aws/query-compatible-json-rpc-10/model/QueryCompatibleOperationRequest.h>
#include <smithy/client/schema/ClientProtocol.h>
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::QueryCompatibleJSONRPC10;
using namespace Aws::QueryCompatibleJSONRPC10::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace QueryCompatibleJSONRPC10 {
const char ALLOCATION_TAG[] = "QueryCompatibleJSONRPC10Client";
const char SERVICE_NAME[] = "querycompatiblejsonrpc10";
}  // namespace QueryCompatibleJSONRPC10
}  // namespace Aws
const char* QueryCompatibleJSONRPC10Client::GetServiceName() { return SERVICE_NAME; }
const char* QueryCompatibleJSONRPC10Client::GetAllocationTag() { return ALLOCATION_TAG; }

QueryCompatibleJSONRPC10Client::QueryCompatibleJSONRPC10Client(
    const QueryCompatibleJSONRPC10::QueryCompatibleJSONRPC10ClientConfiguration& clientConfiguration,
    std::shared_ptr<QueryCompatibleJSONRPC10EndpointProviderBase> endpointProvider)
    : AwsSmithyClientT(clientConfiguration, GetServiceName(), "Query Compatible JSON RPC 10",
                       Aws::Http::CreateHttpClient(clientConfiguration),
                       Aws::MakeShared<QueryCompatibleJSONRPC10ErrorMarshaller>(ALLOCATION_TAG),
                       endpointProvider ? endpointProvider : Aws::MakeShared<QueryCompatibleJSONRPC10EndpointProvider>(ALLOCATION_TAG),
                       Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
                           ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
                       {
                           {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
                            smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region,
                                                    clientConfiguration.ResolveCredentialProviderConfig()}},
                       }) {
  SetClientProtocol(Aws::MakeShared<smithy::schema::AwsJson10Protocol>(ALLOCATION_TAG));
}

QueryCompatibleJSONRPC10Client::QueryCompatibleJSONRPC10Client(
    const AWSCredentials& credentials, std::shared_ptr<QueryCompatibleJSONRPC10EndpointProviderBase> endpointProvider,
    const QueryCompatibleJSONRPC10::QueryCompatibleJSONRPC10ClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "Query Compatible JSON RPC 10", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<QueryCompatibleJSONRPC10ErrorMarshaller>(ALLOCATION_TAG),
          endpointProvider ? endpointProvider : Aws::MakeShared<QueryCompatibleJSONRPC10EndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials),
                                       GetServiceName(), clientConfiguration.region}},
          }) {
  SetClientProtocol(Aws::MakeShared<smithy::schema::AwsJson10Protocol>(ALLOCATION_TAG));
}

QueryCompatibleJSONRPC10Client::QueryCompatibleJSONRPC10Client(
    const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
    std::shared_ptr<QueryCompatibleJSONRPC10EndpointProviderBase> endpointProvider,
    const QueryCompatibleJSONRPC10::QueryCompatibleJSONRPC10ClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "Query Compatible JSON RPC 10", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<QueryCompatibleJSONRPC10ErrorMarshaller>(ALLOCATION_TAG),
          endpointProvider ? endpointProvider : Aws::MakeShared<QueryCompatibleJSONRPC10EndpointProvider>(ALLOCATION_TAG),
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
QueryCompatibleJSONRPC10Client::QueryCompatibleJSONRPC10Client(const Aws::Client::ClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(clientConfiguration, GetServiceName(), "Query Compatible JSON RPC 10",
                       Aws::Http::CreateHttpClient(clientConfiguration),
                       Aws::MakeShared<QueryCompatibleJSONRPC10ErrorMarshaller>(ALLOCATION_TAG),
                       Aws::MakeShared<QueryCompatibleJSONRPC10EndpointProvider>(ALLOCATION_TAG),
                       Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
                           ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
                       {
                           {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
                            smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region,
                                                    clientConfiguration.ResolveCredentialProviderConfig()}},
                       }) {
  SetClientProtocol(Aws::MakeShared<smithy::schema::AwsJson10Protocol>(ALLOCATION_TAG));
}

QueryCompatibleJSONRPC10Client::QueryCompatibleJSONRPC10Client(const AWSCredentials& credentials,
                                                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "Query Compatible JSON RPC 10", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<QueryCompatibleJSONRPC10ErrorMarshaller>(ALLOCATION_TAG),
          Aws::MakeShared<QueryCompatibleJSONRPC10EndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials),
                                       GetServiceName(), clientConfiguration.region}},
          }) {
  SetClientProtocol(Aws::MakeShared<smithy::schema::AwsJson10Protocol>(ALLOCATION_TAG));
}

QueryCompatibleJSONRPC10Client::QueryCompatibleJSONRPC10Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "Query Compatible JSON RPC 10", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<QueryCompatibleJSONRPC10ErrorMarshaller>(ALLOCATION_TAG),
          Aws::MakeShared<QueryCompatibleJSONRPC10EndpointProvider>(ALLOCATION_TAG),
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

QueryCompatibleJSONRPC10Client::~QueryCompatibleJSONRPC10Client() { ShutdownSdkClient(this, -1); }

std::shared_ptr<QueryCompatibleJSONRPC10EndpointProviderBase>& QueryCompatibleJSONRPC10Client::accessEndpointProvider() {
  return m_endpointProvider;
}

void QueryCompatibleJSONRPC10Client::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
QueryCompatibleJSONRPC10Client::InvokeOperationOutcome QueryCompatibleJSONRPC10Client::InvokeServiceOperation(
    const AmazonWebServiceRequest& request, Aws::Http::HttpMethod httpMethod) const {
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
QueryCompatibleOperationOutcome QueryCompatibleJSONRPC10Client::QueryCompatibleOperation(
    const QueryCompatibleOperationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  if (!result.IsSuccess()) {
    return QueryCompatibleOperationOutcome(std::move(result.GetError()));
  }
  return QueryCompatibleOperationOutcome(result.GetResultWithOwnership());
}
