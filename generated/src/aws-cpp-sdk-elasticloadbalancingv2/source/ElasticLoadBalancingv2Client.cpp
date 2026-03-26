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
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2Client.h>
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2EndpointProvider.h>
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2ErrorMarshaller.h>
#include <aws/elasticloadbalancingv2/model/AddListenerCertificatesRequest.h>
#include <aws/elasticloadbalancingv2/model/AddTagsRequest.h>
#include <aws/elasticloadbalancingv2/model/AddTrustStoreRevocationsRequest.h>
#include <aws/elasticloadbalancingv2/model/CreateListenerRequest.h>
#include <aws/elasticloadbalancingv2/model/CreateLoadBalancerRequest.h>
#include <aws/elasticloadbalancingv2/model/CreateRuleRequest.h>
#include <aws/elasticloadbalancingv2/model/CreateTargetGroupRequest.h>
#include <aws/elasticloadbalancingv2/model/CreateTrustStoreRequest.h>
#include <aws/elasticloadbalancingv2/model/DeleteListenerRequest.h>
#include <aws/elasticloadbalancingv2/model/DeleteLoadBalancerRequest.h>
#include <aws/elasticloadbalancingv2/model/DeleteRuleRequest.h>
#include <aws/elasticloadbalancingv2/model/DeleteSharedTrustStoreAssociationRequest.h>
#include <aws/elasticloadbalancingv2/model/DeleteTargetGroupRequest.h>
#include <aws/elasticloadbalancingv2/model/DeleteTrustStoreRequest.h>
#include <aws/elasticloadbalancingv2/model/DeregisterTargetsRequest.h>
#include <aws/elasticloadbalancingv2/model/DescribeAccountLimitsRequest.h>
#include <aws/elasticloadbalancingv2/model/DescribeCapacityReservationRequest.h>
#include <aws/elasticloadbalancingv2/model/DescribeListenerAttributesRequest.h>
#include <aws/elasticloadbalancingv2/model/DescribeListenerCertificatesRequest.h>
#include <aws/elasticloadbalancingv2/model/DescribeListenersRequest.h>
#include <aws/elasticloadbalancingv2/model/DescribeLoadBalancerAttributesRequest.h>
#include <aws/elasticloadbalancingv2/model/DescribeLoadBalancersRequest.h>
#include <aws/elasticloadbalancingv2/model/DescribeRulesRequest.h>
#include <aws/elasticloadbalancingv2/model/DescribeSSLPoliciesRequest.h>
#include <aws/elasticloadbalancingv2/model/DescribeTagsRequest.h>
#include <aws/elasticloadbalancingv2/model/DescribeTargetGroupAttributesRequest.h>
#include <aws/elasticloadbalancingv2/model/DescribeTargetGroupsRequest.h>
#include <aws/elasticloadbalancingv2/model/DescribeTargetHealthRequest.h>
#include <aws/elasticloadbalancingv2/model/DescribeTrustStoreAssociationsRequest.h>
#include <aws/elasticloadbalancingv2/model/DescribeTrustStoreRevocationsRequest.h>
#include <aws/elasticloadbalancingv2/model/DescribeTrustStoresRequest.h>
#include <aws/elasticloadbalancingv2/model/GetResourcePolicyRequest.h>
#include <aws/elasticloadbalancingv2/model/GetTrustStoreCaCertificatesBundleRequest.h>
#include <aws/elasticloadbalancingv2/model/GetTrustStoreRevocationContentRequest.h>
#include <aws/elasticloadbalancingv2/model/ModifyCapacityReservationRequest.h>
#include <aws/elasticloadbalancingv2/model/ModifyIpPoolsRequest.h>
#include <aws/elasticloadbalancingv2/model/ModifyListenerAttributesRequest.h>
#include <aws/elasticloadbalancingv2/model/ModifyListenerRequest.h>
#include <aws/elasticloadbalancingv2/model/ModifyLoadBalancerAttributesRequest.h>
#include <aws/elasticloadbalancingv2/model/ModifyRuleRequest.h>
#include <aws/elasticloadbalancingv2/model/ModifyTargetGroupAttributesRequest.h>
#include <aws/elasticloadbalancingv2/model/ModifyTargetGroupRequest.h>
#include <aws/elasticloadbalancingv2/model/ModifyTrustStoreRequest.h>
#include <aws/elasticloadbalancingv2/model/RegisterTargetsRequest.h>
#include <aws/elasticloadbalancingv2/model/RemoveListenerCertificatesRequest.h>
#include <aws/elasticloadbalancingv2/model/RemoveTagsRequest.h>
#include <aws/elasticloadbalancingv2/model/RemoveTrustStoreRevocationsRequest.h>
#include <aws/elasticloadbalancingv2/model/SetIpAddressTypeRequest.h>
#include <aws/elasticloadbalancingv2/model/SetRulePrioritiesRequest.h>
#include <aws/elasticloadbalancingv2/model/SetSecurityGroupsRequest.h>
#include <aws/elasticloadbalancingv2/model/SetSubnetsRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ElasticLoadBalancingv2;
using namespace Aws::ElasticLoadBalancingv2::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Xml;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace ElasticLoadBalancingv2 {
const char SERVICE_NAME[] = "elasticloadbalancing";
const char ALLOCATION_TAG[] = "ElasticLoadBalancingv2Client";
}  // namespace ElasticLoadBalancingv2
}  // namespace Aws
const char* ElasticLoadBalancingv2Client::GetServiceName() { return SERVICE_NAME; }
const char* ElasticLoadBalancingv2Client::GetAllocationTag() { return ALLOCATION_TAG; }

