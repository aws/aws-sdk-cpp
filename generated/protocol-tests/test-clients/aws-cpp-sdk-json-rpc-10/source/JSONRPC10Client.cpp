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


#include <aws/json-rpc-10/JSONRPC10Client.h>
#include <aws/json-rpc-10/JSONRPC10ErrorMarshaller.h>
#include <aws/json-rpc-10/JSONRPC10EndpointProvider.h>
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
#include <aws/json-rpc-10/model/SimpleScalarPropertiesRequest.h>

#include <smithy/tracing/TracingUtils.h>

#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::JSONRPC10;
using namespace Aws::JSONRPC10::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws
{
  namespace JSONRPC10
  {
    const char ALLOCATION_TAG[] = "JSONRPC10Client";
    const char SERVICE_NAME[] = "jsonrpc10";
  }
}
const char* JSONRPC10Client::GetServiceName() {return SERVICE_NAME;}
const char* JSONRPC10Client::GetAllocationTag() {return ALLOCATION_TAG;}

JSONRPC10Client::JSONRPC10Client(const JSONRPC10::JSONRPC10ClientConfiguration& clientConfiguration,
                           std::shared_ptr<JSONRPC10EndpointProviderBase> endpointProvider) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "JSON RPC 10",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<JSONRPC10ErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<JSONRPC10EndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region}},
        })
{}

JSONRPC10Client::JSONRPC10Client(const AWSCredentials& credentials,
                           std::shared_ptr<JSONRPC10EndpointProviderBase> endpointProvider,
                           const JSONRPC10::JSONRPC10ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "JSON RPC 10",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<JSONRPC10ErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<JSONRPC10EndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}},
        })
{}

JSONRPC10Client::JSONRPC10Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<JSONRPC10EndpointProviderBase> endpointProvider,
                           const JSONRPC10::JSONRPC10ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "JSON RPC 10",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<JSONRPC10ErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<JSONRPC10EndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{ Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}

/* Legacy constructors due deprecation */
JSONRPC10Client::JSONRPC10Client(const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
      GetServiceName(),
      "JSON RPC 10",
      Aws::Http::CreateHttpClient(clientConfiguration),
      Aws::MakeShared<JSONRPC10ErrorMarshaller>(ALLOCATION_TAG),
      Aws::MakeShared<JSONRPC10EndpointProvider>(ALLOCATION_TAG),
      Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
      {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::DefaultAwsCredentialIdentityResolver>(ALLOCATION_TAG), GetServiceName(), clientConfiguration.region}}
      })
{}

JSONRPC10Client::JSONRPC10Client(const AWSCredentials& credentials,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "JSON RPC 10",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<JSONRPC10ErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<JSONRPC10EndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}}
        })
{}

JSONRPC10Client::JSONRPC10Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "JSON RPC 10",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<JSONRPC10ErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<JSONRPC10EndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}
/* End of legacy constructors due deprecation */

JSONRPC10Client::~JSONRPC10Client()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<JSONRPC10EndpointProviderBase>& JSONRPC10Client::accessEndpointProvider()
{
  return m_endpointProvider;
}

