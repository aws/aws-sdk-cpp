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
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/elasticloadbalancing/ElasticLoadBalancingClient.h>
#include <aws/elasticloadbalancing/ElasticLoadBalancingEndpointProvider.h>
#include <aws/elasticloadbalancing/ElasticLoadBalancingErrorMarshaller.h>
#include <aws/elasticloadbalancing/model/AddTagsRequest.h>
#include <aws/elasticloadbalancing/model/ApplySecurityGroupsToLoadBalancerRequest.h>
#include <aws/elasticloadbalancing/model/AttachLoadBalancerToSubnetsRequest.h>
#include <aws/elasticloadbalancing/model/ConfigureHealthCheckRequest.h>
#include <aws/elasticloadbalancing/model/CreateAppCookieStickinessPolicyRequest.h>
#include <aws/elasticloadbalancing/model/CreateLBCookieStickinessPolicyRequest.h>
#include <aws/elasticloadbalancing/model/CreateLoadBalancerListenersRequest.h>
#include <aws/elasticloadbalancing/model/CreateLoadBalancerPolicyRequest.h>
#include <aws/elasticloadbalancing/model/CreateLoadBalancerRequest.h>
#include <aws/elasticloadbalancing/model/DeleteLoadBalancerListenersRequest.h>
#include <aws/elasticloadbalancing/model/DeleteLoadBalancerPolicyRequest.h>
#include <aws/elasticloadbalancing/model/DeleteLoadBalancerRequest.h>
#include <aws/elasticloadbalancing/model/DeregisterInstancesFromLoadBalancerRequest.h>
#include <aws/elasticloadbalancing/model/DescribeAccountLimitsRequest.h>
#include <aws/elasticloadbalancing/model/DescribeInstanceHealthRequest.h>
#include <aws/elasticloadbalancing/model/DescribeLoadBalancerAttributesRequest.h>
#include <aws/elasticloadbalancing/model/DescribeLoadBalancerPoliciesRequest.h>
#include <aws/elasticloadbalancing/model/DescribeLoadBalancerPolicyTypesRequest.h>
#include <aws/elasticloadbalancing/model/DescribeLoadBalancersRequest.h>
#include <aws/elasticloadbalancing/model/DescribeTagsRequest.h>
#include <aws/elasticloadbalancing/model/DetachLoadBalancerFromSubnetsRequest.h>
#include <aws/elasticloadbalancing/model/DisableAvailabilityZonesForLoadBalancerRequest.h>
#include <aws/elasticloadbalancing/model/EnableAvailabilityZonesForLoadBalancerRequest.h>
#include <aws/elasticloadbalancing/model/ModifyLoadBalancerAttributesRequest.h>
#include <aws/elasticloadbalancing/model/RegisterInstancesWithLoadBalancerRequest.h>
#include <aws/elasticloadbalancing/model/RemoveTagsRequest.h>
#include <aws/elasticloadbalancing/model/SetLoadBalancerListenerSSLCertificateRequest.h>
#include <aws/elasticloadbalancing/model/SetLoadBalancerPoliciesForBackendServerRequest.h>
#include <aws/elasticloadbalancing/model/SetLoadBalancerPoliciesOfListenerRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ElasticLoadBalancing;
using namespace Aws::ElasticLoadBalancing::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Xml;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace ElasticLoadBalancing {
const char SERVICE_NAME[] = "elasticloadbalancing";
const char ALLOCATION_TAG[] = "ElasticLoadBalancingClient";
}  // namespace ElasticLoadBalancing
}  // namespace Aws
const char* ElasticLoadBalancingClient::GetServiceName() { return SERVICE_NAME; }
const char* ElasticLoadBalancingClient::GetAllocationTag() { return ALLOCATION_TAG; }

