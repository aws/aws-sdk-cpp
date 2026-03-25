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
  return AddListenerCertificatesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AddTagsOutcome ElasticLoadBalancingv2Client::AddTags(const AddTagsRequest& request) const {
  return AddTagsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AddTrustStoreRevocationsOutcome ElasticLoadBalancingv2Client::AddTrustStoreRevocations(
    const AddTrustStoreRevocationsRequest& request) const {
  return AddTrustStoreRevocationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateListenerOutcome ElasticLoadBalancingv2Client::CreateListener(const CreateListenerRequest& request) const {
  return CreateListenerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateLoadBalancerOutcome ElasticLoadBalancingv2Client::CreateLoadBalancer(const CreateLoadBalancerRequest& request) const {
  return CreateLoadBalancerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateRuleOutcome ElasticLoadBalancingv2Client::CreateRule(const CreateRuleRequest& request) const {
  return CreateRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateTargetGroupOutcome ElasticLoadBalancingv2Client::CreateTargetGroup(const CreateTargetGroupRequest& request) const {
  return CreateTargetGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateTrustStoreOutcome ElasticLoadBalancingv2Client::CreateTrustStore(const CreateTrustStoreRequest& request) const {
  return CreateTrustStoreOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteListenerOutcome ElasticLoadBalancingv2Client::DeleteListener(const DeleteListenerRequest& request) const {
  return DeleteListenerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteLoadBalancerOutcome ElasticLoadBalancingv2Client::DeleteLoadBalancer(const DeleteLoadBalancerRequest& request) const {
  return DeleteLoadBalancerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteRuleOutcome ElasticLoadBalancingv2Client::DeleteRule(const DeleteRuleRequest& request) const {
  return DeleteRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteSharedTrustStoreAssociationOutcome ElasticLoadBalancingv2Client::DeleteSharedTrustStoreAssociation(
    const DeleteSharedTrustStoreAssociationRequest& request) const {
  return DeleteSharedTrustStoreAssociationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteTargetGroupOutcome ElasticLoadBalancingv2Client::DeleteTargetGroup(const DeleteTargetGroupRequest& request) const {
  return DeleteTargetGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteTrustStoreOutcome ElasticLoadBalancingv2Client::DeleteTrustStore(const DeleteTrustStoreRequest& request) const {
  return DeleteTrustStoreOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeregisterTargetsOutcome ElasticLoadBalancingv2Client::DeregisterTargets(const DeregisterTargetsRequest& request) const {
  return DeregisterTargetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAccountLimitsOutcome ElasticLoadBalancingv2Client::DescribeAccountLimits(const DescribeAccountLimitsRequest& request) const {
  return DescribeAccountLimitsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeCapacityReservationOutcome ElasticLoadBalancingv2Client::DescribeCapacityReservation(
    const DescribeCapacityReservationRequest& request) const {
  return DescribeCapacityReservationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeListenerAttributesOutcome ElasticLoadBalancingv2Client::DescribeListenerAttributes(
    const DescribeListenerAttributesRequest& request) const {
  return DescribeListenerAttributesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeListenerCertificatesOutcome ElasticLoadBalancingv2Client::DescribeListenerCertificates(
    const DescribeListenerCertificatesRequest& request) const {
  return DescribeListenerCertificatesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeListenersOutcome ElasticLoadBalancingv2Client::DescribeListeners(const DescribeListenersRequest& request) const {
  return DescribeListenersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeLoadBalancerAttributesOutcome ElasticLoadBalancingv2Client::DescribeLoadBalancerAttributes(
    const DescribeLoadBalancerAttributesRequest& request) const {
  return DescribeLoadBalancerAttributesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeLoadBalancersOutcome ElasticLoadBalancingv2Client::DescribeLoadBalancers(const DescribeLoadBalancersRequest& request) const {
  return DescribeLoadBalancersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeRulesOutcome ElasticLoadBalancingv2Client::DescribeRules(const DescribeRulesRequest& request) const {
  return DescribeRulesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeSSLPoliciesOutcome ElasticLoadBalancingv2Client::DescribeSSLPolicies(const DescribeSSLPoliciesRequest& request) const {
  return DescribeSSLPoliciesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeTagsOutcome ElasticLoadBalancingv2Client::DescribeTags(const DescribeTagsRequest& request) const {
  return DescribeTagsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeTargetGroupAttributesOutcome ElasticLoadBalancingv2Client::DescribeTargetGroupAttributes(
    const DescribeTargetGroupAttributesRequest& request) const {
  return DescribeTargetGroupAttributesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeTargetGroupsOutcome ElasticLoadBalancingv2Client::DescribeTargetGroups(const DescribeTargetGroupsRequest& request) const {
  return DescribeTargetGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeTargetHealthOutcome ElasticLoadBalancingv2Client::DescribeTargetHealth(const DescribeTargetHealthRequest& request) const {
  return DescribeTargetHealthOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeTrustStoreAssociationsOutcome ElasticLoadBalancingv2Client::DescribeTrustStoreAssociations(
    const DescribeTrustStoreAssociationsRequest& request) const {
  return DescribeTrustStoreAssociationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeTrustStoreRevocationsOutcome ElasticLoadBalancingv2Client::DescribeTrustStoreRevocations(
    const DescribeTrustStoreRevocationsRequest& request) const {
  return DescribeTrustStoreRevocationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeTrustStoresOutcome ElasticLoadBalancingv2Client::DescribeTrustStores(const DescribeTrustStoresRequest& request) const {
  return DescribeTrustStoresOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetResourcePolicyOutcome ElasticLoadBalancingv2Client::GetResourcePolicy(const GetResourcePolicyRequest& request) const {
  return GetResourcePolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetTrustStoreCaCertificatesBundleOutcome ElasticLoadBalancingv2Client::GetTrustStoreCaCertificatesBundle(
    const GetTrustStoreCaCertificatesBundleRequest& request) const {
  return GetTrustStoreCaCertificatesBundleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetTrustStoreRevocationContentOutcome ElasticLoadBalancingv2Client::GetTrustStoreRevocationContent(
    const GetTrustStoreRevocationContentRequest& request) const {
  return GetTrustStoreRevocationContentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyCapacityReservationOutcome ElasticLoadBalancingv2Client::ModifyCapacityReservation(
    const ModifyCapacityReservationRequest& request) const {
  return ModifyCapacityReservationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyIpPoolsOutcome ElasticLoadBalancingv2Client::ModifyIpPools(const ModifyIpPoolsRequest& request) const {
  return ModifyIpPoolsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyListenerOutcome ElasticLoadBalancingv2Client::ModifyListener(const ModifyListenerRequest& request) const {
  return ModifyListenerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyListenerAttributesOutcome ElasticLoadBalancingv2Client::ModifyListenerAttributes(
    const ModifyListenerAttributesRequest& request) const {
  return ModifyListenerAttributesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyLoadBalancerAttributesOutcome ElasticLoadBalancingv2Client::ModifyLoadBalancerAttributes(
    const ModifyLoadBalancerAttributesRequest& request) const {
  return ModifyLoadBalancerAttributesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyRuleOutcome ElasticLoadBalancingv2Client::ModifyRule(const ModifyRuleRequest& request) const {
  return ModifyRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyTargetGroupOutcome ElasticLoadBalancingv2Client::ModifyTargetGroup(const ModifyTargetGroupRequest& request) const {
  return ModifyTargetGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyTargetGroupAttributesOutcome ElasticLoadBalancingv2Client::ModifyTargetGroupAttributes(
    const ModifyTargetGroupAttributesRequest& request) const {
  return ModifyTargetGroupAttributesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyTrustStoreOutcome ElasticLoadBalancingv2Client::ModifyTrustStore(const ModifyTrustStoreRequest& request) const {
  return ModifyTrustStoreOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RegisterTargetsOutcome ElasticLoadBalancingv2Client::RegisterTargets(const RegisterTargetsRequest& request) const {
  return RegisterTargetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RemoveListenerCertificatesOutcome ElasticLoadBalancingv2Client::RemoveListenerCertificates(
    const RemoveListenerCertificatesRequest& request) const {
  return RemoveListenerCertificatesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RemoveTagsOutcome ElasticLoadBalancingv2Client::RemoveTags(const RemoveTagsRequest& request) const {
  return RemoveTagsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RemoveTrustStoreRevocationsOutcome ElasticLoadBalancingv2Client::RemoveTrustStoreRevocations(
    const RemoveTrustStoreRevocationsRequest& request) const {
  return RemoveTrustStoreRevocationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SetIpAddressTypeOutcome ElasticLoadBalancingv2Client::SetIpAddressType(const SetIpAddressTypeRequest& request) const {
  return SetIpAddressTypeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SetRulePrioritiesOutcome ElasticLoadBalancingv2Client::SetRulePriorities(const SetRulePrioritiesRequest& request) const {
  return SetRulePrioritiesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SetSecurityGroupsOutcome ElasticLoadBalancingv2Client::SetSecurityGroups(const SetSecurityGroupsRequest& request) const {
  return SetSecurityGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SetSubnetsOutcome ElasticLoadBalancingv2Client::SetSubnets(const SetSubnetsRequest& request) const {
  return SetSubnetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