ElasticLoadBalancingv2Client::ElasticLoadBalancingv2Client(
    const ElasticLoadBalancingv2::ElasticLoadBalancingv2ClientConfiguration& clientConfiguration,
    std::shared_ptr<ElasticLoadBalancingv2EndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ElasticLoadBalancingv2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ElasticLoadBalancingv2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ElasticLoadBalancingv2Client::ElasticLoadBalancingv2Client(
    const AWSCredentials& credentials, std::shared_ptr<ElasticLoadBalancingv2EndpointProviderBase> endpointProvider,
    const ElasticLoadBalancingv2::ElasticLoadBalancingv2ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ElasticLoadBalancingv2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ElasticLoadBalancingv2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ElasticLoadBalancingv2Client::ElasticLoadBalancingv2Client(
    const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
    std::shared_ptr<ElasticLoadBalancingv2EndpointProviderBase> endpointProvider,
    const ElasticLoadBalancingv2::ElasticLoadBalancingv2ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ElasticLoadBalancingv2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ElasticLoadBalancingv2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
ElasticLoadBalancingv2Client::ElasticLoadBalancingv2Client(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ElasticLoadBalancingv2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ElasticLoadBalancingv2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ElasticLoadBalancingv2Client::ElasticLoadBalancingv2Client(const AWSCredentials& credentials,
                                                           const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ElasticLoadBalancingv2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ElasticLoadBalancingv2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ElasticLoadBalancingv2Client::ElasticLoadBalancingv2Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                           const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ElasticLoadBalancingv2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ElasticLoadBalancingv2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
ElasticLoadBalancingv2Client::~ElasticLoadBalancingv2Client() { ShutdownSdkClient(this, -1); }

std::shared_ptr<ElasticLoadBalancingv2EndpointProviderBase>& ElasticLoadBalancingv2Client::accessEndpointProvider() {
  return m_endpointProvider;
}

void ElasticLoadBalancingv2Client::init(const ElasticLoadBalancingv2::ElasticLoadBalancingv2ClientConfiguration& config) {
  AWSClient::SetServiceClientName("Elastic Load Balancing v2");
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

void ElasticLoadBalancingv2Client::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}

Aws::String ElasticLoadBalancingv2Client::ConvertRequestToPresignedUrl(const AmazonSerializableWebServiceRequest& requestToConvert,
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

ElasticLoadBalancingv2Client::InvokeOperationOutcome ElasticLoadBalancingv2Client::InvokeServiceOperation(
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
AddListenerCertificatesOutcome ElasticLoadBalancingv2Client::AddListenerCertificates(const AddListenerCertificatesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AddListenerCertificatesOutcome(result.GetResultWithOwnership())
                            : AddListenerCertificatesOutcome(std::move(result.GetError()));
}

AddTagsOutcome ElasticLoadBalancingv2Client::AddTags(const AddTagsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AddTagsOutcome(result.GetResultWithOwnership()) : AddTagsOutcome(std::move(result.GetError()));
}

AddTrustStoreRevocationsOutcome ElasticLoadBalancingv2Client::AddTrustStoreRevocations(
    const AddTrustStoreRevocationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AddTrustStoreRevocationsOutcome(result.GetResultWithOwnership())
                            : AddTrustStoreRevocationsOutcome(std::move(result.GetError()));
}

CreateListenerOutcome ElasticLoadBalancingv2Client::CreateListener(const CreateListenerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateListenerOutcome(result.GetResultWithOwnership()) : CreateListenerOutcome(std::move(result.GetError()));
}

CreateLoadBalancerOutcome ElasticLoadBalancingv2Client::CreateLoadBalancer(const CreateLoadBalancerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateLoadBalancerOutcome(result.GetResultWithOwnership())
                            : CreateLoadBalancerOutcome(std::move(result.GetError()));
}

CreateRuleOutcome ElasticLoadBalancingv2Client::CreateRule(const CreateRuleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateRuleOutcome(result.GetResultWithOwnership()) : CreateRuleOutcome(std::move(result.GetError()));
}

CreateTargetGroupOutcome ElasticLoadBalancingv2Client::CreateTargetGroup(const CreateTargetGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateTargetGroupOutcome(result.GetResultWithOwnership())
                            : CreateTargetGroupOutcome(std::move(result.GetError()));
}

CreateTrustStoreOutcome ElasticLoadBalancingv2Client::CreateTrustStore(const CreateTrustStoreRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateTrustStoreOutcome(result.GetResultWithOwnership())
                            : CreateTrustStoreOutcome(std::move(result.GetError()));
}

DeleteListenerOutcome ElasticLoadBalancingv2Client::DeleteListener(const DeleteListenerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteListenerOutcome(result.GetResultWithOwnership()) : DeleteListenerOutcome(std::move(result.GetError()));
}

DeleteLoadBalancerOutcome ElasticLoadBalancingv2Client::DeleteLoadBalancer(const DeleteLoadBalancerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteLoadBalancerOutcome(result.GetResultWithOwnership())
                            : DeleteLoadBalancerOutcome(std::move(result.GetError()));
}

DeleteRuleOutcome ElasticLoadBalancingv2Client::DeleteRule(const DeleteRuleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteRuleOutcome(result.GetResultWithOwnership()) : DeleteRuleOutcome(std::move(result.GetError()));
}

DeleteSharedTrustStoreAssociationOutcome ElasticLoadBalancingv2Client::DeleteSharedTrustStoreAssociation(
    const DeleteSharedTrustStoreAssociationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteSharedTrustStoreAssociationOutcome(result.GetResultWithOwnership())
                            : DeleteSharedTrustStoreAssociationOutcome(std::move(result.GetError()));
}

DeleteTargetGroupOutcome ElasticLoadBalancingv2Client::DeleteTargetGroup(const DeleteTargetGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteTargetGroupOutcome(result.GetResultWithOwnership())
                            : DeleteTargetGroupOutcome(std::move(result.GetError()));
}

DeleteTrustStoreOutcome ElasticLoadBalancingv2Client::DeleteTrustStore(const DeleteTrustStoreRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteTrustStoreOutcome(result.GetResultWithOwnership())
                            : DeleteTrustStoreOutcome(std::move(result.GetError()));
}

DeregisterTargetsOutcome ElasticLoadBalancingv2Client::DeregisterTargets(const DeregisterTargetsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeregisterTargetsOutcome(result.GetResultWithOwnership())
                            : DeregisterTargetsOutcome(std::move(result.GetError()));
}

DescribeAccountLimitsOutcome ElasticLoadBalancingv2Client::DescribeAccountLimits(const DescribeAccountLimitsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeAccountLimitsOutcome(result.GetResultWithOwnership())
                            : DescribeAccountLimitsOutcome(std::move(result.GetError()));
}

DescribeCapacityReservationOutcome ElasticLoadBalancingv2Client::DescribeCapacityReservation(
    const DescribeCapacityReservationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeCapacityReservationOutcome(result.GetResultWithOwnership())
                            : DescribeCapacityReservationOutcome(std::move(result.GetError()));
}

DescribeListenerAttributesOutcome ElasticLoadBalancingv2Client::DescribeListenerAttributes(
    const DescribeListenerAttributesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeListenerAttributesOutcome(result.GetResultWithOwnership())
                            : DescribeListenerAttributesOutcome(std::move(result.GetError()));
}

DescribeListenerCertificatesOutcome ElasticLoadBalancingv2Client::DescribeListenerCertificates(
    const DescribeListenerCertificatesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeListenerCertificatesOutcome(result.GetResultWithOwnership())
                            : DescribeListenerCertificatesOutcome(std::move(result.GetError()));
}

DescribeListenersOutcome ElasticLoadBalancingv2Client::DescribeListeners(const DescribeListenersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeListenersOutcome(result.GetResultWithOwnership())
                            : DescribeListenersOutcome(std::move(result.GetError()));
}

DescribeLoadBalancerAttributesOutcome ElasticLoadBalancingv2Client::DescribeLoadBalancerAttributes(
    const DescribeLoadBalancerAttributesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeLoadBalancerAttributesOutcome(result.GetResultWithOwnership())
                            : DescribeLoadBalancerAttributesOutcome(std::move(result.GetError()));
}

DescribeLoadBalancersOutcome ElasticLoadBalancingv2Client::DescribeLoadBalancers(const DescribeLoadBalancersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeLoadBalancersOutcome(result.GetResultWithOwnership())
                            : DescribeLoadBalancersOutcome(std::move(result.GetError()));
}

DescribeRulesOutcome ElasticLoadBalancingv2Client::DescribeRules(const DescribeRulesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeRulesOutcome(result.GetResultWithOwnership()) : DescribeRulesOutcome(std::move(result.GetError()));
}

DescribeSSLPoliciesOutcome ElasticLoadBalancingv2Client::DescribeSSLPolicies(const DescribeSSLPoliciesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeSSLPoliciesOutcome(result.GetResultWithOwnership())
                            : DescribeSSLPoliciesOutcome(std::move(result.GetError()));
}

DescribeTagsOutcome ElasticLoadBalancingv2Client::DescribeTags(const DescribeTagsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeTagsOutcome(result.GetResultWithOwnership()) : DescribeTagsOutcome(std::move(result.GetError()));
}

DescribeTargetGroupAttributesOutcome ElasticLoadBalancingv2Client::DescribeTargetGroupAttributes(
    const DescribeTargetGroupAttributesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeTargetGroupAttributesOutcome(result.GetResultWithOwnership())
                            : DescribeTargetGroupAttributesOutcome(std::move(result.GetError()));
}

DescribeTargetGroupsOutcome ElasticLoadBalancingv2Client::DescribeTargetGroups(const DescribeTargetGroupsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeTargetGroupsOutcome(result.GetResultWithOwnership())
                            : DescribeTargetGroupsOutcome(std::move(result.GetError()));
}

DescribeTargetHealthOutcome ElasticLoadBalancingv2Client::DescribeTargetHealth(const DescribeTargetHealthRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeTargetHealthOutcome(result.GetResultWithOwnership())
                            : DescribeTargetHealthOutcome(std::move(result.GetError()));
}

DescribeTrustStoreAssociationsOutcome ElasticLoadBalancingv2Client::DescribeTrustStoreAssociations(
    const DescribeTrustStoreAssociationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeTrustStoreAssociationsOutcome(result.GetResultWithOwnership())
                            : DescribeTrustStoreAssociationsOutcome(std::move(result.GetError()));
}

DescribeTrustStoreRevocationsOutcome ElasticLoadBalancingv2Client::DescribeTrustStoreRevocations(
    const DescribeTrustStoreRevocationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeTrustStoreRevocationsOutcome(result.GetResultWithOwnership())
                            : DescribeTrustStoreRevocationsOutcome(std::move(result.GetError()));
}

DescribeTrustStoresOutcome ElasticLoadBalancingv2Client::DescribeTrustStores(const DescribeTrustStoresRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeTrustStoresOutcome(result.GetResultWithOwnership())
                            : DescribeTrustStoresOutcome(std::move(result.GetError()));
}

GetResourcePolicyOutcome ElasticLoadBalancingv2Client::GetResourcePolicy(const GetResourcePolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetResourcePolicyOutcome(result.GetResultWithOwnership())
                            : GetResourcePolicyOutcome(std::move(result.GetError()));
}

GetTrustStoreCaCertificatesBundleOutcome ElasticLoadBalancingv2Client::GetTrustStoreCaCertificatesBundle(
    const GetTrustStoreCaCertificatesBundleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetTrustStoreCaCertificatesBundleOutcome(result.GetResultWithOwnership())
                            : GetTrustStoreCaCertificatesBundleOutcome(std::move(result.GetError()));
}

GetTrustStoreRevocationContentOutcome ElasticLoadBalancingv2Client::GetTrustStoreRevocationContent(
    const GetTrustStoreRevocationContentRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetTrustStoreRevocationContentOutcome(result.GetResultWithOwnership())
                            : GetTrustStoreRevocationContentOutcome(std::move(result.GetError()));
}

ModifyCapacityReservationOutcome ElasticLoadBalancingv2Client::ModifyCapacityReservation(
    const ModifyCapacityReservationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyCapacityReservationOutcome(result.GetResultWithOwnership())
                            : ModifyCapacityReservationOutcome(std::move(result.GetError()));
}

ModifyIpPoolsOutcome ElasticLoadBalancingv2Client::ModifyIpPools(const ModifyIpPoolsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyIpPoolsOutcome(result.GetResultWithOwnership()) : ModifyIpPoolsOutcome(std::move(result.GetError()));
}

ModifyListenerOutcome ElasticLoadBalancingv2Client::ModifyListener(const ModifyListenerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyListenerOutcome(result.GetResultWithOwnership()) : ModifyListenerOutcome(std::move(result.GetError()));
}

ModifyListenerAttributesOutcome ElasticLoadBalancingv2Client::ModifyListenerAttributes(
    const ModifyListenerAttributesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyListenerAttributesOutcome(result.GetResultWithOwnership())
                            : ModifyListenerAttributesOutcome(std::move(result.GetError()));
}

ModifyLoadBalancerAttributesOutcome ElasticLoadBalancingv2Client::ModifyLoadBalancerAttributes(
    const ModifyLoadBalancerAttributesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyLoadBalancerAttributesOutcome(result.GetResultWithOwnership())
                            : ModifyLoadBalancerAttributesOutcome(std::move(result.GetError()));
}

ModifyRuleOutcome ElasticLoadBalancingv2Client::ModifyRule(const ModifyRuleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyRuleOutcome(result.GetResultWithOwnership()) : ModifyRuleOutcome(std::move(result.GetError()));
}

ModifyTargetGroupOutcome ElasticLoadBalancingv2Client::ModifyTargetGroup(const ModifyTargetGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyTargetGroupOutcome(result.GetResultWithOwnership())
                            : ModifyTargetGroupOutcome(std::move(result.GetError()));
}

ModifyTargetGroupAttributesOutcome ElasticLoadBalancingv2Client::ModifyTargetGroupAttributes(
    const ModifyTargetGroupAttributesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyTargetGroupAttributesOutcome(result.GetResultWithOwnership())
                            : ModifyTargetGroupAttributesOutcome(std::move(result.GetError()));
}

ModifyTrustStoreOutcome ElasticLoadBalancingv2Client::ModifyTrustStore(const ModifyTrustStoreRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyTrustStoreOutcome(result.GetResultWithOwnership())
                            : ModifyTrustStoreOutcome(std::move(result.GetError()));
}

RegisterTargetsOutcome ElasticLoadBalancingv2Client::RegisterTargets(const RegisterTargetsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RegisterTargetsOutcome(result.GetResultWithOwnership())
                            : RegisterTargetsOutcome(std::move(result.GetError()));
}

RemoveListenerCertificatesOutcome ElasticLoadBalancingv2Client::RemoveListenerCertificates(
    const RemoveListenerCertificatesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RemoveListenerCertificatesOutcome(result.GetResultWithOwnership())
                            : RemoveListenerCertificatesOutcome(std::move(result.GetError()));
}

RemoveTagsOutcome ElasticLoadBalancingv2Client::RemoveTags(const RemoveTagsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RemoveTagsOutcome(result.GetResultWithOwnership()) : RemoveTagsOutcome(std::move(result.GetError()));
}

RemoveTrustStoreRevocationsOutcome ElasticLoadBalancingv2Client::RemoveTrustStoreRevocations(
    const RemoveTrustStoreRevocationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RemoveTrustStoreRevocationsOutcome(result.GetResultWithOwnership())
                            : RemoveTrustStoreRevocationsOutcome(std::move(result.GetError()));
}

SetIpAddressTypeOutcome ElasticLoadBalancingv2Client::SetIpAddressType(const SetIpAddressTypeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SetIpAddressTypeOutcome(result.GetResultWithOwnership())
                            : SetIpAddressTypeOutcome(std::move(result.GetError()));
}

SetRulePrioritiesOutcome ElasticLoadBalancingv2Client::SetRulePriorities(const SetRulePrioritiesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SetRulePrioritiesOutcome(result.GetResultWithOwnership())
                            : SetRulePrioritiesOutcome(std::move(result.GetError()));
}

SetSecurityGroupsOutcome ElasticLoadBalancingv2Client::SetSecurityGroups(const SetSecurityGroupsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SetSecurityGroupsOutcome(result.GetResultWithOwnership())
                            : SetSecurityGroupsOutcome(std::move(result.GetError()));
}

SetSubnetsOutcome ElasticLoadBalancingv2Client::SetSubnets(const SetSubnetsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SetSubnetsOutcome(result.GetResultWithOwnership()) : SetSubnetsOutcome(std::move(result.GetError()));
}
