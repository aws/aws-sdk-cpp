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


#include <aws/eks-auth/EKSAuthClient.h>
#include <aws/eks-auth/EKSAuthErrorMarshaller.h>
#include <aws/eks-auth/EKSAuthEndpointProvider.h>
#include <aws/eks-auth/model/AssumeRoleForPodIdentityRequest.h>

#include <smithy/tracing/TracingUtils.h>

#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::EKSAuth;
using namespace Aws::EKSAuth::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws
{
  namespace EKSAuth
  {
    const char ALLOCATION_TAG[] = "EKSAuthClient";
    const char SERVICE_NAME[] = "eks-auth";
  }
}
const char* EKSAuthClient::GetServiceName() {return SERVICE_NAME;}
const char* EKSAuthClient::GetAllocationTag() {return ALLOCATION_TAG;}

EKSAuthClient::EKSAuthClient(const EKSAuth::EKSAuthClientConfiguration& clientConfiguration,
                           std::shared_ptr<EKSAuthEndpointProviderBase> endpointProvider) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "EKS Auth",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<EKSAuthErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<EKSAuthEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region}},
        })
{}

EKSAuthClient::EKSAuthClient(const AWSCredentials& credentials,
                           std::shared_ptr<EKSAuthEndpointProviderBase> endpointProvider,
                           const EKSAuth::EKSAuthClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "EKS Auth",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<EKSAuthErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<EKSAuthEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}},
        })
{}

EKSAuthClient::EKSAuthClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<EKSAuthEndpointProviderBase> endpointProvider,
                           const EKSAuth::EKSAuthClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "EKS Auth",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<EKSAuthErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<EKSAuthEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{ Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}

/* Legacy constructors due deprecation */
EKSAuthClient::EKSAuthClient(const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
      GetServiceName(),
      "EKS Auth",
      Aws::Http::CreateHttpClient(clientConfiguration),
      Aws::MakeShared<EKSAuthErrorMarshaller>(ALLOCATION_TAG),
      Aws::MakeShared<EKSAuthEndpointProvider>(ALLOCATION_TAG),
      Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
      {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::DefaultAwsCredentialIdentityResolver>(ALLOCATION_TAG), GetServiceName(), clientConfiguration.region}}
      })
{}

EKSAuthClient::EKSAuthClient(const AWSCredentials& credentials,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "EKS Auth",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<EKSAuthErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<EKSAuthEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}}
        })
{}

EKSAuthClient::EKSAuthClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "EKS Auth",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<EKSAuthErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<EKSAuthEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}
/* End of legacy constructors due deprecation */

EKSAuthClient::~EKSAuthClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<EKSAuthEndpointProviderBase>& EKSAuthClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void EKSAuthClient::OverrideEndpoint(const Aws::String& endpoint)
{
    AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
    m_endpointProvider->OverrideEndpoint(endpoint);
}
AssumeRoleForPodIdentityOutcome EKSAuthClient::AssumeRoleForPodIdentity(const AssumeRoleForPodIdentityRequest& request) const
{
  AWS_OPERATION_GUARD(AssumeRoleForPodIdentity);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssumeRoleForPodIdentity, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssumeRoleForPodIdentity", "Required field: ClusterName, is not set");
    return AssumeRoleForPodIdentityOutcome(Aws::Client::AWSError<EKSAuthErrors>(EKSAuthErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, AssumeRoleForPodIdentity, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AssumeRoleForPodIdentity, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AssumeRoleForPodIdentity",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AssumeRoleForPodIdentityOutcome>(
    [&]()-> AssumeRoleForPodIdentityOutcome {
      return AssumeRoleForPodIdentityOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/clusters/");
      resolvedEndpoint.AddPathSegment(request.GetClusterName());
      resolvedEndpoint.AddPathSegments("/assume-role-for-pod-identity");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}


