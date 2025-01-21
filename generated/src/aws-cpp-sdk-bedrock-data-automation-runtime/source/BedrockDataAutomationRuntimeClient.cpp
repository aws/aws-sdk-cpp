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


#include <aws/bedrock-data-automation-runtime/BedrockDataAutomationRuntimeClient.h>
#include <aws/bedrock-data-automation-runtime/BedrockDataAutomationRuntimeErrorMarshaller.h>
#include <aws/bedrock-data-automation-runtime/BedrockDataAutomationRuntimeEndpointProvider.h>
#include <aws/bedrock-data-automation-runtime/model/GetDataAutomationStatusRequest.h>
#include <aws/bedrock-data-automation-runtime/model/InvokeDataAutomationAsyncRequest.h>

#include <smithy/tracing/TracingUtils.h>

#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::BedrockDataAutomationRuntime;
using namespace Aws::BedrockDataAutomationRuntime::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws
{
  namespace BedrockDataAutomationRuntime
  {
    const char ALLOCATION_TAG[] = "BedrockDataAutomationRuntimeClient";
    const char SERVICE_NAME[] = "bedrock";
  }
}
const char* BedrockDataAutomationRuntimeClient::GetServiceName() {return SERVICE_NAME;}
const char* BedrockDataAutomationRuntimeClient::GetAllocationTag() {return ALLOCATION_TAG;}

BedrockDataAutomationRuntimeClient::BedrockDataAutomationRuntimeClient(const BedrockDataAutomationRuntime::BedrockDataAutomationRuntimeClientConfiguration& clientConfiguration,
                           std::shared_ptr<BedrockDataAutomationRuntimeEndpointProviderBase> endpointProvider) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Bedrock Data Automation Runtime",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<BedrockDataAutomationRuntimeErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<BedrockDataAutomationRuntimeEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region}},
        })
{}

BedrockDataAutomationRuntimeClient::BedrockDataAutomationRuntimeClient(const AWSCredentials& credentials,
                           std::shared_ptr<BedrockDataAutomationRuntimeEndpointProviderBase> endpointProvider,
                           const BedrockDataAutomationRuntime::BedrockDataAutomationRuntimeClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Bedrock Data Automation Runtime",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<BedrockDataAutomationRuntimeErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<BedrockDataAutomationRuntimeEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}},
        })
{}

BedrockDataAutomationRuntimeClient::BedrockDataAutomationRuntimeClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<BedrockDataAutomationRuntimeEndpointProviderBase> endpointProvider,
                           const BedrockDataAutomationRuntime::BedrockDataAutomationRuntimeClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Bedrock Data Automation Runtime",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<BedrockDataAutomationRuntimeErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<BedrockDataAutomationRuntimeEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{ Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}

/* Legacy constructors due deprecation */
BedrockDataAutomationRuntimeClient::BedrockDataAutomationRuntimeClient(const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
      GetServiceName(),
      "Bedrock Data Automation Runtime",
      Aws::Http::CreateHttpClient(clientConfiguration),
      Aws::MakeShared<BedrockDataAutomationRuntimeErrorMarshaller>(ALLOCATION_TAG),
      Aws::MakeShared<BedrockDataAutomationRuntimeEndpointProvider>(ALLOCATION_TAG),
      Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
      {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::DefaultAwsCredentialIdentityResolver>(ALLOCATION_TAG), GetServiceName(), clientConfiguration.region}}
      })
{}

BedrockDataAutomationRuntimeClient::BedrockDataAutomationRuntimeClient(const AWSCredentials& credentials,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Bedrock Data Automation Runtime",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<BedrockDataAutomationRuntimeErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<BedrockDataAutomationRuntimeEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}}
        })
{}

BedrockDataAutomationRuntimeClient::BedrockDataAutomationRuntimeClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Bedrock Data Automation Runtime",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<BedrockDataAutomationRuntimeErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<BedrockDataAutomationRuntimeEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}
/* End of legacy constructors due deprecation */

BedrockDataAutomationRuntimeClient::~BedrockDataAutomationRuntimeClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<BedrockDataAutomationRuntimeEndpointProviderBase>& BedrockDataAutomationRuntimeClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void BedrockDataAutomationRuntimeClient::OverrideEndpoint(const Aws::String& endpoint)
{
    AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
    m_endpointProvider->OverrideEndpoint(endpoint);
}
GetDataAutomationStatusOutcome BedrockDataAutomationRuntimeClient::GetDataAutomationStatus(const GetDataAutomationStatusRequest& request) const
{
  AWS_OPERATION_GUARD(GetDataAutomationStatus);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDataAutomationStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetDataAutomationStatus, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetDataAutomationStatus, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetDataAutomationStatus",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetDataAutomationStatusOutcome>(
    [&]()-> GetDataAutomationStatusOutcome {
      return GetDataAutomationStatusOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

InvokeDataAutomationAsyncOutcome BedrockDataAutomationRuntimeClient::InvokeDataAutomationAsync(const InvokeDataAutomationAsyncRequest& request) const
{
  AWS_OPERATION_GUARD(InvokeDataAutomationAsync);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, InvokeDataAutomationAsync, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, InvokeDataAutomationAsync, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, InvokeDataAutomationAsync, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".InvokeDataAutomationAsync",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<InvokeDataAutomationAsyncOutcome>(
    [&]()-> InvokeDataAutomationAsyncOutcome {
      return InvokeDataAutomationAsyncOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}


