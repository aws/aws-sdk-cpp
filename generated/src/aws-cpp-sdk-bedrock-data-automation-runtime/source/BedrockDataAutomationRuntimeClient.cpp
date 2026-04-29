/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation-runtime/BedrockDataAutomationRuntimeAwsBearerTokenIdentityResolver.h>
#include <aws/bedrock-data-automation-runtime/BedrockDataAutomationRuntimeClient.h>
#include <aws/bedrock-data-automation-runtime/BedrockDataAutomationRuntimeEndpointProvider.h>
#include <aws/bedrock-data-automation-runtime/BedrockDataAutomationRuntimeErrorMarshaller.h>
#include <aws/bedrock-data-automation-runtime/model/GetDataAutomationStatusRequest.h>
#include <aws/bedrock-data-automation-runtime/model/InvokeDataAutomationAsyncRequest.h>
#include <aws/bedrock-data-automation-runtime/model/InvokeDataAutomationRequest.h>
#include <aws/bedrock-data-automation-runtime/model/ListTagsForResourceRequest.h>
#include <aws/bedrock-data-automation-runtime/model/TagResourceRequest.h>
#include <aws/bedrock-data-automation-runtime/model/UntagResourceRequest.h>
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
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::BedrockDataAutomationRuntime;
using namespace Aws::BedrockDataAutomationRuntime::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace BedrockDataAutomationRuntime {
const char ALLOCATION_TAG[] = "BedrockDataAutomationRuntimeClient";
const char SERVICE_NAME[] = "bedrock";
}  // namespace BedrockDataAutomationRuntime
}  // namespace Aws
const char* BedrockDataAutomationRuntimeClient::GetServiceName() { return SERVICE_NAME; }
const char* BedrockDataAutomationRuntimeClient::GetAllocationTag() { return ALLOCATION_TAG; }

BedrockDataAutomationRuntimeClient::BedrockDataAutomationRuntimeClient(
    const BedrockDataAutomationRuntime::BedrockDataAutomationRuntimeClientConfiguration& clientConfiguration,
    std::shared_ptr<BedrockDataAutomationRuntimeEndpointProviderBase> endpointProvider)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "Bedrock Data Automation Runtime", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<BedrockDataAutomationRuntimeErrorMarshaller>(ALLOCATION_TAG),
          endpointProvider ? endpointProvider : Aws::MakeShared<BedrockDataAutomationRuntimeEndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region, clientConfiguration.credentialProviderConfig}},
          }) {}

BedrockDataAutomationRuntimeClient::BedrockDataAutomationRuntimeClient(
    const AWSCredentials& credentials, std::shared_ptr<BedrockDataAutomationRuntimeEndpointProviderBase> endpointProvider,
    const BedrockDataAutomationRuntime::BedrockDataAutomationRuntimeClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "Bedrock Data Automation Runtime", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<BedrockDataAutomationRuntimeErrorMarshaller>(ALLOCATION_TAG),
          endpointProvider ? endpointProvider : Aws::MakeShared<BedrockDataAutomationRuntimeEndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials),
                                       GetServiceName(), clientConfiguration.region}},
          }) {}

BedrockDataAutomationRuntimeClient::BedrockDataAutomationRuntimeClient(
    const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
    std::shared_ptr<BedrockDataAutomationRuntimeEndpointProviderBase> endpointProvider,
    const BedrockDataAutomationRuntime::BedrockDataAutomationRuntimeClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "Bedrock Data Automation Runtime", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<BedrockDataAutomationRuntimeErrorMarshaller>(ALLOCATION_TAG),
          endpointProvider ? endpointProvider : Aws::MakeShared<BedrockDataAutomationRuntimeEndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider),
                                       GetServiceName(), clientConfiguration.region}},
          }) {}

/* Legacy constructors due deprecation */
BedrockDataAutomationRuntimeClient::BedrockDataAutomationRuntimeClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "Bedrock Data Automation Runtime", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<BedrockDataAutomationRuntimeErrorMarshaller>(ALLOCATION_TAG),
          Aws::MakeShared<BedrockDataAutomationRuntimeEndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region, clientConfiguration.credentialProviderConfig}},
          }) {}

BedrockDataAutomationRuntimeClient::BedrockDataAutomationRuntimeClient(const AWSCredentials& credentials,
                                                                       const Aws::Client::ClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "Bedrock Data Automation Runtime", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<BedrockDataAutomationRuntimeErrorMarshaller>(ALLOCATION_TAG),
          Aws::MakeShared<BedrockDataAutomationRuntimeEndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials),
                                       GetServiceName(), clientConfiguration.region}},
          }) {}

BedrockDataAutomationRuntimeClient::BedrockDataAutomationRuntimeClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                                       const Aws::Client::ClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "Bedrock Data Automation Runtime", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<BedrockDataAutomationRuntimeErrorMarshaller>(ALLOCATION_TAG),
          Aws::MakeShared<BedrockDataAutomationRuntimeEndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider),
                                       GetServiceName(), clientConfiguration.region}},
          }) {}
/* End of legacy constructors due deprecation */

BedrockDataAutomationRuntimeClient::~BedrockDataAutomationRuntimeClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<BedrockDataAutomationRuntimeEndpointProviderBase>& BedrockDataAutomationRuntimeClient::accessEndpointProvider() {
  return m_endpointProvider;
}

void BedrockDataAutomationRuntimeClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
BedrockDataAutomationRuntimeClient::InvokeOperationOutcome BedrockDataAutomationRuntimeClient::InvokeServiceOperation(
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
GetDataAutomationStatusOutcome BedrockDataAutomationRuntimeClient::GetDataAutomationStatus(
    const GetDataAutomationStatusRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetDataAutomationStatusOutcome(result.GetResultWithOwnership())
                            : GetDataAutomationStatusOutcome(std::move(result.GetError()));
}
InvokeDataAutomationOutcome BedrockDataAutomationRuntimeClient::InvokeDataAutomation(const InvokeDataAutomationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? InvokeDataAutomationOutcome(result.GetResultWithOwnership())
                            : InvokeDataAutomationOutcome(std::move(result.GetError()));
}
InvokeDataAutomationAsyncOutcome BedrockDataAutomationRuntimeClient::InvokeDataAutomationAsync(
    const InvokeDataAutomationAsyncRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? InvokeDataAutomationAsyncOutcome(result.GetResultWithOwnership())
                            : InvokeDataAutomationAsyncOutcome(std::move(result.GetError()));
}
ListTagsForResourceOutcome BedrockDataAutomationRuntimeClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}
TagResourceOutcome BedrockDataAutomationRuntimeClient::TagResource(const TagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}
UntagResourceOutcome BedrockDataAutomationRuntimeClient::UntagResource(const UntagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}
