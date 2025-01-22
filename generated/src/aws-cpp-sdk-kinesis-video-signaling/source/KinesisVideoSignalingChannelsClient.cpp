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


#include <aws/kinesis-video-signaling/KinesisVideoSignalingChannelsClient.h>
#include <aws/kinesis-video-signaling/KinesisVideoSignalingChannelsErrorMarshaller.h>
#include <aws/kinesis-video-signaling/KinesisVideoSignalingChannelsEndpointProvider.h>
#include <aws/kinesis-video-signaling/model/GetIceServerConfigRequest.h>
#include <aws/kinesis-video-signaling/model/SendAlexaOfferToMasterRequest.h>

#include <smithy/tracing/TracingUtils.h>

#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::KinesisVideoSignalingChannels;
using namespace Aws::KinesisVideoSignalingChannels::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws
{
  namespace KinesisVideoSignalingChannels
  {
    const char ALLOCATION_TAG[] = "KinesisVideoSignalingChannelsClient";
    const char SERVICE_NAME[] = "kinesisvideo";
  }
}
const char* KinesisVideoSignalingChannelsClient::GetServiceName() {return SERVICE_NAME;}
const char* KinesisVideoSignalingChannelsClient::GetAllocationTag() {return ALLOCATION_TAG;}

KinesisVideoSignalingChannelsClient::KinesisVideoSignalingChannelsClient(const KinesisVideoSignalingChannels::KinesisVideoSignalingChannelsClientConfiguration& clientConfiguration,
                           std::shared_ptr<KinesisVideoSignalingChannelsEndpointProviderBase> endpointProvider) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Kinesis Video Signaling",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<KinesisVideoSignalingChannelsErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<KinesisVideoSignalingChannelsEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region}},
        })
{}

KinesisVideoSignalingChannelsClient::KinesisVideoSignalingChannelsClient(const AWSCredentials& credentials,
                           std::shared_ptr<KinesisVideoSignalingChannelsEndpointProviderBase> endpointProvider,
                           const KinesisVideoSignalingChannels::KinesisVideoSignalingChannelsClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Kinesis Video Signaling",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<KinesisVideoSignalingChannelsErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<KinesisVideoSignalingChannelsEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}},
        })
{}

KinesisVideoSignalingChannelsClient::KinesisVideoSignalingChannelsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<KinesisVideoSignalingChannelsEndpointProviderBase> endpointProvider,
                           const KinesisVideoSignalingChannels::KinesisVideoSignalingChannelsClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Kinesis Video Signaling",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<KinesisVideoSignalingChannelsErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<KinesisVideoSignalingChannelsEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{ Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}

/* Legacy constructors due deprecation */
KinesisVideoSignalingChannelsClient::KinesisVideoSignalingChannelsClient(const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
      GetServiceName(),
      "Kinesis Video Signaling",
      Aws::Http::CreateHttpClient(clientConfiguration),
      Aws::MakeShared<KinesisVideoSignalingChannelsErrorMarshaller>(ALLOCATION_TAG),
      Aws::MakeShared<KinesisVideoSignalingChannelsEndpointProvider>(ALLOCATION_TAG),
      Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
      {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::DefaultAwsCredentialIdentityResolver>(ALLOCATION_TAG), GetServiceName(), clientConfiguration.region}}
      })
{}

KinesisVideoSignalingChannelsClient::KinesisVideoSignalingChannelsClient(const AWSCredentials& credentials,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Kinesis Video Signaling",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<KinesisVideoSignalingChannelsErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<KinesisVideoSignalingChannelsEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}}
        })
{}

KinesisVideoSignalingChannelsClient::KinesisVideoSignalingChannelsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Kinesis Video Signaling",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<KinesisVideoSignalingChannelsErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<KinesisVideoSignalingChannelsEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}
/* End of legacy constructors due deprecation */

KinesisVideoSignalingChannelsClient::~KinesisVideoSignalingChannelsClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<KinesisVideoSignalingChannelsEndpointProviderBase>& KinesisVideoSignalingChannelsClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void KinesisVideoSignalingChannelsClient::OverrideEndpoint(const Aws::String& endpoint)
{
    AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
    m_endpointProvider->OverrideEndpoint(endpoint);
}
GetIceServerConfigOutcome KinesisVideoSignalingChannelsClient::GetIceServerConfig(const GetIceServerConfigRequest& request) const
{
  AWS_OPERATION_GUARD(GetIceServerConfig);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetIceServerConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetIceServerConfig, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetIceServerConfig, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetIceServerConfig",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetIceServerConfigOutcome>(
    [&]()-> GetIceServerConfigOutcome {
      return GetIceServerConfigOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v1/get-ice-server-config");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SendAlexaOfferToMasterOutcome KinesisVideoSignalingChannelsClient::SendAlexaOfferToMaster(const SendAlexaOfferToMasterRequest& request) const
{
  AWS_OPERATION_GUARD(SendAlexaOfferToMaster);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SendAlexaOfferToMaster, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, SendAlexaOfferToMaster, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SendAlexaOfferToMaster, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SendAlexaOfferToMaster",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SendAlexaOfferToMasterOutcome>(
    [&]()-> SendAlexaOfferToMasterOutcome {
      return SendAlexaOfferToMasterOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v1/send-alexa-offer-to-master");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}


