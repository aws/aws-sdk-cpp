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
#include <aws/eks/EKSClient.h>
#include <aws/eks/EKSEndpointProvider.h>
#include <aws/eks/EKSErrorMarshaller.h>
#include <aws/eks/model/AssociateAccessPolicyRequest.h>
#include <aws/eks/model/AssociateEncryptionConfigRequest.h>
#include <aws/eks/model/AssociateIdentityProviderConfigRequest.h>
#include <aws/eks/model/CreateAccessEntryRequest.h>
#include <aws/eks/model/CreateAddonRequest.h>
#include <aws/eks/model/CreateCapabilityRequest.h>
#include <aws/eks/model/CreateClusterRequest.h>
#include <aws/eks/model/CreateEksAnywhereSubscriptionRequest.h>
#include <aws/eks/model/CreateFargateProfileRequest.h>
#include <aws/eks/model/CreateNodegroupRequest.h>
#include <aws/eks/model/CreatePodIdentityAssociationRequest.h>
#include <aws/eks/model/DeleteAccessEntryRequest.h>
#include <aws/eks/model/DeleteAddonRequest.h>
#include <aws/eks/model/DeleteCapabilityRequest.h>
#include <aws/eks/model/DeleteClusterRequest.h>
#include <aws/eks/model/DeleteEksAnywhereSubscriptionRequest.h>
#include <aws/eks/model/DeleteFargateProfileRequest.h>
#include <aws/eks/model/DeleteNodegroupRequest.h>
#include <aws/eks/model/DeletePodIdentityAssociationRequest.h>
#include <aws/eks/model/DeregisterClusterRequest.h>
#include <aws/eks/model/DescribeAccessEntryRequest.h>
#include <aws/eks/model/DescribeAddonConfigurationRequest.h>
#include <aws/eks/model/DescribeAddonRequest.h>
#include <aws/eks/model/DescribeAddonVersionsRequest.h>
#include <aws/eks/model/DescribeCapabilityRequest.h>
#include <aws/eks/model/DescribeClusterRequest.h>
#include <aws/eks/model/DescribeClusterVersionsRequest.h>
#include <aws/eks/model/DescribeEksAnywhereSubscriptionRequest.h>
#include <aws/eks/model/DescribeFargateProfileRequest.h>
#include <aws/eks/model/DescribeIdentityProviderConfigRequest.h>
#include <aws/eks/model/DescribeInsightRequest.h>
#include <aws/eks/model/DescribeInsightsRefreshRequest.h>
#include <aws/eks/model/DescribeNodegroupRequest.h>
#include <aws/eks/model/DescribePodIdentityAssociationRequest.h>
#include <aws/eks/model/DescribeUpdateRequest.h>
#include <aws/eks/model/DisassociateAccessPolicyRequest.h>
#include <aws/eks/model/DisassociateIdentityProviderConfigRequest.h>
#include <aws/eks/model/ListAccessEntriesRequest.h>
#include <aws/eks/model/ListAccessPoliciesRequest.h>
#include <aws/eks/model/ListAddonsRequest.h>
#include <aws/eks/model/ListAssociatedAccessPoliciesRequest.h>
#include <aws/eks/model/ListCapabilitiesRequest.h>
#include <aws/eks/model/ListClustersRequest.h>
#include <aws/eks/model/ListEksAnywhereSubscriptionsRequest.h>
#include <aws/eks/model/ListFargateProfilesRequest.h>
#include <aws/eks/model/ListIdentityProviderConfigsRequest.h>
#include <aws/eks/model/ListInsightsRequest.h>
#include <aws/eks/model/ListNodegroupsRequest.h>
#include <aws/eks/model/ListPodIdentityAssociationsRequest.h>
#include <aws/eks/model/ListTagsForResourceRequest.h>
#include <aws/eks/model/ListUpdatesRequest.h>
#include <aws/eks/model/RegisterClusterRequest.h>
#include <aws/eks/model/StartInsightsRefreshRequest.h>
#include <aws/eks/model/TagResourceRequest.h>
#include <aws/eks/model/UntagResourceRequest.h>
#include <aws/eks/model/UpdateAccessEntryRequest.h>
#include <aws/eks/model/UpdateAddonRequest.h>
#include <aws/eks/model/UpdateCapabilityRequest.h>
#include <aws/eks/model/UpdateClusterConfigRequest.h>
#include <aws/eks/model/UpdateClusterVersionRequest.h>
#include <aws/eks/model/UpdateEksAnywhereSubscriptionRequest.h>
#include <aws/eks/model/UpdateNodegroupConfigRequest.h>
#include <aws/eks/model/UpdateNodegroupVersionRequest.h>
#include <aws/eks/model/UpdatePodIdentityAssociationRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::EKS;
using namespace Aws::EKS::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace EKS {
const char SERVICE_NAME[] = "eks";
const char ALLOCATION_TAG[] = "EKSClient";
}  // namespace EKS
}  // namespace Aws
const char* EKSClient::GetServiceName() { return SERVICE_NAME; }
const char* EKSClient::GetAllocationTag() { return ALLOCATION_TAG; }