void JSONRPC10Client::OverrideEndpoint(const Aws::String& endpoint)
{
    AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
    m_endpointProvider->OverrideEndpoint(endpoint);
}
ContentTypeParametersOutcome JSONRPC10Client::ContentTypeParameters(const ContentTypeParametersRequest& request) const
{
  AWS_OPERATION_GUARD(ContentTypeParameters);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ContentTypeParameters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ContentTypeParameters, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ContentTypeParameters, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ContentTypeParameters",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ContentTypeParametersOutcome>(
    [&]()-> ContentTypeParametersOutcome {
      return ContentTypeParametersOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

EmptyInputAndEmptyOutputOutcome JSONRPC10Client::EmptyInputAndEmptyOutput(const EmptyInputAndEmptyOutputRequest& request) const
{
  AWS_OPERATION_GUARD(EmptyInputAndEmptyOutput);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, EmptyInputAndEmptyOutput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, EmptyInputAndEmptyOutput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, EmptyInputAndEmptyOutput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".EmptyInputAndEmptyOutput",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<EmptyInputAndEmptyOutputOutcome>(
    [&]()-> EmptyInputAndEmptyOutputOutcome {
      return EmptyInputAndEmptyOutputOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

EndpointOperationOutcome JSONRPC10Client::EndpointOperation(const EndpointOperationRequest& request) const
{
  AWS_OPERATION_GUARD(EndpointOperation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, EndpointOperation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, EndpointOperation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, EndpointOperation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".EndpointOperation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<EndpointOperationOutcome>(
    [&]()-> EndpointOperationOutcome {
      return EndpointOperationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

EndpointWithHostLabelOperationOutcome JSONRPC10Client::EndpointWithHostLabelOperation(const EndpointWithHostLabelOperationRequest& request) const
{
  AWS_OPERATION_GUARD(EndpointWithHostLabelOperation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, EndpointWithHostLabelOperation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, EndpointWithHostLabelOperation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, EndpointWithHostLabelOperation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".EndpointWithHostLabelOperation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<EndpointWithHostLabelOperationOutcome>(
    [&]()-> EndpointWithHostLabelOperationOutcome {
      return EndpointWithHostLabelOperationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GreetingWithErrorsOutcome JSONRPC10Client::GreetingWithErrors(const GreetingWithErrorsRequest& request) const
{
  AWS_OPERATION_GUARD(GreetingWithErrors);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GreetingWithErrors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GreetingWithErrors, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GreetingWithErrors, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GreetingWithErrors",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GreetingWithErrorsOutcome>(
    [&]()-> GreetingWithErrorsOutcome {
      return GreetingWithErrorsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

HostWithPathOperationOutcome JSONRPC10Client::HostWithPathOperation(const HostWithPathOperationRequest& request) const
{
  AWS_OPERATION_GUARD(HostWithPathOperation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, HostWithPathOperation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, HostWithPathOperation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, HostWithPathOperation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".HostWithPathOperation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<HostWithPathOperationOutcome>(
    [&]()-> HostWithPathOperationOutcome {
      return HostWithPathOperationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

JsonUnionsOutcome JSONRPC10Client::JsonUnions(const JsonUnionsRequest& request) const
{
  AWS_OPERATION_GUARD(JsonUnions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, JsonUnions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, JsonUnions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, JsonUnions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".JsonUnions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<JsonUnionsOutcome>(
    [&]()-> JsonUnionsOutcome {
      return JsonUnionsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

NoInputAndNoOutputOutcome JSONRPC10Client::NoInputAndNoOutput(const NoInputAndNoOutputRequest& request) const
{
  AWS_OPERATION_GUARD(NoInputAndNoOutput);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, NoInputAndNoOutput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, NoInputAndNoOutput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, NoInputAndNoOutput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".NoInputAndNoOutput",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<NoInputAndNoOutputOutcome>(
    [&]()-> NoInputAndNoOutputOutcome {
      return NoInputAndNoOutputOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

NoInputAndOutputOutcome JSONRPC10Client::NoInputAndOutput(const NoInputAndOutputRequest& request) const
{
  AWS_OPERATION_GUARD(NoInputAndOutput);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, NoInputAndOutput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, NoInputAndOutput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, NoInputAndOutput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".NoInputAndOutput",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<NoInputAndOutputOutcome>(
    [&]()-> NoInputAndOutputOutcome {
      return NoInputAndOutputOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutWithContentEncodingOutcome JSONRPC10Client::PutWithContentEncoding(const PutWithContentEncodingRequest& request) const
{
  AWS_OPERATION_GUARD(PutWithContentEncoding);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutWithContentEncoding, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, PutWithContentEncoding, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutWithContentEncoding, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutWithContentEncoding",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutWithContentEncodingOutcome>(
    [&]()-> PutWithContentEncodingOutcome {
      return PutWithContentEncodingOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SimpleScalarPropertiesOutcome JSONRPC10Client::SimpleScalarProperties(const SimpleScalarPropertiesRequest& request) const
{
  AWS_OPERATION_GUARD(SimpleScalarProperties);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SimpleScalarProperties, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, SimpleScalarProperties, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SimpleScalarProperties, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SimpleScalarProperties",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SimpleScalarPropertiesOutcome>(
    [&]()-> SimpleScalarPropertiesOutcome {
      return SimpleScalarPropertiesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}


