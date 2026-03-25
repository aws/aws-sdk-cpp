/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

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
#include <aws/health/HealthClient.h>
#include <aws/health/HealthEndpointProvider.h>
#include <aws/health/HealthErrorMarshaller.h>
#include <aws/health/model/DescribeAffectedAccountsForOrganizationRequest.h>
#include <aws/health/model/DescribeAffectedEntitiesForOrganizationRequest.h>
#include <aws/health/model/DescribeAffectedEntitiesRequest.h>
#include <aws/health/model/DescribeEntityAggregatesForOrganizationRequest.h>
#include <aws/health/model/DescribeEntityAggregatesRequest.h>
#include <aws/health/model/DescribeEventAggregatesRequest.h>
#include <aws/health/model/DescribeEventDetailsForOrganizationRequest.h>
#include <aws/health/model/DescribeEventDetailsRequest.h>
#include <aws/health/model/DescribeEventTypesRequest.h>
#include <aws/health/model/DescribeEventsForOrganizationRequest.h>
#include <aws/health/model/DescribeEventsRequest.h>
#include <aws/health/model/DescribeHealthServiceStatusForOrganizationRequest.h>
#include <aws/health/model/DisableHealthServiceAccessForOrganizationRequest.h>
#include <aws/health/model/EnableHealthServiceAccessForOrganizationRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Health;
using namespace Aws::Health::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace Health {
const char SERVICE_NAME[] = "health";
const char ALLOCATION_TAG[] = "HealthClient";
}  // namespace Health
}  // namespace Aws
const char* HealthClient::GetServiceName() { return SERVICE_NAME; }
const char* HealthClient::GetAllocationTag() { return ALLOCATION_TAG; }

HealthClient::HealthClient(const Health::HealthClientConfiguration& clientConfiguration,
                           std::shared_ptr<HealthEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<HealthErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<HealthEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

HealthClient::HealthClient(const AWSCredentials& credentials, std::shared_ptr<HealthEndpointProviderBase> endpointProvider,
                           const Health::HealthClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<HealthErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<HealthEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

HealthClient::HealthClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<HealthEndpointProviderBase> endpointProvider,
                           const Health::HealthClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<HealthErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<HealthEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
HealthClient::HealthClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<HealthErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<HealthEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

HealthClient::HealthClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<HealthErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<HealthEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

HealthClient::HealthClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<HealthErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<HealthEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
HealthClient::~HealthClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<HealthEndpointProviderBase>& HealthClient::accessEndpointProvider() { return m_endpointProvider; }

void HealthClient::init(const Health::HealthClientConfiguration& config) {
  AWSClient::SetServiceClientName("Health");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "health");
}

void HealthClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
HealthClient::InvokeOperationOutcome HealthClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

DescribeAffectedAccountsForOrganizationOutcome HealthClient::DescribeAffectedAccountsForOrganization(
    const DescribeAffectedAccountsForOrganizationRequest& request) const {
  return DescribeAffectedAccountsForOrganizationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAffectedEntitiesOutcome HealthClient::DescribeAffectedEntities(const DescribeAffectedEntitiesRequest& request) const {
  return DescribeAffectedEntitiesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAffectedEntitiesForOrganizationOutcome HealthClient::DescribeAffectedEntitiesForOrganization(
    const DescribeAffectedEntitiesForOrganizationRequest& request) const {
  return DescribeAffectedEntitiesForOrganizationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeEntityAggregatesOutcome HealthClient::DescribeEntityAggregates(const DescribeEntityAggregatesRequest& request) const {
  return DescribeEntityAggregatesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeEntityAggregatesForOrganizationOutcome HealthClient::DescribeEntityAggregatesForOrganization(
    const DescribeEntityAggregatesForOrganizationRequest& request) const {
  return DescribeEntityAggregatesForOrganizationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeEventAggregatesOutcome HealthClient::DescribeEventAggregates(const DescribeEventAggregatesRequest& request) const {
  return DescribeEventAggregatesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeEventDetailsOutcome HealthClient::DescribeEventDetails(const DescribeEventDetailsRequest& request) const {
  return DescribeEventDetailsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeEventDetailsForOrganizationOutcome HealthClient::DescribeEventDetailsForOrganization(
    const DescribeEventDetailsForOrganizationRequest& request) const {
  return DescribeEventDetailsForOrganizationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeEventTypesOutcome HealthClient::DescribeEventTypes(const DescribeEventTypesRequest& request) const {
  return DescribeEventTypesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeEventsOutcome HealthClient::DescribeEvents(const DescribeEventsRequest& request) const {
  return DescribeEventsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeEventsForOrganizationOutcome HealthClient::DescribeEventsForOrganization(
    const DescribeEventsForOrganizationRequest& request) const {
  return DescribeEventsForOrganizationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeHealthServiceStatusForOrganizationOutcome HealthClient::DescribeHealthServiceStatusForOrganization(
    const DescribeHealthServiceStatusForOrganizationRequest& request) const {
  return DescribeHealthServiceStatusForOrganizationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisableHealthServiceAccessForOrganizationOutcome HealthClient::DisableHealthServiceAccessForOrganization(
    const DisableHealthServiceAccessForOrganizationRequest& request) const {
  return DisableHealthServiceAccessForOrganizationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

EnableHealthServiceAccessForOrganizationOutcome HealthClient::EnableHealthServiceAccessForOrganization(
    const EnableHealthServiceAccessForOrganizationRequest& request) const {
  return EnableHealthServiceAccessForOrganizationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
