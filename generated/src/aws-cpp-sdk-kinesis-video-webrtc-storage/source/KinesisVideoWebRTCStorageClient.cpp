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


#include <aws/kinesis-video-webrtc-storage/KinesisVideoWebRTCStorageClient.h>
#include <aws/kinesis-video-webrtc-storage/KinesisVideoWebRTCStorageErrorMarshaller.h>
#include <aws/kinesis-video-webrtc-storage/KinesisVideoWebRTCStorageEndpointProvider.h>
#include <aws/kinesis-video-webrtc-storage/model/JoinStorageSessionRequest.h>
#include <aws/kinesis-video-webrtc-storage/model/JoinStorageSessionAsViewerRequest.h>

#include <smithy/tracing/TracingUtils.h>

#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::KinesisVideoWebRTCStorage;
using namespace Aws::KinesisVideoWebRTCStorage::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws
{
  namespace KinesisVideoWebRTCStorage
  {
    const char ALLOCATION_TAG[] = "KinesisVideoWebRTCStorageClient";
    const char SERVICE_NAME[] = "kinesisvideo";
  }
}
const char* KinesisVideoWebRTCStorageClient::GetServiceName() {return SERVICE_NAME;}
const char* KinesisVideoWebRTCStorageClient::GetAllocationTag() {return ALLOCATION_TAG;}

KinesisVideoWebRTCStorageClient::KinesisVideoWebRTCStorageClient(const KinesisVideoWebRTCStorage::KinesisVideoWebRTCStorageClientConfiguration& clientConfiguration,
                           std::shared_ptr<KinesisVideoWebRTCStorageEndpointProviderBase> endpointProvider) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Kinesis Video WebRTC Storage",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<KinesisVideoWebRTCStorageErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<KinesisVideoWebRTCStorageEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region}},
        })
{}

KinesisVideoWebRTCStorageClient::KinesisVideoWebRTCStorageClient(const AWSCredentials& credentials,
                           std::shared_ptr<KinesisVideoWebRTCStorageEndpointProviderBase> endpointProvider,
                           const KinesisVideoWebRTCStorage::KinesisVideoWebRTCStorageClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Kinesis Video WebRTC Storage",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<KinesisVideoWebRTCStorageErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<KinesisVideoWebRTCStorageEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}},
        })
{}

KinesisVideoWebRTCStorageClient::KinesisVideoWebRTCStorageClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<KinesisVideoWebRTCStorageEndpointProviderBase> endpointProvider,
                           const KinesisVideoWebRTCStorage::KinesisVideoWebRTCStorageClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Kinesis Video WebRTC Storage",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<KinesisVideoWebRTCStorageErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<KinesisVideoWebRTCStorageEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{ Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}

/* Legacy constructors due deprecation */
KinesisVideoWebRTCStorageClient::KinesisVideoWebRTCStorageClient(const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
      GetServiceName(),
      "Kinesis Video WebRTC Storage",
      Aws::Http::CreateHttpClient(clientConfiguration),
      Aws::MakeShared<KinesisVideoWebRTCStorageErrorMarshaller>(ALLOCATION_TAG),
      Aws::MakeShared<KinesisVideoWebRTCStorageEndpointProvider>(ALLOCATION_TAG),
      Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
      {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::DefaultAwsCredentialIdentityResolver>(ALLOCATION_TAG), GetServiceName(), clientConfiguration.region}}
      })
{}

KinesisVideoWebRTCStorageClient::KinesisVideoWebRTCStorageClient(const AWSCredentials& credentials,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Kinesis Video WebRTC Storage",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<KinesisVideoWebRTCStorageErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<KinesisVideoWebRTCStorageEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}}
        })
{}

KinesisVideoWebRTCStorageClient::KinesisVideoWebRTCStorageClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Kinesis Video WebRTC Storage",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<KinesisVideoWebRTCStorageErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<KinesisVideoWebRTCStorageEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}
/* End of legacy constructors due deprecation */

KinesisVideoWebRTCStorageClient::~KinesisVideoWebRTCStorageClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<KinesisVideoWebRTCStorageEndpointProviderBase>& KinesisVideoWebRTCStorageClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void KinesisVideoWebRTCStorageClient::OverrideEndpoint(const Aws::String& endpoint)
{
    AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
    m_endpointProvider->OverrideEndpoint(endpoint);
}
JoinStorageSessionOutcome KinesisVideoWebRTCStorageClient::JoinStorageSession(const JoinStorageSessionRequest& request) const
{
  AWS_OPERATION_GUARD(JoinStorageSession);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, JoinStorageSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, JoinStorageSession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, JoinStorageSession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".JoinStorageSession",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<JoinStorageSessionOutcome>(
    [&]()-> JoinStorageSessionOutcome {
      return JoinStorageSessionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/joinStorageSession");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

JoinStorageSessionAsViewerOutcome KinesisVideoWebRTCStorageClient::JoinStorageSessionAsViewer(const JoinStorageSessionAsViewerRequest& request) const
{
  AWS_OPERATION_GUARD(JoinStorageSessionAsViewer);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, JoinStorageSessionAsViewer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, JoinStorageSessionAsViewer, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, JoinStorageSessionAsViewer, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".JoinStorageSessionAsViewer",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<JoinStorageSessionAsViewerOutcome>(
    [&]()-> JoinStorageSessionAsViewerOutcome {
      return JoinStorageSessionAsViewerOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/joinStorageSessionAsViewer");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}


