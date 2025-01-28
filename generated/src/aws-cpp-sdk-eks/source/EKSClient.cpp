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


#include <aws/eks/EKSClient.h>
#include <aws/eks/EKSErrorMarshaller.h>
#include <aws/eks/EKSEndpointProvider.h>
#include <aws/eks/model/AssociateAccessPolicyRequest.h>
#include <aws/eks/model/AssociateEncryptionConfigRequest.h>
#include <aws/eks/model/AssociateIdentityProviderConfigRequest.h>
#include <aws/eks/model/CreateAccessEntryRequest.h>
#include <aws/eks/model/CreateAddonRequest.h>
#include <aws/eks/model/CreateClusterRequest.h>
#include <aws/eks/model/CreateEksAnywhereSubscriptionRequest.h>
#include <aws/eks/model/CreateFargateProfileRequest.h>
#include <aws/eks/model/CreateNodegroupRequest.h>
#include <aws/eks/model/CreatePodIdentityAssociationRequest.h>
#include <aws/eks/model/DeleteAccessEntryRequest.h>
#include <aws/eks/model/DeleteAddonRequest.h>
#include <aws/eks/model/DeleteClusterRequest.h>
#include <aws/eks/model/DeleteEksAnywhereSubscriptionRequest.h>
#include <aws/eks/model/DeleteFargateProfileRequest.h>
#include <aws/eks/model/DeleteNodegroupRequest.h>
#include <aws/eks/model/DeletePodIdentityAssociationRequest.h>
#include <aws/eks/model/DeregisterClusterRequest.h>
#include <aws/eks/model/DescribeAccessEntryRequest.h>
#include <aws/eks/model/DescribeAddonRequest.h>
#include <aws/eks/model/DescribeAddonConfigurationRequest.h>
#include <aws/eks/model/DescribeAddonVersionsRequest.h>
#include <aws/eks/model/DescribeClusterRequest.h>
#include <aws/eks/model/DescribeClusterVersionsRequest.h>
#include <aws/eks/model/DescribeEksAnywhereSubscriptionRequest.h>
#include <aws/eks/model/DescribeFargateProfileRequest.h>
#include <aws/eks/model/DescribeIdentityProviderConfigRequest.h>
#include <aws/eks/model/DescribeInsightRequest.h>
#include <aws/eks/model/DescribeNodegroupRequest.h>
#include <aws/eks/model/DescribePodIdentityAssociationRequest.h>
#include <aws/eks/model/DescribeUpdateRequest.h>
#include <aws/eks/model/DisassociateAccessPolicyRequest.h>
#include <aws/eks/model/DisassociateIdentityProviderConfigRequest.h>
#include <aws/eks/model/ListAccessEntriesRequest.h>
#include <aws/eks/model/ListAccessPoliciesRequest.h>
#include <aws/eks/model/ListAddonsRequest.h>
#include <aws/eks/model/ListAssociatedAccessPoliciesRequest.h>
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
#include <aws/eks/model/TagResourceRequest.h>
#include <aws/eks/model/UntagResourceRequest.h>
#include <aws/eks/model/UpdateAccessEntryRequest.h>
#include <aws/eks/model/UpdateAddonRequest.h>
#include <aws/eks/model/UpdateClusterConfigRequest.h>
#include <aws/eks/model/UpdateClusterVersionRequest.h>
#include <aws/eks/model/UpdateEksAnywhereSubscriptionRequest.h>
#include <aws/eks/model/UpdateNodegroupConfigRequest.h>
#include <aws/eks/model/UpdateNodegroupVersionRequest.h>
#include <aws/eks/model/UpdatePodIdentityAssociationRequest.h>

#include <smithy/tracing/TracingUtils.h>

#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::EKS;
using namespace Aws::EKS::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws
{
  namespace EKS
  {
    const char ALLOCATION_TAG[] = "EKSClient";
    const char SERVICE_NAME[] = "eks";
  }
}
const char* EKSClient::GetServiceName() {return SERVICE_NAME;}
const char* EKSClient::GetAllocationTag() {return ALLOCATION_TAG;}

EKSClient::EKSClient(const EKS::EKSClientConfiguration& clientConfiguration,
                           std::shared_ptr<EKSEndpointProviderBase> endpointProvider) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "EKS",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<EKSErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<EKSEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region}},
        })
{}

EKSClient::EKSClient(const AWSCredentials& credentials,
                           std::shared_ptr<EKSEndpointProviderBase> endpointProvider,
                           const EKS::EKSClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "EKS",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<EKSErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<EKSEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}},
        })
{}

EKSClient::EKSClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<EKSEndpointProviderBase> endpointProvider,
                           const EKS::EKSClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "EKS",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<EKSErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<EKSEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{ Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}

/* Legacy constructors due deprecation */
EKSClient::EKSClient(const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
      GetServiceName(),
      "EKS",
      Aws::Http::CreateHttpClient(clientConfiguration),
      Aws::MakeShared<EKSErrorMarshaller>(ALLOCATION_TAG),
      Aws::MakeShared<EKSEndpointProvider>(ALLOCATION_TAG),
      Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
      {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::DefaultAwsCredentialIdentityResolver>(ALLOCATION_TAG), GetServiceName(), clientConfiguration.region}}
      })
{}

EKSClient::EKSClient(const AWSCredentials& credentials,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "EKS",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<EKSErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<EKSEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}}
        })
{}

EKSClient::EKSClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "EKS",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<EKSErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<EKSEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}
/* End of legacy constructors due deprecation */

