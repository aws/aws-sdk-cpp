/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/kinesis-video-webrtc-storage/KinesisVideoWebRTCStorageClient.h>
#include <aws/kinesis-video-webrtc-storage/KinesisVideoWebRTCStorageErrorMarshaller.h>
#include <aws/kinesis-video-webrtc-storage/KinesisVideoWebRTCStorageEndpointProvider.h>
#include <aws/kinesis-video-webrtc-storage/model/JoinStorageSessionRequest.h>

#include <smithy/tracing/TracingUtils.h>


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
    const char SERVICE_NAME[] = "kinesisvideo";
    const char ALLOCATION_TAG[] = "KinesisVideoWebRTCStorageClient";
  }
}
const char* KinesisVideoWebRTCStorageClient::GetServiceName() {return SERVICE_NAME;}
const char* KinesisVideoWebRTCStorageClient::GetAllocationTag() {return ALLOCATION_TAG;}

KinesisVideoWebRTCStorageClient::KinesisVideoWebRTCStorageClient(const KinesisVideoWebRTCStorage::KinesisVideoWebRTCStorageClientConfiguration& clientConfiguration,
                                                                 std::shared_ptr<KinesisVideoWebRTCStorageEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KinesisVideoWebRTCStorageErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<KinesisVideoWebRTCStorageEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

KinesisVideoWebRTCStorageClient::KinesisVideoWebRTCStorageClient(const AWSCredentials& credentials,
                                                                 std::shared_ptr<KinesisVideoWebRTCStorageEndpointProviderBase> endpointProvider,
                                                                 const KinesisVideoWebRTCStorage::KinesisVideoWebRTCStorageClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KinesisVideoWebRTCStorageErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<KinesisVideoWebRTCStorageEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

KinesisVideoWebRTCStorageClient::KinesisVideoWebRTCStorageClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                                 std::shared_ptr<KinesisVideoWebRTCStorageEndpointProviderBase> endpointProvider,
                                                                 const KinesisVideoWebRTCStorage::KinesisVideoWebRTCStorageClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KinesisVideoWebRTCStorageErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<KinesisVideoWebRTCStorageEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  KinesisVideoWebRTCStorageClient::KinesisVideoWebRTCStorageClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KinesisVideoWebRTCStorageErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<KinesisVideoWebRTCStorageEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

KinesisVideoWebRTCStorageClient::KinesisVideoWebRTCStorageClient(const AWSCredentials& credentials,
                                                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KinesisVideoWebRTCStorageErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<KinesisVideoWebRTCStorageEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

KinesisVideoWebRTCStorageClient::KinesisVideoWebRTCStorageClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KinesisVideoWebRTCStorageErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<KinesisVideoWebRTCStorageEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
KinesisVideoWebRTCStorageClient::~KinesisVideoWebRTCStorageClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<KinesisVideoWebRTCStorageEndpointProviderBase>& KinesisVideoWebRTCStorageClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void KinesisVideoWebRTCStorageClient::init(const KinesisVideoWebRTCStorage::KinesisVideoWebRTCStorageClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Kinesis Video WebRTC Storage");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, JoinStorageSession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, JoinStorageSession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".JoinStorageSession",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<JoinStorageSessionOutcome>(
    [&]()-> JoinStorageSessionOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, JoinStorageSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/joinStorageSession");
      return JoinStorageSessionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

