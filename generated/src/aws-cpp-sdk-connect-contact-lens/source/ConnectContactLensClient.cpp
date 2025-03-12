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


#include <aws/connect-contact-lens/ConnectContactLensClient.h>
#include <aws/connect-contact-lens/ConnectContactLensErrorMarshaller.h>
#include <aws/connect-contact-lens/ConnectContactLensEndpointProvider.h>
#include <aws/connect-contact-lens/model/ListRealtimeContactAnalysisSegmentsRequest.h>

#include <smithy/tracing/TracingUtils.h>

#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ConnectContactLens;
using namespace Aws::ConnectContactLens::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws
{
  namespace ConnectContactLens
  {
    const char ALLOCATION_TAG[] = "ConnectContactLensClient";
    const char SERVICE_NAME[] = "connect";
  }
}
const char* ConnectContactLensClient::GetServiceName() {return SERVICE_NAME;}
const char* ConnectContactLensClient::GetAllocationTag() {return ALLOCATION_TAG;}

ConnectContactLensClient::ConnectContactLensClient(const ConnectContactLens::ConnectContactLensClientConfiguration& clientConfiguration,
                           std::shared_ptr<ConnectContactLensEndpointProviderBase> endpointProvider) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Connect Contact Lens",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<ConnectContactLensErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<ConnectContactLensEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region}},
        })
{}

ConnectContactLensClient::ConnectContactLensClient(const AWSCredentials& credentials,
                           std::shared_ptr<ConnectContactLensEndpointProviderBase> endpointProvider,
                           const ConnectContactLens::ConnectContactLensClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Connect Contact Lens",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<ConnectContactLensErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<ConnectContactLensEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}},
        })
{}

ConnectContactLensClient::ConnectContactLensClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<ConnectContactLensEndpointProviderBase> endpointProvider,
                           const ConnectContactLens::ConnectContactLensClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Connect Contact Lens",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<ConnectContactLensErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<ConnectContactLensEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{ Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}

/* Legacy constructors due deprecation */
ConnectContactLensClient::ConnectContactLensClient(const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
      GetServiceName(),
      "Connect Contact Lens",
      Aws::Http::CreateHttpClient(clientConfiguration),
      Aws::MakeShared<ConnectContactLensErrorMarshaller>(ALLOCATION_TAG),
      Aws::MakeShared<ConnectContactLensEndpointProvider>(ALLOCATION_TAG),
      Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
      {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::DefaultAwsCredentialIdentityResolver>(ALLOCATION_TAG), GetServiceName(), clientConfiguration.region}}
      })
{}

ConnectContactLensClient::ConnectContactLensClient(const AWSCredentials& credentials,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Connect Contact Lens",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<ConnectContactLensErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<ConnectContactLensEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}}
        })
{}

ConnectContactLensClient::ConnectContactLensClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Connect Contact Lens",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<ConnectContactLensErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<ConnectContactLensEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}
/* End of legacy constructors due deprecation */

ConnectContactLensClient::~ConnectContactLensClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<ConnectContactLensEndpointProviderBase>& ConnectContactLensClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void ConnectContactLensClient::OverrideEndpoint(const Aws::String& endpoint)
{
    AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
    m_endpointProvider->OverrideEndpoint(endpoint);
}
ListRealtimeContactAnalysisSegmentsOutcome ConnectContactLensClient::ListRealtimeContactAnalysisSegments(const ListRealtimeContactAnalysisSegmentsRequest& request) const
{
  AWS_OPERATION_GUARD(ListRealtimeContactAnalysisSegments);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRealtimeContactAnalysisSegments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListRealtimeContactAnalysisSegments, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListRealtimeContactAnalysisSegments, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListRealtimeContactAnalysisSegments",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListRealtimeContactAnalysisSegmentsOutcome>(
    [&]()-> ListRealtimeContactAnalysisSegmentsOutcome {
      return ListRealtimeContactAnalysisSegmentsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/realtime-contact-analysis/analysis-segments");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}