EKSClient::~EKSClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<EKSEndpointProviderBase>& EKSClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void EKSClient::OverrideEndpoint(const Aws::String& endpoint)
{
    AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
    m_endpointProvider->OverrideEndpoint(endpoint);
}
AssociateAccessPolicyOutcome EKSClient::AssociateAccessPolicy(const AssociateAccessPolicyRequest& request) const
{
  AWS_OPERATION_GUARD(AssociateAccessPolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateAccessPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateAccessPolicy", "Required field: ClusterName, is not set");
    return AssociateAccessPolicyOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  if (!request.PrincipalArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateAccessPolicy", "Required field: PrincipalArn, is not set");
    return AssociateAccessPolicyOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PrincipalArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, AssociateAccessPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AssociateAccessPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AssociateAccessPolicy",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AssociateAccessPolicyOutcome>(
    [&]()-> AssociateAccessPolicyOutcome {
      return AssociateAccessPolicyOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/clusters/");
      resolvedEndpoint.AddPathSegment(request.GetClusterName());
      resolvedEndpoint.AddPathSegments("/access-entries/");
      resolvedEndpoint.AddPathSegment(request.GetPrincipalArn());
      resolvedEndpoint.AddPathSegments("/access-policies");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssociateEncryptionConfigOutcome EKSClient::AssociateEncryptionConfig(const AssociateEncryptionConfigRequest& request) const
{
  AWS_OPERATION_GUARD(AssociateEncryptionConfig);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateEncryptionConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateEncryptionConfig", "Required field: ClusterName, is not set");
    return AssociateEncryptionConfigOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, AssociateEncryptionConfig, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AssociateEncryptionConfig, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AssociateEncryptionConfig",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AssociateEncryptionConfigOutcome>(
    [&]()-> AssociateEncryptionConfigOutcome {
      return AssociateEncryptionConfigOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/clusters/");
      resolvedEndpoint.AddPathSegment(request.GetClusterName());
      resolvedEndpoint.AddPathSegments("/encryption-config/associate");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssociateIdentityProviderConfigOutcome EKSClient::AssociateIdentityProviderConfig(const AssociateIdentityProviderConfigRequest& request) const
{
  AWS_OPERATION_GUARD(AssociateIdentityProviderConfig);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateIdentityProviderConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateIdentityProviderConfig", "Required field: ClusterName, is not set");
    return AssociateIdentityProviderConfigOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, AssociateIdentityProviderConfig, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AssociateIdentityProviderConfig, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AssociateIdentityProviderConfig",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AssociateIdentityProviderConfigOutcome>(
    [&]()-> AssociateIdentityProviderConfigOutcome {
      return AssociateIdentityProviderConfigOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/clusters/");
      resolvedEndpoint.AddPathSegment(request.GetClusterName());
      resolvedEndpoint.AddPathSegments("/identity-provider-configs/associate");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateAccessEntryOutcome EKSClient::CreateAccessEntry(const CreateAccessEntryRequest& request) const
{
  AWS_OPERATION_GUARD(CreateAccessEntry);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAccessEntry, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateAccessEntry", "Required field: ClusterName, is not set");
    return CreateAccessEntryOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateAccessEntry, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateAccessEntry, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateAccessEntry",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateAccessEntryOutcome>(
    [&]()-> CreateAccessEntryOutcome {
      return CreateAccessEntryOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/clusters/");
      resolvedEndpoint.AddPathSegment(request.GetClusterName());
      resolvedEndpoint.AddPathSegments("/access-entries");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateAddonOutcome EKSClient::CreateAddon(const CreateAddonRequest& request) const
{
  AWS_OPERATION_GUARD(CreateAddon);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAddon, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateAddon", "Required field: ClusterName, is not set");
    return CreateAddonOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateAddon, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateAddon, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateAddon",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateAddonOutcome>(
    [&]()-> CreateAddonOutcome {
      return CreateAddonOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/clusters/");
      resolvedEndpoint.AddPathSegment(request.GetClusterName());
      resolvedEndpoint.AddPathSegments("/addons");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateClusterOutcome EKSClient::CreateCluster(const CreateClusterRequest& request) const
{
  AWS_OPERATION_GUARD(CreateCluster);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCluster, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateCluster, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateCluster, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateCluster",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateClusterOutcome>(
    [&]()-> CreateClusterOutcome {
      return CreateClusterOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/clusters");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateEksAnywhereSubscriptionOutcome EKSClient::CreateEksAnywhereSubscription(const CreateEksAnywhereSubscriptionRequest& request) const
{
  AWS_OPERATION_GUARD(CreateEksAnywhereSubscription);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateEksAnywhereSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateEksAnywhereSubscription, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateEksAnywhereSubscription, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateEksAnywhereSubscription",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateEksAnywhereSubscriptionOutcome>(
    [&]()-> CreateEksAnywhereSubscriptionOutcome {
      return CreateEksAnywhereSubscriptionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/eks-anywhere-subscriptions");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateFargateProfileOutcome EKSClient::CreateFargateProfile(const CreateFargateProfileRequest& request) const
{
  AWS_OPERATION_GUARD(CreateFargateProfile);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateFargateProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateFargateProfile", "Required field: ClusterName, is not set");
    return CreateFargateProfileOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateFargateProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateFargateProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateFargateProfile",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateFargateProfileOutcome>(
    [&]()-> CreateFargateProfileOutcome {
      return CreateFargateProfileOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/clusters/");
      resolvedEndpoint.AddPathSegment(request.GetClusterName());
      resolvedEndpoint.AddPathSegments("/fargate-profiles");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateNodegroupOutcome EKSClient::CreateNodegroup(const CreateNodegroupRequest& request) const
{
  AWS_OPERATION_GUARD(CreateNodegroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateNodegroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateNodegroup", "Required field: ClusterName, is not set");
    return CreateNodegroupOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateNodegroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateNodegroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateNodegroup",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateNodegroupOutcome>(
    [&]()-> CreateNodegroupOutcome {
      return CreateNodegroupOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/clusters/");
      resolvedEndpoint.AddPathSegment(request.GetClusterName());
      resolvedEndpoint.AddPathSegments("/node-groups");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreatePodIdentityAssociationOutcome EKSClient::CreatePodIdentityAssociation(const CreatePodIdentityAssociationRequest& request) const
{
  AWS_OPERATION_GUARD(CreatePodIdentityAssociation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreatePodIdentityAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreatePodIdentityAssociation", "Required field: ClusterName, is not set");
    return CreatePodIdentityAssociationOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreatePodIdentityAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreatePodIdentityAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreatePodIdentityAssociation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreatePodIdentityAssociationOutcome>(
    [&]()-> CreatePodIdentityAssociationOutcome {
      return CreatePodIdentityAssociationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/clusters/");
      resolvedEndpoint.AddPathSegment(request.GetClusterName());
      resolvedEndpoint.AddPathSegments("/pod-identity-associations");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteAccessEntryOutcome EKSClient::DeleteAccessEntry(const DeleteAccessEntryRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteAccessEntry);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAccessEntry, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAccessEntry", "Required field: ClusterName, is not set");
    return DeleteAccessEntryOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  if (!request.PrincipalArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAccessEntry", "Required field: PrincipalArn, is not set");
    return DeleteAccessEntryOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PrincipalArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteAccessEntry, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteAccessEntry, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteAccessEntry",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteAccessEntryOutcome>(
    [&]()-> DeleteAccessEntryOutcome {
      return DeleteAccessEntryOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/clusters/");
      resolvedEndpoint.AddPathSegment(request.GetClusterName());
      resolvedEndpoint.AddPathSegments("/access-entries/");
      resolvedEndpoint.AddPathSegment(request.GetPrincipalArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteAddonOutcome EKSClient::DeleteAddon(const DeleteAddonRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteAddon);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAddon, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAddon", "Required field: ClusterName, is not set");
    return DeleteAddonOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  if (!request.AddonNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAddon", "Required field: AddonName, is not set");
    return DeleteAddonOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AddonName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteAddon, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteAddon, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteAddon",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteAddonOutcome>(
    [&]()-> DeleteAddonOutcome {
      return DeleteAddonOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/clusters/");
      resolvedEndpoint.AddPathSegment(request.GetClusterName());
      resolvedEndpoint.AddPathSegments("/addons/");
      resolvedEndpoint.AddPathSegment(request.GetAddonName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteClusterOutcome EKSClient::DeleteCluster(const DeleteClusterRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteCluster);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteCluster, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteCluster", "Required field: Name, is not set");
    return DeleteClusterOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteCluster, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteCluster, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteCluster",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteClusterOutcome>(
    [&]()-> DeleteClusterOutcome {
      return DeleteClusterOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/clusters/");
      resolvedEndpoint.AddPathSegment(request.GetName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteEksAnywhereSubscriptionOutcome EKSClient::DeleteEksAnywhereSubscription(const DeleteEksAnywhereSubscriptionRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteEksAnywhereSubscription);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteEksAnywhereSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteEksAnywhereSubscription", "Required field: Id, is not set");
    return DeleteEksAnywhereSubscriptionOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteEksAnywhereSubscription, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteEksAnywhereSubscription, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteEksAnywhereSubscription",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteEksAnywhereSubscriptionOutcome>(
    [&]()-> DeleteEksAnywhereSubscriptionOutcome {
      return DeleteEksAnywhereSubscriptionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/eks-anywhere-subscriptions/");
      resolvedEndpoint.AddPathSegment(request.GetId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteFargateProfileOutcome EKSClient::DeleteFargateProfile(const DeleteFargateProfileRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteFargateProfile);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteFargateProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteFargateProfile", "Required field: ClusterName, is not set");
    return DeleteFargateProfileOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  if (!request.FargateProfileNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteFargateProfile", "Required field: FargateProfileName, is not set");
    return DeleteFargateProfileOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FargateProfileName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteFargateProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteFargateProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteFargateProfile",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteFargateProfileOutcome>(
    [&]()-> DeleteFargateProfileOutcome {
      return DeleteFargateProfileOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/clusters/");
      resolvedEndpoint.AddPathSegment(request.GetClusterName());
      resolvedEndpoint.AddPathSegments("/fargate-profiles/");
      resolvedEndpoint.AddPathSegment(request.GetFargateProfileName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteNodegroupOutcome EKSClient::DeleteNodegroup(const DeleteNodegroupRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteNodegroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteNodegroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteNodegroup", "Required field: ClusterName, is not set");
    return DeleteNodegroupOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  if (!request.NodegroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteNodegroup", "Required field: NodegroupName, is not set");
    return DeleteNodegroupOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NodegroupName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteNodegroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteNodegroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteNodegroup",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteNodegroupOutcome>(
    [&]()-> DeleteNodegroupOutcome {
      return DeleteNodegroupOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/clusters/");
      resolvedEndpoint.AddPathSegment(request.GetClusterName());
      resolvedEndpoint.AddPathSegments("/node-groups/");
      resolvedEndpoint.AddPathSegment(request.GetNodegroupName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeletePodIdentityAssociationOutcome EKSClient::DeletePodIdentityAssociation(const DeletePodIdentityAssociationRequest& request) const
{
  AWS_OPERATION_GUARD(DeletePodIdentityAssociation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeletePodIdentityAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeletePodIdentityAssociation", "Required field: ClusterName, is not set");
    return DeletePodIdentityAssociationOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  if (!request.AssociationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeletePodIdentityAssociation", "Required field: AssociationId, is not set");
    return DeletePodIdentityAssociationOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssociationId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeletePodIdentityAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeletePodIdentityAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeletePodIdentityAssociation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeletePodIdentityAssociationOutcome>(
    [&]()-> DeletePodIdentityAssociationOutcome {
      return DeletePodIdentityAssociationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/clusters/");
      resolvedEndpoint.AddPathSegment(request.GetClusterName());
      resolvedEndpoint.AddPathSegments("/pod-identity-associations/");
      resolvedEndpoint.AddPathSegment(request.GetAssociationId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeregisterClusterOutcome EKSClient::DeregisterCluster(const DeregisterClusterRequest& request) const
{
  AWS_OPERATION_GUARD(DeregisterCluster);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeregisterCluster, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeregisterCluster", "Required field: Name, is not set");
    return DeregisterClusterOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeregisterCluster, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeregisterCluster, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeregisterCluster",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeregisterClusterOutcome>(
    [&]()-> DeregisterClusterOutcome {
      return DeregisterClusterOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/cluster-registrations/");
      resolvedEndpoint.AddPathSegment(request.GetName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeAccessEntryOutcome EKSClient::DescribeAccessEntry(const DescribeAccessEntryRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeAccessEntry);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAccessEntry, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeAccessEntry", "Required field: ClusterName, is not set");
    return DescribeAccessEntryOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  if (!request.PrincipalArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeAccessEntry", "Required field: PrincipalArn, is not set");
    return DescribeAccessEntryOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PrincipalArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeAccessEntry, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeAccessEntry, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeAccessEntry",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeAccessEntryOutcome>(
    [&]()-> DescribeAccessEntryOutcome {
      return DescribeAccessEntryOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/clusters/");
      resolvedEndpoint.AddPathSegment(request.GetClusterName());
      resolvedEndpoint.AddPathSegments("/access-entries/");
      resolvedEndpoint.AddPathSegment(request.GetPrincipalArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeAddonOutcome EKSClient::DescribeAddon(const DescribeAddonRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeAddon);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAddon, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeAddon", "Required field: ClusterName, is not set");
    return DescribeAddonOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  if (!request.AddonNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeAddon", "Required field: AddonName, is not set");
    return DescribeAddonOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AddonName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeAddon, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeAddon, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeAddon",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeAddonOutcome>(
    [&]()-> DescribeAddonOutcome {
      return DescribeAddonOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/clusters/");
      resolvedEndpoint.AddPathSegment(request.GetClusterName());
      resolvedEndpoint.AddPathSegments("/addons/");
      resolvedEndpoint.AddPathSegment(request.GetAddonName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeAddonConfigurationOutcome EKSClient::DescribeAddonConfiguration(const DescribeAddonConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeAddonConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAddonConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AddonNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeAddonConfiguration", "Required field: AddonName, is not set");
    return DescribeAddonConfigurationOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AddonName]", false));
  }
  if (!request.AddonVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeAddonConfiguration", "Required field: AddonVersion, is not set");
    return DescribeAddonConfigurationOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AddonVersion]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeAddonConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeAddonConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeAddonConfiguration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeAddonConfigurationOutcome>(
    [&]()-> DescribeAddonConfigurationOutcome {
      return DescribeAddonConfigurationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/addons/configuration-schemas");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeAddonVersionsOutcome EKSClient::DescribeAddonVersions(const DescribeAddonVersionsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeAddonVersions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAddonVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeAddonVersions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeAddonVersions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeAddonVersions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeAddonVersionsOutcome>(
    [&]()-> DescribeAddonVersionsOutcome {
      return DescribeAddonVersionsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/addons/supported-versions");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeClusterOutcome EKSClient::DescribeCluster(const DescribeClusterRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeCluster);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeCluster, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeCluster", "Required field: Name, is not set");
    return DescribeClusterOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeCluster, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeCluster, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeCluster",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeClusterOutcome>(
    [&]()-> DescribeClusterOutcome {
      return DescribeClusterOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/clusters/");
      resolvedEndpoint.AddPathSegment(request.GetName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeClusterVersionsOutcome EKSClient::DescribeClusterVersions(const DescribeClusterVersionsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeClusterVersions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeClusterVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeClusterVersions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeClusterVersions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeClusterVersions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeClusterVersionsOutcome>(
    [&]()-> DescribeClusterVersionsOutcome {
      return DescribeClusterVersionsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/cluster-versions");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeEksAnywhereSubscriptionOutcome EKSClient::DescribeEksAnywhereSubscription(const DescribeEksAnywhereSubscriptionRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeEksAnywhereSubscription);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeEksAnywhereSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeEksAnywhereSubscription", "Required field: Id, is not set");
    return DescribeEksAnywhereSubscriptionOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeEksAnywhereSubscription, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeEksAnywhereSubscription, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeEksAnywhereSubscription",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeEksAnywhereSubscriptionOutcome>(
    [&]()-> DescribeEksAnywhereSubscriptionOutcome {
      return DescribeEksAnywhereSubscriptionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/eks-anywhere-subscriptions/");
      resolvedEndpoint.AddPathSegment(request.GetId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeFargateProfileOutcome EKSClient::DescribeFargateProfile(const DescribeFargateProfileRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeFargateProfile);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeFargateProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeFargateProfile", "Required field: ClusterName, is not set");
    return DescribeFargateProfileOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  if (!request.FargateProfileNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeFargateProfile", "Required field: FargateProfileName, is not set");
    return DescribeFargateProfileOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FargateProfileName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeFargateProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeFargateProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeFargateProfile",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeFargateProfileOutcome>(
    [&]()-> DescribeFargateProfileOutcome {
      return DescribeFargateProfileOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/clusters/");
      resolvedEndpoint.AddPathSegment(request.GetClusterName());
      resolvedEndpoint.AddPathSegments("/fargate-profiles/");
      resolvedEndpoint.AddPathSegment(request.GetFargateProfileName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeIdentityProviderConfigOutcome EKSClient::DescribeIdentityProviderConfig(const DescribeIdentityProviderConfigRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeIdentityProviderConfig);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeIdentityProviderConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeIdentityProviderConfig", "Required field: ClusterName, is not set");
    return DescribeIdentityProviderConfigOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeIdentityProviderConfig, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeIdentityProviderConfig, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeIdentityProviderConfig",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeIdentityProviderConfigOutcome>(
    [&]()-> DescribeIdentityProviderConfigOutcome {
      return DescribeIdentityProviderConfigOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/clusters/");
      resolvedEndpoint.AddPathSegment(request.GetClusterName());
      resolvedEndpoint.AddPathSegments("/identity-provider-configs/describe");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeInsightOutcome EKSClient::DescribeInsight(const DescribeInsightRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeInsight);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeInsight, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeInsight", "Required field: ClusterName, is not set");
    return DescribeInsightOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeInsight", "Required field: Id, is not set");
    return DescribeInsightOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeInsight, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeInsight, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeInsight",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeInsightOutcome>(
    [&]()-> DescribeInsightOutcome {
      return DescribeInsightOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/clusters/");
      resolvedEndpoint.AddPathSegment(request.GetClusterName());
      resolvedEndpoint.AddPathSegments("/insights/");
      resolvedEndpoint.AddPathSegment(request.GetId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeNodegroupOutcome EKSClient::DescribeNodegroup(const DescribeNodegroupRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeNodegroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeNodegroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeNodegroup", "Required field: ClusterName, is not set");
    return DescribeNodegroupOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  if (!request.NodegroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeNodegroup", "Required field: NodegroupName, is not set");
    return DescribeNodegroupOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NodegroupName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeNodegroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeNodegroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeNodegroup",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeNodegroupOutcome>(
    [&]()-> DescribeNodegroupOutcome {
      return DescribeNodegroupOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/clusters/");
      resolvedEndpoint.AddPathSegment(request.GetClusterName());
      resolvedEndpoint.AddPathSegments("/node-groups/");
      resolvedEndpoint.AddPathSegment(request.GetNodegroupName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribePodIdentityAssociationOutcome EKSClient::DescribePodIdentityAssociation(const DescribePodIdentityAssociationRequest& request) const
{
  AWS_OPERATION_GUARD(DescribePodIdentityAssociation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribePodIdentityAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribePodIdentityAssociation", "Required field: ClusterName, is not set");
    return DescribePodIdentityAssociationOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  if (!request.AssociationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribePodIdentityAssociation", "Required field: AssociationId, is not set");
    return DescribePodIdentityAssociationOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssociationId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribePodIdentityAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribePodIdentityAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribePodIdentityAssociation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribePodIdentityAssociationOutcome>(
    [&]()-> DescribePodIdentityAssociationOutcome {
      return DescribePodIdentityAssociationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/clusters/");
      resolvedEndpoint.AddPathSegment(request.GetClusterName());
      resolvedEndpoint.AddPathSegments("/pod-identity-associations/");
      resolvedEndpoint.AddPathSegment(request.GetAssociationId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeUpdateOutcome EKSClient::DescribeUpdate(const DescribeUpdateRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeUpdate);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeUpdate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeUpdate", "Required field: Name, is not set");
    return DescribeUpdateOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (!request.UpdateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeUpdate", "Required field: UpdateId, is not set");
    return DescribeUpdateOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UpdateId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeUpdate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeUpdate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeUpdate",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeUpdateOutcome>(
    [&]()-> DescribeUpdateOutcome {
      return DescribeUpdateOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/clusters/");
      resolvedEndpoint.AddPathSegment(request.GetName());
      resolvedEndpoint.AddPathSegments("/updates/");
      resolvedEndpoint.AddPathSegment(request.GetUpdateId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DisassociateAccessPolicyOutcome EKSClient::DisassociateAccessPolicy(const DisassociateAccessPolicyRequest& request) const
{
  AWS_OPERATION_GUARD(DisassociateAccessPolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateAccessPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateAccessPolicy", "Required field: ClusterName, is not set");
    return DisassociateAccessPolicyOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  if (!request.PrincipalArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateAccessPolicy", "Required field: PrincipalArn, is not set");
    return DisassociateAccessPolicyOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PrincipalArn]", false));
  }
  if (!request.PolicyArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateAccessPolicy", "Required field: PolicyArn, is not set");
    return DisassociateAccessPolicyOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DisassociateAccessPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DisassociateAccessPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DisassociateAccessPolicy",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DisassociateAccessPolicyOutcome>(
    [&]()-> DisassociateAccessPolicyOutcome {
      return DisassociateAccessPolicyOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/clusters/");
      resolvedEndpoint.AddPathSegment(request.GetClusterName());
      resolvedEndpoint.AddPathSegments("/access-entries/");
      resolvedEndpoint.AddPathSegment(request.GetPrincipalArn());
      resolvedEndpoint.AddPathSegments("/access-policies/");
      resolvedEndpoint.AddPathSegment(request.GetPolicyArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DisassociateIdentityProviderConfigOutcome EKSClient::DisassociateIdentityProviderConfig(const DisassociateIdentityProviderConfigRequest& request) const
{
  AWS_OPERATION_GUARD(DisassociateIdentityProviderConfig);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateIdentityProviderConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateIdentityProviderConfig", "Required field: ClusterName, is not set");
    return DisassociateIdentityProviderConfigOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DisassociateIdentityProviderConfig, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DisassociateIdentityProviderConfig, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DisassociateIdentityProviderConfig",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DisassociateIdentityProviderConfigOutcome>(
    [&]()-> DisassociateIdentityProviderConfigOutcome {
      return DisassociateIdentityProviderConfigOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/clusters/");
      resolvedEndpoint.AddPathSegment(request.GetClusterName());
      resolvedEndpoint.AddPathSegments("/identity-provider-configs/disassociate");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListAccessEntriesOutcome EKSClient::ListAccessEntries(const ListAccessEntriesRequest& request) const
{
  AWS_OPERATION_GUARD(ListAccessEntries);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAccessEntries, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAccessEntries", "Required field: ClusterName, is not set");
    return ListAccessEntriesOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListAccessEntries, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListAccessEntries, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListAccessEntries",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListAccessEntriesOutcome>(
    [&]()-> ListAccessEntriesOutcome {
      return ListAccessEntriesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/clusters/");
      resolvedEndpoint.AddPathSegment(request.GetClusterName());
      resolvedEndpoint.AddPathSegments("/access-entries");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListAccessPoliciesOutcome EKSClient::ListAccessPolicies(const ListAccessPoliciesRequest& request) const
{
  AWS_OPERATION_GUARD(ListAccessPolicies);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAccessPolicies, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListAccessPolicies, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListAccessPolicies, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListAccessPolicies",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListAccessPoliciesOutcome>(
    [&]()-> ListAccessPoliciesOutcome {
      return ListAccessPoliciesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/access-policies");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListAddonsOutcome EKSClient::ListAddons(const ListAddonsRequest& request) const
{
  AWS_OPERATION_GUARD(ListAddons);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAddons, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAddons", "Required field: ClusterName, is not set");
    return ListAddonsOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListAddons, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListAddons, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListAddons",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListAddonsOutcome>(
    [&]()-> ListAddonsOutcome {
      return ListAddonsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/clusters/");
      resolvedEndpoint.AddPathSegment(request.GetClusterName());
      resolvedEndpoint.AddPathSegments("/addons");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListAssociatedAccessPoliciesOutcome EKSClient::ListAssociatedAccessPolicies(const ListAssociatedAccessPoliciesRequest& request) const
{
  AWS_OPERATION_GUARD(ListAssociatedAccessPolicies);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAssociatedAccessPolicies, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAssociatedAccessPolicies", "Required field: ClusterName, is not set");
    return ListAssociatedAccessPoliciesOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  if (!request.PrincipalArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAssociatedAccessPolicies", "Required field: PrincipalArn, is not set");
    return ListAssociatedAccessPoliciesOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PrincipalArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListAssociatedAccessPolicies, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListAssociatedAccessPolicies, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListAssociatedAccessPolicies",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListAssociatedAccessPoliciesOutcome>(
    [&]()-> ListAssociatedAccessPoliciesOutcome {
      return ListAssociatedAccessPoliciesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/clusters/");
      resolvedEndpoint.AddPathSegment(request.GetClusterName());
      resolvedEndpoint.AddPathSegments("/access-entries/");
      resolvedEndpoint.AddPathSegment(request.GetPrincipalArn());
      resolvedEndpoint.AddPathSegments("/access-policies");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListClustersOutcome EKSClient::ListClusters(const ListClustersRequest& request) const
{
  AWS_OPERATION_GUARD(ListClusters);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListClusters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListClusters, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListClusters, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListClusters",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListClustersOutcome>(
    [&]()-> ListClustersOutcome {
      return ListClustersOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/clusters");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListEksAnywhereSubscriptionsOutcome EKSClient::ListEksAnywhereSubscriptions(const ListEksAnywhereSubscriptionsRequest& request) const
{
  AWS_OPERATION_GUARD(ListEksAnywhereSubscriptions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListEksAnywhereSubscriptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListEksAnywhereSubscriptions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListEksAnywhereSubscriptions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListEksAnywhereSubscriptions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListEksAnywhereSubscriptionsOutcome>(
    [&]()-> ListEksAnywhereSubscriptionsOutcome {
      return ListEksAnywhereSubscriptionsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/eks-anywhere-subscriptions");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListFargateProfilesOutcome EKSClient::ListFargateProfiles(const ListFargateProfilesRequest& request) const
{
  AWS_OPERATION_GUARD(ListFargateProfiles);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListFargateProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListFargateProfiles", "Required field: ClusterName, is not set");
    return ListFargateProfilesOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListFargateProfiles, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListFargateProfiles, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListFargateProfiles",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListFargateProfilesOutcome>(
    [&]()-> ListFargateProfilesOutcome {
      return ListFargateProfilesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/clusters/");
      resolvedEndpoint.AddPathSegment(request.GetClusterName());
      resolvedEndpoint.AddPathSegments("/fargate-profiles");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListIdentityProviderConfigsOutcome EKSClient::ListIdentityProviderConfigs(const ListIdentityProviderConfigsRequest& request) const
{
  AWS_OPERATION_GUARD(ListIdentityProviderConfigs);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListIdentityProviderConfigs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListIdentityProviderConfigs", "Required field: ClusterName, is not set");
    return ListIdentityProviderConfigsOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListIdentityProviderConfigs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListIdentityProviderConfigs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListIdentityProviderConfigs",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListIdentityProviderConfigsOutcome>(
    [&]()-> ListIdentityProviderConfigsOutcome {
      return ListIdentityProviderConfigsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/clusters/");
      resolvedEndpoint.AddPathSegment(request.GetClusterName());
      resolvedEndpoint.AddPathSegments("/identity-provider-configs");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListInsightsOutcome EKSClient::ListInsights(const ListInsightsRequest& request) const
{
  AWS_OPERATION_GUARD(ListInsights);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListInsights, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListInsights", "Required field: ClusterName, is not set");
    return ListInsightsOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListInsights, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListInsights, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListInsights",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListInsightsOutcome>(
    [&]()-> ListInsightsOutcome {
      return ListInsightsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/clusters/");
      resolvedEndpoint.AddPathSegment(request.GetClusterName());
      resolvedEndpoint.AddPathSegments("/insights");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListNodegroupsOutcome EKSClient::ListNodegroups(const ListNodegroupsRequest& request) const
{
  AWS_OPERATION_GUARD(ListNodegroups);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListNodegroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListNodegroups", "Required field: ClusterName, is not set");
    return ListNodegroupsOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListNodegroups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListNodegroups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListNodegroups",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListNodegroupsOutcome>(
    [&]()-> ListNodegroupsOutcome {
      return ListNodegroupsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/clusters/");
      resolvedEndpoint.AddPathSegment(request.GetClusterName());
      resolvedEndpoint.AddPathSegments("/node-groups");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListPodIdentityAssociationsOutcome EKSClient::ListPodIdentityAssociations(const ListPodIdentityAssociationsRequest& request) const
{
  AWS_OPERATION_GUARD(ListPodIdentityAssociations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPodIdentityAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListPodIdentityAssociations", "Required field: ClusterName, is not set");
    return ListPodIdentityAssociationsOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListPodIdentityAssociations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListPodIdentityAssociations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListPodIdentityAssociations",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListPodIdentityAssociationsOutcome>(
    [&]()-> ListPodIdentityAssociationsOutcome {
      return ListPodIdentityAssociationsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/clusters/");
      resolvedEndpoint.AddPathSegment(request.GetClusterName());
      resolvedEndpoint.AddPathSegments("/pod-identity-associations");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTagsForResourceOutcome EKSClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_GUARD(ListTagsForResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTagsForResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTagsForResourceOutcome>(
    [&]()-> ListTagsForResourceOutcome {
      return ListTagsForResourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/tags/");
      resolvedEndpoint.AddPathSegment(request.GetResourceArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListUpdatesOutcome EKSClient::ListUpdates(const ListUpdatesRequest& request) const
{
  AWS_OPERATION_GUARD(ListUpdates);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListUpdates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListUpdates", "Required field: Name, is not set");
    return ListUpdatesOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListUpdates, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListUpdates, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListUpdates",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListUpdatesOutcome>(
    [&]()-> ListUpdatesOutcome {
      return ListUpdatesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/clusters/");
      resolvedEndpoint.AddPathSegment(request.GetName());
      resolvedEndpoint.AddPathSegments("/updates");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

RegisterClusterOutcome EKSClient::RegisterCluster(const RegisterClusterRequest& request) const
{
  AWS_OPERATION_GUARD(RegisterCluster);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RegisterCluster, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, RegisterCluster, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, RegisterCluster, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".RegisterCluster",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<RegisterClusterOutcome>(
    [&]()-> RegisterClusterOutcome {
      return RegisterClusterOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/cluster-registrations");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TagResourceOutcome EKSClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(TagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".TagResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<TagResourceOutcome>(
    [&]()-> TagResourceOutcome {
      return TagResourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/tags/");
      resolvedEndpoint.AddPathSegment(request.GetResourceArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UntagResourceOutcome EKSClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(UntagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UntagResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UntagResourceOutcome>(
    [&]()-> UntagResourceOutcome {
      return UntagResourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/tags/");
      resolvedEndpoint.AddPathSegment(request.GetResourceArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateAccessEntryOutcome EKSClient::UpdateAccessEntry(const UpdateAccessEntryRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateAccessEntry);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAccessEntry, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAccessEntry", "Required field: ClusterName, is not set");
    return UpdateAccessEntryOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  if (!request.PrincipalArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAccessEntry", "Required field: PrincipalArn, is not set");
    return UpdateAccessEntryOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PrincipalArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateAccessEntry, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateAccessEntry, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateAccessEntry",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateAccessEntryOutcome>(
    [&]()-> UpdateAccessEntryOutcome {
      return UpdateAccessEntryOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/clusters/");
      resolvedEndpoint.AddPathSegment(request.GetClusterName());
      resolvedEndpoint.AddPathSegments("/access-entries/");
      resolvedEndpoint.AddPathSegment(request.GetPrincipalArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateAddonOutcome EKSClient::UpdateAddon(const UpdateAddonRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateAddon);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAddon, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAddon", "Required field: ClusterName, is not set");
    return UpdateAddonOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  if (!request.AddonNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAddon", "Required field: AddonName, is not set");
    return UpdateAddonOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AddonName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateAddon, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateAddon, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateAddon",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateAddonOutcome>(
    [&]()-> UpdateAddonOutcome {
      return UpdateAddonOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/clusters/");
      resolvedEndpoint.AddPathSegment(request.GetClusterName());
      resolvedEndpoint.AddPathSegments("/addons/");
      resolvedEndpoint.AddPathSegment(request.GetAddonName());
      resolvedEndpoint.AddPathSegments("/update");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateClusterConfigOutcome EKSClient::UpdateClusterConfig(const UpdateClusterConfigRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateClusterConfig);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateClusterConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateClusterConfig", "Required field: Name, is not set");
    return UpdateClusterConfigOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateClusterConfig, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateClusterConfig, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateClusterConfig",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateClusterConfigOutcome>(
    [&]()-> UpdateClusterConfigOutcome {
      return UpdateClusterConfigOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/clusters/");
      resolvedEndpoint.AddPathSegment(request.GetName());
      resolvedEndpoint.AddPathSegments("/update-config");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateClusterVersionOutcome EKSClient::UpdateClusterVersion(const UpdateClusterVersionRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateClusterVersion);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateClusterVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateClusterVersion", "Required field: Name, is not set");
    return UpdateClusterVersionOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateClusterVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateClusterVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateClusterVersion",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateClusterVersionOutcome>(
    [&]()-> UpdateClusterVersionOutcome {
      return UpdateClusterVersionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/clusters/");
      resolvedEndpoint.AddPathSegment(request.GetName());
      resolvedEndpoint.AddPathSegments("/updates");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateEksAnywhereSubscriptionOutcome EKSClient::UpdateEksAnywhereSubscription(const UpdateEksAnywhereSubscriptionRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateEksAnywhereSubscription);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateEksAnywhereSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateEksAnywhereSubscription", "Required field: Id, is not set");
    return UpdateEksAnywhereSubscriptionOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateEksAnywhereSubscription, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateEksAnywhereSubscription, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateEksAnywhereSubscription",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateEksAnywhereSubscriptionOutcome>(
    [&]()-> UpdateEksAnywhereSubscriptionOutcome {
      return UpdateEksAnywhereSubscriptionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/eks-anywhere-subscriptions/");
      resolvedEndpoint.AddPathSegment(request.GetId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateNodegroupConfigOutcome EKSClient::UpdateNodegroupConfig(const UpdateNodegroupConfigRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateNodegroupConfig);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateNodegroupConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateNodegroupConfig", "Required field: ClusterName, is not set");
    return UpdateNodegroupConfigOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  if (!request.NodegroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateNodegroupConfig", "Required field: NodegroupName, is not set");
    return UpdateNodegroupConfigOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NodegroupName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateNodegroupConfig, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateNodegroupConfig, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateNodegroupConfig",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateNodegroupConfigOutcome>(
    [&]()-> UpdateNodegroupConfigOutcome {
      return UpdateNodegroupConfigOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/clusters/");
      resolvedEndpoint.AddPathSegment(request.GetClusterName());
      resolvedEndpoint.AddPathSegments("/node-groups/");
      resolvedEndpoint.AddPathSegment(request.GetNodegroupName());
      resolvedEndpoint.AddPathSegments("/update-config");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateNodegroupVersionOutcome EKSClient::UpdateNodegroupVersion(const UpdateNodegroupVersionRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateNodegroupVersion);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateNodegroupVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateNodegroupVersion", "Required field: ClusterName, is not set");
    return UpdateNodegroupVersionOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  if (!request.NodegroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateNodegroupVersion", "Required field: NodegroupName, is not set");
    return UpdateNodegroupVersionOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NodegroupName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateNodegroupVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateNodegroupVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateNodegroupVersion",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateNodegroupVersionOutcome>(
    [&]()-> UpdateNodegroupVersionOutcome {
      return UpdateNodegroupVersionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/clusters/");
      resolvedEndpoint.AddPathSegment(request.GetClusterName());
      resolvedEndpoint.AddPathSegments("/node-groups/");
      resolvedEndpoint.AddPathSegment(request.GetNodegroupName());
      resolvedEndpoint.AddPathSegments("/update-version");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdatePodIdentityAssociationOutcome EKSClient::UpdatePodIdentityAssociation(const UpdatePodIdentityAssociationRequest& request) const
{
  AWS_OPERATION_GUARD(UpdatePodIdentityAssociation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdatePodIdentityAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdatePodIdentityAssociation", "Required field: ClusterName, is not set");
    return UpdatePodIdentityAssociationOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  if (!request.AssociationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdatePodIdentityAssociation", "Required field: AssociationId, is not set");
    return UpdatePodIdentityAssociationOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssociationId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdatePodIdentityAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdatePodIdentityAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdatePodIdentityAssociation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdatePodIdentityAssociationOutcome>(
    [&]()-> UpdatePodIdentityAssociationOutcome {
      return UpdatePodIdentityAssociationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/clusters/");
      resolvedEndpoint.AddPathSegment(request.GetClusterName());
      resolvedEndpoint.AddPathSegments("/pod-identity-associations/");
      resolvedEndpoint.AddPathSegment(request.GetAssociationId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}