EKSClient::EKSClient(const EKS::EKSClientConfiguration& clientConfiguration, std::shared_ptr<EKSEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EKSErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<EKSEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

EKSClient::EKSClient(const AWSCredentials& credentials, std::shared_ptr<EKSEndpointProviderBase> endpointProvider,
                     const EKS::EKSClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EKSErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<EKSEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

EKSClient::EKSClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     std::shared_ptr<EKSEndpointProviderBase> endpointProvider, const EKS::EKSClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EKSErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<EKSEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
EKSClient::EKSClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EKSErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<EKSEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

EKSClient::EKSClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EKSErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<EKSEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

EKSClient::EKSClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EKSErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<EKSEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
EKSClient::~EKSClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<EKSEndpointProviderBase>& EKSClient::accessEndpointProvider() { return m_endpointProvider; }

void EKSClient::init(const EKS::EKSClientConfiguration& config) {
  AWSClient::SetServiceClientName("EKS");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "eks");
}

void EKSClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
EKSClient::InvokeOperationOutcome EKSClient::InvokeServiceOperation(
    const AmazonWebServiceRequest& request, const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
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

        resolveUri(endpointResolutionOutcome);

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

AssociateAccessPolicyOutcome EKSClient::AssociateAccessPolicy(const AssociateAccessPolicyRequest& request) const {
  if (!request.ClusterNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateAccessPolicy", "Required field: ClusterName, is not set");
    return AssociateAccessPolicyOutcome(
        Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  if (!request.PrincipalArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateAccessPolicy", "Required field: PrincipalArn, is not set");
    return AssociateAccessPolicyOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [PrincipalArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/access-entries/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPrincipalArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/access-policies");
  };

  return AssociateAccessPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

AssociateEncryptionConfigOutcome EKSClient::AssociateEncryptionConfig(const AssociateEncryptionConfigRequest& request) const {
  if (!request.ClusterNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateEncryptionConfig", "Required field: ClusterName, is not set");
    return AssociateEncryptionConfigOutcome(
        Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/encryption-config/associate");
  };

  return AssociateEncryptionConfigOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

AssociateIdentityProviderConfigOutcome EKSClient::AssociateIdentityProviderConfig(
    const AssociateIdentityProviderConfigRequest& request) const {
  if (!request.ClusterNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateIdentityProviderConfig", "Required field: ClusterName, is not set");
    return AssociateIdentityProviderConfigOutcome(
        Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/identity-provider-configs/associate");
  };

  return AssociateIdentityProviderConfigOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAccessEntryOutcome EKSClient::CreateAccessEntry(const CreateAccessEntryRequest& request) const {
  if (!request.ClusterNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateAccessEntry", "Required field: ClusterName, is not set");
    return CreateAccessEntryOutcome(
        Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/access-entries");
  };

  return CreateAccessEntryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAddonOutcome EKSClient::CreateAddon(const CreateAddonRequest& request) const {
  if (!request.ClusterNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateAddon", "Required field: ClusterName, is not set");
    return CreateAddonOutcome(
        Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/addons");
  };

  return CreateAddonOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateCapabilityOutcome EKSClient::CreateCapability(const CreateCapabilityRequest& request) const {
  if (!request.ClusterNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateCapability", "Required field: ClusterName, is not set");
    return CreateCapabilityOutcome(
        Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/capabilities");
  };

  return CreateCapabilityOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateClusterOutcome EKSClient::CreateCluster(const CreateClusterRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/clusters");
  };

  return CreateClusterOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateEksAnywhereSubscriptionOutcome EKSClient::CreateEksAnywhereSubscription(const CreateEksAnywhereSubscriptionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/eks-anywhere-subscriptions");
  };

  return CreateEksAnywhereSubscriptionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateFargateProfileOutcome EKSClient::CreateFargateProfile(const CreateFargateProfileRequest& request) const {
  if (!request.ClusterNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateFargateProfile", "Required field: ClusterName, is not set");
    return CreateFargateProfileOutcome(
        Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/fargate-profiles");
  };

  return CreateFargateProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateNodegroupOutcome EKSClient::CreateNodegroup(const CreateNodegroupRequest& request) const {
  if (!request.ClusterNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateNodegroup", "Required field: ClusterName, is not set");
    return CreateNodegroupOutcome(
        Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/node-groups");
  };

  return CreateNodegroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreatePodIdentityAssociationOutcome EKSClient::CreatePodIdentityAssociation(const CreatePodIdentityAssociationRequest& request) const {
  if (!request.ClusterNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreatePodIdentityAssociation", "Required field: ClusterName, is not set");
    return CreatePodIdentityAssociationOutcome(
        Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/pod-identity-associations");
  };

  return CreatePodIdentityAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAccessEntryOutcome EKSClient::DeleteAccessEntry(const DeleteAccessEntryRequest& request) const {
  if (!request.ClusterNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAccessEntry", "Required field: ClusterName, is not set");
    return DeleteAccessEntryOutcome(
        Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  if (!request.PrincipalArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAccessEntry", "Required field: PrincipalArn, is not set");
    return DeleteAccessEntryOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [PrincipalArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/access-entries/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPrincipalArn());
  };

  return DeleteAccessEntryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteAddonOutcome EKSClient::DeleteAddon(const DeleteAddonRequest& request) const {
  if (!request.ClusterNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAddon", "Required field: ClusterName, is not set");
    return DeleteAddonOutcome(
        Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  if (!request.AddonNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAddon", "Required field: AddonName, is not set");
    return DeleteAddonOutcome(
        Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AddonName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/addons/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAddonName());
  };

  return DeleteAddonOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteCapabilityOutcome EKSClient::DeleteCapability(const DeleteCapabilityRequest& request) const {
  if (!request.ClusterNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteCapability", "Required field: ClusterName, is not set");
    return DeleteCapabilityOutcome(
        Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  if (!request.CapabilityNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteCapability", "Required field: CapabilityName, is not set");
    return DeleteCapabilityOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [CapabilityName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/capabilities/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCapabilityName());
  };

  return DeleteCapabilityOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteClusterOutcome EKSClient::DeleteCluster(const DeleteClusterRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteCluster", "Required field: Name, is not set");
    return DeleteClusterOutcome(
        Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return DeleteClusterOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteEksAnywhereSubscriptionOutcome EKSClient::DeleteEksAnywhereSubscription(const DeleteEksAnywhereSubscriptionRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteEksAnywhereSubscription", "Required field: Id, is not set");
    return DeleteEksAnywhereSubscriptionOutcome(
        Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/eks-anywhere-subscriptions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return DeleteEksAnywhereSubscriptionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteFargateProfileOutcome EKSClient::DeleteFargateProfile(const DeleteFargateProfileRequest& request) const {
  if (!request.ClusterNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteFargateProfile", "Required field: ClusterName, is not set");
    return DeleteFargateProfileOutcome(
        Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  if (!request.FargateProfileNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteFargateProfile", "Required field: FargateProfileName, is not set");
    return DeleteFargateProfileOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [FargateProfileName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/fargate-profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFargateProfileName());
  };

  return DeleteFargateProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteNodegroupOutcome EKSClient::DeleteNodegroup(const DeleteNodegroupRequest& request) const {
  if (!request.ClusterNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteNodegroup", "Required field: ClusterName, is not set");
    return DeleteNodegroupOutcome(
        Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  if (!request.NodegroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteNodegroup", "Required field: NodegroupName, is not set");
    return DeleteNodegroupOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [NodegroupName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/node-groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNodegroupName());
  };

  return DeleteNodegroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeletePodIdentityAssociationOutcome EKSClient::DeletePodIdentityAssociation(const DeletePodIdentityAssociationRequest& request) const {
  if (!request.ClusterNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePodIdentityAssociation", "Required field: ClusterName, is not set");
    return DeletePodIdentityAssociationOutcome(
        Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  if (!request.AssociationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePodIdentityAssociation", "Required field: AssociationId, is not set");
    return DeletePodIdentityAssociationOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [AssociationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/pod-identity-associations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssociationId());
  };

  return DeletePodIdentityAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeregisterClusterOutcome EKSClient::DeregisterCluster(const DeregisterClusterRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeregisterCluster", "Required field: Name, is not set");
    return DeregisterClusterOutcome(
        Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cluster-registrations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return DeregisterClusterOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DescribeAccessEntryOutcome EKSClient::DescribeAccessEntry(const DescribeAccessEntryRequest& request) const {
  if (!request.ClusterNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeAccessEntry", "Required field: ClusterName, is not set");
    return DescribeAccessEntryOutcome(
        Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  if (!request.PrincipalArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeAccessEntry", "Required field: PrincipalArn, is not set");
    return DescribeAccessEntryOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [PrincipalArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/access-entries/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPrincipalArn());
  };

  return DescribeAccessEntryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeAddonOutcome EKSClient::DescribeAddon(const DescribeAddonRequest& request) const {
  if (!request.ClusterNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeAddon", "Required field: ClusterName, is not set");
    return DescribeAddonOutcome(
        Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  if (!request.AddonNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeAddon", "Required field: AddonName, is not set");
    return DescribeAddonOutcome(
        Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AddonName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/addons/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAddonName());
  };

  return DescribeAddonOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeAddonConfigurationOutcome EKSClient::DescribeAddonConfiguration(const DescribeAddonConfigurationRequest& request) const {
  if (!request.AddonNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeAddonConfiguration", "Required field: AddonName, is not set");
    return DescribeAddonConfigurationOutcome(
        Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AddonName]", false));
  }
  if (!request.AddonVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeAddonConfiguration", "Required field: AddonVersion, is not set");
    return DescribeAddonConfigurationOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [AddonVersion]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/addons/configuration-schemas");
  };

  return DescribeAddonConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeAddonVersionsOutcome EKSClient::DescribeAddonVersions(const DescribeAddonVersionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/addons/supported-versions");
  };

  return DescribeAddonVersionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeCapabilityOutcome EKSClient::DescribeCapability(const DescribeCapabilityRequest& request) const {
  if (!request.ClusterNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeCapability", "Required field: ClusterName, is not set");
    return DescribeCapabilityOutcome(
        Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  if (!request.CapabilityNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeCapability", "Required field: CapabilityName, is not set");
    return DescribeCapabilityOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [CapabilityName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/capabilities/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCapabilityName());
  };

  return DescribeCapabilityOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeClusterOutcome EKSClient::DescribeCluster(const DescribeClusterRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeCluster", "Required field: Name, is not set");
    return DescribeClusterOutcome(
        Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return DescribeClusterOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeClusterVersionsOutcome EKSClient::DescribeClusterVersions(const DescribeClusterVersionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cluster-versions");
  };

  return DescribeClusterVersionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeEksAnywhereSubscriptionOutcome EKSClient::DescribeEksAnywhereSubscription(
    const DescribeEksAnywhereSubscriptionRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeEksAnywhereSubscription", "Required field: Id, is not set");
    return DescribeEksAnywhereSubscriptionOutcome(
        Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/eks-anywhere-subscriptions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return DescribeEksAnywhereSubscriptionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeFargateProfileOutcome EKSClient::DescribeFargateProfile(const DescribeFargateProfileRequest& request) const {
  if (!request.ClusterNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeFargateProfile", "Required field: ClusterName, is not set");
    return DescribeFargateProfileOutcome(
        Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  if (!request.FargateProfileNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeFargateProfile", "Required field: FargateProfileName, is not set");
    return DescribeFargateProfileOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [FargateProfileName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/fargate-profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFargateProfileName());
  };

  return DescribeFargateProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeIdentityProviderConfigOutcome EKSClient::DescribeIdentityProviderConfig(
    const DescribeIdentityProviderConfigRequest& request) const {
  if (!request.ClusterNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeIdentityProviderConfig", "Required field: ClusterName, is not set");
    return DescribeIdentityProviderConfigOutcome(
        Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/identity-provider-configs/describe");
  };

  return DescribeIdentityProviderConfigOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeInsightOutcome EKSClient::DescribeInsight(const DescribeInsightRequest& request) const {
  if (!request.ClusterNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeInsight", "Required field: ClusterName, is not set");
    return DescribeInsightOutcome(
        Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeInsight", "Required field: Id, is not set");
    return DescribeInsightOutcome(
        Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/insights/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return DescribeInsightOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeInsightsRefreshOutcome EKSClient::DescribeInsightsRefresh(const DescribeInsightsRefreshRequest& request) const {
  if (!request.ClusterNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeInsightsRefresh", "Required field: ClusterName, is not set");
    return DescribeInsightsRefreshOutcome(
        Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/insights-refresh");
  };

  return DescribeInsightsRefreshOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeNodegroupOutcome EKSClient::DescribeNodegroup(const DescribeNodegroupRequest& request) const {
  if (!request.ClusterNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeNodegroup", "Required field: ClusterName, is not set");
    return DescribeNodegroupOutcome(
        Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  if (!request.NodegroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeNodegroup", "Required field: NodegroupName, is not set");
    return DescribeNodegroupOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [NodegroupName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/node-groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNodegroupName());
  };

  return DescribeNodegroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribePodIdentityAssociationOutcome EKSClient::DescribePodIdentityAssociation(
    const DescribePodIdentityAssociationRequest& request) const {
  if (!request.ClusterNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribePodIdentityAssociation", "Required field: ClusterName, is not set");
    return DescribePodIdentityAssociationOutcome(
        Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  if (!request.AssociationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribePodIdentityAssociation", "Required field: AssociationId, is not set");
    return DescribePodIdentityAssociationOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [AssociationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/pod-identity-associations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssociationId());
  };

  return DescribePodIdentityAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeUpdateOutcome EKSClient::DescribeUpdate(const DescribeUpdateRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeUpdate", "Required field: Name, is not set");
    return DescribeUpdateOutcome(
        Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (!request.UpdateIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeUpdate", "Required field: UpdateId, is not set");
    return DescribeUpdateOutcome(
        Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UpdateId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/updates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUpdateId());
  };

  return DescribeUpdateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DisassociateAccessPolicyOutcome EKSClient::DisassociateAccessPolicy(const DisassociateAccessPolicyRequest& request) const {
  if (!request.ClusterNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateAccessPolicy", "Required field: ClusterName, is not set");
    return DisassociateAccessPolicyOutcome(
        Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  if (!request.PrincipalArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateAccessPolicy", "Required field: PrincipalArn, is not set");
    return DisassociateAccessPolicyOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [PrincipalArn]", false));
  }
  if (!request.PolicyArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateAccessPolicy", "Required field: PolicyArn, is not set");
    return DisassociateAccessPolicyOutcome(
        Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/access-entries/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPrincipalArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/access-policies/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPolicyArn());
  };

  return DisassociateAccessPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DisassociateIdentityProviderConfigOutcome EKSClient::DisassociateIdentityProviderConfig(
    const DisassociateIdentityProviderConfigRequest& request) const {
  if (!request.ClusterNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateIdentityProviderConfig", "Required field: ClusterName, is not set");
    return DisassociateIdentityProviderConfigOutcome(
        Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/identity-provider-configs/disassociate");
  };

  return DisassociateIdentityProviderConfigOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAccessEntriesOutcome EKSClient::ListAccessEntries(const ListAccessEntriesRequest& request) const {
  if (!request.ClusterNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAccessEntries", "Required field: ClusterName, is not set");
    return ListAccessEntriesOutcome(
        Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/access-entries");
  };

  return ListAccessEntriesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListAccessPoliciesOutcome EKSClient::ListAccessPolicies(const ListAccessPoliciesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/access-policies");
  };

  return ListAccessPoliciesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListAddonsOutcome EKSClient::ListAddons(const ListAddonsRequest& request) const {
  if (!request.ClusterNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAddons", "Required field: ClusterName, is not set");
    return ListAddonsOutcome(
        Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/addons");
  };

  return ListAddonsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListAssociatedAccessPoliciesOutcome EKSClient::ListAssociatedAccessPolicies(const ListAssociatedAccessPoliciesRequest& request) const {
  if (!request.ClusterNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAssociatedAccessPolicies", "Required field: ClusterName, is not set");
    return ListAssociatedAccessPoliciesOutcome(
        Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  if (!request.PrincipalArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAssociatedAccessPolicies", "Required field: PrincipalArn, is not set");
    return ListAssociatedAccessPoliciesOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [PrincipalArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/access-entries/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPrincipalArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/access-policies");
  };

  return ListAssociatedAccessPoliciesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListCapabilitiesOutcome EKSClient::ListCapabilities(const ListCapabilitiesRequest& request) const {
  if (!request.ClusterNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListCapabilities", "Required field: ClusterName, is not set");
    return ListCapabilitiesOutcome(
        Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/capabilities");
  };

  return ListCapabilitiesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListClustersOutcome EKSClient::ListClusters(const ListClustersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/clusters");
  };

  return ListClustersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListEksAnywhereSubscriptionsOutcome EKSClient::ListEksAnywhereSubscriptions(const ListEksAnywhereSubscriptionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/eks-anywhere-subscriptions");
  };

  return ListEksAnywhereSubscriptionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListFargateProfilesOutcome EKSClient::ListFargateProfiles(const ListFargateProfilesRequest& request) const {
  if (!request.ClusterNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListFargateProfiles", "Required field: ClusterName, is not set");
    return ListFargateProfilesOutcome(
        Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/fargate-profiles");
  };

  return ListFargateProfilesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListIdentityProviderConfigsOutcome EKSClient::ListIdentityProviderConfigs(const ListIdentityProviderConfigsRequest& request) const {
  if (!request.ClusterNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListIdentityProviderConfigs", "Required field: ClusterName, is not set");
    return ListIdentityProviderConfigsOutcome(
        Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/identity-provider-configs");
  };

  return ListIdentityProviderConfigsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListInsightsOutcome EKSClient::ListInsights(const ListInsightsRequest& request) const {
  if (!request.ClusterNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListInsights", "Required field: ClusterName, is not set");
    return ListInsightsOutcome(
        Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/insights");
  };

  return ListInsightsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListNodegroupsOutcome EKSClient::ListNodegroups(const ListNodegroupsRequest& request) const {
  if (!request.ClusterNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListNodegroups", "Required field: ClusterName, is not set");
    return ListNodegroupsOutcome(
        Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/node-groups");
  };

  return ListNodegroupsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListPodIdentityAssociationsOutcome EKSClient::ListPodIdentityAssociations(const ListPodIdentityAssociationsRequest& request) const {
  if (!request.ClusterNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListPodIdentityAssociations", "Required field: ClusterName, is not set");
    return ListPodIdentityAssociationsOutcome(
        Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/pod-identity-associations");
  };

  return ListPodIdentityAssociationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForResourceOutcome EKSClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(
        Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListUpdatesOutcome EKSClient::ListUpdates(const ListUpdatesRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListUpdates", "Required field: Name, is not set");
    return ListUpdatesOutcome(
        Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/updates");
  };

  return ListUpdatesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

RegisterClusterOutcome EKSClient::RegisterCluster(const RegisterClusterRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cluster-registrations");
  };

  return RegisterClusterOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartInsightsRefreshOutcome EKSClient::StartInsightsRefresh(const StartInsightsRefreshRequest& request) const {
  if (!request.ClusterNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartInsightsRefresh", "Required field: ClusterName, is not set");
    return StartInsightsRefreshOutcome(
        Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/insights-refresh");
  };

  return StartInsightsRefreshOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome EKSClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(
        Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome EKSClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(
        Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(
        Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

UpdateAccessEntryOutcome EKSClient::UpdateAccessEntry(const UpdateAccessEntryRequest& request) const {
  if (!request.ClusterNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAccessEntry", "Required field: ClusterName, is not set");
    return UpdateAccessEntryOutcome(
        Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  if (!request.PrincipalArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAccessEntry", "Required field: PrincipalArn, is not set");
    return UpdateAccessEntryOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [PrincipalArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/access-entries/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPrincipalArn());
  };

  return UpdateAccessEntryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateAddonOutcome EKSClient::UpdateAddon(const UpdateAddonRequest& request) const {
  if (!request.ClusterNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAddon", "Required field: ClusterName, is not set");
    return UpdateAddonOutcome(
        Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  if (!request.AddonNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAddon", "Required field: AddonName, is not set");
    return UpdateAddonOutcome(
        Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AddonName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/addons/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAddonName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/update");
  };

  return UpdateAddonOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateCapabilityOutcome EKSClient::UpdateCapability(const UpdateCapabilityRequest& request) const {
  if (!request.ClusterNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateCapability", "Required field: ClusterName, is not set");
    return UpdateCapabilityOutcome(
        Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  if (!request.CapabilityNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateCapability", "Required field: CapabilityName, is not set");
    return UpdateCapabilityOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [CapabilityName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/capabilities/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCapabilityName());
  };

  return UpdateCapabilityOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateClusterConfigOutcome EKSClient::UpdateClusterConfig(const UpdateClusterConfigRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateClusterConfig", "Required field: Name, is not set");
    return UpdateClusterConfigOutcome(
        Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/update-config");
  };

  return UpdateClusterConfigOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateClusterVersionOutcome EKSClient::UpdateClusterVersion(const UpdateClusterVersionRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateClusterVersion", "Required field: Name, is not set");
    return UpdateClusterVersionOutcome(
        Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/updates");
  };

  return UpdateClusterVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateEksAnywhereSubscriptionOutcome EKSClient::UpdateEksAnywhereSubscription(const UpdateEksAnywhereSubscriptionRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateEksAnywhereSubscription", "Required field: Id, is not set");
    return UpdateEksAnywhereSubscriptionOutcome(
        Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/eks-anywhere-subscriptions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return UpdateEksAnywhereSubscriptionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateNodegroupConfigOutcome EKSClient::UpdateNodegroupConfig(const UpdateNodegroupConfigRequest& request) const {
  if (!request.ClusterNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateNodegroupConfig", "Required field: ClusterName, is not set");
    return UpdateNodegroupConfigOutcome(
        Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  if (!request.NodegroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateNodegroupConfig", "Required field: NodegroupName, is not set");
    return UpdateNodegroupConfigOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [NodegroupName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/node-groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNodegroupName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/update-config");
  };

  return UpdateNodegroupConfigOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateNodegroupVersionOutcome EKSClient::UpdateNodegroupVersion(const UpdateNodegroupVersionRequest& request) const {
  if (!request.ClusterNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateNodegroupVersion", "Required field: ClusterName, is not set");
    return UpdateNodegroupVersionOutcome(
        Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  if (!request.NodegroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateNodegroupVersion", "Required field: NodegroupName, is not set");
    return UpdateNodegroupVersionOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [NodegroupName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/node-groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNodegroupName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/update-version");
  };

  return UpdateNodegroupVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdatePodIdentityAssociationOutcome EKSClient::UpdatePodIdentityAssociation(const UpdatePodIdentityAssociationRequest& request) const {
  if (!request.ClusterNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdatePodIdentityAssociation", "Required field: ClusterName, is not set");
    return UpdatePodIdentityAssociationOutcome(
        Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  if (!request.AssociationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdatePodIdentityAssociation", "Required field: AssociationId, is not set");
    return UpdatePodIdentityAssociationOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [AssociationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/pod-identity-associations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssociationId());
  };

  return UpdatePodIdentityAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}
