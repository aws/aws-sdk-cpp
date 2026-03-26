/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloud9/Cloud9Client.h>
#include <aws/cloud9/Cloud9EndpointProvider.h>
#include <aws/cloud9/Cloud9ErrorMarshaller.h>
#include <aws/cloud9/model/CreateEnvironmentEC2Request.h>
#include <aws/cloud9/model/CreateEnvironmentMembershipRequest.h>
#include <aws/cloud9/model/DeleteEnvironmentMembershipRequest.h>
#include <aws/cloud9/model/DeleteEnvironmentRequest.h>
#include <aws/cloud9/model/DescribeEnvironmentMembershipsRequest.h>
#include <aws/cloud9/model/DescribeEnvironmentStatusRequest.h>
#include <aws/cloud9/model/DescribeEnvironmentsRequest.h>
#include <aws/cloud9/model/ListEnvironmentsRequest.h>
#include <aws/cloud9/model/ListTagsForResourceRequest.h>
#include <aws/cloud9/model/TagResourceRequest.h>
#include <aws/cloud9/model/UntagResourceRequest.h>
#include <aws/cloud9/model/UpdateEnvironmentMembershipRequest.h>
#include <aws/cloud9/model/UpdateEnvironmentRequest.h>
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
using namespace Aws::Cloud9;
using namespace Aws::Cloud9::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace Cloud9 {
const char SERVICE_NAME[] = "cloud9";
const char ALLOCATION_TAG[] = "Cloud9Client";
}  // namespace Cloud9
}  // namespace Aws
const char* Cloud9Client::GetServiceName() { return SERVICE_NAME; }
const char* Cloud9Client::GetAllocationTag() { return ALLOCATION_TAG; }

Cloud9Client::Cloud9Client(const Cloud9::Cloud9ClientConfiguration& clientConfiguration,
                           std::shared_ptr<Cloud9EndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Cloud9ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<Cloud9EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

Cloud9Client::Cloud9Client(const AWSCredentials& credentials, std::shared_ptr<Cloud9EndpointProviderBase> endpointProvider,
                           const Cloud9::Cloud9ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Cloud9ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<Cloud9EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

Cloud9Client::Cloud9Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<Cloud9EndpointProviderBase> endpointProvider,
                           const Cloud9::Cloud9ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Cloud9ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<Cloud9EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
Cloud9Client::Cloud9Client(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Cloud9ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<Cloud9EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

Cloud9Client::Cloud9Client(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Cloud9ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<Cloud9EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

Cloud9Client::Cloud9Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Cloud9ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<Cloud9EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
Cloud9Client::~Cloud9Client() { ShutdownSdkClient(this, -1); }

std::shared_ptr<Cloud9EndpointProviderBase>& Cloud9Client::accessEndpointProvider() { return m_endpointProvider; }

void Cloud9Client::init(const Cloud9::Cloud9ClientConfiguration& config) {
  AWSClient::SetServiceClientName("Cloud9");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "cloud9");
}

void Cloud9Client::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
Cloud9Client::InvokeOperationOutcome Cloud9Client::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

CreateEnvironmentEC2Outcome Cloud9Client::CreateEnvironmentEC2(const CreateEnvironmentEC2Request& request) const {
  return CreateEnvironmentEC2Outcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateEnvironmentMembershipOutcome Cloud9Client::CreateEnvironmentMembership(const CreateEnvironmentMembershipRequest& request) const {
  return CreateEnvironmentMembershipOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteEnvironmentOutcome Cloud9Client::DeleteEnvironment(const DeleteEnvironmentRequest& request) const {
  return DeleteEnvironmentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteEnvironmentMembershipOutcome Cloud9Client::DeleteEnvironmentMembership(const DeleteEnvironmentMembershipRequest& request) const {
  return DeleteEnvironmentMembershipOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeEnvironmentMembershipsOutcome Cloud9Client::DescribeEnvironmentMemberships(
    const DescribeEnvironmentMembershipsRequest& request) const {
  return DescribeEnvironmentMembershipsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeEnvironmentStatusOutcome Cloud9Client::DescribeEnvironmentStatus(const DescribeEnvironmentStatusRequest& request) const {
  return DescribeEnvironmentStatusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeEnvironmentsOutcome Cloud9Client::DescribeEnvironments(const DescribeEnvironmentsRequest& request) const {
  return DescribeEnvironmentsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListEnvironmentsOutcome Cloud9Client::ListEnvironments(const ListEnvironmentsRequest& request) const {
  return ListEnvironmentsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome Cloud9Client::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome Cloud9Client::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome Cloud9Client::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateEnvironmentOutcome Cloud9Client::UpdateEnvironment(const UpdateEnvironmentRequest& request) const {
  return UpdateEnvironmentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateEnvironmentMembershipOutcome Cloud9Client::UpdateEnvironmentMembership(const UpdateEnvironmentMembershipRequest& request) const {
  return UpdateEnvironmentMembershipOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