ElasticLoadBalancingClient::ElasticLoadBalancingClient(
    const ElasticLoadBalancing::ElasticLoadBalancingClientConfiguration& clientConfiguration,
    std::shared_ptr<ElasticLoadBalancingEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ElasticLoadBalancingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ElasticLoadBalancingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ElasticLoadBalancingClient::ElasticLoadBalancingClient(
    const AWSCredentials& credentials, std::shared_ptr<ElasticLoadBalancingEndpointProviderBase> endpointProvider,
    const ElasticLoadBalancing::ElasticLoadBalancingClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ElasticLoadBalancingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ElasticLoadBalancingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ElasticLoadBalancingClient::ElasticLoadBalancingClient(
    const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
    std::shared_ptr<ElasticLoadBalancingEndpointProviderBase> endpointProvider,
    const ElasticLoadBalancing::ElasticLoadBalancingClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ElasticLoadBalancingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ElasticLoadBalancingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
ElasticLoadBalancingClient::ElasticLoadBalancingClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ElasticLoadBalancingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ElasticLoadBalancingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ElasticLoadBalancingClient::ElasticLoadBalancingClient(const AWSCredentials& credentials,
                                                       const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ElasticLoadBalancingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ElasticLoadBalancingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ElasticLoadBalancingClient::ElasticLoadBalancingClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                       const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ElasticLoadBalancingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ElasticLoadBalancingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
ElasticLoadBalancingClient::~ElasticLoadBalancingClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<ElasticLoadBalancingEndpointProviderBase>& ElasticLoadBalancingClient::accessEndpointProvider() {
  return m_endpointProvider;
}

void ElasticLoadBalancingClient::init(const ElasticLoadBalancing::ElasticLoadBalancingClientConfiguration& config) {
  AWSClient::SetServiceClientName("Elastic Load Balancing");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "elasticloadbalancing");
}

void ElasticLoadBalancingClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}

Aws::String ElasticLoadBalancingClient::ConvertRequestToPresignedUrl(const AmazonSerializableWebServiceRequest& requestToConvert,
                                                                     const char* region) const {
  if (!m_endpointProvider) {
    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Presigned URL generating failed. Endpoint provider is not initialized.");
    return "";
  }
  Aws::Endpoint::EndpointParameters endpointParameters;
  endpointParameters.emplace_back(Aws::Endpoint::EndpointParameter("Region", Aws::String(region)));
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(endpointParameters);
  if (!endpointResolutionOutcome.IsSuccess()) {
    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Endpoint resolution failed: " << endpointResolutionOutcome.GetError().GetMessage());
    return "";
  }
  Aws::StringStream ss;
  ss << "?" << requestToConvert.SerializePayload();
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());

  return GeneratePresignedUrl(endpointResolutionOutcome.GetResult().GetURI(), Aws::Http::HttpMethod::HTTP_GET, region, 3600);
}

ElasticLoadBalancingClient::InvokeOperationOutcome ElasticLoadBalancingClient::InvokeServiceOperation(
    const AmazonWebServiceRequest& request, Aws::Http::HttpMethod httpMethod) const {
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
AddTagsOutcome ElasticLoadBalancingClient::AddTags(const AddTagsRequest& request) const {
  return AddTagsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ApplySecurityGroupsToLoadBalancerOutcome ElasticLoadBalancingClient::ApplySecurityGroupsToLoadBalancer(
    const ApplySecurityGroupsToLoadBalancerRequest& request) const {
  return ApplySecurityGroupsToLoadBalancerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AttachLoadBalancerToSubnetsOutcome ElasticLoadBalancingClient::AttachLoadBalancerToSubnets(
    const AttachLoadBalancerToSubnetsRequest& request) const {
  return AttachLoadBalancerToSubnetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ConfigureHealthCheckOutcome ElasticLoadBalancingClient::ConfigureHealthCheck(const ConfigureHealthCheckRequest& request) const {
  return ConfigureHealthCheckOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAppCookieStickinessPolicyOutcome ElasticLoadBalancingClient::CreateAppCookieStickinessPolicy(
    const CreateAppCookieStickinessPolicyRequest& request) const {
  return CreateAppCookieStickinessPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateLBCookieStickinessPolicyOutcome ElasticLoadBalancingClient::CreateLBCookieStickinessPolicy(
    const CreateLBCookieStickinessPolicyRequest& request) const {
  return CreateLBCookieStickinessPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateLoadBalancerOutcome ElasticLoadBalancingClient::CreateLoadBalancer(const CreateLoadBalancerRequest& request) const {
  return CreateLoadBalancerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateLoadBalancerListenersOutcome ElasticLoadBalancingClient::CreateLoadBalancerListeners(
    const CreateLoadBalancerListenersRequest& request) const {
  return CreateLoadBalancerListenersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateLoadBalancerPolicyOutcome ElasticLoadBalancingClient::CreateLoadBalancerPolicy(const CreateLoadBalancerPolicyRequest& request) const {
  return CreateLoadBalancerPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteLoadBalancerOutcome ElasticLoadBalancingClient::DeleteLoadBalancer(const DeleteLoadBalancerRequest& request) const {
  return DeleteLoadBalancerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteLoadBalancerListenersOutcome ElasticLoadBalancingClient::DeleteLoadBalancerListeners(
    const DeleteLoadBalancerListenersRequest& request) const {
  return DeleteLoadBalancerListenersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteLoadBalancerPolicyOutcome ElasticLoadBalancingClient::DeleteLoadBalancerPolicy(const DeleteLoadBalancerPolicyRequest& request) const {
  return DeleteLoadBalancerPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeregisterInstancesFromLoadBalancerOutcome ElasticLoadBalancingClient::DeregisterInstancesFromLoadBalancer(
    const DeregisterInstancesFromLoadBalancerRequest& request) const {
  return DeregisterInstancesFromLoadBalancerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAccountLimitsOutcome ElasticLoadBalancingClient::DescribeAccountLimits(const DescribeAccountLimitsRequest& request) const {
  return DescribeAccountLimitsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeInstanceHealthOutcome ElasticLoadBalancingClient::DescribeInstanceHealth(const DescribeInstanceHealthRequest& request) const {
  return DescribeInstanceHealthOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeLoadBalancerAttributesOutcome ElasticLoadBalancingClient::DescribeLoadBalancerAttributes(
    const DescribeLoadBalancerAttributesRequest& request) const {
  return DescribeLoadBalancerAttributesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeLoadBalancerPoliciesOutcome ElasticLoadBalancingClient::DescribeLoadBalancerPolicies(
    const DescribeLoadBalancerPoliciesRequest& request) const {
  return DescribeLoadBalancerPoliciesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeLoadBalancerPolicyTypesOutcome ElasticLoadBalancingClient::DescribeLoadBalancerPolicyTypes(
    const DescribeLoadBalancerPolicyTypesRequest& request) const {
  return DescribeLoadBalancerPolicyTypesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeLoadBalancersOutcome ElasticLoadBalancingClient::DescribeLoadBalancers(const DescribeLoadBalancersRequest& request) const {
  return DescribeLoadBalancersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeTagsOutcome ElasticLoadBalancingClient::DescribeTags(const DescribeTagsRequest& request) const {
  return DescribeTagsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DetachLoadBalancerFromSubnetsOutcome ElasticLoadBalancingClient::DetachLoadBalancerFromSubnets(
    const DetachLoadBalancerFromSubnetsRequest& request) const {
  return DetachLoadBalancerFromSubnetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisableAvailabilityZonesForLoadBalancerOutcome ElasticLoadBalancingClient::DisableAvailabilityZonesForLoadBalancer(
    const DisableAvailabilityZonesForLoadBalancerRequest& request) const {
  return DisableAvailabilityZonesForLoadBalancerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

EnableAvailabilityZonesForLoadBalancerOutcome ElasticLoadBalancingClient::EnableAvailabilityZonesForLoadBalancer(
    const EnableAvailabilityZonesForLoadBalancerRequest& request) const {
  return EnableAvailabilityZonesForLoadBalancerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyLoadBalancerAttributesOutcome ElasticLoadBalancingClient::ModifyLoadBalancerAttributes(
    const ModifyLoadBalancerAttributesRequest& request) const {
  return ModifyLoadBalancerAttributesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RegisterInstancesWithLoadBalancerOutcome ElasticLoadBalancingClient::RegisterInstancesWithLoadBalancer(
    const RegisterInstancesWithLoadBalancerRequest& request) const {
  return RegisterInstancesWithLoadBalancerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RemoveTagsOutcome ElasticLoadBalancingClient::RemoveTags(const RemoveTagsRequest& request) const {
  return RemoveTagsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SetLoadBalancerListenerSSLCertificateOutcome ElasticLoadBalancingClient::SetLoadBalancerListenerSSLCertificate(
    const SetLoadBalancerListenerSSLCertificateRequest& request) const {
  return SetLoadBalancerListenerSSLCertificateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SetLoadBalancerPoliciesForBackendServerOutcome ElasticLoadBalancingClient::SetLoadBalancerPoliciesForBackendServer(
    const SetLoadBalancerPoliciesForBackendServerRequest& request) const {
  return SetLoadBalancerPoliciesForBackendServerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SetLoadBalancerPoliciesOfListenerOutcome ElasticLoadBalancingClient::SetLoadBalancerPoliciesOfListener(
    const SetLoadBalancerPoliciesOfListenerRequest& request) const {
  return SetLoadBalancerPoliciesOfListenerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
