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
#include <aws/kinesisvideo/KinesisVideoClient.h>
#include <aws/kinesisvideo/KinesisVideoEndpointProvider.h>
#include <aws/kinesisvideo/KinesisVideoErrorMarshaller.h>
#include <aws/kinesisvideo/model/CreateSignalingChannelRequest.h>
#include <aws/kinesisvideo/model/CreateStreamRequest.h>
#include <aws/kinesisvideo/model/DeleteEdgeConfigurationRequest.h>
#include <aws/kinesisvideo/model/DeleteSignalingChannelRequest.h>
#include <aws/kinesisvideo/model/DeleteStreamRequest.h>
#include <aws/kinesisvideo/model/DescribeEdgeConfigurationRequest.h>
#include <aws/kinesisvideo/model/DescribeImageGenerationConfigurationRequest.h>
#include <aws/kinesisvideo/model/DescribeMappedResourceConfigurationRequest.h>
#include <aws/kinesisvideo/model/DescribeMediaStorageConfigurationRequest.h>
#include <aws/kinesisvideo/model/DescribeNotificationConfigurationRequest.h>
#include <aws/kinesisvideo/model/DescribeSignalingChannelRequest.h>
#include <aws/kinesisvideo/model/DescribeStreamRequest.h>
#include <aws/kinesisvideo/model/DescribeStreamStorageConfigurationRequest.h>
#include <aws/kinesisvideo/model/GetDataEndpointRequest.h>
#include <aws/kinesisvideo/model/GetSignalingChannelEndpointRequest.h>
#include <aws/kinesisvideo/model/ListEdgeAgentConfigurationsRequest.h>
#include <aws/kinesisvideo/model/ListSignalingChannelsRequest.h>
#include <aws/kinesisvideo/model/ListStreamsRequest.h>
#include <aws/kinesisvideo/model/ListTagsForResourceRequest.h>
#include <aws/kinesisvideo/model/ListTagsForStreamRequest.h>
#include <aws/kinesisvideo/model/StartEdgeConfigurationUpdateRequest.h>
#include <aws/kinesisvideo/model/TagResourceRequest.h>
#include <aws/kinesisvideo/model/TagStreamRequest.h>
#include <aws/kinesisvideo/model/UntagResourceRequest.h>
#include <aws/kinesisvideo/model/UntagStreamRequest.h>
#include <aws/kinesisvideo/model/UpdateDataRetentionRequest.h>
#include <aws/kinesisvideo/model/UpdateImageGenerationConfigurationRequest.h>
#include <aws/kinesisvideo/model/UpdateMediaStorageConfigurationRequest.h>
#include <aws/kinesisvideo/model/UpdateNotificationConfigurationRequest.h>
#include <aws/kinesisvideo/model/UpdateSignalingChannelRequest.h>
#include <aws/kinesisvideo/model/UpdateStreamRequest.h>
#include <aws/kinesisvideo/model/UpdateStreamStorageConfigurationRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::KinesisVideo;
using namespace Aws::KinesisVideo::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace KinesisVideo {
const char SERVICE_NAME[] = "kinesisvideo";
const char ALLOCATION_TAG[] = "KinesisVideoClient";
}  // namespace KinesisVideo
}  // namespace Aws
const char* KinesisVideoClient::GetServiceName() { return SERVICE_NAME; }
const char* KinesisVideoClient::GetAllocationTag() { return ALLOCATION_TAG; }

KinesisVideoClient::KinesisVideoClient(const KinesisVideo::KinesisVideoClientConfiguration& clientConfiguration,
                                       std::shared_ptr<KinesisVideoEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<KinesisVideoErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<KinesisVideoEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

KinesisVideoClient::KinesisVideoClient(const AWSCredentials& credentials,
                                       std::shared_ptr<KinesisVideoEndpointProviderBase> endpointProvider,
                                       const KinesisVideo::KinesisVideoClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<KinesisVideoErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<KinesisVideoEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

KinesisVideoClient::KinesisVideoClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       std::shared_ptr<KinesisVideoEndpointProviderBase> endpointProvider,
                                       const KinesisVideo::KinesisVideoClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<KinesisVideoErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<KinesisVideoEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
KinesisVideoClient::KinesisVideoClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<KinesisVideoErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<KinesisVideoEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

KinesisVideoClient::KinesisVideoClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<KinesisVideoErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<KinesisVideoEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

KinesisVideoClient::KinesisVideoClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<KinesisVideoErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<KinesisVideoEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
KinesisVideoClient::~KinesisVideoClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<KinesisVideoEndpointProviderBase>& KinesisVideoClient::accessEndpointProvider() { return m_endpointProvider; }

void KinesisVideoClient::init(const KinesisVideo::KinesisVideoClientConfiguration& config) {
  AWSClient::SetServiceClientName("Kinesis Video");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "kinesisvideo");
}

void KinesisVideoClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
KinesisVideoClient::InvokeOperationOutcome KinesisVideoClient::InvokeServiceOperation(
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

CreateSignalingChannelOutcome KinesisVideoClient::CreateSignalingChannel(const CreateSignalingChannelRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/createSignalingChannel");
  };

  return CreateSignalingChannelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateStreamOutcome KinesisVideoClient::CreateStream(const CreateStreamRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/createStream");
  };

  return CreateStreamOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteEdgeConfigurationOutcome KinesisVideoClient::DeleteEdgeConfiguration(const DeleteEdgeConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/deleteEdgeConfiguration");
  };

  return DeleteEdgeConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteSignalingChannelOutcome KinesisVideoClient::DeleteSignalingChannel(const DeleteSignalingChannelRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/deleteSignalingChannel");
  };

  return DeleteSignalingChannelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteStreamOutcome KinesisVideoClient::DeleteStream(const DeleteStreamRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/deleteStream");
  };

  return DeleteStreamOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeEdgeConfigurationOutcome KinesisVideoClient::DescribeEdgeConfiguration(const DescribeEdgeConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/describeEdgeConfiguration");
  };

  return DescribeEdgeConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeImageGenerationConfigurationOutcome KinesisVideoClient::DescribeImageGenerationConfiguration(
    const DescribeImageGenerationConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/describeImageGenerationConfiguration");
  };

  return DescribeImageGenerationConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeMappedResourceConfigurationOutcome KinesisVideoClient::DescribeMappedResourceConfiguration(
    const DescribeMappedResourceConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/describeMappedResourceConfiguration");
  };

  return DescribeMappedResourceConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeMediaStorageConfigurationOutcome KinesisVideoClient::DescribeMediaStorageConfiguration(
    const DescribeMediaStorageConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/describeMediaStorageConfiguration");
  };

  return DescribeMediaStorageConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeNotificationConfigurationOutcome KinesisVideoClient::DescribeNotificationConfiguration(
    const DescribeNotificationConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/describeNotificationConfiguration");
  };

  return DescribeNotificationConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeSignalingChannelOutcome KinesisVideoClient::DescribeSignalingChannel(const DescribeSignalingChannelRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/describeSignalingChannel");
  };

  return DescribeSignalingChannelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeStreamOutcome KinesisVideoClient::DescribeStream(const DescribeStreamRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/describeStream");
  };

  return DescribeStreamOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeStreamStorageConfigurationOutcome KinesisVideoClient::DescribeStreamStorageConfiguration(
    const DescribeStreamStorageConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/describeStreamStorageConfiguration");
  };

  return DescribeStreamStorageConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDataEndpointOutcome KinesisVideoClient::GetDataEndpoint(const GetDataEndpointRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/getDataEndpoint");
  };

  return GetDataEndpointOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetSignalingChannelEndpointOutcome KinesisVideoClient::GetSignalingChannelEndpoint(
    const GetSignalingChannelEndpointRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/getSignalingChannelEndpoint");
  };

  return GetSignalingChannelEndpointOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListEdgeAgentConfigurationsOutcome KinesisVideoClient::ListEdgeAgentConfigurations(
    const ListEdgeAgentConfigurationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/listEdgeAgentConfigurations");
  };

  return ListEdgeAgentConfigurationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListSignalingChannelsOutcome KinesisVideoClient::ListSignalingChannels(const ListSignalingChannelsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/listSignalingChannels");
  };

  return ListSignalingChannelsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListStreamsOutcome KinesisVideoClient::ListStreams(const ListStreamsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/listStreams");
  };

  return ListStreamsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome KinesisVideoClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListTagsForResource");
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForStreamOutcome KinesisVideoClient::ListTagsForStream(const ListTagsForStreamRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/listTagsForStream");
  };

  return ListTagsForStreamOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartEdgeConfigurationUpdateOutcome KinesisVideoClient::StartEdgeConfigurationUpdate(
    const StartEdgeConfigurationUpdateRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/startEdgeConfigurationUpdate");
  };

  return StartEdgeConfigurationUpdateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome KinesisVideoClient::TagResource(const TagResourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/TagResource");
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TagStreamOutcome KinesisVideoClient::TagStream(const TagStreamRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tagStream");
  };

  return TagStreamOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome KinesisVideoClient::UntagResource(const UntagResourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/UntagResource");
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagStreamOutcome KinesisVideoClient::UntagStream(const UntagStreamRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/untagStream");
  };

  return UntagStreamOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateDataRetentionOutcome KinesisVideoClient::UpdateDataRetention(const UpdateDataRetentionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/updateDataRetention");
  };

  return UpdateDataRetentionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateImageGenerationConfigurationOutcome KinesisVideoClient::UpdateImageGenerationConfiguration(
    const UpdateImageGenerationConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/updateImageGenerationConfiguration");
  };

  return UpdateImageGenerationConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateMediaStorageConfigurationOutcome KinesisVideoClient::UpdateMediaStorageConfiguration(
    const UpdateMediaStorageConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/updateMediaStorageConfiguration");
  };

  return UpdateMediaStorageConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateNotificationConfigurationOutcome KinesisVideoClient::UpdateNotificationConfiguration(
    const UpdateNotificationConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/updateNotificationConfiguration");
  };

  return UpdateNotificationConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateSignalingChannelOutcome KinesisVideoClient::UpdateSignalingChannel(const UpdateSignalingChannelRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/updateSignalingChannel");
  };

  return UpdateSignalingChannelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateStreamOutcome KinesisVideoClient::UpdateStream(const UpdateStreamRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/updateStream");
  };

  return UpdateStreamOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateStreamStorageConfigurationOutcome KinesisVideoClient::UpdateStreamStorageConfiguration(
    const UpdateStreamStorageConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/updateStreamStorageConfiguration");
  };

  return UpdateStreamStorageConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}
